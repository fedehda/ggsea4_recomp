// DolRecomp output
#include "../generated.h"

static void loop_7F1A927C(CPUState* ctx) {
label_7F1A927C:
    ctx->downcount -= 14;
    // 7F1A927C: srawi r6, r5, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[5];
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

    // 7F1A9280: addi    r0, r3, 160
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(160);

    // 7F1A9284: addze  r8, r6
    {
        u32 a = ctx->gpr[6];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F1A9288: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

    // 7F1A928C: srawi r6, r4, 8
    {
        u32 sh = 8u;
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

    // 7F1A9290: addi    r4, r4, 63
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(63);

    // 7F1A9294: addze  r6, r6
    {
        u32 a = ctx->gpr[6];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F1A9298: rlwinm r7, r8, 11, 0, 20
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 11u) & 0xFFFFF800u;
    }

    // 7F1A929C: rlwinm r6, r6, 5, 0, 26
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 5u) & 0xFFFFFFE0u;
    }

    // 7F1A92A0: addi    r5, r5, 31
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31);

    // 7F1A92A4: or   r6, r8, r6
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[6];
    }

    // 7F1A92A8: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

    ctx->pc = 0x7F1A92ACu;
    // 7F1A92AC: sthx    r6, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    // 7F1A92B0: bc    16, 0, 0x7F1A927C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A927Cu;
                return;
            }
            goto label_7F1A927C;
        }
    }

    ctx->pc = 0x7F1A92B4u;
}

static void loop_7F1AA358(CPUState* ctx) {
label_7F1AA358:
    ctx->downcount -= 11;
    ctx->pc = 0x7F1AA358u;
    // 7F1AA358: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA35Cu;
    // 7F1AA35C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA360u;
    // 7F1AA360: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA364u;
    // 7F1AA364: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA368u;
    // 7F1AA368: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA36Cu;
    // 7F1AA36C: stw     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA370u;
    // 7F1AA370: sth     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA374u;
    // 7F1AA374: sth     r3, 26(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA378u;
    // 7F1AA378: sth     r3, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    // 7F1AA37C: addi    r5, r5, 96
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(96);

    // 7F1AA380: bc    16, 0, 0x7F1AA358
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA358u;
                return;
            }
            goto label_7F1AA358;
        }
    }

    ctx->pc = 0x7F1AA384u;
}

static void loop_7F1AA714(CPUState* ctx) {
label_7F1AA714:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AA714u;
    // 7F1AA714: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AA718u;
    // 7F1AA718: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AA71Cu;
    // 7F1AA71C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA720u;
    // 7F1AA720: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AA724: bc    16, 0, 0x7F1AA714
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA714u;
                return;
            }
            goto label_7F1AA714;
        }
    }

    ctx->pc = 0x7F1AA728u;
}

static void loop_7F1AA768(CPUState* ctx) {
label_7F1AA768:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AA768u;
    // 7F1AA768: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AA76Cu;
    // 7F1AA76C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AA770u;
    // 7F1AA770: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA774u;
    // 7F1AA774: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AA778: bc    16, 0, 0x7F1AA768
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA768u;
                return;
            }
            goto label_7F1AA768;
        }
    }

    ctx->pc = 0x7F1AA77Cu;
}

static void loop_7F1AA838(CPUState* ctx) {
label_7F1AA838:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AA838u;
    // 7F1AA838: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AA83Cu;
    // 7F1AA83C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AA840u;
    // 7F1AA840: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA844u;
    // 7F1AA844: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AA848: bc    16, 0, 0x7F1AA838
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA838u;
                return;
            }
            goto label_7F1AA838;
        }
    }

    ctx->pc = 0x7F1AA84Cu;
}

static void loop_7F1AA85C(CPUState* ctx) {
label_7F1AA85C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AA85Cu;
    // 7F1AA85C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AA860u;
    // 7F1AA860: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AA864u;
    // 7F1AA864: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AA868u;
    // 7F1AA868: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AA86C: bc    16, 0, 0x7F1AA85C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA85Cu;
                return;
            }
            goto label_7F1AA85C;
        }
    }

    ctx->pc = 0x7F1AA870u;
}

static void loop_7F1AAA4C(CPUState* ctx) {
label_7F1AAA4C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1AAA4Cu;
    // 7F1AAA4C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AAA50u;
    // 7F1AAA50: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AAA54u;
    // 7F1AAA54: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AAA58u;
    // 7F1AAA58: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F1AAA5C: bc    16, 0, 0x7F1AAA4C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AAA4Cu;
                return;
            }
            goto label_7F1AAA4C;
        }
    }

    ctx->pc = 0x7F1AAA60u;
}

static void loop_7F1ABE0C(CPUState* ctx) {
label_7F1ABE0C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1ABE0Cu;
    // 7F1ABE0C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1ABE10u;
    // 7F1ABE10: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1ABE14u;
    // 7F1ABE14: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1ABE18u;
    // 7F1ABE18: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F1ABE1C: bc    16, 0, 0x7F1ABE0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABE0Cu;
                return;
            }
            goto label_7F1ABE0C;
        }
    }

    ctx->pc = 0x7F1ABE20u;
}

static void loop_7F1ABFFC(CPUState* ctx) {
label_7F1ABFFC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1ABFFCu;
    // 7F1ABFFC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AC000u;
    // 7F1AC000: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1AC004u;
    // 7F1AC004: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1AC008u;
    // 7F1AC008: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1AC00C: bc    16, 0, 0x7F1ABFFC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABFFCu;
                return;
            }
            goto label_7F1ABFFC;
        }
    }

    ctx->pc = 0x7F1AC010u;
}

void func_7F1A80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1A80ECu: goto label_7F1A80EC;
    case 0x7F1A80F0u: goto label_7F1A80F0;
    case 0x7F1A80F4u: goto label_7F1A80F4;
    case 0x7F1A80F8u: goto label_7F1A80F8;
    case 0x7F1A80FCu: goto label_7F1A80FC;
    case 0x7F1A8100u: goto label_7F1A8100;
    case 0x7F1A8104u: goto label_7F1A8104;
    case 0x7F1A8108u: goto label_7F1A8108;
    case 0x7F1A810Cu: goto label_7F1A810C;
    case 0x7F1A8110u: goto label_7F1A8110;
    case 0x7F1A8114u: goto label_7F1A8114;
    case 0x7F1A8118u: goto label_7F1A8118;
    case 0x7F1A811Cu: goto label_7F1A811C;
    case 0x7F1A8120u: goto label_7F1A8120;
    case 0x7F1A8124u: goto label_7F1A8124;
    case 0x7F1A8128u: goto label_7F1A8128;
    case 0x7F1A812Cu: goto label_7F1A812C;
    case 0x7F1A8130u: goto label_7F1A8130;
    case 0x7F1A8134u: goto label_7F1A8134;
    case 0x7F1A8138u: goto label_7F1A8138;
    case 0x7F1A813Cu: goto label_7F1A813C;
    case 0x7F1A8140u: goto label_7F1A8140;
    case 0x7F1A8144u: goto label_7F1A8144;
    case 0x7F1A8148u: goto label_7F1A8148;
    case 0x7F1A814Cu: goto label_7F1A814C;
    case 0x7F1A8150u: goto label_7F1A8150;
    case 0x7F1A8154u: goto label_7F1A8154;
    case 0x7F1A8158u: goto label_7F1A8158;
    case 0x7F1A815Cu: goto label_7F1A815C;
    case 0x7F1A8160u: goto label_7F1A8160;
    case 0x7F1A8164u: goto label_7F1A8164;
    case 0x7F1A8168u: goto label_7F1A8168;
    case 0x7F1A816Cu: goto label_7F1A816C;
    case 0x7F1A8170u: goto label_7F1A8170;
    case 0x7F1A8174u: goto label_7F1A8174;
    case 0x7F1A8178u: goto label_7F1A8178;
    case 0x7F1A817Cu: goto label_7F1A817C;
    case 0x7F1A8180u: goto label_7F1A8180;
    case 0x7F1A8184u: goto label_7F1A8184;
    case 0x7F1A8188u: goto label_7F1A8188;
    case 0x7F1A818Cu: goto label_7F1A818C;
    case 0x7F1A8190u: goto label_7F1A8190;
    case 0x7F1A8194u: goto label_7F1A8194;
    case 0x7F1A8198u: goto label_7F1A8198;
    case 0x7F1A819Cu: goto label_7F1A819C;
    case 0x7F1A81A0u: goto label_7F1A81A0;
    case 0x7F1A81A4u: goto label_7F1A81A4;
    case 0x7F1A81A8u: goto label_7F1A81A8;
    case 0x7F1A81ACu: goto label_7F1A81AC;
    case 0x7F1A81B0u: goto label_7F1A81B0;
    case 0x7F1A81B4u: goto label_7F1A81B4;
    case 0x7F1A81B8u: goto label_7F1A81B8;
    case 0x7F1A81BCu: goto label_7F1A81BC;
    case 0x7F1A81C0u: goto label_7F1A81C0;
    case 0x7F1A81C4u: goto label_7F1A81C4;
    case 0x7F1A81C8u: goto label_7F1A81C8;
    case 0x7F1A81CCu: goto label_7F1A81CC;
    case 0x7F1A81D0u: goto label_7F1A81D0;
    case 0x7F1A81D4u: goto label_7F1A81D4;
    case 0x7F1A81D8u: goto label_7F1A81D8;
    case 0x7F1A81DCu: goto label_7F1A81DC;
    case 0x7F1A81E0u: goto label_7F1A81E0;
    case 0x7F1A81E4u: goto label_7F1A81E4;
    case 0x7F1A81E8u: goto label_7F1A81E8;
    case 0x7F1A81ECu: goto label_7F1A81EC;
    case 0x7F1A81F0u: goto label_7F1A81F0;
    case 0x7F1A81F4u: goto label_7F1A81F4;
    case 0x7F1A81F8u: goto label_7F1A81F8;
    case 0x7F1A81FCu: goto label_7F1A81FC;
    case 0x7F1A8200u: goto label_7F1A8200;
    case 0x7F1A8204u: goto label_7F1A8204;
    case 0x7F1A8208u: goto label_7F1A8208;
    case 0x7F1A820Cu: goto label_7F1A820C;
    case 0x7F1A8210u: goto label_7F1A8210;
    case 0x7F1A8214u: goto label_7F1A8214;
    case 0x7F1A8218u: goto label_7F1A8218;
    case 0x7F1A821Cu: goto label_7F1A821C;
    case 0x7F1A8220u: goto label_7F1A8220;
    case 0x7F1A8224u: goto label_7F1A8224;
    case 0x7F1A8228u: goto label_7F1A8228;
    case 0x7F1A822Cu: goto label_7F1A822C;
    case 0x7F1A8230u: goto label_7F1A8230;
    case 0x7F1A8234u: goto label_7F1A8234;
    case 0x7F1A8238u: goto label_7F1A8238;
    case 0x7F1A823Cu: goto label_7F1A823C;
    case 0x7F1A8240u: goto label_7F1A8240;
    case 0x7F1A8244u: goto label_7F1A8244;
    case 0x7F1A8248u: goto label_7F1A8248;
    case 0x7F1A824Cu: goto label_7F1A824C;
    case 0x7F1A8250u: goto label_7F1A8250;
    case 0x7F1A8254u: goto label_7F1A8254;
    case 0x7F1A8258u: goto label_7F1A8258;
    case 0x7F1A825Cu: goto label_7F1A825C;
    case 0x7F1A8260u: goto label_7F1A8260;
    case 0x7F1A8264u: goto label_7F1A8264;
    case 0x7F1A8268u: goto label_7F1A8268;
    case 0x7F1A826Cu: goto label_7F1A826C;
    case 0x7F1A8270u: goto label_7F1A8270;
    case 0x7F1A8274u: goto label_7F1A8274;
    case 0x7F1A8278u: goto label_7F1A8278;
    case 0x7F1A827Cu: goto label_7F1A827C;
    case 0x7F1A8280u: goto label_7F1A8280;
    case 0x7F1A8284u: goto label_7F1A8284;
    case 0x7F1A8288u: goto label_7F1A8288;
    case 0x7F1A828Cu: goto label_7F1A828C;
    case 0x7F1A8290u: goto label_7F1A8290;
    case 0x7F1A8294u: goto label_7F1A8294;
    case 0x7F1A8298u: goto label_7F1A8298;
    case 0x7F1A829Cu: goto label_7F1A829C;
    case 0x7F1A82A0u: goto label_7F1A82A0;
    case 0x7F1A82A4u: goto label_7F1A82A4;
    case 0x7F1A82A8u: goto label_7F1A82A8;
    case 0x7F1A82ACu: goto label_7F1A82AC;
    case 0x7F1A82B0u: goto label_7F1A82B0;
    case 0x7F1A82B4u: goto label_7F1A82B4;
    case 0x7F1A82B8u: goto label_7F1A82B8;
    case 0x7F1A82BCu: goto label_7F1A82BC;
    case 0x7F1A82C0u: goto label_7F1A82C0;
    case 0x7F1A82C4u: goto label_7F1A82C4;
    case 0x7F1A82C8u: goto label_7F1A82C8;
    case 0x7F1A82CCu: goto label_7F1A82CC;
    case 0x7F1A82D0u: goto label_7F1A82D0;
    case 0x7F1A82D4u: goto label_7F1A82D4;
    case 0x7F1A82D8u: goto label_7F1A82D8;
    case 0x7F1A82DCu: goto label_7F1A82DC;
    case 0x7F1A82E0u: goto label_7F1A82E0;
    case 0x7F1A82E4u: goto label_7F1A82E4;
    case 0x7F1A82E8u: goto label_7F1A82E8;
    case 0x7F1A82ECu: goto label_7F1A82EC;
    case 0x7F1A82F0u: goto label_7F1A82F0;
    case 0x7F1A82F4u: goto label_7F1A82F4;
    case 0x7F1A82F8u: goto label_7F1A82F8;
    case 0x7F1A82FCu: goto label_7F1A82FC;
    case 0x7F1A8300u: goto label_7F1A8300;
    case 0x7F1A8304u: goto label_7F1A8304;
    case 0x7F1A8308u: goto label_7F1A8308;
    case 0x7F1A830Cu: goto label_7F1A830C;
    case 0x7F1A8310u: goto label_7F1A8310;
    case 0x7F1A8314u: goto label_7F1A8314;
    case 0x7F1A8318u: goto label_7F1A8318;
    case 0x7F1A831Cu: goto label_7F1A831C;
    case 0x7F1A8320u: goto label_7F1A8320;
    case 0x7F1A8324u: goto label_7F1A8324;
    case 0x7F1A8328u: goto label_7F1A8328;
    case 0x7F1A832Cu: goto label_7F1A832C;
    case 0x7F1A8330u: goto label_7F1A8330;
    case 0x7F1A8334u: goto label_7F1A8334;
    case 0x7F1A8338u: goto label_7F1A8338;
    case 0x7F1A833Cu: goto label_7F1A833C;
    case 0x7F1A8340u: goto label_7F1A8340;
    case 0x7F1A8344u: goto label_7F1A8344;
    case 0x7F1A8348u: goto label_7F1A8348;
    case 0x7F1A834Cu: goto label_7F1A834C;
    case 0x7F1A8350u: goto label_7F1A8350;
    case 0x7F1A8354u: goto label_7F1A8354;
    case 0x7F1A8358u: goto label_7F1A8358;
    case 0x7F1A835Cu: goto label_7F1A835C;
    case 0x7F1A8360u: goto label_7F1A8360;
    case 0x7F1A8364u: goto label_7F1A8364;
    case 0x7F1A8368u: goto label_7F1A8368;
    case 0x7F1A836Cu: goto label_7F1A836C;
    case 0x7F1A8370u: goto label_7F1A8370;
    case 0x7F1A8374u: goto label_7F1A8374;
    case 0x7F1A8378u: goto label_7F1A8378;
    case 0x7F1A837Cu: goto label_7F1A837C;
    case 0x7F1A8380u: goto label_7F1A8380;
    case 0x7F1A8384u: goto label_7F1A8384;
    case 0x7F1A8388u: goto label_7F1A8388;
    case 0x7F1A838Cu: goto label_7F1A838C;
    case 0x7F1A8390u: goto label_7F1A8390;
    case 0x7F1A8394u: goto label_7F1A8394;
    case 0x7F1A8398u: goto label_7F1A8398;
    case 0x7F1A839Cu: goto label_7F1A839C;
    case 0x7F1A83A0u: goto label_7F1A83A0;
    case 0x7F1A83A4u: goto label_7F1A83A4;
    case 0x7F1A83A8u: goto label_7F1A83A8;
    case 0x7F1A83ACu: goto label_7F1A83AC;
    case 0x7F1A83B0u: goto label_7F1A83B0;
    case 0x7F1A83B4u: goto label_7F1A83B4;
    case 0x7F1A83B8u: goto label_7F1A83B8;
    case 0x7F1A83BCu: goto label_7F1A83BC;
    case 0x7F1A83C0u: goto label_7F1A83C0;
    case 0x7F1A83C4u: goto label_7F1A83C4;
    case 0x7F1A83C8u: goto label_7F1A83C8;
    case 0x7F1A83CCu: goto label_7F1A83CC;
    case 0x7F1A83D0u: goto label_7F1A83D0;
    case 0x7F1A83D4u: goto label_7F1A83D4;
    case 0x7F1A83D8u: goto label_7F1A83D8;
    case 0x7F1A83DCu: goto label_7F1A83DC;
    case 0x7F1A83E0u: goto label_7F1A83E0;
    case 0x7F1A83E4u: goto label_7F1A83E4;
    case 0x7F1A83E8u: goto label_7F1A83E8;
    case 0x7F1A83ECu: goto label_7F1A83EC;
    case 0x7F1A83F0u: goto label_7F1A83F0;
    case 0x7F1A83F4u: goto label_7F1A83F4;
    case 0x7F1A83F8u: goto label_7F1A83F8;
    case 0x7F1A83FCu: goto label_7F1A83FC;
    case 0x7F1A8400u: goto label_7F1A8400;
    case 0x7F1A8404u: goto label_7F1A8404;
    case 0x7F1A8408u: goto label_7F1A8408;
    case 0x7F1A840Cu: goto label_7F1A840C;
    case 0x7F1A8410u: goto label_7F1A8410;
    case 0x7F1A8414u: goto label_7F1A8414;
    case 0x7F1A8418u: goto label_7F1A8418;
    case 0x7F1A841Cu: goto label_7F1A841C;
    case 0x7F1A8420u: goto label_7F1A8420;
    case 0x7F1A8424u: goto label_7F1A8424;
    case 0x7F1A8428u: goto label_7F1A8428;
    case 0x7F1A842Cu: goto label_7F1A842C;
    case 0x7F1A8430u: goto label_7F1A8430;
    case 0x7F1A8434u: goto label_7F1A8434;
    case 0x7F1A8438u: goto label_7F1A8438;
    case 0x7F1A843Cu: goto label_7F1A843C;
    case 0x7F1A8440u: goto label_7F1A8440;
    case 0x7F1A8444u: goto label_7F1A8444;
    case 0x7F1A8448u: goto label_7F1A8448;
    case 0x7F1A844Cu: goto label_7F1A844C;
    case 0x7F1A8450u: goto label_7F1A8450;
    case 0x7F1A8454u: goto label_7F1A8454;
    case 0x7F1A8458u: goto label_7F1A8458;
    case 0x7F1A845Cu: goto label_7F1A845C;
    case 0x7F1A8460u: goto label_7F1A8460;
    case 0x7F1A8464u: goto label_7F1A8464;
    case 0x7F1A8468u: goto label_7F1A8468;
    case 0x7F1A846Cu: goto label_7F1A846C;
    case 0x7F1A8470u: goto label_7F1A8470;
    case 0x7F1A8474u: goto label_7F1A8474;
    case 0x7F1A8478u: goto label_7F1A8478;
    case 0x7F1A847Cu: goto label_7F1A847C;
    case 0x7F1A8480u: goto label_7F1A8480;
    case 0x7F1A8484u: goto label_7F1A8484;
    case 0x7F1A8488u: goto label_7F1A8488;
    case 0x7F1A848Cu: goto label_7F1A848C;
    case 0x7F1A8490u: goto label_7F1A8490;
    case 0x7F1A8494u: goto label_7F1A8494;
    case 0x7F1A8498u: goto label_7F1A8498;
    case 0x7F1A849Cu: goto label_7F1A849C;
    case 0x7F1A84A0u: goto label_7F1A84A0;
    case 0x7F1A84A4u: goto label_7F1A84A4;
    case 0x7F1A84A8u: goto label_7F1A84A8;
    case 0x7F1A84ACu: goto label_7F1A84AC;
    case 0x7F1A84B0u: goto label_7F1A84B0;
    case 0x7F1A84B4u: goto label_7F1A84B4;
    case 0x7F1A84B8u: goto label_7F1A84B8;
    case 0x7F1A84BCu: goto label_7F1A84BC;
    case 0x7F1A84C0u: goto label_7F1A84C0;
    case 0x7F1A84C4u: goto label_7F1A84C4;
    case 0x7F1A84C8u: goto label_7F1A84C8;
    case 0x7F1A84CCu: goto label_7F1A84CC;
    case 0x7F1A84D0u: goto label_7F1A84D0;
    case 0x7F1A84D4u: goto label_7F1A84D4;
    case 0x7F1A84D8u: goto label_7F1A84D8;
    case 0x7F1A84DCu: goto label_7F1A84DC;
    case 0x7F1A84E0u: goto label_7F1A84E0;
    case 0x7F1A84E4u: goto label_7F1A84E4;
    case 0x7F1A84E8u: goto label_7F1A84E8;
    case 0x7F1A84ECu: goto label_7F1A84EC;
    case 0x7F1A84F0u: goto label_7F1A84F0;
    case 0x7F1A84F4u: goto label_7F1A84F4;
    case 0x7F1A84F8u: goto label_7F1A84F8;
    case 0x7F1A84FCu: goto label_7F1A84FC;
    case 0x7F1A8500u: goto label_7F1A8500;
    case 0x7F1A8504u: goto label_7F1A8504;
    case 0x7F1A8508u: goto label_7F1A8508;
    case 0x7F1A850Cu: goto label_7F1A850C;
    case 0x7F1A8510u: goto label_7F1A8510;
    case 0x7F1A8514u: goto label_7F1A8514;
    case 0x7F1A8518u: goto label_7F1A8518;
    case 0x7F1A851Cu: goto label_7F1A851C;
    case 0x7F1A8520u: goto label_7F1A8520;
    case 0x7F1A8524u: goto label_7F1A8524;
    case 0x7F1A8528u: goto label_7F1A8528;
    case 0x7F1A852Cu: goto label_7F1A852C;
    case 0x7F1A8530u: goto label_7F1A8530;
    case 0x7F1A8534u: goto label_7F1A8534;
    case 0x7F1A8538u: goto label_7F1A8538;
    case 0x7F1A853Cu: goto label_7F1A853C;
    case 0x7F1A8540u: goto label_7F1A8540;
    case 0x7F1A8544u: goto label_7F1A8544;
    case 0x7F1A8548u: goto label_7F1A8548;
    case 0x7F1A854Cu: goto label_7F1A854C;
    case 0x7F1A8550u: goto label_7F1A8550;
    case 0x7F1A8554u: goto label_7F1A8554;
    case 0x7F1A8558u: goto label_7F1A8558;
    case 0x7F1A855Cu: goto label_7F1A855C;
    case 0x7F1A8560u: goto label_7F1A8560;
    case 0x7F1A8564u: goto label_7F1A8564;
    case 0x7F1A8568u: goto label_7F1A8568;
    case 0x7F1A856Cu: goto label_7F1A856C;
    case 0x7F1A8570u: goto label_7F1A8570;
    case 0x7F1A8574u: goto label_7F1A8574;
    case 0x7F1A8578u: goto label_7F1A8578;
    case 0x7F1A857Cu: goto label_7F1A857C;
    case 0x7F1A8580u: goto label_7F1A8580;
    case 0x7F1A8584u: goto label_7F1A8584;
    case 0x7F1A8588u: goto label_7F1A8588;
    case 0x7F1A858Cu: goto label_7F1A858C;
    case 0x7F1A8590u: goto label_7F1A8590;
    case 0x7F1A8594u: goto label_7F1A8594;
    case 0x7F1A8598u: goto label_7F1A8598;
    case 0x7F1A859Cu: goto label_7F1A859C;
    case 0x7F1A85A0u: goto label_7F1A85A0;
    case 0x7F1A85A4u: goto label_7F1A85A4;
    case 0x7F1A85A8u: goto label_7F1A85A8;
    case 0x7F1A85ACu: goto label_7F1A85AC;
    case 0x7F1A85B0u: goto label_7F1A85B0;
    case 0x7F1A85B4u: goto label_7F1A85B4;
    case 0x7F1A85B8u: goto label_7F1A85B8;
    case 0x7F1A85BCu: goto label_7F1A85BC;
    case 0x7F1A85C0u: goto label_7F1A85C0;
    case 0x7F1A85C4u: goto label_7F1A85C4;
    case 0x7F1A85C8u: goto label_7F1A85C8;
    case 0x7F1A85CCu: goto label_7F1A85CC;
    case 0x7F1A85D0u: goto label_7F1A85D0;
    case 0x7F1A85D4u: goto label_7F1A85D4;
    case 0x7F1A85D8u: goto label_7F1A85D8;
    case 0x7F1A85DCu: goto label_7F1A85DC;
    case 0x7F1A85E0u: goto label_7F1A85E0;
    case 0x7F1A85E4u: goto label_7F1A85E4;
    case 0x7F1A85E8u: goto label_7F1A85E8;
    case 0x7F1A85ECu: goto label_7F1A85EC;
    case 0x7F1A85F0u: goto label_7F1A85F0;
    case 0x7F1A85F4u: goto label_7F1A85F4;
    case 0x7F1A85F8u: goto label_7F1A85F8;
    case 0x7F1A85FCu: goto label_7F1A85FC;
    case 0x7F1A8600u: goto label_7F1A8600;
    case 0x7F1A8604u: goto label_7F1A8604;
    case 0x7F1A8608u: goto label_7F1A8608;
    case 0x7F1A860Cu: goto label_7F1A860C;
    case 0x7F1A8610u: goto label_7F1A8610;
    case 0x7F1A8614u: goto label_7F1A8614;
    case 0x7F1A8618u: goto label_7F1A8618;
    case 0x7F1A861Cu: goto label_7F1A861C;
    case 0x7F1A8620u: goto label_7F1A8620;
    case 0x7F1A8624u: goto label_7F1A8624;
    case 0x7F1A8628u: goto label_7F1A8628;
    case 0x7F1A862Cu: goto label_7F1A862C;
    case 0x7F1A8630u: goto label_7F1A8630;
    case 0x7F1A8634u: goto label_7F1A8634;
    case 0x7F1A8638u: goto label_7F1A8638;
    case 0x7F1A863Cu: goto label_7F1A863C;
    case 0x7F1A8640u: goto label_7F1A8640;
    case 0x7F1A8644u: goto label_7F1A8644;
    case 0x7F1A8648u: goto label_7F1A8648;
    case 0x7F1A864Cu: goto label_7F1A864C;
    case 0x7F1A8650u: goto label_7F1A8650;
    case 0x7F1A8654u: goto label_7F1A8654;
    case 0x7F1A8658u: goto label_7F1A8658;
    case 0x7F1A865Cu: goto label_7F1A865C;
    case 0x7F1A8660u: goto label_7F1A8660;
    case 0x7F1A8664u: goto label_7F1A8664;
    case 0x7F1A8668u: goto label_7F1A8668;
    case 0x7F1A866Cu: goto label_7F1A866C;
    case 0x7F1A8670u: goto label_7F1A8670;
    case 0x7F1A8674u: goto label_7F1A8674;
    case 0x7F1A8678u: goto label_7F1A8678;
    case 0x7F1A867Cu: goto label_7F1A867C;
    case 0x7F1A8680u: goto label_7F1A8680;
    case 0x7F1A8684u: goto label_7F1A8684;
    case 0x7F1A8688u: goto label_7F1A8688;
    case 0x7F1A868Cu: goto label_7F1A868C;
    case 0x7F1A8690u: goto label_7F1A8690;
    case 0x7F1A8694u: goto label_7F1A8694;
    case 0x7F1A8698u: goto label_7F1A8698;
    case 0x7F1A869Cu: goto label_7F1A869C;
    case 0x7F1A86A0u: goto label_7F1A86A0;
    case 0x7F1A86A4u: goto label_7F1A86A4;
    case 0x7F1A86A8u: goto label_7F1A86A8;
    case 0x7F1A86ACu: goto label_7F1A86AC;
    case 0x7F1A86B0u: goto label_7F1A86B0;
    case 0x7F1A86B4u: goto label_7F1A86B4;
    case 0x7F1A86B8u: goto label_7F1A86B8;
    case 0x7F1A86BCu: goto label_7F1A86BC;
    case 0x7F1A86C0u: goto label_7F1A86C0;
    case 0x7F1A86C4u: goto label_7F1A86C4;
    case 0x7F1A86C8u: goto label_7F1A86C8;
    case 0x7F1A86CCu: goto label_7F1A86CC;
    case 0x7F1A86D0u: goto label_7F1A86D0;
    case 0x7F1A86D4u: goto label_7F1A86D4;
    case 0x7F1A86D8u: goto label_7F1A86D8;
    case 0x7F1A86DCu: goto label_7F1A86DC;
    case 0x7F1A86E0u: goto label_7F1A86E0;
    case 0x7F1A86E4u: goto label_7F1A86E4;
    case 0x7F1A86E8u: goto label_7F1A86E8;
    case 0x7F1A86ECu: goto label_7F1A86EC;
    case 0x7F1A86F0u: goto label_7F1A86F0;
    case 0x7F1A86F4u: goto label_7F1A86F4;
    case 0x7F1A86F8u: goto label_7F1A86F8;
    case 0x7F1A86FCu: goto label_7F1A86FC;
    case 0x7F1A8700u: goto label_7F1A8700;
    case 0x7F1A8704u: goto label_7F1A8704;
    case 0x7F1A8708u: goto label_7F1A8708;
    case 0x7F1A870Cu: goto label_7F1A870C;
    case 0x7F1A8710u: goto label_7F1A8710;
    case 0x7F1A8714u: goto label_7F1A8714;
    case 0x7F1A8718u: goto label_7F1A8718;
    case 0x7F1A871Cu: goto label_7F1A871C;
    case 0x7F1A8720u: goto label_7F1A8720;
    case 0x7F1A8724u: goto label_7F1A8724;
    case 0x7F1A8728u: goto label_7F1A8728;
    case 0x7F1A872Cu: goto label_7F1A872C;
    case 0x7F1A8730u: goto label_7F1A8730;
    case 0x7F1A8734u: goto label_7F1A8734;
    case 0x7F1A8738u: goto label_7F1A8738;
    case 0x7F1A873Cu: goto label_7F1A873C;
    case 0x7F1A8740u: goto label_7F1A8740;
    case 0x7F1A8744u: goto label_7F1A8744;
    case 0x7F1A8748u: goto label_7F1A8748;
    case 0x7F1A874Cu: goto label_7F1A874C;
    case 0x7F1A8750u: goto label_7F1A8750;
    case 0x7F1A8754u: goto label_7F1A8754;
    case 0x7F1A8758u: goto label_7F1A8758;
    case 0x7F1A875Cu: goto label_7F1A875C;
    case 0x7F1A8760u: goto label_7F1A8760;
    case 0x7F1A8764u: goto label_7F1A8764;
    case 0x7F1A8768u: goto label_7F1A8768;
    case 0x7F1A876Cu: goto label_7F1A876C;
    case 0x7F1A8770u: goto label_7F1A8770;
    case 0x7F1A8774u: goto label_7F1A8774;
    case 0x7F1A8778u: goto label_7F1A8778;
    case 0x7F1A877Cu: goto label_7F1A877C;
    case 0x7F1A8780u: goto label_7F1A8780;
    case 0x7F1A8784u: goto label_7F1A8784;
    case 0x7F1A8788u: goto label_7F1A8788;
    case 0x7F1A878Cu: goto label_7F1A878C;
    case 0x7F1A8790u: goto label_7F1A8790;
    case 0x7F1A8794u: goto label_7F1A8794;
    case 0x7F1A8798u: goto label_7F1A8798;
    case 0x7F1A879Cu: goto label_7F1A879C;
    case 0x7F1A87A0u: goto label_7F1A87A0;
    case 0x7F1A87A4u: goto label_7F1A87A4;
    case 0x7F1A87A8u: goto label_7F1A87A8;
    case 0x7F1A87ACu: goto label_7F1A87AC;
    case 0x7F1A87B0u: goto label_7F1A87B0;
    case 0x7F1A87B4u: goto label_7F1A87B4;
    case 0x7F1A87B8u: goto label_7F1A87B8;
    case 0x7F1A87BCu: goto label_7F1A87BC;
    case 0x7F1A87C0u: goto label_7F1A87C0;
    case 0x7F1A87C4u: goto label_7F1A87C4;
    case 0x7F1A87C8u: goto label_7F1A87C8;
    case 0x7F1A87CCu: goto label_7F1A87CC;
    case 0x7F1A87D0u: goto label_7F1A87D0;
    case 0x7F1A87D4u: goto label_7F1A87D4;
    case 0x7F1A87D8u: goto label_7F1A87D8;
    case 0x7F1A87DCu: goto label_7F1A87DC;
    case 0x7F1A87E0u: goto label_7F1A87E0;
    case 0x7F1A87E4u: goto label_7F1A87E4;
    case 0x7F1A87E8u: goto label_7F1A87E8;
    case 0x7F1A87ECu: goto label_7F1A87EC;
    case 0x7F1A87F0u: goto label_7F1A87F0;
    case 0x7F1A87F4u: goto label_7F1A87F4;
    case 0x7F1A87F8u: goto label_7F1A87F8;
    case 0x7F1A87FCu: goto label_7F1A87FC;
    case 0x7F1A8800u: goto label_7F1A8800;
    case 0x7F1A8804u: goto label_7F1A8804;
    case 0x7F1A8808u: goto label_7F1A8808;
    case 0x7F1A880Cu: goto label_7F1A880C;
    case 0x7F1A8810u: goto label_7F1A8810;
    case 0x7F1A8814u: goto label_7F1A8814;
    case 0x7F1A8818u: goto label_7F1A8818;
    case 0x7F1A881Cu: goto label_7F1A881C;
    case 0x7F1A8820u: goto label_7F1A8820;
    case 0x7F1A8824u: goto label_7F1A8824;
    case 0x7F1A8828u: goto label_7F1A8828;
    case 0x7F1A882Cu: goto label_7F1A882C;
    case 0x7F1A8830u: goto label_7F1A8830;
    case 0x7F1A8834u: goto label_7F1A8834;
    case 0x7F1A8838u: goto label_7F1A8838;
    case 0x7F1A883Cu: goto label_7F1A883C;
    case 0x7F1A8840u: goto label_7F1A8840;
    case 0x7F1A8844u: goto label_7F1A8844;
    case 0x7F1A8848u: goto label_7F1A8848;
    case 0x7F1A884Cu: goto label_7F1A884C;
    case 0x7F1A8850u: goto label_7F1A8850;
    case 0x7F1A8854u: goto label_7F1A8854;
    case 0x7F1A8858u: goto label_7F1A8858;
    case 0x7F1A885Cu: goto label_7F1A885C;
    case 0x7F1A8860u: goto label_7F1A8860;
    case 0x7F1A8864u: goto label_7F1A8864;
    case 0x7F1A8868u: goto label_7F1A8868;
    case 0x7F1A886Cu: goto label_7F1A886C;
    case 0x7F1A8870u: goto label_7F1A8870;
    case 0x7F1A8874u: goto label_7F1A8874;
    case 0x7F1A8878u: goto label_7F1A8878;
    case 0x7F1A887Cu: goto label_7F1A887C;
    case 0x7F1A8880u: goto label_7F1A8880;
    case 0x7F1A8884u: goto label_7F1A8884;
    case 0x7F1A8888u: goto label_7F1A8888;
    case 0x7F1A888Cu: goto label_7F1A888C;
    case 0x7F1A8890u: goto label_7F1A8890;
    case 0x7F1A8894u: goto label_7F1A8894;
    case 0x7F1A8898u: goto label_7F1A8898;
    case 0x7F1A889Cu: goto label_7F1A889C;
    case 0x7F1A88A0u: goto label_7F1A88A0;
    case 0x7F1A88A4u: goto label_7F1A88A4;
    case 0x7F1A88A8u: goto label_7F1A88A8;
    case 0x7F1A88ACu: goto label_7F1A88AC;
    case 0x7F1A88B0u: goto label_7F1A88B0;
    case 0x7F1A88B4u: goto label_7F1A88B4;
    case 0x7F1A88B8u: goto label_7F1A88B8;
    case 0x7F1A88BCu: goto label_7F1A88BC;
    case 0x7F1A88C0u: goto label_7F1A88C0;
    case 0x7F1A88C4u: goto label_7F1A88C4;
    case 0x7F1A88C8u: goto label_7F1A88C8;
    case 0x7F1A88CCu: goto label_7F1A88CC;
    case 0x7F1A88D0u: goto label_7F1A88D0;
    case 0x7F1A88D4u: goto label_7F1A88D4;
    case 0x7F1A88D8u: goto label_7F1A88D8;
    case 0x7F1A88DCu: goto label_7F1A88DC;
    case 0x7F1A88E0u: goto label_7F1A88E0;
    case 0x7F1A88E4u: goto label_7F1A88E4;
    case 0x7F1A88E8u: goto label_7F1A88E8;
    case 0x7F1A88ECu: goto label_7F1A88EC;
    case 0x7F1A88F0u: goto label_7F1A88F0;
    case 0x7F1A88F4u: goto label_7F1A88F4;
    case 0x7F1A88F8u: goto label_7F1A88F8;
    case 0x7F1A88FCu: goto label_7F1A88FC;
    case 0x7F1A8900u: goto label_7F1A8900;
    case 0x7F1A8904u: goto label_7F1A8904;
    case 0x7F1A8908u: goto label_7F1A8908;
    case 0x7F1A890Cu: goto label_7F1A890C;
    case 0x7F1A8910u: goto label_7F1A8910;
    case 0x7F1A8914u: goto label_7F1A8914;
    case 0x7F1A8918u: goto label_7F1A8918;
    case 0x7F1A891Cu: goto label_7F1A891C;
    case 0x7F1A8920u: goto label_7F1A8920;
    case 0x7F1A8924u: goto label_7F1A8924;
    case 0x7F1A8928u: goto label_7F1A8928;
    case 0x7F1A892Cu: goto label_7F1A892C;
    case 0x7F1A8930u: goto label_7F1A8930;
    case 0x7F1A8934u: goto label_7F1A8934;
    case 0x7F1A8938u: goto label_7F1A8938;
    case 0x7F1A893Cu: goto label_7F1A893C;
    case 0x7F1A8940u: goto label_7F1A8940;
    case 0x7F1A8944u: goto label_7F1A8944;
    case 0x7F1A8948u: goto label_7F1A8948;
    case 0x7F1A894Cu: goto label_7F1A894C;
    case 0x7F1A8950u: goto label_7F1A8950;
    case 0x7F1A8954u: goto label_7F1A8954;
    case 0x7F1A8958u: goto label_7F1A8958;
    case 0x7F1A895Cu: goto label_7F1A895C;
    case 0x7F1A8960u: goto label_7F1A8960;
    case 0x7F1A8964u: goto label_7F1A8964;
    case 0x7F1A8968u: goto label_7F1A8968;
    case 0x7F1A896Cu: goto label_7F1A896C;
    case 0x7F1A8970u: goto label_7F1A8970;
    case 0x7F1A8974u: goto label_7F1A8974;
    case 0x7F1A8978u: goto label_7F1A8978;
    case 0x7F1A897Cu: goto label_7F1A897C;
    case 0x7F1A8980u: goto label_7F1A8980;
    case 0x7F1A8984u: goto label_7F1A8984;
    case 0x7F1A8988u: goto label_7F1A8988;
    case 0x7F1A898Cu: goto label_7F1A898C;
    case 0x7F1A8990u: goto label_7F1A8990;
    case 0x7F1A8994u: goto label_7F1A8994;
    case 0x7F1A8998u: goto label_7F1A8998;
    case 0x7F1A899Cu: goto label_7F1A899C;
    case 0x7F1A89A0u: goto label_7F1A89A0;
    case 0x7F1A89A4u: goto label_7F1A89A4;
    case 0x7F1A89A8u: goto label_7F1A89A8;
    case 0x7F1A89ACu: goto label_7F1A89AC;
    case 0x7F1A89B0u: goto label_7F1A89B0;
    case 0x7F1A89B4u: goto label_7F1A89B4;
    case 0x7F1A89B8u: goto label_7F1A89B8;
    case 0x7F1A89BCu: goto label_7F1A89BC;
    case 0x7F1A89C0u: goto label_7F1A89C0;
    case 0x7F1A89C4u: goto label_7F1A89C4;
    case 0x7F1A89C8u: goto label_7F1A89C8;
    case 0x7F1A89CCu: goto label_7F1A89CC;
    case 0x7F1A89D0u: goto label_7F1A89D0;
    case 0x7F1A89D4u: goto label_7F1A89D4;
    case 0x7F1A89D8u: goto label_7F1A89D8;
    case 0x7F1A89DCu: goto label_7F1A89DC;
    case 0x7F1A89E0u: goto label_7F1A89E0;
    case 0x7F1A89E4u: goto label_7F1A89E4;
    case 0x7F1A89E8u: goto label_7F1A89E8;
    case 0x7F1A89ECu: goto label_7F1A89EC;
    case 0x7F1A89F0u: goto label_7F1A89F0;
    case 0x7F1A89F4u: goto label_7F1A89F4;
    case 0x7F1A89F8u: goto label_7F1A89F8;
    case 0x7F1A89FCu: goto label_7F1A89FC;
    case 0x7F1A8A00u: goto label_7F1A8A00;
    case 0x7F1A8A04u: goto label_7F1A8A04;
    case 0x7F1A8A08u: goto label_7F1A8A08;
    case 0x7F1A8A0Cu: goto label_7F1A8A0C;
    case 0x7F1A8A10u: goto label_7F1A8A10;
    case 0x7F1A8A14u: goto label_7F1A8A14;
    case 0x7F1A8A18u: goto label_7F1A8A18;
    case 0x7F1A8A1Cu: goto label_7F1A8A1C;
    case 0x7F1A8A20u: goto label_7F1A8A20;
    case 0x7F1A8A24u: goto label_7F1A8A24;
    case 0x7F1A8A28u: goto label_7F1A8A28;
    case 0x7F1A8A2Cu: goto label_7F1A8A2C;
    case 0x7F1A8A30u: goto label_7F1A8A30;
    case 0x7F1A8A34u: goto label_7F1A8A34;
    case 0x7F1A8A38u: goto label_7F1A8A38;
    case 0x7F1A8A3Cu: goto label_7F1A8A3C;
    case 0x7F1A8A40u: goto label_7F1A8A40;
    case 0x7F1A8A44u: goto label_7F1A8A44;
    case 0x7F1A8A48u: goto label_7F1A8A48;
    case 0x7F1A8A4Cu: goto label_7F1A8A4C;
    case 0x7F1A8A50u: goto label_7F1A8A50;
    case 0x7F1A8A54u: goto label_7F1A8A54;
    case 0x7F1A8A58u: goto label_7F1A8A58;
    case 0x7F1A8A5Cu: goto label_7F1A8A5C;
    case 0x7F1A8A60u: goto label_7F1A8A60;
    case 0x7F1A8A64u: goto label_7F1A8A64;
    case 0x7F1A8A68u: goto label_7F1A8A68;
    case 0x7F1A8A6Cu: goto label_7F1A8A6C;
    case 0x7F1A8A70u: goto label_7F1A8A70;
    case 0x7F1A8A74u: goto label_7F1A8A74;
    case 0x7F1A8A78u: goto label_7F1A8A78;
    case 0x7F1A8A7Cu: goto label_7F1A8A7C;
    case 0x7F1A8A80u: goto label_7F1A8A80;
    case 0x7F1A8A84u: goto label_7F1A8A84;
    case 0x7F1A8A88u: goto label_7F1A8A88;
    case 0x7F1A8A8Cu: goto label_7F1A8A8C;
    case 0x7F1A8A90u: goto label_7F1A8A90;
    case 0x7F1A8A94u: goto label_7F1A8A94;
    case 0x7F1A8A98u: goto label_7F1A8A98;
    case 0x7F1A8A9Cu: goto label_7F1A8A9C;
    case 0x7F1A8AA0u: goto label_7F1A8AA0;
    case 0x7F1A8AA4u: goto label_7F1A8AA4;
    case 0x7F1A8AA8u: goto label_7F1A8AA8;
    case 0x7F1A8AACu: goto label_7F1A8AAC;
    case 0x7F1A8AB0u: goto label_7F1A8AB0;
    case 0x7F1A8AB4u: goto label_7F1A8AB4;
    case 0x7F1A8AB8u: goto label_7F1A8AB8;
    case 0x7F1A8ABCu: goto label_7F1A8ABC;
    case 0x7F1A8AC0u: goto label_7F1A8AC0;
    case 0x7F1A8AC4u: goto label_7F1A8AC4;
    case 0x7F1A8AC8u: goto label_7F1A8AC8;
    case 0x7F1A8ACCu: goto label_7F1A8ACC;
    case 0x7F1A8AD0u: goto label_7F1A8AD0;
    case 0x7F1A8AD4u: goto label_7F1A8AD4;
    case 0x7F1A8AD8u: goto label_7F1A8AD8;
    case 0x7F1A8ADCu: goto label_7F1A8ADC;
    case 0x7F1A8AE0u: goto label_7F1A8AE0;
    case 0x7F1A8AE4u: goto label_7F1A8AE4;
    case 0x7F1A8AE8u: goto label_7F1A8AE8;
    case 0x7F1A8AECu: goto label_7F1A8AEC;
    case 0x7F1A8AF0u: goto label_7F1A8AF0;
    case 0x7F1A8AF4u: goto label_7F1A8AF4;
    case 0x7F1A8AF8u: goto label_7F1A8AF8;
    case 0x7F1A8AFCu: goto label_7F1A8AFC;
    case 0x7F1A8B00u: goto label_7F1A8B00;
    case 0x7F1A8B04u: goto label_7F1A8B04;
    case 0x7F1A8B08u: goto label_7F1A8B08;
    case 0x7F1A8B0Cu: goto label_7F1A8B0C;
    case 0x7F1A8B10u: goto label_7F1A8B10;
    case 0x7F1A8B14u: goto label_7F1A8B14;
    case 0x7F1A8B18u: goto label_7F1A8B18;
    case 0x7F1A8B1Cu: goto label_7F1A8B1C;
    case 0x7F1A8B20u: goto label_7F1A8B20;
    case 0x7F1A8B24u: goto label_7F1A8B24;
    case 0x7F1A8B28u: goto label_7F1A8B28;
    case 0x7F1A8B2Cu: goto label_7F1A8B2C;
    case 0x7F1A8B30u: goto label_7F1A8B30;
    case 0x7F1A8B34u: goto label_7F1A8B34;
    case 0x7F1A8B38u: goto label_7F1A8B38;
    case 0x7F1A8B3Cu: goto label_7F1A8B3C;
    case 0x7F1A8B40u: goto label_7F1A8B40;
    case 0x7F1A8B44u: goto label_7F1A8B44;
    case 0x7F1A8B48u: goto label_7F1A8B48;
    case 0x7F1A8B4Cu: goto label_7F1A8B4C;
    case 0x7F1A8B50u: goto label_7F1A8B50;
    case 0x7F1A8B54u: goto label_7F1A8B54;
    case 0x7F1A8B58u: goto label_7F1A8B58;
    case 0x7F1A8B5Cu: goto label_7F1A8B5C;
    case 0x7F1A8B60u: goto label_7F1A8B60;
    case 0x7F1A8B64u: goto label_7F1A8B64;
    case 0x7F1A8B68u: goto label_7F1A8B68;
    case 0x7F1A8B6Cu: goto label_7F1A8B6C;
    case 0x7F1A8B70u: goto label_7F1A8B70;
    case 0x7F1A8B74u: goto label_7F1A8B74;
    case 0x7F1A8B78u: goto label_7F1A8B78;
    case 0x7F1A8B7Cu: goto label_7F1A8B7C;
    case 0x7F1A8B80u: goto label_7F1A8B80;
    case 0x7F1A8B84u: goto label_7F1A8B84;
    case 0x7F1A8B88u: goto label_7F1A8B88;
    case 0x7F1A8B8Cu: goto label_7F1A8B8C;
    case 0x7F1A8B90u: goto label_7F1A8B90;
    case 0x7F1A8B94u: goto label_7F1A8B94;
    case 0x7F1A8B98u: goto label_7F1A8B98;
    case 0x7F1A8B9Cu: goto label_7F1A8B9C;
    case 0x7F1A8BA0u: goto label_7F1A8BA0;
    case 0x7F1A8BA4u: goto label_7F1A8BA4;
    case 0x7F1A8BA8u: goto label_7F1A8BA8;
    case 0x7F1A8BACu: goto label_7F1A8BAC;
    case 0x7F1A8BB0u: goto label_7F1A8BB0;
    case 0x7F1A8BB4u: goto label_7F1A8BB4;
    case 0x7F1A8BB8u: goto label_7F1A8BB8;
    case 0x7F1A8BBCu: goto label_7F1A8BBC;
    case 0x7F1A8BC0u: goto label_7F1A8BC0;
    case 0x7F1A8BC4u: goto label_7F1A8BC4;
    case 0x7F1A8BC8u: goto label_7F1A8BC8;
    case 0x7F1A8BCCu: goto label_7F1A8BCC;
    case 0x7F1A8BD0u: goto label_7F1A8BD0;
    case 0x7F1A8BD4u: goto label_7F1A8BD4;
    case 0x7F1A8BD8u: goto label_7F1A8BD8;
    case 0x7F1A8BDCu: goto label_7F1A8BDC;
    case 0x7F1A8BE0u: goto label_7F1A8BE0;
    case 0x7F1A8BE4u: goto label_7F1A8BE4;
    case 0x7F1A8BE8u: goto label_7F1A8BE8;
    case 0x7F1A8BECu: goto label_7F1A8BEC;
    case 0x7F1A8BF0u: goto label_7F1A8BF0;
    case 0x7F1A8BF4u: goto label_7F1A8BF4;
    case 0x7F1A8BF8u: goto label_7F1A8BF8;
    case 0x7F1A8BFCu: goto label_7F1A8BFC;
    case 0x7F1A8C00u: goto label_7F1A8C00;
    case 0x7F1A8C04u: goto label_7F1A8C04;
    case 0x7F1A8C08u: goto label_7F1A8C08;
    case 0x7F1A8C0Cu: goto label_7F1A8C0C;
    case 0x7F1A8C10u: goto label_7F1A8C10;
    case 0x7F1A8C14u: goto label_7F1A8C14;
    case 0x7F1A8C18u: goto label_7F1A8C18;
    case 0x7F1A8C1Cu: goto label_7F1A8C1C;
    case 0x7F1A8C20u: goto label_7F1A8C20;
    case 0x7F1A8C24u: goto label_7F1A8C24;
    case 0x7F1A8C28u: goto label_7F1A8C28;
    case 0x7F1A8C2Cu: goto label_7F1A8C2C;
    case 0x7F1A8C30u: goto label_7F1A8C30;
    case 0x7F1A8C34u: goto label_7F1A8C34;
    case 0x7F1A8C38u: goto label_7F1A8C38;
    case 0x7F1A8C3Cu: goto label_7F1A8C3C;
    case 0x7F1A8C40u: goto label_7F1A8C40;
    case 0x7F1A8C44u: goto label_7F1A8C44;
    case 0x7F1A8C48u: goto label_7F1A8C48;
    case 0x7F1A8C4Cu: goto label_7F1A8C4C;
    case 0x7F1A8C50u: goto label_7F1A8C50;
    case 0x7F1A8C54u: goto label_7F1A8C54;
    case 0x7F1A8C58u: goto label_7F1A8C58;
    case 0x7F1A8C5Cu: goto label_7F1A8C5C;
    case 0x7F1A8C60u: goto label_7F1A8C60;
    case 0x7F1A8C64u: goto label_7F1A8C64;
    case 0x7F1A8C68u: goto label_7F1A8C68;
    case 0x7F1A8C6Cu: goto label_7F1A8C6C;
    case 0x7F1A8C70u: goto label_7F1A8C70;
    case 0x7F1A8C74u: goto label_7F1A8C74;
    case 0x7F1A8C78u: goto label_7F1A8C78;
    case 0x7F1A8C7Cu: goto label_7F1A8C7C;
    case 0x7F1A8C80u: goto label_7F1A8C80;
    case 0x7F1A8C84u: goto label_7F1A8C84;
    case 0x7F1A8C88u: goto label_7F1A8C88;
    case 0x7F1A8C8Cu: goto label_7F1A8C8C;
    case 0x7F1A8C90u: goto label_7F1A8C90;
    case 0x7F1A8C94u: goto label_7F1A8C94;
    case 0x7F1A8C98u: goto label_7F1A8C98;
    case 0x7F1A8C9Cu: goto label_7F1A8C9C;
    case 0x7F1A8CA0u: goto label_7F1A8CA0;
    case 0x7F1A8CA4u: goto label_7F1A8CA4;
    case 0x7F1A8CA8u: goto label_7F1A8CA8;
    case 0x7F1A8CACu: goto label_7F1A8CAC;
    case 0x7F1A8CB0u: goto label_7F1A8CB0;
    case 0x7F1A8CB4u: goto label_7F1A8CB4;
    case 0x7F1A8CB8u: goto label_7F1A8CB8;
    case 0x7F1A8CBCu: goto label_7F1A8CBC;
    case 0x7F1A8CC0u: goto label_7F1A8CC0;
    case 0x7F1A8CC4u: goto label_7F1A8CC4;
    case 0x7F1A8CC8u: goto label_7F1A8CC8;
    case 0x7F1A8CCCu: goto label_7F1A8CCC;
    case 0x7F1A8CD0u: goto label_7F1A8CD0;
    case 0x7F1A8CD4u: goto label_7F1A8CD4;
    case 0x7F1A8CD8u: goto label_7F1A8CD8;
    case 0x7F1A8CDCu: goto label_7F1A8CDC;
    case 0x7F1A8CE0u: goto label_7F1A8CE0;
    case 0x7F1A8CE4u: goto label_7F1A8CE4;
    case 0x7F1A8CE8u: goto label_7F1A8CE8;
    case 0x7F1A8CECu: goto label_7F1A8CEC;
    case 0x7F1A8CF0u: goto label_7F1A8CF0;
    case 0x7F1A8CF4u: goto label_7F1A8CF4;
    case 0x7F1A8CF8u: goto label_7F1A8CF8;
    case 0x7F1A8CFCu: goto label_7F1A8CFC;
    case 0x7F1A8D00u: goto label_7F1A8D00;
    case 0x7F1A8D04u: goto label_7F1A8D04;
    case 0x7F1A8D08u: goto label_7F1A8D08;
    case 0x7F1A8D0Cu: goto label_7F1A8D0C;
    case 0x7F1A8D10u: goto label_7F1A8D10;
    case 0x7F1A8D14u: goto label_7F1A8D14;
    case 0x7F1A8D18u: goto label_7F1A8D18;
    case 0x7F1A8D1Cu: goto label_7F1A8D1C;
    case 0x7F1A8D20u: goto label_7F1A8D20;
    case 0x7F1A8D24u: goto label_7F1A8D24;
    case 0x7F1A8D28u: goto label_7F1A8D28;
    case 0x7F1A8D2Cu: goto label_7F1A8D2C;
    case 0x7F1A8D30u: goto label_7F1A8D30;
    case 0x7F1A8D34u: goto label_7F1A8D34;
    case 0x7F1A8D38u: goto label_7F1A8D38;
    case 0x7F1A8D3Cu: goto label_7F1A8D3C;
    case 0x7F1A8D40u: goto label_7F1A8D40;
    case 0x7F1A8D44u: goto label_7F1A8D44;
    case 0x7F1A8D48u: goto label_7F1A8D48;
    case 0x7F1A8D4Cu: goto label_7F1A8D4C;
    case 0x7F1A8D50u: goto label_7F1A8D50;
    case 0x7F1A8D54u: goto label_7F1A8D54;
    case 0x7F1A8D58u: goto label_7F1A8D58;
    case 0x7F1A8D5Cu: goto label_7F1A8D5C;
    case 0x7F1A8D60u: goto label_7F1A8D60;
    case 0x7F1A8D64u: goto label_7F1A8D64;
    case 0x7F1A8D68u: goto label_7F1A8D68;
    case 0x7F1A8D6Cu: goto label_7F1A8D6C;
    case 0x7F1A8D70u: goto label_7F1A8D70;
    case 0x7F1A8D74u: goto label_7F1A8D74;
    case 0x7F1A8D78u: goto label_7F1A8D78;
    case 0x7F1A8D7Cu: goto label_7F1A8D7C;
    case 0x7F1A8D80u: goto label_7F1A8D80;
    case 0x7F1A8D84u: goto label_7F1A8D84;
    case 0x7F1A8D88u: goto label_7F1A8D88;
    case 0x7F1A8D8Cu: goto label_7F1A8D8C;
    case 0x7F1A8D90u: goto label_7F1A8D90;
    case 0x7F1A8D94u: goto label_7F1A8D94;
    case 0x7F1A8D98u: goto label_7F1A8D98;
    case 0x7F1A8D9Cu: goto label_7F1A8D9C;
    case 0x7F1A8DA0u: goto label_7F1A8DA0;
    case 0x7F1A8DA4u: goto label_7F1A8DA4;
    case 0x7F1A8DA8u: goto label_7F1A8DA8;
    case 0x7F1A8DACu: goto label_7F1A8DAC;
    case 0x7F1A8DB0u: goto label_7F1A8DB0;
    case 0x7F1A8DB4u: goto label_7F1A8DB4;
    case 0x7F1A8DB8u: goto label_7F1A8DB8;
    case 0x7F1A8DBCu: goto label_7F1A8DBC;
    case 0x7F1A8DC0u: goto label_7F1A8DC0;
    case 0x7F1A8DC4u: goto label_7F1A8DC4;
    case 0x7F1A8DC8u: goto label_7F1A8DC8;
    case 0x7F1A8DCCu: goto label_7F1A8DCC;
    case 0x7F1A8DD0u: goto label_7F1A8DD0;
    case 0x7F1A8DD4u: goto label_7F1A8DD4;
    case 0x7F1A8DD8u: goto label_7F1A8DD8;
    case 0x7F1A8DDCu: goto label_7F1A8DDC;
    case 0x7F1A8DE0u: goto label_7F1A8DE0;
    case 0x7F1A8DE4u: goto label_7F1A8DE4;
    case 0x7F1A8DE8u: goto label_7F1A8DE8;
    case 0x7F1A8DECu: goto label_7F1A8DEC;
    case 0x7F1A8DF0u: goto label_7F1A8DF0;
    case 0x7F1A8DF4u: goto label_7F1A8DF4;
    case 0x7F1A8DF8u: goto label_7F1A8DF8;
    case 0x7F1A8DFCu: goto label_7F1A8DFC;
    case 0x7F1A8E00u: goto label_7F1A8E00;
    case 0x7F1A8E04u: goto label_7F1A8E04;
    case 0x7F1A8E08u: goto label_7F1A8E08;
    case 0x7F1A8E0Cu: goto label_7F1A8E0C;
    case 0x7F1A8E10u: goto label_7F1A8E10;
    case 0x7F1A8E14u: goto label_7F1A8E14;
    case 0x7F1A8E18u: goto label_7F1A8E18;
    case 0x7F1A8E1Cu: goto label_7F1A8E1C;
    case 0x7F1A8E20u: goto label_7F1A8E20;
    case 0x7F1A8E24u: goto label_7F1A8E24;
    case 0x7F1A8E28u: goto label_7F1A8E28;
    case 0x7F1A8E2Cu: goto label_7F1A8E2C;
    case 0x7F1A8E30u: goto label_7F1A8E30;
    case 0x7F1A8E34u: goto label_7F1A8E34;
    case 0x7F1A8E38u: goto label_7F1A8E38;
    case 0x7F1A8E3Cu: goto label_7F1A8E3C;
    case 0x7F1A8E40u: goto label_7F1A8E40;
    case 0x7F1A8E44u: goto label_7F1A8E44;
    case 0x7F1A8E48u: goto label_7F1A8E48;
    case 0x7F1A8E4Cu: goto label_7F1A8E4C;
    case 0x7F1A8E50u: goto label_7F1A8E50;
    case 0x7F1A8E54u: goto label_7F1A8E54;
    case 0x7F1A8E58u: goto label_7F1A8E58;
    case 0x7F1A8E5Cu: goto label_7F1A8E5C;
    case 0x7F1A8E60u: goto label_7F1A8E60;
    case 0x7F1A8E64u: goto label_7F1A8E64;
    case 0x7F1A8E68u: goto label_7F1A8E68;
    case 0x7F1A8E6Cu: goto label_7F1A8E6C;
    case 0x7F1A8E70u: goto label_7F1A8E70;
    case 0x7F1A8E74u: goto label_7F1A8E74;
    case 0x7F1A8E78u: goto label_7F1A8E78;
    case 0x7F1A8E7Cu: goto label_7F1A8E7C;
    case 0x7F1A8E80u: goto label_7F1A8E80;
    case 0x7F1A8E84u: goto label_7F1A8E84;
    case 0x7F1A8E88u: goto label_7F1A8E88;
    case 0x7F1A8E8Cu: goto label_7F1A8E8C;
    case 0x7F1A8E90u: goto label_7F1A8E90;
    case 0x7F1A8E94u: goto label_7F1A8E94;
    case 0x7F1A8E98u: goto label_7F1A8E98;
    case 0x7F1A8E9Cu: goto label_7F1A8E9C;
    case 0x7F1A8EA0u: goto label_7F1A8EA0;
    case 0x7F1A8EA4u: goto label_7F1A8EA4;
    case 0x7F1A8EA8u: goto label_7F1A8EA8;
    case 0x7F1A8EACu: goto label_7F1A8EAC;
    case 0x7F1A8EB0u: goto label_7F1A8EB0;
    case 0x7F1A8EB4u: goto label_7F1A8EB4;
    case 0x7F1A8EB8u: goto label_7F1A8EB8;
    case 0x7F1A8EBCu: goto label_7F1A8EBC;
    case 0x7F1A8EC0u: goto label_7F1A8EC0;
    case 0x7F1A8EC4u: goto label_7F1A8EC4;
    case 0x7F1A8EC8u: goto label_7F1A8EC8;
    case 0x7F1A8ECCu: goto label_7F1A8ECC;
    case 0x7F1A8ED0u: goto label_7F1A8ED0;
    case 0x7F1A8ED4u: goto label_7F1A8ED4;
    case 0x7F1A8ED8u: goto label_7F1A8ED8;
    case 0x7F1A8EDCu: goto label_7F1A8EDC;
    case 0x7F1A8EE0u: goto label_7F1A8EE0;
    case 0x7F1A8EE4u: goto label_7F1A8EE4;
    case 0x7F1A8EE8u: goto label_7F1A8EE8;
    case 0x7F1A8EECu: goto label_7F1A8EEC;
    case 0x7F1A8EF0u: goto label_7F1A8EF0;
    case 0x7F1A8EF4u: goto label_7F1A8EF4;
    case 0x7F1A8EF8u: goto label_7F1A8EF8;
    case 0x7F1A8EFCu: goto label_7F1A8EFC;
    case 0x7F1A8F00u: goto label_7F1A8F00;
    case 0x7F1A8F04u: goto label_7F1A8F04;
    case 0x7F1A8F08u: goto label_7F1A8F08;
    case 0x7F1A8F0Cu: goto label_7F1A8F0C;
    case 0x7F1A8F10u: goto label_7F1A8F10;
    case 0x7F1A8F14u: goto label_7F1A8F14;
    case 0x7F1A8F18u: goto label_7F1A8F18;
    case 0x7F1A8F1Cu: goto label_7F1A8F1C;
    case 0x7F1A8F20u: goto label_7F1A8F20;
    case 0x7F1A8F24u: goto label_7F1A8F24;
    case 0x7F1A8F28u: goto label_7F1A8F28;
    case 0x7F1A8F2Cu: goto label_7F1A8F2C;
    case 0x7F1A8F30u: goto label_7F1A8F30;
    case 0x7F1A8F34u: goto label_7F1A8F34;
    case 0x7F1A8F38u: goto label_7F1A8F38;
    case 0x7F1A8F3Cu: goto label_7F1A8F3C;
    case 0x7F1A8F40u: goto label_7F1A8F40;
    case 0x7F1A8F44u: goto label_7F1A8F44;
    case 0x7F1A8F48u: goto label_7F1A8F48;
    case 0x7F1A8F4Cu: goto label_7F1A8F4C;
    case 0x7F1A8F50u: goto label_7F1A8F50;
    case 0x7F1A8F54u: goto label_7F1A8F54;
    case 0x7F1A8F58u: goto label_7F1A8F58;
    case 0x7F1A8F5Cu: goto label_7F1A8F5C;
    case 0x7F1A8F60u: goto label_7F1A8F60;
    case 0x7F1A8F64u: goto label_7F1A8F64;
    case 0x7F1A8F68u: goto label_7F1A8F68;
    case 0x7F1A8F6Cu: goto label_7F1A8F6C;
    case 0x7F1A8F70u: goto label_7F1A8F70;
    case 0x7F1A8F74u: goto label_7F1A8F74;
    case 0x7F1A8F78u: goto label_7F1A8F78;
    case 0x7F1A8F7Cu: goto label_7F1A8F7C;
    case 0x7F1A8F80u: goto label_7F1A8F80;
    case 0x7F1A8F84u: goto label_7F1A8F84;
    case 0x7F1A8F88u: goto label_7F1A8F88;
    case 0x7F1A8F8Cu: goto label_7F1A8F8C;
    case 0x7F1A8F90u: goto label_7F1A8F90;
    case 0x7F1A8F94u: goto label_7F1A8F94;
    case 0x7F1A8F98u: goto label_7F1A8F98;
    case 0x7F1A8F9Cu: goto label_7F1A8F9C;
    case 0x7F1A8FA0u: goto label_7F1A8FA0;
    case 0x7F1A8FA4u: goto label_7F1A8FA4;
    case 0x7F1A8FA8u: goto label_7F1A8FA8;
    case 0x7F1A8FACu: goto label_7F1A8FAC;
    case 0x7F1A8FB0u: goto label_7F1A8FB0;
    case 0x7F1A8FB4u: goto label_7F1A8FB4;
    case 0x7F1A8FB8u: goto label_7F1A8FB8;
    case 0x7F1A8FBCu: goto label_7F1A8FBC;
    case 0x7F1A8FC0u: goto label_7F1A8FC0;
    case 0x7F1A8FC4u: goto label_7F1A8FC4;
    case 0x7F1A8FC8u: goto label_7F1A8FC8;
    case 0x7F1A8FCCu: goto label_7F1A8FCC;
    case 0x7F1A8FD0u: goto label_7F1A8FD0;
    case 0x7F1A8FD4u: goto label_7F1A8FD4;
    case 0x7F1A8FD8u: goto label_7F1A8FD8;
    case 0x7F1A8FDCu: goto label_7F1A8FDC;
    case 0x7F1A8FE0u: goto label_7F1A8FE0;
    case 0x7F1A8FE4u: goto label_7F1A8FE4;
    case 0x7F1A8FE8u: goto label_7F1A8FE8;
    case 0x7F1A8FECu: goto label_7F1A8FEC;
    case 0x7F1A8FF0u: goto label_7F1A8FF0;
    case 0x7F1A8FF4u: goto label_7F1A8FF4;
    case 0x7F1A8FF8u: goto label_7F1A8FF8;
    case 0x7F1A8FFCu: goto label_7F1A8FFC;
    case 0x7F1A9000u: goto label_7F1A9000;
    case 0x7F1A9004u: goto label_7F1A9004;
    case 0x7F1A9008u: goto label_7F1A9008;
    case 0x7F1A900Cu: goto label_7F1A900C;
    case 0x7F1A9010u: goto label_7F1A9010;
    case 0x7F1A9014u: goto label_7F1A9014;
    case 0x7F1A9018u: goto label_7F1A9018;
    case 0x7F1A901Cu: goto label_7F1A901C;
    case 0x7F1A9020u: goto label_7F1A9020;
    case 0x7F1A9024u: goto label_7F1A9024;
    case 0x7F1A9028u: goto label_7F1A9028;
    case 0x7F1A902Cu: goto label_7F1A902C;
    case 0x7F1A9030u: goto label_7F1A9030;
    case 0x7F1A9034u: goto label_7F1A9034;
    case 0x7F1A9038u: goto label_7F1A9038;
    case 0x7F1A903Cu: goto label_7F1A903C;
    case 0x7F1A9040u: goto label_7F1A9040;
    case 0x7F1A9044u: goto label_7F1A9044;
    case 0x7F1A9048u: goto label_7F1A9048;
    case 0x7F1A904Cu: goto label_7F1A904C;
    case 0x7F1A9050u: goto label_7F1A9050;
    case 0x7F1A9054u: goto label_7F1A9054;
    case 0x7F1A9058u: goto label_7F1A9058;
    case 0x7F1A905Cu: goto label_7F1A905C;
    case 0x7F1A9060u: goto label_7F1A9060;
    case 0x7F1A9064u: goto label_7F1A9064;
    case 0x7F1A9068u: goto label_7F1A9068;
    case 0x7F1A906Cu: goto label_7F1A906C;
    case 0x7F1A9070u: goto label_7F1A9070;
    case 0x7F1A9074u: goto label_7F1A9074;
    case 0x7F1A9078u: goto label_7F1A9078;
    case 0x7F1A907Cu: goto label_7F1A907C;
    case 0x7F1A9080u: goto label_7F1A9080;
    case 0x7F1A9084u: goto label_7F1A9084;
    case 0x7F1A9088u: goto label_7F1A9088;
    case 0x7F1A908Cu: goto label_7F1A908C;
    case 0x7F1A9090u: goto label_7F1A9090;
    case 0x7F1A9094u: goto label_7F1A9094;
    case 0x7F1A9098u: goto label_7F1A9098;
    case 0x7F1A909Cu: goto label_7F1A909C;
    case 0x7F1A90A0u: goto label_7F1A90A0;
    case 0x7F1A90A4u: goto label_7F1A90A4;
    case 0x7F1A90A8u: goto label_7F1A90A8;
    case 0x7F1A90ACu: goto label_7F1A90AC;
    case 0x7F1A90B0u: goto label_7F1A90B0;
    case 0x7F1A90B4u: goto label_7F1A90B4;
    case 0x7F1A90B8u: goto label_7F1A90B8;
    case 0x7F1A90BCu: goto label_7F1A90BC;
    case 0x7F1A90C0u: goto label_7F1A90C0;
    case 0x7F1A90C4u: goto label_7F1A90C4;
    case 0x7F1A90C8u: goto label_7F1A90C8;
    case 0x7F1A90CCu: goto label_7F1A90CC;
    case 0x7F1A90D0u: goto label_7F1A90D0;
    case 0x7F1A90D4u: goto label_7F1A90D4;
    case 0x7F1A90D8u: goto label_7F1A90D8;
    case 0x7F1A90DCu: goto label_7F1A90DC;
    case 0x7F1A90E0u: goto label_7F1A90E0;
    case 0x7F1A90E4u: goto label_7F1A90E4;
    case 0x7F1A90E8u: goto label_7F1A90E8;
    case 0x7F1A90ECu: goto label_7F1A90EC;
    case 0x7F1A90F0u: goto label_7F1A90F0;
    case 0x7F1A90F4u: goto label_7F1A90F4;
    case 0x7F1A90F8u: goto label_7F1A90F8;
    case 0x7F1A90FCu: goto label_7F1A90FC;
    case 0x7F1A9100u: goto label_7F1A9100;
    case 0x7F1A9104u: goto label_7F1A9104;
    case 0x7F1A9108u: goto label_7F1A9108;
    case 0x7F1A910Cu: goto label_7F1A910C;
    case 0x7F1A9110u: goto label_7F1A9110;
    case 0x7F1A9114u: goto label_7F1A9114;
    case 0x7F1A9118u: goto label_7F1A9118;
    case 0x7F1A911Cu: goto label_7F1A911C;
    case 0x7F1A9120u: goto label_7F1A9120;
    case 0x7F1A9124u: goto label_7F1A9124;
    case 0x7F1A9128u: goto label_7F1A9128;
    case 0x7F1A912Cu: goto label_7F1A912C;
    case 0x7F1A9130u: goto label_7F1A9130;
    case 0x7F1A9134u: goto label_7F1A9134;
    case 0x7F1A9138u: goto label_7F1A9138;
    case 0x7F1A913Cu: goto label_7F1A913C;
    case 0x7F1A9140u: goto label_7F1A9140;
    case 0x7F1A9144u: goto label_7F1A9144;
    case 0x7F1A9148u: goto label_7F1A9148;
    case 0x7F1A914Cu: goto label_7F1A914C;
    case 0x7F1A9150u: goto label_7F1A9150;
    case 0x7F1A9154u: goto label_7F1A9154;
    case 0x7F1A9158u: goto label_7F1A9158;
    case 0x7F1A915Cu: goto label_7F1A915C;
    case 0x7F1A9160u: goto label_7F1A9160;
    case 0x7F1A9164u: goto label_7F1A9164;
    case 0x7F1A9168u: goto label_7F1A9168;
    case 0x7F1A916Cu: goto label_7F1A916C;
    case 0x7F1A9170u: goto label_7F1A9170;
    case 0x7F1A9174u: goto label_7F1A9174;
    case 0x7F1A9178u: goto label_7F1A9178;
    case 0x7F1A917Cu: goto label_7F1A917C;
    case 0x7F1A9180u: goto label_7F1A9180;
    case 0x7F1A9184u: goto label_7F1A9184;
    case 0x7F1A9188u: goto label_7F1A9188;
    case 0x7F1A918Cu: goto label_7F1A918C;
    case 0x7F1A9190u: goto label_7F1A9190;
    case 0x7F1A9194u: goto label_7F1A9194;
    case 0x7F1A9198u: goto label_7F1A9198;
    case 0x7F1A919Cu: goto label_7F1A919C;
    case 0x7F1A91A0u: goto label_7F1A91A0;
    case 0x7F1A91A4u: goto label_7F1A91A4;
    case 0x7F1A91A8u: goto label_7F1A91A8;
    case 0x7F1A91ACu: goto label_7F1A91AC;
    case 0x7F1A91B0u: goto label_7F1A91B0;
    case 0x7F1A91B4u: goto label_7F1A91B4;
    case 0x7F1A91B8u: goto label_7F1A91B8;
    case 0x7F1A91BCu: goto label_7F1A91BC;
    case 0x7F1A91C0u: goto label_7F1A91C0;
    case 0x7F1A91C4u: goto label_7F1A91C4;
    case 0x7F1A91C8u: goto label_7F1A91C8;
    case 0x7F1A91CCu: goto label_7F1A91CC;
    case 0x7F1A91D0u: goto label_7F1A91D0;
    case 0x7F1A91D4u: goto label_7F1A91D4;
    case 0x7F1A91D8u: goto label_7F1A91D8;
    case 0x7F1A91DCu: goto label_7F1A91DC;
    case 0x7F1A91E0u: goto label_7F1A91E0;
    case 0x7F1A91E4u: goto label_7F1A91E4;
    case 0x7F1A91E8u: goto label_7F1A91E8;
    case 0x7F1A91ECu: goto label_7F1A91EC;
    case 0x7F1A91F0u: goto label_7F1A91F0;
    case 0x7F1A91F4u: goto label_7F1A91F4;
    case 0x7F1A91F8u: goto label_7F1A91F8;
    case 0x7F1A91FCu: goto label_7F1A91FC;
    case 0x7F1A9200u: goto label_7F1A9200;
    case 0x7F1A9204u: goto label_7F1A9204;
    case 0x7F1A9208u: goto label_7F1A9208;
    case 0x7F1A920Cu: goto label_7F1A920C;
    case 0x7F1A9210u: goto label_7F1A9210;
    case 0x7F1A9214u: goto label_7F1A9214;
    case 0x7F1A9218u: goto label_7F1A9218;
    case 0x7F1A921Cu: goto label_7F1A921C;
    case 0x7F1A9220u: goto label_7F1A9220;
    case 0x7F1A9224u: goto label_7F1A9224;
    case 0x7F1A9228u: goto label_7F1A9228;
    case 0x7F1A922Cu: goto label_7F1A922C;
    case 0x7F1A9230u: goto label_7F1A9230;
    case 0x7F1A9234u: goto label_7F1A9234;
    case 0x7F1A9238u: goto label_7F1A9238;
    case 0x7F1A923Cu: goto label_7F1A923C;
    case 0x7F1A9240u: goto label_7F1A9240;
    case 0x7F1A9244u: goto label_7F1A9244;
    case 0x7F1A9248u: goto label_7F1A9248;
    case 0x7F1A924Cu: goto label_7F1A924C;
    case 0x7F1A9250u: goto label_7F1A9250;
    case 0x7F1A9254u: goto label_7F1A9254;
    case 0x7F1A9258u: goto label_7F1A9258;
    case 0x7F1A925Cu: goto label_7F1A925C;
    case 0x7F1A9260u: goto label_7F1A9260;
    case 0x7F1A9264u: goto label_7F1A9264;
    case 0x7F1A9268u: goto label_7F1A9268;
    case 0x7F1A926Cu: goto label_7F1A926C;
    case 0x7F1A9270u: goto label_7F1A9270;
    case 0x7F1A9274u: goto label_7F1A9274;
    case 0x7F1A9278u: goto label_7F1A9278;
    case 0x7F1A927Cu: goto label_7F1A927C;
    case 0x7F1A9280u: goto label_7F1A9280;
    case 0x7F1A9284u: goto label_7F1A9284;
    case 0x7F1A9288u: goto label_7F1A9288;
    case 0x7F1A928Cu: goto label_7F1A928C;
    case 0x7F1A9290u: goto label_7F1A9290;
    case 0x7F1A9294u: goto label_7F1A9294;
    case 0x7F1A9298u: goto label_7F1A9298;
    case 0x7F1A929Cu: goto label_7F1A929C;
    case 0x7F1A92A0u: goto label_7F1A92A0;
    case 0x7F1A92A4u: goto label_7F1A92A4;
    case 0x7F1A92A8u: goto label_7F1A92A8;
    case 0x7F1A92ACu: goto label_7F1A92AC;
    case 0x7F1A92B0u: goto label_7F1A92B0;
    case 0x7F1A92B4u: goto label_7F1A92B4;
    case 0x7F1A92B8u: goto label_7F1A92B8;
    case 0x7F1A92BCu: goto label_7F1A92BC;
    case 0x7F1A92C0u: goto label_7F1A92C0;
    case 0x7F1A92C4u: goto label_7F1A92C4;
    case 0x7F1A92C8u: goto label_7F1A92C8;
    case 0x7F1A92CCu: goto label_7F1A92CC;
    case 0x7F1A92D0u: goto label_7F1A92D0;
    case 0x7F1A92D4u: goto label_7F1A92D4;
    case 0x7F1A92D8u: goto label_7F1A92D8;
    case 0x7F1A92DCu: goto label_7F1A92DC;
    case 0x7F1A92E0u: goto label_7F1A92E0;
    case 0x7F1A92E4u: goto label_7F1A92E4;
    case 0x7F1A92E8u: goto label_7F1A92E8;
    case 0x7F1A92ECu: goto label_7F1A92EC;
    case 0x7F1A92F0u: goto label_7F1A92F0;
    case 0x7F1A92F4u: goto label_7F1A92F4;
    case 0x7F1A92F8u: goto label_7F1A92F8;
    case 0x7F1A92FCu: goto label_7F1A92FC;
    case 0x7F1A9300u: goto label_7F1A9300;
    case 0x7F1A9304u: goto label_7F1A9304;
    case 0x7F1A9308u: goto label_7F1A9308;
    case 0x7F1A930Cu: goto label_7F1A930C;
    case 0x7F1A9310u: goto label_7F1A9310;
    case 0x7F1A9314u: goto label_7F1A9314;
    case 0x7F1A9318u: goto label_7F1A9318;
    case 0x7F1A931Cu: goto label_7F1A931C;
    case 0x7F1A9320u: goto label_7F1A9320;
    case 0x7F1A9324u: goto label_7F1A9324;
    case 0x7F1A9328u: goto label_7F1A9328;
    case 0x7F1A932Cu: goto label_7F1A932C;
    case 0x7F1A9330u: goto label_7F1A9330;
    case 0x7F1A9334u: goto label_7F1A9334;
    case 0x7F1A9338u: goto label_7F1A9338;
    case 0x7F1A933Cu: goto label_7F1A933C;
    case 0x7F1A9340u: goto label_7F1A9340;
    case 0x7F1A9344u: goto label_7F1A9344;
    case 0x7F1A9348u: goto label_7F1A9348;
    case 0x7F1A934Cu: goto label_7F1A934C;
    case 0x7F1A9350u: goto label_7F1A9350;
    case 0x7F1A9354u: goto label_7F1A9354;
    case 0x7F1A9358u: goto label_7F1A9358;
    case 0x7F1A935Cu: goto label_7F1A935C;
    case 0x7F1A9360u: goto label_7F1A9360;
    case 0x7F1A9364u: goto label_7F1A9364;
    case 0x7F1A9368u: goto label_7F1A9368;
    case 0x7F1A936Cu: goto label_7F1A936C;
    case 0x7F1A9370u: goto label_7F1A9370;
    case 0x7F1A9374u: goto label_7F1A9374;
    case 0x7F1A9378u: goto label_7F1A9378;
    case 0x7F1A937Cu: goto label_7F1A937C;
    case 0x7F1A9380u: goto label_7F1A9380;
    case 0x7F1A9384u: goto label_7F1A9384;
    case 0x7F1A9388u: goto label_7F1A9388;
    case 0x7F1A938Cu: goto label_7F1A938C;
    case 0x7F1A9390u: goto label_7F1A9390;
    case 0x7F1A9394u: goto label_7F1A9394;
    case 0x7F1A9398u: goto label_7F1A9398;
    case 0x7F1A939Cu: goto label_7F1A939C;
    case 0x7F1A93A0u: goto label_7F1A93A0;
    case 0x7F1A93A4u: goto label_7F1A93A4;
    case 0x7F1A93A8u: goto label_7F1A93A8;
    case 0x7F1A93ACu: goto label_7F1A93AC;
    case 0x7F1A93B0u: goto label_7F1A93B0;
    case 0x7F1A93B4u: goto label_7F1A93B4;
    case 0x7F1A93B8u: goto label_7F1A93B8;
    case 0x7F1A93BCu: goto label_7F1A93BC;
    case 0x7F1A93C0u: goto label_7F1A93C0;
    case 0x7F1A93C4u: goto label_7F1A93C4;
    case 0x7F1A93C8u: goto label_7F1A93C8;
    case 0x7F1A93CCu: goto label_7F1A93CC;
    case 0x7F1A93D0u: goto label_7F1A93D0;
    case 0x7F1A93D4u: goto label_7F1A93D4;
    case 0x7F1A93D8u: goto label_7F1A93D8;
    case 0x7F1A93DCu: goto label_7F1A93DC;
    case 0x7F1A93E0u: goto label_7F1A93E0;
    case 0x7F1A93E4u: goto label_7F1A93E4;
    case 0x7F1A93E8u: goto label_7F1A93E8;
    case 0x7F1A93ECu: goto label_7F1A93EC;
    case 0x7F1A93F0u: goto label_7F1A93F0;
    case 0x7F1A93F4u: goto label_7F1A93F4;
    case 0x7F1A93F8u: goto label_7F1A93F8;
    case 0x7F1A93FCu: goto label_7F1A93FC;
    case 0x7F1A9400u: goto label_7F1A9400;
    case 0x7F1A9404u: goto label_7F1A9404;
    case 0x7F1A9408u: goto label_7F1A9408;
    case 0x7F1A940Cu: goto label_7F1A940C;
    case 0x7F1A9410u: goto label_7F1A9410;
    case 0x7F1A9414u: goto label_7F1A9414;
    case 0x7F1A9418u: goto label_7F1A9418;
    case 0x7F1A941Cu: goto label_7F1A941C;
    case 0x7F1A9420u: goto label_7F1A9420;
    case 0x7F1A9424u: goto label_7F1A9424;
    case 0x7F1A9428u: goto label_7F1A9428;
    case 0x7F1A942Cu: goto label_7F1A942C;
    case 0x7F1A9430u: goto label_7F1A9430;
    case 0x7F1A9434u: goto label_7F1A9434;
    case 0x7F1A9438u: goto label_7F1A9438;
    case 0x7F1A943Cu: goto label_7F1A943C;
    case 0x7F1A9440u: goto label_7F1A9440;
    case 0x7F1A9444u: goto label_7F1A9444;
    case 0x7F1A9448u: goto label_7F1A9448;
    case 0x7F1A944Cu: goto label_7F1A944C;
    case 0x7F1A9450u: goto label_7F1A9450;
    case 0x7F1A9454u: goto label_7F1A9454;
    case 0x7F1A9458u: goto label_7F1A9458;
    case 0x7F1A945Cu: goto label_7F1A945C;
    case 0x7F1A9460u: goto label_7F1A9460;
    case 0x7F1A9464u: goto label_7F1A9464;
    case 0x7F1A9468u: goto label_7F1A9468;
    case 0x7F1A946Cu: goto label_7F1A946C;
    case 0x7F1A9470u: goto label_7F1A9470;
    case 0x7F1A9474u: goto label_7F1A9474;
    case 0x7F1A9478u: goto label_7F1A9478;
    case 0x7F1A947Cu: goto label_7F1A947C;
    case 0x7F1A9480u: goto label_7F1A9480;
    case 0x7F1A9484u: goto label_7F1A9484;
    case 0x7F1A9488u: goto label_7F1A9488;
    case 0x7F1A948Cu: goto label_7F1A948C;
    case 0x7F1A9490u: goto label_7F1A9490;
    case 0x7F1A9494u: goto label_7F1A9494;
    case 0x7F1A9498u: goto label_7F1A9498;
    case 0x7F1A949Cu: goto label_7F1A949C;
    case 0x7F1A94A0u: goto label_7F1A94A0;
    case 0x7F1A94A4u: goto label_7F1A94A4;
    case 0x7F1A94A8u: goto label_7F1A94A8;
    case 0x7F1A94ACu: goto label_7F1A94AC;
    case 0x7F1A94B0u: goto label_7F1A94B0;
    case 0x7F1A94B4u: goto label_7F1A94B4;
    case 0x7F1A94B8u: goto label_7F1A94B8;
    case 0x7F1A94BCu: goto label_7F1A94BC;
    case 0x7F1A94C0u: goto label_7F1A94C0;
    case 0x7F1A94C4u: goto label_7F1A94C4;
    case 0x7F1A94C8u: goto label_7F1A94C8;
    case 0x7F1A94CCu: goto label_7F1A94CC;
    case 0x7F1A94D0u: goto label_7F1A94D0;
    case 0x7F1A94D4u: goto label_7F1A94D4;
    case 0x7F1A94D8u: goto label_7F1A94D8;
    case 0x7F1A94DCu: goto label_7F1A94DC;
    case 0x7F1A94E0u: goto label_7F1A94E0;
    case 0x7F1A94E4u: goto label_7F1A94E4;
    case 0x7F1A94E8u: goto label_7F1A94E8;
    case 0x7F1A94ECu: goto label_7F1A94EC;
    case 0x7F1A94F0u: goto label_7F1A94F0;
    case 0x7F1A94F4u: goto label_7F1A94F4;
    case 0x7F1A94F8u: goto label_7F1A94F8;
    case 0x7F1A94FCu: goto label_7F1A94FC;
    case 0x7F1A9500u: goto label_7F1A9500;
    case 0x7F1A9504u: goto label_7F1A9504;
    case 0x7F1A9508u: goto label_7F1A9508;
    case 0x7F1A950Cu: goto label_7F1A950C;
    case 0x7F1A9510u: goto label_7F1A9510;
    case 0x7F1A9514u: goto label_7F1A9514;
    case 0x7F1A9518u: goto label_7F1A9518;
    case 0x7F1A951Cu: goto label_7F1A951C;
    case 0x7F1A9520u: goto label_7F1A9520;
    case 0x7F1A9524u: goto label_7F1A9524;
    case 0x7F1A9528u: goto label_7F1A9528;
    case 0x7F1A952Cu: goto label_7F1A952C;
    case 0x7F1A9530u: goto label_7F1A9530;
    case 0x7F1A9534u: goto label_7F1A9534;
    case 0x7F1A9538u: goto label_7F1A9538;
    case 0x7F1A953Cu: goto label_7F1A953C;
    case 0x7F1A9540u: goto label_7F1A9540;
    case 0x7F1A9544u: goto label_7F1A9544;
    case 0x7F1A9548u: goto label_7F1A9548;
    case 0x7F1A954Cu: goto label_7F1A954C;
    case 0x7F1A9550u: goto label_7F1A9550;
    case 0x7F1A9554u: goto label_7F1A9554;
    case 0x7F1A9558u: goto label_7F1A9558;
    case 0x7F1A955Cu: goto label_7F1A955C;
    case 0x7F1A9560u: goto label_7F1A9560;
    case 0x7F1A9564u: goto label_7F1A9564;
    case 0x7F1A9568u: goto label_7F1A9568;
    case 0x7F1A956Cu: goto label_7F1A956C;
    case 0x7F1A9570u: goto label_7F1A9570;
    case 0x7F1A9574u: goto label_7F1A9574;
    case 0x7F1A9578u: goto label_7F1A9578;
    case 0x7F1A957Cu: goto label_7F1A957C;
    case 0x7F1A9580u: goto label_7F1A9580;
    case 0x7F1A9584u: goto label_7F1A9584;
    case 0x7F1A9588u: goto label_7F1A9588;
    case 0x7F1A958Cu: goto label_7F1A958C;
    case 0x7F1A9590u: goto label_7F1A9590;
    case 0x7F1A9594u: goto label_7F1A9594;
    case 0x7F1A9598u: goto label_7F1A9598;
    case 0x7F1A959Cu: goto label_7F1A959C;
    case 0x7F1A95A0u: goto label_7F1A95A0;
    case 0x7F1A95A4u: goto label_7F1A95A4;
    case 0x7F1A95A8u: goto label_7F1A95A8;
    case 0x7F1A95ACu: goto label_7F1A95AC;
    case 0x7F1A95B0u: goto label_7F1A95B0;
    case 0x7F1A95B4u: goto label_7F1A95B4;
    case 0x7F1A95B8u: goto label_7F1A95B8;
    case 0x7F1A95BCu: goto label_7F1A95BC;
    case 0x7F1A95C0u: goto label_7F1A95C0;
    case 0x7F1A95C4u: goto label_7F1A95C4;
    case 0x7F1A95C8u: goto label_7F1A95C8;
    case 0x7F1A95CCu: goto label_7F1A95CC;
    case 0x7F1A95D0u: goto label_7F1A95D0;
    case 0x7F1A95D4u: goto label_7F1A95D4;
    case 0x7F1A95D8u: goto label_7F1A95D8;
    case 0x7F1A95DCu: goto label_7F1A95DC;
    case 0x7F1A95E0u: goto label_7F1A95E0;
    case 0x7F1A95E4u: goto label_7F1A95E4;
    case 0x7F1A95E8u: goto label_7F1A95E8;
    case 0x7F1A95ECu: goto label_7F1A95EC;
    case 0x7F1A95F0u: goto label_7F1A95F0;
    case 0x7F1A95F4u: goto label_7F1A95F4;
    case 0x7F1A95F8u: goto label_7F1A95F8;
    case 0x7F1A95FCu: goto label_7F1A95FC;
    case 0x7F1A9600u: goto label_7F1A9600;
    case 0x7F1A9604u: goto label_7F1A9604;
    case 0x7F1A9608u: goto label_7F1A9608;
    case 0x7F1A960Cu: goto label_7F1A960C;
    case 0x7F1A9610u: goto label_7F1A9610;
    case 0x7F1A9614u: goto label_7F1A9614;
    case 0x7F1A9618u: goto label_7F1A9618;
    case 0x7F1A961Cu: goto label_7F1A961C;
    case 0x7F1A9620u: goto label_7F1A9620;
    case 0x7F1A9624u: goto label_7F1A9624;
    case 0x7F1A9628u: goto label_7F1A9628;
    case 0x7F1A962Cu: goto label_7F1A962C;
    case 0x7F1A9630u: goto label_7F1A9630;
    case 0x7F1A9634u: goto label_7F1A9634;
    case 0x7F1A9638u: goto label_7F1A9638;
    case 0x7F1A963Cu: goto label_7F1A963C;
    case 0x7F1A9640u: goto label_7F1A9640;
    case 0x7F1A9644u: goto label_7F1A9644;
    case 0x7F1A9648u: goto label_7F1A9648;
    case 0x7F1A964Cu: goto label_7F1A964C;
    case 0x7F1A9650u: goto label_7F1A9650;
    case 0x7F1A9654u: goto label_7F1A9654;
    case 0x7F1A9658u: goto label_7F1A9658;
    case 0x7F1A965Cu: goto label_7F1A965C;
    case 0x7F1A9660u: goto label_7F1A9660;
    case 0x7F1A9664u: goto label_7F1A9664;
    case 0x7F1A9668u: goto label_7F1A9668;
    case 0x7F1A966Cu: goto label_7F1A966C;
    case 0x7F1A9670u: goto label_7F1A9670;
    case 0x7F1A9674u: goto label_7F1A9674;
    case 0x7F1A9678u: goto label_7F1A9678;
    case 0x7F1A967Cu: goto label_7F1A967C;
    case 0x7F1A9680u: goto label_7F1A9680;
    case 0x7F1A9684u: goto label_7F1A9684;
    case 0x7F1A9688u: goto label_7F1A9688;
    case 0x7F1A968Cu: goto label_7F1A968C;
    case 0x7F1A9690u: goto label_7F1A9690;
    case 0x7F1A9694u: goto label_7F1A9694;
    case 0x7F1A9698u: goto label_7F1A9698;
    case 0x7F1A969Cu: goto label_7F1A969C;
    case 0x7F1A96A0u: goto label_7F1A96A0;
    case 0x7F1A96A4u: goto label_7F1A96A4;
    case 0x7F1A96A8u: goto label_7F1A96A8;
    case 0x7F1A96ACu: goto label_7F1A96AC;
    case 0x7F1A96B0u: goto label_7F1A96B0;
    case 0x7F1A96B4u: goto label_7F1A96B4;
    case 0x7F1A96B8u: goto label_7F1A96B8;
    case 0x7F1A96BCu: goto label_7F1A96BC;
    case 0x7F1A96C0u: goto label_7F1A96C0;
    case 0x7F1A96C4u: goto label_7F1A96C4;
    case 0x7F1A96C8u: goto label_7F1A96C8;
    case 0x7F1A96CCu: goto label_7F1A96CC;
    case 0x7F1A96D0u: goto label_7F1A96D0;
    case 0x7F1A96D4u: goto label_7F1A96D4;
    case 0x7F1A96D8u: goto label_7F1A96D8;
    case 0x7F1A96DCu: goto label_7F1A96DC;
    case 0x7F1A96E0u: goto label_7F1A96E0;
    case 0x7F1A96E4u: goto label_7F1A96E4;
    case 0x7F1A96E8u: goto label_7F1A96E8;
    case 0x7F1A96ECu: goto label_7F1A96EC;
    case 0x7F1A96F0u: goto label_7F1A96F0;
    case 0x7F1A96F4u: goto label_7F1A96F4;
    case 0x7F1A96F8u: goto label_7F1A96F8;
    case 0x7F1A96FCu: goto label_7F1A96FC;
    case 0x7F1A9700u: goto label_7F1A9700;
    case 0x7F1A9704u: goto label_7F1A9704;
    case 0x7F1A9708u: goto label_7F1A9708;
    case 0x7F1A970Cu: goto label_7F1A970C;
    case 0x7F1A9710u: goto label_7F1A9710;
    case 0x7F1A9714u: goto label_7F1A9714;
    case 0x7F1A9718u: goto label_7F1A9718;
    case 0x7F1A971Cu: goto label_7F1A971C;
    case 0x7F1A9720u: goto label_7F1A9720;
    case 0x7F1A9724u: goto label_7F1A9724;
    case 0x7F1A9728u: goto label_7F1A9728;
    case 0x7F1A972Cu: goto label_7F1A972C;
    case 0x7F1A9730u: goto label_7F1A9730;
    case 0x7F1A9734u: goto label_7F1A9734;
    case 0x7F1A9738u: goto label_7F1A9738;
    case 0x7F1A973Cu: goto label_7F1A973C;
    case 0x7F1A9740u: goto label_7F1A9740;
    case 0x7F1A9744u: goto label_7F1A9744;
    case 0x7F1A9748u: goto label_7F1A9748;
    case 0x7F1A974Cu: goto label_7F1A974C;
    case 0x7F1A9750u: goto label_7F1A9750;
    case 0x7F1A9754u: goto label_7F1A9754;
    case 0x7F1A9758u: goto label_7F1A9758;
    case 0x7F1A975Cu: goto label_7F1A975C;
    case 0x7F1A9760u: goto label_7F1A9760;
    case 0x7F1A9764u: goto label_7F1A9764;
    case 0x7F1A9768u: goto label_7F1A9768;
    case 0x7F1A976Cu: goto label_7F1A976C;
    case 0x7F1A9770u: goto label_7F1A9770;
    case 0x7F1A9774u: goto label_7F1A9774;
    case 0x7F1A9778u: goto label_7F1A9778;
    case 0x7F1A977Cu: goto label_7F1A977C;
    case 0x7F1A9780u: goto label_7F1A9780;
    case 0x7F1A9784u: goto label_7F1A9784;
    case 0x7F1A9788u: goto label_7F1A9788;
    case 0x7F1A978Cu: goto label_7F1A978C;
    case 0x7F1A9790u: goto label_7F1A9790;
    case 0x7F1A9794u: goto label_7F1A9794;
    case 0x7F1A9798u: goto label_7F1A9798;
    case 0x7F1A979Cu: goto label_7F1A979C;
    case 0x7F1A97A0u: goto label_7F1A97A0;
    case 0x7F1A97A4u: goto label_7F1A97A4;
    case 0x7F1A97A8u: goto label_7F1A97A8;
    case 0x7F1A97ACu: goto label_7F1A97AC;
    case 0x7F1A97B0u: goto label_7F1A97B0;
    case 0x7F1A97B4u: goto label_7F1A97B4;
    case 0x7F1A97B8u: goto label_7F1A97B8;
    case 0x7F1A97BCu: goto label_7F1A97BC;
    case 0x7F1A97C0u: goto label_7F1A97C0;
    case 0x7F1A97C4u: goto label_7F1A97C4;
    case 0x7F1A97C8u: goto label_7F1A97C8;
    case 0x7F1A97CCu: goto label_7F1A97CC;
    case 0x7F1A97D0u: goto label_7F1A97D0;
    case 0x7F1A97D4u: goto label_7F1A97D4;
    case 0x7F1A97D8u: goto label_7F1A97D8;
    case 0x7F1A97DCu: goto label_7F1A97DC;
    case 0x7F1A97E0u: goto label_7F1A97E0;
    case 0x7F1A97E4u: goto label_7F1A97E4;
    case 0x7F1A97E8u: goto label_7F1A97E8;
    case 0x7F1A97ECu: goto label_7F1A97EC;
    case 0x7F1A97F0u: goto label_7F1A97F0;
    case 0x7F1A97F4u: goto label_7F1A97F4;
    case 0x7F1A97F8u: goto label_7F1A97F8;
    case 0x7F1A97FCu: goto label_7F1A97FC;
    case 0x7F1A9800u: goto label_7F1A9800;
    case 0x7F1A9804u: goto label_7F1A9804;
    case 0x7F1A9808u: goto label_7F1A9808;
    case 0x7F1A980Cu: goto label_7F1A980C;
    case 0x7F1A9810u: goto label_7F1A9810;
    case 0x7F1A9814u: goto label_7F1A9814;
    case 0x7F1A9818u: goto label_7F1A9818;
    case 0x7F1A981Cu: goto label_7F1A981C;
    case 0x7F1A9820u: goto label_7F1A9820;
    case 0x7F1A9824u: goto label_7F1A9824;
    case 0x7F1A9828u: goto label_7F1A9828;
    case 0x7F1A982Cu: goto label_7F1A982C;
    case 0x7F1A9830u: goto label_7F1A9830;
    case 0x7F1A9834u: goto label_7F1A9834;
    case 0x7F1A9838u: goto label_7F1A9838;
    case 0x7F1A983Cu: goto label_7F1A983C;
    case 0x7F1A9840u: goto label_7F1A9840;
    case 0x7F1A9844u: goto label_7F1A9844;
    case 0x7F1A9848u: goto label_7F1A9848;
    case 0x7F1A984Cu: goto label_7F1A984C;
    case 0x7F1A9850u: goto label_7F1A9850;
    case 0x7F1A9854u: goto label_7F1A9854;
    case 0x7F1A9858u: goto label_7F1A9858;
    case 0x7F1A985Cu: goto label_7F1A985C;
    case 0x7F1A9860u: goto label_7F1A9860;
    case 0x7F1A9864u: goto label_7F1A9864;
    case 0x7F1A9868u: goto label_7F1A9868;
    case 0x7F1A986Cu: goto label_7F1A986C;
    case 0x7F1A9870u: goto label_7F1A9870;
    case 0x7F1A9874u: goto label_7F1A9874;
    case 0x7F1A9878u: goto label_7F1A9878;
    case 0x7F1A987Cu: goto label_7F1A987C;
    case 0x7F1A9880u: goto label_7F1A9880;
    case 0x7F1A9884u: goto label_7F1A9884;
    case 0x7F1A9888u: goto label_7F1A9888;
    case 0x7F1A988Cu: goto label_7F1A988C;
    case 0x7F1A9890u: goto label_7F1A9890;
    case 0x7F1A9894u: goto label_7F1A9894;
    case 0x7F1A9898u: goto label_7F1A9898;
    case 0x7F1A989Cu: goto label_7F1A989C;
    case 0x7F1A98A0u: goto label_7F1A98A0;
    case 0x7F1A98A4u: goto label_7F1A98A4;
    case 0x7F1A98A8u: goto label_7F1A98A8;
    case 0x7F1A98ACu: goto label_7F1A98AC;
    case 0x7F1A98B0u: goto label_7F1A98B0;
    case 0x7F1A98B4u: goto label_7F1A98B4;
    case 0x7F1A98B8u: goto label_7F1A98B8;
    case 0x7F1A98BCu: goto label_7F1A98BC;
    case 0x7F1A98C0u: goto label_7F1A98C0;
    case 0x7F1A98C4u: goto label_7F1A98C4;
    case 0x7F1A98C8u: goto label_7F1A98C8;
    case 0x7F1A98CCu: goto label_7F1A98CC;
    case 0x7F1A98D0u: goto label_7F1A98D0;
    case 0x7F1A98D4u: goto label_7F1A98D4;
    case 0x7F1A98D8u: goto label_7F1A98D8;
    case 0x7F1A98DCu: goto label_7F1A98DC;
    case 0x7F1A98E0u: goto label_7F1A98E0;
    case 0x7F1A98E4u: goto label_7F1A98E4;
    case 0x7F1A98E8u: goto label_7F1A98E8;
    case 0x7F1A98ECu: goto label_7F1A98EC;
    case 0x7F1A98F0u: goto label_7F1A98F0;
    case 0x7F1A98F4u: goto label_7F1A98F4;
    case 0x7F1A98F8u: goto label_7F1A98F8;
    case 0x7F1A98FCu: goto label_7F1A98FC;
    case 0x7F1A9900u: goto label_7F1A9900;
    case 0x7F1A9904u: goto label_7F1A9904;
    case 0x7F1A9908u: goto label_7F1A9908;
    case 0x7F1A990Cu: goto label_7F1A990C;
    case 0x7F1A9910u: goto label_7F1A9910;
    case 0x7F1A9914u: goto label_7F1A9914;
    case 0x7F1A9918u: goto label_7F1A9918;
    case 0x7F1A991Cu: goto label_7F1A991C;
    case 0x7F1A9920u: goto label_7F1A9920;
    case 0x7F1A9924u: goto label_7F1A9924;
    case 0x7F1A9928u: goto label_7F1A9928;
    case 0x7F1A992Cu: goto label_7F1A992C;
    case 0x7F1A9930u: goto label_7F1A9930;
    case 0x7F1A9934u: goto label_7F1A9934;
    case 0x7F1A9938u: goto label_7F1A9938;
    case 0x7F1A993Cu: goto label_7F1A993C;
    case 0x7F1A9940u: goto label_7F1A9940;
    case 0x7F1A9944u: goto label_7F1A9944;
    case 0x7F1A9948u: goto label_7F1A9948;
    case 0x7F1A994Cu: goto label_7F1A994C;
    case 0x7F1A9950u: goto label_7F1A9950;
    case 0x7F1A9954u: goto label_7F1A9954;
    case 0x7F1A9958u: goto label_7F1A9958;
    case 0x7F1A995Cu: goto label_7F1A995C;
    case 0x7F1A9960u: goto label_7F1A9960;
    case 0x7F1A9964u: goto label_7F1A9964;
    case 0x7F1A9968u: goto label_7F1A9968;
    case 0x7F1A996Cu: goto label_7F1A996C;
    case 0x7F1A9970u: goto label_7F1A9970;
    case 0x7F1A9974u: goto label_7F1A9974;
    case 0x7F1A9978u: goto label_7F1A9978;
    case 0x7F1A997Cu: goto label_7F1A997C;
    case 0x7F1A9980u: goto label_7F1A9980;
    case 0x7F1A9984u: goto label_7F1A9984;
    case 0x7F1A9988u: goto label_7F1A9988;
    case 0x7F1A998Cu: goto label_7F1A998C;
    case 0x7F1A9990u: goto label_7F1A9990;
    case 0x7F1A9994u: goto label_7F1A9994;
    case 0x7F1A9998u: goto label_7F1A9998;
    case 0x7F1A999Cu: goto label_7F1A999C;
    case 0x7F1A99A0u: goto label_7F1A99A0;
    case 0x7F1A99A4u: goto label_7F1A99A4;
    case 0x7F1A99A8u: goto label_7F1A99A8;
    case 0x7F1A99ACu: goto label_7F1A99AC;
    case 0x7F1A99B0u: goto label_7F1A99B0;
    case 0x7F1A99B4u: goto label_7F1A99B4;
    case 0x7F1A99B8u: goto label_7F1A99B8;
    case 0x7F1A99BCu: goto label_7F1A99BC;
    case 0x7F1A99C0u: goto label_7F1A99C0;
    case 0x7F1A99C4u: goto label_7F1A99C4;
    case 0x7F1A99C8u: goto label_7F1A99C8;
    case 0x7F1A99CCu: goto label_7F1A99CC;
    case 0x7F1A99D0u: goto label_7F1A99D0;
    case 0x7F1A99D4u: goto label_7F1A99D4;
    case 0x7F1A99D8u: goto label_7F1A99D8;
    case 0x7F1A99DCu: goto label_7F1A99DC;
    case 0x7F1A99E0u: goto label_7F1A99E0;
    case 0x7F1A99E4u: goto label_7F1A99E4;
    case 0x7F1A99E8u: goto label_7F1A99E8;
    case 0x7F1A99ECu: goto label_7F1A99EC;
    case 0x7F1A99F0u: goto label_7F1A99F0;
    case 0x7F1A99F4u: goto label_7F1A99F4;
    case 0x7F1A99F8u: goto label_7F1A99F8;
    case 0x7F1A99FCu: goto label_7F1A99FC;
    case 0x7F1A9A00u: goto label_7F1A9A00;
    case 0x7F1A9A04u: goto label_7F1A9A04;
    case 0x7F1A9A08u: goto label_7F1A9A08;
    case 0x7F1A9A0Cu: goto label_7F1A9A0C;
    case 0x7F1A9A10u: goto label_7F1A9A10;
    case 0x7F1A9A14u: goto label_7F1A9A14;
    case 0x7F1A9A18u: goto label_7F1A9A18;
    case 0x7F1A9A1Cu: goto label_7F1A9A1C;
    case 0x7F1A9A20u: goto label_7F1A9A20;
    case 0x7F1A9A24u: goto label_7F1A9A24;
    case 0x7F1A9A28u: goto label_7F1A9A28;
    case 0x7F1A9A2Cu: goto label_7F1A9A2C;
    case 0x7F1A9A30u: goto label_7F1A9A30;
    case 0x7F1A9A34u: goto label_7F1A9A34;
    case 0x7F1A9A38u: goto label_7F1A9A38;
    case 0x7F1A9A3Cu: goto label_7F1A9A3C;
    case 0x7F1A9A40u: goto label_7F1A9A40;
    case 0x7F1A9A44u: goto label_7F1A9A44;
    case 0x7F1A9A48u: goto label_7F1A9A48;
    case 0x7F1A9A4Cu: goto label_7F1A9A4C;
    case 0x7F1A9A50u: goto label_7F1A9A50;
    case 0x7F1A9A54u: goto label_7F1A9A54;
    case 0x7F1A9A58u: goto label_7F1A9A58;
    case 0x7F1A9A5Cu: goto label_7F1A9A5C;
    case 0x7F1A9A60u: goto label_7F1A9A60;
    case 0x7F1A9A64u: goto label_7F1A9A64;
    case 0x7F1A9A68u: goto label_7F1A9A68;
    case 0x7F1A9A6Cu: goto label_7F1A9A6C;
    case 0x7F1A9A70u: goto label_7F1A9A70;
    case 0x7F1A9A74u: goto label_7F1A9A74;
    case 0x7F1A9A78u: goto label_7F1A9A78;
    case 0x7F1A9A7Cu: goto label_7F1A9A7C;
    case 0x7F1A9A80u: goto label_7F1A9A80;
    case 0x7F1A9A84u: goto label_7F1A9A84;
    case 0x7F1A9A88u: goto label_7F1A9A88;
    case 0x7F1A9A8Cu: goto label_7F1A9A8C;
    case 0x7F1A9A90u: goto label_7F1A9A90;
    case 0x7F1A9A94u: goto label_7F1A9A94;
    case 0x7F1A9A98u: goto label_7F1A9A98;
    case 0x7F1A9A9Cu: goto label_7F1A9A9C;
    case 0x7F1A9AA0u: goto label_7F1A9AA0;
    case 0x7F1A9AA4u: goto label_7F1A9AA4;
    case 0x7F1A9AA8u: goto label_7F1A9AA8;
    case 0x7F1A9AACu: goto label_7F1A9AAC;
    case 0x7F1A9AB0u: goto label_7F1A9AB0;
    case 0x7F1A9AB4u: goto label_7F1A9AB4;
    case 0x7F1A9AB8u: goto label_7F1A9AB8;
    case 0x7F1A9ABCu: goto label_7F1A9ABC;
    case 0x7F1A9AC0u: goto label_7F1A9AC0;
    case 0x7F1A9AC4u: goto label_7F1A9AC4;
    case 0x7F1A9AC8u: goto label_7F1A9AC8;
    case 0x7F1A9ACCu: goto label_7F1A9ACC;
    case 0x7F1A9AD0u: goto label_7F1A9AD0;
    case 0x7F1A9AD4u: goto label_7F1A9AD4;
    case 0x7F1A9AD8u: goto label_7F1A9AD8;
    case 0x7F1A9ADCu: goto label_7F1A9ADC;
    case 0x7F1A9AE0u: goto label_7F1A9AE0;
    case 0x7F1A9AE4u: goto label_7F1A9AE4;
    case 0x7F1A9AE8u: goto label_7F1A9AE8;
    case 0x7F1A9AECu: goto label_7F1A9AEC;
    case 0x7F1A9AF0u: goto label_7F1A9AF0;
    case 0x7F1A9AF4u: goto label_7F1A9AF4;
    case 0x7F1A9AF8u: goto label_7F1A9AF8;
    case 0x7F1A9AFCu: goto label_7F1A9AFC;
    case 0x7F1A9B00u: goto label_7F1A9B00;
    case 0x7F1A9B04u: goto label_7F1A9B04;
    case 0x7F1A9B08u: goto label_7F1A9B08;
    case 0x7F1A9B0Cu: goto label_7F1A9B0C;
    case 0x7F1A9B10u: goto label_7F1A9B10;
    case 0x7F1A9B14u: goto label_7F1A9B14;
    case 0x7F1A9B18u: goto label_7F1A9B18;
    case 0x7F1A9B1Cu: goto label_7F1A9B1C;
    case 0x7F1A9B20u: goto label_7F1A9B20;
    case 0x7F1A9B24u: goto label_7F1A9B24;
    case 0x7F1A9B28u: goto label_7F1A9B28;
    case 0x7F1A9B2Cu: goto label_7F1A9B2C;
    case 0x7F1A9B30u: goto label_7F1A9B30;
    case 0x7F1A9B34u: goto label_7F1A9B34;
    case 0x7F1A9B38u: goto label_7F1A9B38;
    case 0x7F1A9B3Cu: goto label_7F1A9B3C;
    case 0x7F1A9B40u: goto label_7F1A9B40;
    case 0x7F1A9B44u: goto label_7F1A9B44;
    case 0x7F1A9B48u: goto label_7F1A9B48;
    case 0x7F1A9B4Cu: goto label_7F1A9B4C;
    case 0x7F1A9B50u: goto label_7F1A9B50;
    case 0x7F1A9B54u: goto label_7F1A9B54;
    case 0x7F1A9B58u: goto label_7F1A9B58;
    case 0x7F1A9B5Cu: goto label_7F1A9B5C;
    case 0x7F1A9B60u: goto label_7F1A9B60;
    case 0x7F1A9B64u: goto label_7F1A9B64;
    case 0x7F1A9B68u: goto label_7F1A9B68;
    case 0x7F1A9B6Cu: goto label_7F1A9B6C;
    case 0x7F1A9B70u: goto label_7F1A9B70;
    case 0x7F1A9B74u: goto label_7F1A9B74;
    case 0x7F1A9B78u: goto label_7F1A9B78;
    case 0x7F1A9B7Cu: goto label_7F1A9B7C;
    case 0x7F1A9B80u: goto label_7F1A9B80;
    case 0x7F1A9B84u: goto label_7F1A9B84;
    case 0x7F1A9B88u: goto label_7F1A9B88;
    case 0x7F1A9B8Cu: goto label_7F1A9B8C;
    case 0x7F1A9B90u: goto label_7F1A9B90;
    case 0x7F1A9B94u: goto label_7F1A9B94;
    case 0x7F1A9B98u: goto label_7F1A9B98;
    case 0x7F1A9B9Cu: goto label_7F1A9B9C;
    case 0x7F1A9BA0u: goto label_7F1A9BA0;
    case 0x7F1A9BA4u: goto label_7F1A9BA4;
    case 0x7F1A9BA8u: goto label_7F1A9BA8;
    case 0x7F1A9BACu: goto label_7F1A9BAC;
    case 0x7F1A9BB0u: goto label_7F1A9BB0;
    case 0x7F1A9BB4u: goto label_7F1A9BB4;
    case 0x7F1A9BB8u: goto label_7F1A9BB8;
    case 0x7F1A9BBCu: goto label_7F1A9BBC;
    case 0x7F1A9BC0u: goto label_7F1A9BC0;
    case 0x7F1A9BC4u: goto label_7F1A9BC4;
    case 0x7F1A9BC8u: goto label_7F1A9BC8;
    case 0x7F1A9BCCu: goto label_7F1A9BCC;
    case 0x7F1A9BD0u: goto label_7F1A9BD0;
    case 0x7F1A9BD4u: goto label_7F1A9BD4;
    case 0x7F1A9BD8u: goto label_7F1A9BD8;
    case 0x7F1A9BDCu: goto label_7F1A9BDC;
    case 0x7F1A9BE0u: goto label_7F1A9BE0;
    case 0x7F1A9BE4u: goto label_7F1A9BE4;
    case 0x7F1A9BE8u: goto label_7F1A9BE8;
    case 0x7F1A9BECu: goto label_7F1A9BEC;
    case 0x7F1A9BF0u: goto label_7F1A9BF0;
    case 0x7F1A9BF4u: goto label_7F1A9BF4;
    case 0x7F1A9BF8u: goto label_7F1A9BF8;
    case 0x7F1A9BFCu: goto label_7F1A9BFC;
    case 0x7F1A9C00u: goto label_7F1A9C00;
    case 0x7F1A9C04u: goto label_7F1A9C04;
    case 0x7F1A9C08u: goto label_7F1A9C08;
    case 0x7F1A9C0Cu: goto label_7F1A9C0C;
    case 0x7F1A9C10u: goto label_7F1A9C10;
    case 0x7F1A9C14u: goto label_7F1A9C14;
    case 0x7F1A9C18u: goto label_7F1A9C18;
    case 0x7F1A9C1Cu: goto label_7F1A9C1C;
    case 0x7F1A9C20u: goto label_7F1A9C20;
    case 0x7F1A9C24u: goto label_7F1A9C24;
    case 0x7F1A9C28u: goto label_7F1A9C28;
    case 0x7F1A9C2Cu: goto label_7F1A9C2C;
    case 0x7F1A9C30u: goto label_7F1A9C30;
    case 0x7F1A9C34u: goto label_7F1A9C34;
    case 0x7F1A9C38u: goto label_7F1A9C38;
    case 0x7F1A9C3Cu: goto label_7F1A9C3C;
    case 0x7F1A9C40u: goto label_7F1A9C40;
    case 0x7F1A9C44u: goto label_7F1A9C44;
    case 0x7F1A9C48u: goto label_7F1A9C48;
    case 0x7F1A9C4Cu: goto label_7F1A9C4C;
    case 0x7F1A9C50u: goto label_7F1A9C50;
    case 0x7F1A9C54u: goto label_7F1A9C54;
    case 0x7F1A9C58u: goto label_7F1A9C58;
    case 0x7F1A9C5Cu: goto label_7F1A9C5C;
    case 0x7F1A9C60u: goto label_7F1A9C60;
    case 0x7F1A9C64u: goto label_7F1A9C64;
    case 0x7F1A9C68u: goto label_7F1A9C68;
    case 0x7F1A9C6Cu: goto label_7F1A9C6C;
    case 0x7F1A9C70u: goto label_7F1A9C70;
    case 0x7F1A9C74u: goto label_7F1A9C74;
    case 0x7F1A9C78u: goto label_7F1A9C78;
    case 0x7F1A9C7Cu: goto label_7F1A9C7C;
    case 0x7F1A9C80u: goto label_7F1A9C80;
    case 0x7F1A9C84u: goto label_7F1A9C84;
    case 0x7F1A9C88u: goto label_7F1A9C88;
    case 0x7F1A9C8Cu: goto label_7F1A9C8C;
    case 0x7F1A9C90u: goto label_7F1A9C90;
    case 0x7F1A9C94u: goto label_7F1A9C94;
    case 0x7F1A9C98u: goto label_7F1A9C98;
    case 0x7F1A9C9Cu: goto label_7F1A9C9C;
    case 0x7F1A9CA0u: goto label_7F1A9CA0;
    case 0x7F1A9CA4u: goto label_7F1A9CA4;
    case 0x7F1A9CA8u: goto label_7F1A9CA8;
    case 0x7F1A9CACu: goto label_7F1A9CAC;
    case 0x7F1A9CB0u: goto label_7F1A9CB0;
    case 0x7F1A9CB4u: goto label_7F1A9CB4;
    case 0x7F1A9CB8u: goto label_7F1A9CB8;
    case 0x7F1A9CBCu: goto label_7F1A9CBC;
    case 0x7F1A9CC0u: goto label_7F1A9CC0;
    case 0x7F1A9CC4u: goto label_7F1A9CC4;
    case 0x7F1A9CC8u: goto label_7F1A9CC8;
    case 0x7F1A9CCCu: goto label_7F1A9CCC;
    case 0x7F1A9CD0u: goto label_7F1A9CD0;
    case 0x7F1A9CD4u: goto label_7F1A9CD4;
    case 0x7F1A9CD8u: goto label_7F1A9CD8;
    case 0x7F1A9CDCu: goto label_7F1A9CDC;
    case 0x7F1A9CE0u: goto label_7F1A9CE0;
    case 0x7F1A9CE4u: goto label_7F1A9CE4;
    case 0x7F1A9CE8u: goto label_7F1A9CE8;
    case 0x7F1A9CECu: goto label_7F1A9CEC;
    case 0x7F1A9CF0u: goto label_7F1A9CF0;
    case 0x7F1A9CF4u: goto label_7F1A9CF4;
    case 0x7F1A9CF8u: goto label_7F1A9CF8;
    case 0x7F1A9CFCu: goto label_7F1A9CFC;
    case 0x7F1A9D00u: goto label_7F1A9D00;
    case 0x7F1A9D04u: goto label_7F1A9D04;
    case 0x7F1A9D08u: goto label_7F1A9D08;
    case 0x7F1A9D0Cu: goto label_7F1A9D0C;
    case 0x7F1A9D10u: goto label_7F1A9D10;
    case 0x7F1A9D14u: goto label_7F1A9D14;
    case 0x7F1A9D18u: goto label_7F1A9D18;
    case 0x7F1A9D1Cu: goto label_7F1A9D1C;
    case 0x7F1A9D20u: goto label_7F1A9D20;
    case 0x7F1A9D24u: goto label_7F1A9D24;
    case 0x7F1A9D28u: goto label_7F1A9D28;
    case 0x7F1A9D2Cu: goto label_7F1A9D2C;
    case 0x7F1A9D30u: goto label_7F1A9D30;
    case 0x7F1A9D34u: goto label_7F1A9D34;
    case 0x7F1A9D38u: goto label_7F1A9D38;
    case 0x7F1A9D3Cu: goto label_7F1A9D3C;
    case 0x7F1A9D40u: goto label_7F1A9D40;
    case 0x7F1A9D44u: goto label_7F1A9D44;
    case 0x7F1A9D48u: goto label_7F1A9D48;
    case 0x7F1A9D4Cu: goto label_7F1A9D4C;
    case 0x7F1A9D50u: goto label_7F1A9D50;
    case 0x7F1A9D54u: goto label_7F1A9D54;
    case 0x7F1A9D58u: goto label_7F1A9D58;
    case 0x7F1A9D5Cu: goto label_7F1A9D5C;
    case 0x7F1A9D60u: goto label_7F1A9D60;
    case 0x7F1A9D64u: goto label_7F1A9D64;
    case 0x7F1A9D68u: goto label_7F1A9D68;
    case 0x7F1A9D6Cu: goto label_7F1A9D6C;
    case 0x7F1A9D70u: goto label_7F1A9D70;
    case 0x7F1A9D74u: goto label_7F1A9D74;
    case 0x7F1A9D78u: goto label_7F1A9D78;
    case 0x7F1A9D7Cu: goto label_7F1A9D7C;
    case 0x7F1A9D80u: goto label_7F1A9D80;
    case 0x7F1A9D84u: goto label_7F1A9D84;
    case 0x7F1A9D88u: goto label_7F1A9D88;
    case 0x7F1A9D8Cu: goto label_7F1A9D8C;
    case 0x7F1A9D90u: goto label_7F1A9D90;
    case 0x7F1A9D94u: goto label_7F1A9D94;
    case 0x7F1A9D98u: goto label_7F1A9D98;
    case 0x7F1A9D9Cu: goto label_7F1A9D9C;
    case 0x7F1A9DA0u: goto label_7F1A9DA0;
    case 0x7F1A9DA4u: goto label_7F1A9DA4;
    case 0x7F1A9DA8u: goto label_7F1A9DA8;
    case 0x7F1A9DACu: goto label_7F1A9DAC;
    case 0x7F1A9DB0u: goto label_7F1A9DB0;
    case 0x7F1A9DB4u: goto label_7F1A9DB4;
    case 0x7F1A9DB8u: goto label_7F1A9DB8;
    case 0x7F1A9DBCu: goto label_7F1A9DBC;
    case 0x7F1A9DC0u: goto label_7F1A9DC0;
    case 0x7F1A9DC4u: goto label_7F1A9DC4;
    case 0x7F1A9DC8u: goto label_7F1A9DC8;
    case 0x7F1A9DCCu: goto label_7F1A9DCC;
    case 0x7F1A9DD0u: goto label_7F1A9DD0;
    case 0x7F1A9DD4u: goto label_7F1A9DD4;
    case 0x7F1A9DD8u: goto label_7F1A9DD8;
    case 0x7F1A9DDCu: goto label_7F1A9DDC;
    case 0x7F1A9DE0u: goto label_7F1A9DE0;
    case 0x7F1A9DE4u: goto label_7F1A9DE4;
    case 0x7F1A9DE8u: goto label_7F1A9DE8;
    case 0x7F1A9DECu: goto label_7F1A9DEC;
    case 0x7F1A9DF0u: goto label_7F1A9DF0;
    case 0x7F1A9DF4u: goto label_7F1A9DF4;
    case 0x7F1A9DF8u: goto label_7F1A9DF8;
    case 0x7F1A9DFCu: goto label_7F1A9DFC;
    case 0x7F1A9E00u: goto label_7F1A9E00;
    case 0x7F1A9E04u: goto label_7F1A9E04;
    case 0x7F1A9E08u: goto label_7F1A9E08;
    case 0x7F1A9E0Cu: goto label_7F1A9E0C;
    case 0x7F1A9E10u: goto label_7F1A9E10;
    case 0x7F1A9E14u: goto label_7F1A9E14;
    case 0x7F1A9E18u: goto label_7F1A9E18;
    case 0x7F1A9E1Cu: goto label_7F1A9E1C;
    case 0x7F1A9E20u: goto label_7F1A9E20;
    case 0x7F1A9E24u: goto label_7F1A9E24;
    case 0x7F1A9E28u: goto label_7F1A9E28;
    case 0x7F1A9E2Cu: goto label_7F1A9E2C;
    case 0x7F1A9E30u: goto label_7F1A9E30;
    case 0x7F1A9E34u: goto label_7F1A9E34;
    case 0x7F1A9E38u: goto label_7F1A9E38;
    case 0x7F1A9E3Cu: goto label_7F1A9E3C;
    case 0x7F1A9E40u: goto label_7F1A9E40;
    case 0x7F1A9E44u: goto label_7F1A9E44;
    case 0x7F1A9E48u: goto label_7F1A9E48;
    case 0x7F1A9E4Cu: goto label_7F1A9E4C;
    case 0x7F1A9E50u: goto label_7F1A9E50;
    case 0x7F1A9E54u: goto label_7F1A9E54;
    case 0x7F1A9E58u: goto label_7F1A9E58;
    case 0x7F1A9E5Cu: goto label_7F1A9E5C;
    case 0x7F1A9E60u: goto label_7F1A9E60;
    case 0x7F1A9E64u: goto label_7F1A9E64;
    case 0x7F1A9E68u: goto label_7F1A9E68;
    case 0x7F1A9E6Cu: goto label_7F1A9E6C;
    case 0x7F1A9E70u: goto label_7F1A9E70;
    case 0x7F1A9E74u: goto label_7F1A9E74;
    case 0x7F1A9E78u: goto label_7F1A9E78;
    case 0x7F1A9E7Cu: goto label_7F1A9E7C;
    case 0x7F1A9E80u: goto label_7F1A9E80;
    case 0x7F1A9E84u: goto label_7F1A9E84;
    case 0x7F1A9E88u: goto label_7F1A9E88;
    case 0x7F1A9E8Cu: goto label_7F1A9E8C;
    case 0x7F1A9E90u: goto label_7F1A9E90;
    case 0x7F1A9E94u: goto label_7F1A9E94;
    case 0x7F1A9E98u: goto label_7F1A9E98;
    case 0x7F1A9E9Cu: goto label_7F1A9E9C;
    case 0x7F1A9EA0u: goto label_7F1A9EA0;
    case 0x7F1A9EA4u: goto label_7F1A9EA4;
    case 0x7F1A9EA8u: goto label_7F1A9EA8;
    case 0x7F1A9EACu: goto label_7F1A9EAC;
    case 0x7F1A9EB0u: goto label_7F1A9EB0;
    case 0x7F1A9EB4u: goto label_7F1A9EB4;
    case 0x7F1A9EB8u: goto label_7F1A9EB8;
    case 0x7F1A9EBCu: goto label_7F1A9EBC;
    case 0x7F1A9EC0u: goto label_7F1A9EC0;
    case 0x7F1A9EC4u: goto label_7F1A9EC4;
    case 0x7F1A9EC8u: goto label_7F1A9EC8;
    case 0x7F1A9ECCu: goto label_7F1A9ECC;
    case 0x7F1A9ED0u: goto label_7F1A9ED0;
    case 0x7F1A9ED4u: goto label_7F1A9ED4;
    case 0x7F1A9ED8u: goto label_7F1A9ED8;
    case 0x7F1A9EDCu: goto label_7F1A9EDC;
    case 0x7F1A9EE0u: goto label_7F1A9EE0;
    case 0x7F1A9EE4u: goto label_7F1A9EE4;
    case 0x7F1A9EE8u: goto label_7F1A9EE8;
    case 0x7F1A9EECu: goto label_7F1A9EEC;
    case 0x7F1A9EF0u: goto label_7F1A9EF0;
    case 0x7F1A9EF4u: goto label_7F1A9EF4;
    case 0x7F1A9EF8u: goto label_7F1A9EF8;
    case 0x7F1A9EFCu: goto label_7F1A9EFC;
    case 0x7F1A9F00u: goto label_7F1A9F00;
    case 0x7F1A9F04u: goto label_7F1A9F04;
    case 0x7F1A9F08u: goto label_7F1A9F08;
    case 0x7F1A9F0Cu: goto label_7F1A9F0C;
    case 0x7F1A9F10u: goto label_7F1A9F10;
    case 0x7F1A9F14u: goto label_7F1A9F14;
    case 0x7F1A9F18u: goto label_7F1A9F18;
    case 0x7F1A9F1Cu: goto label_7F1A9F1C;
    case 0x7F1A9F20u: goto label_7F1A9F20;
    case 0x7F1A9F24u: goto label_7F1A9F24;
    case 0x7F1A9F28u: goto label_7F1A9F28;
    case 0x7F1A9F2Cu: goto label_7F1A9F2C;
    case 0x7F1A9F30u: goto label_7F1A9F30;
    case 0x7F1A9F34u: goto label_7F1A9F34;
    case 0x7F1A9F38u: goto label_7F1A9F38;
    case 0x7F1A9F3Cu: goto label_7F1A9F3C;
    case 0x7F1A9F40u: goto label_7F1A9F40;
    case 0x7F1A9F44u: goto label_7F1A9F44;
    case 0x7F1A9F48u: goto label_7F1A9F48;
    case 0x7F1A9F4Cu: goto label_7F1A9F4C;
    case 0x7F1A9F50u: goto label_7F1A9F50;
    case 0x7F1A9F54u: goto label_7F1A9F54;
    case 0x7F1A9F58u: goto label_7F1A9F58;
    case 0x7F1A9F5Cu: goto label_7F1A9F5C;
    case 0x7F1A9F60u: goto label_7F1A9F60;
    case 0x7F1A9F64u: goto label_7F1A9F64;
    case 0x7F1A9F68u: goto label_7F1A9F68;
    case 0x7F1A9F6Cu: goto label_7F1A9F6C;
    case 0x7F1A9F70u: goto label_7F1A9F70;
    case 0x7F1A9F74u: goto label_7F1A9F74;
    case 0x7F1A9F78u: goto label_7F1A9F78;
    case 0x7F1A9F7Cu: goto label_7F1A9F7C;
    case 0x7F1A9F80u: goto label_7F1A9F80;
    case 0x7F1A9F84u: goto label_7F1A9F84;
    case 0x7F1A9F88u: goto label_7F1A9F88;
    case 0x7F1A9F8Cu: goto label_7F1A9F8C;
    case 0x7F1A9F90u: goto label_7F1A9F90;
    case 0x7F1A9F94u: goto label_7F1A9F94;
    case 0x7F1A9F98u: goto label_7F1A9F98;
    case 0x7F1A9F9Cu: goto label_7F1A9F9C;
    case 0x7F1A9FA0u: goto label_7F1A9FA0;
    case 0x7F1A9FA4u: goto label_7F1A9FA4;
    case 0x7F1A9FA8u: goto label_7F1A9FA8;
    case 0x7F1A9FACu: goto label_7F1A9FAC;
    case 0x7F1A9FB0u: goto label_7F1A9FB0;
    case 0x7F1A9FB4u: goto label_7F1A9FB4;
    case 0x7F1A9FB8u: goto label_7F1A9FB8;
    case 0x7F1A9FBCu: goto label_7F1A9FBC;
    case 0x7F1A9FC0u: goto label_7F1A9FC0;
    case 0x7F1A9FC4u: goto label_7F1A9FC4;
    case 0x7F1A9FC8u: goto label_7F1A9FC8;
    case 0x7F1A9FCCu: goto label_7F1A9FCC;
    case 0x7F1A9FD0u: goto label_7F1A9FD0;
    case 0x7F1A9FD4u: goto label_7F1A9FD4;
    case 0x7F1A9FD8u: goto label_7F1A9FD8;
    case 0x7F1A9FDCu: goto label_7F1A9FDC;
    case 0x7F1A9FE0u: goto label_7F1A9FE0;
    case 0x7F1A9FE4u: goto label_7F1A9FE4;
    case 0x7F1A9FE8u: goto label_7F1A9FE8;
    case 0x7F1A9FECu: goto label_7F1A9FEC;
    case 0x7F1A9FF0u: goto label_7F1A9FF0;
    case 0x7F1A9FF4u: goto label_7F1A9FF4;
    case 0x7F1A9FF8u: goto label_7F1A9FF8;
    case 0x7F1A9FFCu: goto label_7F1A9FFC;
    case 0x7F1AA000u: goto label_7F1AA000;
    case 0x7F1AA004u: goto label_7F1AA004;
    case 0x7F1AA008u: goto label_7F1AA008;
    case 0x7F1AA00Cu: goto label_7F1AA00C;
    case 0x7F1AA010u: goto label_7F1AA010;
    case 0x7F1AA014u: goto label_7F1AA014;
    case 0x7F1AA018u: goto label_7F1AA018;
    case 0x7F1AA01Cu: goto label_7F1AA01C;
    case 0x7F1AA020u: goto label_7F1AA020;
    case 0x7F1AA024u: goto label_7F1AA024;
    case 0x7F1AA028u: goto label_7F1AA028;
    case 0x7F1AA02Cu: goto label_7F1AA02C;
    case 0x7F1AA030u: goto label_7F1AA030;
    case 0x7F1AA034u: goto label_7F1AA034;
    case 0x7F1AA038u: goto label_7F1AA038;
    case 0x7F1AA03Cu: goto label_7F1AA03C;
    case 0x7F1AA040u: goto label_7F1AA040;
    case 0x7F1AA044u: goto label_7F1AA044;
    case 0x7F1AA048u: goto label_7F1AA048;
    case 0x7F1AA04Cu: goto label_7F1AA04C;
    case 0x7F1AA050u: goto label_7F1AA050;
    case 0x7F1AA054u: goto label_7F1AA054;
    case 0x7F1AA058u: goto label_7F1AA058;
    case 0x7F1AA05Cu: goto label_7F1AA05C;
    case 0x7F1AA060u: goto label_7F1AA060;
    case 0x7F1AA064u: goto label_7F1AA064;
    case 0x7F1AA068u: goto label_7F1AA068;
    case 0x7F1AA06Cu: goto label_7F1AA06C;
    case 0x7F1AA070u: goto label_7F1AA070;
    case 0x7F1AA074u: goto label_7F1AA074;
    case 0x7F1AA078u: goto label_7F1AA078;
    case 0x7F1AA07Cu: goto label_7F1AA07C;
    case 0x7F1AA080u: goto label_7F1AA080;
    case 0x7F1AA084u: goto label_7F1AA084;
    case 0x7F1AA088u: goto label_7F1AA088;
    case 0x7F1AA08Cu: goto label_7F1AA08C;
    case 0x7F1AA090u: goto label_7F1AA090;
    case 0x7F1AA094u: goto label_7F1AA094;
    case 0x7F1AA098u: goto label_7F1AA098;
    case 0x7F1AA09Cu: goto label_7F1AA09C;
    case 0x7F1AA0A0u: goto label_7F1AA0A0;
    case 0x7F1AA0A4u: goto label_7F1AA0A4;
    case 0x7F1AA0A8u: goto label_7F1AA0A8;
    case 0x7F1AA0ACu: goto label_7F1AA0AC;
    case 0x7F1AA0B0u: goto label_7F1AA0B0;
    case 0x7F1AA0B4u: goto label_7F1AA0B4;
    case 0x7F1AA0B8u: goto label_7F1AA0B8;
    case 0x7F1AA0BCu: goto label_7F1AA0BC;
    case 0x7F1AA0C0u: goto label_7F1AA0C0;
    case 0x7F1AA0C4u: goto label_7F1AA0C4;
    case 0x7F1AA0C8u: goto label_7F1AA0C8;
    case 0x7F1AA0CCu: goto label_7F1AA0CC;
    case 0x7F1AA0D0u: goto label_7F1AA0D0;
    case 0x7F1AA0D4u: goto label_7F1AA0D4;
    case 0x7F1AA0D8u: goto label_7F1AA0D8;
    case 0x7F1AA0DCu: goto label_7F1AA0DC;
    case 0x7F1AA0E0u: goto label_7F1AA0E0;
    case 0x7F1AA0E4u: goto label_7F1AA0E4;
    case 0x7F1AA0E8u: goto label_7F1AA0E8;
    case 0x7F1AA0ECu: goto label_7F1AA0EC;
    case 0x7F1AA0F0u: goto label_7F1AA0F0;
    case 0x7F1AA0F4u: goto label_7F1AA0F4;
    case 0x7F1AA0F8u: goto label_7F1AA0F8;
    case 0x7F1AA0FCu: goto label_7F1AA0FC;
    case 0x7F1AA100u: goto label_7F1AA100;
    case 0x7F1AA104u: goto label_7F1AA104;
    case 0x7F1AA108u: goto label_7F1AA108;
    case 0x7F1AA10Cu: goto label_7F1AA10C;
    case 0x7F1AA110u: goto label_7F1AA110;
    case 0x7F1AA114u: goto label_7F1AA114;
    case 0x7F1AA118u: goto label_7F1AA118;
    case 0x7F1AA11Cu: goto label_7F1AA11C;
    case 0x7F1AA120u: goto label_7F1AA120;
    case 0x7F1AA124u: goto label_7F1AA124;
    case 0x7F1AA128u: goto label_7F1AA128;
    case 0x7F1AA12Cu: goto label_7F1AA12C;
    case 0x7F1AA130u: goto label_7F1AA130;
    case 0x7F1AA134u: goto label_7F1AA134;
    case 0x7F1AA138u: goto label_7F1AA138;
    case 0x7F1AA13Cu: goto label_7F1AA13C;
    case 0x7F1AA140u: goto label_7F1AA140;
    case 0x7F1AA144u: goto label_7F1AA144;
    case 0x7F1AA148u: goto label_7F1AA148;
    case 0x7F1AA14Cu: goto label_7F1AA14C;
    case 0x7F1AA150u: goto label_7F1AA150;
    case 0x7F1AA154u: goto label_7F1AA154;
    case 0x7F1AA158u: goto label_7F1AA158;
    case 0x7F1AA15Cu: goto label_7F1AA15C;
    case 0x7F1AA160u: goto label_7F1AA160;
    case 0x7F1AA164u: goto label_7F1AA164;
    case 0x7F1AA168u: goto label_7F1AA168;
    case 0x7F1AA16Cu: goto label_7F1AA16C;
    case 0x7F1AA170u: goto label_7F1AA170;
    case 0x7F1AA174u: goto label_7F1AA174;
    case 0x7F1AA178u: goto label_7F1AA178;
    case 0x7F1AA17Cu: goto label_7F1AA17C;
    case 0x7F1AA180u: goto label_7F1AA180;
    case 0x7F1AA184u: goto label_7F1AA184;
    case 0x7F1AA188u: goto label_7F1AA188;
    case 0x7F1AA18Cu: goto label_7F1AA18C;
    case 0x7F1AA190u: goto label_7F1AA190;
    case 0x7F1AA194u: goto label_7F1AA194;
    case 0x7F1AA198u: goto label_7F1AA198;
    case 0x7F1AA19Cu: goto label_7F1AA19C;
    case 0x7F1AA1A0u: goto label_7F1AA1A0;
    case 0x7F1AA1A4u: goto label_7F1AA1A4;
    case 0x7F1AA1A8u: goto label_7F1AA1A8;
    case 0x7F1AA1ACu: goto label_7F1AA1AC;
    case 0x7F1AA1B0u: goto label_7F1AA1B0;
    case 0x7F1AA1B4u: goto label_7F1AA1B4;
    case 0x7F1AA1B8u: goto label_7F1AA1B8;
    case 0x7F1AA1BCu: goto label_7F1AA1BC;
    case 0x7F1AA1C0u: goto label_7F1AA1C0;
    case 0x7F1AA1C4u: goto label_7F1AA1C4;
    case 0x7F1AA1C8u: goto label_7F1AA1C8;
    case 0x7F1AA1CCu: goto label_7F1AA1CC;
    case 0x7F1AA1D0u: goto label_7F1AA1D0;
    case 0x7F1AA1D4u: goto label_7F1AA1D4;
    case 0x7F1AA1D8u: goto label_7F1AA1D8;
    case 0x7F1AA1DCu: goto label_7F1AA1DC;
    case 0x7F1AA1E0u: goto label_7F1AA1E0;
    case 0x7F1AA1E4u: goto label_7F1AA1E4;
    case 0x7F1AA1E8u: goto label_7F1AA1E8;
    case 0x7F1AA1ECu: goto label_7F1AA1EC;
    case 0x7F1AA1F0u: goto label_7F1AA1F0;
    case 0x7F1AA1F4u: goto label_7F1AA1F4;
    case 0x7F1AA1F8u: goto label_7F1AA1F8;
    case 0x7F1AA1FCu: goto label_7F1AA1FC;
    case 0x7F1AA200u: goto label_7F1AA200;
    case 0x7F1AA204u: goto label_7F1AA204;
    case 0x7F1AA208u: goto label_7F1AA208;
    case 0x7F1AA20Cu: goto label_7F1AA20C;
    case 0x7F1AA210u: goto label_7F1AA210;
    case 0x7F1AA214u: goto label_7F1AA214;
    case 0x7F1AA218u: goto label_7F1AA218;
    case 0x7F1AA21Cu: goto label_7F1AA21C;
    case 0x7F1AA220u: goto label_7F1AA220;
    case 0x7F1AA224u: goto label_7F1AA224;
    case 0x7F1AA228u: goto label_7F1AA228;
    case 0x7F1AA22Cu: goto label_7F1AA22C;
    case 0x7F1AA230u: goto label_7F1AA230;
    case 0x7F1AA234u: goto label_7F1AA234;
    case 0x7F1AA238u: goto label_7F1AA238;
    case 0x7F1AA23Cu: goto label_7F1AA23C;
    case 0x7F1AA240u: goto label_7F1AA240;
    case 0x7F1AA244u: goto label_7F1AA244;
    case 0x7F1AA248u: goto label_7F1AA248;
    case 0x7F1AA24Cu: goto label_7F1AA24C;
    case 0x7F1AA250u: goto label_7F1AA250;
    case 0x7F1AA254u: goto label_7F1AA254;
    case 0x7F1AA258u: goto label_7F1AA258;
    case 0x7F1AA25Cu: goto label_7F1AA25C;
    case 0x7F1AA260u: goto label_7F1AA260;
    case 0x7F1AA264u: goto label_7F1AA264;
    case 0x7F1AA268u: goto label_7F1AA268;
    case 0x7F1AA26Cu: goto label_7F1AA26C;
    case 0x7F1AA270u: goto label_7F1AA270;
    case 0x7F1AA274u: goto label_7F1AA274;
    case 0x7F1AA278u: goto label_7F1AA278;
    case 0x7F1AA27Cu: goto label_7F1AA27C;
    case 0x7F1AA280u: goto label_7F1AA280;
    case 0x7F1AA284u: goto label_7F1AA284;
    case 0x7F1AA288u: goto label_7F1AA288;
    case 0x7F1AA28Cu: goto label_7F1AA28C;
    case 0x7F1AA290u: goto label_7F1AA290;
    case 0x7F1AA294u: goto label_7F1AA294;
    case 0x7F1AA298u: goto label_7F1AA298;
    case 0x7F1AA29Cu: goto label_7F1AA29C;
    case 0x7F1AA2A0u: goto label_7F1AA2A0;
    case 0x7F1AA2A4u: goto label_7F1AA2A4;
    case 0x7F1AA2A8u: goto label_7F1AA2A8;
    case 0x7F1AA2ACu: goto label_7F1AA2AC;
    case 0x7F1AA2B0u: goto label_7F1AA2B0;
    case 0x7F1AA2B4u: goto label_7F1AA2B4;
    case 0x7F1AA2B8u: goto label_7F1AA2B8;
    case 0x7F1AA2BCu: goto label_7F1AA2BC;
    case 0x7F1AA2C0u: goto label_7F1AA2C0;
    case 0x7F1AA2C4u: goto label_7F1AA2C4;
    case 0x7F1AA2C8u: goto label_7F1AA2C8;
    case 0x7F1AA2CCu: goto label_7F1AA2CC;
    case 0x7F1AA2D0u: goto label_7F1AA2D0;
    case 0x7F1AA2D4u: goto label_7F1AA2D4;
    case 0x7F1AA2D8u: goto label_7F1AA2D8;
    case 0x7F1AA2DCu: goto label_7F1AA2DC;
    case 0x7F1AA2E0u: goto label_7F1AA2E0;
    case 0x7F1AA2E4u: goto label_7F1AA2E4;
    case 0x7F1AA2E8u: goto label_7F1AA2E8;
    case 0x7F1AA2ECu: goto label_7F1AA2EC;
    case 0x7F1AA2F0u: goto label_7F1AA2F0;
    case 0x7F1AA2F4u: goto label_7F1AA2F4;
    case 0x7F1AA2F8u: goto label_7F1AA2F8;
    case 0x7F1AA2FCu: goto label_7F1AA2FC;
    case 0x7F1AA300u: goto label_7F1AA300;
    case 0x7F1AA304u: goto label_7F1AA304;
    case 0x7F1AA308u: goto label_7F1AA308;
    case 0x7F1AA30Cu: goto label_7F1AA30C;
    case 0x7F1AA310u: goto label_7F1AA310;
    case 0x7F1AA314u: goto label_7F1AA314;
    case 0x7F1AA318u: goto label_7F1AA318;
    case 0x7F1AA31Cu: goto label_7F1AA31C;
    case 0x7F1AA320u: goto label_7F1AA320;
    case 0x7F1AA324u: goto label_7F1AA324;
    case 0x7F1AA328u: goto label_7F1AA328;
    case 0x7F1AA32Cu: goto label_7F1AA32C;
    case 0x7F1AA330u: goto label_7F1AA330;
    case 0x7F1AA334u: goto label_7F1AA334;
    case 0x7F1AA338u: goto label_7F1AA338;
    case 0x7F1AA33Cu: goto label_7F1AA33C;
    case 0x7F1AA340u: goto label_7F1AA340;
    case 0x7F1AA344u: goto label_7F1AA344;
    case 0x7F1AA348u: goto label_7F1AA348;
    case 0x7F1AA34Cu: goto label_7F1AA34C;
    case 0x7F1AA350u: goto label_7F1AA350;
    case 0x7F1AA354u: goto label_7F1AA354;
    case 0x7F1AA358u: goto label_7F1AA358;
    case 0x7F1AA35Cu: goto label_7F1AA35C;
    case 0x7F1AA360u: goto label_7F1AA360;
    case 0x7F1AA364u: goto label_7F1AA364;
    case 0x7F1AA368u: goto label_7F1AA368;
    case 0x7F1AA36Cu: goto label_7F1AA36C;
    case 0x7F1AA370u: goto label_7F1AA370;
    case 0x7F1AA374u: goto label_7F1AA374;
    case 0x7F1AA378u: goto label_7F1AA378;
    case 0x7F1AA37Cu: goto label_7F1AA37C;
    case 0x7F1AA380u: goto label_7F1AA380;
    case 0x7F1AA384u: goto label_7F1AA384;
    case 0x7F1AA388u: goto label_7F1AA388;
    case 0x7F1AA38Cu: goto label_7F1AA38C;
    case 0x7F1AA390u: goto label_7F1AA390;
    case 0x7F1AA394u: goto label_7F1AA394;
    case 0x7F1AA398u: goto label_7F1AA398;
    case 0x7F1AA39Cu: goto label_7F1AA39C;
    case 0x7F1AA3A0u: goto label_7F1AA3A0;
    case 0x7F1AA3A4u: goto label_7F1AA3A4;
    case 0x7F1AA3A8u: goto label_7F1AA3A8;
    case 0x7F1AA3ACu: goto label_7F1AA3AC;
    case 0x7F1AA3B0u: goto label_7F1AA3B0;
    case 0x7F1AA3B4u: goto label_7F1AA3B4;
    case 0x7F1AA3B8u: goto label_7F1AA3B8;
    case 0x7F1AA3BCu: goto label_7F1AA3BC;
    case 0x7F1AA3C0u: goto label_7F1AA3C0;
    case 0x7F1AA3C4u: goto label_7F1AA3C4;
    case 0x7F1AA3C8u: goto label_7F1AA3C8;
    case 0x7F1AA3CCu: goto label_7F1AA3CC;
    case 0x7F1AA3D0u: goto label_7F1AA3D0;
    case 0x7F1AA3D4u: goto label_7F1AA3D4;
    case 0x7F1AA3D8u: goto label_7F1AA3D8;
    case 0x7F1AA3DCu: goto label_7F1AA3DC;
    case 0x7F1AA3E0u: goto label_7F1AA3E0;
    case 0x7F1AA3E4u: goto label_7F1AA3E4;
    case 0x7F1AA3E8u: goto label_7F1AA3E8;
    case 0x7F1AA3ECu: goto label_7F1AA3EC;
    case 0x7F1AA3F0u: goto label_7F1AA3F0;
    case 0x7F1AA3F4u: goto label_7F1AA3F4;
    case 0x7F1AA3F8u: goto label_7F1AA3F8;
    case 0x7F1AA3FCu: goto label_7F1AA3FC;
    case 0x7F1AA400u: goto label_7F1AA400;
    case 0x7F1AA404u: goto label_7F1AA404;
    case 0x7F1AA408u: goto label_7F1AA408;
    case 0x7F1AA40Cu: goto label_7F1AA40C;
    case 0x7F1AA410u: goto label_7F1AA410;
    case 0x7F1AA414u: goto label_7F1AA414;
    case 0x7F1AA418u: goto label_7F1AA418;
    case 0x7F1AA41Cu: goto label_7F1AA41C;
    case 0x7F1AA420u: goto label_7F1AA420;
    case 0x7F1AA424u: goto label_7F1AA424;
    case 0x7F1AA428u: goto label_7F1AA428;
    case 0x7F1AA42Cu: goto label_7F1AA42C;
    case 0x7F1AA430u: goto label_7F1AA430;
    case 0x7F1AA434u: goto label_7F1AA434;
    case 0x7F1AA438u: goto label_7F1AA438;
    case 0x7F1AA43Cu: goto label_7F1AA43C;
    case 0x7F1AA440u: goto label_7F1AA440;
    case 0x7F1AA444u: goto label_7F1AA444;
    case 0x7F1AA448u: goto label_7F1AA448;
    case 0x7F1AA44Cu: goto label_7F1AA44C;
    case 0x7F1AA450u: goto label_7F1AA450;
    case 0x7F1AA454u: goto label_7F1AA454;
    case 0x7F1AA458u: goto label_7F1AA458;
    case 0x7F1AA45Cu: goto label_7F1AA45C;
    case 0x7F1AA460u: goto label_7F1AA460;
    case 0x7F1AA464u: goto label_7F1AA464;
    case 0x7F1AA468u: goto label_7F1AA468;
    case 0x7F1AA46Cu: goto label_7F1AA46C;
    case 0x7F1AA470u: goto label_7F1AA470;
    case 0x7F1AA474u: goto label_7F1AA474;
    case 0x7F1AA478u: goto label_7F1AA478;
    case 0x7F1AA47Cu: goto label_7F1AA47C;
    case 0x7F1AA480u: goto label_7F1AA480;
    case 0x7F1AA484u: goto label_7F1AA484;
    case 0x7F1AA488u: goto label_7F1AA488;
    case 0x7F1AA48Cu: goto label_7F1AA48C;
    case 0x7F1AA490u: goto label_7F1AA490;
    case 0x7F1AA494u: goto label_7F1AA494;
    case 0x7F1AA498u: goto label_7F1AA498;
    case 0x7F1AA49Cu: goto label_7F1AA49C;
    case 0x7F1AA4A0u: goto label_7F1AA4A0;
    case 0x7F1AA4A4u: goto label_7F1AA4A4;
    case 0x7F1AA4A8u: goto label_7F1AA4A8;
    case 0x7F1AA4ACu: goto label_7F1AA4AC;
    case 0x7F1AA4B0u: goto label_7F1AA4B0;
    case 0x7F1AA4B4u: goto label_7F1AA4B4;
    case 0x7F1AA4B8u: goto label_7F1AA4B8;
    case 0x7F1AA4BCu: goto label_7F1AA4BC;
    case 0x7F1AA4C0u: goto label_7F1AA4C0;
    case 0x7F1AA4C4u: goto label_7F1AA4C4;
    case 0x7F1AA4C8u: goto label_7F1AA4C8;
    case 0x7F1AA4CCu: goto label_7F1AA4CC;
    case 0x7F1AA4D0u: goto label_7F1AA4D0;
    case 0x7F1AA4D4u: goto label_7F1AA4D4;
    case 0x7F1AA4D8u: goto label_7F1AA4D8;
    case 0x7F1AA4DCu: goto label_7F1AA4DC;
    case 0x7F1AA4E0u: goto label_7F1AA4E0;
    case 0x7F1AA4E4u: goto label_7F1AA4E4;
    case 0x7F1AA4E8u: goto label_7F1AA4E8;
    case 0x7F1AA4ECu: goto label_7F1AA4EC;
    case 0x7F1AA4F0u: goto label_7F1AA4F0;
    case 0x7F1AA4F4u: goto label_7F1AA4F4;
    case 0x7F1AA4F8u: goto label_7F1AA4F8;
    case 0x7F1AA4FCu: goto label_7F1AA4FC;
    case 0x7F1AA500u: goto label_7F1AA500;
    case 0x7F1AA504u: goto label_7F1AA504;
    case 0x7F1AA508u: goto label_7F1AA508;
    case 0x7F1AA50Cu: goto label_7F1AA50C;
    case 0x7F1AA510u: goto label_7F1AA510;
    case 0x7F1AA514u: goto label_7F1AA514;
    case 0x7F1AA518u: goto label_7F1AA518;
    case 0x7F1AA51Cu: goto label_7F1AA51C;
    case 0x7F1AA520u: goto label_7F1AA520;
    case 0x7F1AA524u: goto label_7F1AA524;
    case 0x7F1AA528u: goto label_7F1AA528;
    case 0x7F1AA52Cu: goto label_7F1AA52C;
    case 0x7F1AA530u: goto label_7F1AA530;
    case 0x7F1AA534u: goto label_7F1AA534;
    case 0x7F1AA538u: goto label_7F1AA538;
    case 0x7F1AA53Cu: goto label_7F1AA53C;
    case 0x7F1AA540u: goto label_7F1AA540;
    case 0x7F1AA544u: goto label_7F1AA544;
    case 0x7F1AA548u: goto label_7F1AA548;
    case 0x7F1AA54Cu: goto label_7F1AA54C;
    case 0x7F1AA550u: goto label_7F1AA550;
    case 0x7F1AA554u: goto label_7F1AA554;
    case 0x7F1AA558u: goto label_7F1AA558;
    case 0x7F1AA55Cu: goto label_7F1AA55C;
    case 0x7F1AA560u: goto label_7F1AA560;
    case 0x7F1AA564u: goto label_7F1AA564;
    case 0x7F1AA568u: goto label_7F1AA568;
    case 0x7F1AA56Cu: goto label_7F1AA56C;
    case 0x7F1AA570u: goto label_7F1AA570;
    case 0x7F1AA574u: goto label_7F1AA574;
    case 0x7F1AA578u: goto label_7F1AA578;
    case 0x7F1AA57Cu: goto label_7F1AA57C;
    case 0x7F1AA580u: goto label_7F1AA580;
    case 0x7F1AA584u: goto label_7F1AA584;
    case 0x7F1AA588u: goto label_7F1AA588;
    case 0x7F1AA58Cu: goto label_7F1AA58C;
    case 0x7F1AA590u: goto label_7F1AA590;
    case 0x7F1AA594u: goto label_7F1AA594;
    case 0x7F1AA598u: goto label_7F1AA598;
    case 0x7F1AA59Cu: goto label_7F1AA59C;
    case 0x7F1AA5A0u: goto label_7F1AA5A0;
    case 0x7F1AA5A4u: goto label_7F1AA5A4;
    case 0x7F1AA5A8u: goto label_7F1AA5A8;
    case 0x7F1AA5ACu: goto label_7F1AA5AC;
    case 0x7F1AA5B0u: goto label_7F1AA5B0;
    case 0x7F1AA5B4u: goto label_7F1AA5B4;
    case 0x7F1AA5B8u: goto label_7F1AA5B8;
    case 0x7F1AA5BCu: goto label_7F1AA5BC;
    case 0x7F1AA5C0u: goto label_7F1AA5C0;
    case 0x7F1AA5C4u: goto label_7F1AA5C4;
    case 0x7F1AA5C8u: goto label_7F1AA5C8;
    case 0x7F1AA5CCu: goto label_7F1AA5CC;
    case 0x7F1AA5D0u: goto label_7F1AA5D0;
    case 0x7F1AA5D4u: goto label_7F1AA5D4;
    case 0x7F1AA5D8u: goto label_7F1AA5D8;
    case 0x7F1AA5DCu: goto label_7F1AA5DC;
    case 0x7F1AA5E0u: goto label_7F1AA5E0;
    case 0x7F1AA5E4u: goto label_7F1AA5E4;
    case 0x7F1AA5E8u: goto label_7F1AA5E8;
    case 0x7F1AA5ECu: goto label_7F1AA5EC;
    case 0x7F1AA5F0u: goto label_7F1AA5F0;
    case 0x7F1AA5F4u: goto label_7F1AA5F4;
    case 0x7F1AA5F8u: goto label_7F1AA5F8;
    case 0x7F1AA5FCu: goto label_7F1AA5FC;
    case 0x7F1AA600u: goto label_7F1AA600;
    case 0x7F1AA604u: goto label_7F1AA604;
    case 0x7F1AA608u: goto label_7F1AA608;
    case 0x7F1AA60Cu: goto label_7F1AA60C;
    case 0x7F1AA610u: goto label_7F1AA610;
    case 0x7F1AA614u: goto label_7F1AA614;
    case 0x7F1AA618u: goto label_7F1AA618;
    case 0x7F1AA61Cu: goto label_7F1AA61C;
    case 0x7F1AA620u: goto label_7F1AA620;
    case 0x7F1AA624u: goto label_7F1AA624;
    case 0x7F1AA628u: goto label_7F1AA628;
    case 0x7F1AA62Cu: goto label_7F1AA62C;
    case 0x7F1AA630u: goto label_7F1AA630;
    case 0x7F1AA634u: goto label_7F1AA634;
    case 0x7F1AA638u: goto label_7F1AA638;
    case 0x7F1AA63Cu: goto label_7F1AA63C;
    case 0x7F1AA640u: goto label_7F1AA640;
    case 0x7F1AA644u: goto label_7F1AA644;
    case 0x7F1AA648u: goto label_7F1AA648;
    case 0x7F1AA64Cu: goto label_7F1AA64C;
    case 0x7F1AA650u: goto label_7F1AA650;
    case 0x7F1AA654u: goto label_7F1AA654;
    case 0x7F1AA658u: goto label_7F1AA658;
    case 0x7F1AA65Cu: goto label_7F1AA65C;
    case 0x7F1AA660u: goto label_7F1AA660;
    case 0x7F1AA664u: goto label_7F1AA664;
    case 0x7F1AA668u: goto label_7F1AA668;
    case 0x7F1AA66Cu: goto label_7F1AA66C;
    case 0x7F1AA670u: goto label_7F1AA670;
    case 0x7F1AA674u: goto label_7F1AA674;
    case 0x7F1AA678u: goto label_7F1AA678;
    case 0x7F1AA67Cu: goto label_7F1AA67C;
    case 0x7F1AA680u: goto label_7F1AA680;
    case 0x7F1AA684u: goto label_7F1AA684;
    case 0x7F1AA688u: goto label_7F1AA688;
    case 0x7F1AA68Cu: goto label_7F1AA68C;
    case 0x7F1AA690u: goto label_7F1AA690;
    case 0x7F1AA694u: goto label_7F1AA694;
    case 0x7F1AA698u: goto label_7F1AA698;
    case 0x7F1AA69Cu: goto label_7F1AA69C;
    case 0x7F1AA6A0u: goto label_7F1AA6A0;
    case 0x7F1AA6A4u: goto label_7F1AA6A4;
    case 0x7F1AA6A8u: goto label_7F1AA6A8;
    case 0x7F1AA6ACu: goto label_7F1AA6AC;
    case 0x7F1AA6B0u: goto label_7F1AA6B0;
    case 0x7F1AA6B4u: goto label_7F1AA6B4;
    case 0x7F1AA6B8u: goto label_7F1AA6B8;
    case 0x7F1AA6BCu: goto label_7F1AA6BC;
    case 0x7F1AA6C0u: goto label_7F1AA6C0;
    case 0x7F1AA6C4u: goto label_7F1AA6C4;
    case 0x7F1AA6C8u: goto label_7F1AA6C8;
    case 0x7F1AA6CCu: goto label_7F1AA6CC;
    case 0x7F1AA6D0u: goto label_7F1AA6D0;
    case 0x7F1AA6D4u: goto label_7F1AA6D4;
    case 0x7F1AA6D8u: goto label_7F1AA6D8;
    case 0x7F1AA6DCu: goto label_7F1AA6DC;
    case 0x7F1AA6E0u: goto label_7F1AA6E0;
    case 0x7F1AA6E4u: goto label_7F1AA6E4;
    case 0x7F1AA6E8u: goto label_7F1AA6E8;
    case 0x7F1AA6ECu: goto label_7F1AA6EC;
    case 0x7F1AA6F0u: goto label_7F1AA6F0;
    case 0x7F1AA6F4u: goto label_7F1AA6F4;
    case 0x7F1AA6F8u: goto label_7F1AA6F8;
    case 0x7F1AA6FCu: goto label_7F1AA6FC;
    case 0x7F1AA700u: goto label_7F1AA700;
    case 0x7F1AA704u: goto label_7F1AA704;
    case 0x7F1AA708u: goto label_7F1AA708;
    case 0x7F1AA70Cu: goto label_7F1AA70C;
    case 0x7F1AA710u: goto label_7F1AA710;
    case 0x7F1AA714u: goto label_7F1AA714;
    case 0x7F1AA718u: goto label_7F1AA718;
    case 0x7F1AA71Cu: goto label_7F1AA71C;
    case 0x7F1AA720u: goto label_7F1AA720;
    case 0x7F1AA724u: goto label_7F1AA724;
    case 0x7F1AA728u: goto label_7F1AA728;
    case 0x7F1AA72Cu: goto label_7F1AA72C;
    case 0x7F1AA730u: goto label_7F1AA730;
    case 0x7F1AA734u: goto label_7F1AA734;
    case 0x7F1AA738u: goto label_7F1AA738;
    case 0x7F1AA73Cu: goto label_7F1AA73C;
    case 0x7F1AA740u: goto label_7F1AA740;
    case 0x7F1AA744u: goto label_7F1AA744;
    case 0x7F1AA748u: goto label_7F1AA748;
    case 0x7F1AA74Cu: goto label_7F1AA74C;
    case 0x7F1AA750u: goto label_7F1AA750;
    case 0x7F1AA754u: goto label_7F1AA754;
    case 0x7F1AA758u: goto label_7F1AA758;
    case 0x7F1AA75Cu: goto label_7F1AA75C;
    case 0x7F1AA760u: goto label_7F1AA760;
    case 0x7F1AA764u: goto label_7F1AA764;
    case 0x7F1AA768u: goto label_7F1AA768;
    case 0x7F1AA76Cu: goto label_7F1AA76C;
    case 0x7F1AA770u: goto label_7F1AA770;
    case 0x7F1AA774u: goto label_7F1AA774;
    case 0x7F1AA778u: goto label_7F1AA778;
    case 0x7F1AA77Cu: goto label_7F1AA77C;
    case 0x7F1AA780u: goto label_7F1AA780;
    case 0x7F1AA784u: goto label_7F1AA784;
    case 0x7F1AA788u: goto label_7F1AA788;
    case 0x7F1AA78Cu: goto label_7F1AA78C;
    case 0x7F1AA790u: goto label_7F1AA790;
    case 0x7F1AA794u: goto label_7F1AA794;
    case 0x7F1AA798u: goto label_7F1AA798;
    case 0x7F1AA79Cu: goto label_7F1AA79C;
    case 0x7F1AA7A0u: goto label_7F1AA7A0;
    case 0x7F1AA7A4u: goto label_7F1AA7A4;
    case 0x7F1AA7A8u: goto label_7F1AA7A8;
    case 0x7F1AA7ACu: goto label_7F1AA7AC;
    case 0x7F1AA7B0u: goto label_7F1AA7B0;
    case 0x7F1AA7B4u: goto label_7F1AA7B4;
    case 0x7F1AA7B8u: goto label_7F1AA7B8;
    case 0x7F1AA7BCu: goto label_7F1AA7BC;
    case 0x7F1AA7C0u: goto label_7F1AA7C0;
    case 0x7F1AA7C4u: goto label_7F1AA7C4;
    case 0x7F1AA7C8u: goto label_7F1AA7C8;
    case 0x7F1AA7CCu: goto label_7F1AA7CC;
    case 0x7F1AA7D0u: goto label_7F1AA7D0;
    case 0x7F1AA7D4u: goto label_7F1AA7D4;
    case 0x7F1AA7D8u: goto label_7F1AA7D8;
    case 0x7F1AA7DCu: goto label_7F1AA7DC;
    case 0x7F1AA7E0u: goto label_7F1AA7E0;
    case 0x7F1AA7E4u: goto label_7F1AA7E4;
    case 0x7F1AA7E8u: goto label_7F1AA7E8;
    case 0x7F1AA7ECu: goto label_7F1AA7EC;
    case 0x7F1AA7F0u: goto label_7F1AA7F0;
    case 0x7F1AA7F4u: goto label_7F1AA7F4;
    case 0x7F1AA7F8u: goto label_7F1AA7F8;
    case 0x7F1AA7FCu: goto label_7F1AA7FC;
    case 0x7F1AA800u: goto label_7F1AA800;
    case 0x7F1AA804u: goto label_7F1AA804;
    case 0x7F1AA808u: goto label_7F1AA808;
    case 0x7F1AA80Cu: goto label_7F1AA80C;
    case 0x7F1AA810u: goto label_7F1AA810;
    case 0x7F1AA814u: goto label_7F1AA814;
    case 0x7F1AA818u: goto label_7F1AA818;
    case 0x7F1AA81Cu: goto label_7F1AA81C;
    case 0x7F1AA820u: goto label_7F1AA820;
    case 0x7F1AA824u: goto label_7F1AA824;
    case 0x7F1AA828u: goto label_7F1AA828;
    case 0x7F1AA82Cu: goto label_7F1AA82C;
    case 0x7F1AA830u: goto label_7F1AA830;
    case 0x7F1AA834u: goto label_7F1AA834;
    case 0x7F1AA838u: goto label_7F1AA838;
    case 0x7F1AA83Cu: goto label_7F1AA83C;
    case 0x7F1AA840u: goto label_7F1AA840;
    case 0x7F1AA844u: goto label_7F1AA844;
    case 0x7F1AA848u: goto label_7F1AA848;
    case 0x7F1AA84Cu: goto label_7F1AA84C;
    case 0x7F1AA850u: goto label_7F1AA850;
    case 0x7F1AA854u: goto label_7F1AA854;
    case 0x7F1AA858u: goto label_7F1AA858;
    case 0x7F1AA85Cu: goto label_7F1AA85C;
    case 0x7F1AA860u: goto label_7F1AA860;
    case 0x7F1AA864u: goto label_7F1AA864;
    case 0x7F1AA868u: goto label_7F1AA868;
    case 0x7F1AA86Cu: goto label_7F1AA86C;
    case 0x7F1AA870u: goto label_7F1AA870;
    case 0x7F1AA874u: goto label_7F1AA874;
    case 0x7F1AA878u: goto label_7F1AA878;
    case 0x7F1AA87Cu: goto label_7F1AA87C;
    case 0x7F1AA880u: goto label_7F1AA880;
    case 0x7F1AA884u: goto label_7F1AA884;
    case 0x7F1AA888u: goto label_7F1AA888;
    case 0x7F1AA88Cu: goto label_7F1AA88C;
    case 0x7F1AA890u: goto label_7F1AA890;
    case 0x7F1AA894u: goto label_7F1AA894;
    case 0x7F1AA898u: goto label_7F1AA898;
    case 0x7F1AA89Cu: goto label_7F1AA89C;
    case 0x7F1AA8A0u: goto label_7F1AA8A0;
    case 0x7F1AA8A4u: goto label_7F1AA8A4;
    case 0x7F1AA8A8u: goto label_7F1AA8A8;
    case 0x7F1AA8ACu: goto label_7F1AA8AC;
    case 0x7F1AA8B0u: goto label_7F1AA8B0;
    case 0x7F1AA8B4u: goto label_7F1AA8B4;
    case 0x7F1AA8B8u: goto label_7F1AA8B8;
    case 0x7F1AA8BCu: goto label_7F1AA8BC;
    case 0x7F1AA8C0u: goto label_7F1AA8C0;
    case 0x7F1AA8C4u: goto label_7F1AA8C4;
    case 0x7F1AA8C8u: goto label_7F1AA8C8;
    case 0x7F1AA8CCu: goto label_7F1AA8CC;
    case 0x7F1AA8D0u: goto label_7F1AA8D0;
    case 0x7F1AA8D4u: goto label_7F1AA8D4;
    case 0x7F1AA8D8u: goto label_7F1AA8D8;
    case 0x7F1AA8DCu: goto label_7F1AA8DC;
    case 0x7F1AA8E0u: goto label_7F1AA8E0;
    case 0x7F1AA8E4u: goto label_7F1AA8E4;
    case 0x7F1AA8E8u: goto label_7F1AA8E8;
    case 0x7F1AA8ECu: goto label_7F1AA8EC;
    case 0x7F1AA8F0u: goto label_7F1AA8F0;
    case 0x7F1AA8F4u: goto label_7F1AA8F4;
    case 0x7F1AA8F8u: goto label_7F1AA8F8;
    case 0x7F1AA8FCu: goto label_7F1AA8FC;
    case 0x7F1AA900u: goto label_7F1AA900;
    case 0x7F1AA904u: goto label_7F1AA904;
    case 0x7F1AA908u: goto label_7F1AA908;
    case 0x7F1AA90Cu: goto label_7F1AA90C;
    case 0x7F1AA910u: goto label_7F1AA910;
    case 0x7F1AA914u: goto label_7F1AA914;
    case 0x7F1AA918u: goto label_7F1AA918;
    case 0x7F1AA91Cu: goto label_7F1AA91C;
    case 0x7F1AA920u: goto label_7F1AA920;
    case 0x7F1AA924u: goto label_7F1AA924;
    case 0x7F1AA928u: goto label_7F1AA928;
    case 0x7F1AA92Cu: goto label_7F1AA92C;
    case 0x7F1AA930u: goto label_7F1AA930;
    case 0x7F1AA934u: goto label_7F1AA934;
    case 0x7F1AA938u: goto label_7F1AA938;
    case 0x7F1AA93Cu: goto label_7F1AA93C;
    case 0x7F1AA940u: goto label_7F1AA940;
    case 0x7F1AA944u: goto label_7F1AA944;
    case 0x7F1AA948u: goto label_7F1AA948;
    case 0x7F1AA94Cu: goto label_7F1AA94C;
    case 0x7F1AA950u: goto label_7F1AA950;
    case 0x7F1AA954u: goto label_7F1AA954;
    case 0x7F1AA958u: goto label_7F1AA958;
    case 0x7F1AA95Cu: goto label_7F1AA95C;
    case 0x7F1AA960u: goto label_7F1AA960;
    case 0x7F1AA964u: goto label_7F1AA964;
    case 0x7F1AA968u: goto label_7F1AA968;
    case 0x7F1AA96Cu: goto label_7F1AA96C;
    case 0x7F1AA970u: goto label_7F1AA970;
    case 0x7F1AA974u: goto label_7F1AA974;
    case 0x7F1AA978u: goto label_7F1AA978;
    case 0x7F1AA97Cu: goto label_7F1AA97C;
    case 0x7F1AA980u: goto label_7F1AA980;
    case 0x7F1AA984u: goto label_7F1AA984;
    case 0x7F1AA988u: goto label_7F1AA988;
    case 0x7F1AA98Cu: goto label_7F1AA98C;
    case 0x7F1AA990u: goto label_7F1AA990;
    case 0x7F1AA994u: goto label_7F1AA994;
    case 0x7F1AA998u: goto label_7F1AA998;
    case 0x7F1AA99Cu: goto label_7F1AA99C;
    case 0x7F1AA9A0u: goto label_7F1AA9A0;
    case 0x7F1AA9A4u: goto label_7F1AA9A4;
    case 0x7F1AA9A8u: goto label_7F1AA9A8;
    case 0x7F1AA9ACu: goto label_7F1AA9AC;
    case 0x7F1AA9B0u: goto label_7F1AA9B0;
    case 0x7F1AA9B4u: goto label_7F1AA9B4;
    case 0x7F1AA9B8u: goto label_7F1AA9B8;
    case 0x7F1AA9BCu: goto label_7F1AA9BC;
    case 0x7F1AA9C0u: goto label_7F1AA9C0;
    case 0x7F1AA9C4u: goto label_7F1AA9C4;
    case 0x7F1AA9C8u: goto label_7F1AA9C8;
    case 0x7F1AA9CCu: goto label_7F1AA9CC;
    case 0x7F1AA9D0u: goto label_7F1AA9D0;
    case 0x7F1AA9D4u: goto label_7F1AA9D4;
    case 0x7F1AA9D8u: goto label_7F1AA9D8;
    case 0x7F1AA9DCu: goto label_7F1AA9DC;
    case 0x7F1AA9E0u: goto label_7F1AA9E0;
    case 0x7F1AA9E4u: goto label_7F1AA9E4;
    case 0x7F1AA9E8u: goto label_7F1AA9E8;
    case 0x7F1AA9ECu: goto label_7F1AA9EC;
    case 0x7F1AA9F0u: goto label_7F1AA9F0;
    case 0x7F1AA9F4u: goto label_7F1AA9F4;
    case 0x7F1AA9F8u: goto label_7F1AA9F8;
    case 0x7F1AA9FCu: goto label_7F1AA9FC;
    case 0x7F1AAA00u: goto label_7F1AAA00;
    case 0x7F1AAA04u: goto label_7F1AAA04;
    case 0x7F1AAA08u: goto label_7F1AAA08;
    case 0x7F1AAA0Cu: goto label_7F1AAA0C;
    case 0x7F1AAA10u: goto label_7F1AAA10;
    case 0x7F1AAA14u: goto label_7F1AAA14;
    case 0x7F1AAA18u: goto label_7F1AAA18;
    case 0x7F1AAA1Cu: goto label_7F1AAA1C;
    case 0x7F1AAA20u: goto label_7F1AAA20;
    case 0x7F1AAA24u: goto label_7F1AAA24;
    case 0x7F1AAA28u: goto label_7F1AAA28;
    case 0x7F1AAA2Cu: goto label_7F1AAA2C;
    case 0x7F1AAA30u: goto label_7F1AAA30;
    case 0x7F1AAA34u: goto label_7F1AAA34;
    case 0x7F1AAA38u: goto label_7F1AAA38;
    case 0x7F1AAA3Cu: goto label_7F1AAA3C;
    case 0x7F1AAA40u: goto label_7F1AAA40;
    case 0x7F1AAA44u: goto label_7F1AAA44;
    case 0x7F1AAA48u: goto label_7F1AAA48;
    case 0x7F1AAA4Cu: goto label_7F1AAA4C;
    case 0x7F1AAA50u: goto label_7F1AAA50;
    case 0x7F1AAA54u: goto label_7F1AAA54;
    case 0x7F1AAA58u: goto label_7F1AAA58;
    case 0x7F1AAA5Cu: goto label_7F1AAA5C;
    case 0x7F1AAA60u: goto label_7F1AAA60;
    case 0x7F1AAA64u: goto label_7F1AAA64;
    case 0x7F1AAA68u: goto label_7F1AAA68;
    case 0x7F1AAA6Cu: goto label_7F1AAA6C;
    case 0x7F1AAA70u: goto label_7F1AAA70;
    case 0x7F1AAA74u: goto label_7F1AAA74;
    case 0x7F1AAA78u: goto label_7F1AAA78;
    case 0x7F1AAA7Cu: goto label_7F1AAA7C;
    case 0x7F1AAA80u: goto label_7F1AAA80;
    case 0x7F1AAA84u: goto label_7F1AAA84;
    case 0x7F1AAA88u: goto label_7F1AAA88;
    case 0x7F1AAA8Cu: goto label_7F1AAA8C;
    case 0x7F1AAA90u: goto label_7F1AAA90;
    case 0x7F1AAA94u: goto label_7F1AAA94;
    case 0x7F1AAA98u: goto label_7F1AAA98;
    case 0x7F1AAA9Cu: goto label_7F1AAA9C;
    case 0x7F1AAAA0u: goto label_7F1AAAA0;
    case 0x7F1AAAA4u: goto label_7F1AAAA4;
    case 0x7F1AAAA8u: goto label_7F1AAAA8;
    case 0x7F1AAAACu: goto label_7F1AAAAC;
    case 0x7F1AAAB0u: goto label_7F1AAAB0;
    case 0x7F1AAAB4u: goto label_7F1AAAB4;
    case 0x7F1AAAB8u: goto label_7F1AAAB8;
    case 0x7F1AAABCu: goto label_7F1AAABC;
    case 0x7F1AAAC0u: goto label_7F1AAAC0;
    case 0x7F1AAAC4u: goto label_7F1AAAC4;
    case 0x7F1AAAC8u: goto label_7F1AAAC8;
    case 0x7F1AAACCu: goto label_7F1AAACC;
    case 0x7F1AAAD0u: goto label_7F1AAAD0;
    case 0x7F1AAAD4u: goto label_7F1AAAD4;
    case 0x7F1AAAD8u: goto label_7F1AAAD8;
    case 0x7F1AAADCu: goto label_7F1AAADC;
    case 0x7F1AAAE0u: goto label_7F1AAAE0;
    case 0x7F1AAAE4u: goto label_7F1AAAE4;
    case 0x7F1AAAE8u: goto label_7F1AAAE8;
    case 0x7F1AAAECu: goto label_7F1AAAEC;
    case 0x7F1AAAF0u: goto label_7F1AAAF0;
    case 0x7F1AAAF4u: goto label_7F1AAAF4;
    case 0x7F1AAAF8u: goto label_7F1AAAF8;
    case 0x7F1AAAFCu: goto label_7F1AAAFC;
    case 0x7F1AAB00u: goto label_7F1AAB00;
    case 0x7F1AAB04u: goto label_7F1AAB04;
    case 0x7F1AAB08u: goto label_7F1AAB08;
    case 0x7F1AAB0Cu: goto label_7F1AAB0C;
    case 0x7F1AAB10u: goto label_7F1AAB10;
    case 0x7F1AAB14u: goto label_7F1AAB14;
    case 0x7F1AAB18u: goto label_7F1AAB18;
    case 0x7F1AAB1Cu: goto label_7F1AAB1C;
    case 0x7F1AAB20u: goto label_7F1AAB20;
    case 0x7F1AAB24u: goto label_7F1AAB24;
    case 0x7F1AAB28u: goto label_7F1AAB28;
    case 0x7F1AAB2Cu: goto label_7F1AAB2C;
    case 0x7F1AAB30u: goto label_7F1AAB30;
    case 0x7F1AAB34u: goto label_7F1AAB34;
    case 0x7F1AAB38u: goto label_7F1AAB38;
    case 0x7F1AAB3Cu: goto label_7F1AAB3C;
    case 0x7F1AAB40u: goto label_7F1AAB40;
    case 0x7F1AAB44u: goto label_7F1AAB44;
    case 0x7F1AAB48u: goto label_7F1AAB48;
    case 0x7F1AAB4Cu: goto label_7F1AAB4C;
    case 0x7F1AAB50u: goto label_7F1AAB50;
    case 0x7F1AAB54u: goto label_7F1AAB54;
    case 0x7F1AAB58u: goto label_7F1AAB58;
    case 0x7F1AAB5Cu: goto label_7F1AAB5C;
    case 0x7F1AAB60u: goto label_7F1AAB60;
    case 0x7F1AAB64u: goto label_7F1AAB64;
    case 0x7F1AAB68u: goto label_7F1AAB68;
    case 0x7F1AAB6Cu: goto label_7F1AAB6C;
    case 0x7F1AAB70u: goto label_7F1AAB70;
    case 0x7F1AAB74u: goto label_7F1AAB74;
    case 0x7F1AAB78u: goto label_7F1AAB78;
    case 0x7F1AAB7Cu: goto label_7F1AAB7C;
    case 0x7F1AAB80u: goto label_7F1AAB80;
    case 0x7F1AAB84u: goto label_7F1AAB84;
    case 0x7F1AAB88u: goto label_7F1AAB88;
    case 0x7F1AAB8Cu: goto label_7F1AAB8C;
    case 0x7F1AAB90u: goto label_7F1AAB90;
    case 0x7F1AAB94u: goto label_7F1AAB94;
    case 0x7F1AAB98u: goto label_7F1AAB98;
    case 0x7F1AAB9Cu: goto label_7F1AAB9C;
    case 0x7F1AABA0u: goto label_7F1AABA0;
    case 0x7F1AABA4u: goto label_7F1AABA4;
    case 0x7F1AABA8u: goto label_7F1AABA8;
    case 0x7F1AABACu: goto label_7F1AABAC;
    case 0x7F1AABB0u: goto label_7F1AABB0;
    case 0x7F1AABB4u: goto label_7F1AABB4;
    case 0x7F1AABB8u: goto label_7F1AABB8;
    case 0x7F1AABBCu: goto label_7F1AABBC;
    case 0x7F1AABC0u: goto label_7F1AABC0;
    case 0x7F1AABC4u: goto label_7F1AABC4;
    case 0x7F1AABC8u: goto label_7F1AABC8;
    case 0x7F1AABCCu: goto label_7F1AABCC;
    case 0x7F1AABD0u: goto label_7F1AABD0;
    case 0x7F1AABD4u: goto label_7F1AABD4;
    case 0x7F1AABD8u: goto label_7F1AABD8;
    case 0x7F1AABDCu: goto label_7F1AABDC;
    case 0x7F1AABE0u: goto label_7F1AABE0;
    case 0x7F1AABE4u: goto label_7F1AABE4;
    case 0x7F1AABE8u: goto label_7F1AABE8;
    case 0x7F1AABECu: goto label_7F1AABEC;
    case 0x7F1AABF0u: goto label_7F1AABF0;
    case 0x7F1AABF4u: goto label_7F1AABF4;
    case 0x7F1AABF8u: goto label_7F1AABF8;
    case 0x7F1AABFCu: goto label_7F1AABFC;
    case 0x7F1AAC00u: goto label_7F1AAC00;
    case 0x7F1AAC04u: goto label_7F1AAC04;
    case 0x7F1AAC08u: goto label_7F1AAC08;
    case 0x7F1AAC0Cu: goto label_7F1AAC0C;
    case 0x7F1AAC10u: goto label_7F1AAC10;
    case 0x7F1AAC14u: goto label_7F1AAC14;
    case 0x7F1AAC18u: goto label_7F1AAC18;
    case 0x7F1AAC1Cu: goto label_7F1AAC1C;
    case 0x7F1AAC20u: goto label_7F1AAC20;
    case 0x7F1AAC24u: goto label_7F1AAC24;
    case 0x7F1AAC28u: goto label_7F1AAC28;
    case 0x7F1AAC2Cu: goto label_7F1AAC2C;
    case 0x7F1AAC30u: goto label_7F1AAC30;
    case 0x7F1AAC34u: goto label_7F1AAC34;
    case 0x7F1AAC38u: goto label_7F1AAC38;
    case 0x7F1AAC3Cu: goto label_7F1AAC3C;
    case 0x7F1AAC40u: goto label_7F1AAC40;
    case 0x7F1AAC44u: goto label_7F1AAC44;
    case 0x7F1AAC48u: goto label_7F1AAC48;
    case 0x7F1AAC4Cu: goto label_7F1AAC4C;
    case 0x7F1AAC50u: goto label_7F1AAC50;
    case 0x7F1AAC54u: goto label_7F1AAC54;
    case 0x7F1AAC58u: goto label_7F1AAC58;
    case 0x7F1AAC5Cu: goto label_7F1AAC5C;
    case 0x7F1AAC60u: goto label_7F1AAC60;
    case 0x7F1AAC64u: goto label_7F1AAC64;
    case 0x7F1AAC68u: goto label_7F1AAC68;
    case 0x7F1AAC6Cu: goto label_7F1AAC6C;
    case 0x7F1AAC70u: goto label_7F1AAC70;
    case 0x7F1AAC74u: goto label_7F1AAC74;
    case 0x7F1AAC78u: goto label_7F1AAC78;
    case 0x7F1AAC7Cu: goto label_7F1AAC7C;
    case 0x7F1AAC80u: goto label_7F1AAC80;
    case 0x7F1AAC84u: goto label_7F1AAC84;
    case 0x7F1AAC88u: goto label_7F1AAC88;
    case 0x7F1AAC8Cu: goto label_7F1AAC8C;
    case 0x7F1AAC90u: goto label_7F1AAC90;
    case 0x7F1AAC94u: goto label_7F1AAC94;
    case 0x7F1AAC98u: goto label_7F1AAC98;
    case 0x7F1AAC9Cu: goto label_7F1AAC9C;
    case 0x7F1AACA0u: goto label_7F1AACA0;
    case 0x7F1AACA4u: goto label_7F1AACA4;
    case 0x7F1AACA8u: goto label_7F1AACA8;
    case 0x7F1AACACu: goto label_7F1AACAC;
    case 0x7F1AACB0u: goto label_7F1AACB0;
    case 0x7F1AACB4u: goto label_7F1AACB4;
    case 0x7F1AACB8u: goto label_7F1AACB8;
    case 0x7F1AACBCu: goto label_7F1AACBC;
    case 0x7F1AACC0u: goto label_7F1AACC0;
    case 0x7F1AACC4u: goto label_7F1AACC4;
    case 0x7F1AACC8u: goto label_7F1AACC8;
    case 0x7F1AACCCu: goto label_7F1AACCC;
    case 0x7F1AACD0u: goto label_7F1AACD0;
    case 0x7F1AACD4u: goto label_7F1AACD4;
    case 0x7F1AACD8u: goto label_7F1AACD8;
    case 0x7F1AACDCu: goto label_7F1AACDC;
    case 0x7F1AACE0u: goto label_7F1AACE0;
    case 0x7F1AACE4u: goto label_7F1AACE4;
    case 0x7F1AACE8u: goto label_7F1AACE8;
    case 0x7F1AACECu: goto label_7F1AACEC;
    case 0x7F1AACF0u: goto label_7F1AACF0;
    case 0x7F1AACF4u: goto label_7F1AACF4;
    case 0x7F1AACF8u: goto label_7F1AACF8;
    case 0x7F1AACFCu: goto label_7F1AACFC;
    case 0x7F1AAD00u: goto label_7F1AAD00;
    case 0x7F1AAD04u: goto label_7F1AAD04;
    case 0x7F1AAD08u: goto label_7F1AAD08;
    case 0x7F1AAD0Cu: goto label_7F1AAD0C;
    case 0x7F1AAD10u: goto label_7F1AAD10;
    case 0x7F1AAD14u: goto label_7F1AAD14;
    case 0x7F1AAD18u: goto label_7F1AAD18;
    case 0x7F1AAD1Cu: goto label_7F1AAD1C;
    case 0x7F1AAD20u: goto label_7F1AAD20;
    case 0x7F1AAD24u: goto label_7F1AAD24;
    case 0x7F1AAD28u: goto label_7F1AAD28;
    case 0x7F1AAD2Cu: goto label_7F1AAD2C;
    case 0x7F1AAD30u: goto label_7F1AAD30;
    case 0x7F1AAD34u: goto label_7F1AAD34;
    case 0x7F1AAD38u: goto label_7F1AAD38;
    case 0x7F1AAD3Cu: goto label_7F1AAD3C;
    case 0x7F1AAD40u: goto label_7F1AAD40;
    case 0x7F1AAD44u: goto label_7F1AAD44;
    case 0x7F1AAD48u: goto label_7F1AAD48;
    case 0x7F1AAD4Cu: goto label_7F1AAD4C;
    case 0x7F1AAD50u: goto label_7F1AAD50;
    case 0x7F1AAD54u: goto label_7F1AAD54;
    case 0x7F1AAD58u: goto label_7F1AAD58;
    case 0x7F1AAD5Cu: goto label_7F1AAD5C;
    case 0x7F1AAD60u: goto label_7F1AAD60;
    case 0x7F1AAD64u: goto label_7F1AAD64;
    case 0x7F1AAD68u: goto label_7F1AAD68;
    case 0x7F1AAD6Cu: goto label_7F1AAD6C;
    case 0x7F1AAD70u: goto label_7F1AAD70;
    case 0x7F1AAD74u: goto label_7F1AAD74;
    case 0x7F1AAD78u: goto label_7F1AAD78;
    case 0x7F1AAD7Cu: goto label_7F1AAD7C;
    case 0x7F1AAD80u: goto label_7F1AAD80;
    case 0x7F1AAD84u: goto label_7F1AAD84;
    case 0x7F1AAD88u: goto label_7F1AAD88;
    case 0x7F1AAD8Cu: goto label_7F1AAD8C;
    case 0x7F1AAD90u: goto label_7F1AAD90;
    case 0x7F1AAD94u: goto label_7F1AAD94;
    case 0x7F1AAD98u: goto label_7F1AAD98;
    case 0x7F1AAD9Cu: goto label_7F1AAD9C;
    case 0x7F1AADA0u: goto label_7F1AADA0;
    case 0x7F1AADA4u: goto label_7F1AADA4;
    case 0x7F1AADA8u: goto label_7F1AADA8;
    case 0x7F1AADACu: goto label_7F1AADAC;
    case 0x7F1AADB0u: goto label_7F1AADB0;
    case 0x7F1AADB4u: goto label_7F1AADB4;
    case 0x7F1AADB8u: goto label_7F1AADB8;
    case 0x7F1AADBCu: goto label_7F1AADBC;
    case 0x7F1AADC0u: goto label_7F1AADC0;
    case 0x7F1AADC4u: goto label_7F1AADC4;
    case 0x7F1AADC8u: goto label_7F1AADC8;
    case 0x7F1AADCCu: goto label_7F1AADCC;
    case 0x7F1AADD0u: goto label_7F1AADD0;
    case 0x7F1AADD4u: goto label_7F1AADD4;
    case 0x7F1AADD8u: goto label_7F1AADD8;
    case 0x7F1AADDCu: goto label_7F1AADDC;
    case 0x7F1AADE0u: goto label_7F1AADE0;
    case 0x7F1AADE4u: goto label_7F1AADE4;
    case 0x7F1AADE8u: goto label_7F1AADE8;
    case 0x7F1AADECu: goto label_7F1AADEC;
    case 0x7F1AADF0u: goto label_7F1AADF0;
    case 0x7F1AADF4u: goto label_7F1AADF4;
    case 0x7F1AADF8u: goto label_7F1AADF8;
    case 0x7F1AADFCu: goto label_7F1AADFC;
    case 0x7F1AAE00u: goto label_7F1AAE00;
    case 0x7F1AAE04u: goto label_7F1AAE04;
    case 0x7F1AAE08u: goto label_7F1AAE08;
    case 0x7F1AAE0Cu: goto label_7F1AAE0C;
    case 0x7F1AAE10u: goto label_7F1AAE10;
    case 0x7F1AAE14u: goto label_7F1AAE14;
    case 0x7F1AAE18u: goto label_7F1AAE18;
    case 0x7F1AAE1Cu: goto label_7F1AAE1C;
    case 0x7F1AAE20u: goto label_7F1AAE20;
    case 0x7F1AAE24u: goto label_7F1AAE24;
    case 0x7F1AAE28u: goto label_7F1AAE28;
    case 0x7F1AAE2Cu: goto label_7F1AAE2C;
    case 0x7F1AAE30u: goto label_7F1AAE30;
    case 0x7F1AAE34u: goto label_7F1AAE34;
    case 0x7F1AAE38u: goto label_7F1AAE38;
    case 0x7F1AAE3Cu: goto label_7F1AAE3C;
    case 0x7F1AAE40u: goto label_7F1AAE40;
    case 0x7F1AAE44u: goto label_7F1AAE44;
    case 0x7F1AAE48u: goto label_7F1AAE48;
    case 0x7F1AAE4Cu: goto label_7F1AAE4C;
    case 0x7F1AAE50u: goto label_7F1AAE50;
    case 0x7F1AAE54u: goto label_7F1AAE54;
    case 0x7F1AAE58u: goto label_7F1AAE58;
    case 0x7F1AAE5Cu: goto label_7F1AAE5C;
    case 0x7F1AAE60u: goto label_7F1AAE60;
    case 0x7F1AAE64u: goto label_7F1AAE64;
    case 0x7F1AAE68u: goto label_7F1AAE68;
    case 0x7F1AAE6Cu: goto label_7F1AAE6C;
    case 0x7F1AAE70u: goto label_7F1AAE70;
    case 0x7F1AAE74u: goto label_7F1AAE74;
    case 0x7F1AAE78u: goto label_7F1AAE78;
    case 0x7F1AAE7Cu: goto label_7F1AAE7C;
    case 0x7F1AAE80u: goto label_7F1AAE80;
    case 0x7F1AAE84u: goto label_7F1AAE84;
    case 0x7F1AAE88u: goto label_7F1AAE88;
    case 0x7F1AAE8Cu: goto label_7F1AAE8C;
    case 0x7F1AAE90u: goto label_7F1AAE90;
    case 0x7F1AAE94u: goto label_7F1AAE94;
    case 0x7F1AAE98u: goto label_7F1AAE98;
    case 0x7F1AAE9Cu: goto label_7F1AAE9C;
    case 0x7F1AAEA0u: goto label_7F1AAEA0;
    case 0x7F1AAEA4u: goto label_7F1AAEA4;
    case 0x7F1AAEA8u: goto label_7F1AAEA8;
    case 0x7F1AAEACu: goto label_7F1AAEAC;
    case 0x7F1AAEB0u: goto label_7F1AAEB0;
    case 0x7F1AAEB4u: goto label_7F1AAEB4;
    case 0x7F1AAEB8u: goto label_7F1AAEB8;
    case 0x7F1AAEBCu: goto label_7F1AAEBC;
    case 0x7F1AAEC0u: goto label_7F1AAEC0;
    case 0x7F1AAEC4u: goto label_7F1AAEC4;
    case 0x7F1AAEC8u: goto label_7F1AAEC8;
    case 0x7F1AAECCu: goto label_7F1AAECC;
    case 0x7F1AAED0u: goto label_7F1AAED0;
    case 0x7F1AAED4u: goto label_7F1AAED4;
    case 0x7F1AAED8u: goto label_7F1AAED8;
    case 0x7F1AAEDCu: goto label_7F1AAEDC;
    case 0x7F1AAEE0u: goto label_7F1AAEE0;
    case 0x7F1AAEE4u: goto label_7F1AAEE4;
    case 0x7F1AAEE8u: goto label_7F1AAEE8;
    case 0x7F1AAEECu: goto label_7F1AAEEC;
    case 0x7F1AAEF0u: goto label_7F1AAEF0;
    case 0x7F1AAEF4u: goto label_7F1AAEF4;
    case 0x7F1AAEF8u: goto label_7F1AAEF8;
    case 0x7F1AAEFCu: goto label_7F1AAEFC;
    case 0x7F1AAF00u: goto label_7F1AAF00;
    case 0x7F1AAF04u: goto label_7F1AAF04;
    case 0x7F1AAF08u: goto label_7F1AAF08;
    case 0x7F1AAF0Cu: goto label_7F1AAF0C;
    case 0x7F1AAF10u: goto label_7F1AAF10;
    case 0x7F1AAF14u: goto label_7F1AAF14;
    case 0x7F1AAF18u: goto label_7F1AAF18;
    case 0x7F1AAF1Cu: goto label_7F1AAF1C;
    case 0x7F1AAF20u: goto label_7F1AAF20;
    case 0x7F1AAF24u: goto label_7F1AAF24;
    case 0x7F1AAF28u: goto label_7F1AAF28;
    case 0x7F1AAF2Cu: goto label_7F1AAF2C;
    case 0x7F1AAF30u: goto label_7F1AAF30;
    case 0x7F1AAF34u: goto label_7F1AAF34;
    case 0x7F1AAF38u: goto label_7F1AAF38;
    case 0x7F1AAF3Cu: goto label_7F1AAF3C;
    case 0x7F1AAF40u: goto label_7F1AAF40;
    case 0x7F1AAF44u: goto label_7F1AAF44;
    case 0x7F1AAF48u: goto label_7F1AAF48;
    case 0x7F1AAF4Cu: goto label_7F1AAF4C;
    case 0x7F1AAF50u: goto label_7F1AAF50;
    case 0x7F1AAF54u: goto label_7F1AAF54;
    case 0x7F1AAF58u: goto label_7F1AAF58;
    case 0x7F1AAF5Cu: goto label_7F1AAF5C;
    case 0x7F1AAF60u: goto label_7F1AAF60;
    case 0x7F1AAF64u: goto label_7F1AAF64;
    case 0x7F1AAF68u: goto label_7F1AAF68;
    case 0x7F1AAF6Cu: goto label_7F1AAF6C;
    case 0x7F1AAF70u: goto label_7F1AAF70;
    case 0x7F1AAF74u: goto label_7F1AAF74;
    case 0x7F1AAF78u: goto label_7F1AAF78;
    case 0x7F1AAF7Cu: goto label_7F1AAF7C;
    case 0x7F1AAF80u: goto label_7F1AAF80;
    case 0x7F1AAF84u: goto label_7F1AAF84;
    case 0x7F1AAF88u: goto label_7F1AAF88;
    case 0x7F1AAF8Cu: goto label_7F1AAF8C;
    case 0x7F1AAF90u: goto label_7F1AAF90;
    case 0x7F1AAF94u: goto label_7F1AAF94;
    case 0x7F1AAF98u: goto label_7F1AAF98;
    case 0x7F1AAF9Cu: goto label_7F1AAF9C;
    case 0x7F1AAFA0u: goto label_7F1AAFA0;
    case 0x7F1AAFA4u: goto label_7F1AAFA4;
    case 0x7F1AAFA8u: goto label_7F1AAFA8;
    case 0x7F1AAFACu: goto label_7F1AAFAC;
    case 0x7F1AAFB0u: goto label_7F1AAFB0;
    case 0x7F1AAFB4u: goto label_7F1AAFB4;
    case 0x7F1AAFB8u: goto label_7F1AAFB8;
    case 0x7F1AAFBCu: goto label_7F1AAFBC;
    case 0x7F1AAFC0u: goto label_7F1AAFC0;
    case 0x7F1AAFC4u: goto label_7F1AAFC4;
    case 0x7F1AAFC8u: goto label_7F1AAFC8;
    case 0x7F1AAFCCu: goto label_7F1AAFCC;
    case 0x7F1AAFD0u: goto label_7F1AAFD0;
    case 0x7F1AAFD4u: goto label_7F1AAFD4;
    case 0x7F1AAFD8u: goto label_7F1AAFD8;
    case 0x7F1AAFDCu: goto label_7F1AAFDC;
    case 0x7F1AAFE0u: goto label_7F1AAFE0;
    case 0x7F1AAFE4u: goto label_7F1AAFE4;
    case 0x7F1AAFE8u: goto label_7F1AAFE8;
    case 0x7F1AAFECu: goto label_7F1AAFEC;
    case 0x7F1AAFF0u: goto label_7F1AAFF0;
    case 0x7F1AAFF4u: goto label_7F1AAFF4;
    case 0x7F1AAFF8u: goto label_7F1AAFF8;
    case 0x7F1AAFFCu: goto label_7F1AAFFC;
    case 0x7F1AB000u: goto label_7F1AB000;
    case 0x7F1AB004u: goto label_7F1AB004;
    case 0x7F1AB008u: goto label_7F1AB008;
    case 0x7F1AB00Cu: goto label_7F1AB00C;
    case 0x7F1AB010u: goto label_7F1AB010;
    case 0x7F1AB014u: goto label_7F1AB014;
    case 0x7F1AB018u: goto label_7F1AB018;
    case 0x7F1AB01Cu: goto label_7F1AB01C;
    case 0x7F1AB020u: goto label_7F1AB020;
    case 0x7F1AB024u: goto label_7F1AB024;
    case 0x7F1AB028u: goto label_7F1AB028;
    case 0x7F1AB02Cu: goto label_7F1AB02C;
    case 0x7F1AB030u: goto label_7F1AB030;
    case 0x7F1AB034u: goto label_7F1AB034;
    case 0x7F1AB038u: goto label_7F1AB038;
    case 0x7F1AB03Cu: goto label_7F1AB03C;
    case 0x7F1AB040u: goto label_7F1AB040;
    case 0x7F1AB044u: goto label_7F1AB044;
    case 0x7F1AB048u: goto label_7F1AB048;
    case 0x7F1AB04Cu: goto label_7F1AB04C;
    case 0x7F1AB050u: goto label_7F1AB050;
    case 0x7F1AB054u: goto label_7F1AB054;
    case 0x7F1AB058u: goto label_7F1AB058;
    case 0x7F1AB05Cu: goto label_7F1AB05C;
    case 0x7F1AB060u: goto label_7F1AB060;
    case 0x7F1AB064u: goto label_7F1AB064;
    case 0x7F1AB068u: goto label_7F1AB068;
    case 0x7F1AB06Cu: goto label_7F1AB06C;
    case 0x7F1AB070u: goto label_7F1AB070;
    case 0x7F1AB074u: goto label_7F1AB074;
    case 0x7F1AB078u: goto label_7F1AB078;
    case 0x7F1AB07Cu: goto label_7F1AB07C;
    case 0x7F1AB080u: goto label_7F1AB080;
    case 0x7F1AB084u: goto label_7F1AB084;
    case 0x7F1AB088u: goto label_7F1AB088;
    case 0x7F1AB08Cu: goto label_7F1AB08C;
    case 0x7F1AB090u: goto label_7F1AB090;
    case 0x7F1AB094u: goto label_7F1AB094;
    case 0x7F1AB098u: goto label_7F1AB098;
    case 0x7F1AB09Cu: goto label_7F1AB09C;
    case 0x7F1AB0A0u: goto label_7F1AB0A0;
    case 0x7F1AB0A4u: goto label_7F1AB0A4;
    case 0x7F1AB0A8u: goto label_7F1AB0A8;
    case 0x7F1AB0ACu: goto label_7F1AB0AC;
    case 0x7F1AB0B0u: goto label_7F1AB0B0;
    case 0x7F1AB0B4u: goto label_7F1AB0B4;
    case 0x7F1AB0B8u: goto label_7F1AB0B8;
    case 0x7F1AB0BCu: goto label_7F1AB0BC;
    case 0x7F1AB0C0u: goto label_7F1AB0C0;
    case 0x7F1AB0C4u: goto label_7F1AB0C4;
    case 0x7F1AB0C8u: goto label_7F1AB0C8;
    case 0x7F1AB0CCu: goto label_7F1AB0CC;
    case 0x7F1AB0D0u: goto label_7F1AB0D0;
    case 0x7F1AB0D4u: goto label_7F1AB0D4;
    case 0x7F1AB0D8u: goto label_7F1AB0D8;
    case 0x7F1AB0DCu: goto label_7F1AB0DC;
    case 0x7F1AB0E0u: goto label_7F1AB0E0;
    case 0x7F1AB0E4u: goto label_7F1AB0E4;
    case 0x7F1AB0E8u: goto label_7F1AB0E8;
    case 0x7F1AB0ECu: goto label_7F1AB0EC;
    case 0x7F1AB0F0u: goto label_7F1AB0F0;
    case 0x7F1AB0F4u: goto label_7F1AB0F4;
    case 0x7F1AB0F8u: goto label_7F1AB0F8;
    case 0x7F1AB0FCu: goto label_7F1AB0FC;
    case 0x7F1AB100u: goto label_7F1AB100;
    case 0x7F1AB104u: goto label_7F1AB104;
    case 0x7F1AB108u: goto label_7F1AB108;
    case 0x7F1AB10Cu: goto label_7F1AB10C;
    case 0x7F1AB110u: goto label_7F1AB110;
    case 0x7F1AB114u: goto label_7F1AB114;
    case 0x7F1AB118u: goto label_7F1AB118;
    case 0x7F1AB11Cu: goto label_7F1AB11C;
    case 0x7F1AB120u: goto label_7F1AB120;
    case 0x7F1AB124u: goto label_7F1AB124;
    case 0x7F1AB128u: goto label_7F1AB128;
    case 0x7F1AB12Cu: goto label_7F1AB12C;
    case 0x7F1AB130u: goto label_7F1AB130;
    case 0x7F1AB134u: goto label_7F1AB134;
    case 0x7F1AB138u: goto label_7F1AB138;
    case 0x7F1AB13Cu: goto label_7F1AB13C;
    case 0x7F1AB140u: goto label_7F1AB140;
    case 0x7F1AB144u: goto label_7F1AB144;
    case 0x7F1AB148u: goto label_7F1AB148;
    case 0x7F1AB14Cu: goto label_7F1AB14C;
    case 0x7F1AB150u: goto label_7F1AB150;
    case 0x7F1AB154u: goto label_7F1AB154;
    case 0x7F1AB158u: goto label_7F1AB158;
    case 0x7F1AB15Cu: goto label_7F1AB15C;
    case 0x7F1AB160u: goto label_7F1AB160;
    case 0x7F1AB164u: goto label_7F1AB164;
    case 0x7F1AB168u: goto label_7F1AB168;
    case 0x7F1AB16Cu: goto label_7F1AB16C;
    case 0x7F1AB170u: goto label_7F1AB170;
    case 0x7F1AB174u: goto label_7F1AB174;
    case 0x7F1AB178u: goto label_7F1AB178;
    case 0x7F1AB17Cu: goto label_7F1AB17C;
    case 0x7F1AB180u: goto label_7F1AB180;
    case 0x7F1AB184u: goto label_7F1AB184;
    case 0x7F1AB188u: goto label_7F1AB188;
    case 0x7F1AB18Cu: goto label_7F1AB18C;
    case 0x7F1AB190u: goto label_7F1AB190;
    case 0x7F1AB194u: goto label_7F1AB194;
    case 0x7F1AB198u: goto label_7F1AB198;
    case 0x7F1AB19Cu: goto label_7F1AB19C;
    case 0x7F1AB1A0u: goto label_7F1AB1A0;
    case 0x7F1AB1A4u: goto label_7F1AB1A4;
    case 0x7F1AB1A8u: goto label_7F1AB1A8;
    case 0x7F1AB1ACu: goto label_7F1AB1AC;
    case 0x7F1AB1B0u: goto label_7F1AB1B0;
    case 0x7F1AB1B4u: goto label_7F1AB1B4;
    case 0x7F1AB1B8u: goto label_7F1AB1B8;
    case 0x7F1AB1BCu: goto label_7F1AB1BC;
    case 0x7F1AB1C0u: goto label_7F1AB1C0;
    case 0x7F1AB1C4u: goto label_7F1AB1C4;
    case 0x7F1AB1C8u: goto label_7F1AB1C8;
    case 0x7F1AB1CCu: goto label_7F1AB1CC;
    case 0x7F1AB1D0u: goto label_7F1AB1D0;
    case 0x7F1AB1D4u: goto label_7F1AB1D4;
    case 0x7F1AB1D8u: goto label_7F1AB1D8;
    case 0x7F1AB1DCu: goto label_7F1AB1DC;
    case 0x7F1AB1E0u: goto label_7F1AB1E0;
    case 0x7F1AB1E4u: goto label_7F1AB1E4;
    case 0x7F1AB1E8u: goto label_7F1AB1E8;
    case 0x7F1AB1ECu: goto label_7F1AB1EC;
    case 0x7F1AB1F0u: goto label_7F1AB1F0;
    case 0x7F1AB1F4u: goto label_7F1AB1F4;
    case 0x7F1AB1F8u: goto label_7F1AB1F8;
    case 0x7F1AB1FCu: goto label_7F1AB1FC;
    case 0x7F1AB200u: goto label_7F1AB200;
    case 0x7F1AB204u: goto label_7F1AB204;
    case 0x7F1AB208u: goto label_7F1AB208;
    case 0x7F1AB20Cu: goto label_7F1AB20C;
    case 0x7F1AB210u: goto label_7F1AB210;
    case 0x7F1AB214u: goto label_7F1AB214;
    case 0x7F1AB218u: goto label_7F1AB218;
    case 0x7F1AB21Cu: goto label_7F1AB21C;
    case 0x7F1AB220u: goto label_7F1AB220;
    case 0x7F1AB224u: goto label_7F1AB224;
    case 0x7F1AB228u: goto label_7F1AB228;
    case 0x7F1AB22Cu: goto label_7F1AB22C;
    case 0x7F1AB230u: goto label_7F1AB230;
    case 0x7F1AB234u: goto label_7F1AB234;
    case 0x7F1AB238u: goto label_7F1AB238;
    case 0x7F1AB23Cu: goto label_7F1AB23C;
    case 0x7F1AB240u: goto label_7F1AB240;
    case 0x7F1AB244u: goto label_7F1AB244;
    case 0x7F1AB248u: goto label_7F1AB248;
    case 0x7F1AB24Cu: goto label_7F1AB24C;
    case 0x7F1AB250u: goto label_7F1AB250;
    case 0x7F1AB254u: goto label_7F1AB254;
    case 0x7F1AB258u: goto label_7F1AB258;
    case 0x7F1AB25Cu: goto label_7F1AB25C;
    case 0x7F1AB260u: goto label_7F1AB260;
    case 0x7F1AB264u: goto label_7F1AB264;
    case 0x7F1AB268u: goto label_7F1AB268;
    case 0x7F1AB26Cu: goto label_7F1AB26C;
    case 0x7F1AB270u: goto label_7F1AB270;
    case 0x7F1AB274u: goto label_7F1AB274;
    case 0x7F1AB278u: goto label_7F1AB278;
    case 0x7F1AB27Cu: goto label_7F1AB27C;
    case 0x7F1AB280u: goto label_7F1AB280;
    case 0x7F1AB284u: goto label_7F1AB284;
    case 0x7F1AB288u: goto label_7F1AB288;
    case 0x7F1AB28Cu: goto label_7F1AB28C;
    case 0x7F1AB290u: goto label_7F1AB290;
    case 0x7F1AB294u: goto label_7F1AB294;
    case 0x7F1AB298u: goto label_7F1AB298;
    case 0x7F1AB29Cu: goto label_7F1AB29C;
    case 0x7F1AB2A0u: goto label_7F1AB2A0;
    case 0x7F1AB2A4u: goto label_7F1AB2A4;
    case 0x7F1AB2A8u: goto label_7F1AB2A8;
    case 0x7F1AB2ACu: goto label_7F1AB2AC;
    case 0x7F1AB2B0u: goto label_7F1AB2B0;
    case 0x7F1AB2B4u: goto label_7F1AB2B4;
    case 0x7F1AB2B8u: goto label_7F1AB2B8;
    case 0x7F1AB2BCu: goto label_7F1AB2BC;
    case 0x7F1AB2C0u: goto label_7F1AB2C0;
    case 0x7F1AB2C4u: goto label_7F1AB2C4;
    case 0x7F1AB2C8u: goto label_7F1AB2C8;
    case 0x7F1AB2CCu: goto label_7F1AB2CC;
    case 0x7F1AB2D0u: goto label_7F1AB2D0;
    case 0x7F1AB2D4u: goto label_7F1AB2D4;
    case 0x7F1AB2D8u: goto label_7F1AB2D8;
    case 0x7F1AB2DCu: goto label_7F1AB2DC;
    case 0x7F1AB2E0u: goto label_7F1AB2E0;
    case 0x7F1AB2E4u: goto label_7F1AB2E4;
    case 0x7F1AB2E8u: goto label_7F1AB2E8;
    case 0x7F1AB2ECu: goto label_7F1AB2EC;
    case 0x7F1AB2F0u: goto label_7F1AB2F0;
    case 0x7F1AB2F4u: goto label_7F1AB2F4;
    case 0x7F1AB2F8u: goto label_7F1AB2F8;
    case 0x7F1AB2FCu: goto label_7F1AB2FC;
    case 0x7F1AB300u: goto label_7F1AB300;
    case 0x7F1AB304u: goto label_7F1AB304;
    case 0x7F1AB308u: goto label_7F1AB308;
    case 0x7F1AB30Cu: goto label_7F1AB30C;
    case 0x7F1AB310u: goto label_7F1AB310;
    case 0x7F1AB314u: goto label_7F1AB314;
    case 0x7F1AB318u: goto label_7F1AB318;
    case 0x7F1AB31Cu: goto label_7F1AB31C;
    case 0x7F1AB320u: goto label_7F1AB320;
    case 0x7F1AB324u: goto label_7F1AB324;
    case 0x7F1AB328u: goto label_7F1AB328;
    case 0x7F1AB32Cu: goto label_7F1AB32C;
    case 0x7F1AB330u: goto label_7F1AB330;
    case 0x7F1AB334u: goto label_7F1AB334;
    case 0x7F1AB338u: goto label_7F1AB338;
    case 0x7F1AB33Cu: goto label_7F1AB33C;
    case 0x7F1AB340u: goto label_7F1AB340;
    case 0x7F1AB344u: goto label_7F1AB344;
    case 0x7F1AB348u: goto label_7F1AB348;
    case 0x7F1AB34Cu: goto label_7F1AB34C;
    case 0x7F1AB350u: goto label_7F1AB350;
    case 0x7F1AB354u: goto label_7F1AB354;
    case 0x7F1AB358u: goto label_7F1AB358;
    case 0x7F1AB35Cu: goto label_7F1AB35C;
    case 0x7F1AB360u: goto label_7F1AB360;
    case 0x7F1AB364u: goto label_7F1AB364;
    case 0x7F1AB368u: goto label_7F1AB368;
    case 0x7F1AB36Cu: goto label_7F1AB36C;
    case 0x7F1AB370u: goto label_7F1AB370;
    case 0x7F1AB374u: goto label_7F1AB374;
    case 0x7F1AB378u: goto label_7F1AB378;
    case 0x7F1AB37Cu: goto label_7F1AB37C;
    case 0x7F1AB380u: goto label_7F1AB380;
    case 0x7F1AB384u: goto label_7F1AB384;
    case 0x7F1AB388u: goto label_7F1AB388;
    case 0x7F1AB38Cu: goto label_7F1AB38C;
    case 0x7F1AB390u: goto label_7F1AB390;
    case 0x7F1AB394u: goto label_7F1AB394;
    case 0x7F1AB398u: goto label_7F1AB398;
    case 0x7F1AB39Cu: goto label_7F1AB39C;
    case 0x7F1AB3A0u: goto label_7F1AB3A0;
    case 0x7F1AB3A4u: goto label_7F1AB3A4;
    case 0x7F1AB3A8u: goto label_7F1AB3A8;
    case 0x7F1AB3ACu: goto label_7F1AB3AC;
    case 0x7F1AB3B0u: goto label_7F1AB3B0;
    case 0x7F1AB3B4u: goto label_7F1AB3B4;
    case 0x7F1AB3B8u: goto label_7F1AB3B8;
    case 0x7F1AB3BCu: goto label_7F1AB3BC;
    case 0x7F1AB3C0u: goto label_7F1AB3C0;
    case 0x7F1AB3C4u: goto label_7F1AB3C4;
    case 0x7F1AB3C8u: goto label_7F1AB3C8;
    case 0x7F1AB3CCu: goto label_7F1AB3CC;
    case 0x7F1AB3D0u: goto label_7F1AB3D0;
    case 0x7F1AB3D4u: goto label_7F1AB3D4;
    case 0x7F1AB3D8u: goto label_7F1AB3D8;
    case 0x7F1AB3DCu: goto label_7F1AB3DC;
    case 0x7F1AB3E0u: goto label_7F1AB3E0;
    case 0x7F1AB3E4u: goto label_7F1AB3E4;
    case 0x7F1AB3E8u: goto label_7F1AB3E8;
    case 0x7F1AB3ECu: goto label_7F1AB3EC;
    case 0x7F1AB3F0u: goto label_7F1AB3F0;
    case 0x7F1AB3F4u: goto label_7F1AB3F4;
    case 0x7F1AB3F8u: goto label_7F1AB3F8;
    case 0x7F1AB3FCu: goto label_7F1AB3FC;
    case 0x7F1AB400u: goto label_7F1AB400;
    case 0x7F1AB404u: goto label_7F1AB404;
    case 0x7F1AB408u: goto label_7F1AB408;
    case 0x7F1AB40Cu: goto label_7F1AB40C;
    case 0x7F1AB410u: goto label_7F1AB410;
    case 0x7F1AB414u: goto label_7F1AB414;
    case 0x7F1AB418u: goto label_7F1AB418;
    case 0x7F1AB41Cu: goto label_7F1AB41C;
    case 0x7F1AB420u: goto label_7F1AB420;
    case 0x7F1AB424u: goto label_7F1AB424;
    case 0x7F1AB428u: goto label_7F1AB428;
    case 0x7F1AB42Cu: goto label_7F1AB42C;
    case 0x7F1AB430u: goto label_7F1AB430;
    case 0x7F1AB434u: goto label_7F1AB434;
    case 0x7F1AB438u: goto label_7F1AB438;
    case 0x7F1AB43Cu: goto label_7F1AB43C;
    case 0x7F1AB440u: goto label_7F1AB440;
    case 0x7F1AB444u: goto label_7F1AB444;
    case 0x7F1AB448u: goto label_7F1AB448;
    case 0x7F1AB44Cu: goto label_7F1AB44C;
    case 0x7F1AB450u: goto label_7F1AB450;
    case 0x7F1AB454u: goto label_7F1AB454;
    case 0x7F1AB458u: goto label_7F1AB458;
    case 0x7F1AB45Cu: goto label_7F1AB45C;
    case 0x7F1AB460u: goto label_7F1AB460;
    case 0x7F1AB464u: goto label_7F1AB464;
    case 0x7F1AB468u: goto label_7F1AB468;
    case 0x7F1AB46Cu: goto label_7F1AB46C;
    case 0x7F1AB470u: goto label_7F1AB470;
    case 0x7F1AB474u: goto label_7F1AB474;
    case 0x7F1AB478u: goto label_7F1AB478;
    case 0x7F1AB47Cu: goto label_7F1AB47C;
    case 0x7F1AB480u: goto label_7F1AB480;
    case 0x7F1AB484u: goto label_7F1AB484;
    case 0x7F1AB488u: goto label_7F1AB488;
    case 0x7F1AB48Cu: goto label_7F1AB48C;
    case 0x7F1AB490u: goto label_7F1AB490;
    case 0x7F1AB494u: goto label_7F1AB494;
    case 0x7F1AB498u: goto label_7F1AB498;
    case 0x7F1AB49Cu: goto label_7F1AB49C;
    case 0x7F1AB4A0u: goto label_7F1AB4A0;
    case 0x7F1AB4A4u: goto label_7F1AB4A4;
    case 0x7F1AB4A8u: goto label_7F1AB4A8;
    case 0x7F1AB4ACu: goto label_7F1AB4AC;
    case 0x7F1AB4B0u: goto label_7F1AB4B0;
    case 0x7F1AB4B4u: goto label_7F1AB4B4;
    case 0x7F1AB4B8u: goto label_7F1AB4B8;
    case 0x7F1AB4BCu: goto label_7F1AB4BC;
    case 0x7F1AB4C0u: goto label_7F1AB4C0;
    case 0x7F1AB4C4u: goto label_7F1AB4C4;
    case 0x7F1AB4C8u: goto label_7F1AB4C8;
    case 0x7F1AB4CCu: goto label_7F1AB4CC;
    case 0x7F1AB4D0u: goto label_7F1AB4D0;
    case 0x7F1AB4D4u: goto label_7F1AB4D4;
    case 0x7F1AB4D8u: goto label_7F1AB4D8;
    case 0x7F1AB4DCu: goto label_7F1AB4DC;
    case 0x7F1AB4E0u: goto label_7F1AB4E0;
    case 0x7F1AB4E4u: goto label_7F1AB4E4;
    case 0x7F1AB4E8u: goto label_7F1AB4E8;
    case 0x7F1AB4ECu: goto label_7F1AB4EC;
    case 0x7F1AB4F0u: goto label_7F1AB4F0;
    case 0x7F1AB4F4u: goto label_7F1AB4F4;
    case 0x7F1AB4F8u: goto label_7F1AB4F8;
    case 0x7F1AB4FCu: goto label_7F1AB4FC;
    case 0x7F1AB500u: goto label_7F1AB500;
    case 0x7F1AB504u: goto label_7F1AB504;
    case 0x7F1AB508u: goto label_7F1AB508;
    case 0x7F1AB50Cu: goto label_7F1AB50C;
    case 0x7F1AB510u: goto label_7F1AB510;
    case 0x7F1AB514u: goto label_7F1AB514;
    case 0x7F1AB518u: goto label_7F1AB518;
    case 0x7F1AB51Cu: goto label_7F1AB51C;
    case 0x7F1AB520u: goto label_7F1AB520;
    case 0x7F1AB524u: goto label_7F1AB524;
    case 0x7F1AB528u: goto label_7F1AB528;
    case 0x7F1AB52Cu: goto label_7F1AB52C;
    case 0x7F1AB530u: goto label_7F1AB530;
    case 0x7F1AB534u: goto label_7F1AB534;
    case 0x7F1AB538u: goto label_7F1AB538;
    case 0x7F1AB53Cu: goto label_7F1AB53C;
    case 0x7F1AB540u: goto label_7F1AB540;
    case 0x7F1AB544u: goto label_7F1AB544;
    case 0x7F1AB548u: goto label_7F1AB548;
    case 0x7F1AB54Cu: goto label_7F1AB54C;
    case 0x7F1AB550u: goto label_7F1AB550;
    case 0x7F1AB554u: goto label_7F1AB554;
    case 0x7F1AB558u: goto label_7F1AB558;
    case 0x7F1AB55Cu: goto label_7F1AB55C;
    case 0x7F1AB560u: goto label_7F1AB560;
    case 0x7F1AB564u: goto label_7F1AB564;
    case 0x7F1AB568u: goto label_7F1AB568;
    case 0x7F1AB56Cu: goto label_7F1AB56C;
    case 0x7F1AB570u: goto label_7F1AB570;
    case 0x7F1AB574u: goto label_7F1AB574;
    case 0x7F1AB578u: goto label_7F1AB578;
    case 0x7F1AB57Cu: goto label_7F1AB57C;
    case 0x7F1AB580u: goto label_7F1AB580;
    case 0x7F1AB584u: goto label_7F1AB584;
    case 0x7F1AB588u: goto label_7F1AB588;
    case 0x7F1AB58Cu: goto label_7F1AB58C;
    case 0x7F1AB590u: goto label_7F1AB590;
    case 0x7F1AB594u: goto label_7F1AB594;
    case 0x7F1AB598u: goto label_7F1AB598;
    case 0x7F1AB59Cu: goto label_7F1AB59C;
    case 0x7F1AB5A0u: goto label_7F1AB5A0;
    case 0x7F1AB5A4u: goto label_7F1AB5A4;
    case 0x7F1AB5A8u: goto label_7F1AB5A8;
    case 0x7F1AB5ACu: goto label_7F1AB5AC;
    case 0x7F1AB5B0u: goto label_7F1AB5B0;
    case 0x7F1AB5B4u: goto label_7F1AB5B4;
    case 0x7F1AB5B8u: goto label_7F1AB5B8;
    case 0x7F1AB5BCu: goto label_7F1AB5BC;
    case 0x7F1AB5C0u: goto label_7F1AB5C0;
    case 0x7F1AB5C4u: goto label_7F1AB5C4;
    case 0x7F1AB5C8u: goto label_7F1AB5C8;
    case 0x7F1AB5CCu: goto label_7F1AB5CC;
    case 0x7F1AB5D0u: goto label_7F1AB5D0;
    case 0x7F1AB5D4u: goto label_7F1AB5D4;
    case 0x7F1AB5D8u: goto label_7F1AB5D8;
    case 0x7F1AB5DCu: goto label_7F1AB5DC;
    case 0x7F1AB5E0u: goto label_7F1AB5E0;
    case 0x7F1AB5E4u: goto label_7F1AB5E4;
    case 0x7F1AB5E8u: goto label_7F1AB5E8;
    case 0x7F1AB5ECu: goto label_7F1AB5EC;
    case 0x7F1AB5F0u: goto label_7F1AB5F0;
    case 0x7F1AB5F4u: goto label_7F1AB5F4;
    case 0x7F1AB5F8u: goto label_7F1AB5F8;
    case 0x7F1AB5FCu: goto label_7F1AB5FC;
    case 0x7F1AB600u: goto label_7F1AB600;
    case 0x7F1AB604u: goto label_7F1AB604;
    case 0x7F1AB608u: goto label_7F1AB608;
    case 0x7F1AB60Cu: goto label_7F1AB60C;
    case 0x7F1AB610u: goto label_7F1AB610;
    case 0x7F1AB614u: goto label_7F1AB614;
    case 0x7F1AB618u: goto label_7F1AB618;
    case 0x7F1AB61Cu: goto label_7F1AB61C;
    case 0x7F1AB620u: goto label_7F1AB620;
    case 0x7F1AB624u: goto label_7F1AB624;
    case 0x7F1AB628u: goto label_7F1AB628;
    case 0x7F1AB62Cu: goto label_7F1AB62C;
    case 0x7F1AB630u: goto label_7F1AB630;
    case 0x7F1AB634u: goto label_7F1AB634;
    case 0x7F1AB638u: goto label_7F1AB638;
    case 0x7F1AB63Cu: goto label_7F1AB63C;
    case 0x7F1AB640u: goto label_7F1AB640;
    case 0x7F1AB644u: goto label_7F1AB644;
    case 0x7F1AB648u: goto label_7F1AB648;
    case 0x7F1AB64Cu: goto label_7F1AB64C;
    case 0x7F1AB650u: goto label_7F1AB650;
    case 0x7F1AB654u: goto label_7F1AB654;
    case 0x7F1AB658u: goto label_7F1AB658;
    case 0x7F1AB65Cu: goto label_7F1AB65C;
    case 0x7F1AB660u: goto label_7F1AB660;
    case 0x7F1AB664u: goto label_7F1AB664;
    case 0x7F1AB668u: goto label_7F1AB668;
    case 0x7F1AB66Cu: goto label_7F1AB66C;
    case 0x7F1AB670u: goto label_7F1AB670;
    case 0x7F1AB674u: goto label_7F1AB674;
    case 0x7F1AB678u: goto label_7F1AB678;
    case 0x7F1AB67Cu: goto label_7F1AB67C;
    case 0x7F1AB680u: goto label_7F1AB680;
    case 0x7F1AB684u: goto label_7F1AB684;
    case 0x7F1AB688u: goto label_7F1AB688;
    case 0x7F1AB68Cu: goto label_7F1AB68C;
    case 0x7F1AB690u: goto label_7F1AB690;
    case 0x7F1AB694u: goto label_7F1AB694;
    case 0x7F1AB698u: goto label_7F1AB698;
    case 0x7F1AB69Cu: goto label_7F1AB69C;
    case 0x7F1AB6A0u: goto label_7F1AB6A0;
    case 0x7F1AB6A4u: goto label_7F1AB6A4;
    case 0x7F1AB6A8u: goto label_7F1AB6A8;
    case 0x7F1AB6ACu: goto label_7F1AB6AC;
    case 0x7F1AB6B0u: goto label_7F1AB6B0;
    case 0x7F1AB6B4u: goto label_7F1AB6B4;
    case 0x7F1AB6B8u: goto label_7F1AB6B8;
    case 0x7F1AB6BCu: goto label_7F1AB6BC;
    case 0x7F1AB6C0u: goto label_7F1AB6C0;
    case 0x7F1AB6C4u: goto label_7F1AB6C4;
    case 0x7F1AB6C8u: goto label_7F1AB6C8;
    case 0x7F1AB6CCu: goto label_7F1AB6CC;
    case 0x7F1AB6D0u: goto label_7F1AB6D0;
    case 0x7F1AB6D4u: goto label_7F1AB6D4;
    case 0x7F1AB6D8u: goto label_7F1AB6D8;
    case 0x7F1AB6DCu: goto label_7F1AB6DC;
    case 0x7F1AB6E0u: goto label_7F1AB6E0;
    case 0x7F1AB6E4u: goto label_7F1AB6E4;
    case 0x7F1AB6E8u: goto label_7F1AB6E8;
    case 0x7F1AB6ECu: goto label_7F1AB6EC;
    case 0x7F1AB6F0u: goto label_7F1AB6F0;
    case 0x7F1AB6F4u: goto label_7F1AB6F4;
    case 0x7F1AB6F8u: goto label_7F1AB6F8;
    case 0x7F1AB6FCu: goto label_7F1AB6FC;
    case 0x7F1AB700u: goto label_7F1AB700;
    case 0x7F1AB704u: goto label_7F1AB704;
    case 0x7F1AB708u: goto label_7F1AB708;
    case 0x7F1AB70Cu: goto label_7F1AB70C;
    case 0x7F1AB710u: goto label_7F1AB710;
    case 0x7F1AB714u: goto label_7F1AB714;
    case 0x7F1AB718u: goto label_7F1AB718;
    case 0x7F1AB71Cu: goto label_7F1AB71C;
    case 0x7F1AB720u: goto label_7F1AB720;
    case 0x7F1AB724u: goto label_7F1AB724;
    case 0x7F1AB728u: goto label_7F1AB728;
    case 0x7F1AB72Cu: goto label_7F1AB72C;
    case 0x7F1AB730u: goto label_7F1AB730;
    case 0x7F1AB734u: goto label_7F1AB734;
    case 0x7F1AB738u: goto label_7F1AB738;
    case 0x7F1AB73Cu: goto label_7F1AB73C;
    case 0x7F1AB740u: goto label_7F1AB740;
    case 0x7F1AB744u: goto label_7F1AB744;
    case 0x7F1AB748u: goto label_7F1AB748;
    case 0x7F1AB74Cu: goto label_7F1AB74C;
    case 0x7F1AB750u: goto label_7F1AB750;
    case 0x7F1AB754u: goto label_7F1AB754;
    case 0x7F1AB758u: goto label_7F1AB758;
    case 0x7F1AB75Cu: goto label_7F1AB75C;
    case 0x7F1AB760u: goto label_7F1AB760;
    case 0x7F1AB764u: goto label_7F1AB764;
    case 0x7F1AB768u: goto label_7F1AB768;
    case 0x7F1AB76Cu: goto label_7F1AB76C;
    case 0x7F1AB770u: goto label_7F1AB770;
    case 0x7F1AB774u: goto label_7F1AB774;
    case 0x7F1AB778u: goto label_7F1AB778;
    case 0x7F1AB77Cu: goto label_7F1AB77C;
    case 0x7F1AB780u: goto label_7F1AB780;
    case 0x7F1AB784u: goto label_7F1AB784;
    case 0x7F1AB788u: goto label_7F1AB788;
    case 0x7F1AB78Cu: goto label_7F1AB78C;
    case 0x7F1AB790u: goto label_7F1AB790;
    case 0x7F1AB794u: goto label_7F1AB794;
    case 0x7F1AB798u: goto label_7F1AB798;
    case 0x7F1AB79Cu: goto label_7F1AB79C;
    case 0x7F1AB7A0u: goto label_7F1AB7A0;
    case 0x7F1AB7A4u: goto label_7F1AB7A4;
    case 0x7F1AB7A8u: goto label_7F1AB7A8;
    case 0x7F1AB7ACu: goto label_7F1AB7AC;
    case 0x7F1AB7B0u: goto label_7F1AB7B0;
    case 0x7F1AB7B4u: goto label_7F1AB7B4;
    case 0x7F1AB7B8u: goto label_7F1AB7B8;
    case 0x7F1AB7BCu: goto label_7F1AB7BC;
    case 0x7F1AB7C0u: goto label_7F1AB7C0;
    case 0x7F1AB7C4u: goto label_7F1AB7C4;
    case 0x7F1AB7C8u: goto label_7F1AB7C8;
    case 0x7F1AB7CCu: goto label_7F1AB7CC;
    case 0x7F1AB7D0u: goto label_7F1AB7D0;
    case 0x7F1AB7D4u: goto label_7F1AB7D4;
    case 0x7F1AB7D8u: goto label_7F1AB7D8;
    case 0x7F1AB7DCu: goto label_7F1AB7DC;
    case 0x7F1AB7E0u: goto label_7F1AB7E0;
    case 0x7F1AB7E4u: goto label_7F1AB7E4;
    case 0x7F1AB7E8u: goto label_7F1AB7E8;
    case 0x7F1AB7ECu: goto label_7F1AB7EC;
    case 0x7F1AB7F0u: goto label_7F1AB7F0;
    case 0x7F1AB7F4u: goto label_7F1AB7F4;
    case 0x7F1AB7F8u: goto label_7F1AB7F8;
    case 0x7F1AB7FCu: goto label_7F1AB7FC;
    case 0x7F1AB800u: goto label_7F1AB800;
    case 0x7F1AB804u: goto label_7F1AB804;
    case 0x7F1AB808u: goto label_7F1AB808;
    case 0x7F1AB80Cu: goto label_7F1AB80C;
    case 0x7F1AB810u: goto label_7F1AB810;
    case 0x7F1AB814u: goto label_7F1AB814;
    case 0x7F1AB818u: goto label_7F1AB818;
    case 0x7F1AB81Cu: goto label_7F1AB81C;
    case 0x7F1AB820u: goto label_7F1AB820;
    case 0x7F1AB824u: goto label_7F1AB824;
    case 0x7F1AB828u: goto label_7F1AB828;
    case 0x7F1AB82Cu: goto label_7F1AB82C;
    case 0x7F1AB830u: goto label_7F1AB830;
    case 0x7F1AB834u: goto label_7F1AB834;
    case 0x7F1AB838u: goto label_7F1AB838;
    case 0x7F1AB83Cu: goto label_7F1AB83C;
    case 0x7F1AB840u: goto label_7F1AB840;
    case 0x7F1AB844u: goto label_7F1AB844;
    case 0x7F1AB848u: goto label_7F1AB848;
    case 0x7F1AB84Cu: goto label_7F1AB84C;
    case 0x7F1AB850u: goto label_7F1AB850;
    case 0x7F1AB854u: goto label_7F1AB854;
    case 0x7F1AB858u: goto label_7F1AB858;
    case 0x7F1AB85Cu: goto label_7F1AB85C;
    case 0x7F1AB860u: goto label_7F1AB860;
    case 0x7F1AB864u: goto label_7F1AB864;
    case 0x7F1AB868u: goto label_7F1AB868;
    case 0x7F1AB86Cu: goto label_7F1AB86C;
    case 0x7F1AB870u: goto label_7F1AB870;
    case 0x7F1AB874u: goto label_7F1AB874;
    case 0x7F1AB878u: goto label_7F1AB878;
    case 0x7F1AB87Cu: goto label_7F1AB87C;
    case 0x7F1AB880u: goto label_7F1AB880;
    case 0x7F1AB884u: goto label_7F1AB884;
    case 0x7F1AB888u: goto label_7F1AB888;
    case 0x7F1AB88Cu: goto label_7F1AB88C;
    case 0x7F1AB890u: goto label_7F1AB890;
    case 0x7F1AB894u: goto label_7F1AB894;
    case 0x7F1AB898u: goto label_7F1AB898;
    case 0x7F1AB89Cu: goto label_7F1AB89C;
    case 0x7F1AB8A0u: goto label_7F1AB8A0;
    case 0x7F1AB8A4u: goto label_7F1AB8A4;
    case 0x7F1AB8A8u: goto label_7F1AB8A8;
    case 0x7F1AB8ACu: goto label_7F1AB8AC;
    case 0x7F1AB8B0u: goto label_7F1AB8B0;
    case 0x7F1AB8B4u: goto label_7F1AB8B4;
    case 0x7F1AB8B8u: goto label_7F1AB8B8;
    case 0x7F1AB8BCu: goto label_7F1AB8BC;
    case 0x7F1AB8C0u: goto label_7F1AB8C0;
    case 0x7F1AB8C4u: goto label_7F1AB8C4;
    case 0x7F1AB8C8u: goto label_7F1AB8C8;
    case 0x7F1AB8CCu: goto label_7F1AB8CC;
    case 0x7F1AB8D0u: goto label_7F1AB8D0;
    case 0x7F1AB8D4u: goto label_7F1AB8D4;
    case 0x7F1AB8D8u: goto label_7F1AB8D8;
    case 0x7F1AB8DCu: goto label_7F1AB8DC;
    case 0x7F1AB8E0u: goto label_7F1AB8E0;
    case 0x7F1AB8E4u: goto label_7F1AB8E4;
    case 0x7F1AB8E8u: goto label_7F1AB8E8;
    case 0x7F1AB8ECu: goto label_7F1AB8EC;
    case 0x7F1AB8F0u: goto label_7F1AB8F0;
    case 0x7F1AB8F4u: goto label_7F1AB8F4;
    case 0x7F1AB8F8u: goto label_7F1AB8F8;
    case 0x7F1AB8FCu: goto label_7F1AB8FC;
    case 0x7F1AB900u: goto label_7F1AB900;
    case 0x7F1AB904u: goto label_7F1AB904;
    case 0x7F1AB908u: goto label_7F1AB908;
    case 0x7F1AB90Cu: goto label_7F1AB90C;
    case 0x7F1AB910u: goto label_7F1AB910;
    case 0x7F1AB914u: goto label_7F1AB914;
    case 0x7F1AB918u: goto label_7F1AB918;
    case 0x7F1AB91Cu: goto label_7F1AB91C;
    case 0x7F1AB920u: goto label_7F1AB920;
    case 0x7F1AB924u: goto label_7F1AB924;
    case 0x7F1AB928u: goto label_7F1AB928;
    case 0x7F1AB92Cu: goto label_7F1AB92C;
    case 0x7F1AB930u: goto label_7F1AB930;
    case 0x7F1AB934u: goto label_7F1AB934;
    case 0x7F1AB938u: goto label_7F1AB938;
    case 0x7F1AB93Cu: goto label_7F1AB93C;
    case 0x7F1AB940u: goto label_7F1AB940;
    case 0x7F1AB944u: goto label_7F1AB944;
    case 0x7F1AB948u: goto label_7F1AB948;
    case 0x7F1AB94Cu: goto label_7F1AB94C;
    case 0x7F1AB950u: goto label_7F1AB950;
    case 0x7F1AB954u: goto label_7F1AB954;
    case 0x7F1AB958u: goto label_7F1AB958;
    case 0x7F1AB95Cu: goto label_7F1AB95C;
    case 0x7F1AB960u: goto label_7F1AB960;
    case 0x7F1AB964u: goto label_7F1AB964;
    case 0x7F1AB968u: goto label_7F1AB968;
    case 0x7F1AB96Cu: goto label_7F1AB96C;
    case 0x7F1AB970u: goto label_7F1AB970;
    case 0x7F1AB974u: goto label_7F1AB974;
    case 0x7F1AB978u: goto label_7F1AB978;
    case 0x7F1AB97Cu: goto label_7F1AB97C;
    case 0x7F1AB980u: goto label_7F1AB980;
    case 0x7F1AB984u: goto label_7F1AB984;
    case 0x7F1AB988u: goto label_7F1AB988;
    case 0x7F1AB98Cu: goto label_7F1AB98C;
    case 0x7F1AB990u: goto label_7F1AB990;
    case 0x7F1AB994u: goto label_7F1AB994;
    case 0x7F1AB998u: goto label_7F1AB998;
    case 0x7F1AB99Cu: goto label_7F1AB99C;
    case 0x7F1AB9A0u: goto label_7F1AB9A0;
    case 0x7F1AB9A4u: goto label_7F1AB9A4;
    case 0x7F1AB9A8u: goto label_7F1AB9A8;
    case 0x7F1AB9ACu: goto label_7F1AB9AC;
    case 0x7F1AB9B0u: goto label_7F1AB9B0;
    case 0x7F1AB9B4u: goto label_7F1AB9B4;
    case 0x7F1AB9B8u: goto label_7F1AB9B8;
    case 0x7F1AB9BCu: goto label_7F1AB9BC;
    case 0x7F1AB9C0u: goto label_7F1AB9C0;
    case 0x7F1AB9C4u: goto label_7F1AB9C4;
    case 0x7F1AB9C8u: goto label_7F1AB9C8;
    case 0x7F1AB9CCu: goto label_7F1AB9CC;
    case 0x7F1AB9D0u: goto label_7F1AB9D0;
    case 0x7F1AB9D4u: goto label_7F1AB9D4;
    case 0x7F1AB9D8u: goto label_7F1AB9D8;
    case 0x7F1AB9DCu: goto label_7F1AB9DC;
    case 0x7F1AB9E0u: goto label_7F1AB9E0;
    case 0x7F1AB9E4u: goto label_7F1AB9E4;
    case 0x7F1AB9E8u: goto label_7F1AB9E8;
    case 0x7F1AB9ECu: goto label_7F1AB9EC;
    case 0x7F1AB9F0u: goto label_7F1AB9F0;
    case 0x7F1AB9F4u: goto label_7F1AB9F4;
    case 0x7F1AB9F8u: goto label_7F1AB9F8;
    case 0x7F1AB9FCu: goto label_7F1AB9FC;
    case 0x7F1ABA00u: goto label_7F1ABA00;
    case 0x7F1ABA04u: goto label_7F1ABA04;
    case 0x7F1ABA08u: goto label_7F1ABA08;
    case 0x7F1ABA0Cu: goto label_7F1ABA0C;
    case 0x7F1ABA10u: goto label_7F1ABA10;
    case 0x7F1ABA14u: goto label_7F1ABA14;
    case 0x7F1ABA18u: goto label_7F1ABA18;
    case 0x7F1ABA1Cu: goto label_7F1ABA1C;
    case 0x7F1ABA20u: goto label_7F1ABA20;
    case 0x7F1ABA24u: goto label_7F1ABA24;
    case 0x7F1ABA28u: goto label_7F1ABA28;
    case 0x7F1ABA2Cu: goto label_7F1ABA2C;
    case 0x7F1ABA30u: goto label_7F1ABA30;
    case 0x7F1ABA34u: goto label_7F1ABA34;
    case 0x7F1ABA38u: goto label_7F1ABA38;
    case 0x7F1ABA3Cu: goto label_7F1ABA3C;
    case 0x7F1ABA40u: goto label_7F1ABA40;
    case 0x7F1ABA44u: goto label_7F1ABA44;
    case 0x7F1ABA48u: goto label_7F1ABA48;
    case 0x7F1ABA4Cu: goto label_7F1ABA4C;
    case 0x7F1ABA50u: goto label_7F1ABA50;
    case 0x7F1ABA54u: goto label_7F1ABA54;
    case 0x7F1ABA58u: goto label_7F1ABA58;
    case 0x7F1ABA5Cu: goto label_7F1ABA5C;
    case 0x7F1ABA60u: goto label_7F1ABA60;
    case 0x7F1ABA64u: goto label_7F1ABA64;
    case 0x7F1ABA68u: goto label_7F1ABA68;
    case 0x7F1ABA6Cu: goto label_7F1ABA6C;
    case 0x7F1ABA70u: goto label_7F1ABA70;
    case 0x7F1ABA74u: goto label_7F1ABA74;
    case 0x7F1ABA78u: goto label_7F1ABA78;
    case 0x7F1ABA7Cu: goto label_7F1ABA7C;
    case 0x7F1ABA80u: goto label_7F1ABA80;
    case 0x7F1ABA84u: goto label_7F1ABA84;
    case 0x7F1ABA88u: goto label_7F1ABA88;
    case 0x7F1ABA8Cu: goto label_7F1ABA8C;
    case 0x7F1ABA90u: goto label_7F1ABA90;
    case 0x7F1ABA94u: goto label_7F1ABA94;
    case 0x7F1ABA98u: goto label_7F1ABA98;
    case 0x7F1ABA9Cu: goto label_7F1ABA9C;
    case 0x7F1ABAA0u: goto label_7F1ABAA0;
    case 0x7F1ABAA4u: goto label_7F1ABAA4;
    case 0x7F1ABAA8u: goto label_7F1ABAA8;
    case 0x7F1ABAACu: goto label_7F1ABAAC;
    case 0x7F1ABAB0u: goto label_7F1ABAB0;
    case 0x7F1ABAB4u: goto label_7F1ABAB4;
    case 0x7F1ABAB8u: goto label_7F1ABAB8;
    case 0x7F1ABABCu: goto label_7F1ABABC;
    case 0x7F1ABAC0u: goto label_7F1ABAC0;
    case 0x7F1ABAC4u: goto label_7F1ABAC4;
    case 0x7F1ABAC8u: goto label_7F1ABAC8;
    case 0x7F1ABACCu: goto label_7F1ABACC;
    case 0x7F1ABAD0u: goto label_7F1ABAD0;
    case 0x7F1ABAD4u: goto label_7F1ABAD4;
    case 0x7F1ABAD8u: goto label_7F1ABAD8;
    case 0x7F1ABADCu: goto label_7F1ABADC;
    case 0x7F1ABAE0u: goto label_7F1ABAE0;
    case 0x7F1ABAE4u: goto label_7F1ABAE4;
    case 0x7F1ABAE8u: goto label_7F1ABAE8;
    case 0x7F1ABAECu: goto label_7F1ABAEC;
    case 0x7F1ABAF0u: goto label_7F1ABAF0;
    case 0x7F1ABAF4u: goto label_7F1ABAF4;
    case 0x7F1ABAF8u: goto label_7F1ABAF8;
    case 0x7F1ABAFCu: goto label_7F1ABAFC;
    case 0x7F1ABB00u: goto label_7F1ABB00;
    case 0x7F1ABB04u: goto label_7F1ABB04;
    case 0x7F1ABB08u: goto label_7F1ABB08;
    case 0x7F1ABB0Cu: goto label_7F1ABB0C;
    case 0x7F1ABB10u: goto label_7F1ABB10;
    case 0x7F1ABB14u: goto label_7F1ABB14;
    case 0x7F1ABB18u: goto label_7F1ABB18;
    case 0x7F1ABB1Cu: goto label_7F1ABB1C;
    case 0x7F1ABB20u: goto label_7F1ABB20;
    case 0x7F1ABB24u: goto label_7F1ABB24;
    case 0x7F1ABB28u: goto label_7F1ABB28;
    case 0x7F1ABB2Cu: goto label_7F1ABB2C;
    case 0x7F1ABB30u: goto label_7F1ABB30;
    case 0x7F1ABB34u: goto label_7F1ABB34;
    case 0x7F1ABB38u: goto label_7F1ABB38;
    case 0x7F1ABB3Cu: goto label_7F1ABB3C;
    case 0x7F1ABB40u: goto label_7F1ABB40;
    case 0x7F1ABB44u: goto label_7F1ABB44;
    case 0x7F1ABB48u: goto label_7F1ABB48;
    case 0x7F1ABB4Cu: goto label_7F1ABB4C;
    case 0x7F1ABB50u: goto label_7F1ABB50;
    case 0x7F1ABB54u: goto label_7F1ABB54;
    case 0x7F1ABB58u: goto label_7F1ABB58;
    case 0x7F1ABB5Cu: goto label_7F1ABB5C;
    case 0x7F1ABB60u: goto label_7F1ABB60;
    case 0x7F1ABB64u: goto label_7F1ABB64;
    case 0x7F1ABB68u: goto label_7F1ABB68;
    case 0x7F1ABB6Cu: goto label_7F1ABB6C;
    case 0x7F1ABB70u: goto label_7F1ABB70;
    case 0x7F1ABB74u: goto label_7F1ABB74;
    case 0x7F1ABB78u: goto label_7F1ABB78;
    case 0x7F1ABB7Cu: goto label_7F1ABB7C;
    case 0x7F1ABB80u: goto label_7F1ABB80;
    case 0x7F1ABB84u: goto label_7F1ABB84;
    case 0x7F1ABB88u: goto label_7F1ABB88;
    case 0x7F1ABB8Cu: goto label_7F1ABB8C;
    case 0x7F1ABB90u: goto label_7F1ABB90;
    case 0x7F1ABB94u: goto label_7F1ABB94;
    case 0x7F1ABB98u: goto label_7F1ABB98;
    case 0x7F1ABB9Cu: goto label_7F1ABB9C;
    case 0x7F1ABBA0u: goto label_7F1ABBA0;
    case 0x7F1ABBA4u: goto label_7F1ABBA4;
    case 0x7F1ABBA8u: goto label_7F1ABBA8;
    case 0x7F1ABBACu: goto label_7F1ABBAC;
    case 0x7F1ABBB0u: goto label_7F1ABBB0;
    case 0x7F1ABBB4u: goto label_7F1ABBB4;
    case 0x7F1ABBB8u: goto label_7F1ABBB8;
    case 0x7F1ABBBCu: goto label_7F1ABBBC;
    case 0x7F1ABBC0u: goto label_7F1ABBC0;
    case 0x7F1ABBC4u: goto label_7F1ABBC4;
    case 0x7F1ABBC8u: goto label_7F1ABBC8;
    case 0x7F1ABBCCu: goto label_7F1ABBCC;
    case 0x7F1ABBD0u: goto label_7F1ABBD0;
    case 0x7F1ABBD4u: goto label_7F1ABBD4;
    case 0x7F1ABBD8u: goto label_7F1ABBD8;
    case 0x7F1ABBDCu: goto label_7F1ABBDC;
    case 0x7F1ABBE0u: goto label_7F1ABBE0;
    case 0x7F1ABBE4u: goto label_7F1ABBE4;
    case 0x7F1ABBE8u: goto label_7F1ABBE8;
    case 0x7F1ABBECu: goto label_7F1ABBEC;
    case 0x7F1ABBF0u: goto label_7F1ABBF0;
    case 0x7F1ABBF4u: goto label_7F1ABBF4;
    case 0x7F1ABBF8u: goto label_7F1ABBF8;
    case 0x7F1ABBFCu: goto label_7F1ABBFC;
    case 0x7F1ABC00u: goto label_7F1ABC00;
    case 0x7F1ABC04u: goto label_7F1ABC04;
    case 0x7F1ABC08u: goto label_7F1ABC08;
    case 0x7F1ABC0Cu: goto label_7F1ABC0C;
    case 0x7F1ABC10u: goto label_7F1ABC10;
    case 0x7F1ABC14u: goto label_7F1ABC14;
    case 0x7F1ABC18u: goto label_7F1ABC18;
    case 0x7F1ABC1Cu: goto label_7F1ABC1C;
    case 0x7F1ABC20u: goto label_7F1ABC20;
    case 0x7F1ABC24u: goto label_7F1ABC24;
    case 0x7F1ABC28u: goto label_7F1ABC28;
    case 0x7F1ABC2Cu: goto label_7F1ABC2C;
    case 0x7F1ABC30u: goto label_7F1ABC30;
    case 0x7F1ABC34u: goto label_7F1ABC34;
    case 0x7F1ABC38u: goto label_7F1ABC38;
    case 0x7F1ABC3Cu: goto label_7F1ABC3C;
    case 0x7F1ABC40u: goto label_7F1ABC40;
    case 0x7F1ABC44u: goto label_7F1ABC44;
    case 0x7F1ABC48u: goto label_7F1ABC48;
    case 0x7F1ABC4Cu: goto label_7F1ABC4C;
    case 0x7F1ABC50u: goto label_7F1ABC50;
    case 0x7F1ABC54u: goto label_7F1ABC54;
    case 0x7F1ABC58u: goto label_7F1ABC58;
    case 0x7F1ABC5Cu: goto label_7F1ABC5C;
    case 0x7F1ABC60u: goto label_7F1ABC60;
    case 0x7F1ABC64u: goto label_7F1ABC64;
    case 0x7F1ABC68u: goto label_7F1ABC68;
    case 0x7F1ABC6Cu: goto label_7F1ABC6C;
    case 0x7F1ABC70u: goto label_7F1ABC70;
    case 0x7F1ABC74u: goto label_7F1ABC74;
    case 0x7F1ABC78u: goto label_7F1ABC78;
    case 0x7F1ABC7Cu: goto label_7F1ABC7C;
    case 0x7F1ABC80u: goto label_7F1ABC80;
    case 0x7F1ABC84u: goto label_7F1ABC84;
    case 0x7F1ABC88u: goto label_7F1ABC88;
    case 0x7F1ABC8Cu: goto label_7F1ABC8C;
    case 0x7F1ABC90u: goto label_7F1ABC90;
    case 0x7F1ABC94u: goto label_7F1ABC94;
    case 0x7F1ABC98u: goto label_7F1ABC98;
    case 0x7F1ABC9Cu: goto label_7F1ABC9C;
    case 0x7F1ABCA0u: goto label_7F1ABCA0;
    case 0x7F1ABCA4u: goto label_7F1ABCA4;
    case 0x7F1ABCA8u: goto label_7F1ABCA8;
    case 0x7F1ABCACu: goto label_7F1ABCAC;
    case 0x7F1ABCB0u: goto label_7F1ABCB0;
    case 0x7F1ABCB4u: goto label_7F1ABCB4;
    case 0x7F1ABCB8u: goto label_7F1ABCB8;
    case 0x7F1ABCBCu: goto label_7F1ABCBC;
    case 0x7F1ABCC0u: goto label_7F1ABCC0;
    case 0x7F1ABCC4u: goto label_7F1ABCC4;
    case 0x7F1ABCC8u: goto label_7F1ABCC8;
    case 0x7F1ABCCCu: goto label_7F1ABCCC;
    case 0x7F1ABCD0u: goto label_7F1ABCD0;
    case 0x7F1ABCD4u: goto label_7F1ABCD4;
    case 0x7F1ABCD8u: goto label_7F1ABCD8;
    case 0x7F1ABCDCu: goto label_7F1ABCDC;
    case 0x7F1ABCE0u: goto label_7F1ABCE0;
    case 0x7F1ABCE4u: goto label_7F1ABCE4;
    case 0x7F1ABCE8u: goto label_7F1ABCE8;
    case 0x7F1ABCECu: goto label_7F1ABCEC;
    case 0x7F1ABCF0u: goto label_7F1ABCF0;
    case 0x7F1ABCF4u: goto label_7F1ABCF4;
    case 0x7F1ABCF8u: goto label_7F1ABCF8;
    case 0x7F1ABCFCu: goto label_7F1ABCFC;
    case 0x7F1ABD00u: goto label_7F1ABD00;
    case 0x7F1ABD04u: goto label_7F1ABD04;
    case 0x7F1ABD08u: goto label_7F1ABD08;
    case 0x7F1ABD0Cu: goto label_7F1ABD0C;
    case 0x7F1ABD10u: goto label_7F1ABD10;
    case 0x7F1ABD14u: goto label_7F1ABD14;
    case 0x7F1ABD18u: goto label_7F1ABD18;
    case 0x7F1ABD1Cu: goto label_7F1ABD1C;
    case 0x7F1ABD20u: goto label_7F1ABD20;
    case 0x7F1ABD24u: goto label_7F1ABD24;
    case 0x7F1ABD28u: goto label_7F1ABD28;
    case 0x7F1ABD2Cu: goto label_7F1ABD2C;
    case 0x7F1ABD30u: goto label_7F1ABD30;
    case 0x7F1ABD34u: goto label_7F1ABD34;
    case 0x7F1ABD38u: goto label_7F1ABD38;
    case 0x7F1ABD3Cu: goto label_7F1ABD3C;
    case 0x7F1ABD40u: goto label_7F1ABD40;
    case 0x7F1ABD44u: goto label_7F1ABD44;
    case 0x7F1ABD48u: goto label_7F1ABD48;
    case 0x7F1ABD4Cu: goto label_7F1ABD4C;
    case 0x7F1ABD50u: goto label_7F1ABD50;
    case 0x7F1ABD54u: goto label_7F1ABD54;
    case 0x7F1ABD58u: goto label_7F1ABD58;
    case 0x7F1ABD5Cu: goto label_7F1ABD5C;
    case 0x7F1ABD60u: goto label_7F1ABD60;
    case 0x7F1ABD64u: goto label_7F1ABD64;
    case 0x7F1ABD68u: goto label_7F1ABD68;
    case 0x7F1ABD6Cu: goto label_7F1ABD6C;
    case 0x7F1ABD70u: goto label_7F1ABD70;
    case 0x7F1ABD74u: goto label_7F1ABD74;
    case 0x7F1ABD78u: goto label_7F1ABD78;
    case 0x7F1ABD7Cu: goto label_7F1ABD7C;
    case 0x7F1ABD80u: goto label_7F1ABD80;
    case 0x7F1ABD84u: goto label_7F1ABD84;
    case 0x7F1ABD88u: goto label_7F1ABD88;
    case 0x7F1ABD8Cu: goto label_7F1ABD8C;
    case 0x7F1ABD90u: goto label_7F1ABD90;
    case 0x7F1ABD94u: goto label_7F1ABD94;
    case 0x7F1ABD98u: goto label_7F1ABD98;
    case 0x7F1ABD9Cu: goto label_7F1ABD9C;
    case 0x7F1ABDA0u: goto label_7F1ABDA0;
    case 0x7F1ABDA4u: goto label_7F1ABDA4;
    case 0x7F1ABDA8u: goto label_7F1ABDA8;
    case 0x7F1ABDACu: goto label_7F1ABDAC;
    case 0x7F1ABDB0u: goto label_7F1ABDB0;
    case 0x7F1ABDB4u: goto label_7F1ABDB4;
    case 0x7F1ABDB8u: goto label_7F1ABDB8;
    case 0x7F1ABDBCu: goto label_7F1ABDBC;
    case 0x7F1ABDC0u: goto label_7F1ABDC0;
    case 0x7F1ABDC4u: goto label_7F1ABDC4;
    case 0x7F1ABDC8u: goto label_7F1ABDC8;
    case 0x7F1ABDCCu: goto label_7F1ABDCC;
    case 0x7F1ABDD0u: goto label_7F1ABDD0;
    case 0x7F1ABDD4u: goto label_7F1ABDD4;
    case 0x7F1ABDD8u: goto label_7F1ABDD8;
    case 0x7F1ABDDCu: goto label_7F1ABDDC;
    case 0x7F1ABDE0u: goto label_7F1ABDE0;
    case 0x7F1ABDE4u: goto label_7F1ABDE4;
    case 0x7F1ABDE8u: goto label_7F1ABDE8;
    case 0x7F1ABDECu: goto label_7F1ABDEC;
    case 0x7F1ABDF0u: goto label_7F1ABDF0;
    case 0x7F1ABDF4u: goto label_7F1ABDF4;
    case 0x7F1ABDF8u: goto label_7F1ABDF8;
    case 0x7F1ABDFCu: goto label_7F1ABDFC;
    case 0x7F1ABE00u: goto label_7F1ABE00;
    case 0x7F1ABE04u: goto label_7F1ABE04;
    case 0x7F1ABE08u: goto label_7F1ABE08;
    case 0x7F1ABE0Cu: goto label_7F1ABE0C;
    case 0x7F1ABE10u: goto label_7F1ABE10;
    case 0x7F1ABE14u: goto label_7F1ABE14;
    case 0x7F1ABE18u: goto label_7F1ABE18;
    case 0x7F1ABE1Cu: goto label_7F1ABE1C;
    case 0x7F1ABE20u: goto label_7F1ABE20;
    case 0x7F1ABE24u: goto label_7F1ABE24;
    case 0x7F1ABE28u: goto label_7F1ABE28;
    case 0x7F1ABE2Cu: goto label_7F1ABE2C;
    case 0x7F1ABE30u: goto label_7F1ABE30;
    case 0x7F1ABE34u: goto label_7F1ABE34;
    case 0x7F1ABE38u: goto label_7F1ABE38;
    case 0x7F1ABE3Cu: goto label_7F1ABE3C;
    case 0x7F1ABE40u: goto label_7F1ABE40;
    case 0x7F1ABE44u: goto label_7F1ABE44;
    case 0x7F1ABE48u: goto label_7F1ABE48;
    case 0x7F1ABE4Cu: goto label_7F1ABE4C;
    case 0x7F1ABE50u: goto label_7F1ABE50;
    case 0x7F1ABE54u: goto label_7F1ABE54;
    case 0x7F1ABE58u: goto label_7F1ABE58;
    case 0x7F1ABE5Cu: goto label_7F1ABE5C;
    case 0x7F1ABE60u: goto label_7F1ABE60;
    case 0x7F1ABE64u: goto label_7F1ABE64;
    case 0x7F1ABE68u: goto label_7F1ABE68;
    case 0x7F1ABE6Cu: goto label_7F1ABE6C;
    case 0x7F1ABE70u: goto label_7F1ABE70;
    case 0x7F1ABE74u: goto label_7F1ABE74;
    case 0x7F1ABE78u: goto label_7F1ABE78;
    case 0x7F1ABE7Cu: goto label_7F1ABE7C;
    case 0x7F1ABE80u: goto label_7F1ABE80;
    case 0x7F1ABE84u: goto label_7F1ABE84;
    case 0x7F1ABE88u: goto label_7F1ABE88;
    case 0x7F1ABE8Cu: goto label_7F1ABE8C;
    case 0x7F1ABE90u: goto label_7F1ABE90;
    case 0x7F1ABE94u: goto label_7F1ABE94;
    case 0x7F1ABE98u: goto label_7F1ABE98;
    case 0x7F1ABE9Cu: goto label_7F1ABE9C;
    case 0x7F1ABEA0u: goto label_7F1ABEA0;
    case 0x7F1ABEA4u: goto label_7F1ABEA4;
    case 0x7F1ABEA8u: goto label_7F1ABEA8;
    case 0x7F1ABEACu: goto label_7F1ABEAC;
    case 0x7F1ABEB0u: goto label_7F1ABEB0;
    case 0x7F1ABEB4u: goto label_7F1ABEB4;
    case 0x7F1ABEB8u: goto label_7F1ABEB8;
    case 0x7F1ABEBCu: goto label_7F1ABEBC;
    case 0x7F1ABEC0u: goto label_7F1ABEC0;
    case 0x7F1ABEC4u: goto label_7F1ABEC4;
    case 0x7F1ABEC8u: goto label_7F1ABEC8;
    case 0x7F1ABECCu: goto label_7F1ABECC;
    case 0x7F1ABED0u: goto label_7F1ABED0;
    case 0x7F1ABED4u: goto label_7F1ABED4;
    case 0x7F1ABED8u: goto label_7F1ABED8;
    case 0x7F1ABEDCu: goto label_7F1ABEDC;
    case 0x7F1ABEE0u: goto label_7F1ABEE0;
    case 0x7F1ABEE4u: goto label_7F1ABEE4;
    case 0x7F1ABEE8u: goto label_7F1ABEE8;
    case 0x7F1ABEECu: goto label_7F1ABEEC;
    case 0x7F1ABEF0u: goto label_7F1ABEF0;
    case 0x7F1ABEF4u: goto label_7F1ABEF4;
    case 0x7F1ABEF8u: goto label_7F1ABEF8;
    case 0x7F1ABEFCu: goto label_7F1ABEFC;
    case 0x7F1ABF00u: goto label_7F1ABF00;
    case 0x7F1ABF04u: goto label_7F1ABF04;
    case 0x7F1ABF08u: goto label_7F1ABF08;
    case 0x7F1ABF0Cu: goto label_7F1ABF0C;
    case 0x7F1ABF10u: goto label_7F1ABF10;
    case 0x7F1ABF14u: goto label_7F1ABF14;
    case 0x7F1ABF18u: goto label_7F1ABF18;
    case 0x7F1ABF1Cu: goto label_7F1ABF1C;
    case 0x7F1ABF20u: goto label_7F1ABF20;
    case 0x7F1ABF24u: goto label_7F1ABF24;
    case 0x7F1ABF28u: goto label_7F1ABF28;
    case 0x7F1ABF2Cu: goto label_7F1ABF2C;
    case 0x7F1ABF30u: goto label_7F1ABF30;
    case 0x7F1ABF34u: goto label_7F1ABF34;
    case 0x7F1ABF38u: goto label_7F1ABF38;
    case 0x7F1ABF3Cu: goto label_7F1ABF3C;
    case 0x7F1ABF40u: goto label_7F1ABF40;
    case 0x7F1ABF44u: goto label_7F1ABF44;
    case 0x7F1ABF48u: goto label_7F1ABF48;
    case 0x7F1ABF4Cu: goto label_7F1ABF4C;
    case 0x7F1ABF50u: goto label_7F1ABF50;
    case 0x7F1ABF54u: goto label_7F1ABF54;
    case 0x7F1ABF58u: goto label_7F1ABF58;
    case 0x7F1ABF5Cu: goto label_7F1ABF5C;
    case 0x7F1ABF60u: goto label_7F1ABF60;
    case 0x7F1ABF64u: goto label_7F1ABF64;
    case 0x7F1ABF68u: goto label_7F1ABF68;
    case 0x7F1ABF6Cu: goto label_7F1ABF6C;
    case 0x7F1ABF70u: goto label_7F1ABF70;
    case 0x7F1ABF74u: goto label_7F1ABF74;
    case 0x7F1ABF78u: goto label_7F1ABF78;
    case 0x7F1ABF7Cu: goto label_7F1ABF7C;
    case 0x7F1ABF80u: goto label_7F1ABF80;
    case 0x7F1ABF84u: goto label_7F1ABF84;
    case 0x7F1ABF88u: goto label_7F1ABF88;
    case 0x7F1ABF8Cu: goto label_7F1ABF8C;
    case 0x7F1ABF90u: goto label_7F1ABF90;
    case 0x7F1ABF94u: goto label_7F1ABF94;
    case 0x7F1ABF98u: goto label_7F1ABF98;
    case 0x7F1ABF9Cu: goto label_7F1ABF9C;
    case 0x7F1ABFA0u: goto label_7F1ABFA0;
    case 0x7F1ABFA4u: goto label_7F1ABFA4;
    case 0x7F1ABFA8u: goto label_7F1ABFA8;
    case 0x7F1ABFACu: goto label_7F1ABFAC;
    case 0x7F1ABFB0u: goto label_7F1ABFB0;
    case 0x7F1ABFB4u: goto label_7F1ABFB4;
    case 0x7F1ABFB8u: goto label_7F1ABFB8;
    case 0x7F1ABFBCu: goto label_7F1ABFBC;
    case 0x7F1ABFC0u: goto label_7F1ABFC0;
    case 0x7F1ABFC4u: goto label_7F1ABFC4;
    case 0x7F1ABFC8u: goto label_7F1ABFC8;
    case 0x7F1ABFCCu: goto label_7F1ABFCC;
    case 0x7F1ABFD0u: goto label_7F1ABFD0;
    case 0x7F1ABFD4u: goto label_7F1ABFD4;
    case 0x7F1ABFD8u: goto label_7F1ABFD8;
    case 0x7F1ABFDCu: goto label_7F1ABFDC;
    case 0x7F1ABFE0u: goto label_7F1ABFE0;
    case 0x7F1ABFE4u: goto label_7F1ABFE4;
    case 0x7F1ABFE8u: goto label_7F1ABFE8;
    case 0x7F1ABFECu: goto label_7F1ABFEC;
    case 0x7F1ABFF0u: goto label_7F1ABFF0;
    case 0x7F1ABFF4u: goto label_7F1ABFF4;
    case 0x7F1ABFF8u: goto label_7F1ABFF8;
    case 0x7F1ABFFCu: goto label_7F1ABFFC;
    case 0x7F1AC000u: goto label_7F1AC000;
    case 0x7F1AC004u: goto label_7F1AC004;
    case 0x7F1AC008u: goto label_7F1AC008;
    case 0x7F1AC00Cu: goto label_7F1AC00C;
    case 0x7F1AC010u: goto label_7F1AC010;
    case 0x7F1AC014u: goto label_7F1AC014;
    case 0x7F1AC018u: goto label_7F1AC018;
    case 0x7F1AC01Cu: goto label_7F1AC01C;
    case 0x7F1AC020u: goto label_7F1AC020;
    case 0x7F1AC024u: goto label_7F1AC024;
    case 0x7F1AC028u: goto label_7F1AC028;
    case 0x7F1AC02Cu: goto label_7F1AC02C;
    case 0x7F1AC030u: goto label_7F1AC030;
    case 0x7F1AC034u: goto label_7F1AC034;
    case 0x7F1AC038u: goto label_7F1AC038;
    case 0x7F1AC03Cu: goto label_7F1AC03C;
    case 0x7F1AC040u: goto label_7F1AC040;
    case 0x7F1AC044u: goto label_7F1AC044;
    case 0x7F1AC048u: goto label_7F1AC048;
    case 0x7F1AC04Cu: goto label_7F1AC04C;
    case 0x7F1AC050u: goto label_7F1AC050;
    case 0x7F1AC054u: goto label_7F1AC054;
    case 0x7F1AC058u: goto label_7F1AC058;
    case 0x7F1AC05Cu: goto label_7F1AC05C;
    case 0x7F1AC060u: goto label_7F1AC060;
    case 0x7F1AC064u: goto label_7F1AC064;
    case 0x7F1AC068u: goto label_7F1AC068;
    case 0x7F1AC06Cu: goto label_7F1AC06C;
    case 0x7F1AC070u: goto label_7F1AC070;
    case 0x7F1AC074u: goto label_7F1AC074;
    case 0x7F1AC078u: goto label_7F1AC078;
    case 0x7F1AC07Cu: goto label_7F1AC07C;
    case 0x7F1AC080u: goto label_7F1AC080;
    case 0x7F1AC084u: goto label_7F1AC084;
    case 0x7F1AC088u: goto label_7F1AC088;
    case 0x7F1AC08Cu: goto label_7F1AC08C;
    case 0x7F1AC090u: goto label_7F1AC090;
    case 0x7F1AC094u: goto label_7F1AC094;
    case 0x7F1AC098u: goto label_7F1AC098;
    case 0x7F1AC09Cu: goto label_7F1AC09C;
    case 0x7F1AC0A0u: goto label_7F1AC0A0;
    case 0x7F1AC0A4u: goto label_7F1AC0A4;
    case 0x7F1AC0A8u: goto label_7F1AC0A8;
    case 0x7F1AC0ACu: goto label_7F1AC0AC;
    case 0x7F1AC0B0u: goto label_7F1AC0B0;
    case 0x7F1AC0B4u: goto label_7F1AC0B4;
    case 0x7F1AC0B8u: goto label_7F1AC0B8;
    case 0x7F1AC0BCu: goto label_7F1AC0BC;
    case 0x7F1AC0C0u: goto label_7F1AC0C0;
    case 0x7F1AC0C4u: goto label_7F1AC0C4;
    case 0x7F1AC0C8u: goto label_7F1AC0C8;
    case 0x7F1AC0CCu: goto label_7F1AC0CC;
    case 0x7F1AC0D0u: goto label_7F1AC0D0;
    case 0x7F1AC0D4u: goto label_7F1AC0D4;
    case 0x7F1AC0D8u: goto label_7F1AC0D8;
    case 0x7F1AC0DCu: goto label_7F1AC0DC;
    case 0x7F1AC0E0u: goto label_7F1AC0E0;
    case 0x7F1AC0E4u: goto label_7F1AC0E4;
    case 0x7F1AC0E8u: goto label_7F1AC0E8;
    default: return;
    }
label_7F1A80EC:
    ctx->pc = 0x7F1A80ECu;
    ctx->downcount -= 15;
    // 7F1A80EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A80F0:
    ctx->pc = 0x7F1A80F0u;
    // 7F1A80F0: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A80F4:
    ctx->pc = 0x7F1A80F4u;
    // 7F1A80F4: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A80F8:
    ctx->pc = 0x7F1A80F8u;
    // 7F1A80F8: lfs     f0, 6256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A80FC:
    ctx->pc = 0x7F1A80FCu;
    // 7F1A80FC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A80FCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1A8100:
    ctx->pc = 0x7F1A8100u;
    // 7F1A8100: stfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8100u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8104:
    ctx->pc = 0x7F1A8104u;
    // 7F1A8104: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8108:
    ctx->pc = 0x7F1A8108u;
    // 7F1A8108: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A810C:
    ctx->pc = 0x7F1A810Cu;
    // 7F1A810C: lfs     f2, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A810Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A8110:
    ctx->pc = 0x7F1A8110u;
    // 7F1A8110: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8110u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1A8114:
    ctx->pc = 0x7F1A8114u;
    // 7F1A8114: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8114u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8118:
    ctx->pc = 0x7F1A8118u;
    // 7F1A8118: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A811C:
    ctx->pc = 0x7F1A811Cu;
    // 7F1A811C: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A811Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8120:
    ctx->pc = 0x7F1A8120u;
    // 7F1A8120: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8120u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8124:
    ctx->pc = 0x7F1A8124u;
    // 7F1A8124: bc    4, 0, 0x7F1A8138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8138;
        }
    }

label_7F1A8128:
    ctx->pc = 0x7F1A8128u;
    ctx->downcount -= 4;
    // 7F1A8128: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8128u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A812C:
    ctx->pc = 0x7F1A812Cu;
    // 7F1A812C: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8130:
    ctx->pc = 0x7F1A8130u;
    // 7F1A8130: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8130u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8134:
    ctx->pc = 0x7F1A8134u;
    // 7F1A8134: b       0x7F1A8154
    {
            goto label_7F1A8154;
    }

label_7F1A8138:
    ctx->pc = 0x7F1A8138u;
    ctx->downcount -= 4;
    // 7F1A8138: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A813C:
    ctx->pc = 0x7F1A813Cu;
    // 7F1A813C: lfs     f0, 6260(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A813Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8140:
    ctx->pc = 0x7F1A8140u;
    // 7F1A8140: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8140u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8144:
    ctx->pc = 0x7F1A8144u;
    // 7F1A8144: bc    4, 1, 0x7F1A8154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8154;
        }
    }

label_7F1A8148:
    ctx->pc = 0x7F1A8148u;
    ctx->downcount -= 3;
    // 7F1A8148: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8148u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A814C:
    ctx->pc = 0x7F1A814Cu;
    // 7F1A814C: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8150:
    ctx->pc = 0x7F1A8150u;
    // 7F1A8150: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8150u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8154:
    ctx->pc = 0x7F1A8154u;
    ctx->downcount -= 6;
    // 7F1A8154: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8158:
    ctx->pc = 0x7F1A8158u;
    // 7F1A8158: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A815C:
    ctx->pc = 0x7F1A815Cu;
    // 7F1A815C: lfs     f0, 6264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A815Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8160:
    ctx->pc = 0x7F1A8160u;
    // 7F1A8160: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8160u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8164:
    ctx->pc = 0x7F1A8164u;
    // 7F1A8164: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8164u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8168:
    ctx->pc = 0x7F1A8168u;
    // 7F1A8168: bc    4, 0, 0x7F1A817C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A817C;
        }
    }

label_7F1A816C:
    ctx->pc = 0x7F1A816Cu;
    ctx->downcount -= 4;
    // 7F1A816C: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A816Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8170:
    ctx->pc = 0x7F1A8170u;
    // 7F1A8170: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8174:
    ctx->pc = 0x7F1A8174u;
    // 7F1A8174: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8174u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8178:
    ctx->pc = 0x7F1A8178u;
    // 7F1A8178: b       0x7F1A8198
    {
            goto label_7F1A8198;
    }

label_7F1A817C:
    ctx->pc = 0x7F1A817Cu;
    ctx->downcount -= 4;
    // 7F1A817C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8180:
    ctx->pc = 0x7F1A8180u;
    // 7F1A8180: lfs     f0, 6268(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8180u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8184:
    ctx->pc = 0x7F1A8184u;
    // 7F1A8184: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8184u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8188:
    ctx->pc = 0x7F1A8188u;
    // 7F1A8188: bc    4, 1, 0x7F1A8198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8198;
        }
    }

label_7F1A818C:
    ctx->pc = 0x7F1A818Cu;
    ctx->downcount -= 3;
    // 7F1A818C: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A818Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8190:
    ctx->pc = 0x7F1A8190u;
    // 7F1A8190: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8194:
    ctx->pc = 0x7F1A8194u;
    // 7F1A8194: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8198:
    ctx->pc = 0x7F1A8198u;
    ctx->downcount -= 5;
    // 7F1A8198: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A819C:
    ctx->pc = 0x7F1A819Cu;
    // 7F1A819C: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A819Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A81A0:
    ctx->pc = 0x7F1A81A0u;
    // 7F1A81A0: lfs     f1, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A81A4:
    ctx->pc = 0x7F1A81A4u;
    // 7F1A81A4: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A81A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A81A8:
    ctx->pc = 0x7F1A81A8u;
    // 7F1A81A8: bc    4, 2, 0x7F1A8230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8230;
        }
    }

label_7F1A81AC:
    ctx->pc = 0x7F1A81ACu;
    ctx->downcount -= 3;
    // 7F1A81AC: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A81B0:
    ctx->pc = 0x7F1A81B0u;
    // 7F1A81B0: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A81B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A81B4:
    ctx->pc = 0x7F1A81B4u;
    // 7F1A81B4: bc    4, 2, 0x7F1A8230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8230;
        }
    }

label_7F1A81B8:
    ctx->pc = 0x7F1A81B8u;
    ctx->downcount -= 15;
    // 7F1A81B8: lwz     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A81BC:
    ctx->pc = 0x7F1A81BCu;
    // 7F1A81BC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A81C0:
    ctx->pc = 0x7F1A81C0u;
    // 7F1A81C0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1A81C4:
    ctx->pc = 0x7F1A81C4u;
    // 7F1A81C4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A81C8:
    ctx->pc = 0x7F1A81C8u;
    // 7F1A81C8: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81C8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A81CC:
    ctx->pc = 0x7F1A81CCu;
    // 7F1A81CC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A81D0:
    ctx->pc = 0x7F1A81D0u;
    // 7F1A81D0: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81D0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A81D4:
    ctx->pc = 0x7F1A81D4u;
    // 7F1A81D4: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A81D8:
    ctx->pc = 0x7F1A81D8u;
    // 7F1A81D8: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81DC:
    ctx->pc = 0x7F1A81DCu;
    // 7F1A81DC: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81E0:
    ctx->pc = 0x7F1A81E0u;
    // 7F1A81E0: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81E4:
    ctx->pc = 0x7F1A81E4u;
    // 7F1A81E4: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81E8:
    ctx->pc = 0x7F1A81E8u;
    // 7F1A81E8: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81EC:
    ctx->pc = 0x7F1A81ECu;
    // 7F1A81EC: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A81F0:
    ctx->pc = 0x7F1A81F0u;
    // 7F1A81F0: bl      0x800261D8
    {
            ctx->lr = 0x7F1A81F4u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1A81F4:
    ctx->pc = 0x7F1A81F4u;
    ctx->downcount -= 5;
    // 7F1A81F4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A81F8:
    ctx->pc = 0x7F1A81F8u;
    // 7F1A81F8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A81FC:
    ctx->pc = 0x7F1A81FCu;
    // 7F1A81FC: lfs     f1, 6272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A81FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8200:
    ctx->pc = 0x7F1A8200u;
    // 7F1A8200: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8204:
    ctx->pc = 0x7F1A8204u;
    // 7F1A8204: bl      0x800261FC
    {
            ctx->lr = 0x7F1A8208u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1A8208:
    ctx->pc = 0x7F1A8208u;
    ctx->downcount -= 10;
    // 7F1A8208: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A820C:
    ctx->pc = 0x7F1A820Cu;
    // 7F1A820C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A820Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8210:
    ctx->pc = 0x7F1A8210u;
    // 7F1A8210: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8210u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8214:
    ctx->pc = 0x7F1A8214u;
    // 7F1A8214: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8214u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A8218:
    ctx->pc = 0x7F1A8218u;
    // 7F1A8218: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8218u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A821C:
    ctx->pc = 0x7F1A821Cu;
    // 7F1A821C: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8220:
    ctx->pc = 0x7F1A8220u;
    // 7F1A8220: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8224:
    ctx->pc = 0x7F1A8224u;
    // 7F1A8224: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8224u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8228:
    ctx->pc = 0x7F1A8228u;
    // 7F1A8228: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8228u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A822C:
    ctx->pc = 0x7F1A822Cu;
    // 7F1A822C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A822Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8230:
    ctx->pc = 0x7F1A8230u;
    ctx->downcount -= 6;
    // 7F1A8230: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8234:
    ctx->pc = 0x7F1A8234u;
    // 7F1A8234: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A8238:
    ctx->pc = 0x7F1A8238u;
    // 7F1A8238: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A823C:
    ctx->pc = 0x7F1A823Cu;
    // 7F1A823C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A8240:
    ctx->pc = 0x7F1A8240u;
    // 7F1A8240: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8244:
    ctx->pc = 0x7F1A8244u;
    ctx->downcount -= 89;
    // 7F1A8244: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8248:
    ctx->pc = 0x7F1A8248u;
    // 7F1A8248: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A824C:
    ctx->pc = 0x7F1A824Cu;
    // 7F1A824C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A8250:
    ctx->pc = 0x7F1A8250u;
    // 7F1A8250: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8254:
    ctx->pc = 0x7F1A8254u;
    // 7F1A8254: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A8258:
    ctx->pc = 0x7F1A8258u;
    // 7F1A8258: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A825C:
    ctx->pc = 0x7F1A825Cu;
    // 7F1A825C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8260:
    ctx->pc = 0x7F1A8260u;
    // 7F1A8260: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A8264:
    ctx->pc = 0x7F1A8264u;
    // 7F1A8264: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8268:
    ctx->pc = 0x7F1A8268u;
    // 7F1A8268: addi    r9, r3, 6176
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(6176);

label_7F1A826C:
    ctx->pc = 0x7F1A826Cu;
    // 7F1A826C: lha     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A8270:
    ctx->pc = 0x7F1A8270u;
    // 7F1A8270: lha     r6, 128(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(128);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A8274:
    ctx->pc = 0x7F1A8274u;
    // 7F1A8274: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8278:
    ctx->pc = 0x7F1A8278u;
    // 7F1A8278: addi    r7, r3, 6216
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(6216);

label_7F1A827C:
    ctx->pc = 0x7F1A827Cu;
    // 7F1A827C: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8280:
    ctx->pc = 0x7F1A8280u;
    // 7F1A8280: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1A8284:
    ctx->pc = 0x7F1A8284u;
    // 7F1A8284: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8288:
    ctx->pc = 0x7F1A8288u;
    // 7F1A8288: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A828C:
    ctx->pc = 0x7F1A828Cu;
    // 7F1A828C: lfd     f7, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1A828Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A8290:
    ctx->pc = 0x7F1A8290u;
    // 7F1A8290: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A8294:
    ctx->pc = 0x7F1A8294u;
    // 7F1A8294: addi    r5, r3, 6220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6220);

label_7F1A8298:
    ctx->pc = 0x7F1A8298u;
    // 7F1A8298: addi    r6, r4, 6172
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6172);

label_7F1A829C:
    ctx->pc = 0x7F1A829Cu;
    // 7F1A829C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A82A0:
    ctx->pc = 0x7F1A82A0u;
    // 7F1A82A0: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A82A4:
    ctx->pc = 0x7F1A82A4u;
    // 7F1A82A4: addi    r4, r3, 6224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6224);

label_7F1A82A8:
    ctx->pc = 0x7F1A82A8u;
    // 7F1A82A8: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A82AC:
    ctx->pc = 0x7F1A82ACu;
    // 7F1A82AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A82B0:
    ctx->pc = 0x7F1A82B0u;
    // 7F1A82B0: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A82B0u)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_7F1A82B4:
    ctx->pc = 0x7F1A82B4u;
    // 7F1A82B4: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A82B8:
    ctx->pc = 0x7F1A82B8u;
    // 7F1A82B8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A82BC:
    ctx->pc = 0x7F1A82BCu;
    // 7F1A82BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A82C0:
    ctx->pc = 0x7F1A82C0u;
    // 7F1A82C0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A82C4:
    ctx->pc = 0x7F1A82C4u;
    // 7F1A82C4: fmuls   f6, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A82C4u)) return;
    ppc_fmuls(ctx, 6, 0, 1);

label_7F1A82C8:
    ctx->pc = 0x7F1A82C8u;
    // 7F1A82C8: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82C8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1A82CC:
    ctx->pc = 0x7F1A82CCu;
    // 7F1A82CC: lha     r4, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A82D0:
    ctx->pc = 0x7F1A82D0u;
    // 7F1A82D0: lha     r0, 130(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(130);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A82D4:
    ctx->pc = 0x7F1A82D4u;
    // 7F1A82D4: lfs     f0, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A82D8:
    ctx->pc = 0x7F1A82D8u;
    // 7F1A82D8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A82DC:
    ctx->pc = 0x7F1A82DCu;
    // 7F1A82DC: stfs     f6, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F1A82E0:
    ctx->pc = 0x7F1A82E0u;
    // 7F1A82E0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A82E4:
    ctx->pc = 0x7F1A82E4u;
    // 7F1A82E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A82E8:
    ctx->pc = 0x7F1A82E8u;
    // 7F1A82E8: lfd     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A82EC:
    ctx->pc = 0x7F1A82ECu;
    // 7F1A82EC: fsubs   f7, f5, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A82ECu)) return;
    ppc_fsubs(ctx, 7, 5, 7);

label_7F1A82F0:
    ctx->pc = 0x7F1A82F0u;
    // 7F1A82F0: fmuls   f5, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A82F0u)) return;
    ppc_fmuls(ctx, 5, 7, 1);

label_7F1A82F4:
    ctx->pc = 0x7F1A82F4u;
    // 7F1A82F4: stfs     f7, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F1A82F8:
    ctx->pc = 0x7F1A82F8u;
    // 7F1A82F8: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1A82FC:
    ctx->pc = 0x7F1A82FCu;
    // 7F1A82FC: lfs     f1, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1A82FCu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8300:
    ctx->pc = 0x7F1A8300u;
    // 7F1A8300: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8300u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8304:
    ctx->pc = 0x7F1A8304u;
    // 7F1A8304: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8304u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_7F1A8308:
    ctx->pc = 0x7F1A8308u;
    // 7F1A8308: fmuls   f2, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1A8308u)) return;
    ppc_fmuls(ctx, 2, 1, 5);

label_7F1A830C:
    ctx->pc = 0x7F1A830Cu;
    // 7F1A830C: fmuls   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1A830Cu)) return;
    ppc_fmuls(ctx, 1, 1, 6);

label_7F1A8310:
    ctx->pc = 0x7F1A8310u;
    // 7F1A8310: fdivs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A8310u)) return;
    ppc_fdivs(ctx, 2, 2, 3);

label_7F1A8314:
    ctx->pc = 0x7F1A8314u;
    // 7F1A8314: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A8314u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F1A8318:
    ctx->pc = 0x7F1A8318u;
    // 7F1A8318: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A831C:
    ctx->pc = 0x7F1A831Cu;
    // 7F1A831C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A831Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A8320:
    ctx->pc = 0x7F1A8320u;
    // 7F1A8320: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8320u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8324:
    ctx->pc = 0x7F1A8324u;
    // 7F1A8324: bc    4, 0, 0x7F1A8330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8330;
        }
    }

label_7F1A8328:
    ctx->pc = 0x7F1A8328u;
    ctx->downcount -= 2;
    // 7F1A8328: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A832C:
    ctx->pc = 0x7F1A832Cu;
    // 7F1A832C: b       0x7F1A8334
    {
            goto label_7F1A8334;
    }

label_7F1A8330:
    ctx->pc = 0x7F1A8330u;
    ctx->downcount -= 1;
    // 7F1A8330: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A8334:
    ctx->pc = 0x7F1A8334u;
    ctx->downcount -= 2;
    // 7F1A8334: cmpwi   r0, 0
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

label_7F1A8338:
    ctx->pc = 0x7F1A8338u;
    // 7F1A8338: bc    4, 0, 0x7F1A8354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8354;
        }
    }

label_7F1A833C:
    ctx->pc = 0x7F1A833Cu;
    ctx->downcount -= 4;
    // 7F1A833C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8340:
    ctx->pc = 0x7F1A8340u;
    // 7F1A8340: lfs     f0, 6244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8340u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8344:
    ctx->pc = 0x7F1A8344u;
    // 7F1A8344: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8344u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A8348:
    ctx->pc = 0x7F1A8348u;
    // 7F1A8348: bc    4, 0, 0x7F1A8368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8368;
        }
    }

label_7F1A834C:
    ctx->pc = 0x7F1A834Cu;
    ctx->downcount -= 2;
    // 7F1A834C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A834Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8350:
    ctx->pc = 0x7F1A8350u;
    // 7F1A8350: b       0x7F1A8368
    {
            goto label_7F1A8368;
    }

label_7F1A8354:
    ctx->pc = 0x7F1A8354u;
    ctx->downcount -= 4;
    // 7F1A8354: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8358:
    ctx->pc = 0x7F1A8358u;
    // 7F1A8358: lfs     f0, 6248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A835C:
    ctx->pc = 0x7F1A835Cu;
    // 7F1A835C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A835Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A8360:
    ctx->pc = 0x7F1A8360u;
    // 7F1A8360: bc    4, 1, 0x7F1A8368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8368;
        }
    }

label_7F1A8364:
    ctx->pc = 0x7F1A8364u;
    ctx->downcount -= 1;
    // 7F1A8364: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8368:
    ctx->pc = 0x7F1A8368u;
    ctx->downcount -= 5;
    // 7F1A8368: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A836C:
    ctx->pc = 0x7F1A836Cu;
    // 7F1A836C: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A836Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8370:
    ctx->pc = 0x7F1A8370u;
    // 7F1A8370: lfs     f0, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8370u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8374:
    ctx->pc = 0x7F1A8374u;
    // 7F1A8374: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8374u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8378:
    ctx->pc = 0x7F1A8378u;
    // 7F1A8378: bc    4, 0, 0x7F1A8384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8384;
        }
    }

label_7F1A837C:
    ctx->pc = 0x7F1A837Cu;
    ctx->downcount -= 2;
    // 7F1A837C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A8380:
    ctx->pc = 0x7F1A8380u;
    // 7F1A8380: b       0x7F1A8388
    {
            goto label_7F1A8388;
    }

label_7F1A8384:
    ctx->pc = 0x7F1A8384u;
    ctx->downcount -= 1;
    // 7F1A8384: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A8388:
    ctx->pc = 0x7F1A8388u;
    ctx->downcount -= 2;
    // 7F1A8388: cmpwi   r0, 0
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

label_7F1A838C:
    ctx->pc = 0x7F1A838Cu;
    // 7F1A838C: bc    4, 0, 0x7F1A83A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A83A8;
        }
    }

label_7F1A8390:
    ctx->pc = 0x7F1A8390u;
    ctx->downcount -= 4;
    // 7F1A8390: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8394:
    ctx->pc = 0x7F1A8394u;
    // 7F1A8394: lfs     f0, 6244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8394u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8398:
    ctx->pc = 0x7F1A8398u;
    // 7F1A8398: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8398u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A839C:
    ctx->pc = 0x7F1A839Cu;
    // 7F1A839C: bc    4, 0, 0x7F1A83BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A83BC;
        }
    }

label_7F1A83A0:
    ctx->pc = 0x7F1A83A0u;
    ctx->downcount -= 2;
    // 7F1A83A0: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A83A4:
    ctx->pc = 0x7F1A83A4u;
    // 7F1A83A4: b       0x7F1A83BC
    {
            goto label_7F1A83BC;
    }

label_7F1A83A8:
    ctx->pc = 0x7F1A83A8u;
    ctx->downcount -= 4;
    // 7F1A83A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A83AC:
    ctx->pc = 0x7F1A83ACu;
    // 7F1A83AC: lfs     f0, 6248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A83B0:
    ctx->pc = 0x7F1A83B0u;
    // 7F1A83B0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A83B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A83B4:
    ctx->pc = 0x7F1A83B4u;
    // 7F1A83B4: bc    4, 1, 0x7F1A83BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A83BC;
        }
    }

label_7F1A83B8:
    ctx->pc = 0x7F1A83B8u;
    ctx->downcount -= 1;
    // 7F1A83B8: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A83BC:
    ctx->pc = 0x7F1A83BCu;
    ctx->downcount -= 16;
    // 7F1A83BC: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A83C0:
    ctx->pc = 0x7F1A83C0u;
    // 7F1A83C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A83C4:
    ctx->pc = 0x7F1A83C4u;
    // 7F1A83C4: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A83C8:
    ctx->pc = 0x7F1A83C8u;
    // 7F1A83C8: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A83CC:
    ctx->pc = 0x7F1A83CCu;
    // 7F1A83CC: lfs     f0, 6276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A83D0:
    ctx->pc = 0x7F1A83D0u;
    // 7F1A83D0: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A83D0u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1A83D4:
    ctx->pc = 0x7F1A83D4u;
    // 7F1A83D4: stfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A83D8:
    ctx->pc = 0x7F1A83D8u;
    // 7F1A83D8: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A83DC:
    ctx->pc = 0x7F1A83DCu;
    // 7F1A83DC: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A83E0:
    ctx->pc = 0x7F1A83E0u;
    // 7F1A83E0: lfs     f2, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A83E4:
    ctx->pc = 0x7F1A83E4u;
    // 7F1A83E4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A83E4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1A83E8:
    ctx->pc = 0x7F1A83E8u;
    // 7F1A83E8: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A83EC:
    ctx->pc = 0x7F1A83ECu;
    // 7F1A83EC: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A83F0:
    ctx->pc = 0x7F1A83F0u;
    // 7F1A83F0: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A83F4:
    ctx->pc = 0x7F1A83F4u;
    // 7F1A83F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A83F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A83F8:
    ctx->pc = 0x7F1A83F8u;
    // 7F1A83F8: bc    4, 0, 0x7F1A840C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A840C;
        }
    }

label_7F1A83FC:
    ctx->pc = 0x7F1A83FCu;
    ctx->downcount -= 4;
    // 7F1A83FC: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A83FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8400:
    ctx->pc = 0x7F1A8400u;
    // 7F1A8400: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8404:
    ctx->pc = 0x7F1A8404u;
    // 7F1A8404: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8408:
    ctx->pc = 0x7F1A8408u;
    // 7F1A8408: b       0x7F1A8428
    {
            goto label_7F1A8428;
    }

label_7F1A840C:
    ctx->pc = 0x7F1A840Cu;
    ctx->downcount -= 4;
    // 7F1A840C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8410:
    ctx->pc = 0x7F1A8410u;
    // 7F1A8410: lfs     f0, 6280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8410u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8414:
    ctx->pc = 0x7F1A8414u;
    // 7F1A8414: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8414u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A8418:
    ctx->pc = 0x7F1A8418u;
    // 7F1A8418: bc    4, 1, 0x7F1A8428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8428;
        }
    }

label_7F1A841C:
    ctx->pc = 0x7F1A841Cu;
    ctx->downcount -= 3;
    // 7F1A841C: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A841Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8420:
    ctx->pc = 0x7F1A8420u;
    // 7F1A8420: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8424:
    ctx->pc = 0x7F1A8424u;
    // 7F1A8424: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8428:
    ctx->pc = 0x7F1A8428u;
    ctx->downcount -= 6;
    // 7F1A8428: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A842C:
    ctx->pc = 0x7F1A842Cu;
    // 7F1A842C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8430:
    ctx->pc = 0x7F1A8430u;
    // 7F1A8430: lfs     f0, 6284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8430u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8434:
    ctx->pc = 0x7F1A8434u;
    // 7F1A8434: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8434u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8438:
    ctx->pc = 0x7F1A8438u;
    // 7F1A8438: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8438u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A843C:
    ctx->pc = 0x7F1A843Cu;
    // 7F1A843C: bc    4, 0, 0x7F1A8450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8450;
        }
    }

label_7F1A8440:
    ctx->pc = 0x7F1A8440u;
    ctx->downcount -= 4;
    // 7F1A8440: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8440u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8444:
    ctx->pc = 0x7F1A8444u;
    // 7F1A8444: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8448:
    ctx->pc = 0x7F1A8448u;
    // 7F1A8448: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8448u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A844C:
    ctx->pc = 0x7F1A844Cu;
    // 7F1A844C: b       0x7F1A846C
    {
            goto label_7F1A846C;
    }

label_7F1A8450:
    ctx->pc = 0x7F1A8450u;
    ctx->downcount -= 4;
    // 7F1A8450: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8454:
    ctx->pc = 0x7F1A8454u;
    // 7F1A8454: lfs     f0, 6288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8454u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8458:
    ctx->pc = 0x7F1A8458u;
    // 7F1A8458: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8458u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A845C:
    ctx->pc = 0x7F1A845Cu;
    // 7F1A845C: bc    4, 1, 0x7F1A846C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A846C;
        }
    }

label_7F1A8460:
    ctx->pc = 0x7F1A8460u;
    ctx->downcount -= 3;
    // 7F1A8460: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8460u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8464:
    ctx->pc = 0x7F1A8464u;
    // 7F1A8464: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8468:
    ctx->pc = 0x7F1A8468u;
    // 7F1A8468: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8468u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A846C:
    ctx->pc = 0x7F1A846Cu;
    ctx->downcount -= 5;
    // 7F1A846C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8470:
    ctx->pc = 0x7F1A8470u;
    // 7F1A8470: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8474:
    ctx->pc = 0x7F1A8474u;
    // 7F1A8474: lfs     f1, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8474u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8478:
    ctx->pc = 0x7F1A8478u;
    // 7F1A8478: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8478u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A847C:
    ctx->pc = 0x7F1A847Cu;
    // 7F1A847C: bc    4, 2, 0x7F1A8504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8504;
        }
    }

label_7F1A8480:
    ctx->pc = 0x7F1A8480u;
    ctx->downcount -= 3;
    // 7F1A8480: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8484:
    ctx->pc = 0x7F1A8484u;
    // 7F1A8484: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8484u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A8488:
    ctx->pc = 0x7F1A8488u;
    // 7F1A8488: bc    4, 2, 0x7F1A8504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8504;
        }
    }

label_7F1A848C:
    ctx->pc = 0x7F1A848Cu;
    ctx->downcount -= 15;
    // 7F1A848C: lwz     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A8490:
    ctx->pc = 0x7F1A8490u;
    // 7F1A8490: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A8494:
    ctx->pc = 0x7F1A8494u;
    // 7F1A8494: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1A8498:
    ctx->pc = 0x7F1A8498u;
    // 7F1A8498: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A849C:
    ctx->pc = 0x7F1A849Cu;
    // 7F1A849C: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A849Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A84A0:
    ctx->pc = 0x7F1A84A0u;
    // 7F1A84A0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A84A4:
    ctx->pc = 0x7F1A84A4u;
    // 7F1A84A4: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A84A8:
    ctx->pc = 0x7F1A84A8u;
    // 7F1A84A8: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A84AC:
    ctx->pc = 0x7F1A84ACu;
    // 7F1A84AC: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84B0:
    ctx->pc = 0x7F1A84B0u;
    // 7F1A84B0: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84B4:
    ctx->pc = 0x7F1A84B4u;
    // 7F1A84B4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84B8:
    ctx->pc = 0x7F1A84B8u;
    // 7F1A84B8: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84BC:
    ctx->pc = 0x7F1A84BCu;
    // 7F1A84BC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84C0:
    ctx->pc = 0x7F1A84C0u;
    // 7F1A84C0: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A84C4:
    ctx->pc = 0x7F1A84C4u;
    // 7F1A84C4: bl      0x800261D8
    {
            ctx->lr = 0x7F1A84C8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1A84C8:
    ctx->pc = 0x7F1A84C8u;
    ctx->downcount -= 5;
    // 7F1A84C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A84CC:
    ctx->pc = 0x7F1A84CCu;
    // 7F1A84CC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A84D0:
    ctx->pc = 0x7F1A84D0u;
    // 7F1A84D0: lfs     f1, 6292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A84D4:
    ctx->pc = 0x7F1A84D4u;
    // 7F1A84D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A84D8:
    ctx->pc = 0x7F1A84D8u;
    // 7F1A84D8: bl      0x800261FC
    {
            ctx->lr = 0x7F1A84DCu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1A84DC:
    ctx->pc = 0x7F1A84DCu;
    ctx->downcount -= 10;
    // 7F1A84DC: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A84E0:
    ctx->pc = 0x7F1A84E0u;
    // 7F1A84E0: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A84E4:
    ctx->pc = 0x7F1A84E4u;
    // 7F1A84E4: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A84E8:
    ctx->pc = 0x7F1A84E8u;
    // 7F1A84E8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A84E8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A84EC:
    ctx->pc = 0x7F1A84ECu;
    // 7F1A84EC: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A84F0:
    ctx->pc = 0x7F1A84F0u;
    // 7F1A84F0: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A84F4:
    ctx->pc = 0x7F1A84F4u;
    // 7F1A84F4: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A84F8:
    ctx->pc = 0x7F1A84F8u;
    // 7F1A84F8: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A84F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A84FC:
    ctx->pc = 0x7F1A84FCu;
    // 7F1A84FC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A84FCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A8500:
    ctx->pc = 0x7F1A8500u;
    // 7F1A8500: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8500u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8504:
    ctx->pc = 0x7F1A8504u;
    ctx->downcount -= 6;
    // 7F1A8504: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8508:
    ctx->pc = 0x7F1A8508u;
    // 7F1A8508: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A850C:
    ctx->pc = 0x7F1A850Cu;
    // 7F1A850C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8510:
    ctx->pc = 0x7F1A8510u;
    // 7F1A8510: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A8514:
    ctx->pc = 0x7F1A8514u;
    // 7F1A8514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8518:
    ctx->pc = 0x7F1A8518u;
    ctx->downcount -= 23;
    // 7F1A8518: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A851C:
    ctx->pc = 0x7F1A851Cu;
    // 7F1A851C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8520:
    ctx->pc = 0x7F1A8520u;
    // 7F1A8520: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8524:
    ctx->pc = 0x7F1A8524u;
    // 7F1A8524: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8524u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1A8528:
    ctx->pc = 0x7F1A8528u;
    // 7F1A8528: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A8528u);
        if (ctx->exception) return;
    }

label_7F1A852C:
    ctx->pc = 0x7F1A852Cu;
    // 7F1A852C: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A852Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1A8530:
    ctx->pc = 0x7F1A8530u;
    // 7F1A8530: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A8530u);
        if (ctx->exception) return;
    }

label_7F1A8534:
    ctx->pc = 0x7F1A8534u;
    // 7F1A8534: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A8538:
    ctx->pc = 0x7F1A8538u;
    // 7F1A8538: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A853C:
    ctx->pc = 0x7F1A853Cu;
    // 7F1A853C: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F1A8540:
    ctx->pc = 0x7F1A8540u;
    // 7F1A8540: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8544:
    ctx->pc = 0x7F1A8544u;
    // 7F1A8544: addi    r4, r4, 19831
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19831);

label_7F1A8548:
    ctx->pc = 0x7F1A8548u;
    // 7F1A8548: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A854Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A854C:
    ctx->pc = 0x7F1A854Cu;
    ctx->downcount -= 4;
    // 7F1A854C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8550:
    ctx->pc = 0x7F1A8550u;
    // 7F1A8550: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8554:
    ctx->pc = 0x7F1A8554u;
    // 7F1A8554: cmplwi  r0, 0x0000
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

label_7F1A8558:
    ctx->pc = 0x7F1A8558u;
    // 7F1A8558: bc    4, 2, 0x7F1A8570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8570;
        }
    }

label_7F1A855C:
    ctx->pc = 0x7F1A855Cu;
    ctx->downcount -= 3;
    // 7F1A855C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A8560:
    ctx->pc = 0x7F1A8560u;
    // 7F1A8560: addi    r3, r3, -7088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7088);

label_7F1A8564:
    ctx->pc = 0x7F1A8564u;
    // 7F1A8564: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A8568u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A8568:
    ctx->pc = 0x7F1A8568u;
    ctx->downcount -= 2;
    // 7F1A8568: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A856C:
    ctx->pc = 0x7F1A856Cu;
    // 7F1A856C: b       0x7F1A8684
    {
            goto label_7F1A8684;
    }

label_7F1A8570:
    ctx->pc = 0x7F1A8570u;
    ctx->downcount -= 4;
    // 7F1A8570: lis     r4, 129
    ctx->gpr[4] = ((u32)(s32)(129) << 16);

label_7F1A8574:
    ctx->pc = 0x7F1A8574u;
    // 7F1A8574: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8578:
    ctx->pc = 0x7F1A8578u;
    // 7F1A8578: addi    r4, r4, -27545
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27545);

label_7F1A857C:
    ctx->pc = 0x7F1A857Cu;
    // 7F1A857C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A8580u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A8580:
    ctx->pc = 0x7F1A8580u;
    ctx->downcount -= 4;
    // 7F1A8580: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8584:
    ctx->pc = 0x7F1A8584u;
    // 7F1A8584: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8588:
    ctx->pc = 0x7F1A8588u;
    // 7F1A8588: cmplwi  r0, 0x0000
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

label_7F1A858C:
    ctx->pc = 0x7F1A858Cu;
    // 7F1A858C: bc    4, 2, 0x7F1A85A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A85A4;
        }
    }

label_7F1A8590:
    ctx->pc = 0x7F1A8590u;
    ctx->downcount -= 3;
    // 7F1A8590: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A8594:
    ctx->pc = 0x7F1A8594u;
    // 7F1A8594: addi    r3, r3, -7088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7088);

label_7F1A8598:
    ctx->pc = 0x7F1A8598u;
    // 7F1A8598: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A859Cu;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A859C:
    ctx->pc = 0x7F1A859Cu;
    ctx->downcount -= 2;
    // 7F1A859C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A85A0:
    ctx->pc = 0x7F1A85A0u;
    // 7F1A85A0: b       0x7F1A8684
    {
            goto label_7F1A8684;
    }

label_7F1A85A4:
    ctx->pc = 0x7F1A85A4u;
    ctx->downcount -= 4;
    // 7F1A85A4: lis     r4, 106
    ctx->gpr[4] = ((u32)(s32)(106) << 16);

label_7F1A85A8:
    ctx->pc = 0x7F1A85A8u;
    // 7F1A85A8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A85AC:
    ctx->pc = 0x7F1A85ACu;
    // 7F1A85AC: addi    r4, r4, 29286
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29286);

label_7F1A85B0:
    ctx->pc = 0x7F1A85B0u;
    // 7F1A85B0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A85B4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A85B4:
    ctx->pc = 0x7F1A85B4u;
    ctx->downcount -= 4;
    // 7F1A85B4: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A85B8:
    ctx->pc = 0x7F1A85B8u;
    // 7F1A85B8: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A85BC:
    ctx->pc = 0x7F1A85BCu;
    // 7F1A85BC: cmplwi  r0, 0x0000
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

label_7F1A85C0:
    ctx->pc = 0x7F1A85C0u;
    // 7F1A85C0: bc    4, 2, 0x7F1A85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A85D8;
        }
    }

label_7F1A85C4:
    ctx->pc = 0x7F1A85C4u;
    ctx->downcount -= 3;
    // 7F1A85C4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A85C8:
    ctx->pc = 0x7F1A85C8u;
    // 7F1A85C8: addi    r3, r3, -7072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7072);

label_7F1A85CC:
    ctx->pc = 0x7F1A85CCu;
    // 7F1A85CC: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A85D0u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A85D0:
    ctx->pc = 0x7F1A85D0u;
    ctx->downcount -= 2;
    // 7F1A85D0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A85D4:
    ctx->pc = 0x7F1A85D4u;
    // 7F1A85D4: b       0x7F1A8684
    {
            goto label_7F1A8684;
    }

label_7F1A85D8:
    ctx->pc = 0x7F1A85D8u;
    ctx->downcount -= 8;
    // 7F1A85D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A85DC:
    ctx->pc = 0x7F1A85DCu;
    // 7F1A85DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A85E0:
    ctx->pc = 0x7F1A85E0u;
    // 7F1A85E0: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1A85E4:
    ctx->pc = 0x7F1A85E4u;
    // 7F1A85E4: lfs     f30, 6208(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A85E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1A85E8:
    ctx->pc = 0x7F1A85E8u;
    // 7F1A85E8: lfs     f31, 6212(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A85E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1A85EC:
    ctx->pc = 0x7F1A85ECu;
    // 7F1A85EC: addi    r29, r5, -7056
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(-7056);

label_7F1A85F0:
    ctx->pc = 0x7F1A85F0u;
    // 7F1A85F0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A85F4:
    ctx->pc = 0x7F1A85F4u;
    // 7F1A85F4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A85F8:
    ctx->downcount -= 5;
    // 7F1A85F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A85FC:
    // 7F1A85FC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A8600:
    // 7F1A8600: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A8604:
    // 7F1A8604: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A8608:
    // 7F1A8608: bl      0x8001258C
    {
            ctx->lr = 0x7F1A860Cu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A860C:
    ctx->downcount -= 2;
    // 7F1A860C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A8610:
    // 7F1A8610: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A8614u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A8614:
    ctx->downcount -= 4;
    // 7F1A8614: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8618:
    ctx->pc = 0x7F1A8618u;
    // 7F1A8618: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A861C:
    // 7F1A861C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A8620:
    // 7F1A8620: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A8624u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A8624:
    ctx->downcount -= 14;
    // 7F1A8624: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F1A8628:
    // 7F1A8628: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A862C:
    ctx->pc = 0x7F1A862Cu;
    // 7F1A862C: stwx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8630:
    ctx->pc = 0x7F1A8630u;
    // 7F1A8630: lwzx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8634:
    ctx->pc = 0x7F1A8634u;
    // 7F1A8634: stfs     f30, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8634u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1A8638:
    ctx->pc = 0x7F1A8638u;
    // 7F1A8638: lwzx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A863C:
    ctx->pc = 0x7F1A863Cu;
    // 7F1A863C: stfs     f31, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A863Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1A8640:
    ctx->pc = 0x7F1A8640u;
    // 7F1A8640: lwzx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8644:
    ctx->pc = 0x7F1A8644u;
    // 7F1A8644: stb     r0, 55(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(55);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A8648:
    ctx->pc = 0x7F1A8648u;
    // 7F1A8648: lwzx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A864C:
    ctx->pc = 0x7F1A864Cu;
    // 7F1A864C: stb     r0, 59(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(59);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A8650:
    ctx->pc = 0x7F1A8650u;
    // 7F1A8650: lwzx    r0, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8654:
    // 7F1A8654: cmplwi  r0, 0x0000
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

label_7F1A8658:
    // 7F1A8658: bc    4, 2, 0x7F1A8670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8670;
        }
    }

label_7F1A865C:
    ctx->downcount -= 3;
    // 7F1A865C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A8660:
    // 7F1A8660: addi    r3, r3, -7072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7072);

label_7F1A8664:
    // 7F1A8664: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A8668u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A8668:
    ctx->downcount -= 2;
    // 7F1A8668: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A866C:
    // 7F1A866C: b       0x7F1A8684
    {
            goto label_7F1A8684;
    }

label_7F1A8670:
    ctx->downcount -= 4;
    // 7F1A8670: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1A8674:
    // 7F1A8674: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1A8678:
    // 7F1A8678: cmpwi   r28, 72
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(72);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A867C:
    // 7F1A867C: bc    12, 0, 0x7F1A85F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A85F8u;
                return;
            }
            goto label_7F1A85F8;
        }
    }

label_7F1A8680:
    ctx->pc = 0x7F1A8680u;
    ctx->downcount -= 1;
    // 7F1A8680: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A8684:
    ctx->pc = 0x7F1A8684u;
    ctx->downcount -= 20;
    // 7F1A8684: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A8684u);
        if (ctx->exception) return;
    }

label_7F1A8688:
    ctx->pc = 0x7F1A8688u;
    // 7F1A8688: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A868C:
    ctx->pc = 0x7F1A868Cu;
    // 7F1A868C: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A868Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A868Cu);
        if (ctx->exception) return;
    }

label_7F1A8690:
    ctx->pc = 0x7F1A8690u;
    // 7F1A8690: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A8694:
    ctx->pc = 0x7F1A8694u;
    // 7F1A8694: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A8698:
    ctx->pc = 0x7F1A8698u;
    // 7F1A8698: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A869C:
    ctx->pc = 0x7F1A869Cu;
    // 7F1A869C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A86A0:
    ctx->pc = 0x7F1A86A0u;
    // 7F1A86A0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A86A4:
    ctx->pc = 0x7F1A86A4u;
    // 7F1A86A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A86A8:
    ctx->pc = 0x7F1A86A8u;
    ctx->downcount -= 7;
    // 7F1A86A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A86AC:
    ctx->pc = 0x7F1A86ACu;
    // 7F1A86AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A86B0:
    ctx->pc = 0x7F1A86B0u;
    // 7F1A86B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A86B4:
    ctx->pc = 0x7F1A86B4u;
    // 7F1A86B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A86B8:
    ctx->pc = 0x7F1A86B8u;
    // 7F1A86B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A86BC:
    ctx->pc = 0x7F1A86BCu;
    // 7F1A86BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A86C0:
    ctx->pc = 0x7F1A86C0u;
    // 7F1A86C0: bl      0x7F026F84
    {
            ctx->lr = 0x7F1A86C4u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F1A86C4:
    ctx->pc = 0x7F1A86C4u;
    ctx->downcount -= 3;
    // 7F1A86C4: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A86C8:
    ctx->pc = 0x7F1A86C8u;
    // 7F1A86C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86CC:
    ctx->pc = 0x7F1A86CCu;
    // 7F1A86CC: bl      0x7F1A8244
    {
            ctx->lr = 0x7F1A86D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A8244u;
                return;
            }
            goto label_7F1A8244;
    }

label_7F1A86D0:
    ctx->pc = 0x7F1A86D0u;
    ctx->downcount -= 2;
    // 7F1A86D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86D4:
    ctx->pc = 0x7F1A86D4u;
    // 7F1A86D4: bl      0x7F1A7F70
    {
            ctx->lr = 0x7F1A86D8u;
            ctx->pc = 0x7F1A7F70u;
            return;
    }

label_7F1A86D8:
    ctx->pc = 0x7F1A86D8u;
    ctx->downcount -= 2;
    // 7F1A86D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86DC:
    ctx->pc = 0x7F1A86DCu;
    // 7F1A86DC: bl      0x7F1A7D50
    {
            ctx->lr = 0x7F1A86E0u;
            ctx->pc = 0x7F1A7D50u;
            return;
    }

label_7F1A86E0:
    ctx->pc = 0x7F1A86E0u;
    ctx->downcount -= 2;
    // 7F1A86E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86E4:
    ctx->pc = 0x7F1A86E4u;
    // 7F1A86E4: bl      0x7F1A7C98
    {
            ctx->lr = 0x7F1A86E8u;
            ctx->pc = 0x7F1A7C98u;
            return;
    }

label_7F1A86E8:
    ctx->pc = 0x7F1A86E8u;
    ctx->downcount -= 2;
    // 7F1A86E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86EC:
    ctx->pc = 0x7F1A86ECu;
    // 7F1A86EC: bl      0x7F1A7A48
    {
            ctx->lr = 0x7F1A86F0u;
            ctx->pc = 0x7F1A7A48u;
            return;
    }

label_7F1A86F0:
    ctx->pc = 0x7F1A86F0u;
    ctx->downcount -= 2;
    // 7F1A86F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A86F4:
    ctx->pc = 0x7F1A86F4u;
    // 7F1A86F4: bl      0x7F1A76B0
    {
            ctx->lr = 0x7F1A86F8u;
            ctx->pc = 0x7F1A76B0u;
            return;
    }

label_7F1A86F8:
    ctx->pc = 0x7F1A86F8u;
    ctx->downcount -= 12;
    // 7F1A86F8: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A86FC:
    ctx->pc = 0x7F1A86FCu;
    // 7F1A86FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8700:
    ctx->pc = 0x7F1A8700u;
    // 7F1A8700: lwz     r4, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8704:
    ctx->pc = 0x7F1A8704u;
    // 7F1A8704: lwz     r0, 132(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8708:
    ctx->pc = 0x7F1A8708u;
    // 7F1A8708: stw     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A870C:
    ctx->pc = 0x7F1A870Cu;
    // 7F1A870C: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8710:
    ctx->pc = 0x7F1A8710u;
    // 7F1A8710: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A8714:
    ctx->pc = 0x7F1A8714u;
    // 7F1A8714: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8718:
    ctx->pc = 0x7F1A8718u;
    // 7F1A8718: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A871C:
    ctx->pc = 0x7F1A871Cu;
    // 7F1A871C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8720:
    ctx->pc = 0x7F1A8720u;
    // 7F1A8720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8724:
    ctx->pc = 0x7F1A8724u;
    ctx->downcount -= 9;
    // 7F1A8724: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8728:
    ctx->pc = 0x7F1A8728u;
    // 7F1A8728: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A872C:
    ctx->pc = 0x7F1A872Cu;
    // 7F1A872C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1A8730:
    ctx->pc = 0x7F1A8730u;
    // 7F1A8730: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8734:
    ctx->pc = 0x7F1A8734u;
    // 7F1A8734: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A8738:
    ctx->pc = 0x7F1A8738u;
    // 7F1A8738: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A873C:
    ctx->pc = 0x7F1A873Cu;
    // 7F1A873C: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8740:
    ctx->pc = 0x7F1A8740u;
    // 7F1A8740: rlwinm. r0, r0, 0, 29, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000006u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A8744:
    ctx->pc = 0x7F1A8744u;
    // 7F1A8744: bc    12, 2, 0x7F1A8750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8750;
        }
    }

label_7F1A8748:
    ctx->pc = 0x7F1A8748u;
    ctx->downcount -= 2;
    // 7F1A8748: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A874C:
    ctx->pc = 0x7F1A874Cu;
    // 7F1A874C: b       0x7F1A87B8
    {
            goto label_7F1A87B8;
    }

label_7F1A8750:
    ctx->pc = 0x7F1A8750u;
    ctx->downcount -= 4;
    // 7F1A8750: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8754:
    ctx->pc = 0x7F1A8754u;
    // 7F1A8754: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8758:
    ctx->pc = 0x7F1A8758u;
    // 7F1A8758: cmpw    r4, r0
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

label_7F1A875C:
    ctx->pc = 0x7F1A875Cu;
    // 7F1A875C: bc    4, 0, 0x7F1A8778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8778;
        }
    }

label_7F1A8760:
    ctx->pc = 0x7F1A8760u;
    ctx->downcount -= 2;
    // 7F1A8760: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8764:
    ctx->pc = 0x7F1A8764u;
    // 7F1A8764: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F1A8768u;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F1A8768:
    ctx->pc = 0x7F1A8768u;
    ctx->downcount -= 4;
    // 7F1A8768: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A876C:
    ctx->pc = 0x7F1A876Cu;
    // 7F1A876C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A8770:
    ctx->pc = 0x7F1A8770u;
    // 7F1A8770: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8774:
    ctx->pc = 0x7F1A8774u;
    // 7F1A8774: b       0x7F1A87B4
    {
            goto label_7F1A87B4;
    }

label_7F1A8778:
    ctx->pc = 0x7F1A8778u;
    ctx->downcount -= 2;
    // 7F1A8778: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A877C:
    ctx->pc = 0x7F1A877Cu;
    // 7F1A877C: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F1A8780u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F1A8780:
    ctx->pc = 0x7F1A8780u;
    ctx->downcount -= 2;
    // 7F1A8780: cmpwi   r3, 0
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

label_7F1A8784:
    ctx->pc = 0x7F1A8784u;
    // 7F1A8784: bc    4, 2, 0x7F1A87B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A87B4;
        }
    }

label_7F1A8788:
    ctx->pc = 0x7F1A8788u;
    ctx->downcount -= 3;
    // 7F1A8788: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A878C:
    ctx->pc = 0x7F1A878Cu;
    // 7F1A878C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8790:
    ctx->pc = 0x7F1A8790u;
    // 7F1A8790: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F1A8794u;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F1A8794:
    ctx->pc = 0x7F1A8794u;
    ctx->downcount -= 3;
    // 7F1A8794: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8798:
    ctx->pc = 0x7F1A8798u;
    // 7F1A8798: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A879C:
    ctx->pc = 0x7F1A879Cu;
    // 7F1A879C: bl      0x7F1A8518
    {
            ctx->lr = 0x7F1A87A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A8518u;
                return;
            }
            goto label_7F1A8518;
    }

label_7F1A87A0:
    ctx->pc = 0x7F1A87A0u;
    ctx->downcount -= 2;
    // 7F1A87A0: cmpwi   r3, 0
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

label_7F1A87A4:
    ctx->pc = 0x7F1A87A4u;
    // 7F1A87A4: bc    12, 0, 0x7F1A87B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A87B4;
        }
    }

label_7F1A87A8:
    ctx->pc = 0x7F1A87A8u;
    ctx->downcount -= 3;
    // 7F1A87A8: lis     r3, 32539
    ctx->gpr[3] = ((u32)(s32)(32539) << 16);

label_7F1A87AC:
    ctx->pc = 0x7F1A87ACu;
    // 7F1A87AC: addi    r0, r3, -31064
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31064);

label_7F1A87B0:
    ctx->pc = 0x7F1A87B0u;
    // 7F1A87B0: stw     r0, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A87B4:
    ctx->pc = 0x7F1A87B4u;
    ctx->downcount -= 1;
    // 7F1A87B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A87B8:
    ctx->pc = 0x7F1A87B8u;
    ctx->downcount -= 6;
    // 7F1A87B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A87BC:
    ctx->pc = 0x7F1A87BCu;
    // 7F1A87BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A87C0:
    ctx->pc = 0x7F1A87C0u;
    // 7F1A87C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A87C4:
    ctx->pc = 0x7F1A87C4u;
    // 7F1A87C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A87C8:
    ctx->pc = 0x7F1A87C8u;
    // 7F1A87C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A87CC:
    ctx->pc = 0x7F1A87CCu;
    ctx->downcount -= 9;
    // 7F1A87CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A87D0:
    ctx->pc = 0x7F1A87D0u;
    // 7F1A87D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A87D4:
    ctx->pc = 0x7F1A87D4u;
    // 7F1A87D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A87D8:
    ctx->pc = 0x7F1A87D8u;
    // 7F1A87D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A87DC:
    ctx->pc = 0x7F1A87DCu;
    // 7F1A87DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A87E0:
    ctx->pc = 0x7F1A87E0u;
    // 7F1A87E0: lwz     r12, 408(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(408);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1A87E4:
    ctx->pc = 0x7F1A87E4u;
    // 7F1A87E4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F1A87E8:
    ctx->pc = 0x7F1A87E8u;
    // 7F1A87E8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F1A87ECu;
            ctx->pc = target;
            return;
        }
    }

label_7F1A87EC:
    ctx->pc = 0x7F1A87ECu;
    ctx->downcount -= 3;
    // 7F1A87EC: lwz     r0, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A87F0:
    ctx->pc = 0x7F1A87F0u;
    // 7F1A87F0: rlwinm. r0, r0, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A87F4:
    ctx->pc = 0x7F1A87F4u;
    // 7F1A87F4: bc    12, 2, 0x7F1A8830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8830;
        }
    }

label_7F1A87F8:
    ctx->pc = 0x7F1A87F8u;
    ctx->downcount -= 4;
    // 7F1A87F8: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1A87FC:
    ctx->pc = 0x7F1A87FCu;
    // 7F1A87FC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8800:
    ctx->pc = 0x7F1A8800u;
    // 7F1A8800: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1A8804:
    ctx->pc = 0x7F1A8804u;
    // 7F1A8804: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A8808u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A8808:
    ctx->pc = 0x7F1A8808u;
    ctx->downcount -= 2;
    // 7F1A8808: cmplwi  r3, 0x0000
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

label_7F1A880C:
    ctx->pc = 0x7F1A880Cu;
    // 7F1A880C: bc    4, 2, 0x7F1A8824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8824;
        }
    }

label_7F1A8810:
    ctx->pc = 0x7F1A8810u;
    ctx->downcount -= 3;
    // 7F1A8810: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A8814:
    ctx->pc = 0x7F1A8814u;
    // 7F1A8814: addi    r3, r3, -7036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7036);

label_7F1A8818:
    ctx->pc = 0x7F1A8818u;
    // 7F1A8818: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A881Cu;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A881C:
    ctx->pc = 0x7F1A881Cu;
    ctx->downcount -= 2;
    // 7F1A881C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8820:
    ctx->pc = 0x7F1A8820u;
    // 7F1A8820: b       0x7F1A8834
    {
            goto label_7F1A8834;
    }

label_7F1A8824:
    ctx->pc = 0x7F1A8824u;
    ctx->downcount -= 3;
    // 7F1A8824: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8828:
    ctx->pc = 0x7F1A8828u;
    // 7F1A8828: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1A882C:
    ctx->pc = 0x7F1A882Cu;
    // 7F1A882C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8830:
    ctx->pc = 0x7F1A8830u;
    ctx->downcount -= 1;
    // 7F1A8830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8834:
    ctx->pc = 0x7F1A8834u;
    ctx->downcount -= 6;
    // 7F1A8834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8838:
    ctx->pc = 0x7F1A8838u;
    // 7F1A8838: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A883C:
    ctx->pc = 0x7F1A883Cu;
    // 7F1A883C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8840:
    ctx->pc = 0x7F1A8840u;
    // 7F1A8840: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8844:
    ctx->pc = 0x7F1A8844u;
    // 7F1A8844: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8848:
    ctx->pc = 0x7F1A8848u;
    ctx->downcount -= 6;
    // 7F1A8848: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A884C:
    ctx->pc = 0x7F1A884Cu;
    // 7F1A884C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8850:
    ctx->pc = 0x7F1A8850u;
    // 7F1A8850: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8854:
    ctx->pc = 0x7F1A8854u;
    // 7F1A8854: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8858:
    ctx->pc = 0x7F1A8858u;
    // 7F1A8858: cmpwi   r3, 0
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

label_7F1A885C:
    ctx->pc = 0x7F1A885Cu;
    // 7F1A885C: bc    12, 0, 0x7F1A8864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8864;
        }
    }

label_7F1A8860:
    ctx->pc = 0x7F1A8860u;
    ctx->downcount -= 1;
    // 7F1A8860: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F1A8864u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F1A8864:
    ctx->pc = 0x7F1A8864u;
    ctx->downcount -= 5;
    // 7F1A8864: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8868:
    ctx->pc = 0x7F1A8868u;
    // 7F1A8868: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A886C:
    ctx->pc = 0x7F1A886Cu;
    // 7F1A886C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8870:
    ctx->pc = 0x7F1A8870u;
    // 7F1A8870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8874:
    ctx->pc = 0x7F1A8874u;
    ctx->downcount -= 13;
    // 7F1A8874: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8878:
    ctx->pc = 0x7F1A8878u;
    // 7F1A8878: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A887C:
    ctx->pc = 0x7F1A887Cu;
    // 7F1A887C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8880:
    ctx->pc = 0x7F1A8880u;
    // 7F1A8880: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A8884:
    ctx->pc = 0x7F1A8884u;
    // 7F1A8884: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8888:
    ctx->pc = 0x7F1A8888u;
    // 7F1A8888: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A888C:
    ctx->pc = 0x7F1A888Cu;
    // 7F1A888C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A8890:
    ctx->pc = 0x7F1A8890u;
    // 7F1A8890: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A8894:
    ctx->pc = 0x7F1A8894u;
    // 7F1A8894: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8898:
    ctx->pc = 0x7F1A8898u;
    // 7F1A8898: lis     r3, 151
    ctx->gpr[3] = ((u32)(s32)(151) << 16);

label_7F1A889C:
    ctx->pc = 0x7F1A889Cu;
    // 7F1A889C: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A88A0:
    ctx->pc = 0x7F1A88A0u;
    // 7F1A88A0: addi    r3, r3, 20331
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20331);

label_7F1A88A4:
    ctx->pc = 0x7F1A88A4u;
    // 7F1A88A4: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F1A88A8u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F1A88A8:
    ctx->pc = 0x7F1A88A8u;
    ctx->downcount -= 2;
    // 7F1A88A8: cmpwi   r3, 0
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

label_7F1A88AC:
    ctx->pc = 0x7F1A88ACu;
    // 7F1A88AC: bc    4, 0, 0x7F1A88B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A88B8;
        }
    }

label_7F1A88B0:
    ctx->pc = 0x7F1A88B0u;
    ctx->downcount -= 2;
    // 7F1A88B0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A88B4:
    ctx->pc = 0x7F1A88B4u;
    // 7F1A88B4: b       0x7F1A8978
    {
            goto label_7F1A8978;
    }

label_7F1A88B8:
    ctx->pc = 0x7F1A88B8u;
    ctx->downcount -= 11;
    // 7F1A88B8: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_7F1A88BC:
    ctx->pc = 0x7F1A88BCu;
    // 7F1A88BC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A88C0:
    ctx->pc = 0x7F1A88C0u;
    // 7F1A88C0: addi    r0, r4, 26964
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(26964);

label_7F1A88C4:
    ctx->pc = 0x7F1A88C4u;
    // 7F1A88C4: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F1A88C8:
    ctx->pc = 0x7F1A88C8u;
    // 7F1A88C8: stw     r0, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A88CC:
    ctx->pc = 0x7F1A88CCu;
    // 7F1A88CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A88D0:
    ctx->pc = 0x7F1A88D0u;
    // 7F1A88D0: stw     r3, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A88D4:
    ctx->pc = 0x7F1A88D4u;
    // 7F1A88D4: stw     r0, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A88D8:
    ctx->pc = 0x7F1A88D8u;
    // 7F1A88D8: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A88DC:
    ctx->pc = 0x7F1A88DCu;
    // 7F1A88DC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A88E0:
    ctx->pc = 0x7F1A88E0u;
    // 7F1A88E0: bl      0x7F2E4BD0
    {
            ctx->lr = 0x7F1A88E4u;
            ctx->pc = 0x7F2E4BD0u;
            return;
    }

label_7F1A88E4:
    ctx->pc = 0x7F1A88E4u;
    ctx->downcount -= 10;
    // 7F1A88E4: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A88E8:
    ctx->pc = 0x7F1A88E8u;
    // 7F1A88E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A88EC:
    ctx->pc = 0x7F1A88ECu;
    // 7F1A88EC: lis     r3, 32539
    ctx->gpr[3] = ((u32)(s32)(32539) << 16);

label_7F1A88F0:
    ctx->pc = 0x7F1A88F0u;
    // 7F1A88F0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F1A88F4:
    ctx->pc = 0x7F1A88F4u;
    // 7F1A88F4: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A88F8:
    ctx->pc = 0x7F1A88F8u;
    // 7F1A88F8: addi    r4, r3, -30940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30940);

label_7F1A88FC:
    ctx->pc = 0x7F1A88FCu;
    // 7F1A88FC: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F1A8900:
    ctx->pc = 0x7F1A8900u;
    // 7F1A8900: stw     r4, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A8904:
    ctx->pc = 0x7F1A8904u;
    // 7F1A8904: stw     r0, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8908:
    ctx->pc = 0x7F1A8908u;
    // 7F1A8908: bl      0x7F012050
    {
            ctx->lr = 0x7F1A890Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F1A890C:
    ctx->pc = 0x7F1A890Cu;
    ctx->downcount -= 2;
    // 7F1A890C: cmpwi   r3, 0
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

label_7F1A8910:
    ctx->pc = 0x7F1A8910u;
    // 7F1A8910: bc    12, 2, 0x7F1A8934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8934;
        }
    }

label_7F1A8914:
    ctx->pc = 0x7F1A8914u;
    ctx->downcount -= 6;
    // 7F1A8914: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F1A8918:
    ctx->pc = 0x7F1A8918u;
    // 7F1A8918: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1A891C:
    ctx->pc = 0x7F1A891Cu;
    // 7F1A891C: addi    r4, r4, -32543
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32543);

label_7F1A8920:
    ctx->pc = 0x7F1A8920u;
    // 7F1A8920: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A8924:
    ctx->pc = 0x7F1A8924u;
    // 7F1A8924: li      r6, 144
    ctx->gpr[6] = (u32)(s32)(144);

label_7F1A8928:
    ctx->pc = 0x7F1A8928u;
    // 7F1A8928: bl      0x7F0BA2A4
    {
            ctx->lr = 0x7F1A892Cu;
            ctx->pc = 0x7F0BA2A4u;
            return;
    }

label_7F1A892C:
    ctx->pc = 0x7F1A892Cu;
    ctx->downcount -= 2;
    // 7F1A892C: stw     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8930:
    ctx->pc = 0x7F1A8930u;
    // 7F1A8930: b       0x7F1A894C
    {
            goto label_7F1A894C;
    }

label_7F1A8934:
    ctx->pc = 0x7F1A8934u;
    ctx->downcount -= 5;
    // 7F1A8934: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1A8938:
    ctx->pc = 0x7F1A8938u;
    // 7F1A8938: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A893C:
    ctx->pc = 0x7F1A893Cu;
    // 7F1A893C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1A8940:
    ctx->pc = 0x7F1A8940u;
    // 7F1A8940: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A8944:
    ctx->pc = 0x7F1A8944u;
    // 7F1A8944: bl      0x7F0BA2A4
    {
            ctx->lr = 0x7F1A8948u;
            ctx->pc = 0x7F0BA2A4u;
            return;
    }

label_7F1A8948:
    ctx->pc = 0x7F1A8948u;
    ctx->downcount -= 1;
    // 7F1A8948: stw     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A894C:
    ctx->pc = 0x7F1A894Cu;
    ctx->downcount -= 3;
    // 7F1A894C: lwz     r4, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8950:
    ctx->pc = 0x7F1A8950u;
    // 7F1A8950: cmplwi  r4, 0x0000
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

label_7F1A8954:
    ctx->pc = 0x7F1A8954u;
    // 7F1A8954: bc    4, 2, 0x7F1A896C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A896C;
        }
    }

label_7F1A8958:
    ctx->pc = 0x7F1A8958u;
    ctx->downcount -= 3;
    // 7F1A8958: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A895C:
    ctx->pc = 0x7F1A895Cu;
    // 7F1A895C: addi    r3, r3, -7004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7004);

label_7F1A8960:
    ctx->pc = 0x7F1A8960u;
    // 7F1A8960: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A8964u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A8964:
    ctx->pc = 0x7F1A8964u;
    ctx->downcount -= 2;
    // 7F1A8964: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A8968:
    ctx->pc = 0x7F1A8968u;
    // 7F1A8968: b       0x7F1A8978
    {
            goto label_7F1A8978;
    }

label_7F1A896C:
    ctx->pc = 0x7F1A896Cu;
    ctx->downcount -= 2;
    // 7F1A896C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8970:
    ctx->pc = 0x7F1A8970u;
    // 7F1A8970: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A8974u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A8974:
    ctx->pc = 0x7F1A8974u;
    ctx->downcount -= 1;
    // 7F1A8974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8978:
    ctx->pc = 0x7F1A8978u;
    ctx->downcount -= 6;
    // 7F1A8978: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A897C:
    ctx->pc = 0x7F1A897Cu;
    // 7F1A897C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A8980:
    ctx->pc = 0x7F1A8980u;
    // 7F1A8980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8984:
    ctx->pc = 0x7F1A8984u;
    // 7F1A8984: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8988:
    ctx->pc = 0x7F1A8988u;
    // 7F1A8988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A898C:
    ctx->pc = 0x7F1A898Cu;
    ctx->downcount -= 5;
    // 7F1A898C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8990:
    ctx->pc = 0x7F1A8990u;
    // 7F1A8990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8994:
    ctx->pc = 0x7F1A8994u;
    // 7F1A8994: cmpwi   r4, 1
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

label_7F1A8998:
    ctx->pc = 0x7F1A8998u;
    // 7F1A8998: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A899C:
    ctx->pc = 0x7F1A899Cu;
    // 7F1A899C: bc    12, 2, 0x7F1A89F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A89F8;
        }
    }

label_7F1A89A0:
    ctx->pc = 0x7F1A89A0u;
    ctx->downcount -= 1;
    // 7F1A89A0: bc    4, 0, 0x7F1A8A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8A40;
        }
    }

label_7F1A89A4:
    ctx->pc = 0x7F1A89A4u;
    ctx->downcount -= 2;
    // 7F1A89A4: cmpwi   r4, 0
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

label_7F1A89A8:
    ctx->pc = 0x7F1A89A8u;
    // 7F1A89A8: bc    4, 0, 0x7F1A89B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A89B0;
        }
    }

label_7F1A89AC:
    ctx->pc = 0x7F1A89ACu;
    ctx->downcount -= 1;
    // 7F1A89AC: b       0x7F1A8A40
    {
            goto label_7F1A8A40;
    }

label_7F1A89B0:
    ctx->pc = 0x7F1A89B0u;
    ctx->downcount -= 7;
    // 7F1A89B0: lwz     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A89B4:
    ctx->pc = 0x7F1A89B4u;
    // 7F1A89B4: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1A89B8:
    ctx->pc = 0x7F1A89B8u;
    // 7F1A89B8: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1A89BC:
    ctx->pc = 0x7F1A89BCu;
    // 7F1A89BC: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_7F1A89C0:
    ctx->pc = 0x7F1A89C0u;
    // 7F1A89C0: stw     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A89C4:
    ctx->pc = 0x7F1A89C4u;
    // 7F1A89C4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A89C8:
    ctx->pc = 0x7F1A89C8u;
    // 7F1A89C8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A89CCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A89CC:
    ctx->pc = 0x7F1A89CCu;
    ctx->downcount -= 2;
    // 7F1A89CC: cmplwi  r3, 0x0000
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

label_7F1A89D0:
    ctx->pc = 0x7F1A89D0u;
    // 7F1A89D0: bc    4, 2, 0x7F1A89E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A89E8;
        }
    }

label_7F1A89D4:
    ctx->pc = 0x7F1A89D4u;
    ctx->downcount -= 3;
    // 7F1A89D4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A89D8:
    ctx->pc = 0x7F1A89D8u;
    // 7F1A89D8: addi    r3, r3, -7036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7036);

label_7F1A89DC:
    ctx->pc = 0x7F1A89DCu;
    // 7F1A89DC: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A89E0u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A89E0:
    ctx->pc = 0x7F1A89E0u;
    ctx->downcount -= 2;
    // 7F1A89E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A89E4:
    ctx->pc = 0x7F1A89E4u;
    // 7F1A89E4: b       0x7F1A8A4C
    {
            goto label_7F1A8A4C;
    }

label_7F1A89E8:
    ctx->pc = 0x7F1A89E8u;
    ctx->downcount -= 4;
    // 7F1A89E8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A89EC:
    ctx->pc = 0x7F1A89ECu;
    // 7F1A89EC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1A89F0:
    ctx->pc = 0x7F1A89F0u;
    // 7F1A89F0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A89F4:
    ctx->pc = 0x7F1A89F4u;
    // 7F1A89F4: b       0x7F1A8A48
    {
            goto label_7F1A8A48;
    }

label_7F1A89F8:
    ctx->pc = 0x7F1A89F8u;
    ctx->downcount -= 7;
    // 7F1A89F8: lwz     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A89FC:
    ctx->pc = 0x7F1A89FCu;
    // 7F1A89FC: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1A8A00:
    ctx->pc = 0x7F1A8A00u;
    // 7F1A8A00: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1A8A04:
    ctx->pc = 0x7F1A8A04u;
    // 7F1A8A04: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F1A8A08:
    ctx->pc = 0x7F1A8A08u;
    // 7F1A8A08: stw     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8A0C:
    ctx->pc = 0x7F1A8A0Cu;
    // 7F1A8A0C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8A10:
    ctx->pc = 0x7F1A8A10u;
    // 7F1A8A10: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1A8A14u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1A8A14:
    ctx->pc = 0x7F1A8A14u;
    ctx->downcount -= 2;
    // 7F1A8A14: cmplwi  r3, 0x0000
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

label_7F1A8A18:
    ctx->pc = 0x7F1A8A18u;
    // 7F1A8A18: bc    4, 2, 0x7F1A8A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8A30;
        }
    }

label_7F1A8A1C:
    ctx->pc = 0x7F1A8A1Cu;
    ctx->downcount -= 3;
    // 7F1A8A1C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A8A20:
    ctx->pc = 0x7F1A8A20u;
    // 7F1A8A20: addi    r3, r3, -7036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7036);

label_7F1A8A24:
    ctx->pc = 0x7F1A8A24u;
    // 7F1A8A24: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1A8A28u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1A8A28:
    ctx->pc = 0x7F1A8A28u;
    ctx->downcount -= 2;
    // 7F1A8A28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8A2C:
    ctx->pc = 0x7F1A8A2Cu;
    // 7F1A8A2C: b       0x7F1A8A4C
    {
            goto label_7F1A8A4C;
    }

label_7F1A8A30:
    ctx->pc = 0x7F1A8A30u;
    ctx->downcount -= 4;
    // 7F1A8A30: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8A34:
    ctx->pc = 0x7F1A8A34u;
    // 7F1A8A34: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1A8A38:
    ctx->pc = 0x7F1A8A38u;
    // 7F1A8A38: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8A3C:
    ctx->pc = 0x7F1A8A3Cu;
    // 7F1A8A3C: b       0x7F1A8A48
    {
            goto label_7F1A8A48;
    }

label_7F1A8A40:
    ctx->pc = 0x7F1A8A40u;
    ctx->downcount -= 1;
    // 7F1A8A40: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A8A44u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A8A44:
    ctx->pc = 0x7F1A8A44u;
    ctx->downcount -= 1;
    // 7F1A8A44: b       0x7F1A8A4C
    {
            goto label_7F1A8A4C;
    }

label_7F1A8A48:
    ctx->pc = 0x7F1A8A48u;
    ctx->downcount -= 1;
    // 7F1A8A48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8A4C:
    ctx->pc = 0x7F1A8A4Cu;
    ctx->downcount -= 5;
    // 7F1A8A4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8A50:
    ctx->pc = 0x7F1A8A50u;
    // 7F1A8A50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8A54:
    ctx->pc = 0x7F1A8A54u;
    // 7F1A8A54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8A58:
    ctx->pc = 0x7F1A8A58u;
    // 7F1A8A58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8A5C:
    ctx->pc = 0x7F1A8A5Cu;
    ctx->downcount -= 9;
    // 7F1A8A5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8A60:
    ctx->pc = 0x7F1A8A60u;
    // 7F1A8A60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8A64:
    ctx->pc = 0x7F1A8A64u;
    // 7F1A8A64: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A8A68:
    ctx->pc = 0x7F1A8A68u;
    // 7F1A8A68: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A8A6C:
    ctx->pc = 0x7F1A8A6Cu;
    // 7F1A8A6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8A70:
    ctx->pc = 0x7F1A8A70u;
    // 7F1A8A70: li      r5, 412
    ctx->gpr[5] = (u32)(s32)(412);

label_7F1A8A74:
    ctx->pc = 0x7F1A8A74u;
    // 7F1A8A74: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F1A8A78:
    ctx->pc = 0x7F1A8A78u;
    // 7F1A8A78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A8A7C:
    ctx->pc = 0x7F1A8A7Cu;
    // 7F1A8A7C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A8A80u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A8A80:
    ctx->pc = 0x7F1A8A80u;
    ctx->downcount -= 2;
    // 7F1A8A80: or.   r31, r3, r3
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

label_7F1A8A84:
    ctx->pc = 0x7F1A8A84u;
    // 7F1A8A84: bc    12, 2, 0x7F1A8AF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8AF4;
        }
    }

label_7F1A8A88:
    ctx->pc = 0x7F1A8A88u;
    ctx->downcount -= 5;
    // 7F1A8A88: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A8A8C:
    ctx->pc = 0x7F1A8A8Cu;
    // 7F1A8A8C: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1A8A90:
    ctx->pc = 0x7F1A8A90u;
    // 7F1A8A90: addi    r4, r4, -30772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30772);

label_7F1A8A94:
    ctx->pc = 0x7F1A8A94u;
    // 7F1A8A94: addi    r5, r5, -30648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30648);

label_7F1A8A98:
    ctx->pc = 0x7F1A8A98u;
    // 7F1A8A98: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A8A9Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A8A9C:
    ctx->pc = 0x7F1A8A9Cu;
    ctx->downcount -= 12;
    // 7F1A8A9C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8AA0:
    ctx->pc = 0x7F1A8AA0u;
    // 7F1A8AA0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A8AA4:
    ctx->pc = 0x7F1A8AA4u;
    // 7F1A8AA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A8AA8:
    ctx->pc = 0x7F1A8AA8u;
    // 7F1A8AA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8AAC:
    ctx->pc = 0x7F1A8AACu;
    // 7F1A8AAC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A8AB0:
    ctx->pc = 0x7F1A8AB0u;
    // 7F1A8AB0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A8AB4:
    ctx->pc = 0x7F1A8AB4u;
    // 7F1A8AB4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8AB8:
    ctx->pc = 0x7F1A8AB8u;
    // 7F1A8AB8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8ABC:
    ctx->pc = 0x7F1A8ABCu;
    // 7F1A8ABC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8AC0:
    ctx->pc = 0x7F1A8AC0u;
    // 7F1A8AC0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8AC4:
    ctx->pc = 0x7F1A8AC4u;
    // 7F1A8AC4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8AC8:
    ctx->pc = 0x7F1A8AC8u;
    // 7F1A8AC8: bl      0x7F1A8874
    {
            ctx->lr = 0x7F1A8ACCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A8874u;
                return;
            }
            goto label_7F1A8874;
    }

label_7F1A8ACC:
    ctx->pc = 0x7F1A8ACCu;
    ctx->downcount -= 2;
    // 7F1A8ACC: cmpwi   r3, 0
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

label_7F1A8AD0:
    ctx->pc = 0x7F1A8AD0u;
    // 7F1A8AD0: bc    4, 0, 0x7F1A8AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8AE4;
        }
    }

label_7F1A8AD4:
    ctx->pc = 0x7F1A8AD4u;
    ctx->downcount -= 2;
    // 7F1A8AD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8AD8:
    ctx->pc = 0x7F1A8AD8u;
    // 7F1A8AD8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A8ADCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A8ADC:
    ctx->pc = 0x7F1A8ADCu;
    ctx->downcount -= 2;
    // 7F1A8ADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8AE0:
    ctx->pc = 0x7F1A8AE0u;
    // 7F1A8AE0: b       0x7F1A8AF8
    {
            goto label_7F1A8AF8;
    }

label_7F1A8AE4:
    ctx->pc = 0x7F1A8AE4u;
    ctx->downcount -= 4;
    // 7F1A8AE4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A8AE8:
    ctx->pc = 0x7F1A8AE8u;
    // 7F1A8AE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8AEC:
    ctx->pc = 0x7F1A8AECu;
    // 7F1A8AEC: addi    r4, r4, -30324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30324);

label_7F1A8AF0:
    ctx->pc = 0x7F1A8AF0u;
    // 7F1A8AF0: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A8AF4u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A8AF4:
    ctx->pc = 0x7F1A8AF4u;
    ctx->downcount -= 1;
    // 7F1A8AF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8AF8:
    ctx->pc = 0x7F1A8AF8u;
    ctx->downcount -= 6;
    // 7F1A8AF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8AFC:
    ctx->pc = 0x7F1A8AFCu;
    // 7F1A8AFC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A8B00:
    ctx->pc = 0x7F1A8B00u;
    // 7F1A8B00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8B04:
    ctx->pc = 0x7F1A8B04u;
    // 7F1A8B04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8B08:
    ctx->pc = 0x7F1A8B08u;
    // 7F1A8B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8B0C:
    ctx->pc = 0x7F1A8B0Cu;
    ctx->downcount -= 7;
    // 7F1A8B0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8B10:
    ctx->pc = 0x7F1A8B10u;
    // 7F1A8B10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8B14:
    ctx->pc = 0x7F1A8B14u;
    // 7F1A8B14: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1A8B18:
    ctx->pc = 0x7F1A8B18u;
    // 7F1A8B18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B1C:
    ctx->pc = 0x7F1A8B1Cu;
    // 7F1A8B1C: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8B20:
    ctx->pc = 0x7F1A8B20u;
    // 7F1A8B20: cmpwi   r0, 0
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

label_7F1A8B24:
    ctx->pc = 0x7F1A8B24u;
    // 7F1A8B24: bc    4, 2, 0x7F1A8B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8B98;
        }
    }

label_7F1A8B28:
    ctx->pc = 0x7F1A8B28u;
    ctx->downcount -= 16;
    // 7F1A8B28: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A8B2C:
    ctx->pc = 0x7F1A8B2Cu;
    // 7F1A8B2C: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8B30:
    ctx->pc = 0x7F1A8B30u;
    // 7F1A8B30: addi    r4, r4, 5000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5000);

label_7F1A8B34:
    ctx->pc = 0x7F1A8B34u;
    // 7F1A8B34: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8B38:
    ctx->pc = 0x7F1A8B38u;
    // 7F1A8B38: mulli   r4, r4, 5
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)5);

label_7F1A8B3C:
    ctx->pc = 0x7F1A8B3Cu;
    // 7F1A8B3C: addi    r4, r4, 5
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5);

label_7F1A8B40:
    ctx->pc = 0x7F1A8B40u;
    // 7F1A8B40: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A8B44:
    ctx->pc = 0x7F1A8B44u;
    // 7F1A8B44: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B48:
    ctx->pc = 0x7F1A8B48u;
    // 7F1A8B48: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8B4C:
    ctx->pc = 0x7F1A8B4Cu;
    // 7F1A8B4C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F1A8B50:
    ctx->pc = 0x7F1A8B50u;
    // 7F1A8B50: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B54:
    ctx->pc = 0x7F1A8B54u;
    // 7F1A8B54: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8B58:
    ctx->pc = 0x7F1A8B58u;
    // 7F1A8B58: cmpwi   r0, 0
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

label_7F1A8B5C:
    ctx->pc = 0x7F1A8B5Cu;
    // 7F1A8B5C: bc    4, 0, 0x7F1A8B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8B68;
        }
    }

label_7F1A8B60:
    ctx->pc = 0x7F1A8B60u;
    ctx->downcount -= 2;
    // 7F1A8B60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A8B64:
    ctx->pc = 0x7F1A8B64u;
    // 7F1A8B64: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B68:
    ctx->pc = 0x7F1A8B68u;
    ctx->downcount -= 8;
    // 7F1A8B68: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A8B6C:
    ctx->pc = 0x7F1A8B6Cu;
    // 7F1A8B6C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A8B70:
    ctx->pc = 0x7F1A8B70u;
    // 7F1A8B70: addi    r5, r4, 13024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13024);

label_7F1A8B74:
    ctx->pc = 0x7F1A8B74u;
    // 7F1A8B74: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8B78:
    ctx->pc = 0x7F1A8B78u;
    // 7F1A8B78: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8B7C:
    ctx->pc = 0x7F1A8B7Cu;
    // 7F1A8B7C: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8B80:
    ctx->pc = 0x7F1A8B80u;
    // 7F1A8B80: cmpw    r4, r0
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

label_7F1A8B84:
    ctx->pc = 0x7F1A8B84u;
    // 7F1A8B84: bc    4, 1, 0x7F1A8B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8B98;
        }
    }

label_7F1A8B88:
    ctx->pc = 0x7F1A8B88u;
    ctx->downcount -= 4;
    // 7F1A8B88: stw     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8B8C:
    ctx->pc = 0x7F1A8B8Cu;
    // 7F1A8B8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A8B90:
    ctx->pc = 0x7F1A8B90u;
    // 7F1A8B90: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B94:
    ctx->pc = 0x7F1A8B94u;
    // 7F1A8B94: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8B98:
    ctx->pc = 0x7F1A8B98u;
    ctx->downcount -= 3;
    // 7F1A8B98: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8B9C:
    ctx->pc = 0x7F1A8B9Cu;
    // 7F1A8B9C: cmpwi   r0, 0
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

label_7F1A8BA0:
    ctx->pc = 0x7F1A8BA0u;
    // 7F1A8BA0: bc    4, 2, 0x7F1A8BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8BA8;
        }
    }

label_7F1A8BA4:
    ctx->pc = 0x7F1A8BA4u;
    ctx->downcount -= 1;
    // 7F1A8BA4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A8BA8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A8BA8:
    ctx->pc = 0x7F1A8BA8u;
    ctx->downcount -= 5;
    // 7F1A8BA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8BAC:
    ctx->pc = 0x7F1A8BACu;
    // 7F1A8BAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8BB0:
    ctx->pc = 0x7F1A8BB0u;
    // 7F1A8BB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8BB4:
    ctx->pc = 0x7F1A8BB4u;
    // 7F1A8BB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8BB8:
    ctx->pc = 0x7F1A8BB8u;
    ctx->downcount -= 4;
    // 7F1A8BB8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1A8BBC:
    ctx->pc = 0x7F1A8BBCu;
    // 7F1A8BBC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A8BC0:
    ctx->pc = 0x7F1A8BC0u;
    // 7F1A8BC0: stw     r0, 13024(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8BC4:
    ctx->pc = 0x7F1A8BC4u;
    // 7F1A8BC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8BC8:
    ctx->pc = 0x7F1A8BC8u;
    ctx->downcount -= 10;
    // 7F1A8BC8: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A8BCC:
    ctx->pc = 0x7F1A8BCCu;
    // 7F1A8BCC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1A8BD0:
    ctx->pc = 0x7F1A8BD0u;
    // 7F1A8BD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A8BD4:
    ctx->pc = 0x7F1A8BD4u;
    // 7F1A8BD4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A8BD8:
    ctx->pc = 0x7F1A8BD8u;
    // 7F1A8BD8: stw     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A8BDC:
    ctx->pc = 0x7F1A8BDCu;
    // 7F1A8BDC: stw     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8BE0:
    ctx->pc = 0x7F1A8BE0u;
    // 7F1A8BE0: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8BE4:
    ctx->pc = 0x7F1A8BE4u;
    // 7F1A8BE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8BE8:
    ctx->pc = 0x7F1A8BE8u;
    // 7F1A8BE8: stw     r6, 13024(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13024);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8BEC:
    ctx->pc = 0x7F1A8BECu;
    // 7F1A8BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8BF0:
    ctx->pc = 0x7F1A8BF0u;
    ctx->downcount -= 21;
    // 7F1A8BF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8BF4:
    ctx->pc = 0x7F1A8BF4u;
    // 7F1A8BF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8BF8:
    ctx->pc = 0x7F1A8BF8u;
    // 7F1A8BF8: li      r5, 76
    ctx->gpr[5] = (u32)(s32)(76);

label_7F1A8BFC:
    ctx->pc = 0x7F1A8BFCu;
    // 7F1A8BFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A8C00:
    ctx->pc = 0x7F1A8C00u;
    // 7F1A8C00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8C04:
    ctx->pc = 0x7F1A8C04u;
    // 7F1A8C04: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A8C08:
    ctx->pc = 0x7F1A8C08u;
    // 7F1A8C08: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8C0C:
    ctx->pc = 0x7F1A8C0Cu;
    // 7F1A8C0C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A8C10:
    ctx->pc = 0x7F1A8C10u;
    // 7F1A8C10: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A8C14:
    ctx->pc = 0x7F1A8C14u;
    // 7F1A8C14: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A8C18:
    ctx->pc = 0x7F1A8C18u;
    // 7F1A8C18: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A8C1Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A8C1C:
    ctx->pc = 0x7F1A8C1Cu;
    ctx->downcount -= 2;
    // 7F1A8C1C: or.   r31, r3, r3
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

label_7F1A8C20:
    ctx->pc = 0x7F1A8C20u;
    // 7F1A8C20: bc    12, 2, 0x7F1A8C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8C88;
        }
    }

label_7F1A8C24:
    ctx->pc = 0x7F1A8C24u;
    ctx->downcount -= 5;
    // 7F1A8C24: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A8C28:
    ctx->pc = 0x7F1A8C28u;
    // 7F1A8C28: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1A8C2C:
    ctx->pc = 0x7F1A8C2Cu;
    // 7F1A8C2C: addi    r4, r4, -29940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29940);

label_7F1A8C30:
    ctx->pc = 0x7F1A8C30u;
    // 7F1A8C30: addi    r5, r5, -29768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29768);

label_7F1A8C34:
    ctx->pc = 0x7F1A8C34u;
    // 7F1A8C34: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A8C38u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A8C38:
    ctx->pc = 0x7F1A8C38u;
    ctx->downcount -= 14;
    // 7F1A8C38: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8C3C:
    ctx->pc = 0x7F1A8C3Cu;
    // 7F1A8C3C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A8C40:
    ctx->pc = 0x7F1A8C40u;
    // 7F1A8C40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A8C44:
    ctx->pc = 0x7F1A8C44u;
    // 7F1A8C44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8C48:
    ctx->pc = 0x7F1A8C48u;
    // 7F1A8C48: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A8C4C:
    ctx->pc = 0x7F1A8C4Cu;
    // 7F1A8C4C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A8C50:
    ctx->pc = 0x7F1A8C50u;
    // 7F1A8C50: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A8C54:
    ctx->pc = 0x7F1A8C54u;
    // 7F1A8C54: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A8C58:
    ctx->pc = 0x7F1A8C58u;
    // 7F1A8C58: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8C5C:
    ctx->pc = 0x7F1A8C5Cu;
    // 7F1A8C5C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8C60:
    ctx->pc = 0x7F1A8C60u;
    // 7F1A8C60: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A8C64:
    ctx->pc = 0x7F1A8C64u;
    // 7F1A8C64: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8C68:
    ctx->pc = 0x7F1A8C68u;
    // 7F1A8C68: stw     r30, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A8C6C:
    ctx->pc = 0x7F1A8C6Cu;
    // 7F1A8C6C: bl      0x7F1A8BC8
    {
            ctx->lr = 0x7F1A8C70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A8BC8u;
                return;
            }
            goto label_7F1A8BC8;
    }

label_7F1A8C70:
    ctx->pc = 0x7F1A8C70u;
    ctx->downcount -= 2;
    // 7F1A8C70: cmpwi   r3, 0
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

label_7F1A8C74:
    ctx->pc = 0x7F1A8C74u;
    // 7F1A8C74: bc    4, 0, 0x7F1A8C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8C88;
        }
    }

label_7F1A8C78:
    ctx->pc = 0x7F1A8C78u;
    ctx->downcount -= 2;
    // 7F1A8C78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8C7C:
    ctx->pc = 0x7F1A8C7Cu;
    // 7F1A8C7C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A8C80u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A8C80:
    ctx->pc = 0x7F1A8C80u;
    ctx->downcount -= 2;
    // 7F1A8C80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8C84:
    ctx->pc = 0x7F1A8C84u;
    // 7F1A8C84: b       0x7F1A8C8C
    {
            goto label_7F1A8C8C;
    }

label_7F1A8C88:
    ctx->pc = 0x7F1A8C88u;
    ctx->downcount -= 1;
    // 7F1A8C88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A8C8C:
    ctx->pc = 0x7F1A8C8Cu;
    ctx->downcount -= 16;
    // 7F1A8C8C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A8C90:
    ctx->pc = 0x7F1A8C90u;
    // 7F1A8C90: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8C94:
    ctx->pc = 0x7F1A8C94u;
    // 7F1A8C94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8C98:
    ctx->pc = 0x7F1A8C98u;
    // 7F1A8C98: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A8C9C:
    ctx->pc = 0x7F1A8C9Cu;
    // 7F1A8C9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8CA0:
    ctx->pc = 0x7F1A8CA0u;
    ctx->downcount -= 10;
    // 7F1A8CA0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8CA4:
    ctx->pc = 0x7F1A8CA4u;
    // 7F1A8CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8CA8:
    ctx->pc = 0x7F1A8CA8u;
    // 7F1A8CA8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8CAC:
    ctx->pc = 0x7F1A8CACu;
    // 7F1A8CAC: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A8CB0:
    ctx->pc = 0x7F1A8CB0u;
    // 7F1A8CB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8CB4:
    ctx->pc = 0x7F1A8CB4u;
    // 7F1A8CB4: cntlzw r3, r31
    {
        u32 v = ctx->gpr[31];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_7F1A8CB8:
    ctx->pc = 0x7F1A8CB8u;
    // 7F1A8CB8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8CBC:
    ctx->pc = 0x7F1A8CBCu;
    // 7F1A8CBC: rlwinm r3, r3, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x07FFFFFFu;
    }

label_7F1A8CC0:
    ctx->pc = 0x7F1A8CC0u;
    // 7F1A8CC0: or.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A8CC4:
    ctx->pc = 0x7F1A8CC4u;
    // 7F1A8CC4: bc    4, 2, 0x7F1A8EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8EC8;
        }
    }

label_7F1A8CC8:
    ctx->pc = 0x7F1A8CC8u;
    ctx->downcount -= 2;
    // 7F1A8CC8: cmplwi  r31, 0x0000
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

label_7F1A8CCC:
    ctx->pc = 0x7F1A8CCCu;
    // 7F1A8CCC: bc    12, 2, 0x7F1A8EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8EC8;
        }
    }

label_7F1A8CD0:
    ctx->pc = 0x7F1A8CD0u;
    ctx->downcount -= 1;
    // 7F1A8CD0: bl      0x800147F8
    {
            ctx->lr = 0x7F1A8CD4u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1A8CD4:
    ctx->pc = 0x7F1A8CD4u;
    ctx->downcount -= 21;
    // 7F1A8CD4: rlwinm r0, r3, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 13u) & 0xFFFFE000u;
    }

label_7F1A8CD8:
    ctx->pc = 0x7F1A8CD8u;
    // 7F1A8CD8: rlwinm r5, r3, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F1A8CDC:
    ctx->pc = 0x7F1A8CDCu;
    // 7F1A8CDC: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A8CE0:
    ctx->pc = 0x7F1A8CE0u;
    // 7F1A8CE0: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A8CE4:
    ctx->pc = 0x7F1A8CE4u;
    // 7F1A8CE4: rlwinm r3, r0, 19, 0, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 19u) & 0xFFFFFFFFu;
    }

label_7F1A8CE8:
    ctx->pc = 0x7F1A8CE8u;
    // 7F1A8CE8: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A8CEC:
    ctx->pc = 0x7F1A8CECu;
    // 7F1A8CEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A8CF0:
    ctx->pc = 0x7F1A8CF0u;
    // 7F1A8CF0: li      r7, 9
    ctx->gpr[7] = (u32)(s32)(9);

label_7F1A8CF4:
    ctx->pc = 0x7F1A8CF4u;
    // 7F1A8CF4: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A8CF8:
    ctx->pc = 0x7F1A8CF8u;
    // 7F1A8CF8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8CFC:
    ctx->pc = 0x7F1A8CFCu;
    // 7F1A8CFC: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_7F1A8D00:
    ctx->pc = 0x7F1A8D00u;
    // 7F1A8D00: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A8D04:
    ctx->pc = 0x7F1A8D04u;
    // 7F1A8D04: rlwinm r0, r0, 2, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFF80u;
    }

label_7F1A8D08:
    ctx->pc = 0x7F1A8D08u;
    // 7F1A8D08: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1A8D0C:
    ctx->pc = 0x7F1A8D0Cu;
    // 7F1A8D0C: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A8D10:
    ctx->pc = 0x7F1A8D10u;
    // 7F1A8D10: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A8D14:
    ctx->pc = 0x7F1A8D14u;
    // 7F1A8D14: addi    r0, r4, 31
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31);

label_7F1A8D18:
    ctx->pc = 0x7F1A8D18u;
    // 7F1A8D18: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A8D1C:
    ctx->pc = 0x7F1A8D1Cu;
    // 7F1A8D1C: rlwinm r4, r0, 0, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_7F1A8D20:
    ctx->pc = 0x7F1A8D20u;
    // 7F1A8D20: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A8D24:
    ctx->pc = 0x7F1A8D24u;
    // 7F1A8D24: bl      0x800445E8
    {
            ctx->lr = 0x7F1A8D28u;
            ctx->pc = 0x800445E8u;
            return;
    }

label_7F1A8D28:
    ctx->pc = 0x7F1A8D28u;
    ctx->downcount -= 12;
    // 7F1A8D28: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A8D2C:
    ctx->pc = 0x7F1A8D2Cu;
    // 7F1A8D2C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1A8D30:
    ctx->pc = 0x7F1A8D30u;
    // 7F1A8D30: addi    r5, r4, 6296
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6296);

label_7F1A8D34:
    ctx->pc = 0x7F1A8D34u;
    // 7F1A8D34: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A8D38:
    ctx->pc = 0x7F1A8D38u;
    // 7F1A8D38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8D38u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8D3C:
    ctx->pc = 0x7F1A8D3Cu;
    // 7F1A8D3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A8D40:
    ctx->pc = 0x7F1A8D40u;
    // 7F1A8D40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A8D44:
    ctx->pc = 0x7F1A8D44u;
    // 7F1A8D44: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A8D48:
    ctx->pc = 0x7F1A8D48u;
    // 7F1A8D48: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8D48u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1A8D4C:
    ctx->pc = 0x7F1A8D4Cu;
    // 7F1A8D4C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A8D50:
    ctx->pc = 0x7F1A8D50u;
    // 7F1A8D50: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8D50u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1A8D54:
    ctx->pc = 0x7F1A8D54u;
    // 7F1A8D54: bl      0x80044630
    {
            ctx->lr = 0x7F1A8D58u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F1A8D58:
    ctx->pc = 0x7F1A8D58u;
    ctx->downcount -= 3;
    // 7F1A8D58: addi    r3, r31, 132
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(132);

label_7F1A8D5C:
    ctx->pc = 0x7F1A8D5Cu;
    // 7F1A8D5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8D60:
    ctx->pc = 0x7F1A8D60u;
    // 7F1A8D60: bl      0x80044A04
    {
            ctx->lr = 0x7F1A8D64u;
            ctx->pc = 0x80044A04u;
            return;
    }

label_7F1A8D64:
    ctx->pc = 0x7F1A8D64u;
    ctx->downcount -= 3;
    // 7F1A8D64: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1A8D68:
    ctx->pc = 0x7F1A8D68u;
    // 7F1A8D68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8D6C:
    ctx->pc = 0x7F1A8D6Cu;
    // 7F1A8D6C: bl      0x80044978
    {
            ctx->lr = 0x7F1A8D70u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F1A8D70:
    ctx->pc = 0x7F1A8D70u;
    ctx->downcount -= 5;
    // 7F1A8D70: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8D74:
    ctx->pc = 0x7F1A8D74u;
    // 7F1A8D74: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A8D78:
    ctx->pc = 0x7F1A8D78u;
    // 7F1A8D78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A8D7C:
    ctx->pc = 0x7F1A8D7Cu;
    // 7F1A8D7C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8D80:
    ctx->pc = 0x7F1A8D80u;
    // 7F1A8D80: bl      0x80045970
    {
            ctx->lr = 0x7F1A8D84u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1A8D84:
    ctx->pc = 0x7F1A8D84u;
    ctx->downcount -= 4;
    // 7F1A8D84: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F1A8D88:
    ctx->pc = 0x7F1A8D88u;
    // 7F1A8D88: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A8D8C:
    ctx->pc = 0x7F1A8D8Cu;
    // 7F1A8D8C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A8D90:
    ctx->pc = 0x7F1A8D90u;
    // 7F1A8D90: bl      0x80042E0C
    {
            ctx->lr = 0x7F1A8D94u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F1A8D94:
    ctx->pc = 0x7F1A8D94u;
    ctx->downcount -= 3;
    // 7F1A8D94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8D98:
    ctx->pc = 0x7F1A8D98u;
    // 7F1A8D98: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F1A8D9C:
    ctx->pc = 0x7F1A8D9Cu;
    // 7F1A8D9C: bl      0x7F1A8EF0
    {
            ctx->lr = 0x7F1A8DA0u;
            goto label_7F1A8EF0;
    }

label_7F1A8DA0:
    ctx->pc = 0x7F1A8DA0u;
    ctx->downcount -= 15;
    // 7F1A8DA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8DA4:
    ctx->pc = 0x7F1A8DA4u;
    // 7F1A8DA4: lfs     f1, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8DA8:
    ctx->pc = 0x7F1A8DA8u;
    // 7F1A8DA8: lfs     f2, 6312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A8DAC:
    ctx->pc = 0x7F1A8DACu;
    // 7F1A8DAC: lfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8DB0:
    ctx->pc = 0x7F1A8DB0u;
    // 7F1A8DB0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DB0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8DB4:
    ctx->pc = 0x7F1A8DB4u;
    // 7F1A8DB4: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DB4u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A8DB8:
    ctx->pc = 0x7F1A8DB8u;
    // 7F1A8DB8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DB8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A8DBC:
    ctx->pc = 0x7F1A8DBCu;
    // 7F1A8DBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A8DC0:
    ctx->pc = 0x7F1A8DC0u;
    // 7F1A8DC0: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A8DC4:
    ctx->pc = 0x7F1A8DC4u;
    // 7F1A8DC4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A8DC8:
    ctx->pc = 0x7F1A8DC8u;
    // 7F1A8DC8: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8DCC:
    ctx->pc = 0x7F1A8DCCu;
    // 7F1A8DCC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8DD0:
    ctx->pc = 0x7F1A8DD0u;
    // 7F1A8DD0: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F1A8DD4:
    ctx->pc = 0x7F1A8DD4u;
    // 7F1A8DD4: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A8DD8:
    ctx->pc = 0x7F1A8DD8u;
    // 7F1A8DD8: bl      0x7F1A8EE0
    {
            ctx->lr = 0x7F1A8DDCu;
            goto label_7F1A8EE0;
    }

label_7F1A8DDC:
    ctx->pc = 0x7F1A8DDCu;
    ctx->downcount -= 3;
    // 7F1A8DDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A8DE0:
    ctx->pc = 0x7F1A8DE0u;
    // 7F1A8DE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8DE4:
    ctx->pc = 0x7F1A8DE4u;
    // 7F1A8DE4: bl      0x7F1A8EF0
    {
            ctx->lr = 0x7F1A8DE8u;
            goto label_7F1A8EF0;
    }

label_7F1A8DE8:
    ctx->pc = 0x7F1A8DE8u;
    ctx->downcount -= 15;
    // 7F1A8DE8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8DEC:
    ctx->pc = 0x7F1A8DECu;
    // 7F1A8DEC: lfs     f1, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8DF0:
    ctx->pc = 0x7F1A8DF0u;
    // 7F1A8DF0: lfs     f2, 6312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A8DF4:
    ctx->pc = 0x7F1A8DF4u;
    // 7F1A8DF4: lfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8DF8:
    ctx->pc = 0x7F1A8DF8u;
    // 7F1A8DF8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DF8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8DFC:
    ctx->pc = 0x7F1A8DFCu;
    // 7F1A8DFC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8DFCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A8E00:
    ctx->pc = 0x7F1A8E00u;
    // 7F1A8E00: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A8E04:
    ctx->pc = 0x7F1A8E04u;
    // 7F1A8E04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A8E08:
    ctx->pc = 0x7F1A8E08u;
    // 7F1A8E08: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A8E0C:
    ctx->pc = 0x7F1A8E0Cu;
    // 7F1A8E0C: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A8E10:
    ctx->pc = 0x7F1A8E10u;
    // 7F1A8E10: lwz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8E14:
    ctx->pc = 0x7F1A8E14u;
    // 7F1A8E14: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8E18:
    ctx->pc = 0x7F1A8E18u;
    // 7F1A8E18: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F1A8E1C:
    ctx->pc = 0x7F1A8E1Cu;
    // 7F1A8E1C: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A8E20:
    ctx->pc = 0x7F1A8E20u;
    // 7F1A8E20: bl      0x7F1A8EE0
    {
            ctx->lr = 0x7F1A8E24u;
            goto label_7F1A8EE0;
    }

label_7F1A8E24:
    ctx->pc = 0x7F1A8E24u;
    ctx->downcount -= 3;
    // 7F1A8E24: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1A8E28:
    ctx->pc = 0x7F1A8E28u;
    // 7F1A8E28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A8E2C:
    ctx->pc = 0x7F1A8E2Cu;
    // 7F1A8E2C: bl      0x7F1A8EF0
    {
            ctx->lr = 0x7F1A8E30u;
            goto label_7F1A8EF0;
    }

label_7F1A8E30:
    ctx->pc = 0x7F1A8E30u;
    ctx->downcount -= 15;
    // 7F1A8E30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8E34:
    ctx->pc = 0x7F1A8E34u;
    // 7F1A8E34: lfs     f1, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8E38:
    ctx->pc = 0x7F1A8E38u;
    // 7F1A8E38: lfs     f2, 6312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A8E3C:
    ctx->pc = 0x7F1A8E3Cu;
    // 7F1A8E3C: lfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8E40:
    ctx->pc = 0x7F1A8E40u;
    // 7F1A8E40: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E40u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8E44:
    ctx->pc = 0x7F1A8E44u;
    // 7F1A8E44: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E44u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A8E48:
    ctx->pc = 0x7F1A8E48u;
    // 7F1A8E48: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E48u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A8E4C:
    ctx->pc = 0x7F1A8E4Cu;
    // 7F1A8E4C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E4Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A8E50:
    ctx->pc = 0x7F1A8E50u;
    // 7F1A8E50: stfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A8E54:
    ctx->pc = 0x7F1A8E54u;
    // 7F1A8E54: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A8E58:
    ctx->pc = 0x7F1A8E58u;
    // 7F1A8E58: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8E5C:
    ctx->pc = 0x7F1A8E5Cu;
    // 7F1A8E5C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8E60:
    ctx->pc = 0x7F1A8E60u;
    // 7F1A8E60: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F1A8E64:
    ctx->pc = 0x7F1A8E64u;
    // 7F1A8E64: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A8E68:
    ctx->pc = 0x7F1A8E68u;
    // 7F1A8E68: bl      0x7F1A8EE0
    {
            ctx->lr = 0x7F1A8E6Cu;
            goto label_7F1A8EE0;
    }

label_7F1A8E6C:
    ctx->pc = 0x7F1A8E6Cu;
    ctx->downcount -= 3;
    // 7F1A8E6C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1A8E70:
    ctx->pc = 0x7F1A8E70u;
    // 7F1A8E70: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F1A8E74:
    ctx->pc = 0x7F1A8E74u;
    // 7F1A8E74: bl      0x7F1A8EF0
    {
            ctx->lr = 0x7F1A8E78u;
            goto label_7F1A8EF0;
    }

label_7F1A8E78:
    ctx->pc = 0x7F1A8E78u;
    ctx->downcount -= 15;
    // 7F1A8E78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8E7C:
    ctx->pc = 0x7F1A8E7Cu;
    // 7F1A8E7C: lfs     f1, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8E80:
    ctx->pc = 0x7F1A8E80u;
    // 7F1A8E80: lfs     f2, 6312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A8E84:
    ctx->pc = 0x7F1A8E84u;
    // 7F1A8E84: lfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8E88:
    ctx->pc = 0x7F1A8E88u;
    // 7F1A8E88: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E88u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8E8C:
    ctx->pc = 0x7F1A8E8Cu;
    // 7F1A8E8C: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E8Cu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A8E90:
    ctx->pc = 0x7F1A8E90u;
    // 7F1A8E90: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E90u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A8E94:
    ctx->pc = 0x7F1A8E94u;
    // 7F1A8E94: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E94u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A8E98:
    ctx->pc = 0x7F1A8E98u;
    // 7F1A8E98: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A8E9C:
    ctx->pc = 0x7F1A8E9Cu;
    // 7F1A8E9C: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A8EA0:
    ctx->pc = 0x7F1A8EA0u;
    // 7F1A8EA0: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8EA4:
    ctx->pc = 0x7F1A8EA4u;
    // 7F1A8EA4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8EA8:
    ctx->pc = 0x7F1A8EA8u;
    // 7F1A8EA8: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F1A8EAC:
    ctx->pc = 0x7F1A8EACu;
    // 7F1A8EAC: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A8EB0:
    ctx->pc = 0x7F1A8EB0u;
    // 7F1A8EB0: bl      0x7F1A8EE0
    {
            ctx->lr = 0x7F1A8EB4u;
            goto label_7F1A8EE0;
    }

label_7F1A8EB4:
    ctx->pc = 0x7F1A8EB4u;
    ctx->downcount -= 1;
    // 7F1A8EB4: bl      0x7F1A8EDC
    {
            ctx->lr = 0x7F1A8EB8u;
            goto label_7F1A8EDC;
    }

label_7F1A8EB8:
    ctx->pc = 0x7F1A8EB8u;
    ctx->downcount -= 4;
    // 7F1A8EB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A8EBC:
    ctx->pc = 0x7F1A8EBCu;
    // 7F1A8EBC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A8EC0:
    ctx->pc = 0x7F1A8EC0u;
    // 7F1A8EC0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A8EC4:
    ctx->pc = 0x7F1A8EC4u;
    // 7F1A8EC4: bl      0x800462E4
    {
            ctx->lr = 0x7F1A8EC8u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A8EC8:
    ctx->pc = 0x7F1A8EC8u;
    ctx->downcount -= 6;
    // 7F1A8EC8: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8ECC:
    ctx->pc = 0x7F1A8ECCu;
    // 7F1A8ECC: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A8ED0:
    ctx->pc = 0x7F1A8ED0u;
    // 7F1A8ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A8ED4:
    ctx->pc = 0x7F1A8ED4u;
    // 7F1A8ED4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1A8ED8:
    ctx->pc = 0x7F1A8ED8u;
    // 7F1A8ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8EDC:
    ctx->pc = 0x7F1A8EDCu;
    ctx->downcount -= 1;
    // 7F1A8EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8EE0:
    ctx->pc = 0x7F1A8EE0u;
    ctx->downcount -= 4;
    // 7F1A8EE0: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A8EE4:
    ctx->pc = 0x7F1A8EE4u;
    // 7F1A8EE4: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A8EE8:
    ctx->pc = 0x7F1A8EE8u;
    // 7F1A8EE8: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A8EEC:
    ctx->pc = 0x7F1A8EECu;
    // 7F1A8EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8EF0:
    ctx->pc = 0x7F1A8EF0u;
    ctx->downcount -= 4;
    // 7F1A8EF0: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A8EF4:
    ctx->pc = 0x7F1A8EF4u;
    // 7F1A8EF4: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A8EF8:
    ctx->pc = 0x7F1A8EF8u;
    // 7F1A8EF8: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A8EFC:
    ctx->pc = 0x7F1A8EFCu;
    // 7F1A8EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A8F00:
    ctx->pc = 0x7F1A8F00u;
    ctx->downcount -= 11;
    // 7F1A8F00: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A8F04:
    ctx->pc = 0x7F1A8F04u;
    // 7F1A8F04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A8F08:
    ctx->pc = 0x7F1A8F08u;
    // 7F1A8F08: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8F0C:
    ctx->pc = 0x7F1A8F0Cu;
    // 7F1A8F0C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A8F10:
    ctx->pc = 0x7F1A8F10u;
    // 7F1A8F10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A8F14:
    ctx->pc = 0x7F1A8F14u;
    // 7F1A8F14: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8F18:
    ctx->pc = 0x7F1A8F18u;
    // 7F1A8F18: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A8F1C:
    ctx->pc = 0x7F1A8F1Cu;
    // 7F1A8F1C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8F20:
    ctx->pc = 0x7F1A8F20u;
    // 7F1A8F20: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A8F24:
    ctx->pc = 0x7F1A8F24u;
    // 7F1A8F24: cmpwi   r0, 0
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

label_7F1A8F28:
    ctx->pc = 0x7F1A8F28u;
    // 7F1A8F28: bc    4, 2, 0x7F1A90E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A90E0;
        }
    }

label_7F1A8F2C:
    ctx->pc = 0x7F1A8F2Cu;
    ctx->downcount -= 7;
    // 7F1A8F2C: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8F30:
    ctx->pc = 0x7F1A8F30u;
    // 7F1A8F30: lis     r0, 1
    ctx->gpr[0] = ((u32)(s32)(1) << 16);

label_7F1A8F34:
    ctx->pc = 0x7F1A8F34u;
    // 7F1A8F34: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_7F1A8F38:
    ctx->pc = 0x7F1A8F38u;
    // 7F1A8F38: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A8F3C:
    ctx->pc = 0x7F1A8F3Cu;
    // 7F1A8F3C: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A8F40:
    ctx->pc = 0x7F1A8F40u;
    // 7F1A8F40: cmpw    r3, r0
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

label_7F1A8F44:
    ctx->pc = 0x7F1A8F44u;
    // 7F1A8F44: bc    12, 0, 0x7F1A8F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8F50;
        }
    }

label_7F1A8F48:
    ctx->pc = 0x7F1A8F48u;
    ctx->downcount -= 2;
    // 7F1A8F48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A8F4C:
    ctx->pc = 0x7F1A8F4Cu;
    // 7F1A8F4C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8F50:
    ctx->pc = 0x7F1A8F50u;
    ctx->downcount -= 1;
    // 7F1A8F50: bl      0x800147F8
    {
            ctx->lr = 0x7F1A8F54u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1A8F54:
    ctx->pc = 0x7F1A8F54u;
    ctx->downcount -= 48;
    // 7F1A8F54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A8F58:
    ctx->pc = 0x7F1A8F58u;
    // 7F1A8F58: divw   r0, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A8F5C:
    ctx->pc = 0x7F1A8F5Cu;
    // 7F1A8F5C: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F1A8F60:
    ctx->pc = 0x7F1A8F60u;
    // 7F1A8F60: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
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

label_7F1A8F64:
    ctx->pc = 0x7F1A8F64u;
    // 7F1A8F64: bc    4, 2, 0x7F1A8FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8FA8;
        }
    }

label_7F1A8F68:
    ctx->pc = 0x7F1A8F68u;
    ctx->downcount -= 16;
    // 7F1A8F68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8F6C:
    ctx->pc = 0x7F1A8F6Cu;
    // 7F1A8F6C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A8F70:
    ctx->pc = 0x7F1A8F70u;
    // 7F1A8F70: addi    r5, r3, 6316
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6316);

label_7F1A8F74:
    ctx->pc = 0x7F1A8F74u;
    // 7F1A8F74: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F74u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8F78:
    ctx->pc = 0x7F1A8F78u;
    // 7F1A8F78: addi    r5, r4, 6320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6320);

label_7F1A8F7C:
    ctx->pc = 0x7F1A8F7Cu;
    // 7F1A8F7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8F80:
    ctx->pc = 0x7F1A8F80u;
    // 7F1A8F80: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8F84:
    ctx->pc = 0x7F1A8F84u;
    // 7F1A8F84: addi    r4, r3, 6324
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6324);

label_7F1A8F88:
    ctx->pc = 0x7F1A8F88u;
    // 7F1A8F88: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8F8C:
    ctx->pc = 0x7F1A8F8Cu;
    // 7F1A8F8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8F90:
    ctx->pc = 0x7F1A8F90u;
    // 7F1A8F90: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8F94:
    ctx->pc = 0x7F1A8F94u;
    // 7F1A8F94: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8F98:
    ctx->pc = 0x7F1A8F98u;
    // 7F1A8F98: lfs     f0, 6328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8F9C:
    ctx->pc = 0x7F1A8F9Cu;
    // 7F1A8F9C: stfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8F9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8FA0:
    ctx->pc = 0x7F1A8FA0u;
    // 7F1A8FA0: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8FA4:
    ctx->pc = 0x7F1A8FA4u;
    // 7F1A8FA4: b       0x7F1A9034
    {
            goto label_7F1A9034;
    }

label_7F1A8FA8:
    ctx->pc = 0x7F1A8FA8u;
    ctx->downcount -= 2;
    // 7F1A8FA8: cmpwi   r0, 1
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

label_7F1A8FAC:
    ctx->pc = 0x7F1A8FACu;
    // 7F1A8FAC: bc    4, 2, 0x7F1A8FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8FF0;
        }
    }

label_7F1A8FB0:
    ctx->pc = 0x7F1A8FB0u;
    ctx->downcount -= 16;
    // 7F1A8FB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8FB4:
    ctx->pc = 0x7F1A8FB4u;
    // 7F1A8FB4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A8FB8:
    ctx->pc = 0x7F1A8FB8u;
    // 7F1A8FB8: addi    r5, r3, 6316
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6316);

label_7F1A8FBC:
    ctx->pc = 0x7F1A8FBCu;
    // 7F1A8FBC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8FC0:
    ctx->pc = 0x7F1A8FC0u;
    // 7F1A8FC0: addi    r5, r4, 6320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6320);

label_7F1A8FC4:
    ctx->pc = 0x7F1A8FC4u;
    // 7F1A8FC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8FC8:
    ctx->pc = 0x7F1A8FC8u;
    // 7F1A8FC8: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8FCC:
    ctx->pc = 0x7F1A8FCCu;
    // 7F1A8FCC: addi    r4, r3, 6324
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6324);

label_7F1A8FD0:
    ctx->pc = 0x7F1A8FD0u;
    // 7F1A8FD0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8FD4:
    ctx->pc = 0x7F1A8FD4u;
    // 7F1A8FD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8FD8:
    ctx->pc = 0x7F1A8FD8u;
    // 7F1A8FD8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A8FDC:
    ctx->pc = 0x7F1A8FDCu;
    // 7F1A8FDC: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8FE0:
    ctx->pc = 0x7F1A8FE0u;
    // 7F1A8FE0: lfs     f0, 6328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8FE4:
    ctx->pc = 0x7F1A8FE4u;
    // 7F1A8FE4: stfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8FE8:
    ctx->pc = 0x7F1A8FE8u;
    // 7F1A8FE8: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8FE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8FEC:
    ctx->pc = 0x7F1A8FECu;
    // 7F1A8FEC: b       0x7F1A9034
    {
            goto label_7F1A9034;
    }

label_7F1A8FF0:
    ctx->pc = 0x7F1A8FF0u;
    ctx->downcount -= 2;
    // 7F1A8FF0: cmpwi   r0, 2
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

label_7F1A8FF4:
    ctx->pc = 0x7F1A8FF4u;
    // 7F1A8FF4: bc    4, 2, 0x7F1A9034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9034;
        }
    }

label_7F1A8FF8:
    ctx->pc = 0x7F1A8FF8u;
    ctx->downcount -= 15;
    // 7F1A8FF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8FFC:
    ctx->pc = 0x7F1A8FFCu;
    // 7F1A8FFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9000:
    ctx->pc = 0x7F1A9000u;
    // 7F1A9000: addi    r5, r3, 6316
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6316);

label_7F1A9004:
    ctx->pc = 0x7F1A9004u;
    // 7F1A9004: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9004u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9008:
    ctx->pc = 0x7F1A9008u;
    // 7F1A9008: addi    r5, r4, 6320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6320);

label_7F1A900C:
    ctx->pc = 0x7F1A900Cu;
    // 7F1A900C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9010:
    ctx->pc = 0x7F1A9010u;
    // 7F1A9010: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9010u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A9014:
    ctx->pc = 0x7F1A9014u;
    // 7F1A9014: addi    r4, r3, 6324
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6324);

label_7F1A9018:
    ctx->pc = 0x7F1A9018u;
    // 7F1A9018: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9018u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A901C:
    ctx->pc = 0x7F1A901Cu;
    // 7F1A901C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9020:
    ctx->pc = 0x7F1A9020u;
    // 7F1A9020: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9020u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9024:
    ctx->pc = 0x7F1A9024u;
    // 7F1A9024: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9024u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A9028:
    ctx->pc = 0x7F1A9028u;
    // 7F1A9028: lfs     f0, 6328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9028u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A902C:
    ctx->pc = 0x7F1A902Cu;
    // 7F1A902C: stfs     f1, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A902Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A9030:
    ctx->pc = 0x7F1A9030u;
    // 7F1A9030: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9030u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A9034:
    ctx->pc = 0x7F1A9034u;
    ctx->downcount -= 14;
    // 7F1A9034: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A9038:
    ctx->pc = 0x7F1A9038u;
    // 7F1A9038: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A903C:
    ctx->pc = 0x7F1A903Cu;
    // 7F1A903C: addi    r3, r3, 5000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1A9040:
    ctx->pc = 0x7F1A9040u;
    // 7F1A9040: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9044:
    ctx->pc = 0x7F1A9044u;
    // 7F1A9044: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A9048:
    ctx->pc = 0x7F1A9048u;
    // 7F1A9048: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1A904C:
    ctx->pc = 0x7F1A904Cu;
    // 7F1A904C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A9050:
    ctx->pc = 0x7F1A9050u;
    // 7F1A9050: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9054:
    ctx->pc = 0x7F1A9054u;
    // 7F1A9054: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9058:
    ctx->pc = 0x7F1A9058u;
    // 7F1A9058: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A905C:
    ctx->pc = 0x7F1A905Cu;
    // 7F1A905C: cmpw    r0, r3
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

label_7F1A9060:
    ctx->pc = 0x7F1A9060u;
    // 7F1A9060: bc    4, 1, 0x7F1A9068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9068;
        }
    }

label_7F1A9064:
    ctx->pc = 0x7F1A9064u;
    ctx->downcount -= 1;
    // 7F1A9064: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9068:
    ctx->pc = 0x7F1A9068u;
    ctx->downcount -= 46;
    // 7F1A9068: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A906C:
    ctx->pc = 0x7F1A906Cu;
    // 7F1A906C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A9070:
    ctx->pc = 0x7F1A9070u;
    // 7F1A9070: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9074:
    ctx->pc = 0x7F1A9074u;
    // 7F1A9074: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9078:
    ctx->pc = 0x7F1A9078u;
    // 7F1A9078: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1A907C:
    ctx->pc = 0x7F1A907Cu;
    // 7F1A907C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9080:
    ctx->pc = 0x7F1A9080u;
    // 7F1A9080: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A9084:
    ctx->pc = 0x7F1A9084u;
    // 7F1A9084: lfd     f2, 6304(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9084u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6304);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9088:
    ctx->pc = 0x7F1A9088u;
    // 7F1A9088: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A908C:
    ctx->pc = 0x7F1A908Cu;
    // 7F1A908C: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9090:
    ctx->pc = 0x7F1A9090u;
    // 7F1A9090: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9094:
    ctx->pc = 0x7F1A9094u;
    // 7F1A9094: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9098:
    ctx->pc = 0x7F1A9098u;
    // 7F1A9098: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9098u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A909C:
    ctx->pc = 0x7F1A909Cu;
    // 7F1A909C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A90A0:
    ctx->pc = 0x7F1A90A0u;
    // 7F1A90A0: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A90A4:
    ctx->pc = 0x7F1A90A4u;
    // 7F1A90A4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A90A8:
    ctx->pc = 0x7F1A90A8u;
    // 7F1A90A8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A90A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A90AC:
    ctx->pc = 0x7F1A90ACu;
    // 7F1A90AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A90B0:
    ctx->pc = 0x7F1A90B0u;
    // 7F1A90B0: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A90B4:
    ctx->pc = 0x7F1A90B4u;
    // 7F1A90B4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A90B4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A90B8:
    ctx->pc = 0x7F1A90B8u;
    // 7F1A90B8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A90BC:
    ctx->pc = 0x7F1A90BCu;
    // 7F1A90BC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A90BCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1A90C0:
    ctx->pc = 0x7F1A90C0u;
    // 7F1A90C0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A90C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A90C4:
    ctx->pc = 0x7F1A90C4u;
    // 7F1A90C4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A90C4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A90C8:
    ctx->pc = 0x7F1A90C8u;
    // 7F1A90C8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A90C8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A90CC:
    ctx->pc = 0x7F1A90CCu;
    // 7F1A90CC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A90CCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A90D0:
    ctx->pc = 0x7F1A90D0u;
    // 7F1A90D0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A90D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A90D4:
    ctx->pc = 0x7F1A90D4u;
    // 7F1A90D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A90D8:
    ctx->pc = 0x7F1A90D8u;
    // 7F1A90D8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A90DC:
    ctx->pc = 0x7F1A90DCu;
    // 7F1A90DC: stb     r0, 75(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(75);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A90E0:
    ctx->pc = 0x7F1A90E0u;
    ctx->downcount -= 6;
    // 7F1A90E0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A90E4:
    ctx->pc = 0x7F1A90E4u;
    // 7F1A90E4: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A90E8:
    ctx->pc = 0x7F1A90E8u;
    // 7F1A90E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A90EC:
    ctx->pc = 0x7F1A90ECu;
    // 7F1A90EC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1A90F0:
    ctx->pc = 0x7F1A90F0u;
    // 7F1A90F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A90F4:
    ctx->pc = 0x7F1A90F4u;
    ctx->downcount -= 7;
    // 7F1A90F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A90F8:
    ctx->pc = 0x7F1A90F8u;
    // 7F1A90F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A90FC:
    ctx->pc = 0x7F1A90FCu;
    // 7F1A90FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9100:
    ctx->pc = 0x7F1A9100u;
    // 7F1A9100: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A9104:
    ctx->pc = 0x7F1A9104u;
    // 7F1A9104: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9108:
    ctx->pc = 0x7F1A9108u;
    // 7F1A9108: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A910C:
    ctx->pc = 0x7F1A910Cu;
    // 7F1A910C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1A9110u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1A9110:
    ctx->pc = 0x7F1A9110u;
    ctx->downcount -= 2;
    // 7F1A9110: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9114:
    ctx->pc = 0x7F1A9114u;
    // 7F1A9114: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1A9118u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1A9118:
    ctx->pc = 0x7F1A9118u;
    ctx->downcount -= 6;
    // 7F1A9118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A911C:
    ctx->pc = 0x7F1A911Cu;
    // 7F1A911C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A9120:
    ctx->pc = 0x7F1A9120u;
    // 7F1A9120: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9124:
    ctx->pc = 0x7F1A9124u;
    // 7F1A9124: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A9128:
    ctx->pc = 0x7F1A9128u;
    // 7F1A9128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A912C:
    ctx->pc = 0x7F1A912Cu;
    ctx->downcount -= 5;
    // 7F1A912C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A9130:
    ctx->pc = 0x7F1A9130u;
    // 7F1A9130: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9134:
    ctx->pc = 0x7F1A9134u;
    // 7F1A9134: cmpwi   r4, 1
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

label_7F1A9138:
    ctx->pc = 0x7F1A9138u;
    // 7F1A9138: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A913C:
    ctx->pc = 0x7F1A913Cu;
    // 7F1A913C: bc    12, 2, 0x7F1A9168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9168;
        }
    }

label_7F1A9140:
    ctx->pc = 0x7F1A9140u;
    ctx->downcount -= 1;
    // 7F1A9140: bc    4, 0, 0x7F1A9150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9150;
        }
    }

label_7F1A9144:
    ctx->pc = 0x7F1A9144u;
    ctx->downcount -= 2;
    // 7F1A9144: cmpwi   r4, 0
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

label_7F1A9148:
    ctx->pc = 0x7F1A9148u;
    // 7F1A9148: bc    4, 0, 0x7F1A915C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A915C;
        }
    }

label_7F1A914C:
    ctx->pc = 0x7F1A914Cu;
    ctx->downcount -= 1;
    // 7F1A914C: b       0x7F1A91AC
    {
            goto label_7F1A91AC;
    }

label_7F1A9150:
    ctx->pc = 0x7F1A9150u;
    ctx->downcount -= 2;
    // 7F1A9150: cmpwi   r4, 3
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

label_7F1A9154:
    ctx->pc = 0x7F1A9154u;
    // 7F1A9154: bc    4, 0, 0x7F1A91AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A91AC;
        }
    }

label_7F1A9158:
    ctx->pc = 0x7F1A9158u;
    ctx->downcount -= 1;
    // 7F1A9158: b       0x7F1A9174
    {
            goto label_7F1A9174;
    }

label_7F1A915C:
    ctx->pc = 0x7F1A915Cu;
    ctx->downcount -= 3;
    // 7F1A915C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A9160:
    ctx->pc = 0x7F1A9160u;
    // 7F1A9160: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9164:
    ctx->pc = 0x7F1A9164u;
    // 7F1A9164: b       0x7F1A91B4
    {
            goto label_7F1A91B4;
    }

label_7F1A9168:
    ctx->pc = 0x7F1A9168u;
    ctx->downcount -= 3;
    // 7F1A9168: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A916C:
    ctx->pc = 0x7F1A916Cu;
    // 7F1A916C: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9170:
    ctx->pc = 0x7F1A9170u;
    // 7F1A9170: b       0x7F1A91B4
    {
            goto label_7F1A91B4;
    }

label_7F1A9174:
    ctx->pc = 0x7F1A9174u;
    ctx->downcount -= 10;
    // 7F1A9174: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9178:
    ctx->pc = 0x7F1A9178u;
    // 7F1A9178: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A917C:
    ctx->pc = 0x7F1A917Cu;
    // 7F1A917C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9180:
    ctx->pc = 0x7F1A9180u;
    // 7F1A9180: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1A9184:
    ctx->pc = 0x7F1A9184u;
    // 7F1A9184: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9188:
    ctx->pc = 0x7F1A9188u;
    // 7F1A9188: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A918C:
    ctx->pc = 0x7F1A918Cu;
    // 7F1A918C: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9190:
    ctx->pc = 0x7F1A9190u;
    // 7F1A9190: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9194:
    ctx->pc = 0x7F1A9194u;
    // 7F1A9194: cmpwi   r0, 0
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

label_7F1A9198:
    ctx->pc = 0x7F1A9198u;
    // 7F1A9198: bc    4, 2, 0x7F1A91A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A91A4;
        }
    }

label_7F1A919C:
    ctx->pc = 0x7F1A919Cu;
    ctx->downcount -= 2;
    // 7F1A919C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A91A0:
    ctx->pc = 0x7F1A91A0u;
    // 7F1A91A0: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A91A4:
    ctx->pc = 0x7F1A91A4u;
    ctx->downcount -= 2;
    // 7F1A91A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A91A8:
    ctx->pc = 0x7F1A91A8u;
    // 7F1A91A8: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A91AC:
    ctx->pc = 0x7F1A91ACu;
    ctx->downcount -= 1;
    // 7F1A91AC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A91B0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A91B0:
    ctx->pc = 0x7F1A91B0u;
    ctx->downcount -= 1;
    // 7F1A91B0: b       0x7F1A91B8
    {
            goto label_7F1A91B8;
    }

label_7F1A91B4:
    ctx->pc = 0x7F1A91B4u;
    ctx->downcount -= 1;
    // 7F1A91B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A91B8:
    ctx->pc = 0x7F1A91B8u;
    ctx->downcount -= 5;
    // 7F1A91B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A91BC:
    ctx->pc = 0x7F1A91BCu;
    // 7F1A91BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A91C0:
    ctx->pc = 0x7F1A91C0u;
    // 7F1A91C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A91C4:
    ctx->pc = 0x7F1A91C4u;
    // 7F1A91C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A91C8:
    ctx->pc = 0x7F1A91C8u;
    ctx->downcount -= 9;
    // 7F1A91C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A91CC:
    ctx->pc = 0x7F1A91CCu;
    // 7F1A91CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A91D0:
    ctx->pc = 0x7F1A91D0u;
    // 7F1A91D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A91D4:
    ctx->pc = 0x7F1A91D4u;
    // 7F1A91D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A91D8:
    ctx->pc = 0x7F1A91D8u;
    // 7F1A91D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A91DC:
    ctx->pc = 0x7F1A91DCu;
    // 7F1A91DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A91E0:
    ctx->pc = 0x7F1A91E0u;
    // 7F1A91E0: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A91E4:
    ctx->pc = 0x7F1A91E4u;
    // 7F1A91E4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A91E8:
    ctx->pc = 0x7F1A91E8u;
    // 7F1A91E8: bl      0x7F234510
    {
            ctx->lr = 0x7F1A91ECu;
            ctx->pc = 0x7F234510u;
            return;
    }

label_7F1A91EC:
    ctx->pc = 0x7F1A91ECu;
    ctx->downcount -= 4;
    // 7F1A91EC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A91F0:
    ctx->pc = 0x7F1A91F0u;
    // 7F1A91F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A91F4:
    ctx->pc = 0x7F1A91F4u;
    // 7F1A91F4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F1A91F8:
    ctx->pc = 0x7F1A91F8u;
    // 7F1A91F8: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1A91FCu;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1A91FC:
    ctx->pc = 0x7F1A91FCu;
    ctx->downcount -= 4;
    // 7F1A91FC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9200:
    ctx->pc = 0x7F1A9200u;
    // 7F1A9200: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9204:
    ctx->pc = 0x7F1A9204u;
    // 7F1A9204: cmplwi  r0, 0x0000
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

label_7F1A9208:
    ctx->pc = 0x7F1A9208u;
    // 7F1A9208: bc    4, 2, 0x7F1A9214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9214;
        }
    }

label_7F1A920C:
    ctx->pc = 0x7F1A920Cu;
    ctx->downcount -= 2;
    // 7F1A920C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A9210:
    ctx->pc = 0x7F1A9210u;
    // 7F1A9210: b       0x7F1A92CC
    {
            goto label_7F1A92CC;
    }

label_7F1A9214:
    ctx->pc = 0x7F1A9214u;
    ctx->downcount -= 16;
    // 7F1A9214: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A9218:
    ctx->pc = 0x7F1A9218u;
    // 7F1A9218: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_7F1A921C:
    ctx->pc = 0x7F1A921Cu;
    // 7F1A921C: stw     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A9220:
    ctx->pc = 0x7F1A9220u;
    // 7F1A9220: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1A9224:
    ctx->pc = 0x7F1A9224u;
    // 7F1A9224: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F1A9228:
    ctx->pc = 0x7F1A9228u;
    // 7F1A9228: addi    r0, r3, 26964
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26964);

label_7F1A922C:
    ctx->pc = 0x7F1A922Cu;
    // 7F1A922C: stb     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A9230:
    ctx->pc = 0x7F1A9230u;
    // 7F1A9230: stb     r5, 73(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(73);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A9234:
    ctx->pc = 0x7F1A9234u;
    // 7F1A9234: stb     r5, 74(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(74);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A9238:
    ctx->pc = 0x7F1A9238u;
    // 7F1A9238: stb     r4, 75(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(75);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1A923C:
    ctx->pc = 0x7F1A923Cu;
    // 7F1A923C: stw     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A9240:
    ctx->pc = 0x7F1A9240u;
    // 7F1A9240: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9244:
    ctx->pc = 0x7F1A9244u;
    // 7F1A9244: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9248:
    ctx->pc = 0x7F1A9248u;
    // 7F1A9248: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A924C:
    ctx->pc = 0x7F1A924Cu;
    // 7F1A924C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9250:
    ctx->pc = 0x7F1A9250u;
    // 7F1A9250: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1A9254u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1A9254:
    ctx->pc = 0x7F1A9254u;
    ctx->downcount -= 5;
    // 7F1A9254: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9258:
    ctx->pc = 0x7F1A9258u;
    // 7F1A9258: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A925C:
    ctx->pc = 0x7F1A925Cu;
    // 7F1A925C: addi    r4, r4, -29536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29536);

label_7F1A9260:
    ctx->pc = 0x7F1A9260u;
    // 7F1A9260: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9264:
    ctx->pc = 0x7F1A9264u;
    // 7F1A9264: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1A9268u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1A9268:
    ctx->pc = 0x7F1A9268u;
    ctx->downcount -= 6;
    // 7F1A9268: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F1A926C:
    ctx->pc = 0x7F1A926Cu;
    // 7F1A926C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9270:
    ctx->pc = 0x7F1A9270u;
    // 7F1A9270: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9274:
    ctx->pc = 0x7F1A9274u;
    // 7F1A9274: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A9278:
    ctx->pc = 0x7F1A9278u;
    // 7F1A9278: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A927C:
    loop_7F1A927C(ctx);
    if (ctx->pc == 0x7F1A92B4u) goto label_7F1A92B4;
    return;
label_7F1A9280:
    // 7F1A9280: addi    r0, r3, 160
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(160);

label_7F1A9284:
    // 7F1A9284: addze  r8, r6
    {
        u32 a = ctx->gpr[6];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A9288:
    // 7F1A9288: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_7F1A928C:
    // 7F1A928C: srawi r6, r4, 8
    {
        u32 sh = 8u;
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

label_7F1A9290:
    // 7F1A9290: addi    r4, r4, 63
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(63);

label_7F1A9294:
    // 7F1A9294: addze  r6, r6
    {
        u32 a = ctx->gpr[6];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A9298:
    // 7F1A9298: rlwinm r7, r8, 11, 0, 20
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 11u) & 0xFFFFF800u;
    }

label_7F1A929C:
    // 7F1A929C: rlwinm r6, r6, 5, 0, 26
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 5u) & 0xFFFFFFE0u;
    }

label_7F1A92A0:
    // 7F1A92A0: addi    r5, r5, 31
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31);

label_7F1A92A4:
    // 7F1A92A4: or   r6, r8, r6
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[6];
    }

label_7F1A92A8:
    // 7F1A92A8: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1A92AC:
    ctx->pc = 0x7F1A92ACu;
    // 7F1A92AC: sthx    r6, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1A92B0:
    // 7F1A92B0: bc    16, 0, 0x7F1A927C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A927Cu;
                return;
            }
            goto label_7F1A927C;
        }
    }

label_7F1A92B4:
    ctx->pc = 0x7F1A92B4u;
    ctx->downcount -= 5;
    // 7F1A92B4: addi    r3, r31, 132
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(132);

label_7F1A92B8:
    ctx->pc = 0x7F1A92B8u;
    // 7F1A92B8: addi    r4, r31, 160
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(160);

label_7F1A92BC:
    ctx->pc = 0x7F1A92BCu;
    // 7F1A92BC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A92C0:
    ctx->pc = 0x7F1A92C0u;
    // 7F1A92C0: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_7F1A92C4:
    ctx->pc = 0x7F1A92C4u;
    // 7F1A92C4: bl      0x800449CC
    {
            ctx->lr = 0x7F1A92C8u;
            ctx->pc = 0x800449CCu;
            return;
    }

label_7F1A92C8:
    ctx->pc = 0x7F1A92C8u;
    ctx->downcount -= 1;
    // 7F1A92C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A92CC:
    ctx->pc = 0x7F1A92CCu;
    ctx->downcount -= 6;
    // 7F1A92CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A92D0:
    ctx->pc = 0x7F1A92D0u;
    // 7F1A92D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A92D4:
    ctx->pc = 0x7F1A92D4u;
    // 7F1A92D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A92D8:
    ctx->pc = 0x7F1A92D8u;
    // 7F1A92D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A92DC:
    ctx->pc = 0x7F1A92DCu;
    // 7F1A92DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A92E0:
    ctx->pc = 0x7F1A92E0u;
    ctx->downcount -= 20;
    // 7F1A92E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A92E4:
    ctx->pc = 0x7F1A92E4u;
    // 7F1A92E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A92E8:
    ctx->pc = 0x7F1A92E8u;
    // 7F1A92E8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A92EC:
    ctx->pc = 0x7F1A92ECu;
    // 7F1A92EC: li      r5, 672
    ctx->gpr[5] = (u32)(s32)(672);

label_7F1A92F0:
    ctx->pc = 0x7F1A92F0u;
    // 7F1A92F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A92F4:
    ctx->pc = 0x7F1A92F4u;
    // 7F1A92F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A92F8:
    ctx->pc = 0x7F1A92F8u;
    // 7F1A92F8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A92FC:
    ctx->pc = 0x7F1A92FCu;
    // 7F1A92FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9300:
    ctx->pc = 0x7F1A9300u;
    // 7F1A9300: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A9304:
    ctx->pc = 0x7F1A9304u;
    // 7F1A9304: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A9308u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A9308:
    ctx->pc = 0x7F1A9308u;
    ctx->downcount -= 2;
    // 7F1A9308: or.   r31, r3, r3
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

label_7F1A930C:
    ctx->pc = 0x7F1A930Cu;
    // 7F1A930C: bc    12, 2, 0x7F1A9380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9380;
        }
    }

label_7F1A9310:
    ctx->pc = 0x7F1A9310u;
    ctx->downcount -= 5;
    // 7F1A9310: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9314:
    ctx->pc = 0x7F1A9314u;
    // 7F1A9314: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1A9318:
    ctx->pc = 0x7F1A9318u;
    // 7F1A9318: addi    r4, r4, -28928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28928);

label_7F1A931C:
    ctx->pc = 0x7F1A931Cu;
    // 7F1A931C: addi    r5, r5, -28428
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28428);

label_7F1A9320:
    ctx->pc = 0x7F1A9320u;
    // 7F1A9320: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A9324u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A9324:
    ctx->pc = 0x7F1A9324u;
    ctx->downcount -= 13;
    // 7F1A9324: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9328:
    ctx->pc = 0x7F1A9328u;
    // 7F1A9328: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A932C:
    ctx->pc = 0x7F1A932Cu;
    // 7F1A932C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A9330:
    ctx->pc = 0x7F1A9330u;
    // 7F1A9330: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9334:
    ctx->pc = 0x7F1A9334u;
    // 7F1A9334: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A9338:
    ctx->pc = 0x7F1A9338u;
    // 7F1A9338: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A933C:
    ctx->pc = 0x7F1A933Cu;
    // 7F1A933C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A9340:
    ctx->pc = 0x7F1A9340u;
    // 7F1A9340: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A9344:
    ctx->pc = 0x7F1A9344u;
    // 7F1A9344: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A9348:
    ctx->pc = 0x7F1A9348u;
    // 7F1A9348: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A934C:
    ctx->pc = 0x7F1A934Cu;
    // 7F1A934C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A9350:
    ctx->pc = 0x7F1A9350u;
    // 7F1A9350: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9354:
    ctx->pc = 0x7F1A9354u;
    // 7F1A9354: bl      0x7F1A91C8
    {
            ctx->lr = 0x7F1A9358u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A91C8u;
                return;
            }
            goto label_7F1A91C8;
    }

label_7F1A9358:
    ctx->pc = 0x7F1A9358u;
    ctx->downcount -= 2;
    // 7F1A9358: cmpwi   r3, 0
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

label_7F1A935C:
    ctx->pc = 0x7F1A935Cu;
    // 7F1A935C: bc    4, 0, 0x7F1A9370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9370;
        }
    }

label_7F1A9360:
    ctx->pc = 0x7F1A9360u;
    ctx->downcount -= 2;
    // 7F1A9360: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9364:
    ctx->pc = 0x7F1A9364u;
    // 7F1A9364: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A9368u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A9368:
    ctx->pc = 0x7F1A9368u;
    ctx->downcount -= 2;
    // 7F1A9368: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A936C:
    ctx->pc = 0x7F1A936Cu;
    // 7F1A936C: b       0x7F1A9384
    {
            goto label_7F1A9384;
    }

label_7F1A9370:
    ctx->pc = 0x7F1A9370u;
    ctx->downcount -= 4;
    // 7F1A9370: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9374:
    ctx->pc = 0x7F1A9374u;
    // 7F1A9374: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9378:
    ctx->pc = 0x7F1A9378u;
    // 7F1A9378: addi    r4, r4, -28372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28372);

label_7F1A937C:
    ctx->pc = 0x7F1A937Cu;
    // 7F1A937C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A9380u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A9380:
    ctx->pc = 0x7F1A9380u;
    ctx->downcount -= 1;
    // 7F1A9380: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9384:
    ctx->pc = 0x7F1A9384u;
    ctx->downcount -= 16;
    // 7F1A9384: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A9388:
    ctx->pc = 0x7F1A9388u;
    // 7F1A9388: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A938C:
    ctx->pc = 0x7F1A938Cu;
    // 7F1A938C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9390:
    ctx->pc = 0x7F1A9390u;
    // 7F1A9390: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A9394:
    ctx->pc = 0x7F1A9394u;
    // 7F1A9394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9398:
    ctx->pc = 0x7F1A9398u;
    ctx->downcount -= 22;
    // 7F1A9398: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A939C:
    ctx->pc = 0x7F1A939Cu;
    // 7F1A939C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A93A0:
    ctx->pc = 0x7F1A93A0u;
    // 7F1A93A0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A93A4:
    ctx->pc = 0x7F1A93A4u;
    // 7F1A93A4: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A93A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1A93A8:
    ctx->pc = 0x7F1A93A8u;
    // 7F1A93A8: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A93A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A93A8u);
        if (ctx->exception) return;
    }

label_7F1A93AC:
    ctx->pc = 0x7F1A93ACu;
    // 7F1A93AC: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A93ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1A93B0:
    ctx->pc = 0x7F1A93B0u;
    // 7F1A93B0: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A93B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A93B0u);
        if (ctx->exception) return;
    }

label_7F1A93B4:
    ctx->pc = 0x7F1A93B4u;
    // 7F1A93B4: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A93B8:
    ctx->pc = 0x7F1A93B8u;
    // 7F1A93B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A93BC:
    ctx->pc = 0x7F1A93BCu;
    // 7F1A93BC: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A93C0:
    ctx->pc = 0x7F1A93C0u;
    // 7F1A93C0: cmpwi   r0, 0
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

label_7F1A93C4:
    ctx->pc = 0x7F1A93C4u;
    // 7F1A93C4: bc    4, 2, 0x7F1A9430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9430;
        }
    }

label_7F1A93C8:
    ctx->pc = 0x7F1A93C8u;
    ctx->downcount -= 4;
    // 7F1A93C8: lwz     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A93CC:
    ctx->pc = 0x7F1A93CCu;
    // 7F1A93CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1A93D0:
    ctx->pc = 0x7F1A93D0u;
    // 7F1A93D0: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A93D4:
    ctx->pc = 0x7F1A93D4u;
    // 7F1A93D4: bl      0x7F1A9584
    {
            ctx->lr = 0x7F1A93D8u;
            goto label_7F1A9584;
    }

label_7F1A93D8:
    ctx->pc = 0x7F1A93D8u;
    ctx->downcount -= 18;
    // 7F1A93D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A93DC:
    ctx->pc = 0x7F1A93DCu;
    // 7F1A93DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A93E0:
    ctx->pc = 0x7F1A93E0u;
    // 7F1A93E0: addi    r5, r3, 6356
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6356);

label_7F1A93E4:
    ctx->pc = 0x7F1A93E4u;
    // 7F1A93E4: lfs     f0, 6352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A93E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A93E8:
    ctx->pc = 0x7F1A93E8u;
    // 7F1A93E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A93E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A93EC:
    ctx->pc = 0x7F1A93ECu;
    // 7F1A93EC: li      r3, 1600
    ctx->gpr[3] = (u32)(s32)(1600);

label_7F1A93F0:
    ctx->pc = 0x7F1A93F0u;
    // 7F1A93F0: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F1A93F4:
    ctx->pc = 0x7F1A93F4u;
    // 7F1A93F4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A93F4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A93F8:
    ctx->pc = 0x7F1A93F8u;
    // 7F1A93F8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A93F8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A93FC:
    ctx->pc = 0x7F1A93FCu;
    // 7F1A93FC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A93FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9400:
    ctx->pc = 0x7F1A9400u;
    // 7F1A9400: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9404:
    ctx->pc = 0x7F1A9404u;
    // 7F1A9404: stw     r4, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9408:
    ctx->pc = 0x7F1A9408u;
    // 7F1A9408: lwz     r4, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A940C:
    ctx->pc = 0x7F1A940Cu;
    // 7F1A940C: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F1A9410:
    ctx->pc = 0x7F1A9410u;
    // 7F1A9410: stw     r4, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9414:
    ctx->pc = 0x7F1A9414u;
    // 7F1A9414: stw     r3, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9418:
    ctx->pc = 0x7F1A9418u;
    // 7F1A9418: stw     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A941C:
    ctx->pc = 0x7F1A941Cu;
    // 7F1A941C: bl      0x7F1A9584
    {
            ctx->lr = 0x7F1A9420u;
            goto label_7F1A9584;
    }

label_7F1A9420:
    ctx->pc = 0x7F1A9420u;
    ctx->downcount -= 4;
    // 7F1A9420: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9424:
    ctx->pc = 0x7F1A9424u;
    // 7F1A9424: lfs     f0, 6360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9428:
    ctx->pc = 0x7F1A9428u;
    // 7F1A9428: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9428u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A942C:
    ctx->pc = 0x7F1A942Cu;
    // 7F1A942C: stfs     f0, 92(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A942Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A9430:
    ctx->pc = 0x7F1A9430u;
    ctx->downcount -= 80;
    // 7F1A9430: lwz     r6, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A9434:
    ctx->pc = 0x7F1A9434u;
    // 7F1A9434: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A9438:
    ctx->pc = 0x7F1A9438u;
    // 7F1A9438: lwz     r7, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1A943C:
    ctx->pc = 0x7F1A943Cu;
    // 7F1A943C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9440:
    ctx->pc = 0x7F1A9440u;
    // 7F1A9440: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A9444:
    ctx->pc = 0x7F1A9444u;
    // 7F1A9444: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9448:
    ctx->pc = 0x7F1A9448u;
    // 7F1A9448: divw   r5, r7, r6
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A944C:
    ctx->pc = 0x7F1A944Cu;
    // 7F1A944C: lfd     f2, 6344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A944Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6344);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9450:
    ctx->pc = 0x7F1A9450u;
    // 7F1A9450: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9454:
    ctx->pc = 0x7F1A9454u;
    // 7F1A9454: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9458:
    ctx->pc = 0x7F1A9458u;
    // 7F1A9458: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9458u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A945C:
    ctx->pc = 0x7F1A945Cu;
    // 7F1A945C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A945Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A9460:
    ctx->pc = 0x7F1A9460u;
    // 7F1A9460: mullw   r3, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[3] = (u32)product;
    }

label_7F1A9464:
    ctx->pc = 0x7F1A9464u;
    // 7F1A9464: rlwinm. r0, r5, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A9468:
    ctx->pc = 0x7F1A9468u;
    // 7F1A9468: subf   r0, r3, r7
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A946C:
    ctx->pc = 0x7F1A946Cu;
    // 7F1A946C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A9470:
    ctx->pc = 0x7F1A9470u;
    // 7F1A9470: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9474:
    ctx->pc = 0x7F1A9474u;
    // 7F1A9474: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9474u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9478:
    ctx->pc = 0x7F1A9478u;
    // 7F1A9478: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9478u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A947C:
    ctx->pc = 0x7F1A947Cu;
    // 7F1A947C: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A947Cu)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F1A9480:
    ctx->pc = 0x7F1A9480u;
    // 7F1A9480: bc    12, 2, 0x7F1A9490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9490;
        }
    }

label_7F1A9484:
    ctx->pc = 0x7F1A9484u;
    ctx->downcount -= 3;
    // 7F1A9484: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9488:
    ctx->pc = 0x7F1A9488u;
    // 7F1A9488: lfs     f0, 6364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9488u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A948C:
    ctx->pc = 0x7F1A948Cu;
    // 7F1A948C: fsubs   f30, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1A948Cu)) return;
    ppc_fsubs(ctx, 30, 0, 30);

label_7F1A9490:
    ctx->pc = 0x7F1A9490u;
    ctx->downcount -= 2;
    // 7F1A9490: rlwinm. r0, r5, 0, 30, 30
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

label_7F1A9494:
    ctx->pc = 0x7F1A9494u;
    // 7F1A9494: bc    12, 2, 0x7F1A949C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A949C;
        }
    }

label_7F1A9498:
    ctx->pc = 0x7F1A9498u;
    ctx->downcount -= 1;
    // 7F1A9498: fneg    f30, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1A9498u)) return;
    ctx->fpr[30] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[30]) ^ 0x8000000000000000ull);

label_7F1A949C:
    ctx->pc = 0x7F1A949Cu;
    ctx->downcount -= 6;
    // 7F1A949C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A94A0:
    ctx->pc = 0x7F1A94A0u;
    // 7F1A94A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1A94A4:
    ctx->pc = 0x7F1A94A4u;
    // 7F1A94A4: lfd     f31, 6344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A94A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6344);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A94A8:
    ctx->pc = 0x7F1A94A8u;
    // 7F1A94A8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1A94AC:
    ctx->pc = 0x7F1A94ACu;
    // 7F1A94AC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A94B0:
    ctx->pc = 0x7F1A94B0u;
    // 7F1A94B0: lis     r27, 17200
    ctx->gpr[27] = ((u32)(s32)(17200) << 16);

label_7F1A94B4:
    ctx->downcount -= 76;
    // 7F1A94B4: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_7F1A94B8:
    ctx->pc = 0x7F1A94B8u;
    // 7F1A94B8: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A94BC:
    // 7F1A94BC: divwu   r5, r28, r3
    {
        u32 divisor = ctx->gpr[3];
        ctx->gpr[5] = divisor == 0 ? 0u : ctx->gpr[28] / divisor;
    }

label_7F1A94C0:
    ctx->pc = 0x7F1A94C0u;
    // 7F1A94C0: lwz     r6, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A94C4:
    // 7F1A94C4: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A94C8:
    ctx->pc = 0x7F1A94C8u;
    // 7F1A94C8: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A94CC:
    ctx->pc = 0x7F1A94CCu;
    // 7F1A94CC: stw     r27, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A94D0:
    ctx->pc = 0x7F1A94D0u;
    // 7F1A94D0: lwz     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A94D4:
    // 7F1A94D4: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F1A94D8:
    // 7F1A94D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A94DC:
    // 7F1A94DC: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1A94E0:
    ctx->pc = 0x7F1A94E0u;
    // 7F1A94E0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A94E4:
    // 7F1A94E4: cmpw    r3, r0
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

label_7F1A94E8:
    ctx->pc = 0x7F1A94E8u;
    // 7F1A94E8: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A94EC:
    ctx->pc = 0x7F1A94ECu;
    // 7F1A94EC: stw     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A94F0:
    ctx->pc = 0x7F1A94F0u;
    // 7F1A94F0: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A94F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A94F4:
    ctx->pc = 0x7F1A94F4u;
    // 7F1A94F4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A94F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A94F8:
    ctx->pc = 0x7F1A94F8u;
    // 7F1A94F8: fsubs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A94F8u)) return;
    ppc_fsubs(ctx, 1, 1, 31);

label_7F1A94FC:
    ctx->pc = 0x7F1A94FCu;
    // 7F1A94FC: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A94FCu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1A9500:
    ctx->pc = 0x7F1A9500u;
    // 7F1A9500: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9500u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1A9504:
    // 7F1A9504: bc    12, 1, 0x7F1A9538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9538;
        }
    }

label_7F1A9508:
    ctx->downcount -= 4;
    // 7F1A9508: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A950C:
    ctx->pc = 0x7F1A950Cu;
    // 7F1A950C: lfs     f0, 6340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A950Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9510:
    ctx->pc = 0x7F1A9510u;
    // 7F1A9510: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9510u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F1A9514:
    // 7F1A9514: bl      0x7F008330
    {
            ctx->lr = 0x7F1A9518u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F1A9518:
    ctx->pc = 0x7F1A9518u;
    ctx->downcount -= 8;
    // 7F1A9518: lfs     f0, 92(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9518u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A951C:
    // 7F1A951C: addi    r0, r29, 96
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(96);

label_7F1A9520:
    ctx->pc = 0x7F1A9520u;
    // 7F1A9520: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9520u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1A9524:
    ctx->pc = 0x7F1A9524u;
    // 7F1A9524: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9524u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F1A9528:
    ctx->pc = 0x7F1A9528u;
    // 7F1A9528: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9528u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A952C:
    ctx->pc = 0x7F1A952Cu;
    // 7F1A952C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A952Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9530:
    ctx->pc = 0x7F1A9530u;
    // 7F1A9530: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9534:
    ctx->pc = 0x7F1A9534u;
    // 7F1A9534: stwx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9538:
    ctx->downcount -= 5;
    // 7F1A9538: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1A953C:
    // 7F1A953C: addi    r28, r28, 7168
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7168);

label_7F1A9540:
    // 7F1A9540: cmpwi   r31, 50
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A9544:
    // 7F1A9544: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F1A9548:
    // 7F1A9548: bc    12, 0, 0x7F1A94B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A94B4u;
                return;
            }
            goto label_7F1A94B4;
        }
    }

label_7F1A954C:
    ctx->pc = 0x7F1A954Cu;
    ctx->downcount -= 3;
    // 7F1A954C: lwz     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9550:
    ctx->pc = 0x7F1A9550u;
    // 7F1A9550: cmpwi   r3, 0
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

label_7F1A9554:
    ctx->pc = 0x7F1A9554u;
    // 7F1A9554: bc    4, 1, 0x7F1A9560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9560;
        }
    }

label_7F1A9558:
    ctx->pc = 0x7F1A9558u;
    ctx->downcount -= 2;
    // 7F1A9558: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1A955C:
    ctx->pc = 0x7F1A955Cu;
    // 7F1A955C: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9560:
    ctx->pc = 0x7F1A9560u;
    ctx->downcount -= 20;
    // 7F1A9560: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9560u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A9560u);
        if (ctx->exception) return;
    }

label_7F1A9564:
    ctx->pc = 0x7F1A9564u;
    // 7F1A9564: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9568:
    ctx->pc = 0x7F1A9568u;
    // 7F1A9568: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A9568u);
        if (ctx->exception) return;
    }

label_7F1A956C:
    ctx->pc = 0x7F1A956Cu;
    // 7F1A956C: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A956Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9570:
    ctx->pc = 0x7F1A9570u;
    // 7F1A9570: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A9574:
    ctx->pc = 0x7F1A9574u;
    // 7F1A9574: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9578:
    ctx->pc = 0x7F1A9578u;
    // 7F1A9578: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A957C:
    ctx->pc = 0x7F1A957Cu;
    // 7F1A957C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A9580:
    ctx->pc = 0x7F1A9580u;
    // 7F1A9580: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9584:
    ctx->pc = 0x7F1A9584u;
    ctx->downcount -= 4;
    // 7F1A9584: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A9588:
    ctx->pc = 0x7F1A9588u;
    // 7F1A9588: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A958C:
    ctx->pc = 0x7F1A958Cu;
    // 7F1A958C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9590:
    ctx->pc = 0x7F1A9590u;
    // 7F1A9590: bl      0x7F1A95CC
    {
            ctx->lr = 0x7F1A9594u;
            goto label_7F1A95CC;
    }

label_7F1A9594:
    ctx->pc = 0x7F1A9594u;
    ctx->downcount -= 31;
    // 7F1A9594: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A9598:
    ctx->pc = 0x7F1A9598u;
    // 7F1A9598: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A959C:
    ctx->pc = 0x7F1A959Cu;
    // 7F1A959C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A95A0:
    ctx->pc = 0x7F1A95A0u;
    // 7F1A95A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A95A4:
    ctx->pc = 0x7F1A95A4u;
    // 7F1A95A4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A95A8:
    ctx->pc = 0x7F1A95A8u;
    // 7F1A95A8: lfd     f2, 6376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A95A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6376);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A95AC:
    ctx->pc = 0x7F1A95ACu;
    // 7F1A95AC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A95ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A95B0:
    ctx->pc = 0x7F1A95B0u;
    // 7F1A95B0: lfs     f0, 6368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A95B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A95B4:
    ctx->pc = 0x7F1A95B4u;
    // 7F1A95B4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A95B4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A95B8:
    ctx->pc = 0x7F1A95B8u;
    // 7F1A95B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A95BC:
    ctx->pc = 0x7F1A95BCu;
    // 7F1A95BC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A95BCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1A95C0:
    ctx->pc = 0x7F1A95C0u;
    // 7F1A95C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A95C4:
    ctx->pc = 0x7F1A95C4u;
    // 7F1A95C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A95C8:
    ctx->pc = 0x7F1A95C8u;
    // 7F1A95C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A95CC:
    ctx->pc = 0x7F1A95CCu;
    ctx->downcount -= 13;
    // 7F1A95CC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1A95D0:
    ctx->pc = 0x7F1A95D0u;
    // 7F1A95D0: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1A95D4:
    ctx->pc = 0x7F1A95D4u;
    // 7F1A95D4: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1A95D8:
    ctx->pc = 0x7F1A95D8u;
    // 7F1A95D8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A95DC:
    ctx->pc = 0x7F1A95DCu;
    // 7F1A95DC: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1A95E0:
    ctx->pc = 0x7F1A95E0u;
    // 7F1A95E0: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1A95E4:
    ctx->pc = 0x7F1A95E4u;
    // 7F1A95E4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A95E8:
    ctx->pc = 0x7F1A95E8u;
    // 7F1A95E8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A95EC:
    ctx->pc = 0x7F1A95ECu;
    // 7F1A95EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A95F0:
    ctx->pc = 0x7F1A95F0u;
    ctx->downcount -= 16;
    // 7F1A95F0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A95F4:
    ctx->pc = 0x7F1A95F4u;
    // 7F1A95F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A95F8:
    ctx->pc = 0x7F1A95F8u;
    // 7F1A95F8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A95FC:
    ctx->pc = 0x7F1A95FCu;
    // 7F1A95FC: stmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A9600:
    ctx->pc = 0x7F1A9600u;
    // 7F1A9600: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9604:
    ctx->pc = 0x7F1A9604u;
    // 7F1A9604: bl      0x8004C3D0
    {
            ctx->lr = 0x7F1A9608u;
            ctx->pc = 0x8004C3D0u;
            return;
    }

label_7F1A9608:
    ctx->pc = 0x7F1A9608u;
    ctx->downcount -= 7;
    // 7F1A9608: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A960C:
    ctx->pc = 0x7F1A960Cu;
    // 7F1A960C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9610:
    ctx->pc = 0x7F1A9610u;
    // 7F1A9610: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A9614:
    ctx->pc = 0x7F1A9614u;
    // 7F1A9614: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9618:
    ctx->pc = 0x7F1A9618u;
    // 7F1A9618: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A961C:
    ctx->pc = 0x7F1A961Cu;
    // 7F1A961C: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A9620:
    ctx->pc = 0x7F1A9620u;
    // 7F1A9620: bl      0x80043188
    {
            ctx->lr = 0x7F1A9624u;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F1A9624:
    ctx->pc = 0x7F1A9624u;
    ctx->downcount -= 2;
    // 7F1A9624: cmplwi  r27, 0x0000
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

label_7F1A9628:
    ctx->pc = 0x7F1A9628u;
    // 7F1A9628: bc    12, 2, 0x7F1A96B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A96B4;
        }
    }

label_7F1A962C:
    ctx->pc = 0x7F1A962Cu;
    ctx->downcount -= 3;
    // 7F1A962C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1A9630:
    ctx->pc = 0x7F1A9630u;
    // 7F1A9630: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A9634:
    ctx->pc = 0x7F1A9634u;
    // 7F1A9634: bl      0x8004B588
    {
            ctx->lr = 0x7F1A9638u;
            ctx->pc = 0x8004B588u;
            return;
    }

label_7F1A9638:
    ctx->pc = 0x7F1A9638u;
    ctx->downcount -= 5;
    // 7F1A9638: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1A963C:
    ctx->pc = 0x7F1A963Cu;
    // 7F1A963C: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1A9640:
    ctx->pc = 0x7F1A9640u;
    // 7F1A9640: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A9644:
    ctx->pc = 0x7F1A9644u;
    // 7F1A9644: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A9648:
    ctx->pc = 0x7F1A9648u;
    // 7F1A9648: bl      0x80043238
    {
            ctx->lr = 0x7F1A964Cu;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1A964C:
    ctx->pc = 0x7F1A964Cu;
    ctx->downcount -= 9;
    // 7F1A964C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A9650:
    ctx->pc = 0x7F1A9650u;
    // 7F1A9650: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A9654:
    ctx->pc = 0x7F1A9654u;
    // 7F1A9654: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A9658:
    ctx->pc = 0x7F1A9658u;
    // 7F1A9658: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A965C:
    ctx->pc = 0x7F1A965Cu;
    // 7F1A965C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F1A9660:
    ctx->pc = 0x7F1A9660u;
    // 7F1A9660: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A9664:
    ctx->pc = 0x7F1A9664u;
    // 7F1A9664: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A9668:
    ctx->pc = 0x7F1A9668u;
    // 7F1A9668: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A966C:
    ctx->pc = 0x7F1A966Cu;
    // 7F1A966C: bl      0x8004439C
    {
            ctx->lr = 0x7F1A9670u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A9670:
    ctx->pc = 0x7F1A9670u;
    ctx->downcount -= 12;
    // 7F1A9670: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9674:
    ctx->pc = 0x7F1A9674u;
    // 7F1A9674: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A9678:
    ctx->pc = 0x7F1A9678u;
    // 7F1A9678: addi    r5, r4, 6336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6336);

label_7F1A967C:
    ctx->pc = 0x7F1A967Cu;
    // 7F1A967C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A9680:
    ctx->pc = 0x7F1A9680u;
    // 7F1A9680: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9680u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9684:
    ctx->pc = 0x7F1A9684u;
    // 7F1A9684: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A9688:
    ctx->pc = 0x7F1A9688u;
    // 7F1A9688: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A968C:
    ctx->pc = 0x7F1A968Cu;
    // 7F1A968C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A9690:
    ctx->pc = 0x7F1A9690u;
    // 7F1A9690: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9690u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1A9694:
    ctx->pc = 0x7F1A9694u;
    // 7F1A9694: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A9698:
    ctx->pc = 0x7F1A9698u;
    // 7F1A9698: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9698u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1A969C:
    ctx->pc = 0x7F1A969Cu;
    // 7F1A969C: bl      0x80044630
    {
            ctx->lr = 0x7F1A96A0u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F1A96A0:
    ctx->pc = 0x7F1A96A0u;
    ctx->downcount -= 3;
    // 7F1A96A0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A96A4:
    ctx->pc = 0x7F1A96A4u;
    // 7F1A96A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A96A8:
    ctx->pc = 0x7F1A96A8u;
    // 7F1A96A8: bl      0x800438AC
    {
            ctx->lr = 0x7F1A96ACu;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F1A96AC:
    ctx->pc = 0x7F1A96ACu;
    ctx->downcount -= 1;
    // 7F1A96AC: bl      0x80042A40
    {
            ctx->lr = 0x7F1A96B0u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F1A96B0:
    ctx->pc = 0x7F1A96B0u;
    ctx->downcount -= 1;
    // 7F1A96B0: b       0x7F1A9710
    {
            goto label_7F1A9710;
    }

label_7F1A96B4:
    ctx->pc = 0x7F1A96B4u;
    ctx->downcount -= 1;
    // 7F1A96B4: bl      0x8004C6F0
    {
            ctx->lr = 0x7F1A96B8u;
            ctx->pc = 0x8004C6F0u;
            return;
    }

label_7F1A96B8:
    ctx->pc = 0x7F1A96B8u;
    ctx->downcount -= 4;
    // 7F1A96B8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A96BC:
    ctx->pc = 0x7F1A96BCu;
    // 7F1A96BC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1A96C0:
    ctx->pc = 0x7F1A96C0u;
    // 7F1A96C0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A96C4:
    ctx->pc = 0x7F1A96C4u;
    // 7F1A96C4: bl      0x8004B784
    {
            ctx->lr = 0x7F1A96C8u;
            ctx->pc = 0x8004B784u;
            return;
    }

label_7F1A96C8:
    ctx->pc = 0x7F1A96C8u;
    ctx->downcount -= 5;
    // 7F1A96C8: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F1A96CC:
    ctx->pc = 0x7F1A96CCu;
    // 7F1A96CC: li      r4, 224
    ctx->gpr[4] = (u32)(s32)(224);

label_7F1A96D0:
    ctx->pc = 0x7F1A96D0u;
    // 7F1A96D0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A96D4:
    ctx->pc = 0x7F1A96D4u;
    // 7F1A96D4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1A96D8:
    ctx->pc = 0x7F1A96D8u;
    // 7F1A96D8: bl      0x80043238
    {
            ctx->lr = 0x7F1A96DCu;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1A96DC:
    ctx->pc = 0x7F1A96DCu;
    ctx->downcount -= 3;
    // 7F1A96DC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A96E0:
    ctx->pc = 0x7F1A96E0u;
    // 7F1A96E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A96E4:
    ctx->pc = 0x7F1A96E4u;
    // 7F1A96E4: bl      0x800438AC
    {
            ctx->lr = 0x7F1A96E8u;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F1A96E8:
    ctx->pc = 0x7F1A96E8u;
    ctx->downcount -= 1;
    // 7F1A96E8: bl      0x80042A40
    {
            ctx->lr = 0x7F1A96ECu;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F1A96EC:
    ctx->pc = 0x7F1A96ECu;
    ctx->downcount -= 9;
    // 7F1A96EC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A96F0:
    ctx->pc = 0x7F1A96F0u;
    // 7F1A96F0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A96F4:
    ctx->pc = 0x7F1A96F4u;
    // 7F1A96F4: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F1A96F8:
    ctx->pc = 0x7F1A96F8u;
    // 7F1A96F8: li      r6, 224
    ctx->gpr[6] = (u32)(s32)(224);

label_7F1A96FC:
    ctx->pc = 0x7F1A96FCu;
    // 7F1A96FC: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F1A9700:
    ctx->pc = 0x7F1A9700u;
    // 7F1A9700: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A9704:
    ctx->pc = 0x7F1A9704u;
    // 7F1A9704: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A9708:
    ctx->pc = 0x7F1A9708u;
    // 7F1A9708: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A970C:
    ctx->pc = 0x7F1A970Cu;
    // 7F1A970C: bl      0x8004439C
    {
            ctx->lr = 0x7F1A9710u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A9710:
    ctx->pc = 0x7F1A9710u;
    ctx->downcount -= 4;
    // 7F1A9710: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9714:
    ctx->pc = 0x7F1A9714u;
    // 7F1A9714: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A9718:
    ctx->pc = 0x7F1A9718u;
    // 7F1A9718: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A971C:
    ctx->pc = 0x7F1A971Cu;
    // 7F1A971C: bl      0x800462E4
    {
            ctx->lr = 0x7F1A9720u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A9720:
    ctx->pc = 0x7F1A9720u;
    ctx->downcount -= 6;
    // 7F1A9720: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9724:
    ctx->pc = 0x7F1A9724u;
    // 7F1A9724: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F1A9728:
    ctx->pc = 0x7F1A9728u;
    // 7F1A9728: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F1A972C:
    ctx->pc = 0x7F1A972Cu;
    // 7F1A972C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F1A9730:
    ctx->pc = 0x7F1A9730u;
    // 7F1A9730: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F1A9734:
    ctx->pc = 0x7F1A9734u;
    // 7F1A9734: bl      0x8004585C
    {
            ctx->lr = 0x7F1A9738u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F1A9738:
    ctx->pc = 0x7F1A9738u;
    ctx->downcount -= 6;
    // 7F1A9738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A973C:
    ctx->pc = 0x7F1A973Cu;
    // 7F1A973C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F1A9740:
    ctx->pc = 0x7F1A9740u;
    // 7F1A9740: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F1A9744:
    ctx->pc = 0x7F1A9744u;
    // 7F1A9744: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1A9748:
    ctx->pc = 0x7F1A9748u;
    // 7F1A9748: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F1A974C:
    ctx->pc = 0x7F1A974Cu;
    // 7F1A974C: bl      0x80045818
    {
            ctx->lr = 0x7F1A9750u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F1A9750:
    ctx->pc = 0x7F1A9750u;
    ctx->downcount -= 3;
    // 7F1A9750: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A9754:
    ctx->pc = 0x7F1A9754u;
    // 7F1A9754: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9758:
    ctx->pc = 0x7F1A9758u;
    // 7F1A9758: bl      0x80044978
    {
            ctx->lr = 0x7F1A975Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F1A975C:
    ctx->pc = 0x7F1A975Cu;
    ctx->downcount -= 7;
    // 7F1A975C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9760:
    ctx->pc = 0x7F1A9760u;
    // 7F1A9760: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A9764:
    ctx->pc = 0x7F1A9764u;
    // 7F1A9764: addi    r5, r3, 6384
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6384);

label_7F1A9768:
    ctx->pc = 0x7F1A9768u;
    // 7F1A9768: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A976C:
    ctx->pc = 0x7F1A976Cu;
    // 7F1A976C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9770:
    ctx->pc = 0x7F1A9770u;
    // 7F1A9770: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9774:
    ctx->pc = 0x7F1A9774u;
    // 7F1A9774: bl      0x80045970
    {
            ctx->lr = 0x7F1A9778u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1A9778:
    ctx->pc = 0x7F1A9778u;
    ctx->downcount -= 1;
    // 7F1A9778: bl      0x8004D870
    {
            ctx->lr = 0x7F1A977Cu;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F1A977C:
    ctx->pc = 0x7F1A977Cu;
    ctx->downcount -= 4;
    // 7F1A977C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F1A9780:
    ctx->pc = 0x7F1A9780u;
    // 7F1A9780: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A9784:
    ctx->pc = 0x7F1A9784u;
    // 7F1A9784: li      r5, 196
    ctx->gpr[5] = (u32)(s32)(196);

label_7F1A9788:
    ctx->pc = 0x7F1A9788u;
    // 7F1A9788: bl      0x80042E0C
    {
            ctx->lr = 0x7F1A978Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F1A978C:
    ctx->pc = 0x7F1A978Cu;
    ctx->downcount -= 4;
    // 7F1A978C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1A9790:
    ctx->pc = 0x7F1A9790u;
    // 7F1A9790: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A9794:
    ctx->pc = 0x7F1A9794u;
    // 7F1A9794: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1A9798:
    ctx->pc = 0x7F1A9798u;
    // 7F1A9798: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A979C:
    ctx->downcount -= 172;
    // 7F1A979C: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1A97A0:
    // 7F1A97A0: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_7F1A97A4:
    // 7F1A97A4: mulli   r4, r0, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7168);

label_7F1A97A8:
    // 7F1A97A8: add   r27, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F1A97AC:
    // 7F1A97AC: rlwinm r5, r0, 12, 0, 19
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F1A97B0:
    ctx->pc = 0x7F1A97B0u;
    // 7F1A97B0: lwz     r3, 96(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A97B4:
    // 7F1A97B4: divw   r25, r28, r6
    {
        s32 dividend = (s32)ctx->gpr[28];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[25] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A97B8:
    // 7F1A97B8: addi    r0, r3, -160
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-160);

label_7F1A97BC:
    // 7F1A97BC: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A97C0:
    // 7F1A97C0: divw   r24, r4, r6
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[24] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A97C4:
    // 7F1A97C4: extsh r4, r25
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F1A97C8:
    // 7F1A97C8: divw   r23, r29, r6
    {
        s32 dividend = (s32)ctx->gpr[29];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[23] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A97CC:
    // 7F1A97CC: divw   r22, r5, r6
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[22] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A97D0:
    // 7F1A97D0: bl      0x7F1A9898
    {
            ctx->lr = 0x7F1A97D4u;
            goto label_7F1A9898;
    }

label_7F1A97D4:
    ctx->downcount -= 3;
    // 7F1A97D4: extsh r4, r23
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[23];
    }

label_7F1A97D8:
    // 7F1A97D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A97DC:
    // 7F1A97DC: bl      0x7F1A9888
    {
            ctx->lr = 0x7F1A97E0u;
            goto label_7F1A9888;
    }

label_7F1A97E0:
    ctx->pc = 0x7F1A97E0u;
    ctx->downcount -= 5;
    // 7F1A97E0: lwz     r3, 96(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A97E4:
    // 7F1A97E4: extsh r4, r25
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F1A97E8:
    // 7F1A97E8: addi    r0, r3, 8352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8352);

label_7F1A97EC:
    // 7F1A97EC: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A97F0:
    // 7F1A97F0: bl      0x7F1A9898
    {
            ctx->lr = 0x7F1A97F4u;
            goto label_7F1A9898;
    }

label_7F1A97F4:
    ctx->downcount -= 3;
    // 7F1A97F4: extsh r4, r23
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[23];
    }

label_7F1A97F8:
    // 7F1A97F8: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F1A97FC:
    // 7F1A97FC: bl      0x7F1A9888
    {
            ctx->lr = 0x7F1A9800u;
            goto label_7F1A9888;
    }

label_7F1A9800:
    ctx->pc = 0x7F1A9800u;
    ctx->downcount -= 5;
    // 7F1A9800: lwz     r3, 100(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9804:
    // 7F1A9804: extsh r4, r24
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F1A9808:
    // 7F1A9808: addi    r0, r3, 8352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8352);

label_7F1A980C:
    // 7F1A980C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A9810:
    // 7F1A9810: bl      0x7F1A9898
    {
            ctx->lr = 0x7F1A9814u;
            goto label_7F1A9898;
    }

label_7F1A9814:
    ctx->downcount -= 3;
    // 7F1A9814: extsh r4, r22
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[22];
    }

label_7F1A9818:
    // 7F1A9818: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F1A981C:
    // 7F1A981C: bl      0x7F1A9888
    {
            ctx->lr = 0x7F1A9820u;
            goto label_7F1A9888;
    }

label_7F1A9820:
    ctx->pc = 0x7F1A9820u;
    ctx->downcount -= 5;
    // 7F1A9820: lwz     r3, 100(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9824:
    // 7F1A9824: extsh r4, r24
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F1A9828:
    // 7F1A9828: addi    r0, r3, -160
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-160);

label_7F1A982C:
    // 7F1A982C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1A9830:
    // 7F1A9830: bl      0x7F1A9898
    {
            ctx->lr = 0x7F1A9834u;
            goto label_7F1A9898;
    }

label_7F1A9834:
    ctx->downcount -= 3;
    // 7F1A9834: extsh r4, r22
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[22];
    }

label_7F1A9838:
    // 7F1A9838: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A983C:
    // 7F1A983C: bl      0x7F1A9888
    {
            ctx->lr = 0x7F1A9840u;
            goto label_7F1A9888;
    }

label_7F1A9840:
    ctx->downcount -= 6;
    // 7F1A9840: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1A9844:
    // 7F1A9844: addi    r29, r29, 4096
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4096);

label_7F1A9848:
    // 7F1A9848: cmpwi   r26, 49
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(49);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A984C:
    // 7F1A984C: addi    r28, r28, 7168
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7168);

label_7F1A9850:
    // 7F1A9850: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1A9854:
    // 7F1A9854: bc    12, 0, 0x7F1A979C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A979Cu;
                return;
            }
            goto label_7F1A979C;
        }
    }

label_7F1A9858:
    ctx->pc = 0x7F1A9858u;
    ctx->downcount -= 1;
    // 7F1A9858: bl      0x7F1A9884
    {
            ctx->lr = 0x7F1A985Cu;
            goto label_7F1A9884;
    }

label_7F1A985C:
    ctx->pc = 0x7F1A985Cu;
    ctx->downcount -= 1;
    // 7F1A985C: bl      0x8004D990
    {
            ctx->lr = 0x7F1A9860u;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F1A9860:
    ctx->pc = 0x7F1A9860u;
    ctx->downcount -= 4;
    // 7F1A9860: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9864:
    ctx->pc = 0x7F1A9864u;
    // 7F1A9864: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A9868:
    ctx->pc = 0x7F1A9868u;
    // 7F1A9868: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A986C:
    ctx->pc = 0x7F1A986Cu;
    // 7F1A986C: bl      0x800462E4
    {
            ctx->lr = 0x7F1A9870u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A9870:
    ctx->pc = 0x7F1A9870u;
    ctx->downcount -= 16;
    // 7F1A9870: lmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A9874:
    ctx->pc = 0x7F1A9874u;
    // 7F1A9874: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9878:
    ctx->pc = 0x7F1A9878u;
    // 7F1A9878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A987C:
    ctx->pc = 0x7F1A987Cu;
    // 7F1A987C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1A9880:
    ctx->pc = 0x7F1A9880u;
    // 7F1A9880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9884:
    ctx->pc = 0x7F1A9884u;
    ctx->downcount -= 1;
    // 7F1A9884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9888:
    ctx->pc = 0x7F1A9888u;
    ctx->downcount -= 4;
    // 7F1A9888: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A988C:
    ctx->pc = 0x7F1A988Cu;
    // 7F1A988C: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A9890:
    ctx->pc = 0x7F1A9890u;
    // 7F1A9890: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A9894:
    ctx->pc = 0x7F1A9894u;
    // 7F1A9894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9898:
    ctx->pc = 0x7F1A9898u;
    ctx->downcount -= 4;
    // 7F1A9898: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A989C:
    ctx->pc = 0x7F1A989Cu;
    // 7F1A989C: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A98A0:
    ctx->pc = 0x7F1A98A0u;
    // 7F1A98A0: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A98A4:
    ctx->pc = 0x7F1A98A4u;
    // 7F1A98A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A98A8:
    ctx->pc = 0x7F1A98A8u;
    ctx->downcount -= 4;
    // 7F1A98A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A98AC:
    ctx->pc = 0x7F1A98ACu;
    // 7F1A98AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A98B0:
    ctx->pc = 0x7F1A98B0u;
    // 7F1A98B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A98B4:
    ctx->pc = 0x7F1A98B4u;
    // 7F1A98B4: bl      0x7F1A9398
    {
            ctx->lr = 0x7F1A98B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9398u;
                return;
            }
            goto label_7F1A9398;
    }

label_7F1A98B8:
    ctx->pc = 0x7F1A98B8u;
    ctx->downcount -= 5;
    // 7F1A98B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A98BC:
    ctx->pc = 0x7F1A98BCu;
    // 7F1A98BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A98C0:
    ctx->pc = 0x7F1A98C0u;
    // 7F1A98C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A98C4:
    ctx->pc = 0x7F1A98C4u;
    // 7F1A98C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A98C8:
    ctx->pc = 0x7F1A98C8u;
    ctx->downcount -= 8;
    // 7F1A98C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A98CC:
    ctx->pc = 0x7F1A98CCu;
    // 7F1A98CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A98D0:
    ctx->pc = 0x7F1A98D0u;
    // 7F1A98D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A98D4:
    ctx->pc = 0x7F1A98D4u;
    // 7F1A98D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A98D8:
    ctx->pc = 0x7F1A98D8u;
    // 7F1A98D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A98DC:
    ctx->pc = 0x7F1A98DCu;
    // 7F1A98DC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A98E0:
    ctx->pc = 0x7F1A98E0u;
    // 7F1A98E0: cmplwi  r3, 0x0000
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

label_7F1A98E4:
    ctx->pc = 0x7F1A98E4u;
    // 7F1A98E4: bc    12, 2, 0x7F1A98F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A98F4;
        }
    }

label_7F1A98E8:
    ctx->pc = 0x7F1A98E8u;
    ctx->downcount -= 1;
    // 7F1A98E8: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1A98ECu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1A98EC:
    ctx->pc = 0x7F1A98ECu;
    ctx->downcount -= 2;
    // 7F1A98EC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A98F0:
    ctx->pc = 0x7F1A98F0u;
    // 7F1A98F0: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1A98F4u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1A98F4:
    ctx->pc = 0x7F1A98F4u;
    ctx->downcount -= 6;
    // 7F1A98F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A98F8:
    ctx->pc = 0x7F1A98F8u;
    // 7F1A98F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A98FC:
    ctx->pc = 0x7F1A98FCu;
    // 7F1A98FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9900:
    ctx->pc = 0x7F1A9900u;
    // 7F1A9900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A9904:
    ctx->pc = 0x7F1A9904u;
    // 7F1A9904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9908:
    ctx->pc = 0x7F1A9908u;
    ctx->downcount -= 11;
    // 7F1A9908: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A990C:
    ctx->pc = 0x7F1A990Cu;
    // 7F1A990C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9910:
    ctx->pc = 0x7F1A9910u;
    // 7F1A9910: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A9914:
    ctx->pc = 0x7F1A9914u;
    // 7F1A9914: li      r5, 140
    ctx->gpr[5] = (u32)(s32)(140);

label_7F1A9918:
    ctx->pc = 0x7F1A9918u;
    // 7F1A9918: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A991C:
    ctx->pc = 0x7F1A991Cu;
    // 7F1A991C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A9920:
    ctx->pc = 0x7F1A9920u;
    // 7F1A9920: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A9924:
    ctx->pc = 0x7F1A9924u;
    // 7F1A9924: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9928:
    ctx->pc = 0x7F1A9928u;
    // 7F1A9928: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A992C:
    ctx->pc = 0x7F1A992Cu;
    // 7F1A992C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9930:
    ctx->pc = 0x7F1A9930u;
    // 7F1A9930: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1A9934u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1A9934:
    ctx->pc = 0x7F1A9934u;
    ctx->downcount -= 4;
    // 7F1A9934: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9938:
    ctx->pc = 0x7F1A9938u;
    // 7F1A9938: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A993C:
    ctx->pc = 0x7F1A993Cu;
    // 7F1A993C: cmplwi  r0, 0x0000
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

label_7F1A9940:
    ctx->pc = 0x7F1A9940u;
    // 7F1A9940: bc    4, 2, 0x7F1A994C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A994C;
        }
    }

label_7F1A9944:
    ctx->pc = 0x7F1A9944u;
    ctx->downcount -= 2;
    // 7F1A9944: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A9948:
    ctx->pc = 0x7F1A9948u;
    // 7F1A9948: b       0x7F1A9974
    {
            goto label_7F1A9974;
    }

label_7F1A994C:
    ctx->pc = 0x7F1A994Cu;
    ctx->downcount -= 2;
    // 7F1A994C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9950:
    ctx->pc = 0x7F1A9950u;
    // 7F1A9950: bl      0x7F1A9398
    {
            ctx->lr = 0x7F1A9954u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9398u;
                return;
            }
            goto label_7F1A9398;
    }

label_7F1A9954:
    ctx->pc = 0x7F1A9954u;
    ctx->downcount -= 2;
    // 7F1A9954: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9958:
    ctx->pc = 0x7F1A9958u;
    // 7F1A9958: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1A995Cu;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1A995C:
    ctx->pc = 0x7F1A995Cu;
    ctx->downcount -= 5;
    // 7F1A995C: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9960:
    ctx->pc = 0x7F1A9960u;
    // 7F1A9960: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9964:
    ctx->pc = 0x7F1A9964u;
    // 7F1A9964: addi    r4, r4, -27152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27152);

label_7F1A9968:
    ctx->pc = 0x7F1A9968u;
    // 7F1A9968: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A996C:
    ctx->pc = 0x7F1A996Cu;
    // 7F1A996C: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1A9970u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1A9970:
    ctx->pc = 0x7F1A9970u;
    ctx->downcount -= 1;
    // 7F1A9970: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9974:
    ctx->pc = 0x7F1A9974u;
    ctx->downcount -= 6;
    // 7F1A9974: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9978:
    ctx->pc = 0x7F1A9978u;
    // 7F1A9978: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A997C:
    ctx->pc = 0x7F1A997Cu;
    // 7F1A997C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9980:
    ctx->pc = 0x7F1A9980u;
    // 7F1A9980: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A9984:
    ctx->pc = 0x7F1A9984u;
    // 7F1A9984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9988:
    ctx->pc = 0x7F1A9988u;
    ctx->downcount -= 5;
    // 7F1A9988: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A998C:
    ctx->pc = 0x7F1A998Cu;
    // 7F1A998C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9990:
    ctx->pc = 0x7F1A9990u;
    // 7F1A9990: cmpwi   r4, 1
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

label_7F1A9994:
    ctx->pc = 0x7F1A9994u;
    // 7F1A9994: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9998:
    ctx->pc = 0x7F1A9998u;
    // 7F1A9998: bc    12, 2, 0x7F1A99CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A99CC;
        }
    }

label_7F1A999C:
    ctx->pc = 0x7F1A999Cu;
    ctx->downcount -= 1;
    // 7F1A999C: bc    4, 0, 0x7F1A99AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A99AC;
        }
    }

label_7F1A99A0:
    ctx->pc = 0x7F1A99A0u;
    ctx->downcount -= 2;
    // 7F1A99A0: cmpwi   r4, 0
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

label_7F1A99A4:
    ctx->pc = 0x7F1A99A4u;
    // 7F1A99A4: bc    4, 0, 0x7F1A99B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A99B8;
        }
    }

label_7F1A99A8:
    ctx->pc = 0x7F1A99A8u;
    ctx->downcount -= 1;
    // 7F1A99A8: b       0x7F1A9A0C
    {
            goto label_7F1A9A0C;
    }

label_7F1A99AC:
    ctx->pc = 0x7F1A99ACu;
    ctx->downcount -= 2;
    // 7F1A99AC: cmpwi   r4, 3
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

label_7F1A99B0:
    ctx->pc = 0x7F1A99B0u;
    // 7F1A99B0: bc    4, 0, 0x7F1A9A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9A0C;
        }
    }

label_7F1A99B4:
    ctx->pc = 0x7F1A99B4u;
    ctx->downcount -= 1;
    // 7F1A99B4: b       0x7F1A99E0
    {
            goto label_7F1A99E0;
    }

label_7F1A99B8:
    ctx->pc = 0x7F1A99B8u;
    ctx->downcount -= 5;
    // 7F1A99B8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A99BC:
    ctx->pc = 0x7F1A99BCu;
    // 7F1A99BC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99C0:
    ctx->pc = 0x7F1A99C0u;
    // 7F1A99C0: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F1A99C4:
    ctx->pc = 0x7F1A99C4u;
    // 7F1A99C4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A99C8:
    ctx->pc = 0x7F1A99C8u;
    // 7F1A99C8: b       0x7F1A9A14
    {
            goto label_7F1A9A14;
    }

label_7F1A99CC:
    ctx->pc = 0x7F1A99CCu;
    ctx->downcount -= 5;
    // 7F1A99CC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A99D0:
    ctx->pc = 0x7F1A99D0u;
    // 7F1A99D0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99D4:
    ctx->pc = 0x7F1A99D4u;
    // 7F1A99D4: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1A99D8:
    ctx->pc = 0x7F1A99D8u;
    // 7F1A99D8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A99DC:
    ctx->pc = 0x7F1A99DCu;
    // 7F1A99DC: b       0x7F1A9A14
    {
            goto label_7F1A9A14;
    }

label_7F1A99E0:
    ctx->pc = 0x7F1A99E0u;
    ctx->downcount -= 11;
    // 7F1A99E0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99E4:
    ctx->pc = 0x7F1A99E4u;
    // 7F1A99E4: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A99E8:
    ctx->pc = 0x7F1A99E8u;
    // 7F1A99E8: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99EC:
    ctx->pc = 0x7F1A99ECu;
    // 7F1A99EC: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A99F0:
    ctx->pc = 0x7F1A99F0u;
    // 7F1A99F0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99F4:
    ctx->pc = 0x7F1A99F4u;
    // 7F1A99F4: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A99F8:
    ctx->pc = 0x7F1A99F8u;
    // 7F1A99F8: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A99FC:
    ctx->pc = 0x7F1A99FCu;
    // 7F1A99FC: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9A00:
    ctx->pc = 0x7F1A9A00u;
    // 7F1A9A00: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9A04:
    ctx->pc = 0x7F1A9A04u;
    // 7F1A9A04: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9A08:
    ctx->pc = 0x7F1A9A08u;
    // 7F1A9A08: b       0x7F1A9A14
    {
            goto label_7F1A9A14;
    }

label_7F1A9A0C:
    ctx->pc = 0x7F1A9A0Cu;
    ctx->downcount -= 1;
    // 7F1A9A0C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A9A10u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A9A10:
    ctx->pc = 0x7F1A9A10u;
    ctx->downcount -= 1;
    // 7F1A9A10: b       0x7F1A9A18
    {
            goto label_7F1A9A18;
    }

label_7F1A9A14:
    ctx->pc = 0x7F1A9A14u;
    ctx->downcount -= 1;
    // 7F1A9A14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9A18:
    ctx->pc = 0x7F1A9A18u;
    ctx->downcount -= 5;
    // 7F1A9A18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9A1C:
    ctx->pc = 0x7F1A9A1Cu;
    // 7F1A9A1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9A20:
    ctx->pc = 0x7F1A9A20u;
    // 7F1A9A20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A9A24:
    ctx->pc = 0x7F1A9A24u;
    // 7F1A9A24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9A28:
    ctx->pc = 0x7F1A9A28u;
    ctx->downcount -= 24;
    // 7F1A9A28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A9A2C:
    ctx->pc = 0x7F1A9A2Cu;
    // 7F1A9A2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9A30:
    ctx->pc = 0x7F1A9A30u;
    // 7F1A9A30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9A34:
    ctx->pc = 0x7F1A9A34u;
    // 7F1A9A34: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A9A38:
    ctx->pc = 0x7F1A9A38u;
    // 7F1A9A38: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9A3C:
    ctx->pc = 0x7F1A9A3Cu;
    // 7F1A9A3C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A9A40:
    ctx->pc = 0x7F1A9A40u;
    // 7F1A9A40: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A9A44:
    ctx->pc = 0x7F1A9A44u;
    // 7F1A9A44: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A9A48:
    ctx->pc = 0x7F1A9A48u;
    // 7F1A9A48: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A9A4C:
    ctx->pc = 0x7F1A9A4Cu;
    // 7F1A9A4C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1A9A50:
    ctx->pc = 0x7F1A9A50u;
    // 7F1A9A50: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A9A54:
    ctx->pc = 0x7F1A9A54u;
    // 7F1A9A54: li      r5, 300
    ctx->gpr[5] = (u32)(s32)(300);

label_7F1A9A58:
    ctx->pc = 0x7F1A9A58u;
    // 7F1A9A58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A9A5C:
    ctx->pc = 0x7F1A9A5Cu;
    // 7F1A9A5C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A9A60u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A9A60:
    ctx->pc = 0x7F1A9A60u;
    ctx->downcount -= 2;
    // 7F1A9A60: or.   r31, r3, r3
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

label_7F1A9A64:
    ctx->pc = 0x7F1A9A64u;
    // 7F1A9A64: bc    12, 2, 0x7F1A9AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9AE8;
        }
    }

label_7F1A9A68:
    ctx->pc = 0x7F1A9A68u;
    ctx->downcount -= 5;
    // 7F1A9A68: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9A6C:
    ctx->pc = 0x7F1A9A6Cu;
    // 7F1A9A6C: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1A9A70:
    ctx->pc = 0x7F1A9A70u;
    // 7F1A9A70: addi    r4, r4, -26456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26456);

label_7F1A9A74:
    ctx->pc = 0x7F1A9A74u;
    // 7F1A9A74: addi    r5, r5, -26424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26424);

label_7F1A9A78:
    ctx->pc = 0x7F1A9A78u;
    // 7F1A9A78: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A9A7Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A9A7C:
    ctx->pc = 0x7F1A9A7Cu;
    ctx->downcount -= 17;
    // 7F1A9A7C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9A80:
    ctx->pc = 0x7F1A9A80u;
    // 7F1A9A80: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A9A84:
    ctx->pc = 0x7F1A9A84u;
    // 7F1A9A84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A9A88:
    ctx->pc = 0x7F1A9A88u;
    // 7F1A9A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9A8C:
    ctx->pc = 0x7F1A9A8Cu;
    // 7F1A9A8C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A9A90:
    ctx->pc = 0x7F1A9A90u;
    // 7F1A9A90: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A9A94:
    ctx->pc = 0x7F1A9A94u;
    // 7F1A9A94: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A9A98:
    ctx->pc = 0x7F1A9A98u;
    // 7F1A9A98: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A9A9C:
    ctx->pc = 0x7F1A9A9Cu;
    // 7F1A9A9C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A9AA0:
    ctx->pc = 0x7F1A9AA0u;
    // 7F1A9AA0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A9AA4:
    ctx->pc = 0x7F1A9AA4u;
    // 7F1A9AA4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9AA8:
    ctx->pc = 0x7F1A9AA8u;
    // 7F1A9AA8: stw     r26, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1A9AAC:
    ctx->pc = 0x7F1A9AACu;
    // 7F1A9AAC: stw     r27, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A9AB0:
    ctx->pc = 0x7F1A9AB0u;
    // 7F1A9AB0: stw     r28, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1A9AB4:
    ctx->pc = 0x7F1A9AB4u;
    // 7F1A9AB4: stw     r29, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1A9AB8:
    ctx->pc = 0x7F1A9AB8u;
    // 7F1A9AB8: stw     r30, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A9ABC:
    ctx->pc = 0x7F1A9ABCu;
    // 7F1A9ABC: bl      0x7F1A9908
    {
            ctx->lr = 0x7F1A9AC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9908u;
                return;
            }
            goto label_7F1A9908;
    }

label_7F1A9AC0:
    ctx->pc = 0x7F1A9AC0u;
    ctx->downcount -= 2;
    // 7F1A9AC0: cmpwi   r3, 0
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

label_7F1A9AC4:
    ctx->pc = 0x7F1A9AC4u;
    // 7F1A9AC4: bc    12, 2, 0x7F1A9AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9AD8;
        }
    }

label_7F1A9AC8:
    ctx->pc = 0x7F1A9AC8u;
    ctx->downcount -= 2;
    // 7F1A9AC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9ACC:
    ctx->pc = 0x7F1A9ACCu;
    // 7F1A9ACC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A9AD0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A9AD0:
    ctx->pc = 0x7F1A9AD0u;
    ctx->downcount -= 2;
    // 7F1A9AD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9AD4:
    ctx->pc = 0x7F1A9AD4u;
    // 7F1A9AD4: b       0x7F1A9AEC
    {
            goto label_7F1A9AEC;
    }

label_7F1A9AD8:
    ctx->pc = 0x7F1A9AD8u;
    ctx->downcount -= 4;
    // 7F1A9AD8: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1A9ADC:
    ctx->pc = 0x7F1A9ADCu;
    // 7F1A9ADC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9AE0:
    ctx->pc = 0x7F1A9AE0u;
    // 7F1A9AE0: addi    r4, r4, -26232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26232);

label_7F1A9AE4:
    ctx->pc = 0x7F1A9AE4u;
    // 7F1A9AE4: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A9AE8u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A9AE8:
    ctx->pc = 0x7F1A9AE8u;
    ctx->downcount -= 1;
    // 7F1A9AE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A9AEC:
    ctx->pc = 0x7F1A9AECu;
    ctx->downcount -= 16;
    // 7F1A9AEC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A9AF0:
    ctx->pc = 0x7F1A9AF0u;
    // 7F1A9AF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9AF4:
    ctx->pc = 0x7F1A9AF4u;
    // 7F1A9AF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9AF8:
    ctx->pc = 0x7F1A9AF8u;
    // 7F1A9AF8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A9AFC:
    ctx->pc = 0x7F1A9AFCu;
    // 7F1A9AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9B00:
    ctx->pc = 0x7F1A9B00u;
    ctx->downcount -= 16;
    // 7F1A9B00: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A9B04:
    ctx->pc = 0x7F1A9B04u;
    // 7F1A9B04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9B08:
    ctx->pc = 0x7F1A9B08u;
    // 7F1A9B08: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9B0C:
    ctx->pc = 0x7F1A9B0Cu;
    // 7F1A9B0C: stmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A9B10:
    ctx->pc = 0x7F1A9B10u;
    // 7F1A9B10: or.   r28, r3, r3
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

label_7F1A9B14:
    ctx->pc = 0x7F1A9B14u;
    // 7F1A9B14: bc    12, 2, 0x7F1A9D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9D68;
        }
    }

label_7F1A9B18:
    ctx->pc = 0x7F1A9B18u;
    ctx->downcount -= 4;
    // 7F1A9B18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9B1C:
    ctx->pc = 0x7F1A9B1Cu;
    // 7F1A9B1C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A9B20:
    ctx->pc = 0x7F1A9B20u;
    // 7F1A9B20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A9B24:
    ctx->pc = 0x7F1A9B24u;
    // 7F1A9B24: bl      0x800462E4
    {
            ctx->lr = 0x7F1A9B28u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A9B28:
    ctx->pc = 0x7F1A9B28u;
    ctx->downcount -= 5;
    // 7F1A9B28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9B2C:
    ctx->pc = 0x7F1A9B2Cu;
    // 7F1A9B2C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A9B30:
    ctx->pc = 0x7F1A9B30u;
    // 7F1A9B30: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A9B34:
    ctx->pc = 0x7F1A9B34u;
    // 7F1A9B34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A9B38:
    ctx->pc = 0x7F1A9B38u;
    // 7F1A9B38: bl      0x80046238
    {
            ctx->lr = 0x7F1A9B3Cu;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F1A9B3C:
    ctx->pc = 0x7F1A9B3Cu;
    ctx->downcount -= 3;
    // 7F1A9B3C: addi    r29, r28, 52
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(52);

label_7F1A9B40:
    ctx->pc = 0x7F1A9B40u;
    // 7F1A9B40: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1A9B44:
    ctx->pc = 0x7F1A9B44u;
    // 7F1A9B44: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1A9B48:
    ctx->downcount -= 4;
    // 7F1A9B48: addi    r3, r27, 1492
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1492);

label_7F1A9B4C:
    // 7F1A9B4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9B50:
    // 7F1A9B50: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A9B54:
    // 7F1A9B54: bl      0x80044978
    {
            ctx->lr = 0x7F1A9B58u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F1A9B58:
    ctx->downcount -= 1;
    // 7F1A9B58: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A9B5C:
    ctx->pc = 0x7F1A9B5Cu;
    ctx->downcount -= 5;
    // 7F1A9B5C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9B60:
    ctx->pc = 0x7F1A9B60u;
    // 7F1A9B60: stb     r0, 1699(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1699);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A9B64:
    ctx->pc = 0x7F1A9B64u;
    // 7F1A9B64: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9B68:
    // 7F1A9B68: cmpwi   r0, 0
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

label_7F1A9B6C:
    // 7F1A9B6C: bc    12, 2, 0x7F1A9D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9D38;
        }
    }

label_7F1A9B70:
    ctx->pc = 0x7F1A9B70u;
    ctx->downcount -= 5;
    // 7F1A9B70: lwz     r0, 1696(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1696);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9B74:
    // 7F1A9B74: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A9B78:
    // 7F1A9B78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9B7C:
    ctx->pc = 0x7F1A9B7Cu;
    // 7F1A9B7C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9B80:
    // 7F1A9B80: bl      0x80045970
    {
            ctx->lr = 0x7F1A9B84u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1A9B84:
    ctx->downcount -= 4;
    // 7F1A9B84: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F1A9B88:
    // 7F1A9B88: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A9B8C:
    // 7F1A9B8C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A9B90:
    // 7F1A9B90: bl      0x80042E0C
    {
            ctx->lr = 0x7F1A9B94u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F1A9B94:
    ctx->downcount -= 39;
    // 7F1A9B94: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9B98:
    // 7F1A9B98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9B9C:
    ctx->pc = 0x7F1A9B9Cu;
    // 7F1A9B9C: lfs     f3, 6412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9B9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9BA0:
    // 7F1A9BA0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9BA4:
    ctx->pc = 0x7F1A9BA4u;
    // 7F1A9BA4: lfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BA4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9BA8:
    // 7F1A9BA8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9BAC:
    ctx->pc = 0x7F1A9BACu;
    // 7F1A9BAC: lfs     f2, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9BB0:
    ctx->pc = 0x7F1A9BB0u;
    // 7F1A9BB0: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BB0u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A9BB4:
    ctx->pc = 0x7F1A9BB4u;
    // 7F1A9BB4: lfs     f1, 6420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9BB8:
    ctx->pc = 0x7F1A9BB8u;
    // 7F1A9BB8: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BB8u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1A9BBC:
    ctx->pc = 0x7F1A9BBCu;
    // 7F1A9BBC: lfs     f3, 6408(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9BC0:
    ctx->pc = 0x7F1A9BC0u;
    // 7F1A9BC0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BC0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A9BC4:
    ctx->pc = 0x7F1A9BC4u;
    // 7F1A9BC4: fmuls   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BC4u)) return;
    ppc_fmuls(ctx, 3, 3, 2);

label_7F1A9BC8:
    ctx->pc = 0x7F1A9BC8u;
    // 7F1A9BC8: lfs     f2, 6416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9BCC:
    ctx->pc = 0x7F1A9BCCu;
    // 7F1A9BCC: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BCCu)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F1A9BD0:
    ctx->pc = 0x7F1A9BD0u;
    // 7F1A9BD0: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BD0u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F1A9BD4:
    ctx->pc = 0x7F1A9BD4u;
    // 7F1A9BD4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BD4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9BD8:
    ctx->pc = 0x7F1A9BD8u;
    // 7F1A9BD8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BD8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A9BDC:
    ctx->pc = 0x7F1A9BDCu;
    // 7F1A9BDC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9BE0:
    ctx->pc = 0x7F1A9BE0u;
    // 7F1A9BE0: stfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9BE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A9BE4:
    ctx->pc = 0x7F1A9BE4u;
    // 7F1A9BE4: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9BE8:
    ctx->pc = 0x7F1A9BE8u;
    // 7F1A9BE8: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9BEC:
    // 7F1A9BEC: bl      0x7F1A9D90
    {
            ctx->lr = 0x7F1A9BF0u;
            goto label_7F1A9D90;
    }

label_7F1A9BF0:
    ctx->downcount -= 3;
    // 7F1A9BF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9BF4:
    // 7F1A9BF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9BF8:
    // 7F1A9BF8: bl      0x7F1A9D80
    {
            ctx->lr = 0x7F1A9BFCu;
            goto label_7F1A9D80;
    }

label_7F1A9BFC:
    ctx->downcount -= 39;
    // 7F1A9BFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9C00:
    // 7F1A9C00: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9C04:
    ctx->pc = 0x7F1A9C04u;
    // 7F1A9C04: lfs     f3, 6412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9C08:
    // 7F1A9C08: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9C0C:
    ctx->pc = 0x7F1A9C0Cu;
    // 7F1A9C0C: lfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C0Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9C10:
    // 7F1A9C10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9C14:
    ctx->pc = 0x7F1A9C14u;
    // 7F1A9C14: lfs     f2, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9C18:
    ctx->pc = 0x7F1A9C18u;
    // 7F1A9C18: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C18u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A9C1C:
    ctx->pc = 0x7F1A9C1Cu;
    // 7F1A9C1C: lfs     f1, 6420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9C20:
    ctx->pc = 0x7F1A9C20u;
    // 7F1A9C20: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C20u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1A9C24:
    ctx->pc = 0x7F1A9C24u;
    // 7F1A9C24: lfs     f3, 6408(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9C28:
    ctx->pc = 0x7F1A9C28u;
    // 7F1A9C28: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C28u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A9C2C:
    ctx->pc = 0x7F1A9C2Cu;
    // 7F1A9C2C: fmuls   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C2Cu)) return;
    ppc_fmuls(ctx, 3, 3, 2);

label_7F1A9C30:
    ctx->pc = 0x7F1A9C30u;
    // 7F1A9C30: lfs     f2, 6416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9C34:
    ctx->pc = 0x7F1A9C34u;
    // 7F1A9C34: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C34u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F1A9C38:
    ctx->pc = 0x7F1A9C38u;
    // 7F1A9C38: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C38u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F1A9C3C:
    ctx->pc = 0x7F1A9C3Cu;
    // 7F1A9C3C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C3Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9C40:
    ctx->pc = 0x7F1A9C40u;
    // 7F1A9C40: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A9C44:
    ctx->pc = 0x7F1A9C44u;
    // 7F1A9C44: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9C48:
    ctx->pc = 0x7F1A9C48u;
    // 7F1A9C48: stfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A9C4C:
    ctx->pc = 0x7F1A9C4Cu;
    // 7F1A9C4C: lwz     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9C50:
    ctx->pc = 0x7F1A9C50u;
    // 7F1A9C50: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9C54:
    // 7F1A9C54: bl      0x7F1A9D90
    {
            ctx->lr = 0x7F1A9C58u;
            goto label_7F1A9D90;
    }

label_7F1A9C58:
    ctx->downcount -= 3;
    // 7F1A9C58: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F1A9C5C:
    // 7F1A9C5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A9C60:
    // 7F1A9C60: bl      0x7F1A9D80
    {
            ctx->lr = 0x7F1A9C64u;
            goto label_7F1A9D80;
    }

label_7F1A9C64:
    ctx->downcount -= 39;
    // 7F1A9C64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9C68:
    // 7F1A9C68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9C6C:
    ctx->pc = 0x7F1A9C6Cu;
    // 7F1A9C6C: lfs     f3, 6412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9C70:
    // 7F1A9C70: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9C74:
    ctx->pc = 0x7F1A9C74u;
    // 7F1A9C74: lfs     f0, 68(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C74u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9C78:
    // 7F1A9C78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9C7C:
    ctx->pc = 0x7F1A9C7Cu;
    // 7F1A9C7C: lfs     f2, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C7Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9C80:
    ctx->pc = 0x7F1A9C80u;
    // 7F1A9C80: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C80u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A9C84:
    ctx->pc = 0x7F1A9C84u;
    // 7F1A9C84: lfs     f1, 6420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9C88:
    ctx->pc = 0x7F1A9C88u;
    // 7F1A9C88: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C88u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1A9C8C:
    ctx->pc = 0x7F1A9C8Cu;
    // 7F1A9C8C: lfs     f3, 6408(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9C90:
    ctx->pc = 0x7F1A9C90u;
    // 7F1A9C90: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C90u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A9C94:
    ctx->pc = 0x7F1A9C94u;
    // 7F1A9C94: fmuls   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C94u)) return;
    ppc_fmuls(ctx, 3, 3, 2);

label_7F1A9C98:
    ctx->pc = 0x7F1A9C98u;
    // 7F1A9C98: lfs     f2, 6416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9C9C:
    ctx->pc = 0x7F1A9C9Cu;
    // 7F1A9C9C: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9C9Cu)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F1A9CA0:
    ctx->pc = 0x7F1A9CA0u;
    // 7F1A9CA0: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CA0u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F1A9CA4:
    ctx->pc = 0x7F1A9CA4u;
    // 7F1A9CA4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9CA8:
    ctx->pc = 0x7F1A9CA8u;
    // 7F1A9CA8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CA8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A9CAC:
    ctx->pc = 0x7F1A9CACu;
    // 7F1A9CAC: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9CB0:
    ctx->pc = 0x7F1A9CB0u;
    // 7F1A9CB0: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A9CB4:
    ctx->pc = 0x7F1A9CB4u;
    // 7F1A9CB4: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9CB8:
    ctx->pc = 0x7F1A9CB8u;
    // 7F1A9CB8: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9CBC:
    // 7F1A9CBC: bl      0x7F1A9D90
    {
            ctx->lr = 0x7F1A9CC0u;
            goto label_7F1A9D90;
    }

label_7F1A9CC0:
    ctx->downcount -= 3;
    // 7F1A9CC0: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F1A9CC4:
    // 7F1A9CC4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1A9CC8:
    // 7F1A9CC8: bl      0x7F1A9D80
    {
            ctx->lr = 0x7F1A9CCCu;
            goto label_7F1A9D80;
    }

label_7F1A9CCC:
    ctx->downcount -= 39;
    // 7F1A9CCC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9CD0:
    // 7F1A9CD0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9CD4:
    ctx->pc = 0x7F1A9CD4u;
    // 7F1A9CD4: lfs     f3, 6412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9CD8:
    // 7F1A9CD8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9CDC:
    ctx->pc = 0x7F1A9CDCu;
    // 7F1A9CDC: lfs     f0, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CDCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9CE0:
    // 7F1A9CE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9CE4:
    ctx->pc = 0x7F1A9CE4u;
    // 7F1A9CE4: lfs     f2, 80(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CE4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9CE8:
    ctx->pc = 0x7F1A9CE8u;
    // 7F1A9CE8: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CE8u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A9CEC:
    ctx->pc = 0x7F1A9CECu;
    // 7F1A9CEC: lfs     f1, 6420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9CF0:
    ctx->pc = 0x7F1A9CF0u;
    // 7F1A9CF0: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CF0u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1A9CF4:
    ctx->pc = 0x7F1A9CF4u;
    // 7F1A9CF4: lfs     f3, 6408(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A9CF8:
    ctx->pc = 0x7F1A9CF8u;
    // 7F1A9CF8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CF8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A9CFC:
    ctx->pc = 0x7F1A9CFCu;
    // 7F1A9CFC: fmuls   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9CFCu)) return;
    ppc_fmuls(ctx, 3, 3, 2);

label_7F1A9D00:
    ctx->pc = 0x7F1A9D00u;
    // 7F1A9D00: lfs     f2, 6416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A9D04:
    ctx->pc = 0x7F1A9D04u;
    // 7F1A9D04: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D04u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F1A9D08:
    ctx->pc = 0x7F1A9D08u;
    // 7F1A9D08: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D08u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F1A9D0C:
    ctx->pc = 0x7F1A9D0Cu;
    // 7F1A9D0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9D10:
    ctx->pc = 0x7F1A9D10u;
    // 7F1A9D10: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A9D14:
    ctx->pc = 0x7F1A9D14u;
    // 7F1A9D14: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9D18:
    ctx->pc = 0x7F1A9D18u;
    // 7F1A9D18: stfd     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9D18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A9D1C:
    ctx->pc = 0x7F1A9D1Cu;
    // 7F1A9D1C: lwz     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9D20:
    ctx->pc = 0x7F1A9D20u;
    // 7F1A9D20: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9D24:
    // 7F1A9D24: bl      0x7F1A9D90
    {
            ctx->lr = 0x7F1A9D28u;
            goto label_7F1A9D90;
    }

label_7F1A9D28:
    ctx->downcount -= 3;
    // 7F1A9D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A9D2C:
    // 7F1A9D2C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1A9D30:
    // 7F1A9D30: bl      0x7F1A9D80
    {
            ctx->lr = 0x7F1A9D34u;
            goto label_7F1A9D80;
    }

label_7F1A9D34:
    ctx->downcount -= 1;
    // 7F1A9D34: bl      0x7F1A9D7C
    {
            ctx->lr = 0x7F1A9D38u;
            goto label_7F1A9D7C;
    }

label_7F1A9D38:
    ctx->downcount -= 4;
    // 7F1A9D38: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1A9D3C:
    // 7F1A9D3C: addi    r29, r29, 96
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(96);

label_7F1A9D40:
    // 7F1A9D40: cmpwi   r30, 5
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

label_7F1A9D44:
    // 7F1A9D44: bc    12, 0, 0x7F1A9B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9B5Cu;
                return;
            }
            goto label_7F1A9B5C;
        }
    }

label_7F1A9D48:
    ctx->downcount -= 4;
    // 7F1A9D48: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1A9D4C:
    // 7F1A9D4C: addi    r27, r27, 52
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(52);

label_7F1A9D50:
    // 7F1A9D50: cmpwi   r31, 3
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

label_7F1A9D54:
    // 7F1A9D54: bc    12, 0, 0x7F1A9B48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9B48u;
                return;
            }
            goto label_7F1A9B48;
        }
    }

label_7F1A9D58:
    ctx->pc = 0x7F1A9D58u;
    ctx->downcount -= 4;
    // 7F1A9D58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A9D5C:
    ctx->pc = 0x7F1A9D5Cu;
    // 7F1A9D5C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A9D60:
    ctx->pc = 0x7F1A9D60u;
    // 7F1A9D60: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A9D64:
    ctx->pc = 0x7F1A9D64u;
    // 7F1A9D64: bl      0x800462E4
    {
            ctx->lr = 0x7F1A9D68u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A9D68:
    ctx->pc = 0x7F1A9D68u;
    ctx->downcount -= 16;
    // 7F1A9D68: lmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A9D6C:
    ctx->pc = 0x7F1A9D6Cu;
    // 7F1A9D6C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9D70:
    ctx->pc = 0x7F1A9D70u;
    // 7F1A9D70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A9D74:
    ctx->pc = 0x7F1A9D74u;
    // 7F1A9D74: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F1A9D78:
    ctx->pc = 0x7F1A9D78u;
    // 7F1A9D78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9D7C:
    ctx->pc = 0x7F1A9D7Cu;
    ctx->downcount -= 1;
    // 7F1A9D7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9D80:
    ctx->pc = 0x7F1A9D80u;
    ctx->downcount -= 4;
    // 7F1A9D80: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A9D84:
    ctx->pc = 0x7F1A9D84u;
    // 7F1A9D84: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A9D88:
    ctx->pc = 0x7F1A9D88u;
    // 7F1A9D88: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A9D8C:
    ctx->pc = 0x7F1A9D8Cu;
    // 7F1A9D8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9D90:
    ctx->pc = 0x7F1A9D90u;
    ctx->downcount -= 4;
    // 7F1A9D90: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1A9D94:
    ctx->pc = 0x7F1A9D94u;
    // 7F1A9D94: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A9D98:
    ctx->pc = 0x7F1A9D98u;
    // 7F1A9D98: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A9D9C:
    ctx->pc = 0x7F1A9D9Cu;
    // 7F1A9D9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1A9DA0:
    ctx->pc = 0x7F1A9DA0u;
    ctx->downcount -= 17;
    // 7F1A9DA0: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A9DA4:
    ctx->pc = 0x7F1A9DA4u;
    // 7F1A9DA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A9DA8:
    ctx->pc = 0x7F1A9DA8u;
    // 7F1A9DA8: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9DAC:
    ctx->pc = 0x7F1A9DACu;
    // 7F1A9DAC: stmw     r27, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A9DB0:
    ctx->pc = 0x7F1A9DB0u;
    // 7F1A9DB0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A9DB4:
    ctx->pc = 0x7F1A9DB4u;
    // 7F1A9DB4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1A9DB8:
    ctx->pc = 0x7F1A9DB8u;
    // 7F1A9DB8: addi    r29, r28, 52
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(52);

label_7F1A9DBC:
    ctx->downcount -= 1;
    // 7F1A9DBC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A9DC0:
    ctx->pc = 0x7F1A9DC0u;
    ctx->downcount -= 3;
    // 7F1A9DC0: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9DC4:
    // 7F1A9DC4: cmpwi   r3, 0
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

label_7F1A9DC8:
    // 7F1A9DC8: bc    4, 1, 0x7F1A9E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9E70;
        }
    }

label_7F1A9DCC:
    ctx->downcount -= 5;
    // 7F1A9DCC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1A9DD0:
    ctx->pc = 0x7F1A9DD0u;
    // 7F1A9DD0: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9DD4:
    ctx->pc = 0x7F1A9DD4u;
    // 7F1A9DD4: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9DD8:
    // 7F1A9DD8: cmpwi   r3, 0
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

label_7F1A9DDC:
    // 7F1A9DDC: bc    12, 1, 0x7F1A9E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A9E04;
        }
    }

label_7F1A9DE0:
    ctx->downcount -= 8;
    // 7F1A9DE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9DE4:
    ctx->pc = 0x7F1A9DE4u;
    // 7F1A9DE4: lwz     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A9DE8:
    // 7F1A9DE8: addi    r5, r4, 6424
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6424);

label_7F1A9DEC:
    ctx->pc = 0x7F1A9DECu;
    // 7F1A9DEC: lwz     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9DF0:
    ctx->pc = 0x7F1A9DF0u;
    // 7F1A9DF0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9DF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9DF4:
    // 7F1A9DF4: li      r5, 196
    ctx->gpr[5] = (u32)(s32)(196);

label_7F1A9DF8:
    ctx->pc = 0x7F1A9DF8u;
    // 7F1A9DF8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9DF8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1A9DFC:
    // 7F1A9DFC: bl      0x7F1A55B8
    {
            ctx->lr = 0x7F1A9E00u;
            ctx->pc = 0x7F1A55B8u;
            return;
    }

label_7F1A9E00:
    ctx->downcount -= 1;
    // 7F1A9E00: b       0x7F1AA198
    {
            goto label_7F1AA198;
    }

label_7F1A9E04:
    ctx->downcount -= 43;
    // 7F1A9E04: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1A9E08:
    ctx->pc = 0x7F1A9E08u;
    // 7F1A9E08: lwz     r0, 1672(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9E0C:
    // 7F1A9E0C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A9E10:
    ctx->pc = 0x7F1A9E10u;
    // 7F1A9E10: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9E14:
    // 7F1A9E14: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9E18:
    // 7F1A9E18: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A9E1C:
    ctx->pc = 0x7F1A9E1Cu;
    // 7F1A9E1C: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9E20:
    ctx->pc = 0x7F1A9E20u;
    // 7F1A9E20: lfd     f2, 6400(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6400);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9E24:
    ctx->pc = 0x7F1A9E24u;
    // 7F1A9E24: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9E28:
    ctx->pc = 0x7F1A9E28u;
    // 7F1A9E28: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9E2C:
    ctx->pc = 0x7F1A9E2Cu;
    // 7F1A9E2C: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E2Cu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A9E30:
    ctx->pc = 0x7F1A9E30u;
    // 7F1A9E30: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A9E34:
    ctx->pc = 0x7F1A9E34u;
    // 7F1A9E34: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9E38:
    // 7F1A9E38: xoris   r3, r6, 0x8000
    ctx->gpr[3] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A9E3C:
    ctx->pc = 0x7F1A9E3Cu;
    // 7F1A9E3C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9E40:
    ctx->pc = 0x7F1A9E40u;
    // 7F1A9E40: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9E44:
    ctx->pc = 0x7F1A9E44u;
    // 7F1A9E44: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E44u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A9E48:
    ctx->pc = 0x7F1A9E48u;
    // 7F1A9E48: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9E4C:
    ctx->pc = 0x7F1A9E4Cu;
    // 7F1A9E4C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E4Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A9E50:
    ctx->pc = 0x7F1A9E50u;
    // 7F1A9E50: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9E54:
    ctx->pc = 0x7F1A9E54u;
    // 7F1A9E54: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E54u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A9E58:
    ctx->pc = 0x7F1A9E58u;
    // 7F1A9E58: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E58u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A9E5C:
    ctx->pc = 0x7F1A9E5Cu;
    // 7F1A9E5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9E60:
    ctx->pc = 0x7F1A9E60u;
    // 7F1A9E60: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9E64:
    ctx->pc = 0x7F1A9E64u;
    // 7F1A9E64: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9E68:
    ctx->pc = 0x7F1A9E68u;
    // 7F1A9E68: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9E6C:
    // 7F1A9E6C: b       0x7F1AA198
    {
            goto label_7F1AA198;
    }

label_7F1A9E70:
    ctx->pc = 0x7F1A9E70u;
    ctx->downcount -= 2;
    // 7F1A9E70: lwz     r27, 1668(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1668);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1A9E74:
    // 7F1A9E74: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1A9E78u;
            goto label_7F1AA1C8;
    }

label_7F1A9E78:
    ctx->pc = 0x7F1A9E78u;
    ctx->downcount -= 22;
    // 7F1A9E78: lwz     r4, 1672(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1672);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9E7C:
    // 7F1A9E7C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A9E80:
    // 7F1A9E80: xoris   r0, r27, 0x8000
    ctx->gpr[0] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1A9E84:
    // 7F1A9E84: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9E88:
    // 7F1A9E88: subf   r4, r27, r4
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1A9E8C:
    ctx->pc = 0x7F1A9E8Cu;
    // 7F1A9E8C: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9E90:
    // 7F1A9E90: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1A9E94:
    ctx->pc = 0x7F1A9E94u;
    // 7F1A9E94: lfd     f3, 6400(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6400);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9E98:
    ctx->pc = 0x7F1A9E98u;
    // 7F1A9E98: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9E9C:
    ctx->pc = 0x7F1A9E9Cu;
    // 7F1A9E9C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9EA0:
    ctx->pc = 0x7F1A9EA0u;
    // 7F1A9EA0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9EA4:
    ctx->pc = 0x7F1A9EA4u;
    // 7F1A9EA4: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EA4u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1A9EA8:
    ctx->pc = 0x7F1A9EA8u;
    // 7F1A9EA8: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9EAC:
    ctx->pc = 0x7F1A9EACu;
    // 7F1A9EAC: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9EB0:
    ctx->pc = 0x7F1A9EB0u;
    // 7F1A9EB0: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EB0u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1A9EB4:
    ctx->pc = 0x7F1A9EB4u;
    // 7F1A9EB4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EB4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A9EB8:
    ctx->pc = 0x7F1A9EB8u;
    // 7F1A9EB8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EB8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9EBC:
    ctx->pc = 0x7F1A9EBCu;
    // 7F1A9EBC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9EC0:
    ctx->pc = 0x7F1A9EC0u;
    // 7F1A9EC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9EC4:
    ctx->pc = 0x7F1A9EC4u;
    // 7F1A9EC4: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9EC8:
    ctx->pc = 0x7F1A9EC8u;
    // 7F1A9EC8: lwz     r27, 1676(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1676);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1A9ECC:
    // 7F1A9ECC: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1A9ED0u;
            goto label_7F1AA1C8;
    }

label_7F1A9ED0:
    ctx->pc = 0x7F1A9ED0u;
    ctx->downcount -= 22;
    // 7F1A9ED0: lwz     r4, 1680(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1680);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9ED4:
    // 7F1A9ED4: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A9ED8:
    // 7F1A9ED8: xoris   r0, r27, 0x8000
    ctx->gpr[0] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1A9EDC:
    // 7F1A9EDC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9EE0:
    // 7F1A9EE0: subf   r4, r27, r4
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1A9EE4:
    ctx->pc = 0x7F1A9EE4u;
    // 7F1A9EE4: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9EE8:
    // 7F1A9EE8: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1A9EEC:
    ctx->pc = 0x7F1A9EECu;
    // 7F1A9EEC: lfd     f3, 6400(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6400);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9EF0:
    ctx->pc = 0x7F1A9EF0u;
    // 7F1A9EF0: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9EF4:
    ctx->pc = 0x7F1A9EF4u;
    // 7F1A9EF4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9EF8:
    ctx->pc = 0x7F1A9EF8u;
    // 7F1A9EF8: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9EFC:
    ctx->pc = 0x7F1A9EFCu;
    // 7F1A9EFC: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9EFCu)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1A9F00:
    ctx->pc = 0x7F1A9F00u;
    // 7F1A9F00: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9F04:
    ctx->pc = 0x7F1A9F04u;
    // 7F1A9F04: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9F08:
    ctx->pc = 0x7F1A9F08u;
    // 7F1A9F08: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F08u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1A9F0C:
    ctx->pc = 0x7F1A9F0Cu;
    // 7F1A9F0C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F0Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A9F10:
    ctx->pc = 0x7F1A9F10u;
    // 7F1A9F10: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9F14:
    ctx->pc = 0x7F1A9F14u;
    // 7F1A9F14: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9F18:
    ctx->pc = 0x7F1A9F18u;
    // 7F1A9F18: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9F1C:
    ctx->pc = 0x7F1A9F1Cu;
    // 7F1A9F1C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9F20:
    ctx->pc = 0x7F1A9F20u;
    // 7F1A9F20: lwz     r27, 1684(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1684);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1A9F24:
    // 7F1A9F24: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1A9F28u;
            goto label_7F1AA1C8;
    }

label_7F1A9F28:
    ctx->pc = 0x7F1A9F28u;
    ctx->downcount -= 21;
    // 7F1A9F28: lwz     r4, 1688(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A9F2C:
    // 7F1A9F2C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A9F30:
    // 7F1A9F30: xoris   r0, r27, 0x8000
    ctx->gpr[0] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1A9F34:
    // 7F1A9F34: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A9F38:
    // 7F1A9F38: subf   r4, r27, r4
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1A9F3C:
    ctx->pc = 0x7F1A9F3Cu;
    // 7F1A9F3C: stw     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9F40:
    // 7F1A9F40: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1A9F44:
    ctx->pc = 0x7F1A9F44u;
    // 7F1A9F44: lfd     f3, 6400(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6400);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9F48:
    ctx->pc = 0x7F1A9F48u;
    // 7F1A9F48: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A9F4C:
    ctx->pc = 0x7F1A9F4Cu;
    // 7F1A9F4C: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9F50:
    ctx->pc = 0x7F1A9F50u;
    // 7F1A9F50: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9F54:
    ctx->pc = 0x7F1A9F54u;
    // 7F1A9F54: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F54u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1A9F58:
    ctx->pc = 0x7F1A9F58u;
    // 7F1A9F58: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A9F5C:
    ctx->pc = 0x7F1A9F5Cu;
    // 7F1A9F5C: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9F60:
    ctx->pc = 0x7F1A9F60u;
    // 7F1A9F60: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F60u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1A9F64:
    ctx->pc = 0x7F1A9F64u;
    // 7F1A9F64: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F64u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A9F68:
    ctx->pc = 0x7F1A9F68u;
    // 7F1A9F68: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F68u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9F6C:
    ctx->pc = 0x7F1A9F6Cu;
    // 7F1A9F6C: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9F70:
    ctx->pc = 0x7F1A9F70u;
    // 7F1A9F70: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9F74:
    ctx->pc = 0x7F1A9F74u;
    // 7F1A9F74: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9F78:
    // 7F1A9F78: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1A9F7Cu;
            goto label_7F1AA1C8;
    }

label_7F1A9F7C:
    ctx->downcount -= 8;
    // 7F1A9F7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9F80:
    ctx->pc = 0x7F1A9F80u;
    // 7F1A9F80: lfs     f0, 6408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9F84:
    ctx->pc = 0x7F1A9F84u;
    // 7F1A9F84: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F84u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1A9F88:
    ctx->pc = 0x7F1A9F88u;
    // 7F1A9F88: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F88u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9F8C:
    ctx->pc = 0x7F1A9F8Cu;
    // 7F1A9F8C: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9F90:
    ctx->pc = 0x7F1A9F90u;
    // 7F1A9F90: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9F94:
    ctx->pc = 0x7F1A9F94u;
    // 7F1A9F94: stw     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9F98:
    // 7F1A9F98: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1A9F9Cu;
            goto label_7F1AA1C8;
    }

label_7F1A9F9C:
    ctx->downcount -= 33;
    // 7F1A9F9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9FA0:
    // 7F1A9FA0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A9FA4:
    // 7F1A9FA4: addi    r4, r3, 6420
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6420);

label_7F1A9FA8:
    ctx->pc = 0x7F1A9FA8u;
    // 7F1A9FA8: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9FAC:
    ctx->pc = 0x7F1A9FACu;
    // 7F1A9FAC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9FB0:
    // 7F1A9FB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9FB4:
    // 7F1A9FB4: addi    r5, r3, 6400
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6400);

label_7F1A9FB8:
    ctx->pc = 0x7F1A9FB8u;
    // 7F1A9FB8: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9FBC:
    ctx->pc = 0x7F1A9FBCu;
    // 7F1A9FBC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FBCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1A9FC0:
    // 7F1A9FC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A9FC4:
    ctx->pc = 0x7F1A9FC4u;
    // 7F1A9FC4: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9FC8:
    // 7F1A9FC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A9FCC:
    ctx->pc = 0x7F1A9FCCu;
    // 7F1A9FCC: lfs     f1, 6392(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A9FD0:
    ctx->pc = 0x7F1A9FD0u;
    // 7F1A9FD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A9FD4:
    ctx->pc = 0x7F1A9FD4u;
    // 7F1A9FD4: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A9FD8:
    ctx->pc = 0x7F1A9FD8u;
    // 7F1A9FD8: lfs     f0, 6428(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A9FDC:
    ctx->pc = 0x7F1A9FDCu;
    // 7F1A9FDC: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9FE0:
    ctx->pc = 0x7F1A9FE0u;
    // 7F1A9FE0: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9FE4:
    ctx->pc = 0x7F1A9FE4u;
    // 7F1A9FE4: lwz     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A9FE8:
    // 7F1A9FE8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A9FEC:
    ctx->pc = 0x7F1A9FECu;
    // 7F1A9FEC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A9FF0:
    ctx->pc = 0x7F1A9FF0u;
    // 7F1A9FF0: lfd     f2, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A9FF4:
    ctx->pc = 0x7F1A9FF4u;
    // 7F1A9FF4: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FF4u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1A9FF8:
    ctx->pc = 0x7F1A9FF8u;
    // 7F1A9FF8: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A9FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A9FFC:
    ctx->pc = 0x7F1A9FFCu;
    // 7F1A9FFC: lwz     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA000:
    // 7F1AA000: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AA004:
    ctx->pc = 0x7F1AA004u;
    // 7F1AA004: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AA008:
    ctx->pc = 0x7F1AA008u;
    // 7F1AA008: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA00C:
    ctx->pc = 0x7F1AA00Cu;
    // 7F1AA00C: lfd     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA00Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA010:
    ctx->pc = 0x7F1AA010u;
    // 7F1AA010: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA014:
    ctx->pc = 0x7F1AA014u;
    // 7F1AA014: fsubs   f0, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AA014u)) return;
    ppc_fsubs(ctx, 0, 1, 3);

label_7F1AA018:
    ctx->pc = 0x7F1AA018u;
    // 7F1AA018: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA018u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA01C:
    // 7F1AA01C: bl      0x7F1AA1C8
    {
            ctx->lr = 0x7F1AA020u;
            goto label_7F1AA1C8;
    }

label_7F1AA020:
    ctx->downcount -= 11;
    // 7F1AA020: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA024:
    // 7F1AA024: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA028:
    // 7F1AA028: addi    r5, r4, 6432
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6432);

label_7F1AA02C:
    // 7F1AA02C: addi    r4, r29, 24
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(24);

label_7F1AA030:
    ctx->pc = 0x7F1AA030u;
    // 7F1AA030: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA030u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AA034:
    ctx->pc = 0x7F1AA034u;
    // 7F1AA034: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AA034u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AA038:
    ctx->pc = 0x7F1AA038u;
    // 7F1AA038: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AA038u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AA03C:
    ctx->pc = 0x7F1AA03Cu;
    // 7F1AA03C: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA03Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AA040:
    ctx->pc = 0x7F1AA040u;
    // 7F1AA040: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA044:
    ctx->pc = 0x7F1AA044u;
    // 7F1AA044: sth     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AA048:
    // 7F1AA048: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1AA04Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1AA04C:
    ctx->pc = 0x7F1AA04Cu;
    ctx->downcount -= 21;
    // 7F1AA04C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA050:
    // 7F1AA050: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AA054:
    // 7F1AA054: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA058:
    ctx->pc = 0x7F1AA058u;
    // 7F1AA058: stw     r0, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA05C:
    // 7F1AA05C: neg  r5, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[5] = (~a) + 1u;
    }

label_7F1AA060:
    // 7F1AA060: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA064:
    // 7F1AA064: xoris   r6, r5, 0x8000
    ctx->gpr[6] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1AA068:
    // 7F1AA068: addi    r5, r4, 6400
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6400);

label_7F1AA06C:
    ctx->pc = 0x7F1AA06Cu;
    // 7F1AA06C: stw     r6, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA070:
    // 7F1AA070: addi    r4, r29, 32
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(32);

label_7F1AA074:
    ctx->pc = 0x7F1AA074u;
    // 7F1AA074: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA074u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA078:
    // 7F1AA078: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AA07C:
    ctx->pc = 0x7F1AA07Cu;
    // 7F1AA07C: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA07Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA080:
    ctx->pc = 0x7F1AA080u;
    // 7F1AA080: stw     r6, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA084:
    ctx->pc = 0x7F1AA084u;
    // 7F1AA084: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA084u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AA088:
    ctx->pc = 0x7F1AA088u;
    // 7F1AA088: stw     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA08C:
    ctx->pc = 0x7F1AA08Cu;
    // 7F1AA08C: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA08Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA090:
    ctx->pc = 0x7F1AA090u;
    // 7F1AA090: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AA094:
    ctx->pc = 0x7F1AA094u;
    // 7F1AA094: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA094u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AA098:
    ctx->pc = 0x7F1AA098u;
    // 7F1AA098: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA09C:
    // 7F1AA09C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1AA0A0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1AA0A0:
    ctx->pc = 0x7F1AA0A0u;
    ctx->downcount -= 22;
    // 7F1AA0A0: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA0A4:
    // 7F1AA0A4: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F1AA0A8:
    // 7F1AA0A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA0AC:
    ctx->pc = 0x7F1AA0ACu;
    // 7F1AA0AC: stw     r6, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA0B0:
    // 7F1AA0B0: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F1AA0B4:
    // 7F1AA0B4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AA0B8:
    // 7F1AA0B8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AA0BC:
    ctx->pc = 0x7F1AA0BCu;
    // 7F1AA0BC: stw     r3, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA0C0:
    // 7F1AA0C0: addi    r5, r4, 6400
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6400);

label_7F1AA0C4:
    // 7F1AA0C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA0C8:
    ctx->pc = 0x7F1AA0C8u;
    // 7F1AA0C8: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA0CC:
    // 7F1AA0CC: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1AA0D0:
    ctx->pc = 0x7F1AA0D0u;
    // 7F1AA0D0: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA0D4:
    // 7F1AA0D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AA0D8:
    ctx->pc = 0x7F1AA0D8u;
    // 7F1AA0D8: stw     r6, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA0DC:
    ctx->pc = 0x7F1AA0DCu;
    // 7F1AA0DC: lfd     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA0E0:
    ctx->pc = 0x7F1AA0E0u;
    // 7F1AA0E0: lfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA0E4:
    ctx->pc = 0x7F1AA0E4u;
    // 7F1AA0E4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0E4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AA0E8:
    ctx->pc = 0x7F1AA0E8u;
    // 7F1AA0E8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0E8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AA0EC:
    ctx->pc = 0x7F1AA0ECu;
    // 7F1AA0EC: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AA0F0:
    ctx->pc = 0x7F1AA0F0u;
    // 7F1AA0F0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA0F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA0F4:
    // 7F1AA0F4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1AA0F8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1AA0F8:
    ctx->pc = 0x7F1AA0F8u;
    ctx->downcount -= 19;
    // 7F1AA0F8: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA0FC:
    // 7F1AA0FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AA100:
    // 7F1AA100: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA104:
    ctx->pc = 0x7F1AA104u;
    // 7F1AA104: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA108:
    // 7F1AA108: xoris   r6, r3, 0x8000
    ctx->gpr[6] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AA10C:
    ctx->pc = 0x7F1AA10Cu;
    // 7F1AA10C: lfd     f2, 6400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA10Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6400);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA110:
    ctx->pc = 0x7F1AA110u;
    // 7F1AA110: stw     r6, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA114:
    // 7F1AA114: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA118:
    // 7F1AA118: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F1AA11C:
    // 7F1AA11C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AA120:
    ctx->pc = 0x7F1AA120u;
    // 7F1AA120: lfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA124:
    ctx->pc = 0x7F1AA124u;
    // 7F1AA124: stw     r6, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA128:
    ctx->pc = 0x7F1AA128u;
    // 7F1AA128: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA128u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AA12C:
    ctx->pc = 0x7F1AA12Cu;
    // 7F1AA12C: stw     r0, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA130:
    ctx->pc = 0x7F1AA130u;
    // 7F1AA130: lfd     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA134:
    ctx->pc = 0x7F1AA134u;
    // 7F1AA134: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AA138:
    ctx->pc = 0x7F1AA138u;
    // 7F1AA138: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA138u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AA13C:
    ctx->pc = 0x7F1AA13Cu;
    // 7F1AA13C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA140:
    // 7F1AA140: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1AA144u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1AA144:
    ctx->pc = 0x7F1AA144u;
    ctx->downcount -= 21;
    // 7F1AA144: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA148:
    // 7F1AA148: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F1AA14C:
    // 7F1AA14C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA150:
    ctx->pc = 0x7F1AA150u;
    // 7F1AA150: stw     r6, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA154:
    // 7F1AA154: neg  r3, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F1AA158:
    // 7F1AA158: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AA15C:
    // 7F1AA15C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AA160:
    ctx->pc = 0x7F1AA160u;
    // 7F1AA160: lfd     f2, 6400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA160u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6400);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA164:
    ctx->pc = 0x7F1AA164u;
    // 7F1AA164: stw     r3, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA168:
    // 7F1AA168: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA16C:
    // 7F1AA16C: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F1AA170:
    // 7F1AA170: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1AA174:
    ctx->pc = 0x7F1AA174u;
    // 7F1AA174: lfd     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA178:
    ctx->pc = 0x7F1AA178u;
    // 7F1AA178: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA17C:
    ctx->pc = 0x7F1AA17Cu;
    // 7F1AA17C: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA17Cu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AA180:
    ctx->pc = 0x7F1AA180u;
    // 7F1AA180: stw     r6, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA184:
    ctx->pc = 0x7F1AA184u;
    // 7F1AA184: lfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA188:
    ctx->pc = 0x7F1AA188u;
    // 7F1AA188: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AA18C:
    ctx->pc = 0x7F1AA18Cu;
    // 7F1AA18C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA18Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AA190:
    ctx->pc = 0x7F1AA190u;
    // 7F1AA190: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AA194:
    // 7F1AA194: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1AA198u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1AA198:
    ctx->downcount -= 4;
    // 7F1AA198: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1AA19C:
    // 7F1AA19C: addi    r29, r29, 96
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(96);

label_7F1AA1A0:
    // 7F1AA1A0: cmpwi   r30, 5
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

label_7F1AA1A4:
    // 7F1AA1A4: bc    12, 0, 0x7F1A9DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9DC0u;
                return;
            }
            goto label_7F1A9DC0;
        }
    }

label_7F1AA1A8:
    ctx->downcount -= 3;
    // 7F1AA1A8: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1AA1AC:
    // 7F1AA1AC: cmpwi   r31, 3
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

label_7F1AA1B0:
    // 7F1AA1B0: bc    12, 0, 0x7F1A9DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A9DBCu;
                return;
            }
            goto label_7F1A9DBC;
        }
    }

label_7F1AA1B4:
    ctx->pc = 0x7F1AA1B4u;
    ctx->downcount -= 16;
    // 7F1AA1B4: lmw     r27, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AA1B8:
    ctx->pc = 0x7F1AA1B8u;
    // 7F1AA1B8: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA1BC:
    ctx->pc = 0x7F1AA1BCu;
    // 7F1AA1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA1C0:
    ctx->pc = 0x7F1AA1C0u;
    // 7F1AA1C0: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_7F1AA1C4:
    ctx->pc = 0x7F1AA1C4u;
    // 7F1AA1C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA1C8:
    ctx->pc = 0x7F1AA1C8u;
    ctx->downcount -= 4;
    // 7F1AA1C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA1CC:
    ctx->pc = 0x7F1AA1CCu;
    // 7F1AA1CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA1D0:
    ctx->pc = 0x7F1AA1D0u;
    // 7F1AA1D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA1D4:
    ctx->pc = 0x7F1AA1D4u;
    // 7F1AA1D4: bl      0x7F1AA210
    {
            ctx->lr = 0x7F1AA1D8u;
            goto label_7F1AA210;
    }

label_7F1AA1D8:
    ctx->pc = 0x7F1AA1D8u;
    ctx->downcount -= 31;
    // 7F1AA1D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AA1DC:
    ctx->pc = 0x7F1AA1DCu;
    // 7F1AA1DC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA1E0:
    ctx->pc = 0x7F1AA1E0u;
    // 7F1AA1E0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA1E4:
    ctx->pc = 0x7F1AA1E4u;
    // 7F1AA1E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AA1E8:
    ctx->pc = 0x7F1AA1E8u;
    // 7F1AA1E8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA1EC:
    ctx->pc = 0x7F1AA1ECu;
    // 7F1AA1EC: lfd     f2, 6440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA1ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6440);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA1F0:
    ctx->pc = 0x7F1AA1F0u;
    // 7F1AA1F0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA1F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AA1F4:
    ctx->pc = 0x7F1AA1F4u;
    // 7F1AA1F4: lfs     f0, 6436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA1F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AA1F8:
    ctx->pc = 0x7F1AA1F8u;
    // 7F1AA1F8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA1F8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AA1FC:
    ctx->pc = 0x7F1AA1FCu;
    // 7F1AA1FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA200:
    ctx->pc = 0x7F1AA200u;
    // 7F1AA200: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AA200u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1AA204:
    ctx->pc = 0x7F1AA204u;
    // 7F1AA204: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA208:
    ctx->pc = 0x7F1AA208u;
    // 7F1AA208: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA20C:
    ctx->pc = 0x7F1AA20Cu;
    // 7F1AA20C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA210:
    ctx->pc = 0x7F1AA210u;
    ctx->downcount -= 13;
    // 7F1AA210: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1AA214:
    ctx->pc = 0x7F1AA214u;
    // 7F1AA214: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1AA218:
    ctx->pc = 0x7F1AA218u;
    // 7F1AA218: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1AA21C:
    ctx->pc = 0x7F1AA21Cu;
    // 7F1AA21C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AA220:
    ctx->pc = 0x7F1AA220u;
    // 7F1AA220: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1AA224:
    ctx->pc = 0x7F1AA224u;
    // 7F1AA224: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1AA228:
    ctx->pc = 0x7F1AA228u;
    // 7F1AA228: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AA22C:
    ctx->pc = 0x7F1AA22Cu;
    // 7F1AA22C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA230:
    ctx->pc = 0x7F1AA230u;
    // 7F1AA230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA234:
    ctx->pc = 0x7F1AA234u;
    ctx->downcount -= 7;
    // 7F1AA234: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA238:
    ctx->pc = 0x7F1AA238u;
    // 7F1AA238: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA23C:
    ctx->pc = 0x7F1AA23Cu;
    // 7F1AA23C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA240:
    ctx->pc = 0x7F1AA240u;
    // 7F1AA240: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AA244:
    ctx->pc = 0x7F1AA244u;
    // 7F1AA244: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA248:
    ctx->pc = 0x7F1AA248u;
    // 7F1AA248: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA24C:
    ctx->pc = 0x7F1AA24Cu;
    // 7F1AA24C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1AA250u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1AA250:
    ctx->pc = 0x7F1AA250u;
    ctx->downcount -= 2;
    // 7F1AA250: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA254:
    ctx->pc = 0x7F1AA254u;
    // 7F1AA254: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1AA258u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1AA258:
    ctx->pc = 0x7F1AA258u;
    ctx->downcount -= 6;
    // 7F1AA258: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA25C:
    ctx->pc = 0x7F1AA25Cu;
    // 7F1AA25C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AA260:
    ctx->pc = 0x7F1AA260u;
    // 7F1AA260: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA264:
    ctx->pc = 0x7F1AA264u;
    // 7F1AA264: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA268:
    ctx->pc = 0x7F1AA268u;
    // 7F1AA268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA26C:
    ctx->pc = 0x7F1AA26Cu;
    ctx->downcount -= 20;
    // 7F1AA26C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA270:
    ctx->pc = 0x7F1AA270u;
    // 7F1AA270: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA274:
    ctx->pc = 0x7F1AA274u;
    // 7F1AA274: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA278:
    ctx->pc = 0x7F1AA278u;
    // 7F1AA278: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AA27C:
    ctx->pc = 0x7F1AA27Cu;
    // 7F1AA27C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA280:
    ctx->pc = 0x7F1AA280u;
    // 7F1AA280: lis     r3, 186
    ctx->gpr[3] = ((u32)(s32)(186) << 16);

label_7F1AA284:
    ctx->pc = 0x7F1AA284u;
    // 7F1AA284: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AA288:
    ctx->pc = 0x7F1AA288u;
    // 7F1AA288: addi    r3, r3, 31003
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31003);

label_7F1AA28C:
    ctx->pc = 0x7F1AA28Cu;
    // 7F1AA28C: addi    r4, r30, 1492
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1492);

label_7F1AA290:
    ctx->pc = 0x7F1AA290u;
    // 7F1AA290: bl      0x7F3B65FC
    {
            ctx->lr = 0x7F1AA294u;
            ctx->pc = 0x7F3B65FCu;
            return;
    }

label_7F1AA294:
    ctx->pc = 0x7F1AA294u;
    ctx->downcount -= 5;
    // 7F1AA294: stw     r3, 1648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA298:
    ctx->pc = 0x7F1AA298u;
    // 7F1AA298: lis     r3, 186
    ctx->gpr[3] = ((u32)(s32)(186) << 16);

label_7F1AA29C:
    ctx->pc = 0x7F1AA29Cu;
    // 7F1AA29C: addi    r3, r3, 31003
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31003);

label_7F1AA2A0:
    ctx->pc = 0x7F1AA2A0u;
    // 7F1AA2A0: addi    r4, r30, 1544
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1544);

label_7F1AA2A4:
    ctx->pc = 0x7F1AA2A4u;
    // 7F1AA2A4: bl      0x7F3B65FC
    {
            ctx->lr = 0x7F1AA2A8u;
            ctx->pc = 0x7F3B65FCu;
            return;
    }

label_7F1AA2A8:
    ctx->pc = 0x7F1AA2A8u;
    ctx->downcount -= 5;
    // 7F1AA2A8: stw     r3, 1648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA2AC:
    ctx->pc = 0x7F1AA2ACu;
    // 7F1AA2AC: lis     r3, 186
    ctx->gpr[3] = ((u32)(s32)(186) << 16);

label_7F1AA2B0:
    ctx->pc = 0x7F1AA2B0u;
    // 7F1AA2B0: addi    r3, r3, 31003
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31003);

label_7F1AA2B4:
    ctx->pc = 0x7F1AA2B4u;
    // 7F1AA2B4: addi    r4, r30, 1596
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1596);

label_7F1AA2B8:
    ctx->pc = 0x7F1AA2B8u;
    // 7F1AA2B8: bl      0x7F3B65FC
    {
            ctx->lr = 0x7F1AA2BCu;
            ctx->pc = 0x7F3B65FCu;
            return;
    }

label_7F1AA2BC:
    ctx->pc = 0x7F1AA2BCu;
    ctx->downcount -= 7;
    // 7F1AA2BC: stw     r3, 1648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA2C0:
    ctx->pc = 0x7F1AA2C0u;
    // 7F1AA2C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AA2C4:
    ctx->pc = 0x7F1AA2C4u;
    // 7F1AA2C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1AA2C8:
    ctx->pc = 0x7F1AA2C8u;
    // 7F1AA2C8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1AA2CC:
    ctx->pc = 0x7F1AA2CCu;
    // 7F1AA2CC: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA2D0:
    ctx->pc = 0x7F1AA2D0u;
    // 7F1AA2D0: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F1AA2D4:
    ctx->pc = 0x7F1AA2D4u;
    // 7F1AA2D4: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1AA2D8u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1AA2D8:
    ctx->pc = 0x7F1AA2D8u;
    ctx->downcount -= 4;
    // 7F1AA2D8: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA2DC:
    ctx->pc = 0x7F1AA2DCu;
    // 7F1AA2DC: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA2E0:
    ctx->pc = 0x7F1AA2E0u;
    // 7F1AA2E0: cmplwi  r0, 0x0000
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

label_7F1AA2E4:
    ctx->pc = 0x7F1AA2E4u;
    // 7F1AA2E4: bc    4, 2, 0x7F1AA2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA2F0;
        }
    }

label_7F1AA2E8:
    ctx->pc = 0x7F1AA2E8u;
    ctx->downcount -= 2;
    // 7F1AA2E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1AA2EC:
    ctx->pc = 0x7F1AA2ECu;
    // 7F1AA2EC: b       0x7F1AA394
    {
            goto label_7F1AA394;
    }

label_7F1AA2F0:
    ctx->pc = 0x7F1AA2F0u;
    ctx->downcount -= 2;
    // 7F1AA2F0: cmpwi   r31, 0
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

label_7F1AA2F4:
    ctx->pc = 0x7F1AA2F4u;
    // 7F1AA2F4: bc    12, 2, 0x7F1AA318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA318;
        }
    }

label_7F1AA2F8:
    ctx->pc = 0x7F1AA2F8u;
    ctx->downcount -= 3;
    // 7F1AA2F8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1AA2FC:
    ctx->pc = 0x7F1AA2FCu;
    // 7F1AA2FC: addi    r3, r3, -6992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6992);

label_7F1AA300:
    ctx->pc = 0x7F1AA300u;
    // 7F1AA300: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1AA304u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1AA304:
    ctx->pc = 0x7F1AA304u;
    ctx->downcount -= 2;
    // 7F1AA304: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1AA308:
    ctx->pc = 0x7F1AA308u;
    // 7F1AA308: bl      0x7F1A5D44
    {
            ctx->lr = 0x7F1AA30Cu;
            ctx->pc = 0x7F1A5D44u;
            return;
    }

label_7F1AA30C:
    ctx->pc = 0x7F1AA30Cu;
    ctx->downcount -= 3;
    // 7F1AA30C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA310:
    ctx->pc = 0x7F1AA310u;
    // 7F1AA310: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AA314:
    ctx->pc = 0x7F1AA314u;
    // 7F1AA314: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1AA318u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1AA318:
    ctx->pc = 0x7F1AA318u;
    ctx->downcount -= 6;
    // 7F1AA318: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA31C:
    ctx->pc = 0x7F1AA31Cu;
    // 7F1AA31C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA320:
    ctx->pc = 0x7F1AA320u;
    // 7F1AA320: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F1AA324:
    ctx->pc = 0x7F1AA324u;
    // 7F1AA324: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA328:
    ctx->pc = 0x7F1AA328u;
    // 7F1AA328: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA32C:
    ctx->pc = 0x7F1AA32Cu;
    // 7F1AA32C: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1AA330u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1AA330:
    ctx->pc = 0x7F1AA330u;
    ctx->downcount -= 5;
    // 7F1AA330: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AA334:
    ctx->pc = 0x7F1AA334u;
    // 7F1AA334: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA338:
    ctx->pc = 0x7F1AA338u;
    // 7F1AA338: addi    r4, r4, -25856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25856);

label_7F1AA33C:
    ctx->pc = 0x7F1AA33Cu;
    // 7F1AA33C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AA340:
    ctx->pc = 0x7F1AA340u;
    // 7F1AA340: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1AA344u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1AA344:
    ctx->pc = 0x7F1AA344u;
    ctx->downcount -= 4;
    // 7F1AA344: addi    r5, r30, 52
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1AA348:
    ctx->pc = 0x7F1AA348u;
    // 7F1AA348: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1AA34C:
    ctx->pc = 0x7F1AA34Cu;
    // 7F1AA34C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA350:
    ctx->pc = 0x7F1AA350u;
    // 7F1AA350: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F1AA354:
    ctx->pc = 0x7F1AA354u;
    ctx->downcount -= 2;
    // 7F1AA354: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AA358:
    loop_7F1AA358(ctx);
    if (ctx->pc == 0x7F1AA384u) goto label_7F1AA384;
    return;
label_7F1AA35C:
    ctx->pc = 0x7F1AA35Cu;
    // 7F1AA35C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA360:
    ctx->pc = 0x7F1AA360u;
    // 7F1AA360: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA364:
    ctx->pc = 0x7F1AA364u;
    // 7F1AA364: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA368:
    ctx->pc = 0x7F1AA368u;
    // 7F1AA368: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA36C:
    ctx->pc = 0x7F1AA36Cu;
    // 7F1AA36C: stw     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA370:
    ctx->pc = 0x7F1AA370u;
    // 7F1AA370: sth     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AA374:
    ctx->pc = 0x7F1AA374u;
    // 7F1AA374: sth     r3, 26(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AA378:
    ctx->pc = 0x7F1AA378u;
    // 7F1AA378: sth     r3, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AA37C:
    // 7F1AA37C: addi    r5, r5, 96
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(96);

label_7F1AA380:
    // 7F1AA380: bc    16, 0, 0x7F1AA358
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA358u;
                return;
            }
            goto label_7F1AA358;
        }
    }

label_7F1AA384:
    ctx->downcount -= 3;
    // 7F1AA384: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F1AA388:
    // 7F1AA388: cmpwi   r4, 3
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

label_7F1AA38C:
    // 7F1AA38C: bc    12, 0, 0x7F1AA354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA354u;
                return;
            }
            goto label_7F1AA354;
        }
    }

label_7F1AA390:
    ctx->pc = 0x7F1AA390u;
    ctx->downcount -= 1;
    // 7F1AA390: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA394:
    ctx->pc = 0x7F1AA394u;
    ctx->downcount -= 16;
    // 7F1AA394: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AA398:
    ctx->pc = 0x7F1AA398u;
    // 7F1AA398: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA39C:
    ctx->pc = 0x7F1AA39Cu;
    // 7F1AA39C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA3A0:
    ctx->pc = 0x7F1AA3A0u;
    // 7F1AA3A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA3A4:
    ctx->pc = 0x7F1AA3A4u;
    // 7F1AA3A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA3A8:
    ctx->pc = 0x7F1AA3A8u;
    ctx->downcount -= 5;
    // 7F1AA3A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA3AC:
    ctx->pc = 0x7F1AA3ACu;
    // 7F1AA3AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA3B0:
    ctx->pc = 0x7F1AA3B0u;
    // 7F1AA3B0: cmpwi   r4, 1
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

label_7F1AA3B4:
    ctx->pc = 0x7F1AA3B4u;
    // 7F1AA3B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA3B8:
    ctx->pc = 0x7F1AA3B8u;
    // 7F1AA3B8: bc    12, 2, 0x7F1AA3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA3E0;
        }
    }

label_7F1AA3BC:
    ctx->pc = 0x7F1AA3BCu;
    ctx->downcount -= 1;
    // 7F1AA3BC: bc    4, 0, 0x7F1AA3F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA3F4;
        }
    }

label_7F1AA3C0:
    ctx->pc = 0x7F1AA3C0u;
    ctx->downcount -= 2;
    // 7F1AA3C0: cmpwi   r4, 0
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

label_7F1AA3C4:
    ctx->pc = 0x7F1AA3C4u;
    // 7F1AA3C4: bc    4, 0, 0x7F1AA3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA3CC;
        }
    }

label_7F1AA3C8:
    ctx->pc = 0x7F1AA3C8u;
    ctx->downcount -= 1;
    // 7F1AA3C8: b       0x7F1AA3F4
    {
            goto label_7F1AA3F4;
    }

label_7F1AA3CC:
    ctx->pc = 0x7F1AA3CCu;
    ctx->downcount -= 5;
    // 7F1AA3CC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA3D0:
    ctx->pc = 0x7F1AA3D0u;
    // 7F1AA3D0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA3D4:
    ctx->pc = 0x7F1AA3D4u;
    // 7F1AA3D4: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F1AA3D8:
    ctx->pc = 0x7F1AA3D8u;
    // 7F1AA3D8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA3DC:
    ctx->pc = 0x7F1AA3DCu;
    // 7F1AA3DC: b       0x7F1AA3FC
    {
            goto label_7F1AA3FC;
    }

label_7F1AA3E0:
    ctx->pc = 0x7F1AA3E0u;
    ctx->downcount -= 5;
    // 7F1AA3E0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA3E4:
    ctx->pc = 0x7F1AA3E4u;
    // 7F1AA3E4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA3E8:
    ctx->pc = 0x7F1AA3E8u;
    // 7F1AA3E8: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1AA3EC:
    ctx->pc = 0x7F1AA3ECu;
    // 7F1AA3EC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA3F0:
    ctx->pc = 0x7F1AA3F0u;
    // 7F1AA3F0: b       0x7F1AA3FC
    {
            goto label_7F1AA3FC;
    }

label_7F1AA3F4:
    ctx->pc = 0x7F1AA3F4u;
    ctx->downcount -= 1;
    // 7F1AA3F4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AA3F8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AA3F8:
    ctx->pc = 0x7F1AA3F8u;
    ctx->downcount -= 1;
    // 7F1AA3F8: b       0x7F1AA400
    {
            goto label_7F1AA400;
    }

label_7F1AA3FC:
    ctx->pc = 0x7F1AA3FCu;
    ctx->downcount -= 1;
    // 7F1AA3FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA400:
    ctx->pc = 0x7F1AA400u;
    ctx->downcount -= 5;
    // 7F1AA400: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA404:
    ctx->pc = 0x7F1AA404u;
    // 7F1AA404: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA408:
    ctx->pc = 0x7F1AA408u;
    // 7F1AA408: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA40C:
    ctx->pc = 0x7F1AA40Cu;
    // 7F1AA40C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA410:
    ctx->pc = 0x7F1AA410u;
    ctx->downcount -= 28;
    // 7F1AA410: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA414:
    ctx->pc = 0x7F1AA414u;
    // 7F1AA414: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA418:
    ctx->pc = 0x7F1AA418u;
    // 7F1AA418: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA41C:
    ctx->pc = 0x7F1AA41Cu;
    // 7F1AA41C: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AA420:
    ctx->pc = 0x7F1AA420u;
    // 7F1AA420: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA424:
    ctx->pc = 0x7F1AA424u;
    // 7F1AA424: or   r23, r4, r4
    {
        ctx->gpr[23] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AA428:
    ctx->pc = 0x7F1AA428u;
    // 7F1AA428: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AA42C:
    ctx->pc = 0x7F1AA42Cu;
    // 7F1AA42C: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1AA430:
    ctx->pc = 0x7F1AA430u;
    // 7F1AA430: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1AA434:
    ctx->pc = 0x7F1AA434u;
    // 7F1AA434: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1AA438:
    ctx->pc = 0x7F1AA438u;
    // 7F1AA438: or   r27, r8, r8
    {
        ctx->gpr[27] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1AA43C:
    ctx->pc = 0x7F1AA43Cu;
    // 7F1AA43C: or   r28, r9, r9
    {
        ctx->gpr[28] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F1AA440:
    ctx->pc = 0x7F1AA440u;
    // 7F1AA440: or   r29, r10, r10
    {
        ctx->gpr[29] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F1AA444:
    ctx->pc = 0x7F1AA444u;
    // 7F1AA444: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1AA448:
    ctx->pc = 0x7F1AA448u;
    // 7F1AA448: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1AA44C:
    ctx->pc = 0x7F1AA44Cu;
    // 7F1AA44C: li      r5, 1700
    ctx->gpr[5] = (u32)(s32)(1700);

label_7F1AA450:
    ctx->pc = 0x7F1AA450u;
    // 7F1AA450: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AA454:
    ctx->pc = 0x7F1AA454u;
    // 7F1AA454: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AA458u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AA458:
    ctx->pc = 0x7F1AA458u;
    ctx->downcount -= 2;
    // 7F1AA458: or.   r31, r3, r3
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

label_7F1AA45C:
    ctx->pc = 0x7F1AA45Cu;
    // 7F1AA45C: bc    12, 2, 0x7F1AA4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA4F8;
        }
    }

label_7F1AA460:
    ctx->pc = 0x7F1AA460u;
    ctx->downcount -= 5;
    // 7F1AA460: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AA464:
    ctx->pc = 0x7F1AA464u;
    // 7F1AA464: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AA468:
    ctx->pc = 0x7F1AA468u;
    // 7F1AA468: addi    r4, r4, -25184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25184);

label_7F1AA46C:
    ctx->pc = 0x7F1AA46Cu;
    // 7F1AA46C: addi    r5, r5, -24012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24012);

label_7F1AA470:
    ctx->pc = 0x7F1AA470u;
    // 7F1AA470: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AA474u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AA474:
    ctx->pc = 0x7F1AA474u;
    ctx->downcount -= 27;
    // 7F1AA474: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA478:
    ctx->pc = 0x7F1AA478u;
    // 7F1AA478: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1AA47C:
    ctx->pc = 0x7F1AA47Cu;
    // 7F1AA47C: addi    r6, r3, 32548
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1AA480:
    ctx->pc = 0x7F1AA480u;
    // 7F1AA480: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AA484:
    ctx->pc = 0x7F1AA484u;
    // 7F1AA484: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1AA488:
    ctx->pc = 0x7F1AA488u;
    // 7F1AA488: rlwinm r5, r30, 24, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[30], 24u) & 0x000000FFu;
    }

label_7F1AA48C:
    ctx->pc = 0x7F1AA48Cu;
    // 7F1AA48C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA490:
    ctx->pc = 0x7F1AA490u;
    // 7F1AA490: rlwinm r0, r30, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x000000FFu;
    }

label_7F1AA494:
    ctx->pc = 0x7F1AA494u;
    // 7F1AA494: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA498:
    ctx->pc = 0x7F1AA498u;
    // 7F1AA498: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1AA49C:
    ctx->pc = 0x7F1AA49Cu;
    // 7F1AA49C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AA4A0:
    ctx->pc = 0x7F1AA4A0u;
    // 7F1AA4A0: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AA4A4:
    ctx->pc = 0x7F1AA4A4u;
    // 7F1AA4A4: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AA4A8:
    ctx->pc = 0x7F1AA4A8u;
    // 7F1AA4A8: stw     r6, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA4AC:
    ctx->pc = 0x7F1AA4ACu;
    // 7F1AA4AC: stw     r22, 1660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1660);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F1AA4B0:
    ctx->pc = 0x7F1AA4B0u;
    // 7F1AA4B0: stw     r23, 1664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1664);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1AA4B4:
    ctx->pc = 0x7F1AA4B4u;
    // 7F1AA4B4: stw     r24, 1668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1668);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1AA4B8:
    ctx->pc = 0x7F1AA4B8u;
    // 7F1AA4B8: stw     r25, 1672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1672);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1AA4BC:
    ctx->pc = 0x7F1AA4BCu;
    // 7F1AA4BC: stw     r26, 1676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1676);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1AA4C0:
    ctx->pc = 0x7F1AA4C0u;
    // 7F1AA4C0: stw     r27, 1680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1680);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1AA4C4:
    ctx->pc = 0x7F1AA4C4u;
    // 7F1AA4C4: stw     r28, 1684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1684);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1AA4C8:
    ctx->pc = 0x7F1AA4C8u;
    // 7F1AA4C8: stw     r29, 1688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1688);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1AA4CC:
    ctx->pc = 0x7F1AA4CCu;
    // 7F1AA4CC: stw     r30, 1692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1692);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AA4D0:
    ctx->pc = 0x7F1AA4D0u;
    // 7F1AA4D0: stb     r30, 1696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1696);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F1AA4D4:
    ctx->pc = 0x7F1AA4D4u;
    // 7F1AA4D4: stb     r5, 1697(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1697);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1AA4D8:
    ctx->pc = 0x7F1AA4D8u;
    // 7F1AA4D8: stb     r0, 1698(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1698);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1AA4DC:
    ctx->pc = 0x7F1AA4DCu;
    // 7F1AA4DC: bl      0x7F1AA26C
    {
            ctx->lr = 0x7F1AA4E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA26Cu;
                return;
            }
            goto label_7F1AA26C;
    }

label_7F1AA4E0:
    ctx->pc = 0x7F1AA4E0u;
    ctx->downcount -= 2;
    // 7F1AA4E0: cmpwi   r3, 0
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

label_7F1AA4E4:
    ctx->pc = 0x7F1AA4E4u;
    // 7F1AA4E4: bc    4, 0, 0x7F1AA4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA4F8;
        }
    }

label_7F1AA4E8:
    ctx->pc = 0x7F1AA4E8u;
    ctx->downcount -= 2;
    // 7F1AA4E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA4EC:
    ctx->pc = 0x7F1AA4ECu;
    // 7F1AA4EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AA4F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AA4F0:
    ctx->pc = 0x7F1AA4F0u;
    ctx->downcount -= 2;
    // 7F1AA4F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA4F4:
    ctx->pc = 0x7F1AA4F4u;
    // 7F1AA4F4: b       0x7F1AA50C
    {
            goto label_7F1AA50C;
    }

label_7F1AA4F8:
    ctx->pc = 0x7F1AA4F8u;
    ctx->downcount -= 4;
    // 7F1AA4F8: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AA4FC:
    ctx->pc = 0x7F1AA4FCu;
    // 7F1AA4FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA500:
    ctx->pc = 0x7F1AA500u;
    // 7F1AA500: addi    r4, r4, -23640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23640);

label_7F1AA504:
    ctx->pc = 0x7F1AA504u;
    // 7F1AA504: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1AA508u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1AA508:
    ctx->pc = 0x7F1AA508u;
    ctx->downcount -= 1;
    // 7F1AA508: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA50C:
    ctx->pc = 0x7F1AA50Cu;
    ctx->downcount -= 16;
    // 7F1AA50C: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AA510:
    ctx->pc = 0x7F1AA510u;
    // 7F1AA510: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA514:
    ctx->pc = 0x7F1AA514u;
    // 7F1AA514: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA518:
    ctx->pc = 0x7F1AA518u;
    // 7F1AA518: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AA51C:
    ctx->pc = 0x7F1AA51Cu;
    // 7F1AA51C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA520:
    ctx->pc = 0x7F1AA520u;
    ctx->downcount -= 18;
    // 7F1AA520: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA524:
    ctx->pc = 0x7F1AA524u;
    // 7F1AA524: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA528:
    ctx->pc = 0x7F1AA528u;
    // 7F1AA528: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AA52C:
    ctx->pc = 0x7F1AA52Cu;
    // 7F1AA52C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA530:
    ctx->pc = 0x7F1AA530u;
    // 7F1AA530: addi    r6, r4, 6448
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6448);

label_7F1AA534:
    ctx->pc = 0x7F1AA534u;
    // 7F1AA534: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AA538:
    ctx->pc = 0x7F1AA538u;
    // 7F1AA538: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA53C:
    ctx->pc = 0x7F1AA53Cu;
    // 7F1AA53C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA540:
    ctx->pc = 0x7F1AA540u;
    // 7F1AA540: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AA544:
    ctx->pc = 0x7F1AA544u;
    // 7F1AA544: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA548:
    ctx->pc = 0x7F1AA548u;
    // 7F1AA548: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA54C:
    ctx->pc = 0x7F1AA54Cu;
    // 7F1AA54C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA550:
    ctx->pc = 0x7F1AA550u;
    // 7F1AA550: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AA554:
    ctx->pc = 0x7F1AA554u;
    // 7F1AA554: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA558:
    ctx->pc = 0x7F1AA558u;
    // 7F1AA558: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA55C:
    ctx->pc = 0x7F1AA55Cu;
    // 7F1AA55C: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA560:
    ctx->pc = 0x7F1AA560u;
    // 7F1AA560: cmpwi   r3, 0
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

label_7F1AA564:
    ctx->pc = 0x7F1AA564u;
    // 7F1AA564: bc    4, 1, 0x7F1AA5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA5CC;
        }
    }

label_7F1AA568:
    ctx->pc = 0x7F1AA568u;
    ctx->downcount -= 9;
    // 7F1AA568: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1AA56C:
    ctx->pc = 0x7F1AA56Cu;
    // 7F1AA56C: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA570:
    ctx->pc = 0x7F1AA570u;
    // 7F1AA570: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA574:
    ctx->pc = 0x7F1AA574u;
    // 7F1AA574: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1AA578:
    ctx->pc = 0x7F1AA578u;
    // 7F1AA578: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA57C:
    ctx->pc = 0x7F1AA57Cu;
    // 7F1AA57C: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA580:
    ctx->pc = 0x7F1AA580u;
    // 7F1AA580: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA584:
    ctx->pc = 0x7F1AA584u;
    // 7F1AA584: cmpw    r3, r0
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

label_7F1AA588:
    ctx->pc = 0x7F1AA588u;
    // 7F1AA588: bc    12, 0, 0x7F1AA5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA5CC;
        }
    }

label_7F1AA58C:
    ctx->pc = 0x7F1AA58Cu;
    ctx->downcount -= 4;
    // 7F1AA58C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA590:
    ctx->pc = 0x7F1AA590u;
    // 7F1AA590: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1AA594:
    ctx->pc = 0x7F1AA594u;
    // 7F1AA594: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AA598:
    ctx->pc = 0x7F1AA598u;
    // 7F1AA598: bl      0x7F114508
    {
            ctx->lr = 0x7F1AA59Cu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AA59C:
    ctx->pc = 0x7F1AA59Cu;
    ctx->downcount -= 10;
    // 7F1AA59C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AA5A0:
    ctx->pc = 0x7F1AA5A0u;
    // 7F1AA5A0: lfs     f0, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA5A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AA5A4:
    ctx->pc = 0x7F1AA5A4u;
    // 7F1AA5A4: addi    r4, r3, 6464
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6464);

label_7F1AA5A8:
    ctx->pc = 0x7F1AA5A8u;
    // 7F1AA5A8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1AA5AC:
    ctx->pc = 0x7F1AA5ACu;
    // 7F1AA5AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA5ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AA5B0:
    ctx->pc = 0x7F1AA5B0u;
    // 7F1AA5B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA5B4:
    ctx->pc = 0x7F1AA5B4u;
    // 7F1AA5B4: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F1AA5B8:
    ctx->pc = 0x7F1AA5B8u;
    // 7F1AA5B8: li      r6, 96
    ctx->gpr[6] = (u32)(s32)(96);

label_7F1AA5BC:
    ctx->pc = 0x7F1AA5BCu;
    // 7F1AA5BC: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AA5BCu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F1AA5C0:
    ctx->pc = 0x7F1AA5C0u;
    // 7F1AA5C0: bl      0x7F1B53D8
    {
            ctx->lr = 0x7F1AA5C4u;
            ctx->pc = 0x7F1B53D8u;
            return;
    }

label_7F1AA5C4:
    ctx->pc = 0x7F1AA5C4u;
    ctx->downcount -= 2;
    // 7F1AA5C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AA5C8:
    ctx->pc = 0x7F1AA5C8u;
    // 7F1AA5C8: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA5CC:
    ctx->pc = 0x7F1AA5CCu;
    ctx->downcount -= 6;
    // 7F1AA5CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA5D0:
    ctx->pc = 0x7F1AA5D0u;
    // 7F1AA5D0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AA5D4:
    ctx->pc = 0x7F1AA5D4u;
    // 7F1AA5D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA5D8:
    ctx->pc = 0x7F1AA5D8u;
    // 7F1AA5D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AA5DC:
    ctx->pc = 0x7F1AA5DCu;
    // 7F1AA5DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA5E0:
    ctx->pc = 0x7F1AA5E0u;
    ctx->downcount -= 1;
    // 7F1AA5E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA5E4:
    ctx->pc = 0x7F1AA5E4u;
    ctx->downcount -= 5;
    // 7F1AA5E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AA5E8:
    ctx->pc = 0x7F1AA5E8u;
    // 7F1AA5E8: stw     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA5EC:
    ctx->pc = 0x7F1AA5ECu;
    // 7F1AA5EC: stw     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA5F0:
    ctx->pc = 0x7F1AA5F0u;
    // 7F1AA5F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA5F4:
    ctx->pc = 0x7F1AA5F4u;
    // 7F1AA5F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA5F8:
    ctx->pc = 0x7F1AA5F8u;
    ctx->downcount -= 40;
    // 7F1AA5F8: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA5FC:
    ctx->pc = 0x7F1AA5FCu;
    // 7F1AA5FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA600:
    ctx->pc = 0x7F1AA600u;
    // 7F1AA600: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AA604:
    ctx->pc = 0x7F1AA604u;
    // 7F1AA604: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AA608:
    ctx->pc = 0x7F1AA608u;
    // 7F1AA608: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA60C:
    ctx->pc = 0x7F1AA60Cu;
    // 7F1AA60C: addi    r9, r6, 6468
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(6468);

label_7F1AA610:
    ctx->pc = 0x7F1AA610u;
    // 7F1AA610: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1AA614:
    ctx->pc = 0x7F1AA614u;
    // 7F1AA614: addi    r8, r7, 6484
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(6484);

label_7F1AA618:
    ctx->pc = 0x7F1AA618u;
    // 7F1AA618: stmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AA61C:
    ctx->pc = 0x7F1AA61Cu;
    // 7F1AA61C: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1AA620:
    ctx->pc = 0x7F1AA620u;
    // 7F1AA620: cmpw    r4, r0
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

label_7F1AA624:
    ctx->pc = 0x7F1AA624u;
    // 7F1AA624: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA628:
    ctx->pc = 0x7F1AA628u;
    // 7F1AA628: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AA62C:
    ctx->pc = 0x7F1AA62Cu;
    // 7F1AA62C: lwz     r12, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1AA630:
    ctx->pc = 0x7F1AA630u;
    // 7F1AA630: lwz     r11, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1AA634:
    ctx->pc = 0x7F1AA634u;
    // 7F1AA634: lwz     r10, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1AA638:
    ctx->pc = 0x7F1AA638u;
    // 7F1AA638: lwz     r9, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1AA63C:
    ctx->pc = 0x7F1AA63Cu;
    // 7F1AA63C: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AA640:
    ctx->pc = 0x7F1AA640u;
    // 7F1AA640: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AA644:
    ctx->pc = 0x7F1AA644u;
    // 7F1AA644: lwz     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA648:
    ctx->pc = 0x7F1AA648u;
    // 7F1AA648: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA64C:
    ctx->pc = 0x7F1AA64Cu;
    // 7F1AA64C: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1AA650:
    ctx->pc = 0x7F1AA650u;
    // 7F1AA650: stw     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1AA654:
    ctx->pc = 0x7F1AA654u;
    // 7F1AA654: stw     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1AA658:
    ctx->pc = 0x7F1AA658u;
    // 7F1AA658: stw     r9, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AA65C:
    ctx->pc = 0x7F1AA65Cu;
    // 7F1AA65C: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AA660:
    ctx->pc = 0x7F1AA660u;
    // 7F1AA660: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA664:
    ctx->pc = 0x7F1AA664u;
    // 7F1AA664: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA668:
    ctx->pc = 0x7F1AA668u;
    // 7F1AA668: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA66C:
    ctx->pc = 0x7F1AA66Cu;
    // 7F1AA66C: bc    12, 2, 0x7F1AA758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA758;
        }
    }

label_7F1AA670:
    ctx->pc = 0x7F1AA670u;
    ctx->downcount -= 1;
    // 7F1AA670: bc    4, 0, 0x7F1AA780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA780;
        }
    }

label_7F1AA674:
    ctx->pc = 0x7F1AA674u;
    ctx->downcount -= 2;
    // 7F1AA674: cmpwi   r4, 0
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

label_7F1AA678:
    ctx->pc = 0x7F1AA678u;
    // 7F1AA678: bc    12, 2, 0x7F1AA680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA680;
        }
    }

label_7F1AA67C:
    ctx->pc = 0x7F1AA67Cu;
    ctx->downcount -= 1;
    // 7F1AA67C: b       0x7F1AA780
    {
            goto label_7F1AA780;
    }

label_7F1AA680:
    ctx->pc = 0x7F1AA680u;
    ctx->downcount -= 51;
    // 7F1AA680: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA684:
    ctx->pc = 0x7F1AA684u;
    // 7F1AA684: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AA688:
    ctx->pc = 0x7F1AA688u;
    // 7F1AA688: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AA68C:
    ctx->pc = 0x7F1AA68Cu;
    // 7F1AA68C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F1AA690:
    ctx->pc = 0x7F1AA690u;
    // 7F1AA690: stw     r3, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA694:
    ctx->pc = 0x7F1AA694u;
    // 7F1AA694: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AA698:
    ctx->pc = 0x7F1AA698u;
    // 7F1AA698: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1AA69C:
    ctx->pc = 0x7F1AA69Cu;
    // 7F1AA69C: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA6A0:
    ctx->pc = 0x7F1AA6A0u;
    // 7F1AA6A0: lwz     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AA6A4:
    ctx->pc = 0x7F1AA6A4u;
    // 7F1AA6A4: divw   r0, r6, r0
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1AA6A8:
    ctx->pc = 0x7F1AA6A8u;
    // 7F1AA6A8: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA6AC:
    ctx->pc = 0x7F1AA6ACu;
    // 7F1AA6AC: bl      0x7F114508
    {
            ctx->lr = 0x7F1AA6B0u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AA6B0:
    ctx->pc = 0x7F1AA6B0u;
    ctx->downcount -= 10;
    // 7F1AA6B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AA6B4:
    ctx->pc = 0x7F1AA6B4u;
    // 7F1AA6B4: lfs     f0, 140(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA6B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AA6B8:
    ctx->pc = 0x7F1AA6B8u;
    // 7F1AA6B8: addi    r4, r3, 6464
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6464);

label_7F1AA6BC:
    ctx->pc = 0x7F1AA6BCu;
    // 7F1AA6BC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_7F1AA6C0:
    ctx->pc = 0x7F1AA6C0u;
    // 7F1AA6C0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA6C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AA6C4:
    ctx->pc = 0x7F1AA6C4u;
    // 7F1AA6C4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AA6C8:
    ctx->pc = 0x7F1AA6C8u;
    // 7F1AA6C8: li      r5, 96
    ctx->gpr[5] = (u32)(s32)(96);

label_7F1AA6CC:
    ctx->pc = 0x7F1AA6CCu;
    // 7F1AA6CC: li      r6, 96
    ctx->gpr[6] = (u32)(s32)(96);

label_7F1AA6D0:
    ctx->pc = 0x7F1AA6D0u;
    // 7F1AA6D0: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AA6D0u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F1AA6D4:
    ctx->pc = 0x7F1AA6D4u;
    // 7F1AA6D4: bl      0x7F1B53D8
    {
            ctx->lr = 0x7F1AA6D8u;
            ctx->pc = 0x7F1B53D8u;
            return;
    }

label_7F1AA6D8:
    ctx->pc = 0x7F1AA6D8u;
    ctx->downcount -= 11;
    // 7F1AA6D8: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AA6DC:
    ctx->pc = 0x7F1AA6DCu;
    // 7F1AA6DC: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1AA6E0:
    ctx->pc = 0x7F1AA6E0u;
    // 7F1AA6E0: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AA6E4:
    ctx->pc = 0x7F1AA6E4u;
    // 7F1AA6E4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AA6E8:
    ctx->pc = 0x7F1AA6E8u;
    // 7F1AA6E8: lwz     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA6EC:
    ctx->pc = 0x7F1AA6ECu;
    // 7F1AA6EC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA6F0:
    ctx->pc = 0x7F1AA6F0u;
    // 7F1AA6F0: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AA6F4:
    ctx->pc = 0x7F1AA6F4u;
    // 7F1AA6F4: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA6F8:
    ctx->pc = 0x7F1AA6F8u;
    // 7F1AA6F8: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA6FC:
    ctx->pc = 0x7F1AA6FCu;
    // 7F1AA6FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA700:
    ctx->pc = 0x7F1AA700u;
    // 7F1AA700: bl      0x7F1A5ECC
    {
            ctx->lr = 0x7F1AA704u;
            ctx->pc = 0x7F1A5ECCu;
            return;
    }

label_7F1AA704:
    ctx->pc = 0x7F1AA704u;
    ctx->downcount -= 5;
    // 7F1AA704: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AA708:
    ctx->pc = 0x7F1AA708u;
    // 7F1AA708: addi    r5, r1, 52
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(52);

label_7F1AA70C:
    ctx->pc = 0x7F1AA70Cu;
    // 7F1AA70C: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1AA710:
    ctx->pc = 0x7F1AA710u;
    // 7F1AA710: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AA714:
    loop_7F1AA714(ctx);
    if (ctx->pc == 0x7F1AA728u) goto label_7F1AA728;
    return;
label_7F1AA718:
    ctx->pc = 0x7F1AA718u;
    // 7F1AA718: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AA71C:
    ctx->pc = 0x7F1AA71Cu;
    // 7F1AA71C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA720:
    ctx->pc = 0x7F1AA720u;
    // 7F1AA720: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AA724:
    // 7F1AA724: bc    16, 0, 0x7F1AA714
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA714u;
                return;
            }
            goto label_7F1AA714;
        }
    }

label_7F1AA728:
    ctx->pc = 0x7F1AA728u;
    ctx->downcount -= 50;
    // 7F1AA728: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AA72C:
    ctx->pc = 0x7F1AA72Cu;
    // 7F1AA72C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F1AA730:
    ctx->pc = 0x7F1AA730u;
    // 7F1AA730: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA734:
    ctx->pc = 0x7F1AA734u;
    // 7F1AA734: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1AA738:
    ctx->pc = 0x7F1AA738u;
    // 7F1AA738: divw   r4, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1AA73C:
    ctx->pc = 0x7F1AA73Cu;
    // 7F1AA73C: lwz     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AA740:
    ctx->pc = 0x7F1AA740u;
    // 7F1AA740: lwz     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AA744:
    ctx->pc = 0x7F1AA744u;
    // 7F1AA744: lwz     r8, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AA748:
    ctx->pc = 0x7F1AA748u;
    // 7F1AA748: lfs     f1, 132(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA748u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AA74C:
    ctx->pc = 0x7F1AA74Cu;
    // 7F1AA74C: lfs     f2, 136(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA74Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AA750:
    ctx->pc = 0x7F1AA750u;
    // 7F1AA750: bl      0x7F1ABF50
    {
            ctx->lr = 0x7F1AA754u;
            goto label_7F1ABF50;
    }

label_7F1AA754:
    ctx->pc = 0x7F1AA754u;
    ctx->downcount -= 1;
    // 7F1AA754: b       0x7F1AA790
    {
            goto label_7F1AA790;
    }

label_7F1AA758:
    ctx->pc = 0x7F1AA758u;
    ctx->downcount -= 5;
    // 7F1AA758: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AA75C:
    ctx->pc = 0x7F1AA75Cu;
    // 7F1AA75C: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1AA760:
    ctx->pc = 0x7F1AA760u;
    // 7F1AA760: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F1AA764:
    ctx->pc = 0x7F1AA764u;
    // 7F1AA764: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AA768:
    loop_7F1AA768(ctx);
    if (ctx->pc == 0x7F1AA77Cu) goto label_7F1AA77C;
    return;
label_7F1AA76C:
    ctx->pc = 0x7F1AA76Cu;
    // 7F1AA76C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AA770:
    ctx->pc = 0x7F1AA770u;
    // 7F1AA770: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA774:
    ctx->pc = 0x7F1AA774u;
    // 7F1AA774: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AA778:
    // 7F1AA778: bc    16, 0, 0x7F1AA768
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA768u;
                return;
            }
            goto label_7F1AA768;
        }
    }

label_7F1AA77C:
    ctx->pc = 0x7F1AA77Cu;
    ctx->downcount -= 1;
    // 7F1AA77C: b       0x7F1AA790
    {
            goto label_7F1AA790;
    }

label_7F1AA780:
    ctx->pc = 0x7F1AA780u;
    ctx->downcount -= 3;
    // 7F1AA780: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AA784:
    ctx->pc = 0x7F1AA784u;
    // 7F1AA784: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA788:
    ctx->pc = 0x7F1AA788u;
    // 7F1AA788: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AA78Cu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AA78C:
    ctx->pc = 0x7F1AA78Cu;
    ctx->downcount -= 1;
    // 7F1AA78C: b       0x7F1AA794
    {
            goto label_7F1AA794;
    }

label_7F1AA790:
    ctx->pc = 0x7F1AA790u;
    ctx->downcount -= 1;
    // 7F1AA790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA794:
    ctx->pc = 0x7F1AA794u;
    ctx->downcount -= 16;
    // 7F1AA794: lmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AA798:
    ctx->pc = 0x7F1AA798u;
    // 7F1AA798: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA79C:
    ctx->pc = 0x7F1AA79Cu;
    // 7F1AA79C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA7A0:
    ctx->pc = 0x7F1AA7A0u;
    // 7F1AA7A0: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1AA7A4:
    ctx->pc = 0x7F1AA7A4u;
    // 7F1AA7A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA7A8:
    ctx->pc = 0x7F1AA7A8u;
    ctx->downcount -= 5;
    // 7F1AA7A8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA7AC:
    ctx->pc = 0x7F1AA7ACu;
    // 7F1AA7AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA7B0:
    ctx->pc = 0x7F1AA7B0u;
    // 7F1AA7B0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA7B4:
    ctx->pc = 0x7F1AA7B4u;
    // 7F1AA7B4: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AA7B8:
    ctx->pc = 0x7F1AA7B8u;
    // 7F1AA7B8: bl      0x8000DC84
    {
            ctx->lr = 0x7F1AA7BCu;
            ctx->pc = 0x8000DC84u;
            return;
    }

label_7F1AA7BC:
    ctx->pc = 0x7F1AA7BCu;
    ctx->downcount -= 20;
    // 7F1AA7BC: stmw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AA7C0:
    ctx->pc = 0x7F1AA7C0u;
    // 7F1AA7C0: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AA7C0u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F1AA7C4:
    ctx->pc = 0x7F1AA7C4u;
    // 7F1AA7C4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA7C8:
    ctx->pc = 0x7F1AA7C8u;
    // 7F1AA7C8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AA7C8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_7F1AA7CC:
    ctx->pc = 0x7F1AA7CCu;
    // 7F1AA7CC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1AA7D0:
    ctx->pc = 0x7F1AA7D0u;
    // 7F1AA7D0: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AA7D0u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_7F1AA7D4:
    ctx->pc = 0x7F1AA7D4u;
    // 7F1AA7D4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AA7D8:
    ctx->pc = 0x7F1AA7D8u;
    // 7F1AA7D8: li      r5, 156
    ctx->gpr[5] = (u32)(s32)(156);

label_7F1AA7DC:
    ctx->pc = 0x7F1AA7DCu;
    // 7F1AA7DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AA7E0:
    ctx->pc = 0x7F1AA7E0u;
    // 7F1AA7E0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AA7E4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AA7E4:
    ctx->pc = 0x7F1AA7E4u;
    ctx->downcount -= 2;
    // 7F1AA7E4: or.   r31, r3, r3
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

label_7F1AA7E8:
    ctx->pc = 0x7F1AA7E8u;
    // 7F1AA7E8: bc    12, 2, 0x7F1AA8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA8B4;
        }
    }

label_7F1AA7EC:
    ctx->pc = 0x7F1AA7ECu;
    ctx->downcount -= 5;
    // 7F1AA7EC: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AA7F0:
    ctx->pc = 0x7F1AA7F0u;
    // 7F1AA7F0: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AA7F4:
    ctx->pc = 0x7F1AA7F4u;
    // 7F1AA7F4: addi    r4, r4, -23264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23264);

label_7F1AA7F8:
    ctx->pc = 0x7F1AA7F8u;
    // 7F1AA7F8: addi    r5, r5, -23072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23072);

label_7F1AA7FC:
    ctx->pc = 0x7F1AA7FCu;
    // 7F1AA7FC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AA800u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AA800:
    ctx->pc = 0x7F1AA800u;
    ctx->downcount -= 15;
    // 7F1AA800: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AA804:
    ctx->pc = 0x7F1AA804u;
    // 7F1AA804: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1AA808:
    ctx->pc = 0x7F1AA808u;
    // 7F1AA808: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AA80C:
    ctx->pc = 0x7F1AA80Cu;
    // 7F1AA80C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AA810:
    ctx->pc = 0x7F1AA810u;
    // 7F1AA810: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1AA814:
    ctx->pc = 0x7F1AA814u;
    // 7F1AA814: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1AA818:
    ctx->pc = 0x7F1AA818u;
    // 7F1AA818: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AA81C:
    ctx->pc = 0x7F1AA81Cu;
    // 7F1AA81C: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F1AA820:
    ctx->pc = 0x7F1AA820u;
    // 7F1AA820: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1AA824:
    ctx->pc = 0x7F1AA824u;
    // 7F1AA824: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA828:
    ctx->pc = 0x7F1AA828u;
    // 7F1AA828: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA82C:
    ctx->pc = 0x7F1AA82Cu;
    // 7F1AA82C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AA830:
    ctx->pc = 0x7F1AA830u;
    // 7F1AA830: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA834:
    ctx->pc = 0x7F1AA834u;
    // 7F1AA834: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AA838:
    loop_7F1AA838(ctx);
    if (ctx->pc == 0x7F1AA84Cu) goto label_7F1AA84C;
    return;
label_7F1AA83C:
    ctx->pc = 0x7F1AA83Cu;
    // 7F1AA83C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AA840:
    ctx->pc = 0x7F1AA840u;
    // 7F1AA840: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA844:
    ctx->pc = 0x7F1AA844u;
    // 7F1AA844: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AA848:
    // 7F1AA848: bc    16, 0, 0x7F1AA838
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA838u;
                return;
            }
            goto label_7F1AA838;
        }
    }

label_7F1AA84C:
    ctx->pc = 0x7F1AA84Cu;
    ctx->downcount -= 5;
    // 7F1AA84C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AA850:
    ctx->pc = 0x7F1AA850u;
    // 7F1AA850: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1AA854:
    ctx->pc = 0x7F1AA854u;
    // 7F1AA854: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1AA858:
    ctx->pc = 0x7F1AA858u;
    // 7F1AA858: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AA85C:
    loop_7F1AA85C(ctx);
    if (ctx->pc == 0x7F1AA870u) goto label_7F1AA870;
    return;
label_7F1AA860:
    ctx->pc = 0x7F1AA860u;
    // 7F1AA860: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AA864:
    ctx->pc = 0x7F1AA864u;
    // 7F1AA864: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AA868:
    ctx->pc = 0x7F1AA868u;
    // 7F1AA868: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AA86C:
    // 7F1AA86C: bc    16, 0, 0x7F1AA85C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA85Cu;
                return;
            }
            goto label_7F1AA85C;
        }
    }

label_7F1AA870:
    ctx->pc = 0x7F1AA870u;
    ctx->downcount -= 7;
    // 7F1AA870: stfs     f29, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA870u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1AA874:
    ctx->pc = 0x7F1AA874u;
    // 7F1AA874: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AA878:
    ctx->pc = 0x7F1AA878u;
    // 7F1AA878: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA87C:
    ctx->pc = 0x7F1AA87Cu;
    // 7F1AA87C: stfs     f30, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA87Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AA880:
    ctx->pc = 0x7F1AA880u;
    // 7F1AA880: stfs     f31, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA880u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AA884:
    ctx->pc = 0x7F1AA884u;
    // 7F1AA884: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA888:
    ctx->pc = 0x7F1AA888u;
    // 7F1AA888: bl      0x7F1AA5E4
    {
            ctx->lr = 0x7F1AA88Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AA5E4u;
                return;
            }
            goto label_7F1AA5E4;
    }

label_7F1AA88C:
    ctx->pc = 0x7F1AA88Cu;
    ctx->downcount -= 2;
    // 7F1AA88C: cmpwi   r3, 0
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

label_7F1AA890:
    ctx->pc = 0x7F1AA890u;
    // 7F1AA890: bc    4, 0, 0x7F1AA8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA8A4;
        }
    }

label_7F1AA894:
    ctx->pc = 0x7F1AA894u;
    ctx->downcount -= 2;
    // 7F1AA894: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA898:
    ctx->pc = 0x7F1AA898u;
    // 7F1AA898: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AA89Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AA89C:
    ctx->pc = 0x7F1AA89Cu;
    ctx->downcount -= 2;
    // 7F1AA89C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AA8A0:
    ctx->pc = 0x7F1AA8A0u;
    // 7F1AA8A0: b       0x7F1AA8B8
    {
            goto label_7F1AA8B8;
    }

label_7F1AA8A4:
    ctx->pc = 0x7F1AA8A4u;
    ctx->downcount -= 4;
    // 7F1AA8A4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AA8A8:
    ctx->pc = 0x7F1AA8A8u;
    // 7F1AA8A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA8AC:
    ctx->pc = 0x7F1AA8ACu;
    // 7F1AA8AC: addi    r4, r4, -23048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23048);

label_7F1AA8B0:
    ctx->pc = 0x7F1AA8B0u;
    // 7F1AA8B0: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1AA8B4u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1AA8B4:
    ctx->pc = 0x7F1AA8B4u;
    ctx->downcount -= 1;
    // 7F1AA8B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AA8B8:
    ctx->pc = 0x7F1AA8B8u;
    ctx->downcount -= 2;
    // 7F1AA8B8: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AA8BC:
    ctx->pc = 0x7F1AA8BCu;
    // 7F1AA8BC: bl      0x8000DCD0
    {
            ctx->lr = 0x7F1AA8C0u;
            ctx->pc = 0x8000DCD0u;
            return;
    }

label_7F1AA8C0:
    ctx->pc = 0x7F1AA8C0u;
    ctx->downcount -= 16;
    // 7F1AA8C0: lmw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AA8C4:
    ctx->pc = 0x7F1AA8C4u;
    // 7F1AA8C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA8C8:
    ctx->pc = 0x7F1AA8C8u;
    // 7F1AA8C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA8CC:
    ctx->pc = 0x7F1AA8CCu;
    // 7F1AA8CC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1AA8D0:
    ctx->pc = 0x7F1AA8D0u;
    // 7F1AA8D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA8D4:
    ctx->pc = 0x7F1AA8D4u;
    ctx->downcount -= 2;
    // 7F1AA8D4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA8D8:
    ctx->pc = 0x7F1AA8D8u;
    // 7F1AA8D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA8DC:
    ctx->pc = 0x7F1AA8DCu;
    ctx->downcount -= 7;
    // 7F1AA8DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA8E0:
    ctx->pc = 0x7F1AA8E0u;
    // 7F1AA8E0: lfs     f0, 128(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA8E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AA8E4:
    ctx->pc = 0x7F1AA8E4u;
    // 7F1AA8E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AA8E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AA8E8:
    ctx->pc = 0x7F1AA8E8u;
    // 7F1AA8E8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AA8E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AA8EC:
    ctx->pc = 0x7F1AA8ECu;
    // 7F1AA8EC: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA8F0:
    ctx->pc = 0x7F1AA8F0u;
    // 7F1AA8F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA8F4:
    ctx->pc = 0x7F1AA8F4u;
    // 7F1AA8F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA8F8:
    ctx->pc = 0x7F1AA8F8u;
    ctx->downcount -= 41;
    // 7F1AA8F8: lwz     r5, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA8FC:
    ctx->pc = 0x7F1AA8FCu;
    // 7F1AA8FC: lwz     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA900:
    ctx->pc = 0x7F1AA900u;
    // 7F1AA900: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA904:
    ctx->pc = 0x7F1AA904u;
    // 7F1AA904: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA908:
    ctx->pc = 0x7F1AA908u;
    // 7F1AA908: lwz     r5, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA90C:
    ctx->pc = 0x7F1AA90Cu;
    // 7F1AA90C: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA910:
    ctx->pc = 0x7F1AA910u;
    // 7F1AA910: stw     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA914:
    ctx->pc = 0x7F1AA914u;
    // 7F1AA914: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA918:
    ctx->pc = 0x7F1AA918u;
    // 7F1AA918: lwz     r5, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA91C:
    ctx->pc = 0x7F1AA91Cu;
    // 7F1AA91C: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA920:
    ctx->pc = 0x7F1AA920u;
    // 7F1AA920: stw     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA924:
    ctx->pc = 0x7F1AA924u;
    // 7F1AA924: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA928:
    ctx->pc = 0x7F1AA928u;
    // 7F1AA928: lwz     r5, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA92C:
    ctx->pc = 0x7F1AA92Cu;
    // 7F1AA92C: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA930:
    ctx->pc = 0x7F1AA930u;
    // 7F1AA930: stw     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA934:
    ctx->pc = 0x7F1AA934u;
    // 7F1AA934: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA938:
    ctx->pc = 0x7F1AA938u;
    // 7F1AA938: lwz     r5, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA93C:
    ctx->pc = 0x7F1AA93Cu;
    // 7F1AA93C: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA940:
    ctx->pc = 0x7F1AA940u;
    // 7F1AA940: stw     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA944:
    ctx->pc = 0x7F1AA944u;
    // 7F1AA944: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA948:
    ctx->pc = 0x7F1AA948u;
    // 7F1AA948: lwz     r5, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA94C:
    ctx->pc = 0x7F1AA94Cu;
    // 7F1AA94C: lwz     r0, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA950:
    ctx->pc = 0x7F1AA950u;
    // 7F1AA950: stw     r5, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA954:
    ctx->pc = 0x7F1AA954u;
    // 7F1AA954: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA958:
    ctx->pc = 0x7F1AA958u;
    // 7F1AA958: lwz     r5, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA95C:
    ctx->pc = 0x7F1AA95Cu;
    // 7F1AA95C: lwz     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA960:
    ctx->pc = 0x7F1AA960u;
    // 7F1AA960: stw     r5, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA964:
    ctx->pc = 0x7F1AA964u;
    // 7F1AA964: stw     r0, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA968:
    ctx->pc = 0x7F1AA968u;
    // 7F1AA968: lwz     r5, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA96C:
    ctx->pc = 0x7F1AA96Cu;
    // 7F1AA96C: lwz     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA970:
    ctx->pc = 0x7F1AA970u;
    // 7F1AA970: stw     r5, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA974:
    ctx->pc = 0x7F1AA974u;
    // 7F1AA974: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA978:
    ctx->pc = 0x7F1AA978u;
    // 7F1AA978: lwz     r5, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA97C:
    ctx->pc = 0x7F1AA97Cu;
    // 7F1AA97C: lwz     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA980:
    ctx->pc = 0x7F1AA980u;
    // 7F1AA980: stw     r5, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA984:
    ctx->pc = 0x7F1AA984u;
    // 7F1AA984: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA988:
    ctx->pc = 0x7F1AA988u;
    // 7F1AA988: lwz     r5, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AA98C:
    ctx->pc = 0x7F1AA98Cu;
    // 7F1AA98C: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA990:
    ctx->pc = 0x7F1AA990u;
    // 7F1AA990: stw     r5, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AA994:
    ctx->pc = 0x7F1AA994u;
    // 7F1AA994: stw     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA998:
    ctx->pc = 0x7F1AA998u;
    // 7F1AA998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA99C:
    ctx->pc = 0x7F1AA99Cu;
    ctx->downcount -= 1;
    // 7F1AA99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA9A0:
    ctx->pc = 0x7F1AA9A0u;
    ctx->downcount -= 6;
    // 7F1AA9A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA9A4:
    ctx->pc = 0x7F1AA9A4u;
    // 7F1AA9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA9A8:
    ctx->pc = 0x7F1AA9A8u;
    // 7F1AA9A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA9AC:
    ctx->pc = 0x7F1AA9ACu;
    // 7F1AA9AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AA9B0:
    ctx->pc = 0x7F1AA9B0u;
    // 7F1AA9B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA9B4:
    ctx->pc = 0x7F1AA9B4u;
    // 7F1AA9B4: bl      0x7F1B60F4
    {
            ctx->lr = 0x7F1AA9B8u;
            ctx->pc = 0x7F1B60F4u;
            return;
    }

label_7F1AA9B8:
    ctx->pc = 0x7F1AA9B8u;
    ctx->downcount -= 3;
    // 7F1AA9B8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AA9BC:
    ctx->pc = 0x7F1AA9BCu;
    // 7F1AA9BC: cmplwi  r3, 0x0000
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

label_7F1AA9C0:
    ctx->pc = 0x7F1AA9C0u;
    // 7F1AA9C0: bc    12, 2, 0x7F1AA9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AA9C8;
        }
    }

label_7F1AA9C4:
    ctx->pc = 0x7F1AA9C4u;
    ctx->downcount -= 1;
    // 7F1AA9C4: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F1AA9C8u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F1AA9C8:
    ctx->pc = 0x7F1AA9C8u;
    ctx->downcount -= 6;
    // 7F1AA9C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AA9CC:
    ctx->pc = 0x7F1AA9CCu;
    // 7F1AA9CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AA9D0:
    ctx->pc = 0x7F1AA9D0u;
    // 7F1AA9D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AA9D4:
    ctx->pc = 0x7F1AA9D4u;
    // 7F1AA9D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AA9D8:
    ctx->pc = 0x7F1AA9D8u;
    // 7F1AA9D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AA9DC:
    ctx->pc = 0x7F1AA9DCu;
    ctx->downcount -= 18;
    // 7F1AA9DC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AA9E0:
    ctx->pc = 0x7F1AA9E0u;
    // 7F1AA9E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AA9E4:
    ctx->pc = 0x7F1AA9E4u;
    // 7F1AA9E4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AA9E8:
    ctx->pc = 0x7F1AA9E8u;
    // 7F1AA9E8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1AA9EC:
    ctx->pc = 0x7F1AA9ECu;
    // 7F1AA9EC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AA9F0:
    ctx->pc = 0x7F1AA9F0u;
    // 7F1AA9F0: addi    r9, r7, 6504
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(6504);

label_7F1AA9F4:
    ctx->pc = 0x7F1AA9F4u;
    // 7F1AA9F4: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1AA9F8:
    ctx->pc = 0x7F1AA9F8u;
    // 7F1AA9F8: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AA9FC:
    ctx->pc = 0x7F1AA9FCu;
    // 7F1AA9FC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1AAA00:
    ctx->pc = 0x7F1AAA00u;
    // 7F1AAA00: cmpw    r4, r0
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

label_7F1AAA04:
    ctx->pc = 0x7F1AAA04u;
    // 7F1AAA04: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AAA08:
    ctx->pc = 0x7F1AAA08u;
    // 7F1AAA08: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AAA0C:
    ctx->pc = 0x7F1AAA0Cu;
    // 7F1AAA0C: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAA10:
    ctx->pc = 0x7F1AAA10u;
    // 7F1AAA10: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1AAA14:
    ctx->pc = 0x7F1AAA14u;
    // 7F1AAA14: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AAA18:
    ctx->pc = 0x7F1AAA18u;
    // 7F1AAA18: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1AAA1C:
    ctx->pc = 0x7F1AAA1Cu;
    // 7F1AAA1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAA20:
    ctx->pc = 0x7F1AAA20u;
    // 7F1AAA20: bc    12, 2, 0x7F1AAA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAA3C;
        }
    }

label_7F1AAA24:
    ctx->pc = 0x7F1AAA24u;
    ctx->downcount -= 1;
    // 7F1AAA24: bc    4, 0, 0x7F1AAA9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAA9C;
        }
    }

label_7F1AAA28:
    ctx->pc = 0x7F1AAA28u;
    ctx->downcount -= 2;
    // 7F1AAA28: cmpwi   r4, 2
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

label_7F1AAA2C:
    ctx->pc = 0x7F1AAA2Cu;
    // 7F1AAA2C: bc    4, 0, 0x7F1AAA9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAA9C;
        }
    }

label_7F1AAA30:
    ctx->pc = 0x7F1AAA30u;
    ctx->downcount -= 2;
    // 7F1AAA30: cmpwi   r4, 0
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

label_7F1AAA34:
    ctx->pc = 0x7F1AAA34u;
    // 7F1AAA34: bc    4, 0, 0x7F1AAAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAAA8;
        }
    }

label_7F1AAA38:
    ctx->pc = 0x7F1AAA38u;
    ctx->downcount -= 1;
    // 7F1AAA38: b       0x7F1AAA9C
    {
            goto label_7F1AAA9C;
    }

label_7F1AAA3C:
    ctx->pc = 0x7F1AAA3Cu;
    ctx->downcount -= 5;
    // 7F1AAA3C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1AAA40:
    ctx->pc = 0x7F1AAA40u;
    // 7F1AAA40: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_7F1AAA44:
    ctx->pc = 0x7F1AAA44u;
    // 7F1AAA44: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1AAA48:
    ctx->pc = 0x7F1AAA48u;
    // 7F1AAA48: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1AAA4C:
    loop_7F1AAA4C(ctx);
    if (ctx->pc == 0x7F1AAA60u) goto label_7F1AAA60;
    return;
label_7F1AAA50:
    ctx->pc = 0x7F1AAA50u;
    // 7F1AAA50: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AAA54:
    ctx->pc = 0x7F1AAA54u;
    // 7F1AAA54: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AAA58:
    ctx->pc = 0x7F1AAA58u;
    // 7F1AAA58: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F1AAA5C:
    // 7F1AAA5C: bc    16, 0, 0x7F1AAA4C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AAA4Cu;
                return;
            }
            goto label_7F1AAA4C;
        }
    }

label_7F1AAA60:
    ctx->pc = 0x7F1AAA60u;
    ctx->downcount -= 14;
    // 7F1AAA60: lwz     r6, 48(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AAA64:
    ctx->pc = 0x7F1AAA64u;
    // 7F1AAA64: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AAA68:
    ctx->pc = 0x7F1AAA68u;
    // 7F1AAA68: lwz     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAA6C:
    ctx->pc = 0x7F1AAA6Cu;
    // 7F1AAA6C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AAA70:
    ctx->pc = 0x7F1AAA70u;
    // 7F1AAA70: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAA74:
    ctx->pc = 0x7F1AAA74u;
    // 7F1AAA74: stw     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAA78:
    ctx->pc = 0x7F1AAA78u;
    // 7F1AAA78: stw     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAA7C:
    ctx->pc = 0x7F1AAA7Cu;
    // 7F1AAA7C: lwz     r5, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAA80:
    ctx->pc = 0x7F1AAA80u;
    // 7F1AAA80: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAA84:
    ctx->pc = 0x7F1AAA84u;
    // 7F1AAA84: stw     r5, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAA88:
    ctx->pc = 0x7F1AAA88u;
    // 7F1AAA88: stw     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAA8C:
    ctx->pc = 0x7F1AAA8Cu;
    // 7F1AAA8C: lwz     r5, 48(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAA90:
    ctx->pc = 0x7F1AAA90u;
    // 7F1AAA90: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_7F1AAA94:
    ctx->pc = 0x7F1AAA94u;
    // 7F1AAA94: bl      0x7F114508
    {
            ctx->lr = 0x7F1AAA98u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AAA98:
    ctx->pc = 0x7F1AAA98u;
    ctx->downcount -= 1;
    // 7F1AAA98: b       0x7F1AAAA8
    {
            goto label_7F1AAAA8;
    }

label_7F1AAA9C:
    ctx->pc = 0x7F1AAA9Cu;
    ctx->downcount -= 2;
    // 7F1AAA9C: or   r3, r10, r10
    {
        ctx->gpr[3] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F1AAAA0:
    ctx->pc = 0x7F1AAAA0u;
    // 7F1AAAA0: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1AAAA4u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1AAAA4:
    ctx->pc = 0x7F1AAAA4u;
    ctx->downcount -= 1;
    // 7F1AAAA4: b       0x7F1AAAAC
    {
            goto label_7F1AAAAC;
    }

label_7F1AAAA8:
    ctx->pc = 0x7F1AAAA8u;
    ctx->downcount -= 1;
    // 7F1AAAA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AAAAC:
    ctx->pc = 0x7F1AAAACu;
    ctx->downcount -= 5;
    // 7F1AAAAC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAAB0:
    ctx->pc = 0x7F1AAAB0u;
    // 7F1AAAB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAAB4:
    ctx->pc = 0x7F1AAAB4u;
    // 7F1AAAB4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1AAAB8:
    ctx->pc = 0x7F1AAAB8u;
    // 7F1AAAB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAABC:
    ctx->pc = 0x7F1AAABCu;
    ctx->downcount -= 5;
    // 7F1AAABC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAAC0:
    ctx->pc = 0x7F1AAAC0u;
    // 7F1AAAC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAAC4:
    ctx->pc = 0x7F1AAAC4u;
    // 7F1AAAC4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAAC8:
    ctx->pc = 0x7F1AAAC8u;
    // 7F1AAAC8: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AAACC:
    ctx->pc = 0x7F1AAACCu;
    // 7F1AAACC: bl      0x8000DC84
    {
            ctx->lr = 0x7F1AAAD0u;
            ctx->pc = 0x8000DC84u;
            return;
    }

label_7F1AAAD0:
    ctx->pc = 0x7F1AAAD0u;
    ctx->downcount -= 33;
    // 7F1AAAD0: stmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AAAD4:
    ctx->pc = 0x7F1AAAD4u;
    // 7F1AAAD4: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F1AAAD8:
    ctx->pc = 0x7F1AAAD8u;
    // 7F1AAAD8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAADC:
    ctx->pc = 0x7F1AAADCu;
    // 7F1AAADC: addi    r12, r10, 6520
    ctx->gpr[12] = ctx->gpr[10] + (u32)(s32)(6520);

label_7F1AAAE0:
    ctx->pc = 0x7F1AAAE0u;
    // 7F1AAAE0: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AAAE0u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F1AAAE4:
    ctx->pc = 0x7F1AAAE4u;
    // 7F1AAAE4: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1AAAE8:
    ctx->pc = 0x7F1AAAE8u;
    // 7F1AAAE8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AAAE8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_7F1AAAEC:
    ctx->pc = 0x7F1AAAECu;
    // 7F1AAAEC: lwz     r3, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AAAF0:
    ctx->pc = 0x7F1AAAF0u;
    // 7F1AAAF0: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AAAF0u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_7F1AAAF4:
    ctx->pc = 0x7F1AAAF4u;
    // 7F1AAAF4: lwz     r10, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1AAAF8:
    ctx->pc = 0x7F1AAAF8u;
    // 7F1AAAF8: lwz     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAAFC:
    ctx->pc = 0x7F1AAAFCu;
    // 7F1AAAFC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AAB00:
    ctx->pc = 0x7F1AAB00u;
    // 7F1AAB00: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1AAB04:
    ctx->pc = 0x7F1AAB04u;
    // 7F1AAB04: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AAB08:
    ctx->pc = 0x7F1AAB08u;
    // 7F1AAB08: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1AAB0C:
    ctx->pc = 0x7F1AAB0Cu;
    // 7F1AAB0C: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1AAB10:
    ctx->pc = 0x7F1AAB10u;
    // 7F1AAB10: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AAB14:
    ctx->pc = 0x7F1AAB14u;
    // 7F1AAB14: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1AAB18:
    ctx->pc = 0x7F1AAB18u;
    // 7F1AAB18: or   r31, r9, r9
    {
        ctx->gpr[31] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F1AAB1C:
    ctx->pc = 0x7F1AAB1Cu;
    // 7F1AAB1C: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F1AAB20:
    ctx->pc = 0x7F1AAB20u;
    // 7F1AAB20: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1AAB24:
    ctx->pc = 0x7F1AAB24u;
    // 7F1AAB24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAB28:
    ctx->pc = 0x7F1AAB28u;
    // 7F1AAB28: bl      0x7F3C9148
    {
            ctx->lr = 0x7F1AAB2Cu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F1AAB2C:
    ctx->pc = 0x7F1AAB2Cu;
    ctx->downcount -= 4;
    // 7F1AAB2C: stw     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AAB30:
    ctx->pc = 0x7F1AAB30u;
    // 7F1AAB30: lwz     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AAB34:
    ctx->pc = 0x7F1AAB34u;
    // 7F1AAB34: cmplwi  r4, 0x0000
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

label_7F1AAB38:
    ctx->pc = 0x7F1AAB38u;
    // 7F1AAB38: bc    4, 2, 0x7F1AAB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAB44;
        }
    }

label_7F1AAB3C:
    ctx->pc = 0x7F1AAB3Cu;
    ctx->downcount -= 2;
    // 7F1AAB3C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1AAB40:
    ctx->pc = 0x7F1AAB40u;
    // 7F1AAB40: b       0x7F1AAC40
    {
            goto label_7F1AAC40;
    }

label_7F1AAB44:
    ctx->pc = 0x7F1AAB44u;
    ctx->downcount -= 9;
    // 7F1AAB44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AAB48:
    ctx->pc = 0x7F1AAB48u;
    // 7F1AAB48: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1AAB4C:
    ctx->pc = 0x7F1AAB4Cu;
    // 7F1AAB4C: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAB50:
    ctx->pc = 0x7F1AAB50u;
    // 7F1AAB50: addi    r4, r26, 52
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(52);

label_7F1AAB54:
    ctx->pc = 0x7F1AAB54u;
    // 7F1AAB54: lwz     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAB58:
    ctx->pc = 0x7F1AAB58u;
    // 7F1AAB58: stfs     f29, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAB58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1AAB5C:
    ctx->pc = 0x7F1AAB5Cu;
    // 7F1AAB5C: lwz     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAB60:
    ctx->pc = 0x7F1AAB60u;
    // 7F1AAB60: stfs     f30, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAB60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AAB64:
    ctx->pc = 0x7F1AAB64u;
    // 7F1AAB64: bl      0x80025A3C
    {
            ctx->lr = 0x7F1AAB68u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F1AAB68:
    ctx->pc = 0x7F1AAB68u;
    ctx->downcount -= 50;
    // 7F1AAB68: stfs     f29, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAB68u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1AAB6C:
    ctx->pc = 0x7F1AAB6Cu;
    // 7F1AAB6C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1AAB70:
    ctx->pc = 0x7F1AAB70u;
    // 7F1AAB70: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AAB74:
    ctx->pc = 0x7F1AAB74u;
    // 7F1AAB74: stfs     f30, 120(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAB74u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1AAB78:
    ctx->pc = 0x7F1AAB78u;
    // 7F1AAB78: stw     r28, 124(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1AAB7C:
    ctx->pc = 0x7F1AAB7Cu;
    // 7F1AAB7C: stfs     f31, 128(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAB7Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1AAB80:
    ctx->pc = 0x7F1AAB80u;
    // 7F1AAB80: lwz     r5, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAB84:
    ctx->pc = 0x7F1AAB84u;
    // 7F1AAB84: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAB88:
    ctx->pc = 0x7F1AAB88u;
    // 7F1AAB88: stw     r5, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAB8C:
    ctx->pc = 0x7F1AAB8Cu;
    // 7F1AAB8C: stw     r0, 136(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAB90:
    ctx->pc = 0x7F1AAB90u;
    // 7F1AAB90: lwz     r5, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAB94:
    ctx->pc = 0x7F1AAB94u;
    // 7F1AAB94: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAB98:
    ctx->pc = 0x7F1AAB98u;
    // 7F1AAB98: stw     r5, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAB9C:
    ctx->pc = 0x7F1AAB9Cu;
    // 7F1AAB9C: stw     r0, 144(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABA0:
    ctx->pc = 0x7F1AABA0u;
    // 7F1AABA0: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABA4:
    ctx->pc = 0x7F1AABA4u;
    // 7F1AABA4: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABA8:
    ctx->pc = 0x7F1AABA8u;
    // 7F1AABA8: stw     r5, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABAC:
    ctx->pc = 0x7F1AABACu;
    // 7F1AABAC: stw     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABB0:
    ctx->pc = 0x7F1AABB0u;
    // 7F1AABB0: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABB4:
    ctx->pc = 0x7F1AABB4u;
    // 7F1AABB4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABB8:
    ctx->pc = 0x7F1AABB8u;
    // 7F1AABB8: stw     r5, 156(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABBC:
    ctx->pc = 0x7F1AABBCu;
    // 7F1AABBC: stw     r0, 160(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABC0:
    ctx->pc = 0x7F1AABC0u;
    // 7F1AABC0: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABC4:
    ctx->pc = 0x7F1AABC4u;
    // 7F1AABC4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABC8:
    ctx->pc = 0x7F1AABC8u;
    // 7F1AABC8: stw     r5, 164(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABCC:
    ctx->pc = 0x7F1AABCCu;
    // 7F1AABCC: stw     r0, 168(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABD0:
    ctx->pc = 0x7F1AABD0u;
    // 7F1AABD0: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABD4:
    ctx->pc = 0x7F1AABD4u;
    // 7F1AABD4: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABD8:
    ctx->pc = 0x7F1AABD8u;
    // 7F1AABD8: stw     r5, 172(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABDC:
    ctx->pc = 0x7F1AABDCu;
    // 7F1AABDC: stw     r0, 176(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABE0:
    ctx->pc = 0x7F1AABE0u;
    // 7F1AABE0: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABE4:
    ctx->pc = 0x7F1AABE4u;
    // 7F1AABE4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABE8:
    ctx->pc = 0x7F1AABE8u;
    // 7F1AABE8: stw     r5, 180(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABEC:
    ctx->pc = 0x7F1AABECu;
    // 7F1AABEC: stw     r0, 184(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AABF0:
    ctx->pc = 0x7F1AABF0u;
    // 7F1AABF0: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AABF4:
    ctx->pc = 0x7F1AABF4u;
    // 7F1AABF4: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AABF8:
    ctx->pc = 0x7F1AABF8u;
    // 7F1AABF8: stw     r5, 188(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AABFC:
    ctx->pc = 0x7F1AABFCu;
    // 7F1AABFC: stw     r0, 192(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAC00:
    ctx->pc = 0x7F1AAC00u;
    // 7F1AAC00: lwz     r6, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AAC04:
    ctx->pc = 0x7F1AAC04u;
    // 7F1AAC04: lwz     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAC08:
    ctx->pc = 0x7F1AAC08u;
    // 7F1AAC08: lwz     r0, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAC0C:
    ctx->pc = 0x7F1AAC0Cu;
    // 7F1AAC0C: stw     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAC10:
    ctx->pc = 0x7F1AAC10u;
    // 7F1AAC10: stw     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAC14:
    ctx->pc = 0x7F1AAC14u;
    // 7F1AAC14: lwz     r5, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAC18:
    ctx->pc = 0x7F1AAC18u;
    // 7F1AAC18: lwz     r0, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAC1C:
    ctx->pc = 0x7F1AAC1Cu;
    // 7F1AAC1C: stw     r5, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAC20:
    ctx->pc = 0x7F1AAC20u;
    // 7F1AAC20: stw     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAC24:
    ctx->pc = 0x7F1AAC24u;
    // 7F1AAC24: lwz     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AAC28:
    ctx->pc = 0x7F1AAC28u;
    // 7F1AAC28: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_7F1AAC2C:
    ctx->pc = 0x7F1AAC2Cu;
    // 7F1AAC2C: bl      0x7F114508
    {
            ctx->lr = 0x7F1AAC30u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1AAC30:
    ctx->pc = 0x7F1AAC30u;
    ctx->downcount -= 3;
    // 7F1AAC30: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1AAC34:
    ctx->pc = 0x7F1AAC34u;
    // 7F1AAC34: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AAC38:
    ctx->pc = 0x7F1AAC38u;
    // 7F1AAC38: bl      0x7F1B60CC
    {
            ctx->lr = 0x7F1AAC3Cu;
            ctx->pc = 0x7F1B60CCu;
            return;
    }

label_7F1AAC3C:
    ctx->pc = 0x7F1AAC3Cu;
    ctx->downcount -= 1;
    // 7F1AAC3C: srawi r3, r3, 31
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

label_7F1AAC40:
    ctx->pc = 0x7F1AAC40u;
    ctx->downcount -= 2;
    // 7F1AAC40: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AAC44:
    ctx->pc = 0x7F1AAC44u;
    // 7F1AAC44: bl      0x8000DCD0
    {
            ctx->lr = 0x7F1AAC48u;
            ctx->pc = 0x8000DCD0u;
            return;
    }

label_7F1AAC48:
    ctx->pc = 0x7F1AAC48u;
    ctx->downcount -= 16;
    // 7F1AAC48: lmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AAC4C:
    ctx->pc = 0x7F1AAC4Cu;
    // 7F1AAC4C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAC50:
    ctx->pc = 0x7F1AAC50u;
    // 7F1AAC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAC54:
    ctx->pc = 0x7F1AAC54u;
    // 7F1AAC54: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1AAC58:
    ctx->pc = 0x7F1AAC58u;
    // 7F1AAC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAC5C:
    ctx->pc = 0x7F1AAC5Cu;
    ctx->downcount -= 5;
    // 7F1AAC5C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAC60:
    ctx->pc = 0x7F1AAC60u;
    // 7F1AAC60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAC64:
    ctx->pc = 0x7F1AAC64u;
    // 7F1AAC64: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAC68:
    ctx->pc = 0x7F1AAC68u;
    // 7F1AAC68: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1AAC6C:
    ctx->pc = 0x7F1AAC6Cu;
    // 7F1AAC6C: bl      0x8000DC84
    {
            ctx->lr = 0x7F1AAC70u;
            ctx->pc = 0x8000DC84u;
            return;
    }

label_7F1AAC70:
    ctx->pc = 0x7F1AAC70u;
    ctx->downcount -= 25;
    // 7F1AAC70: stmw     r25, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AAC74:
    ctx->pc = 0x7F1AAC74u;
    // 7F1AAC74: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AAC74u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F1AAC78:
    ctx->pc = 0x7F1AAC78u;
    // 7F1AAC78: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAC7C:
    ctx->pc = 0x7F1AAC7Cu;
    // 7F1AAC7C: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AAC7Cu)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_7F1AAC80:
    ctx->pc = 0x7F1AAC80u;
    // 7F1AAC80: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AAC84:
    ctx->pc = 0x7F1AAC84u;
    // 7F1AAC84: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AAC88:
    ctx->pc = 0x7F1AAC88u;
    // 7F1AAC88: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1AAC8C:
    ctx->pc = 0x7F1AAC8Cu;
    // 7F1AAC8C: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AAC8Cu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_7F1AAC90:
    ctx->pc = 0x7F1AAC90u;
    // 7F1AAC90: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1AAC94:
    ctx->pc = 0x7F1AAC94u;
    // 7F1AAC94: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1AAC98:
    ctx->pc = 0x7F1AAC98u;
    // 7F1AAC98: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1AAC9C:
    ctx->pc = 0x7F1AAC9Cu;
    // 7F1AAC9C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AACA0:
    ctx->pc = 0x7F1AACA0u;
    // 7F1AACA0: li      r5, 196
    ctx->gpr[5] = (u32)(s32)(196);

label_7F1AACA4:
    ctx->pc = 0x7F1AACA4u;
    // 7F1AACA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AACA8:
    ctx->pc = 0x7F1AACA8u;
    // 7F1AACA8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AACACu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AACAC:
    ctx->pc = 0x7F1AACACu;
    ctx->downcount -= 2;
    // 7F1AACAC: or.   r31, r3, r3
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

label_7F1AACB0:
    ctx->pc = 0x7F1AACB0u;
    // 7F1AACB0: bc    12, 2, 0x7F1AAD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAD44;
        }
    }

label_7F1AACB4:
    ctx->pc = 0x7F1AACB4u;
    ctx->downcount -= 5;
    // 7F1AACB4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AACB8:
    ctx->pc = 0x7F1AACB8u;
    // 7F1AACB8: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AACBC:
    ctx->pc = 0x7F1AACBCu;
    // 7F1AACBC: addi    r4, r4, -22116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22116);

label_7F1AACC0:
    ctx->pc = 0x7F1AACC0u;
    // 7F1AACC0: addi    r5, r5, -22112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22112);

label_7F1AACC4:
    ctx->pc = 0x7F1AACC4u;
    // 7F1AACC4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AACC8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AACC8:
    ctx->pc = 0x7F1AACC8u;
    ctx->downcount -= 21;
    // 7F1AACC8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AACCC:
    ctx->pc = 0x7F1AACCCu;
    // 7F1AACCC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1AACD0:
    ctx->pc = 0x7F1AACD0u;
    // 7F1AACD0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1AACD4:
    ctx->pc = 0x7F1AACD4u;
    // 7F1AACD4: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1AACD4u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F1AACD8:
    ctx->pc = 0x7F1AACD8u;
    // 7F1AACD8: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1AACDC:
    ctx->pc = 0x7F1AACDCu;
    // 7F1AACDC: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AACDCu)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_7F1AACE0:
    ctx->pc = 0x7F1AACE0u;
    // 7F1AACE0: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AACE4:
    ctx->pc = 0x7F1AACE4u;
    // 7F1AACE4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1AACE4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_7F1AACE8:
    ctx->pc = 0x7F1AACE8u;
    // 7F1AACE8: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1AACEC:
    ctx->pc = 0x7F1AACECu;
    // 7F1AACEC: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AACF0:
    ctx->pc = 0x7F1AACF0u;
    // 7F1AACF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AACF4:
    ctx->pc = 0x7F1AACF4u;
    // 7F1AACF4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1AACF8:
    ctx->pc = 0x7F1AACF8u;
    // 7F1AACF8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1AACFC:
    ctx->pc = 0x7F1AACFCu;
    // 7F1AACFC: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AAD00:
    ctx->pc = 0x7F1AAD00u;
    // 7F1AAD00: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1AAD04:
    ctx->pc = 0x7F1AAD04u;
    // 7F1AAD04: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AAD08:
    ctx->pc = 0x7F1AAD08u;
    // 7F1AAD08: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AAD0C:
    ctx->pc = 0x7F1AAD0Cu;
    // 7F1AAD0C: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1AAD10:
    ctx->pc = 0x7F1AAD10u;
    // 7F1AAD10: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AAD14:
    ctx->pc = 0x7F1AAD14u;
    // 7F1AAD14: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAD18:
    ctx->pc = 0x7F1AAD18u;
    // 7F1AAD18: bl      0x7F1AAABC
    {
            ctx->lr = 0x7F1AAD1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AAABCu;
                return;
            }
            goto label_7F1AAABC;
    }

label_7F1AAD1C:
    ctx->pc = 0x7F1AAD1Cu;
    ctx->downcount -= 2;
    // 7F1AAD1C: cmpwi   r3, 0
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

label_7F1AAD20:
    ctx->pc = 0x7F1AAD20u;
    // 7F1AAD20: bc    4, 0, 0x7F1AAD34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAD34;
        }
    }

label_7F1AAD24:
    ctx->pc = 0x7F1AAD24u;
    ctx->downcount -= 2;
    // 7F1AAD24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAD28:
    ctx->pc = 0x7F1AAD28u;
    // 7F1AAD28: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AAD2Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AAD2C:
    ctx->pc = 0x7F1AAD2Cu;
    ctx->downcount -= 2;
    // 7F1AAD2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AAD30:
    ctx->pc = 0x7F1AAD30u;
    // 7F1AAD30: b       0x7F1AAD48
    {
            goto label_7F1AAD48;
    }

label_7F1AAD34:
    ctx->pc = 0x7F1AAD34u;
    ctx->downcount -= 4;
    // 7F1AAD34: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AAD38:
    ctx->pc = 0x7F1AAD38u;
    // 7F1AAD38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAD3C:
    ctx->pc = 0x7F1AAD3Cu;
    // 7F1AAD3C: addi    r4, r4, -22052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22052);

label_7F1AAD40:
    ctx->pc = 0x7F1AAD40u;
    // 7F1AAD40: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1AAD44u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1AAD44:
    ctx->pc = 0x7F1AAD44u;
    ctx->downcount -= 1;
    // 7F1AAD44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAD48:
    ctx->pc = 0x7F1AAD48u;
    ctx->downcount -= 2;
    // 7F1AAD48: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1AAD4C:
    ctx->pc = 0x7F1AAD4Cu;
    // 7F1AAD4C: bl      0x8000DCD0
    {
            ctx->lr = 0x7F1AAD50u;
            ctx->pc = 0x8000DCD0u;
            return;
    }

label_7F1AAD50:
    ctx->pc = 0x7F1AAD50u;
    ctx->downcount -= 16;
    // 7F1AAD50: lmw     r25, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AAD54:
    ctx->pc = 0x7F1AAD54u;
    // 7F1AAD54: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAD58:
    ctx->pc = 0x7F1AAD58u;
    // 7F1AAD58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAD5C:
    ctx->pc = 0x7F1AAD5Cu;
    // 7F1AAD5C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1AAD60:
    ctx->pc = 0x7F1AAD60u;
    // 7F1AAD60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAD64:
    ctx->pc = 0x7F1AAD64u;
    ctx->downcount -= 6;
    // 7F1AAD64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAD68:
    ctx->pc = 0x7F1AAD68u;
    // 7F1AAD68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAD6C:
    ctx->pc = 0x7F1AAD6Cu;
    // 7F1AAD6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAD70:
    ctx->pc = 0x7F1AAD70u;
    // 7F1AAD70: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AAD74:
    ctx->pc = 0x7F1AAD74u;
    // 7F1AAD74: cmplwi  r3, 0x0000
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

label_7F1AAD78:
    ctx->pc = 0x7F1AAD78u;
    // 7F1AAD78: bc    12, 2, 0x7F1AAD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAD80;
        }
    }

label_7F1AAD7C:
    ctx->pc = 0x7F1AAD7Cu;
    ctx->downcount -= 1;
    // 7F1AAD7C: bl      0x7F306938
    {
            ctx->lr = 0x7F1AAD80u;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F1AAD80:
    ctx->pc = 0x7F1AAD80u;
    ctx->downcount -= 5;
    // 7F1AAD80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAD84:
    ctx->pc = 0x7F1AAD84u;
    // 7F1AAD84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAD88:
    ctx->pc = 0x7F1AAD88u;
    // 7F1AAD88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AAD8C:
    ctx->pc = 0x7F1AAD8Cu;
    // 7F1AAD8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAD90:
    ctx->pc = 0x7F1AAD90u;
    ctx->downcount -= 6;
    // 7F1AAD90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAD94:
    ctx->pc = 0x7F1AAD94u;
    // 7F1AAD94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAD98:
    ctx->pc = 0x7F1AAD98u;
    // 7F1AAD98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAD9C:
    ctx->pc = 0x7F1AAD9Cu;
    // 7F1AAD9C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AADA0:
    ctx->pc = 0x7F1AADA0u;
    // 7F1AADA0: cmplwi  r3, 0x0000
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

label_7F1AADA4:
    ctx->pc = 0x7F1AADA4u;
    // 7F1AADA4: bc    12, 2, 0x7F1AADAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AADAC;
        }
    }

label_7F1AADA8:
    ctx->pc = 0x7F1AADA8u;
    ctx->downcount -= 1;
    // 7F1AADA8: bl      0x7F306768
    {
            ctx->lr = 0x7F1AADACu;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F1AADAC:
    ctx->pc = 0x7F1AADACu;
    ctx->downcount -= 5;
    // 7F1AADAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AADB0:
    ctx->pc = 0x7F1AADB0u;
    // 7F1AADB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AADB4:
    ctx->pc = 0x7F1AADB4u;
    // 7F1AADB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AADB8:
    ctx->pc = 0x7F1AADB8u;
    // 7F1AADB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AADBC:
    ctx->pc = 0x7F1AADBCu;
    ctx->downcount -= 21;
    // 7F1AADBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AADC0:
    ctx->pc = 0x7F1AADC0u;
    // 7F1AADC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AADC4:
    ctx->pc = 0x7F1AADC4u;
    // 7F1AADC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AADC8:
    ctx->pc = 0x7F1AADC8u;
    // 7F1AADC8: rlwinm. r0, r6, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1AADCC:
    ctx->pc = 0x7F1AADCCu;
    // 7F1AADCC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AADD0:
    ctx->pc = 0x7F1AADD0u;
    // 7F1AADD0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AADD4:
    ctx->pc = 0x7F1AADD4u;
    // 7F1AADD4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AADD8:
    ctx->pc = 0x7F1AADD8u;
    // 7F1AADD8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1AADDC:
    ctx->pc = 0x7F1AADDCu;
    // 7F1AADDC: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AADE0:
    ctx->pc = 0x7F1AADE0u;
    // 7F1AADE0: stw     r30, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AADE4:
    ctx->pc = 0x7F1AADE4u;
    // 7F1AADE4: bc    12, 2, 0x7F1AAE3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAE3C;
        }
    }

label_7F1AADE8:
    ctx->pc = 0x7F1AADE8u;
    ctx->downcount -= 18;
    // 7F1AADE8: lis     r4, 214
    ctx->gpr[4] = ((u32)(s32)(214) << 16);

label_7F1AADEC:
    ctx->pc = 0x7F1AADECu;
    // 7F1AADEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AADF0:
    ctx->pc = 0x7F1AADF0u;
    // 7F1AADF0: addi    r0, r4, 6196
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(6196);

label_7F1AADF4:
    ctx->pc = 0x7F1AADF4u;
    // 7F1AADF4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1AADF8:
    ctx->pc = 0x7F1AADF8u;
    // 7F1AADF8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1AADFC:
    ctx->pc = 0x7F1AADFCu;
    // 7F1AADFC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAE00:
    ctx->pc = 0x7F1AAE00u;
    // 7F1AAE00: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1AAE04:
    ctx->pc = 0x7F1AAE04u;
    // 7F1AAE04: lis     r5, 252
    ctx->gpr[5] = ((u32)(s32)(252) << 16);

label_7F1AAE08:
    ctx->pc = 0x7F1AAE08u;
    // 7F1AAE08: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1AAE0C:
    ctx->pc = 0x7F1AAE0Cu;
    // 7F1AAE0C: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F1AAE10:
    ctx->pc = 0x7F1AAE10u;
    // 7F1AAE10: lfs     f1, 6536(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAE10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AAE14:
    ctx->pc = 0x7F1AAE14u;
    // 7F1AAE14: addi    r3, r5, -1681
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1681);

label_7F1AAE18:
    ctx->pc = 0x7F1AAE18u;
    // 7F1AAE18: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AAE1C:
    ctx->pc = 0x7F1AAE1Cu;
    // 7F1AAE1C: addi    r4, r4, 10078
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10078);

label_7F1AAE20:
    ctx->pc = 0x7F1AAE20u;
    // 7F1AAE20: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1AAE24:
    ctx->pc = 0x7F1AAE24u;
    // 7F1AAE24: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1AAE28:
    ctx->pc = 0x7F1AAE28u;
    // 7F1AAE28: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1AAE2C:
    ctx->pc = 0x7F1AAE2Cu;
    // 7F1AAE2C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1AAE30u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1AAE30:
    ctx->pc = 0x7F1AAE30u;
    ctx->downcount -= 3;
    // 7F1AAE30: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAE34:
    ctx->pc = 0x7F1AAE34u;
    // 7F1AAE34: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AAE38:
    ctx->pc = 0x7F1AAE38u;
    // 7F1AAE38: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1AAE3Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1AAE3C:
    ctx->pc = 0x7F1AAE3Cu;
    ctx->downcount -= 2;
    // 7F1AAE3C: rlwinm. r0, r31, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1AAE40:
    ctx->pc = 0x7F1AAE40u;
    // 7F1AAE40: bc    12, 2, 0x7F1AAE60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAE60;
        }
    }

label_7F1AAE44:
    ctx->pc = 0x7F1AAE44u;
    ctx->downcount -= 6;
    // 7F1AAE44: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AAE48:
    ctx->pc = 0x7F1AAE48u;
    // 7F1AAE48: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F1AAE4C:
    ctx->pc = 0x7F1AAE4Cu;
    // 7F1AAE4C: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F1AAE50:
    ctx->pc = 0x7F1AAE50u;
    // 7F1AAE50: li      r6, 21
    ctx->gpr[6] = (u32)(s32)(21);

label_7F1AAE54:
    ctx->pc = 0x7F1AAE54u;
    // 7F1AAE54: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F1AAE58:
    ctx->pc = 0x7F1AAE58u;
    // 7F1AAE58: bl      0x7F306788
    {
            ctx->lr = 0x7F1AAE5Cu;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F1AAE5C:
    ctx->pc = 0x7F1AAE5Cu;
    ctx->downcount -= 1;
    // 7F1AAE5C: stw     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AAE60:
    ctx->pc = 0x7F1AAE60u;
    ctx->downcount -= 17;
    // 7F1AAE60: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AAE64:
    ctx->pc = 0x7F1AAE64u;
    // 7F1AAE64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AAE68:
    ctx->pc = 0x7F1AAE68u;
    // 7F1AAE68: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAE6C:
    ctx->pc = 0x7F1AAE6Cu;
    // 7F1AAE6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAE70:
    ctx->pc = 0x7F1AAE70u;
    // 7F1AAE70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AAE74:
    ctx->pc = 0x7F1AAE74u;
    // 7F1AAE74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAE78:
    ctx->pc = 0x7F1AAE78u;
    ctx->downcount -= 22;
    // 7F1AAE78: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAE7C:
    ctx->pc = 0x7F1AAE7Cu;
    // 7F1AAE7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAE80:
    ctx->pc = 0x7F1AAE80u;
    // 7F1AAE80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AAE84:
    ctx->pc = 0x7F1AAE84u;
    // 7F1AAE84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAE88:
    ctx->pc = 0x7F1AAE88u;
    // 7F1AAE88: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AAE8C:
    ctx->pc = 0x7F1AAE8Cu;
    // 7F1AAE8C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAE90:
    ctx->pc = 0x7F1AAE90u;
    // 7F1AAE90: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AAE94:
    ctx->pc = 0x7F1AAE94u;
    // 7F1AAE94: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AAE98:
    ctx->pc = 0x7F1AAE98u;
    // 7F1AAE98: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1AAE9C:
    ctx->pc = 0x7F1AAE9Cu;
    // 7F1AAE9C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AAEA0:
    ctx->pc = 0x7F1AAEA0u;
    // 7F1AAEA0: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F1AAEA4:
    ctx->pc = 0x7F1AAEA4u;
    // 7F1AAEA4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AAEA8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AAEA8:
    ctx->pc = 0x7F1AAEA8u;
    ctx->downcount -= 2;
    // 7F1AAEA8: or.   r31, r3, r3
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

label_7F1AAEAC:
    ctx->pc = 0x7F1AAEACu;
    // 7F1AAEAC: bc    12, 2, 0x7F1AAF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAF18;
        }
    }

label_7F1AAEB0:
    ctx->pc = 0x7F1AAEB0u;
    ctx->downcount -= 5;
    // 7F1AAEB0: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AAEB4:
    ctx->pc = 0x7F1AAEB4u;
    // 7F1AAEB4: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AAEB8:
    ctx->pc = 0x7F1AAEB8u;
    // 7F1AAEB8: addi    r4, r4, -21148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21148);

label_7F1AAEBC:
    ctx->pc = 0x7F1AAEBCu;
    // 7F1AAEBC: addi    r5, r5, -21104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21104);

label_7F1AAEC0:
    ctx->pc = 0x7F1AAEC0u;
    // 7F1AAEC0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AAEC4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AAEC4:
    ctx->pc = 0x7F1AAEC4u;
    ctx->downcount -= 15;
    // 7F1AAEC4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAEC8:
    ctx->pc = 0x7F1AAEC8u;
    // 7F1AAEC8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1AAECC:
    ctx->pc = 0x7F1AAECCu;
    // 7F1AAECC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AAED0:
    ctx->pc = 0x7F1AAED0u;
    // 7F1AAED0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAED4:
    ctx->pc = 0x7F1AAED4u;
    // 7F1AAED4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1AAED8:
    ctx->pc = 0x7F1AAED8u;
    // 7F1AAED8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1AAEDC:
    ctx->pc = 0x7F1AAEDCu;
    // 7F1AAEDC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AAEE0:
    ctx->pc = 0x7F1AAEE0u;
    // 7F1AAEE0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AAEE4:
    ctx->pc = 0x7F1AAEE4u;
    // 7F1AAEE4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AAEE8:
    ctx->pc = 0x7F1AAEE8u;
    // 7F1AAEE8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AAEEC:
    ctx->pc = 0x7F1AAEECu;
    // 7F1AAEEC: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AAEF0:
    ctx->pc = 0x7F1AAEF0u;
    // 7F1AAEF0: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AAEF4:
    ctx->pc = 0x7F1AAEF4u;
    // 7F1AAEF4: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AAEF8:
    ctx->pc = 0x7F1AAEF8u;
    // 7F1AAEF8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAEFC:
    ctx->pc = 0x7F1AAEFCu;
    // 7F1AAEFC: bl      0x7F1AADBC
    {
            ctx->lr = 0x7F1AAF00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AADBCu;
                return;
            }
            goto label_7F1AADBC;
    }

label_7F1AAF00:
    ctx->pc = 0x7F1AAF00u;
    ctx->downcount -= 2;
    // 7F1AAF00: cmpwi   r3, 0
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

label_7F1AAF04:
    ctx->pc = 0x7F1AAF04u;
    // 7F1AAF04: bc    4, 0, 0x7F1AAF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAF18;
        }
    }

label_7F1AAF08:
    ctx->pc = 0x7F1AAF08u;
    ctx->downcount -= 2;
    // 7F1AAF08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAF0C:
    ctx->pc = 0x7F1AAF0Cu;
    // 7F1AAF0C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AAF10u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AAF10:
    ctx->pc = 0x7F1AAF10u;
    ctx->downcount -= 2;
    // 7F1AAF10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AAF14:
    ctx->pc = 0x7F1AAF14u;
    // 7F1AAF14: b       0x7F1AAF1C
    {
            goto label_7F1AAF1C;
    }

label_7F1AAF18:
    ctx->pc = 0x7F1AAF18u;
    ctx->downcount -= 1;
    // 7F1AAF18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAF1C:
    ctx->pc = 0x7F1AAF1Cu;
    ctx->downcount -= 16;
    // 7F1AAF1C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AAF20:
    ctx->pc = 0x7F1AAF20u;
    // 7F1AAF20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAF24:
    ctx->pc = 0x7F1AAF24u;
    // 7F1AAF24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAF28:
    ctx->pc = 0x7F1AAF28u;
    // 7F1AAF28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AAF2C:
    ctx->pc = 0x7F1AAF2Cu;
    // 7F1AAF2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAF30:
    ctx->pc = 0x7F1AAF30u;
    ctx->downcount -= 1;
    // 7F1AAF30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAF34:
    ctx->pc = 0x7F1AAF34u;
    ctx->downcount -= 1;
    // 7F1AAF34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAF38:
    ctx->pc = 0x7F1AAF38u;
    ctx->downcount -= 20;
    // 7F1AAF38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAF3C:
    ctx->pc = 0x7F1AAF3Cu;
    // 7F1AAF3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAF40:
    ctx->pc = 0x7F1AAF40u;
    // 7F1AAF40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAF44:
    ctx->pc = 0x7F1AAF44u;
    // 7F1AAF44: rlwinm. r0, r6, 0, 31, 31
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

label_7F1AAF48:
    ctx->pc = 0x7F1AAF48u;
    // 7F1AAF48: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AAF4C:
    ctx->pc = 0x7F1AAF4Cu;
    // 7F1AAF4C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AAF50:
    ctx->pc = 0x7F1AAF50u;
    // 7F1AAF50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAF54:
    ctx->pc = 0x7F1AAF54u;
    // 7F1AAF54: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AAF58:
    ctx->pc = 0x7F1AAF58u;
    // 7F1AAF58: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AAF5C:
    ctx->pc = 0x7F1AAF5Cu;
    // 7F1AAF5C: bc    12, 2, 0x7F1AAFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AAFC0;
        }
    }

label_7F1AAF60:
    ctx->pc = 0x7F1AAF60u;
    ctx->downcount -= 3;
    // 7F1AAF60: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1AAF64:
    ctx->pc = 0x7F1AAF64u;
    // 7F1AAF64: addi    r3, r3, -6968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6968);

label_7F1AAF68:
    ctx->pc = 0x7F1AAF68u;
    // 7F1AAF68: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1AAF6Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1AAF6C:
    ctx->pc = 0x7F1AAF6Cu;
    ctx->downcount -= 18;
    // 7F1AAF6C: lis     r5, 86
    ctx->gpr[5] = ((u32)(s32)(86) << 16);

label_7F1AAF70:
    ctx->pc = 0x7F1AAF70u;
    // 7F1AAF70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AAF74:
    ctx->pc = 0x7F1AAF74u;
    // 7F1AAF74: addi    r0, r5, 5994
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(5994);

label_7F1AAF78:
    ctx->pc = 0x7F1AAF78u;
    // 7F1AAF78: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1AAF7C:
    ctx->pc = 0x7F1AAF7Cu;
    // 7F1AAF7C: addi    r5, r4, 6544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6544);

label_7F1AAF80:
    ctx->pc = 0x7F1AAF80u;
    // 7F1AAF80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1AAF84:
    ctx->pc = 0x7F1AAF84u;
    // 7F1AAF84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AAF84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AAF88:
    ctx->pc = 0x7F1AAF88u;
    // 7F1AAF88: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1AAF8C:
    ctx->pc = 0x7F1AAF8Cu;
    // 7F1AAF8C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1AAF90:
    ctx->pc = 0x7F1AAF90u;
    // 7F1AAF90: lis     r9, 115
    ctx->gpr[9] = ((u32)(s32)(115) << 16);

label_7F1AAF94:
    ctx->pc = 0x7F1AAF94u;
    // 7F1AAF94: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAF98:
    ctx->pc = 0x7F1AAF98u;
    // 7F1AAF98: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAF9C:
    ctx->pc = 0x7F1AAF9Cu;
    // 7F1AAF9C: addi    r3, r9, 21366
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(21366);

label_7F1AAFA0:
    ctx->pc = 0x7F1AAFA0u;
    // 7F1AAFA0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AAFA4:
    ctx->pc = 0x7F1AAFA4u;
    // 7F1AAFA4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F1AAFA8:
    ctx->pc = 0x7F1AAFA8u;
    // 7F1AAFA8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1AAFAC:
    ctx->pc = 0x7F1AAFACu;
    // 7F1AAFAC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1AAFB0:
    ctx->pc = 0x7F1AAFB0u;
    // 7F1AAFB0: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1AAFB4u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1AAFB4:
    ctx->pc = 0x7F1AAFB4u;
    ctx->downcount -= 3;
    // 7F1AAFB4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAFB8:
    ctx->pc = 0x7F1AAFB8u;
    // 7F1AAFB8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AAFBC:
    ctx->pc = 0x7F1AAFBCu;
    // 7F1AAFBC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1AAFC0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1AAFC0:
    ctx->pc = 0x7F1AAFC0u;
    ctx->downcount -= 17;
    // 7F1AAFC0: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AAFC4:
    ctx->pc = 0x7F1AAFC4u;
    // 7F1AAFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AAFC8:
    ctx->pc = 0x7F1AAFC8u;
    // 7F1AAFC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AAFCC:
    ctx->pc = 0x7F1AAFCCu;
    // 7F1AAFCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AAFD0:
    ctx->pc = 0x7F1AAFD0u;
    // 7F1AAFD0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AAFD4:
    ctx->pc = 0x7F1AAFD4u;
    // 7F1AAFD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AAFD8:
    ctx->pc = 0x7F1AAFD8u;
    ctx->downcount -= 22;
    // 7F1AAFD8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AAFDC:
    ctx->pc = 0x7F1AAFDCu;
    // 7F1AAFDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AAFE0:
    ctx->pc = 0x7F1AAFE0u;
    // 7F1AAFE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1AAFE4:
    ctx->pc = 0x7F1AAFE4u;
    // 7F1AAFE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AAFE8:
    ctx->pc = 0x7F1AAFE8u;
    // 7F1AAFE8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AAFEC:
    ctx->pc = 0x7F1AAFECu;
    // 7F1AAFEC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AAFF0:
    ctx->pc = 0x7F1AAFF0u;
    // 7F1AAFF0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AAFF4:
    ctx->pc = 0x7F1AAFF4u;
    // 7F1AAFF4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1AAFF8:
    ctx->pc = 0x7F1AAFF8u;
    // 7F1AAFF8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1AAFFC:
    ctx->pc = 0x7F1AAFFCu;
    // 7F1AAFFC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1AB000:
    ctx->pc = 0x7F1AB000u;
    // 7F1AB000: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F1AB004:
    ctx->pc = 0x7F1AB004u;
    // 7F1AB004: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1AB008u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1AB008:
    ctx->pc = 0x7F1AB008u;
    ctx->downcount -= 2;
    // 7F1AB008: or.   r31, r3, r3
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

label_7F1AB00C:
    ctx->pc = 0x7F1AB00Cu;
    // 7F1AB00C: bc    12, 2, 0x7F1AB078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB078;
        }
    }

label_7F1AB010:
    ctx->pc = 0x7F1AB010u;
    ctx->downcount -= 5;
    // 7F1AB010: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1AB014:
    ctx->pc = 0x7F1AB014u;
    // 7F1AB014: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1AB018:
    ctx->pc = 0x7F1AB018u;
    // 7F1AB018: addi    r4, r4, -20688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20688);

label_7F1AB01C:
    ctx->pc = 0x7F1AB01Cu;
    // 7F1AB01C: addi    r5, r5, -20684
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20684);

label_7F1AB020:
    ctx->pc = 0x7F1AB020u;
    // 7F1AB020: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1AB024u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1AB024:
    ctx->pc = 0x7F1AB024u;
    ctx->downcount -= 15;
    // 7F1AB024: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB028:
    ctx->pc = 0x7F1AB028u;
    // 7F1AB028: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1AB02C:
    ctx->pc = 0x7F1AB02Cu;
    // 7F1AB02C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1AB030:
    ctx->pc = 0x7F1AB030u;
    // 7F1AB030: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AB034:
    ctx->pc = 0x7F1AB034u;
    // 7F1AB034: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1AB038:
    ctx->pc = 0x7F1AB038u;
    // 7F1AB038: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1AB03C:
    ctx->pc = 0x7F1AB03Cu;
    // 7F1AB03C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AB040:
    ctx->pc = 0x7F1AB040u;
    // 7F1AB040: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AB044:
    ctx->pc = 0x7F1AB044u;
    // 7F1AB044: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AB048:
    ctx->pc = 0x7F1AB048u;
    // 7F1AB048: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AB04C:
    ctx->pc = 0x7F1AB04Cu;
    // 7F1AB04C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AB050:
    ctx->pc = 0x7F1AB050u;
    // 7F1AB050: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AB054:
    ctx->pc = 0x7F1AB054u;
    // 7F1AB054: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1AB058:
    ctx->pc = 0x7F1AB058u;
    // 7F1AB058: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB05C:
    ctx->pc = 0x7F1AB05Cu;
    // 7F1AB05C: bl      0x7F1AAF38
    {
            ctx->lr = 0x7F1AB060u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AAF38u;
                return;
            }
            goto label_7F1AAF38;
    }

label_7F1AB060:
    ctx->pc = 0x7F1AB060u;
    ctx->downcount -= 2;
    // 7F1AB060: cmpwi   r3, 0
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

label_7F1AB064:
    ctx->pc = 0x7F1AB064u;
    // 7F1AB064: bc    4, 0, 0x7F1AB078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB078;
        }
    }

label_7F1AB068:
    ctx->pc = 0x7F1AB068u;
    ctx->downcount -= 2;
    // 7F1AB068: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AB06C:
    ctx->pc = 0x7F1AB06Cu;
    // 7F1AB06C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AB070u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AB070:
    ctx->pc = 0x7F1AB070u;
    ctx->downcount -= 2;
    // 7F1AB070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AB074:
    ctx->pc = 0x7F1AB074u;
    // 7F1AB074: b       0x7F1AB07C
    {
            goto label_7F1AB07C;
    }

label_7F1AB078:
    ctx->pc = 0x7F1AB078u;
    ctx->downcount -= 1;
    // 7F1AB078: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AB07C:
    ctx->pc = 0x7F1AB07Cu;
    ctx->downcount -= 16;
    // 7F1AB07C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AB080:
    ctx->pc = 0x7F1AB080u;
    // 7F1AB080: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB084:
    ctx->pc = 0x7F1AB084u;
    // 7F1AB084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AB088:
    ctx->pc = 0x7F1AB088u;
    // 7F1AB088: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1AB08C:
    ctx->pc = 0x7F1AB08Cu;
    // 7F1AB08C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AB090:
    ctx->pc = 0x7F1AB090u;
    ctx->downcount -= 8;
    // 7F1AB090: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AB094:
    ctx->pc = 0x7F1AB094u;
    // 7F1AB094: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AB098:
    ctx->pc = 0x7F1AB098u;
    // 7F1AB098: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB09C:
    ctx->pc = 0x7F1AB09Cu;
    // 7F1AB09C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB0A0:
    ctx->pc = 0x7F1AB0A0u;
    // 7F1AB0A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB0A4:
    ctx->pc = 0x7F1AB0A4u;
    // 7F1AB0A4: lfs     f2, 6556(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB0A8:
    ctx->pc = 0x7F1AB0A8u;
    // 7F1AB0A8: lfs     f0, 6560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB0AC:
    ctx->pc = 0x7F1AB0ACu;
    // 7F1AB0AC: b       0x7F1AB0B4
    {
            goto label_7F1AB0B4;
    }

label_7F1AB0B0:
    ctx->pc = 0x7F1AB0B0u;
    ctx->downcount -= 1;
    // 7F1AB0B0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0B0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AB0B4:
    ctx->pc = 0x7F1AB0B4u;
    ctx->downcount -= 2;
    // 7F1AB0B4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AB0B8:
    // 7F1AB0B8: bc    12, 1, 0x7F1AB0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB0B0u;
                return;
            }
            goto label_7F1AB0B0;
        }
    }

label_7F1AB0BC:
    ctx->pc = 0x7F1AB0BCu;
    ctx->downcount -= 5;
    // 7F1AB0BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB0C0:
    ctx->pc = 0x7F1AB0C0u;
    // 7F1AB0C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB0C4:
    ctx->pc = 0x7F1AB0C4u;
    // 7F1AB0C4: lfs     f2, 6556(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6556);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB0C8:
    ctx->pc = 0x7F1AB0C8u;
    // 7F1AB0C8: lfs     f0, 6564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB0CC:
    ctx->pc = 0x7F1AB0CCu;
    // 7F1AB0CC: b       0x7F1AB0D4
    {
            goto label_7F1AB0D4;
    }

label_7F1AB0D0:
    ctx->pc = 0x7F1AB0D0u;
    ctx->downcount -= 1;
    // 7F1AB0D0: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0D0u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F1AB0D4:
    ctx->pc = 0x7F1AB0D4u;
    ctx->downcount -= 2;
    // 7F1AB0D4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AB0D8:
    // 7F1AB0D8: bc    12, 0, 0x7F1AB0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB0D0u;
                return;
            }
            goto label_7F1AB0D0;
        }
    }

label_7F1AB0DC:
    ctx->pc = 0x7F1AB0DCu;
    ctx->downcount -= 4;
    // 7F1AB0DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB0E0:
    ctx->pc = 0x7F1AB0E0u;
    // 7F1AB0E0: lfs     f0, 6568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB0E4:
    ctx->pc = 0x7F1AB0E4u;
    // 7F1AB0E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AB0E8:
    ctx->pc = 0x7F1AB0E8u;
    // 7F1AB0E8: bc    4, 1, 0x7F1AB0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB0F8;
        }
    }

label_7F1AB0EC:
    ctx->pc = 0x7F1AB0ECu;
    ctx->downcount -= 3;
    // 7F1AB0EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB0F0:
    ctx->pc = 0x7F1AB0F0u;
    // 7F1AB0F0: lfs     f0, 6560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB0F4:
    ctx->pc = 0x7F1AB0F4u;
    // 7F1AB0F4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0F4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1AB0F8:
    ctx->pc = 0x7F1AB0F8u;
    ctx->downcount -= 4;
    // 7F1AB0F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB0FC:
    ctx->pc = 0x7F1AB0FCu;
    // 7F1AB0FC: lfs     f0, 6572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB0FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB100:
    ctx->pc = 0x7F1AB100u;
    // 7F1AB100: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB100u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AB104:
    ctx->pc = 0x7F1AB104u;
    // 7F1AB104: bc    4, 0, 0x7F1AB114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB114;
        }
    }

label_7F1AB108:
    ctx->pc = 0x7F1AB108u;
    ctx->downcount -= 3;
    // 7F1AB108: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB10C:
    ctx->pc = 0x7F1AB10Cu;
    // 7F1AB10C: lfs     f0, 6564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB10Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB110:
    ctx->pc = 0x7F1AB110u;
    // 7F1AB110: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB110u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1AB114:
    ctx->pc = 0x7F1AB114u;
    ctx->downcount -= 1;
    // 7F1AB114: bl      0x7F008330
    {
            ctx->lr = 0x7F1AB118u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F1AB118:
    ctx->pc = 0x7F1AB118u;
    ctx->downcount -= 5;
    // 7F1AB118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB11C:
    ctx->pc = 0x7F1AB11Cu;
    // 7F1AB11C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AB120:
    ctx->pc = 0x7F1AB120u;
    // 7F1AB120: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AB124:
    ctx->pc = 0x7F1AB124u;
    // 7F1AB124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AB128:
    ctx->pc = 0x7F1AB128u;
    ctx->downcount -= 50;
    // 7F1AB128: stwu     r1, -320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-320);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AB12C:
    ctx->pc = 0x7F1AB12Cu;
    // 7F1AB12C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AB130:
    ctx->pc = 0x7F1AB130u;
    // 7F1AB130: stw     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB134:
    ctx->pc = 0x7F1AB134u;
    // 7F1AB134: stfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1AB138:
    ctx->pc = 0x7F1AB138u;
    // 7F1AB138: psq_st   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1AB138u);
        if (ctx->exception) return;
    }

label_7F1AB13C:
    ctx->pc = 0x7F1AB13Cu;
    // 7F1AB13C: stfd     f30, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1AB140:
    ctx->pc = 0x7F1AB140u;
    // 7F1AB140: psq_st   f30, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1AB140u);
        if (ctx->exception) return;
    }

label_7F1AB144:
    ctx->pc = 0x7F1AB144u;
    // 7F1AB144: stfd     f29, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1AB148:
    ctx->pc = 0x7F1AB148u;
    // 7F1AB148: psq_st   f29, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1AB148u);
        if (ctx->exception) return;
    }

label_7F1AB14C:
    ctx->pc = 0x7F1AB14Cu;
    // 7F1AB14C: stfd     f28, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB14Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1AB150:
    ctx->pc = 0x7F1AB150u;
    // 7F1AB150: psq_st   f28, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1AB150u);
        if (ctx->exception) return;
    }

label_7F1AB154:
    ctx->pc = 0x7F1AB154u;
    // 7F1AB154: stfd     f27, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1AB158:
    ctx->pc = 0x7F1AB158u;
    // 7F1AB158: psq_st   f27, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1AB158u);
        if (ctx->exception) return;
    }

label_7F1AB15C:
    ctx->pc = 0x7F1AB15Cu;
    // 7F1AB15C: stfd     f26, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB15Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F1AB160:
    ctx->pc = 0x7F1AB160u;
    // 7F1AB160: psq_st   f26, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F1AB160u);
        if (ctx->exception) return;
    }

label_7F1AB164:
    ctx->pc = 0x7F1AB164u;
    // 7F1AB164: stfd     f25, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F1AB168:
    ctx->pc = 0x7F1AB168u;
    // 7F1AB168: psq_st   f25, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F1AB168u);
        if (ctx->exception) return;
    }

label_7F1AB16C:
    ctx->pc = 0x7F1AB16Cu;
    // 7F1AB16C: stmw     r23, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1AB170:
    ctx->pc = 0x7F1AB170u;
    // 7F1AB170: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AB174:
    ctx->pc = 0x7F1AB174u;
    // 7F1AB174: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB178:
    ctx->pc = 0x7F1AB178u;
    // 7F1AB178: addi    r24, r23, 160
    ctx->gpr[24] = ctx->gpr[23] + (u32)(s32)(160);

label_7F1AB17C:
    ctx->pc = 0x7F1AB17Cu;
    // 7F1AB17C: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB180:
    ctx->pc = 0x7F1AB180u;
    // 7F1AB180: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1AB184:
    ctx->pc = 0x7F1AB184u;
    // 7F1AB184: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB188:
    ctx->pc = 0x7F1AB188u;
    // 7F1AB188: lwz     r5, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AB18C:
    ctx->pc = 0x7F1AB18Cu;
    // 7F1AB18C: lwz     r3, 2048(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2048);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB190:
    ctx->pc = 0x7F1AB190u;
    // 7F1AB190: lwz     r4, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AB194:
    ctx->pc = 0x7F1AB194u;
    // 7F1AB194: addi    r6, r5, 184
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(184);

label_7F1AB198:
    ctx->pc = 0x7F1AB198u;
    // 7F1AB198: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1AB19C:
    ctx->pc = 0x7F1AB19Cu;
    // 7F1AB19C: rlwinm r29, r4, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F1AB1A0:
    ctx->pc = 0x7F1AB1A0u;
    // 7F1AB1A0: subfic  r3, r4, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AB1A4:
    ctx->pc = 0x7F1AB1A4u;
    // 7F1AB1A4: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F1AB1A8:
    ctx->pc = 0x7F1AB1A8u;
    // 7F1AB1A8: lwzx    r28, r6, r29
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1AB1AC:
    ctx->pc = 0x7F1AB1ACu;
    // 7F1AB1AC: add   r3, r5, r29
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB1B0:
    ctx->pc = 0x7F1AB1B0u;
    // 7F1AB1B0: lwzx    r31, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1AB1B4:
    ctx->pc = 0x7F1AB1B4u;
    // 7F1AB1B4: lwz     r25, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F1AB1B8:
    ctx->pc = 0x7F1AB1B8u;
    // 7F1AB1B8: stw     r0, 2048(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB1BC:
    ctx->pc = 0x7F1AB1BCu;
    // 7F1AB1BC: lwz     r0, 2048(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB1C0:
    ctx->pc = 0x7F1AB1C0u;
    // 7F1AB1C0: cmpwi   r0, 0
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

label_7F1AB1C4:
    ctx->pc = 0x7F1AB1C4u;
    // 7F1AB1C4: bc    4, 2, 0x7F1AB228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB228;
        }
    }

label_7F1AB1C8:
    ctx->pc = 0x7F1AB1C8u;
    ctx->downcount -= 56;
    // 7F1AB1C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1AB1CC:
    ctx->pc = 0x7F1AB1CCu;
    // 7F1AB1CC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AB1D0:
    ctx->pc = 0x7F1AB1D0u;
    // 7F1AB1D0: stw     r3, 148(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB1D4:
    ctx->pc = 0x7F1AB1D4u;
    // 7F1AB1D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB1D8:
    ctx->pc = 0x7F1AB1D8u;
    // 7F1AB1D8: addi    r4, r3, 6576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6576);

label_7F1AB1DC:
    ctx->pc = 0x7F1AB1DCu;
    // 7F1AB1DC: lwz     r3, 2052(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2052);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB1E0:
    ctx->pc = 0x7F1AB1E0u;
    // 7F1AB1E0: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB1E4:
    ctx->pc = 0x7F1AB1E4u;
    // 7F1AB1E4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AB1E8:
    ctx->pc = 0x7F1AB1E8u;
    // 7F1AB1E8: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB1E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB1EC:
    ctx->pc = 0x7F1AB1ECu;
    // 7F1AB1EC: stw     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB1F0:
    ctx->pc = 0x7F1AB1F0u;
    // 7F1AB1F0: lfs     f1, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB1F0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB1F4:
    ctx->pc = 0x7F1AB1F4u;
    // 7F1AB1F4: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB1F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB1F8:
    ctx->pc = 0x7F1AB1F8u;
    // 7F1AB1F8: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB1FC:
    ctx->pc = 0x7F1AB1FCu;
    // 7F1AB1FC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB1FCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AB200:
    ctx->pc = 0x7F1AB200u;
    // 7F1AB200: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB200u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1AB204:
    ctx->pc = 0x7F1AB204u;
    // 7F1AB204: stfs     f0, 156(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB204u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB208:
    ctx->pc = 0x7F1AB208u;
    // 7F1AB208: lwz     r0, 2052(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2052);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB20C:
    ctx->pc = 0x7F1AB20Cu;
    // 7F1AB20C: lfs     f1, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB20Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB210:
    ctx->pc = 0x7F1AB210u;
    // 7F1AB210: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AB214:
    ctx->pc = 0x7F1AB214u;
    // 7F1AB214: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB218:
    ctx->pc = 0x7F1AB218u;
    // 7F1AB218: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB21C:
    ctx->pc = 0x7F1AB21Cu;
    // 7F1AB21C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB21Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AB220:
    ctx->pc = 0x7F1AB220u;
    // 7F1AB220: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB220u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1AB224:
    ctx->pc = 0x7F1AB224u;
    // 7F1AB224: stfs     f0, 152(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB224u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB228:
    ctx->pc = 0x7F1AB228u;
    ctx->downcount -= 4;
    // 7F1AB228: addi    r3, r23, 2000
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(2000);

label_7F1AB22C:
    ctx->pc = 0x7F1AB22Cu;
    // 7F1AB22C: addi    r4, r23, 76
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(76);

label_7F1AB230:
    ctx->pc = 0x7F1AB230u;
    // 7F1AB230: addi    r5, r23, 60
    ctx->gpr[5] = ctx->gpr[23] + (u32)(s32)(60);

label_7F1AB234:
    ctx->pc = 0x7F1AB234u;
    // 7F1AB234: bl      0x800261D8
    {
            ctx->lr = 0x7F1AB238u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1AB238:
    ctx->pc = 0x7F1AB238u;
    ctx->downcount -= 3;
    // 7F1AB238: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F1AB23C:
    ctx->pc = 0x7F1AB23Cu;
    // 7F1AB23C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AB240:
    ctx->pc = 0x7F1AB240u;
    // 7F1AB240: bl      0x800260DC
    {
            ctx->lr = 0x7F1AB244u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F1AB244:
    ctx->pc = 0x7F1AB244u;
    ctx->downcount -= 4;
    // 7F1AB244: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB248:
    ctx->pc = 0x7F1AB248u;
    // 7F1AB248: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB248u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB24C:
    ctx->pc = 0x7F1AB24Cu;
    // 7F1AB24C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB24Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1AB250:
    ctx->pc = 0x7F1AB250u;
    // 7F1AB250: bc    4, 1, 0x7F1AB260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB260;
        }
    }

label_7F1AB254:
    ctx->pc = 0x7F1AB254u;
    ctx->downcount -= 3;
    // 7F1AB254: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F1AB258:
    ctx->pc = 0x7F1AB258u;
    // 7F1AB258: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AB25C:
    ctx->pc = 0x7F1AB25Cu;
    // 7F1AB25C: bl      0x7F114F50
    {
            ctx->lr = 0x7F1AB260u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1AB260:
    ctx->pc = 0x7F1AB260u;
    ctx->downcount -= 3;
    // 7F1AB260: lwz     r3, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB264:
    ctx->pc = 0x7F1AB264u;
    // 7F1AB264: addic.  r27, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1AB268:
    ctx->pc = 0x7F1AB268u;
    // 7F1AB268: bc    4, 0, 0x7F1AB270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB270;
        }
    }

label_7F1AB26C:
    ctx->pc = 0x7F1AB26Cu;
    ctx->downcount -= 1;
    // 7F1AB26C: li      r27, 63
    ctx->gpr[27] = (u32)(s32)(63);

label_7F1AB270:
    ctx->pc = 0x7F1AB270u;
    ctx->downcount -= 5;
    // 7F1AB270: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB274:
    ctx->pc = 0x7F1AB274u;
    // 7F1AB274: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1AB278:
    ctx->pc = 0x7F1AB278u;
    // 7F1AB278: lfs     f28, 6584(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB278u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1AB27C:
    ctx->pc = 0x7F1AB27Cu;
    // 7F1AB27C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1AB280:
    ctx->pc = 0x7F1AB280u;
    // 7F1AB280: addi    r30, r4, -6704
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-6704);

label_7F1AB284:
    ctx->pc = 0x7F1AB284u;
    ctx->downcount -= 4;
    // 7F1AB284: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB284u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB288:
    // 7F1AB288: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1AB28C:
    // 7F1AB28C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB290:
    // 7F1AB290: bl      0x800261FC
    {
            ctx->lr = 0x7F1AB294u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1AB294:
    ctx->downcount -= 4;
    // 7F1AB294: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AB298:
    // 7F1AB298: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AB29C:
    // 7F1AB29C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB2A0:
    // 7F1AB2A0: bl      0x800261B4
    {
            ctx->lr = 0x7F1AB2A4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1AB2A4:
    ctx->pc = 0x7F1AB2A4u;
    ctx->downcount -= 8;
    // 7F1AB2A4: lfs     f2, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2A4u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB2A8:
    ctx->pc = 0x7F1AB2A8u;
    // 7F1AB2A8: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2A8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB2AC:
    ctx->pc = 0x7F1AB2ACu;
    // 7F1AB2AC: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2ACu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB2B0:
    ctx->pc = 0x7F1AB2B0u;
    // 7F1AB2B0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2B0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AB2B4:
    ctx->pc = 0x7F1AB2B4u;
    // 7F1AB2B4: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2B4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB2B8:
    ctx->pc = 0x7F1AB2B8u;
    // 7F1AB2B8: lfs     f2, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB2BC:
    ctx->pc = 0x7F1AB2BCu;
    // 7F1AB2BC: fcmpu   cr0, f28, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[28], ctx->fpr[2], false);

label_7F1AB2C0:
    // 7F1AB2C0: bc    4, 2, 0x7F1AB2E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB2E8;
        }
    }

label_7F1AB2C4:
    ctx->downcount -= 9;
    // 7F1AB2C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB2C8:
    ctx->pc = 0x7F1AB2C8u;
    // 7F1AB2C8: lfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2C8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB2CC:
    ctx->pc = 0x7F1AB2CCu;
    // 7F1AB2CC: lfs     f1, 6588(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB2D0:
    ctx->pc = 0x7F1AB2D0u;
    // 7F1AB2D0: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2D0u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB2D4:
    ctx->pc = 0x7F1AB2D4u;
    // 7F1AB2D4: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2D4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB2D8:
    ctx->pc = 0x7F1AB2D8u;
    // 7F1AB2D8: lfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2D8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB2DC:
    ctx->pc = 0x7F1AB2DCu;
    // 7F1AB2DC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2DCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB2E0:
    ctx->pc = 0x7F1AB2E0u;
    // 7F1AB2E0: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2E0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB2E4:
    // 7F1AB2E4: b       0x7F1AB31C
    {
            goto label_7F1AB31C;
    }

label_7F1AB2E8:
    ctx->downcount -= 4;
    // 7F1AB2E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB2EC:
    ctx->pc = 0x7F1AB2ECu;
    // 7F1AB2EC: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB2F0:
    ctx->pc = 0x7F1AB2F0u;
    // 7F1AB2F0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1AB2F4:
    // 7F1AB2F4: bc    4, 1, 0x7F1AB31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB31C;
        }
    }

label_7F1AB2F8:
    ctx->downcount -= 3;
    // 7F1AB2F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB2FC:
    ctx->pc = 0x7F1AB2FCu;
    // 7F1AB2FC: lfs     f1, 6588(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB2FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB300:
    // 7F1AB300: bl      0x7F17D320
    {
            ctx->lr = 0x7F1AB304u;
            ctx->pc = 0x7F17D320u;
            return;
    }

label_7F1AB304:
    ctx->pc = 0x7F1AB304u;
    ctx->downcount -= 6;
    // 7F1AB304: lfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB304u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB308:
    ctx->pc = 0x7F1AB308u;
    // 7F1AB308: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB308u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB30C:
    ctx->pc = 0x7F1AB30Cu;
    // 7F1AB30C: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB30Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB310:
    ctx->pc = 0x7F1AB310u;
    // 7F1AB310: lfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB310u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB314:
    ctx->pc = 0x7F1AB314u;
    // 7F1AB314: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB314u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB318:
    ctx->pc = 0x7F1AB318u;
    // 7F1AB318: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB318u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB31C:
    ctx->pc = 0x7F1AB31Cu;
    ctx->downcount -= 4;
    // 7F1AB31C: lwz     r6, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AB320:
    // 7F1AB320: addi    r0, r6, -1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F1AB324:
    // 7F1AB324: subf.   r3, r26, r0
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1AB328:
    // 7F1AB328: bc    4, 0, 0x7F1AB330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB330;
        }
    }

label_7F1AB32C:
    ctx->downcount -= 1;
    // 7F1AB32C: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F1AB330:
    ctx->pc = 0x7F1AB330u;
    ctx->downcount -= 3;
    // 7F1AB330: lwz     r0, 140(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB334:
    // 7F1AB334: cmpwi   r0, 0
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

label_7F1AB338:
    // 7F1AB338: bc    12, 2, 0x7F1AB384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB384;
        }
    }

label_7F1AB33C:
    ctx->downcount -= 18;
    // 7F1AB33C: subfic  r4, r3, 64
    {
        u64 res = (u64)(u32)(s32)(64) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AB340:
    // 7F1AB340: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AB344:
    // 7F1AB344: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1AB348:
    // 7F1AB348: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AB34C:
    ctx->pc = 0x7F1AB34Cu;
    // 7F1AB34C: stw     r4, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AB350:
    // 7F1AB350: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB354:
    ctx->pc = 0x7F1AB354u;
    // 7F1AB354: lfd     f2, 6576(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB354u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB358:
    ctx->pc = 0x7F1AB358u;
    // 7F1AB358: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB35C:
    ctx->pc = 0x7F1AB35Cu;
    // 7F1AB35C: lfs     f3, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB35Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AB360:
    ctx->pc = 0x7F1AB360u;
    // 7F1AB360: lfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB364:
    ctx->pc = 0x7F1AB364u;
    // 7F1AB364: lfs     f0, 6592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB364u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB368:
    ctx->pc = 0x7F1AB368u;
    // 7F1AB368: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB368u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1AB36C:
    ctx->pc = 0x7F1AB36Cu;
    // 7F1AB36C: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB36Cu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F1AB370:
    ctx->pc = 0x7F1AB370u;
    // 7F1AB370: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB370u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB374:
    ctx->pc = 0x7F1AB374u;
    // 7F1AB374: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB374u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB378:
    ctx->pc = 0x7F1AB378u;
    // 7F1AB378: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB37C:
    ctx->pc = 0x7F1AB37Cu;
    // 7F1AB37C: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB380:
    // 7F1AB380: b       0x7F1AB3F0
    {
            goto label_7F1AB3F0;
    }

label_7F1AB384:
    ctx->downcount -= 2;
    // 7F1AB384: cmpwi   r6, 0
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

label_7F1AB388:
    // 7F1AB388: bc    4, 2, 0x7F1AB394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB394;
        }
    }

label_7F1AB38C:
    ctx->downcount -= 2;
    // 7F1AB38C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB390:
    // 7F1AB390: b       0x7F1AB3F0
    {
            goto label_7F1AB3F0;
    }

label_7F1AB394:
    ctx->downcount -= 2;
    // 7F1AB394: cmpw    r26, r6
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB398:
    // 7F1AB398: bc    4, 1, 0x7F1AB3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB3A4;
        }
    }

label_7F1AB39C:
    ctx->downcount -= 2;
    // 7F1AB39C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB3A0:
    // 7F1AB3A0: b       0x7F1AB3F0
    {
            goto label_7F1AB3F0;
    }

label_7F1AB3A4:
    ctx->downcount -= 35;
    // 7F1AB3A4: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1AB3A8:
    // 7F1AB3A8: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F1AB3AC:
    ctx->pc = 0x7F1AB3ACu;
    // 7F1AB3AC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB3B0:
    // 7F1AB3B0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AB3B4:
    // 7F1AB3B4: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1AB3B8:
    ctx->pc = 0x7F1AB3B8u;
    // 7F1AB3B8: lfd     f2, 6576(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB3BC:
    ctx->pc = 0x7F1AB3BCu;
    // 7F1AB3BC: stw     r4, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AB3C0:
    ctx->pc = 0x7F1AB3C0u;
    // 7F1AB3C0: lfs     f3, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3C0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AB3C4:
    ctx->pc = 0x7F1AB3C4u;
    // 7F1AB3C4: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB3C8:
    ctx->pc = 0x7F1AB3C8u;
    // 7F1AB3C8: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB3CC:
    ctx->pc = 0x7F1AB3CCu;
    // 7F1AB3CC: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3CCu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1AB3D0:
    ctx->pc = 0x7F1AB3D0u;
    // 7F1AB3D0: stw     r4, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AB3D4:
    ctx->pc = 0x7F1AB3D4u;
    // 7F1AB3D4: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB3D8:
    ctx->pc = 0x7F1AB3D8u;
    // 7F1AB3D8: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3D8u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F1AB3DC:
    ctx->pc = 0x7F1AB3DCu;
    // 7F1AB3DC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3DCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1AB3E0:
    ctx->pc = 0x7F1AB3E0u;
    // 7F1AB3E0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3E0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1AB3E4:
    ctx->pc = 0x7F1AB3E4u;
    // 7F1AB3E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB3E8:
    ctx->pc = 0x7F1AB3E8u;
    // 7F1AB3E8: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB3E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB3EC:
    ctx->pc = 0x7F1AB3ECu;
    // 7F1AB3EC: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB3F0:
    ctx->pc = 0x7F1AB3F0u;
    ctx->downcount -= 4;
    // 7F1AB3F0: stb     r0, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1AB3F4:
    ctx->pc = 0x7F1AB3F4u;
    // 7F1AB3F4: lbz     r0, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1AB3F8:
    // 7F1AB3F8: cmplwi  r0, 0x0000
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

label_7F1AB3FC:
    // 7F1AB3FC: bc    12, 2, 0x7F1AB48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB48C;
        }
    }

label_7F1AB400:
    ctx->downcount -= 35;
    // 7F1AB400: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1AB404:
    // 7F1AB404: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1AB408:
    ctx->pc = 0x7F1AB408u;
    // 7F1AB408: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB40C:
    // 7F1AB40C: subfic  r0, r3, 64
    {
        u64 res = (u64)(u32)(s32)(64) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1AB410:
    // 7F1AB410: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AB414:
    // 7F1AB414: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB418:
    ctx->pc = 0x7F1AB418u;
    // 7F1AB418: stw     r4, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AB41C:
    // 7F1AB41C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AB420:
    ctx->pc = 0x7F1AB420u;
    // 7F1AB420: lfd     f4, 6576(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB420u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6576);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB424:
    ctx->pc = 0x7F1AB424u;
    // 7F1AB424: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB424u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB428:
    ctx->pc = 0x7F1AB428u;
    // 7F1AB428: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB42C:
    ctx->pc = 0x7F1AB42Cu;
    // 7F1AB42C: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1AB42Cu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F1AB430:
    ctx->pc = 0x7F1AB430u;
    // 7F1AB430: lfs     f1, 100(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB430u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB434:
    ctx->pc = 0x7F1AB434u;
    // 7F1AB434: stw     r4, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1AB438:
    ctx->pc = 0x7F1AB438u;
    // 7F1AB438: lfs     f5, 16(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB438u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1AB43C:
    ctx->pc = 0x7F1AB43Cu;
    // 7F1AB43C: lfd     f3, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB43Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB440:
    ctx->pc = 0x7F1AB440u;
    // 7F1AB440: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB440u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F1AB444:
    ctx->pc = 0x7F1AB444u;
    // 7F1AB444: lfs     f2, 6592(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB444u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB448:
    ctx->pc = 0x7F1AB448u;
    // 7F1AB448: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1AB448u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_7F1AB44C:
    ctx->pc = 0x7F1AB44Cu;
    // 7F1AB44C: lfs     f0, 20(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB44Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB450:
    ctx->pc = 0x7F1AB450u;
    // 7F1AB450: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB450u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_7F1AB454:
    ctx->pc = 0x7F1AB454u;
    // 7F1AB454: fmuls   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1AB454u)) return;
    ppc_fmuls(ctx, 3, 5, 3);

label_7F1AB458:
    ctx->pc = 0x7F1AB458u;
    // 7F1AB458: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB458u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1AB45C:
    ctx->pc = 0x7F1AB45Cu;
    // 7F1AB45C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB45Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB460:
    ctx->pc = 0x7F1AB460u;
    // 7F1AB460: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB460u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB464:
    ctx->pc = 0x7F1AB464u;
    // 7F1AB464: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB464u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB468:
    ctx->pc = 0x7F1AB468u;
    // 7F1AB468: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB46C:
    ctx->pc = 0x7F1AB46Cu;
    // 7F1AB46C: sth     r0, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB470:
    ctx->pc = 0x7F1AB470u;
    // 7F1AB470: lfs     f0, 24(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB470u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB474:
    ctx->pc = 0x7F1AB474u;
    // 7F1AB474: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB474u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB478:
    ctx->pc = 0x7F1AB478u;
    // 7F1AB478: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB478u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB47C:
    ctx->pc = 0x7F1AB47Cu;
    // 7F1AB47C: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB47Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB480:
    ctx->pc = 0x7F1AB480u;
    // 7F1AB480: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB484:
    ctx->pc = 0x7F1AB484u;
    // 7F1AB484: sth     r0, 10(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB488:
    // 7F1AB488: b       0x7F1AB498
    {
            goto label_7F1AB498;
    }

label_7F1AB48C:
    ctx->downcount -= 3;
    // 7F1AB48C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB490:
    ctx->pc = 0x7F1AB490u;
    // 7F1AB490: sth     r0, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB494:
    ctx->pc = 0x7F1AB494u;
    // 7F1AB494: sth     r0, 10(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB498:
    ctx->downcount -= 2;
    // 7F1AB498: cmpw    r26, r27
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB49C:
    // 7F1AB49C: bc    4, 2, 0x7F1AB4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB4C0;
        }
    }

label_7F1AB4A0:
    ctx->pc = 0x7F1AB4A0u;
    ctx->downcount -= 8;
    // 7F1AB4A0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB4A4:
    ctx->pc = 0x7F1AB4A4u;
    // 7F1AB4A4: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB4A8:
    ctx->pc = 0x7F1AB4A8u;
    // 7F1AB4A8: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB4AC:
    ctx->pc = 0x7F1AB4ACu;
    // 7F1AB4AC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB4B0:
    ctx->pc = 0x7F1AB4B0u;
    // 7F1AB4B0: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB4B4:
    ctx->pc = 0x7F1AB4B4u;
    // 7F1AB4B4: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB4B8:
    ctx->pc = 0x7F1AB4B8u;
    // 7F1AB4B8: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB4BC:
    ctx->pc = 0x7F1AB4BCu;
    // 7F1AB4BC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB4C0:
    ctx->downcount -= 7;
    // 7F1AB4C0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1AB4C4:
    // 7F1AB4C4: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1AB4C8:
    // 7F1AB4C8: cmpwi   r26, 64
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB4CC:
    // 7F1AB4CC: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F1AB4D0:
    // 7F1AB4D0: addi    r24, r24, 28
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(28);

label_7F1AB4D4:
    // 7F1AB4D4: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F1AB4D8:
    // 7F1AB4D8: bc    12, 0, 0x7F1AB284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB284u;
                return;
            }
            goto label_7F1AB284;
        }
    }

label_7F1AB4DC:
    ctx->pc = 0x7F1AB4DCu;
    ctx->downcount -= 3;
    // 7F1AB4DC: lwz     r0, 148(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB4E0:
    ctx->pc = 0x7F1AB4E0u;
    // 7F1AB4E0: cmpwi   r0, 0
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

label_7F1AB4E4:
    ctx->pc = 0x7F1AB4E4u;
    // 7F1AB4E4: bc    4, 2, 0x7F1ABA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABA64;
        }
    }

label_7F1AB4E8:
    ctx->pc = 0x7F1AB4E8u;
    ctx->downcount -= 4;
    // 7F1AB4E8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AB4EC:
    ctx->pc = 0x7F1AB4ECu;
    // 7F1AB4EC: addi    r4, r23, 2000
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(2000);

label_7F1AB4F0:
    ctx->pc = 0x7F1AB4F0u;
    // 7F1AB4F0: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB4F4:
    ctx->pc = 0x7F1AB4F4u;
    // 7F1AB4F4: bl      0x800261D8
    {
            ctx->lr = 0x7F1AB4F8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1AB4F8:
    ctx->pc = 0x7F1AB4F8u;
    ctx->downcount -= 3;
    // 7F1AB4F8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB4FC:
    ctx->pc = 0x7F1AB4FCu;
    // 7F1AB4FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AB500:
    ctx->pc = 0x7F1AB500u;
    // 7F1AB500: bl      0x800260DC
    {
            ctx->lr = 0x7F1AB504u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F1AB504:
    ctx->pc = 0x7F1AB504u;
    ctx->downcount -= 1;
    // 7F1AB504: bl      0x7F02A76C
    {
            ctx->lr = 0x7F1AB508u;
            ctx->pc = 0x7F02A76Cu;
            return;
    }

label_7F1AB508:
    ctx->pc = 0x7F1AB508u;
    ctx->downcount -= 32;
    // 7F1AB508: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB50C:
    ctx->pc = 0x7F1AB50Cu;
    // 7F1AB50C: lfs     f2, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB50Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB510:
    ctx->pc = 0x7F1AB510u;
    // 7F1AB510: addi    r5, r3, 6596
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6596);

label_7F1AB514:
    ctx->pc = 0x7F1AB514u;
    // 7F1AB514: frsp    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB514u)) return;
    ppc_frsp(ctx, 3, 1);

label_7F1AB518:
    ctx->pc = 0x7F1AB518u;
    // 7F1AB518: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB518u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB51C:
    ctx->pc = 0x7F1AB51Cu;
    // 7F1AB51C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB520:
    ctx->pc = 0x7F1AB520u;
    // 7F1AB520: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1AB524:
    ctx->pc = 0x7F1AB524u;
    // 7F1AB524: lfs     f1, 6584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB524u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB528:
    ctx->pc = 0x7F1AB528u;
    // 7F1AB528: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB528u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1AB52C:
    ctx->pc = 0x7F1AB52Cu;
    // 7F1AB52C: lfs     f2, -6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB52Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB530:
    ctx->pc = 0x7F1AB530u;
    // 7F1AB530: fdivs   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB530u)) return;
    ppc_fdivs(ctx, 0, 3, 0);

label_7F1AB534:
    ctx->pc = 0x7F1AB534u;
    // 7F1AB534: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB534u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB538:
    ctx->pc = 0x7F1AB538u;
    // 7F1AB538: fcmpu   cr0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB538u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[2], false);

label_7F1AB53C:
    ctx->pc = 0x7F1AB53Cu;
    // 7F1AB53C: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB53Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB540:
    ctx->pc = 0x7F1AB540u;
    // 7F1AB540: lwz     r27, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1AB544:
    ctx->pc = 0x7F1AB544u;
    // 7F1AB544: bc    4, 2, 0x7F1AB550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB550;
        }
    }

label_7F1AB548:
    ctx->pc = 0x7F1AB548u;
    ctx->downcount -= 2;
    // 7F1AB548: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1AB54C:
    ctx->pc = 0x7F1AB54Cu;
    // 7F1AB54C: b       0x7F1AB590
    {
            goto label_7F1AB590;
    }

label_7F1AB550:
    ctx->pc = 0x7F1AB550u;
    ctx->downcount -= 4;
    // 7F1AB550: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB554:
    ctx->pc = 0x7F1AB554u;
    // 7F1AB554: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB554u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB558:
    ctx->pc = 0x7F1AB558u;
    // 7F1AB558: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB558u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F1AB55C:
    ctx->pc = 0x7F1AB55Cu;
    // 7F1AB55C: bc    4, 2, 0x7F1AB568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB568;
        }
    }

label_7F1AB560:
    ctx->pc = 0x7F1AB560u;
    ctx->downcount -= 2;
    // 7F1AB560: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1AB564:
    ctx->pc = 0x7F1AB564u;
    // 7F1AB564: b       0x7F1AB590
    {
            goto label_7F1AB590;
    }

label_7F1AB568:
    ctx->pc = 0x7F1AB568u;
    ctx->downcount -= 68;
    // 7F1AB568: fdivs   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB568u)) return;
    ppc_fdivs(ctx, 0, 1, 2);

label_7F1AB56C:
    ctx->pc = 0x7F1AB56Cu;
    // 7F1AB56C: lwz     r4, 136(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1AB570:
    ctx->pc = 0x7F1AB570u;
    // 7F1AB570: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB570u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB574:
    ctx->pc = 0x7F1AB574u;
    // 7F1AB574: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB578:
    ctx->pc = 0x7F1AB578u;
    // 7F1AB578: lwz     r3, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB57C:
    ctx->pc = 0x7F1AB57Cu;
    // 7F1AB57C: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1AB580:
    ctx->pc = 0x7F1AB580u;
    // 7F1AB580: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F1AB584:
    ctx->pc = 0x7F1AB584u;
    // 7F1AB584: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_7F1AB588:
    ctx->pc = 0x7F1AB588u;
    // 7F1AB588: bc    4, 2, 0x7F1AB590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB590;
        }
    }

label_7F1AB58C:
    ctx->pc = 0x7F1AB58Cu;
    ctx->downcount -= 1;
    // 7F1AB58C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1AB590:
    ctx->pc = 0x7F1AB590u;
    ctx->downcount -= 2;
    // 7F1AB590: cmpwi   r27, 0
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

label_7F1AB594:
    ctx->pc = 0x7F1AB594u;
    // 7F1AB594: bc    4, 1, 0x7F1ABA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABA64;
        }
    }

label_7F1AB598:
    ctx->pc = 0x7F1AB598u;
    ctx->downcount -= 4;
    // 7F1AB598: addi    r3, r23, 2000
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(2000);

label_7F1AB59C:
    ctx->pc = 0x7F1AB59Cu;
    // 7F1AB59C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1AB5A0:
    ctx->pc = 0x7F1AB5A0u;
    // 7F1AB5A0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AB5A4:
    ctx->pc = 0x7F1AB5A4u;
    // 7F1AB5A4: bl      0x800261D8
    {
            ctx->lr = 0x7F1AB5A8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1AB5A8:
    ctx->pc = 0x7F1AB5A8u;
    ctx->downcount -= 32;
    // 7F1AB5A8: xoris   r3, r27, 0x8000
    ctx->gpr[3] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1AB5AC:
    ctx->pc = 0x7F1AB5ACu;
    // 7F1AB5AC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1AB5B0:
    ctx->pc = 0x7F1AB5B0u;
    // 7F1AB5B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB5B4:
    ctx->pc = 0x7F1AB5B4u;
    // 7F1AB5B4: stw     r3, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB5B8:
    ctx->pc = 0x7F1AB5B8u;
    // 7F1AB5B8: addi    r3, r4, 6576
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(6576);

label_7F1AB5BC:
    ctx->pc = 0x7F1AB5BCu;
    // 7F1AB5BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB5C0:
    ctx->pc = 0x7F1AB5C0u;
    // 7F1AB5C0: stw     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB5C4:
    ctx->pc = 0x7F1AB5C4u;
    // 7F1AB5C4: addi    r5, r4, 6584
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6584);

label_7F1AB5C8:
    ctx->pc = 0x7F1AB5C8u;
    // 7F1AB5C8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB5CC:
    ctx->pc = 0x7F1AB5CCu;
    // 7F1AB5CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AB5D0:
    ctx->pc = 0x7F1AB5D0u;
    // 7F1AB5D0: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB5D4:
    ctx->pc = 0x7F1AB5D4u;
    // 7F1AB5D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AB5D8:
    ctx->pc = 0x7F1AB5D8u;
    // 7F1AB5D8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB5DC:
    ctx->pc = 0x7F1AB5DCu;
    // 7F1AB5DC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5DCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1AB5E0:
    ctx->pc = 0x7F1AB5E0u;
    // 7F1AB5E0: fdivs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5E0u)) return;
    ppc_fdivs(ctx, 1, 2, 0);

label_7F1AB5E4:
    ctx->pc = 0x7F1AB5E4u;
    // 7F1AB5E4: bl      0x800261FC
    {
            ctx->lr = 0x7F1AB5E8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1AB5E8:
    ctx->pc = 0x7F1AB5E8u;
    ctx->downcount -= 1;
    // 7F1AB5E8: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB5ECu;
            goto label_7F1ABBA8;
    }

label_7F1AB5EC:
    ctx->pc = 0x7F1AB5ECu;
    ctx->downcount -= 9;
    // 7F1AB5EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB5F0:
    ctx->pc = 0x7F1AB5F0u;
    // 7F1AB5F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB5F4:
    ctx->pc = 0x7F1AB5F4u;
    // 7F1AB5F4: lfs     f3, 6600(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AB5F8:
    ctx->pc = 0x7F1AB5F8u;
    // 7F1AB5F8: lfs     f2, 6584(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB5FC:
    ctx->pc = 0x7F1AB5FCu;
    // 7F1AB5FC: lfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB5FCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB600:
    ctx->pc = 0x7F1AB600u;
    // 7F1AB600: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1AB600u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1AB604:
    ctx->pc = 0x7F1AB604u;
    // 7F1AB604: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB604u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB608:
    ctx->pc = 0x7F1AB608u;
    // 7F1AB608: stfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB608u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB60C:
    ctx->pc = 0x7F1AB60Cu;
    // 7F1AB60C: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB610u;
            goto label_7F1ABB84;
    }

label_7F1AB610:
    ctx->pc = 0x7F1AB610u;
    ctx->downcount -= 48;
    // 7F1AB610: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_7F1AB614:
    ctx->pc = 0x7F1AB614u;
    // 7F1AB614: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1AB618:
    ctx->pc = 0x7F1AB618u;
    // 7F1AB618: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F1AB61C:
    ctx->pc = 0x7F1AB61Cu;
    // 7F1AB61C: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
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

label_7F1AB620:
    ctx->pc = 0x7F1AB620u;
    // 7F1AB620: bc    4, 2, 0x7F1AB638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB638;
        }
    }

label_7F1AB624:
    ctx->pc = 0x7F1AB624u;
    ctx->downcount -= 5;
    // 7F1AB624: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB628:
    ctx->pc = 0x7F1AB628u;
    // 7F1AB628: lfs     f0, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB628u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB62C:
    ctx->pc = 0x7F1AB62Cu;
    // 7F1AB62C: lfs     f1, 6604(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB62Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB630:
    ctx->pc = 0x7F1AB630u;
    // 7F1AB630: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB630u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB634:
    ctx->pc = 0x7F1AB634u;
    // 7F1AB634: stfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB634u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB638:
    ctx->pc = 0x7F1AB638u;
    ctx->downcount -= 7;
    // 7F1AB638: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB63C:
    ctx->pc = 0x7F1AB63Cu;
    // 7F1AB63C: lfs     f1, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB63Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB640:
    ctx->pc = 0x7F1AB640u;
    // 7F1AB640: lfs     f0, 6604(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB644:
    ctx->pc = 0x7F1AB644u;
    // 7F1AB644: lfs     f2, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB644u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB648:
    ctx->pc = 0x7F1AB648u;
    // 7F1AB648: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB648u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB64C:
    ctx->pc = 0x7F1AB64Cu;
    // 7F1AB64C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB64Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1AB650:
    ctx->pc = 0x7F1AB650u;
    // 7F1AB650: bc    4, 1, 0x7F1AB65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB65C;
        }
    }

label_7F1AB654:
    ctx->pc = 0x7F1AB654u;
    ctx->downcount -= 2;
    // 7F1AB654: stfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB654u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB658:
    ctx->pc = 0x7F1AB658u;
    // 7F1AB658: b       0x7F1AB674
    {
            goto label_7F1AB674;
    }

label_7F1AB65C:
    ctx->pc = 0x7F1AB65Cu;
    ctx->downcount -= 5;
    // 7F1AB65C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB660:
    ctx->pc = 0x7F1AB660u;
    // 7F1AB660: lfs     f0, 6608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB660u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB664:
    ctx->pc = 0x7F1AB664u;
    // 7F1AB664: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB664u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB668:
    ctx->pc = 0x7F1AB668u;
    // 7F1AB668: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB668u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1AB66C:
    ctx->pc = 0x7F1AB66Cu;
    // 7F1AB66C: bc    4, 0, 0x7F1AB674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB674;
        }
    }

label_7F1AB670:
    ctx->pc = 0x7F1AB670u;
    ctx->downcount -= 1;
    // 7F1AB670: stfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB670u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB674:
    ctx->pc = 0x7F1AB674u;
    ctx->downcount -= 3;
    // 7F1AB674: lwz     r0, 124(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB678:
    ctx->pc = 0x7F1AB678u;
    // 7F1AB678: cmpwi   r0, 1
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

label_7F1AB67C:
    ctx->pc = 0x7F1AB67Cu;
    // 7F1AB67C: bc    12, 2, 0x7F1AB6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB6B8;
        }
    }

label_7F1AB680:
    ctx->pc = 0x7F1AB680u;
    ctx->downcount -= 1;
    // 7F1AB680: bc    4, 0, 0x7F1AB690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB690;
        }
    }

label_7F1AB684:
    ctx->pc = 0x7F1AB684u;
    ctx->downcount -= 2;
    // 7F1AB684: cmpwi   r0, 0
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

label_7F1AB688:
    ctx->pc = 0x7F1AB688u;
    // 7F1AB688: bc    4, 0, 0x7F1AB69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB69C;
        }
    }

label_7F1AB68C:
    ctx->pc = 0x7F1AB68Cu;
    ctx->downcount -= 1;
    // 7F1AB68C: b       0x7F1AB714
    {
            goto label_7F1AB714;
    }

label_7F1AB690:
    ctx->pc = 0x7F1AB690u;
    ctx->downcount -= 2;
    // 7F1AB690: cmpwi   r0, 3
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

label_7F1AB694:
    ctx->pc = 0x7F1AB694u;
    // 7F1AB694: bc    4, 0, 0x7F1AB714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB714;
        }
    }

label_7F1AB698:
    ctx->pc = 0x7F1AB698u;
    ctx->downcount -= 1;
    // 7F1AB698: b       0x7F1AB6E8
    {
            goto label_7F1AB6E8;
    }

label_7F1AB69C:
    ctx->pc = 0x7F1AB69Cu;
    ctx->downcount -= 1;
    // 7F1AB69C: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB6A0u;
            goto label_7F1ABB84;
    }

label_7F1AB6A0:
    ctx->pc = 0x7F1AB6A0u;
    ctx->downcount -= 6;
    // 7F1AB6A0: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB6A4:
    ctx->pc = 0x7F1AB6A4u;
    // 7F1AB6A4: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB6A8:
    ctx->pc = 0x7F1AB6A8u;
    // 7F1AB6A8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB6AC:
    ctx->pc = 0x7F1AB6ACu;
    // 7F1AB6AC: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F1AB6B0:
    ctx->pc = 0x7F1AB6B0u;
    // 7F1AB6B0: sth     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB6B4:
    ctx->pc = 0x7F1AB6B4u;
    // 7F1AB6B4: b       0x7F1AB714
    {
            goto label_7F1AB714;
    }

label_7F1AB6B8:
    ctx->pc = 0x7F1AB6B8u;
    ctx->downcount -= 1;
    // 7F1AB6B8: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB6BCu;
            goto label_7F1ABB84;
    }

label_7F1AB6BC:
    ctx->pc = 0x7F1AB6BCu;
    ctx->downcount -= 8;
    // 7F1AB6BC: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB6C0:
    ctx->pc = 0x7F1AB6C0u;
    // 7F1AB6C0: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB6C4:
    ctx->pc = 0x7F1AB6C4u;
    // 7F1AB6C4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB6C8:
    ctx->pc = 0x7F1AB6C8u;
    // 7F1AB6C8: addi    r0, r3, -24
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24);

label_7F1AB6CC:
    ctx->pc = 0x7F1AB6CCu;
    // 7F1AB6CC: sth     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB6D0:
    ctx->pc = 0x7F1AB6D0u;
    // 7F1AB6D0: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB6D4:
    ctx->pc = 0x7F1AB6D4u;
    // 7F1AB6D4: cmpwi   r0, 64
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

label_7F1AB6D8:
    ctx->pc = 0x7F1AB6D8u;
    // 7F1AB6D8: bc    12, 1, 0x7F1AB714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB714;
        }
    }

label_7F1AB6DC:
    ctx->pc = 0x7F1AB6DCu;
    ctx->downcount -= 3;
    // 7F1AB6DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB6E0:
    ctx->pc = 0x7F1AB6E0u;
    // 7F1AB6E0: stw     r0, 124(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB6E4:
    ctx->pc = 0x7F1AB6E4u;
    // 7F1AB6E4: b       0x7F1AB714
    {
            goto label_7F1AB714;
    }

label_7F1AB6E8:
    ctx->pc = 0x7F1AB6E8u;
    ctx->downcount -= 1;
    // 7F1AB6E8: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB6ECu;
            goto label_7F1ABB84;
    }

label_7F1AB6EC:
    ctx->pc = 0x7F1AB6ECu;
    ctx->downcount -= 8;
    // 7F1AB6EC: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB6F0:
    ctx->pc = 0x7F1AB6F0u;
    // 7F1AB6F0: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB6F4:
    ctx->pc = 0x7F1AB6F4u;
    // 7F1AB6F4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB6F8:
    ctx->pc = 0x7F1AB6F8u;
    // 7F1AB6F8: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_7F1AB6FC:
    ctx->pc = 0x7F1AB6FCu;
    // 7F1AB6FC: sth     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB700:
    ctx->pc = 0x7F1AB700u;
    // 7F1AB700: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB704:
    ctx->pc = 0x7F1AB704u;
    // 7F1AB704: cmpwi   r0, -64
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB708:
    ctx->pc = 0x7F1AB708u;
    // 7F1AB708: bc    12, 0, 0x7F1AB714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB714;
        }
    }

label_7F1AB70C:
    ctx->pc = 0x7F1AB70Cu;
    ctx->downcount -= 2;
    // 7F1AB70C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB710:
    ctx->pc = 0x7F1AB710u;
    // 7F1AB710: stw     r0, 124(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB714:
    ctx->pc = 0x7F1AB714u;
    ctx->downcount -= 3;
    // 7F1AB714: lha     r0, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB718:
    ctx->pc = 0x7F1AB718u;
    // 7F1AB718: cmpwi   r0, 256
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

label_7F1AB71C:
    ctx->pc = 0x7F1AB71Cu;
    // 7F1AB71C: bc    4, 1, 0x7F1AB734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB734;
        }
    }

label_7F1AB720:
    ctx->pc = 0x7F1AB720u;
    ctx->downcount -= 5;
    // 7F1AB720: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F1AB724:
    ctx->pc = 0x7F1AB724u;
    // 7F1AB724: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AB728:
    ctx->pc = 0x7F1AB728u;
    // 7F1AB728: sth     r3, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AB72C:
    ctx->pc = 0x7F1AB72Cu;
    // 7F1AB72C: stw     r0, 124(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB730:
    ctx->pc = 0x7F1AB730u;
    // 7F1AB730: b       0x7F1AB74C
    {
            goto label_7F1AB74C;
    }

label_7F1AB734:
    ctx->pc = 0x7F1AB734u;
    ctx->downcount -= 2;
    // 7F1AB734: cmpwi   r0, -256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB738:
    ctx->pc = 0x7F1AB738u;
    // 7F1AB738: bc    4, 0, 0x7F1AB74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB74C;
        }
    }

label_7F1AB73C:
    ctx->pc = 0x7F1AB73Cu;
    ctx->downcount -= 4;
    // 7F1AB73C: li      r3, -256
    ctx->gpr[3] = (u32)(s32)(-256);

label_7F1AB740:
    ctx->pc = 0x7F1AB740u;
    // 7F1AB740: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1AB744:
    ctx->pc = 0x7F1AB744u;
    // 7F1AB744: sth     r3, 116(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AB748:
    ctx->pc = 0x7F1AB748u;
    // 7F1AB748: stw     r0, 124(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB74C:
    ctx->pc = 0x7F1AB74Cu;
    ctx->downcount -= 3;
    // 7F1AB74C: lwz     r0, 128(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB750:
    ctx->pc = 0x7F1AB750u;
    // 7F1AB750: cmpwi   r0, 1
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

label_7F1AB754:
    ctx->pc = 0x7F1AB754u;
    // 7F1AB754: bc    12, 2, 0x7F1AB790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB790;
        }
    }

label_7F1AB758:
    ctx->pc = 0x7F1AB758u;
    ctx->downcount -= 1;
    // 7F1AB758: bc    4, 0, 0x7F1AB768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB768;
        }
    }

label_7F1AB75C:
    ctx->pc = 0x7F1AB75Cu;
    ctx->downcount -= 2;
    // 7F1AB75C: cmpwi   r0, 0
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

label_7F1AB760:
    ctx->pc = 0x7F1AB760u;
    // 7F1AB760: bc    4, 0, 0x7F1AB774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB774;
        }
    }

label_7F1AB764:
    ctx->pc = 0x7F1AB764u;
    ctx->downcount -= 1;
    // 7F1AB764: b       0x7F1AB7EC
    {
            goto label_7F1AB7EC;
    }

label_7F1AB768:
    ctx->pc = 0x7F1AB768u;
    ctx->downcount -= 2;
    // 7F1AB768: cmpwi   r0, 3
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

label_7F1AB76C:
    ctx->pc = 0x7F1AB76Cu;
    // 7F1AB76C: bc    4, 0, 0x7F1AB7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB7EC;
        }
    }

label_7F1AB770:
    ctx->pc = 0x7F1AB770u;
    ctx->downcount -= 1;
    // 7F1AB770: b       0x7F1AB7C0
    {
            goto label_7F1AB7C0;
    }

label_7F1AB774:
    ctx->pc = 0x7F1AB774u;
    ctx->downcount -= 1;
    // 7F1AB774: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB778u;
            goto label_7F1ABB84;
    }

label_7F1AB778:
    ctx->pc = 0x7F1AB778u;
    ctx->downcount -= 6;
    // 7F1AB778: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB77C:
    ctx->pc = 0x7F1AB77Cu;
    // 7F1AB77C: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB780:
    ctx->pc = 0x7F1AB780u;
    // 7F1AB780: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB784:
    ctx->pc = 0x7F1AB784u;
    // 7F1AB784: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F1AB788:
    ctx->pc = 0x7F1AB788u;
    // 7F1AB788: sth     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB78C:
    ctx->pc = 0x7F1AB78Cu;
    // 7F1AB78C: b       0x7F1AB7EC
    {
            goto label_7F1AB7EC;
    }

label_7F1AB790:
    ctx->pc = 0x7F1AB790u;
    ctx->downcount -= 1;
    // 7F1AB790: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB794u;
            goto label_7F1ABB84;
    }

label_7F1AB794:
    ctx->pc = 0x7F1AB794u;
    ctx->downcount -= 8;
    // 7F1AB794: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB798:
    ctx->pc = 0x7F1AB798u;
    // 7F1AB798: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB79C:
    ctx->pc = 0x7F1AB79Cu;
    // 7F1AB79C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB7A0:
    ctx->pc = 0x7F1AB7A0u;
    // 7F1AB7A0: addi    r0, r3, -24
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24);

label_7F1AB7A4:
    ctx->pc = 0x7F1AB7A4u;
    // 7F1AB7A4: sth     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB7A8:
    ctx->pc = 0x7F1AB7A8u;
    // 7F1AB7A8: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB7AC:
    ctx->pc = 0x7F1AB7ACu;
    // 7F1AB7AC: cmpwi   r0, 64
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

label_7F1AB7B0:
    ctx->pc = 0x7F1AB7B0u;
    // 7F1AB7B0: bc    12, 1, 0x7F1AB7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB7EC;
        }
    }

label_7F1AB7B4:
    ctx->pc = 0x7F1AB7B4u;
    ctx->downcount -= 3;
    // 7F1AB7B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB7B8:
    ctx->pc = 0x7F1AB7B8u;
    // 7F1AB7B8: stw     r0, 128(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB7BC:
    ctx->pc = 0x7F1AB7BCu;
    // 7F1AB7BC: b       0x7F1AB7EC
    {
            goto label_7F1AB7EC;
    }

label_7F1AB7C0:
    ctx->pc = 0x7F1AB7C0u;
    ctx->downcount -= 1;
    // 7F1AB7C0: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1AB7C4u;
            goto label_7F1ABB84;
    }

label_7F1AB7C4:
    ctx->pc = 0x7F1AB7C4u;
    ctx->downcount -= 8;
    // 7F1AB7C4: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB7C8:
    ctx->pc = 0x7F1AB7C8u;
    // 7F1AB7C8: rlwinm r3, r3, 0, 27, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000001Fu;
    }

label_7F1AB7CC:
    ctx->pc = 0x7F1AB7CCu;
    // 7F1AB7CC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1AB7D0:
    ctx->pc = 0x7F1AB7D0u;
    // 7F1AB7D0: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_7F1AB7D4:
    ctx->pc = 0x7F1AB7D4u;
    // 7F1AB7D4: sth     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB7D8:
    ctx->pc = 0x7F1AB7D8u;
    // 7F1AB7D8: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB7DC:
    ctx->pc = 0x7F1AB7DCu;
    // 7F1AB7DC: cmpwi   r0, -64
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB7E0:
    ctx->pc = 0x7F1AB7E0u;
    // 7F1AB7E0: bc    12, 0, 0x7F1AB7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB7EC;
        }
    }

label_7F1AB7E4:
    ctx->pc = 0x7F1AB7E4u;
    ctx->downcount -= 2;
    // 7F1AB7E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1AB7E8:
    ctx->pc = 0x7F1AB7E8u;
    // 7F1AB7E8: stw     r0, 128(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB7EC:
    ctx->pc = 0x7F1AB7ECu;
    ctx->downcount -= 3;
    // 7F1AB7EC: lha     r0, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1AB7F0:
    ctx->pc = 0x7F1AB7F0u;
    // 7F1AB7F0: cmpwi   r0, 256
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

label_7F1AB7F4:
    ctx->pc = 0x7F1AB7F4u;
    // 7F1AB7F4: bc    4, 1, 0x7F1AB80C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB80C;
        }
    }

label_7F1AB7F8:
    ctx->pc = 0x7F1AB7F8u;
    ctx->downcount -= 5;
    // 7F1AB7F8: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F1AB7FC:
    ctx->pc = 0x7F1AB7FCu;
    // 7F1AB7FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1AB800:
    ctx->pc = 0x7F1AB800u;
    // 7F1AB800: sth     r3, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AB804:
    ctx->pc = 0x7F1AB804u;
    // 7F1AB804: stw     r0, 128(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB808:
    ctx->pc = 0x7F1AB808u;
    // 7F1AB808: b       0x7F1AB824
    {
            goto label_7F1AB824;
    }

label_7F1AB80C:
    ctx->pc = 0x7F1AB80Cu;
    ctx->downcount -= 2;
    // 7F1AB80C: cmpwi   r0, -256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1AB810:
    ctx->pc = 0x7F1AB810u;
    // 7F1AB810: bc    4, 0, 0x7F1AB824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AB824;
        }
    }

label_7F1AB814:
    ctx->pc = 0x7F1AB814u;
    ctx->downcount -= 4;
    // 7F1AB814: li      r3, -256
    ctx->gpr[3] = (u32)(s32)(-256);

label_7F1AB818:
    ctx->pc = 0x7F1AB818u;
    // 7F1AB818: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1AB81C:
    ctx->pc = 0x7F1AB81Cu;
    // 7F1AB81C: sth     r3, 118(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1AB820:
    ctx->pc = 0x7F1AB820u;
    // 7F1AB820: stw     r0, 128(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB824:
    ctx->pc = 0x7F1AB824u;
    ctx->downcount -= 2;
    // 7F1AB824: addi    r3, r23, 1952
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(1952);

label_7F1AB828:
    ctx->pc = 0x7F1AB828u;
    // 7F1AB828: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1AB82Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1AB82C:
    ctx->pc = 0x7F1AB82Cu;
    ctx->downcount -= 2;
    // 7F1AB82C: addi    r3, r23, 116
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(116);

label_7F1AB830:
    ctx->pc = 0x7F1AB830u;
    // 7F1AB830: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F1AB834u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F1AB834:
    ctx->pc = 0x7F1AB834u;
    ctx->downcount -= 2;
    // 7F1AB834: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1AB838:
    ctx->pc = 0x7F1AB838u;
    // 7F1AB838: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F1AB83Cu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F1AB83C:
    ctx->pc = 0x7F1AB83Cu;
    ctx->downcount -= 16;
    // 7F1AB83C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1AB840:
    ctx->pc = 0x7F1AB840u;
    // 7F1AB840: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1AB844:
    ctx->pc = 0x7F1AB844u;
    // 7F1AB844: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AB848:
    ctx->pc = 0x7F1AB848u;
    // 7F1AB848: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AB84C:
    ctx->pc = 0x7F1AB84Cu;
    // 7F1AB84C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1AB850:
    ctx->pc = 0x7F1AB850u;
    // 7F1AB850: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1AB854:
    ctx->pc = 0x7F1AB854u;
    // 7F1AB854: lfd     f28, 6576(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB854u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6576);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB858:
    ctx->pc = 0x7F1AB858u;
    // 7F1AB858: xoris   r31, r27, 0x8000
    ctx->gpr[31] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1AB85C:
    ctx->pc = 0x7F1AB85Cu;
    // 7F1AB85C: lfs     f29, 6612(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB85Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1AB860:
    ctx->pc = 0x7F1AB860u;
    // 7F1AB860: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1AB864:
    ctx->pc = 0x7F1AB864u;
    // 7F1AB864: lfs     f30, 6620(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB864u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1AB868:
    ctx->pc = 0x7F1AB868u;
    // 7F1AB868: lis     r30, 17200
    ctx->gpr[30] = ((u32)(s32)(17200) << 16);

label_7F1AB86C:
    ctx->pc = 0x7F1AB86Cu;
    // 7F1AB86C: lfs     f31, 6616(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB86Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1AB870:
    ctx->pc = 0x7F1AB870u;
    // 7F1AB870: lfs     f26, 6624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB870u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F1AB874:
    ctx->pc = 0x7F1AB874u;
    // 7F1AB874: lfs     f27, 6568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB874u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F1AB878:
    ctx->pc = 0x7F1AB878u;
    // 7F1AB878: b       0x7F1ABA5C
    {
            goto label_7F1ABA5C;
    }

label_7F1AB87C:
    ctx->pc = 0x7F1AB87Cu;
    ctx->downcount -= 30;
    // 7F1AB87C: lwz     r3, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB880:
    // 7F1AB880: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1AB884:
    ctx->pc = 0x7F1AB884u;
    // 7F1AB884: lwz     r5, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AB888:
    // 7F1AB888: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AB88C:
    // 7F1AB88C: add   r4, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1AB890:
    ctx->pc = 0x7F1AB890u;
    // 7F1AB890: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1AB894:
    ctx->pc = 0x7F1AB894u;
    // 7F1AB894: lwz     r7, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1AB898:
    // 7F1AB898: rlwinm r8, r5, 4, 0, 27
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F1AB89C:
    ctx->pc = 0x7F1AB89Cu;
    // 7F1AB89C: lwz     r6, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1AB8A0:
    // 7F1AB8A0: mulli   r4, r5, 28
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)28);

label_7F1AB8A4:
    ctx->pc = 0x7F1AB8A4u;
    // 7F1AB8A4: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AB8A8:
    // 7F1AB8A8: add   r24, r7, r8
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F1AB8AC:
    ctx->pc = 0x7F1AB8ACu;
    // 7F1AB8AC: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB8B0:
    // 7F1AB8B0: add   r28, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F1AB8B4:
    // 7F1AB8B4: addi    r25, r4, 160
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(160);

label_7F1AB8B8:
    ctx->pc = 0x7F1AB8B8u;
    // 7F1AB8B8: stw     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AB8BC:
    // 7F1AB8BC: add   r25, r23, r25
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F1AB8C0:
    // 7F1AB8C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AB8C4:
    // 7F1AB8C4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB8C8:
    ctx->pc = 0x7F1AB8C8u;
    // 7F1AB8C8: stw     r5, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AB8CC:
    ctx->pc = 0x7F1AB8CCu;
    // 7F1AB8CC: stw     r30, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AB8D0:
    ctx->pc = 0x7F1AB8D0u;
    // 7F1AB8D0: lwz     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1AB8D4:
    ctx->pc = 0x7F1AB8D4u;
    // 7F1AB8D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB8D8:
    ctx->pc = 0x7F1AB8D8u;
    // 7F1AB8D8: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB8D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB8DC:
    ctx->pc = 0x7F1AB8DCu;
    // 7F1AB8DC: stw     r5, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1AB8E0:
    ctx->pc = 0x7F1AB8E0u;
    // 7F1AB8E0: fsubs   f1, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1AB8E0u)) return;
    ppc_fsubs(ctx, 1, 0, 28);

label_7F1AB8E4:
    ctx->pc = 0x7F1AB8E4u;
    // 7F1AB8E4: stw     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB8E8:
    // 7F1AB8E8: bl      0x800261FC
    {
            ctx->lr = 0x7F1AB8ECu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1AB8EC:
    ctx->downcount -= 4;
    // 7F1AB8EC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1AB8F0:
    // 7F1AB8F0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1AB8F4:
    // 7F1AB8F4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1AB8F8:
    // 7F1AB8F8: bl      0x800261B4
    {
            ctx->lr = 0x7F1AB8FCu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1AB8FC:
    ctx->downcount -= 1;
    // 7F1AB8FC: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB900u;
            goto label_7F1ABBA8;
    }

label_7F1AB900:
    ctx->pc = 0x7F1AB900u;
    ctx->downcount -= 6;
    // 7F1AB900: lfs     f2, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB900u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB904:
    ctx->pc = 0x7F1AB904u;
    // 7F1AB904: lfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB904u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB908:
    ctx->pc = 0x7F1AB908u;
    // 7F1AB908: fmuls   f2, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1AB908u)) return;
    ppc_fmuls(ctx, 2, 2, 29);

label_7F1AB90C:
    ctx->pc = 0x7F1AB90Cu;
    // 7F1AB90C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB90Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AB910:
    ctx->pc = 0x7F1AB910u;
    // 7F1AB910: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB910u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB914:
    // 7F1AB914: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB918u;
            goto label_7F1ABBA8;
    }

label_7F1AB918:
    ctx->pc = 0x7F1AB918u;
    ctx->downcount -= 6;
    // 7F1AB918: lfs     f2, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB918u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB91C:
    ctx->pc = 0x7F1AB91Cu;
    // 7F1AB91C: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB91Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB920:
    ctx->pc = 0x7F1AB920u;
    // 7F1AB920: fmuls   f2, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1AB920u)) return;
    ppc_fmuls(ctx, 2, 2, 29);

label_7F1AB924:
    ctx->pc = 0x7F1AB924u;
    // 7F1AB924: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB924u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AB928:
    ctx->pc = 0x7F1AB928u;
    // 7F1AB928: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB928u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB92C:
    // 7F1AB92C: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB930u;
            goto label_7F1ABBA8;
    }

label_7F1AB930:
    ctx->pc = 0x7F1AB930u;
    ctx->downcount -= 10;
    // 7F1AB930: lfs     f2, 92(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB930u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB934:
    // 7F1AB934: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1AB938:
    ctx->pc = 0x7F1AB938u;
    // 7F1AB938: lfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB938u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB93C:
    // 7F1AB93C: addi    r3, r23, 60
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(60);

label_7F1AB940:
    ctx->pc = 0x7F1AB940u;
    // 7F1AB940: fmuls   f2, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1AB940u)) return;
    ppc_fmuls(ctx, 2, 2, 29);

label_7F1AB944:
    ctx->pc = 0x7F1AB944u;
    // 7F1AB944: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB944u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1AB948:
    ctx->pc = 0x7F1AB948u;
    // 7F1AB948: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB948u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB94C:
    ctx->pc = 0x7F1AB94Cu;
    // 7F1AB94C: lfs     f0, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB94Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB950:
    ctx->pc = 0x7F1AB950u;
    // 7F1AB950: fneg    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB950u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F1AB954:
    // 7F1AB954: bl      0x800261FC
    {
            ctx->lr = 0x7F1AB958u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1AB958:
    ctx->downcount -= 33;
    // 7F1AB958: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1AB95C:
    ctx->pc = 0x7F1AB95Cu;
    // 7F1AB95C: stw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AB960:
    // 7F1AB960: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1AB964:
    ctx->pc = 0x7F1AB964u;
    // 7F1AB964: lfs     f2, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB964u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AB968:
    ctx->pc = 0x7F1AB968u;
    // 7F1AB968: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AB96C:
    ctx->pc = 0x7F1AB96Cu;
    // 7F1AB96C: lfs     f3, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB96Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AB970:
    ctx->pc = 0x7F1AB970u;
    // 7F1AB970: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB974:
    ctx->pc = 0x7F1AB974u;
    // 7F1AB974: stw     r31, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1AB978:
    ctx->pc = 0x7F1AB978u;
    // 7F1AB978: fsubs   f1, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1AB978u)) return;
    ppc_fsubs(ctx, 1, 0, 28);

label_7F1AB97C:
    ctx->pc = 0x7F1AB97Cu;
    // 7F1AB97C: stw     r30, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1AB980:
    ctx->pc = 0x7F1AB980u;
    // 7F1AB980: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AB984:
    ctx->pc = 0x7F1AB984u;
    // 7F1AB984: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB984u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1AB988:
    ctx->pc = 0x7F1AB988u;
    // 7F1AB988: fsubs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1AB988u)) return;
    ppc_fsubs(ctx, 0, 0, 28);

label_7F1AB98C:
    ctx->pc = 0x7F1AB98Cu;
    // 7F1AB98C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB98Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1AB990:
    ctx->pc = 0x7F1AB990u;
    // 7F1AB990: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB990u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F1AB994:
    ctx->pc = 0x7F1AB994u;
    // 7F1AB994: stfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB994u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB998:
    // 7F1AB998: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB99Cu;
            goto label_7F1ABBA8;
    }

label_7F1AB99C:
    ctx->pc = 0x7F1AB99Cu;
    ctx->downcount -= 5;
    // 7F1AB99C: fmadds f1, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1AB99Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1AB9A0:
    ctx->pc = 0x7F1AB9A0u;
    // 7F1AB9A0: lfs     f0, 96(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9A0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB9A4:
    ctx->pc = 0x7F1AB9A4u;
    // 7F1AB9A4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9A4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1AB9A8:
    ctx->pc = 0x7F1AB9A8u;
    // 7F1AB9A8: stfs     f0, 16(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9A8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1AB9AC:
    // 7F1AB9AC: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1AB9B0u;
            goto label_7F1ABBA8;
    }

label_7F1AB9B0:
    ctx->pc = 0x7F1AB9B0u;
    ctx->downcount -= 3;
    // 7F1AB9B0: fmuls   f25, f26, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9B0u)) return;
    ppc_fmuls(ctx, 25, 26, 1);

label_7F1AB9B4:
    ctx->pc = 0x7F1AB9B4u;
    // 7F1AB9B4: fadds   f1, f27, f25
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9B4u)) return;
    ppc_fadds(ctx, 1, 27, 25);

label_7F1AB9B8:
    // 7F1AB9B8: bl      0x7F1AB090
    {
            ctx->lr = 0x7F1AB9BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB090u;
                return;
            }
            goto label_7F1AB090;
    }

label_7F1AB9BC:
    ctx->pc = 0x7F1AB9BCu;
    ctx->downcount -= 3;
    // 7F1AB9BC: stfs     f1, 20(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9BCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AB9C0:
    ctx->pc = 0x7F1AB9C0u;
    // 7F1AB9C0: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9C0u)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F1AB9C4:
    // 7F1AB9C4: bl      0x7F1AB090
    {
            ctx->lr = 0x7F1AB9C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB090u;
                return;
            }
            goto label_7F1AB090;
    }

label_7F1AB9C8:
    ctx->pc = 0x7F1AB9C8u;
    ctx->downcount -= 16;
    // 7F1AB9C8: stfs     f1, 24(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9C8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1AB9CC:
    ctx->pc = 0x7F1AB9CCu;
    // 7F1AB9CC: lfs     f1, 16(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9CCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB9D0:
    ctx->pc = 0x7F1AB9D0u;
    // 7F1AB9D0: lfs     f0, 20(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9D0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB9D4:
    ctx->pc = 0x7F1AB9D4u;
    // 7F1AB9D4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9D4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB9D8:
    ctx->pc = 0x7F1AB9D8u;
    // 7F1AB9D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB9DC:
    ctx->pc = 0x7F1AB9DCu;
    // 7F1AB9DC: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB9E0:
    ctx->pc = 0x7F1AB9E0u;
    // 7F1AB9E0: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AB9E4:
    ctx->pc = 0x7F1AB9E4u;
    // 7F1AB9E4: sth     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AB9E8:
    ctx->pc = 0x7F1AB9E8u;
    // 7F1AB9E8: lfs     f1, 16(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9E8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AB9EC:
    ctx->pc = 0x7F1AB9ECu;
    // 7F1AB9EC: lfs     f0, 24(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9ECu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1AB9F0:
    ctx->pc = 0x7F1AB9F0u;
    // 7F1AB9F0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9F0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1AB9F4:
    ctx->pc = 0x7F1AB9F4u;
    // 7F1AB9F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1AB9F8:
    ctx->pc = 0x7F1AB9F8u;
    // 7F1AB9F8: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AB9F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1AB9FC:
    ctx->pc = 0x7F1AB9FCu;
    // 7F1AB9FC: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABA00:
    ctx->pc = 0x7F1ABA00u;
    // 7F1ABA00: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABA04:
    // 7F1ABA04: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1ABA08u;
            goto label_7F1ABB84;
    }

label_7F1ABA08:
    ctx->downcount -= 59;
    // 7F1ABA08: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1ABA0C:
    ctx->pc = 0x7F1ABA0Cu;
    // 7F1ABA0C: lfs     f0, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA0Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABA10:
    // 7F1ABA10: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1ABA14:
    ctx->pc = 0x7F1ABA14u;
    // 7F1ABA14: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA14u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ABA18:
    ctx->pc = 0x7F1ABA18u;
    // 7F1ABA18: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ABA1C:
    ctx->pc = 0x7F1ABA1Cu;
    // 7F1ABA1C: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABA20:
    // 7F1ABA20: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F1ABA24:
    // 7F1ABA24: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F1ABA28:
    // 7F1ABA28: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1ABA2C:
    // 7F1ABA2C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1ABA30:
    ctx->pc = 0x7F1ABA30u;
    // 7F1ABA30: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ABA34:
    ctx->pc = 0x7F1ABA34u;
    // 7F1ABA34: lwz     r3, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABA38:
    // 7F1ABA38: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1ABA3C:
    // 7F1ABA3C: cmpwi   r0, 64
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

label_7F1ABA40:
    ctx->pc = 0x7F1ABA40u;
    // 7F1ABA40: stw     r0, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABA44:
    // 7F1ABA44: bc    12, 0, 0x7F1ABA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABA58;
        }
    }

label_7F1ABA48:
    ctx->downcount -= 4;
    // 7F1ABA48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1ABA4C:
    // 7F1ABA4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ABA50:
    ctx->pc = 0x7F1ABA50u;
    // 7F1ABA50: stw     r3, 140(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABA54:
    ctx->pc = 0x7F1ABA54u;
    // 7F1ABA54: stw     r0, 132(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABA58:
    ctx->downcount -= 1;
    // 7F1ABA58: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1ABA5C:
    ctx->downcount -= 2;
    // 7F1ABA5C: cmpw    r26, r27
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ABA60:
    // 7F1ABA60: bc    12, 0, 0x7F1AB87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1AB87Cu;
                return;
            }
            goto label_7F1AB87C;
        }
    }

label_7F1ABA64:
    ctx->pc = 0x7F1ABA64u;
    ctx->downcount -= 3;
    // 7F1ABA64: lwz     r0, 148(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABA68:
    ctx->pc = 0x7F1ABA68u;
    // 7F1ABA68: cmpwi   r0, 0
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

label_7F1ABA6C:
    ctx->pc = 0x7F1ABA6Cu;
    // 7F1ABA6C: bc    12, 2, 0x7F1ABAEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABAEC;
        }
    }

label_7F1ABA70:
    ctx->pc = 0x7F1ABA70u;
    ctx->downcount -= 9;
    // 7F1ABA70: lfs     f2, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA70u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ABA74:
    ctx->pc = 0x7F1ABA74u;
    // 7F1ABA74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABA78:
    ctx->pc = 0x7F1ABA78u;
    // 7F1ABA78: lfs     f1, 152(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA78u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABA7C:
    ctx->pc = 0x7F1ABA7Cu;
    // 7F1ABA7C: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABA80:
    ctx->pc = 0x7F1ABA80u;
    // 7F1ABA80: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA80u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1ABA84:
    ctx->pc = 0x7F1ABA84u;
    // 7F1ABA84: stfs     f1, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA84u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ABA88:
    ctx->pc = 0x7F1ABA88u;
    // 7F1ABA88: lfs     f1, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA88u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABA8C:
    ctx->pc = 0x7F1ABA8Cu;
    // 7F1ABA8C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA8Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ABA90:
    ctx->pc = 0x7F1ABA90u;
    // 7F1ABA90: bc    4, 0, 0x7F1ABA98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABA98;
        }
    }

label_7F1ABA94:
    ctx->pc = 0x7F1ABA94u;
    ctx->downcount -= 1;
    // 7F1ABA94: stfs     f0, 112(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABA94u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABA98:
    ctx->pc = 0x7F1ABA98u;
    ctx->downcount -= 10;
    // 7F1ABA98: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ABA9C:
    ctx->pc = 0x7F1ABA9Cu;
    // 7F1ABA9C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABAA0:
    ctx->pc = 0x7F1ABAA0u;
    // 7F1ABAA0: lfs     f2, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAA0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ABAA4:
    ctx->pc = 0x7F1ABAA4u;
    // 7F1ABAA4: lfs     f1, 6628(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABAA8:
    ctx->pc = 0x7F1ABAA8u;
    // 7F1ABAA8: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABAAC:
    ctx->pc = 0x7F1ABAACu;
    // 7F1ABAAC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAACu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1ABAB0:
    ctx->pc = 0x7F1ABAB0u;
    // 7F1ABAB0: stfs     f1, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAB0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ABAB4:
    ctx->pc = 0x7F1ABAB4u;
    // 7F1ABAB4: lfs     f1, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAB4u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABAB8:
    ctx->pc = 0x7F1ABAB8u;
    // 7F1ABAB8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAB8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ABABC:
    ctx->pc = 0x7F1ABABCu;
    // 7F1ABABC: bc    4, 0, 0x7F1ABAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABAC4;
        }
    }

label_7F1ABAC0:
    ctx->pc = 0x7F1ABAC0u;
    ctx->downcount -= 1;
    // 7F1ABAC0: stfs     f0, 104(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAC0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABAC4:
    ctx->pc = 0x7F1ABAC4u;
    ctx->downcount -= 9;
    // 7F1ABAC4: lfs     f2, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAC4u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1ABAC8:
    ctx->pc = 0x7F1ABAC8u;
    // 7F1ABAC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABACC:
    ctx->pc = 0x7F1ABACCu;
    // 7F1ABACC: lfs     f1, 156(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABACCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABAD0:
    ctx->pc = 0x7F1ABAD0u;
    // 7F1ABAD0: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABAD4:
    ctx->pc = 0x7F1ABAD4u;
    // 7F1ABAD4: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAD4u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1ABAD8:
    ctx->pc = 0x7F1ABAD8u;
    // 7F1ABAD8: stfs     f1, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAD8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ABADC:
    ctx->pc = 0x7F1ABADCu;
    // 7F1ABADC: lfs     f1, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABADCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABAE0:
    ctx->pc = 0x7F1ABAE0u;
    // 7F1ABAE0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAE0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ABAE4:
    ctx->pc = 0x7F1ABAE4u;
    // 7F1ABAE4: bc    4, 0, 0x7F1ABAEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABAEC;
        }
    }

label_7F1ABAE8:
    ctx->pc = 0x7F1ABAE8u;
    ctx->downcount -= 1;
    // 7F1ABAE8: stfs     f0, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAE8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABAEC:
    ctx->pc = 0x7F1ABAECu;
    ctx->downcount -= 17;
    // 7F1ABAEC: lwz     r4, 2000(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2000);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABAF0:
    ctx->pc = 0x7F1ABAF0u;
    // 7F1ABAF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABAF4:
    ctx->pc = 0x7F1ABAF4u;
    // 7F1ABAF4: lwz     r0, 2004(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABAF8:
    ctx->pc = 0x7F1ABAF8u;
    // 7F1ABAF8: lfs     f0, 6552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABAF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABAFC:
    ctx->pc = 0x7F1ABAFCu;
    // 7F1ABAFC: stw     r4, 76(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABB00:
    ctx->pc = 0x7F1ABB00u;
    // 7F1ABB00: stw     r0, 80(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABB04:
    ctx->pc = 0x7F1ABB04u;
    // 7F1ABB04: lwz     r3, 2008(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABB08:
    ctx->pc = 0x7F1ABB08u;
    // 7F1ABB08: lwz     r0, 2012(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABB0C:
    ctx->pc = 0x7F1ABB0Cu;
    // 7F1ABB0C: stw     r3, 84(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABB10:
    ctx->pc = 0x7F1ABB10u;
    // 7F1ABB10: stw     r0, 88(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABB14:
    ctx->pc = 0x7F1ABB14u;
    // 7F1ABB14: lwz     r3, 136(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABB18:
    ctx->pc = 0x7F1ABB18u;
    // 7F1ABB18: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1ABB1C:
    ctx->pc = 0x7F1ABB1Cu;
    // 7F1ABB1C: stw     r0, 136(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABB20:
    ctx->pc = 0x7F1ABB20u;
    // 7F1ABB20: lfs     f1, 108(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB20u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABB24:
    ctx->pc = 0x7F1ABB24u;
    // 7F1ABB24: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB24u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1ABB28:
    ctx->pc = 0x7F1ABB28u;
    // 7F1ABB28: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1ABB2C:
    ctx->pc = 0x7F1ABB2Cu;
    // 7F1ABB2C: bc    4, 2, 0x7F1ABB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABB38;
        }
    }

label_7F1ABB30:
    ctx->pc = 0x7F1ABB30u;
    ctx->downcount -= 2;
    // 7F1ABB30: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F1ABB34:
    ctx->pc = 0x7F1ABB34u;
    // 7F1ABB34: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1ABB38u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1ABB38:
    ctx->pc = 0x7F1ABB38u;
    ctx->downcount -= 30;
    // 7F1ABB38: psq_l   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ABB38u);
        if (ctx->exception) return;
    }

label_7F1ABB3C:
    ctx->pc = 0x7F1ABB3Cu;
    // 7F1ABB3C: lfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB40:
    ctx->pc = 0x7F1ABB40u;
    // 7F1ABB40: psq_l   f30, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ABB40u);
        if (ctx->exception) return;
    }

label_7F1ABB44:
    ctx->pc = 0x7F1ABB44u;
    // 7F1ABB44: lfd     f30, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB48:
    ctx->pc = 0x7F1ABB48u;
    // 7F1ABB48: psq_l   f29, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ABB48u);
        if (ctx->exception) return;
    }

label_7F1ABB4C:
    ctx->pc = 0x7F1ABB4Cu;
    // 7F1ABB4C: lfd     f29, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB50:
    ctx->pc = 0x7F1ABB50u;
    // 7F1ABB50: psq_l   f28, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1ABB50u);
        if (ctx->exception) return;
    }

label_7F1ABB54:
    ctx->pc = 0x7F1ABB54u;
    // 7F1ABB54: lfd     f28, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB58:
    ctx->pc = 0x7F1ABB58u;
    // 7F1ABB58: psq_l   f27, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1ABB58u);
        if (ctx->exception) return;
    }

label_7F1ABB5C:
    ctx->pc = 0x7F1ABB5Cu;
    // 7F1ABB5C: lfd     f27, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB60:
    ctx->pc = 0x7F1ABB60u;
    // 7F1ABB60: psq_l   f26, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F1ABB60u);
        if (ctx->exception) return;
    }

label_7F1ABB64:
    ctx->pc = 0x7F1ABB64u;
    // 7F1ABB64: lfd     f26, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB68:
    ctx->pc = 0x7F1ABB68u;
    // 7F1ABB68: psq_l   f25, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F1ABB68u);
        if (ctx->exception) return;
    }

label_7F1ABB6C:
    ctx->pc = 0x7F1ABB6Cu;
    // 7F1ABB6C: lfd     f25, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABB6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABB70:
    ctx->pc = 0x7F1ABB70u;
    // 7F1ABB70: lmw     r23, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ABB74:
    ctx->pc = 0x7F1ABB74u;
    // 7F1ABB74: lwz     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABB78:
    ctx->pc = 0x7F1ABB78u;
    // 7F1ABB78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ABB7C:
    ctx->pc = 0x7F1ABB7Cu;
    // 7F1ABB7C: addi    r1, r1, 320
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(320);

label_7F1ABB80:
    ctx->pc = 0x7F1ABB80u;
    // 7F1ABB80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABB84:
    ctx->pc = 0x7F1ABB84u;
    ctx->downcount -= 13;
    // 7F1ABB84: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ABB88:
    ctx->pc = 0x7F1ABB88u;
    // 7F1ABB88: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1ABB8C:
    ctx->pc = 0x7F1ABB8Cu;
    // 7F1ABB8C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1ABB90:
    ctx->pc = 0x7F1ABB90u;
    // 7F1ABB90: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABB94:
    ctx->pc = 0x7F1ABB94u;
    // 7F1ABB94: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1ABB98:
    ctx->pc = 0x7F1ABB98u;
    // 7F1ABB98: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1ABB9C:
    ctx->pc = 0x7F1ABB9Cu;
    // 7F1ABB9C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1ABBA0:
    ctx->pc = 0x7F1ABBA0u;
    // 7F1ABBA0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABBA4:
    ctx->pc = 0x7F1ABBA4u;
    // 7F1ABBA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABBA8:
    ctx->pc = 0x7F1ABBA8u;
    ctx->downcount -= 4;
    // 7F1ABBA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ABBAC:
    ctx->pc = 0x7F1ABBACu;
    // 7F1ABBAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ABBB0:
    ctx->pc = 0x7F1ABBB0u;
    // 7F1ABBB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABBB4:
    ctx->pc = 0x7F1ABBB4u;
    // 7F1ABBB4: bl      0x7F1ABB84
    {
            ctx->lr = 0x7F1ABBB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABB84u;
                return;
            }
            goto label_7F1ABB84;
    }

label_7F1ABBB8:
    ctx->pc = 0x7F1ABBB8u;
    ctx->downcount -= 35;
    // 7F1ABBB8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ABBBC:
    ctx->pc = 0x7F1ABBBCu;
    // 7F1ABBBC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ABBC0:
    ctx->pc = 0x7F1ABBC0u;
    // 7F1ABBC0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABBC4:
    ctx->pc = 0x7F1ABBC4u;
    // 7F1ABBC4: addi    r5, r4, 6640
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6640);

label_7F1ABBC8:
    ctx->pc = 0x7F1ABBC8u;
    // 7F1ABBC8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ABBCC:
    ctx->pc = 0x7F1ABBCCu;
    // 7F1ABBCC: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBCCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABBD0:
    ctx->pc = 0x7F1ABBD0u;
    // 7F1ABBD0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABBD4:
    ctx->pc = 0x7F1ABBD4u;
    // 7F1ABBD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABBD8:
    ctx->pc = 0x7F1ABBD8u;
    // 7F1ABBD8: lfs     f1, 6632(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6632);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1ABBDC:
    ctx->pc = 0x7F1ABBDCu;
    // 7F1ABBDC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABBE0:
    ctx->pc = 0x7F1ABBE0u;
    // 7F1ABBE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABBE4:
    ctx->pc = 0x7F1ABBE4u;
    // 7F1ABBE4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBE4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1ABBE8:
    ctx->pc = 0x7F1ABBE8u;
    // 7F1ABBE8: lfs     f0, 6584(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABBEC:
    ctx->pc = 0x7F1ABBECu;
    // 7F1ABBEC: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBECu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1ABBF0:
    ctx->pc = 0x7F1ABBF0u;
    // 7F1ABBF0: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABBF0u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1ABBF4:
    ctx->pc = 0x7F1ABBF4u;
    // 7F1ABBF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ABBF8:
    ctx->pc = 0x7F1ABBF8u;
    // 7F1ABBF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ABBFC:
    ctx->pc = 0x7F1ABBFCu;
    // 7F1ABBFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABC00:
    ctx->pc = 0x7F1ABC00u;
    ctx->downcount -= 7;
    // 7F1ABC00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ABC04:
    ctx->pc = 0x7F1ABC04u;
    // 7F1ABC04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ABC08:
    ctx->pc = 0x7F1ABC08u;
    // 7F1ABC08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABC0C:
    ctx->pc = 0x7F1ABC0Cu;
    // 7F1ABC0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1ABC10:
    ctx->pc = 0x7F1ABC10u;
    // 7F1ABC10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABC14:
    ctx->pc = 0x7F1ABC14u;
    // 7F1ABC14: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABC18:
    ctx->pc = 0x7F1ABC18u;
    // 7F1ABC18: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1ABC1Cu;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1ABC1C:
    ctx->pc = 0x7F1ABC1Cu;
    ctx->downcount -= 7;
    // 7F1ABC1C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABC20:
    ctx->pc = 0x7F1ABC20u;
    // 7F1ABC20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABC24:
    ctx->pc = 0x7F1ABC24u;
    // 7F1ABC24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1ABC28:
    ctx->pc = 0x7F1ABC28u;
    // 7F1ABC28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ABC2C:
    ctx->pc = 0x7F1ABC2Cu;
    // 7F1ABC2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1ABC30:
    ctx->pc = 0x7F1ABC30u;
    // 7F1ABC30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABC34:
    ctx->pc = 0x7F1ABC34u;
    ctx->downcount -= 37;
    // 7F1ABC34: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ABC38:
    ctx->pc = 0x7F1ABC38u;
    // 7F1ABC38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ABC3C:
    ctx->pc = 0x7F1ABC3Cu;
    // 7F1ABC3C: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABC40:
    ctx->pc = 0x7F1ABC40u;
    // 7F1ABC40: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1ABC44:
    ctx->pc = 0x7F1ABC44u;
    // 7F1ABC44: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ABC44u);
        if (ctx->exception) return;
    }

label_7F1ABC48:
    ctx->pc = 0x7F1ABC48u;
    // 7F1ABC48: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1ABC4C:
    ctx->pc = 0x7F1ABC4Cu;
    // 7F1ABC4C: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ABC4Cu);
        if (ctx->exception) return;
    }

label_7F1ABC50:
    ctx->pc = 0x7F1ABC50u;
    // 7F1ABC50: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1ABC54:
    ctx->pc = 0x7F1ABC54u;
    // 7F1ABC54: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ABC54u);
        if (ctx->exception) return;
    }

label_7F1ABC58:
    ctx->pc = 0x7F1ABC58u;
    // 7F1ABC58: stmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ABC5C:
    ctx->pc = 0x7F1ABC5Cu;
    // 7F1ABC5C: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1ABC60:
    ctx->pc = 0x7F1ABC60u;
    // 7F1ABC60: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1ABC64:
    ctx->pc = 0x7F1ABC64u;
    // 7F1ABC64: subf   r6, r25, r7
    {
        u32 a = ~ctx->gpr[25];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1ABC68:
    ctx->pc = 0x7F1ABC68u;
    // 7F1ABC68: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABC6C:
    ctx->pc = 0x7F1ABC6Cu;
    // 7F1ABC6C: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1ABC70:
    ctx->pc = 0x7F1ABC70u;
    // 7F1ABC70: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1ABC74:
    ctx->pc = 0x7F1ABC74u;
    // 7F1ABC74: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1ABC78:
    ctx->pc = 0x7F1ABC78u;
    // 7F1ABC78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ABC7C:
    ctx->pc = 0x7F1ABC7Cu;
    // 7F1ABC7C: lfd     f1, 6576(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC7Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6576);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABC80:
    ctx->pc = 0x7F1ABC80u;
    // 7F1ABC80: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1ABC84:
    ctx->pc = 0x7F1ABC84u;
    // 7F1ABC84: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABC88:
    ctx->pc = 0x7F1ABC88u;
    // 7F1ABC88: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABC8C:
    ctx->pc = 0x7F1ABC8Cu;
    // 7F1ABC8C: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABC90:
    ctx->pc = 0x7F1ABC90u;
    // 7F1ABC90: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1ABC94:
    ctx->pc = 0x7F1ABC94u;
    // 7F1ABC94: fsubs   f29, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABC94u)) return;
    ppc_fsubs(ctx, 29, 0, 1);

label_7F1ABC98:
    ctx->pc = 0x7F1ABC98u;
    // 7F1ABC98: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1ABC9C:
    ctx->pc = 0x7F1ABC9Cu;
    // 7F1ABC9C: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1ABCA0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1ABCA0:
    ctx->pc = 0x7F1ABCA0u;
    ctx->downcount -= 13;
    // 7F1ABCA0: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1ABCA4:
    ctx->pc = 0x7F1ABCA4u;
    // 7F1ABCA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ABCA8:
    ctx->pc = 0x7F1ABCA8u;
    // 7F1ABCA8: stw     r0, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABCAC:
    ctx->pc = 0x7F1ABCACu;
    // 7F1ABCAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ABCB0:
    ctx->pc = 0x7F1ABCB0u;
    // 7F1ABCB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABCB4:
    ctx->pc = 0x7F1ABCB4u;
    // 7F1ABCB4: lfs     f30, 6584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABCB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1ABCB8:
    ctx->pc = 0x7F1ABCB8u;
    // 7F1ABCB8: stw     r0, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABCBC:
    ctx->pc = 0x7F1ABCBCu;
    // 7F1ABCBC: xoris   r25, r25, 0x8000
    ctx->gpr[25] = ctx->gpr[25] ^ (0x8000u << 16);

label_7F1ABCC0:
    ctx->pc = 0x7F1ABCC0u;
    // 7F1ABCC0: lfd     f31, 6576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABCC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6576);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABCC4:
    ctx->pc = 0x7F1ABCC4u;
    // 7F1ABCC4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1ABCC8:
    ctx->pc = 0x7F1ABCC8u;
    // 7F1ABCC8: lwz     r30, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1ABCCC:
    ctx->pc = 0x7F1ABCCCu;
    // 7F1ABCCC: lis     r26, 17200
    ctx->gpr[26] = ((u32)(s32)(17200) << 16);

label_7F1ABCD0:
    ctx->pc = 0x7F1ABCD0u;
    // 7F1ABCD0: lwz     r29, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1ABCD4:
    ctx->pc = 0x7F1ABCD4u;
    ctx->downcount -= 15;
    // 7F1ABCD4: lwz     r5, 2000(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ABCD8:
    // 7F1ABCD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1ABCDC:
    ctx->pc = 0x7F1ABCDCu;
    // 7F1ABCDC: lwz     r4, 2004(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2004);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABCE0:
    // 7F1ABCE0: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F1ABCE4:
    ctx->pc = 0x7F1ABCE4u;
    // 7F1ABCE4: stw     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1ABCE8:
    ctx->pc = 0x7F1ABCE8u;
    // 7F1ABCE8: stw     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABCEC:
    ctx->pc = 0x7F1ABCECu;
    // 7F1ABCEC: lwz     r5, 2008(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1ABCF0:
    ctx->pc = 0x7F1ABCF0u;
    // 7F1ABCF0: lwz     r4, 2012(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2012);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABCF4:
    ctx->pc = 0x7F1ABCF4u;
    // 7F1ABCF4: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1ABCF8:
    ctx->pc = 0x7F1ABCF8u;
    // 7F1ABCF8: stw     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABCFC:
    ctx->pc = 0x7F1ABCFCu;
    // 7F1ABCFC: sth     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1ABD00:
    ctx->pc = 0x7F1ABD00u;
    // 7F1ABD00: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1ABD04:
    ctx->pc = 0x7F1ABD04u;
    // 7F1ABD04: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABD08:
    ctx->pc = 0x7F1ABD08u;
    // 7F1ABD08: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABD0C:
    // 7F1ABD0C: bl      0x7F1ABBA8
    {
            ctx->lr = 0x7F1ABD10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABBA8u;
                return;
            }
            goto label_7F1ABBA8;
    }

label_7F1ABD10:
    ctx->pc = 0x7F1ABD10u;
    ctx->downcount -= 25;
    // 7F1ABD10: stw     r25, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1ABD14:
    // 7F1ABD14: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1ABD18:
    ctx->pc = 0x7F1ABD18u;
    // 7F1ABD18: fadds   f1, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD18u)) return;
    ppc_fadds(ctx, 1, 30, 1);

label_7F1ABD1C:
    // 7F1ABD1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ABD20:
    ctx->pc = 0x7F1ABD20u;
    // 7F1ABD20: stw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1ABD24:
    // 7F1ABD24: cmpwi   r31, 64
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ABD28:
    // 7F1ABD28: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1ABD2C:
    ctx->pc = 0x7F1ABD2Cu;
    // 7F1ABD2C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABD30:
    ctx->pc = 0x7F1ABD30u;
    // 7F1ABD30: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD30u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1ABD34:
    ctx->pc = 0x7F1ABD34u;
    // 7F1ABD34: fmadds f0, f29, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD34u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1ABD38:
    ctx->pc = 0x7F1ABD38u;
    // 7F1ABD38: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1ABD3C:
    ctx->pc = 0x7F1ABD3Cu;
    // 7F1ABD3C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ABD40:
    ctx->pc = 0x7F1ABD40u;
    // 7F1ABD40: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ABD44:
    ctx->pc = 0x7F1ABD44u;
    // 7F1ABD44: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABD48:
    ctx->pc = 0x7F1ABD48u;
    // 7F1ABD48: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABD48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1ABD4C:
    ctx->pc = 0x7F1ABD4Cu;
    // 7F1ABD4C: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABD50:
    ctx->pc = 0x7F1ABD50u;
    // 7F1ABD50: stb     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ABD54:
    ctx->pc = 0x7F1ABD54u;
    // 7F1ABD54: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABD58:
    ctx->pc = 0x7F1ABD58u;
    // 7F1ABD58: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1ABD5C:
    ctx->pc = 0x7F1ABD5Cu;
    // 7F1ABD5C: stb     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1ABD60:
    ctx->pc = 0x7F1ABD60u;
    // 7F1ABD60: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1ABD64:
    ctx->pc = 0x7F1ABD64u;
    // 7F1ABD64: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABD68:
    ctx->pc = 0x7F1ABD68u;
    // 7F1ABD68: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABD6C:
    // 7F1ABD6C: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1ABD70:
    // 7F1ABD70: bc    12, 0, 0x7F1ABCD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABCD4u;
                return;
            }
            goto label_7F1ABCD4;
        }
    }

label_7F1ABD74:
    ctx->pc = 0x7F1ABD74u;
    ctx->downcount -= 4;
    // 7F1ABD74: lwz     r3, 188(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABD78:
    ctx->pc = 0x7F1ABD78u;
    // 7F1ABD78: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F1ABD7C:
    ctx->pc = 0x7F1ABD7Cu;
    // 7F1ABD7C: lwz     r4, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABD80:
    ctx->pc = 0x7F1ABD80u;
    // 7F1ABD80: bl      0x8000519C
    {
            ctx->lr = 0x7F1ABD84u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1ABD84:
    ctx->pc = 0x7F1ABD84u;
    ctx->downcount -= 4;
    // 7F1ABD84: lwz     r3, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1ABD88:
    ctx->pc = 0x7F1ABD88u;
    // 7F1ABD88: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F1ABD8C:
    ctx->pc = 0x7F1ABD8Cu;
    // 7F1ABD8C: lwz     r4, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABD90:
    ctx->pc = 0x7F1ABD90u;
    // 7F1ABD90: bl      0x8000519C
    {
            ctx->lr = 0x7F1ABD94u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1ABD94:
    ctx->pc = 0x7F1ABD94u;
    ctx->downcount -= 26;
    // 7F1ABD94: lwz     r0, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABD98:
    ctx->pc = 0x7F1ABD98u;
    // 7F1ABD98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1ABD9C:
    ctx->pc = 0x7F1ABD9Cu;
    // 7F1ABD9C: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F1ABDA0:
    ctx->pc = 0x7F1ABDA0u;
    // 7F1ABDA0: stw     r0, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABDA4:
    ctx->pc = 0x7F1ABDA4u;
    // 7F1ABDA4: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1ABDA4u);
        if (ctx->exception) return;
    }

label_7F1ABDA8:
    ctx->pc = 0x7F1ABDA8u;
    // 7F1ABDA8: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABDAC:
    ctx->pc = 0x7F1ABDACu;
    // 7F1ABDAC: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1ABDACu);
        if (ctx->exception) return;
    }

label_7F1ABDB0:
    ctx->pc = 0x7F1ABDB0u;
    // 7F1ABDB0: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABDB4:
    ctx->pc = 0x7F1ABDB4u;
    // 7F1ABDB4: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1ABDB4u);
        if (ctx->exception) return;
    }

label_7F1ABDB8:
    ctx->pc = 0x7F1ABDB8u;
    // 7F1ABDB8: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABDB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABDBC:
    ctx->pc = 0x7F1ABDBCu;
    // 7F1ABDBC: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ABDC0:
    ctx->pc = 0x7F1ABDC0u;
    // 7F1ABDC0: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABDC4:
    ctx->pc = 0x7F1ABDC4u;
    // 7F1ABDC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ABDC8:
    ctx->pc = 0x7F1ABDC8u;
    // 7F1ABDC8: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1ABDCC:
    ctx->pc = 0x7F1ABDCCu;
    // 7F1ABDCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABDD0:
    ctx->pc = 0x7F1ABDD0u;
    ctx->downcount -= 26;
    // 7F1ABDD0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ABDD4:
    ctx->pc = 0x7F1ABDD4u;
    // 7F1ABDD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ABDD8:
    ctx->pc = 0x7F1ABDD8u;
    // 7F1ABDD8: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F1ABDDC:
    ctx->pc = 0x7F1ABDDCu;
    // 7F1ABDDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABDE0:
    ctx->pc = 0x7F1ABDE0u;
    // 7F1ABDE0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1ABDE4:
    ctx->pc = 0x7F1ABDE4u;
    // 7F1ABDE4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ABDE8:
    ctx->pc = 0x7F1ABDE8u;
    // 7F1ABDE8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABDEC:
    ctx->pc = 0x7F1ABDECu;
    // 7F1ABDEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1ABDF0:
    ctx->pc = 0x7F1ABDF0u;
    // 7F1ABDF0: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1ABDF4:
    ctx->pc = 0x7F1ABDF4u;
    // 7F1ABDF4: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1ABDF8:
    ctx->pc = 0x7F1ABDF8u;
    // 7F1ABDF8: addi    r7, r29, 1948
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1948);

label_7F1ABDFC:
    ctx->pc = 0x7F1ABDFCu;
    // 7F1ABDFC: stw     r3, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABE00:
    ctx->pc = 0x7F1ABE00u;
    // 7F1ABE00: stw     r3, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABE04:
    ctx->pc = 0x7F1ABE04u;
    // 7F1ABE04: stw     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABE08:
    ctx->pc = 0x7F1ABE08u;
    // 7F1ABE08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ABE0C:
    loop_7F1ABE0C(ctx);
    if (ctx->pc == 0x7F1ABE20u) goto label_7F1ABE20;
    return;
label_7F1ABE10:
    ctx->pc = 0x7F1ABE10u;
    // 7F1ABE10: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1ABE14:
    ctx->pc = 0x7F1ABE14u;
    // 7F1ABE14: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABE18:
    ctx->pc = 0x7F1ABE18u;
    // 7F1ABE18: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F1ABE1C:
    // 7F1ABE1C: bc    16, 0, 0x7F1ABE0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABE0Cu;
                return;
            }
            goto label_7F1ABE0C;
        }
    }

label_7F1ABE20:
    ctx->pc = 0x7F1ABE20u;
    ctx->downcount -= 56;
    // 7F1ABE20: lwz     r4, 2000(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2000);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1ABE24:
    ctx->pc = 0x7F1ABE24u;
    // 7F1ABE24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABE28:
    ctx->pc = 0x7F1ABE28u;
    // 7F1ABE28: lwz     r0, 2004(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABE2C:
    ctx->pc = 0x7F1ABE2Cu;
    // 7F1ABE2C: xoris   r8, r9, 0x8000
    ctx->gpr[8] = ctx->gpr[9] ^ (0x8000u << 16);

label_7F1ABE30:
    ctx->pc = 0x7F1ABE30u;
    // 7F1ABE30: lfs     f0, 6648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABE34:
    ctx->pc = 0x7F1ABE34u;
    // 7F1ABE34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABE38:
    ctx->pc = 0x7F1ABE38u;
    // 7F1ABE38: stw     r4, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABE3C:
    ctx->pc = 0x7F1ABE3Cu;
    // 7F1ABE3C: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F1ABE40:
    ctx->pc = 0x7F1ABE40u;
    // 7F1ABE40: lfs     f4, 6652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1ABE44:
    ctx->pc = 0x7F1ABE44u;
    // 7F1ABE44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABE48:
    ctx->pc = 0x7F1ABE48u;
    // 7F1ABE48: stw     r0, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABE4C:
    ctx->pc = 0x7F1ABE4Cu;
    // 7F1ABE4C: fmuls   f5, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE4Cu)) return;
    ppc_fmuls(ctx, 5, 0, 1);

label_7F1ABE50:
    ctx->pc = 0x7F1ABE50u;
    // 7F1ABE50: lfs     f3, 6656(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1ABE54:
    ctx->pc = 0x7F1ABE54u;
    // 7F1ABE54: fmuls   f4, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE54u)) return;
    ppc_fmuls(ctx, 4, 4, 1);

label_7F1ABE58:
    ctx->pc = 0x7F1ABE58u;
    // 7F1ABE58: lwz     r10, 2008(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2008);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1ABE5C:
    ctx->pc = 0x7F1ABE5Cu;
    // 7F1ABE5C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABE60:
    ctx->pc = 0x7F1ABE60u;
    // 7F1ABE60: lwz     r0, 2012(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABE64:
    ctx->pc = 0x7F1ABE64u;
    // 7F1ABE64: addi    r4, r3, 6596
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6596);

label_7F1ABE68:
    ctx->pc = 0x7F1ABE68u;
    // 7F1ABE68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1ABE6C:
    ctx->pc = 0x7F1ABE6Cu;
    // 7F1ABE6C: stw     r10, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1ABE70:
    ctx->pc = 0x7F1ABE70u;
    // 7F1ABE70: addi    r9, r3, 6576
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(6576);

label_7F1ABE74:
    ctx->pc = 0x7F1ABE74u;
    // 7F1ABE74: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABE78:
    ctx->pc = 0x7F1ABE78u;
    // 7F1ABE78: fmuls   f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE78u)) return;
    ppc_fmuls(ctx, 1, 3, 2);

label_7F1ABE7C:
    ctx->pc = 0x7F1ABE7Cu;
    // 7F1ABE7C: stw     r0, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABE80:
    ctx->pc = 0x7F1ABE80u;
    // 7F1ABE80: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F1ABE84:
    ctx->pc = 0x7F1ABE84u;
    // 7F1ABE84: fmuls   f3, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE84u)) return;
    ppc_fmuls(ctx, 3, 0, 2);

label_7F1ABE88:
    ctx->pc = 0x7F1ABE88u;
    // 7F1ABE88: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1ABE8C:
    ctx->pc = 0x7F1ABE8Cu;
    // 7F1ABE8C: stfs     f5, 92(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE8Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1ABE90:
    ctx->pc = 0x7F1ABE90u;
    // 7F1ABE90: lfs     f0, 6552(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1ABE94:
    ctx->pc = 0x7F1ABE94u;
    // 7F1ABE94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1ABE98:
    ctx->pc = 0x7F1ABE98u;
    // 7F1ABE98: stfs     f5, 96(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE98u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1ABE9C:
    ctx->pc = 0x7F1ABE9Cu;
    // 7F1ABE9C: lfd     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABE9Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABEA0:
    ctx->pc = 0x7F1ABEA0u;
    // 7F1ABEA0: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1ABEA4:
    ctx->pc = 0x7F1ABEA4u;
    // 7F1ABEA4: stfs     f4, 100(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEA4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F1ABEA8:
    ctx->pc = 0x7F1ABEA8u;
    // 7F1ABEA8: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F1ABEAC:
    ctx->pc = 0x7F1ABEACu;
    // 7F1ABEAC: stfs     f1, 112(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ABEB0:
    ctx->pc = 0x7F1ABEB0u;
    // 7F1ABEB0: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1ABEB4:
    ctx->pc = 0x7F1ABEB4u;
    // 7F1ABEB4: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1ABEB8:
    ctx->pc = 0x7F1ABEB8u;
    // 7F1ABEB8: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1ABEBC:
    ctx->pc = 0x7F1ABEBCu;
    // 7F1ABEBC: stfs     f3, 104(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEBCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1ABEC0:
    ctx->pc = 0x7F1ABEC0u;
    // 7F1ABEC0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEC0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1ABEC4:
    ctx->pc = 0x7F1ABEC4u;
    // 7F1ABEC4: stfs     f1, 108(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEC4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1ABEC8:
    ctx->pc = 0x7F1ABEC8u;
    // 7F1ABEC8: stw     r5, 2048(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1ABECC:
    ctx->pc = 0x7F1ABECCu;
    // 7F1ABECC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F1ABED0:
    ctx->pc = 0x7F1ABED0u;
    // 7F1ABED0: stw     r6, 2052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1ABED4:
    ctx->pc = 0x7F1ABED4u;
    // 7F1ABED4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ABED8:
    ctx->pc = 0x7F1ABED8u;
    // 7F1ABED8: sth     r0, 116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(116);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABEDC:
    ctx->pc = 0x7F1ABEDCu;
    // 7F1ABEDC: sth     r0, 118(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABEE0:
    ctx->pc = 0x7F1ABEE0u;
    // 7F1ABEE0: sth     r0, 120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1ABEE4:
    ctx->pc = 0x7F1ABEE4u;
    // 7F1ABEE4: stw     r0, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABEE8:
    ctx->pc = 0x7F1ABEE8u;
    // 7F1ABEE8: stw     r0, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABEEC:
    ctx->pc = 0x7F1ABEECu;
    // 7F1ABEEC: stfs     f0, 2032(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEECu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2032);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABEF0:
    ctx->pc = 0x7F1ABEF0u;
    // 7F1ABEF0: stfs     f0, 2036(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEF0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2036);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABEF4:
    ctx->pc = 0x7F1ABEF4u;
    // 7F1ABEF4: stfs     f0, 2040(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEF4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2040);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABEF8:
    ctx->pc = 0x7F1ABEF8u;
    // 7F1ABEF8: stfs     f0, 2044(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABEF8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2044);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1ABEFC:
    ctx->pc = 0x7F1ABEFCu;
    // 7F1ABEFC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1ABF00u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1ABF00:
    ctx->pc = 0x7F1ABF00u;
    ctx->downcount -= 6;
    // 7F1ABF00: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1ABF04:
    ctx->pc = 0x7F1ABF04u;
    // 7F1ABF04: stw     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1ABF08:
    ctx->pc = 0x7F1ABF08u;
    // 7F1ABF08: addi    r0, r4, -6952
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6952);

label_7F1ABF0C:
    ctx->pc = 0x7F1ABF0Cu;
    // 7F1ABF0C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABF10:
    ctx->pc = 0x7F1ABF10u;
    // 7F1ABF10: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1ABF14:
    ctx->pc = 0x7F1ABF14u;
    // 7F1ABF14: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1ABF18u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1ABF18:
    ctx->pc = 0x7F1ABF18u;
    ctx->downcount -= 1;
    // 7F1ABF18: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1ABF1Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1ABF1C:
    ctx->pc = 0x7F1ABF1Cu;
    ctx->downcount -= 7;
    // 7F1ABF1C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABF20:
    ctx->pc = 0x7F1ABF20u;
    // 7F1ABF20: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1ABF24:
    ctx->pc = 0x7F1ABF24u;
    // 7F1ABF24: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1ABF28:
    ctx->pc = 0x7F1ABF28u;
    // 7F1ABF28: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1ABF2C:
    ctx->pc = 0x7F1ABF2Cu;
    // 7F1ABF2C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1ABF30:
    ctx->pc = 0x7F1ABF30u;
    // 7F1ABF30: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1ABF34:
    ctx->pc = 0x7F1ABF34u;
    // 7F1ABF34: bl      0x7F1ABC34
    {
            ctx->lr = 0x7F1ABF38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABC34u;
                return;
            }
            goto label_7F1ABC34;
    }

label_7F1ABF38:
    ctx->pc = 0x7F1ABF38u;
    ctx->downcount -= 17;
    // 7F1ABF38: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1ABF3C:
    ctx->pc = 0x7F1ABF3Cu;
    // 7F1ABF3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1ABF40:
    ctx->pc = 0x7F1ABF40u;
    // 7F1ABF40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABF44:
    ctx->pc = 0x7F1ABF44u;
    // 7F1ABF44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1ABF48:
    ctx->pc = 0x7F1ABF48u;
    // 7F1ABF48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1ABF4C:
    ctx->pc = 0x7F1ABF4Cu;
    // 7F1ABF4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1ABF50:
    ctx->pc = 0x7F1ABF50u;
    ctx->downcount -= 29;
    // 7F1ABF50: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1ABF54:
    ctx->pc = 0x7F1ABF54u;
    // 7F1ABF54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1ABF58:
    ctx->pc = 0x7F1ABF58u;
    // 7F1ABF58: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABF5C:
    ctx->pc = 0x7F1ABF5Cu;
    // 7F1ABF5C: stfd     f31, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABF5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1ABF60:
    ctx->pc = 0x7F1ABF60u;
    // 7F1ABF60: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1ABF60u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F1ABF64:
    ctx->pc = 0x7F1ABF64u;
    // 7F1ABF64: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1ABF64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1ABF68:
    ctx->pc = 0x7F1ABF68u;
    // 7F1ABF68: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1ABF68u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F1ABF6C:
    ctx->pc = 0x7F1ABF6Cu;
    // 7F1ABF6C: stmw     r25, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1ABF70:
    ctx->pc = 0x7F1ABF70u;
    // 7F1ABF70: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1ABF74:
    ctx->pc = 0x7F1ABF74u;
    // 7F1ABF74: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1ABF78:
    ctx->pc = 0x7F1ABF78u;
    // 7F1ABF78: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1ABF7C:
    ctx->pc = 0x7F1ABF7Cu;
    // 7F1ABF7C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1ABF80:
    ctx->pc = 0x7F1ABF80u;
    // 7F1ABF80: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1ABF84:
    ctx->pc = 0x7F1ABF84u;
    // 7F1ABF84: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1ABF88:
    ctx->pc = 0x7F1ABF88u;
    // 7F1ABF88: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1ABF8C:
    ctx->pc = 0x7F1ABF8Cu;
    // 7F1ABF8C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1ABF90:
    ctx->pc = 0x7F1ABF90u;
    // 7F1ABF90: li      r5, 2056
    ctx->gpr[5] = (u32)(s32)(2056);

label_7F1ABF94:
    ctx->pc = 0x7F1ABF94u;
    // 7F1ABF94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1ABF98:
    ctx->pc = 0x7F1ABF98u;
    // 7F1ABF98: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1ABF9Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1ABF9C:
    ctx->pc = 0x7F1ABF9Cu;
    ctx->downcount -= 2;
    // 7F1ABF9C: or.   r31, r3, r3
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

label_7F1ABFA0:
    ctx->pc = 0x7F1ABFA0u;
    // 7F1ABFA0: bc    12, 2, 0x7F1AC050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC050;
        }
    }

label_7F1ABFA4:
    ctx->pc = 0x7F1ABFA4u;
    ctx->downcount -= 5;
    // 7F1ABFA4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1ABFA8:
    ctx->pc = 0x7F1ABFA8u;
    // 7F1ABFA8: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1ABFAC:
    ctx->pc = 0x7F1ABFACu;
    // 7F1ABFAC: addi    r4, r4, -20184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20184);

label_7F1ABFB0:
    ctx->pc = 0x7F1ABFB0u;
    // 7F1ABFB0: addi    r5, r5, -17408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17408);

label_7F1ABFB4:
    ctx->pc = 0x7F1ABFB4u;
    // 7F1ABFB4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1ABFB8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1ABFB8:
    ctx->pc = 0x7F1ABFB8u;
    ctx->downcount -= 12;
    // 7F1ABFB8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1ABFBC:
    ctx->pc = 0x7F1ABFBCu;
    // 7F1ABFBC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1ABFC0:
    ctx->pc = 0x7F1ABFC0u;
    // 7F1ABFC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1ABFC4:
    ctx->pc = 0x7F1ABFC4u;
    // 7F1ABFC4: cmpwi   r26, 20
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1ABFC8:
    ctx->pc = 0x7F1ABFC8u;
    // 7F1ABFC8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1ABFCC:
    ctx->pc = 0x7F1ABFCCu;
    // 7F1ABFCC: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1ABFD0:
    ctx->pc = 0x7F1ABFD0u;
    // 7F1ABFD0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1ABFD4:
    ctx->pc = 0x7F1ABFD4u;
    // 7F1ABFD4: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABFD8:
    ctx->pc = 0x7F1ABFD8u;
    // 7F1ABFD8: stw     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABFDC:
    ctx->pc = 0x7F1ABFDCu;
    // 7F1ABFDC: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1ABFE0:
    ctx->pc = 0x7F1ABFE0u;
    // 7F1ABFE0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1ABFE4:
    ctx->pc = 0x7F1ABFE4u;
    // 7F1ABFE4: bc    4, 0, 0x7F1ABFEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1ABFEC;
        }
    }

label_7F1ABFE8:
    ctx->pc = 0x7F1ABFE8u;
    ctx->downcount -= 1;
    // 7F1ABFE8: li      r26, 20
    ctx->gpr[26] = (u32)(s32)(20);

label_7F1ABFEC:
    ctx->pc = 0x7F1ABFECu;
    ctx->downcount -= 5;
    // 7F1ABFEC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1ABFF0:
    ctx->pc = 0x7F1ABFF0u;
    // 7F1ABFF0: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F1ABFF4:
    ctx->pc = 0x7F1ABFF4u;
    // 7F1ABFF4: addi    r4, r25, -4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(-4);

label_7F1ABFF8:
    ctx->pc = 0x7F1ABFF8u;
    // 7F1ABFF8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1ABFFC:
    loop_7F1ABFFC(ctx);
    if (ctx->pc == 0x7F1AC010u) goto label_7F1AC010;
    return;
label_7F1AC000:
    ctx->pc = 0x7F1AC000u;
    // 7F1AC000: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1AC004:
    ctx->pc = 0x7F1AC004u;
    // 7F1AC004: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1AC008:
    ctx->pc = 0x7F1AC008u;
    // 7F1AC008: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1AC00C:
    // 7F1AC00C: bc    16, 0, 0x7F1ABFFC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABFFCu;
                return;
            }
            goto label_7F1ABFFC;
        }
    }

label_7F1AC010:
    ctx->pc = 0x7F1AC010u;
    ctx->downcount -= 10;
    // 7F1AC010: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1AC010u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1AC014:
    ctx->pc = 0x7F1AC014u;
    // 7F1AC014: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC018:
    ctx->pc = 0x7F1AC018u;
    // 7F1AC018: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1AC018u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F1AC01C:
    ctx->pc = 0x7F1AC01Cu;
    // 7F1AC01C: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1AC020:
    ctx->pc = 0x7F1AC020u;
    // 7F1AC020: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1AC024:
    ctx->pc = 0x7F1AC024u;
    // 7F1AC024: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1AC028:
    ctx->pc = 0x7F1AC028u;
    // 7F1AC028: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1AC02C:
    ctx->pc = 0x7F1AC02Cu;
    // 7F1AC02C: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1AC030:
    ctx->pc = 0x7F1AC030u;
    // 7F1AC030: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AC034:
    ctx->pc = 0x7F1AC034u;
    // 7F1AC034: bl      0x7F1ABDD0
    {
            ctx->lr = 0x7F1AC038u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1ABDD0u;
                return;
            }
            goto label_7F1ABDD0;
    }

label_7F1AC038:
    ctx->pc = 0x7F1AC038u;
    ctx->downcount -= 2;
    // 7F1AC038: cmpwi   r3, 0
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

label_7F1AC03C:
    ctx->pc = 0x7F1AC03Cu;
    // 7F1AC03C: bc    4, 0, 0x7F1AC050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1AC050;
        }
    }

label_7F1AC040:
    ctx->pc = 0x7F1AC040u;
    ctx->downcount -= 2;
    // 7F1AC040: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC044:
    ctx->pc = 0x7F1AC044u;
    // 7F1AC044: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1AC048u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1AC048:
    ctx->pc = 0x7F1AC048u;
    ctx->downcount -= 2;
    // 7F1AC048: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AC04C:
    ctx->pc = 0x7F1AC04Cu;
    // 7F1AC04C: b       0x7F1AC054
    {
            goto label_7F1AC054;
    }

label_7F1AC050:
    ctx->pc = 0x7F1AC050u;
    ctx->downcount -= 1;
    // 7F1AC050: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1AC054:
    ctx->pc = 0x7F1AC054u;
    ctx->downcount -= 18;
    // 7F1AC054: lfd     f31, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC058:
    ctx->pc = 0x7F1AC058u;
    // 7F1AC058: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1AC05C:
    ctx->pc = 0x7F1AC05Cu;
    // 7F1AC05C: lmw     r25, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1AC060:
    ctx->pc = 0x7F1AC060u;
    // 7F1AC060: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1AC064:
    ctx->pc = 0x7F1AC064u;
    // 7F1AC064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1AC068:
    ctx->pc = 0x7F1AC068u;
    // 7F1AC068: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1AC06C:
    ctx->pc = 0x7F1AC06Cu;
    // 7F1AC06C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AC070:
    ctx->pc = 0x7F1AC070u;
    ctx->downcount -= 1;
    // 7F1AC070: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AC074:
    ctx->pc = 0x7F1AC074u;
    ctx->downcount -= 1;
    // 7F1AC074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AC078:
    ctx->pc = 0x7F1AC078u;
    ctx->downcount -= 2;
    // 7F1AC078: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1AC07C:
    ctx->pc = 0x7F1AC07Cu;
    // 7F1AC07C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A80EC;
        }
    }

label_7F1AC080:
    ctx->pc = 0x7F1AC080u;
    ctx->downcount -= 26;
    // 7F1AC080: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1AC084:
    ctx->pc = 0x7F1AC084u;
    // 7F1AC084: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1AC088:
    ctx->pc = 0x7F1AC088u;
    // 7F1AC088: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AC08C:
    ctx->pc = 0x7F1AC08Cu;
    // 7F1AC08C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1AC090:
    ctx->pc = 0x7F1AC090u;
    // 7F1AC090: lfs     f1, 6680(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC090u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1AC094:
    ctx->pc = 0x7F1AC094u;
    // 7F1AC094: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1AC098:
    ctx->pc = 0x7F1AC098u;
    // 7F1AC098: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1AC09C:
    ctx->pc = 0x7F1AC09Cu;
    // 7F1AC09C: li      r8, -128
    ctx->gpr[8] = (u32)(s32)(-128);

label_7F1AC0A0:
    ctx->pc = 0x7F1AC0A0u;
    // 7F1AC0A0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1AC0A4:
    ctx->pc = 0x7F1AC0A4u;
    // 7F1AC0A4: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F1AC0A8:
    ctx->pc = 0x7F1AC0A8u;
    // 7F1AC0A8: lfs     f2, 6684(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC0A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1AC0AC:
    ctx->pc = 0x7F1AC0ACu;
    // 7F1AC0AC: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1AC0B0:
    ctx->pc = 0x7F1AC0B0u;
    // 7F1AC0B0: lfs     f3, 6664(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1AC0B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1AC0B4:
    ctx->pc = 0x7F1AC0B4u;
    // 7F1AC0B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1AC0B8:
    ctx->pc = 0x7F1AC0B8u;
    // 7F1AC0B8: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1AC0B8u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_7F1AC0BC:
    ctx->pc = 0x7F1AC0BCu;
    // 7F1AC0BC: sth     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1AC0C0:
    ctx->pc = 0x7F1AC0C0u;
    // 7F1AC0C0: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1AC0C4:
    ctx->pc = 0x7F1AC0C4u;
    // 7F1AC0C4: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1AC0C8:
    ctx->pc = 0x7F1AC0C8u;
    // 7F1AC0C8: sth     r8, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1AC0CC:
    ctx->pc = 0x7F1AC0CCu;
    // 7F1AC0CC: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F1AC0D0:
    ctx->pc = 0x7F1AC0D0u;
    // 7F1AC0D0: sth     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AC0D4:
    ctx->pc = 0x7F1AC0D4u;
    // 7F1AC0D4: li      r8, 15
    ctx->gpr[8] = (u32)(s32)(15);

label_7F1AC0D8:
    ctx->pc = 0x7F1AC0D8u;
    // 7F1AC0D8: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC0DC:
    ctx->pc = 0x7F1AC0DCu;
    // 7F1AC0DC: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1AC0E0:
    ctx->pc = 0x7F1AC0E0u;
    // 7F1AC0E0: sth     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1AC0E4:
    ctx->pc = 0x7F1AC0E4u;
    // 7F1AC0E4: bl      0x7F1D4CD8
    {
            ctx->lr = 0x7F1AC0E8u;
            ctx->pc = 0x7F1D4CD8u;
            return;
    }

label_7F1AC0E8:
    ctx->pc = 0x7F1AC0E8u;
    ctx->downcount -= 1;
    // 7F1AC0E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1AC0ECu;
    return;
return_dispatch_7F1A80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1A81F4u: goto label_7F1A81F4;
    case 0x7F1A8208u: goto label_7F1A8208;
    case 0x7F1A84C8u: goto label_7F1A84C8;
    case 0x7F1A84DCu: goto label_7F1A84DC;
    case 0x7F1A854Cu: goto label_7F1A854C;
    case 0x7F1A8568u: goto label_7F1A8568;
    case 0x7F1A8580u: goto label_7F1A8580;
    case 0x7F1A859Cu: goto label_7F1A859C;
    case 0x7F1A85B4u: goto label_7F1A85B4;
    case 0x7F1A85D0u: goto label_7F1A85D0;
    case 0x7F1A860Cu: goto label_7F1A860C;
    case 0x7F1A8614u: goto label_7F1A8614;
    case 0x7F1A8624u: goto label_7F1A8624;
    case 0x7F1A8668u: goto label_7F1A8668;
    case 0x7F1A86C4u: goto label_7F1A86C4;
    case 0x7F1A86D0u: goto label_7F1A86D0;
    case 0x7F1A86D8u: goto label_7F1A86D8;
    case 0x7F1A86E0u: goto label_7F1A86E0;
    case 0x7F1A86E8u: goto label_7F1A86E8;
    case 0x7F1A86F0u: goto label_7F1A86F0;
    case 0x7F1A86F8u: goto label_7F1A86F8;
    case 0x7F1A8768u: goto label_7F1A8768;
    case 0x7F1A8780u: goto label_7F1A8780;
    case 0x7F1A8794u: goto label_7F1A8794;
    case 0x7F1A87A0u: goto label_7F1A87A0;
    case 0x7F1A87ECu: goto label_7F1A87EC;
    case 0x7F1A8808u: goto label_7F1A8808;
    case 0x7F1A881Cu: goto label_7F1A881C;
    case 0x7F1A8864u: goto label_7F1A8864;
    case 0x7F1A88A8u: goto label_7F1A88A8;
    case 0x7F1A88E4u: goto label_7F1A88E4;
    case 0x7F1A890Cu: goto label_7F1A890C;
    case 0x7F1A892Cu: goto label_7F1A892C;
    case 0x7F1A8948u: goto label_7F1A8948;
    case 0x7F1A8964u: goto label_7F1A8964;
    case 0x7F1A8974u: goto label_7F1A8974;
    case 0x7F1A89CCu: goto label_7F1A89CC;
    case 0x7F1A89E0u: goto label_7F1A89E0;
    case 0x7F1A8A14u: goto label_7F1A8A14;
    case 0x7F1A8A28u: goto label_7F1A8A28;
    case 0x7F1A8A44u: goto label_7F1A8A44;
    case 0x7F1A8A80u: goto label_7F1A8A80;
    case 0x7F1A8A9Cu: goto label_7F1A8A9C;
    case 0x7F1A8ACCu: goto label_7F1A8ACC;
    case 0x7F1A8ADCu: goto label_7F1A8ADC;
    case 0x7F1A8AF4u: goto label_7F1A8AF4;
    case 0x7F1A8BA8u: goto label_7F1A8BA8;
    case 0x7F1A8C1Cu: goto label_7F1A8C1C;
    case 0x7F1A8C38u: goto label_7F1A8C38;
    case 0x7F1A8C70u: goto label_7F1A8C70;
    case 0x7F1A8C80u: goto label_7F1A8C80;
    case 0x7F1A8CD4u: goto label_7F1A8CD4;
    case 0x7F1A8D28u: goto label_7F1A8D28;
    case 0x7F1A8D58u: goto label_7F1A8D58;
    case 0x7F1A8D64u: goto label_7F1A8D64;
    case 0x7F1A8D70u: goto label_7F1A8D70;
    case 0x7F1A8D84u: goto label_7F1A8D84;
    case 0x7F1A8D94u: goto label_7F1A8D94;
    case 0x7F1A8DA0u: goto label_7F1A8DA0;
    case 0x7F1A8DDCu: goto label_7F1A8DDC;
    case 0x7F1A8DE8u: goto label_7F1A8DE8;
    case 0x7F1A8E24u: goto label_7F1A8E24;
    case 0x7F1A8E30u: goto label_7F1A8E30;
    case 0x7F1A8E6Cu: goto label_7F1A8E6C;
    case 0x7F1A8E78u: goto label_7F1A8E78;
    case 0x7F1A8EB4u: goto label_7F1A8EB4;
    case 0x7F1A8EB8u: goto label_7F1A8EB8;
    case 0x7F1A8EC8u: goto label_7F1A8EC8;
    case 0x7F1A8F54u: goto label_7F1A8F54;
    case 0x7F1A9110u: goto label_7F1A9110;
    case 0x7F1A9118u: goto label_7F1A9118;
    case 0x7F1A91B0u: goto label_7F1A91B0;
    case 0x7F1A91ECu: goto label_7F1A91EC;
    case 0x7F1A91FCu: goto label_7F1A91FC;
    case 0x7F1A9254u: goto label_7F1A9254;
    case 0x7F1A9268u: goto label_7F1A9268;
    case 0x7F1A92C8u: goto label_7F1A92C8;
    case 0x7F1A9308u: goto label_7F1A9308;
    case 0x7F1A9324u: goto label_7F1A9324;
    case 0x7F1A9358u: goto label_7F1A9358;
    case 0x7F1A9368u: goto label_7F1A9368;
    case 0x7F1A9380u: goto label_7F1A9380;
    case 0x7F1A93D8u: goto label_7F1A93D8;
    case 0x7F1A9420u: goto label_7F1A9420;
    case 0x7F1A9518u: goto label_7F1A9518;
    case 0x7F1A9594u: goto label_7F1A9594;
    case 0x7F1A9608u: goto label_7F1A9608;
    case 0x7F1A9624u: goto label_7F1A9624;
    case 0x7F1A9638u: goto label_7F1A9638;
    case 0x7F1A964Cu: goto label_7F1A964C;
    case 0x7F1A9670u: goto label_7F1A9670;
    case 0x7F1A96A0u: goto label_7F1A96A0;
    case 0x7F1A96ACu: goto label_7F1A96AC;
    case 0x7F1A96B0u: goto label_7F1A96B0;
    case 0x7F1A96B8u: goto label_7F1A96B8;
    case 0x7F1A96C8u: goto label_7F1A96C8;
    case 0x7F1A96DCu: goto label_7F1A96DC;
    case 0x7F1A96E8u: goto label_7F1A96E8;
    case 0x7F1A96ECu: goto label_7F1A96EC;
    case 0x7F1A9710u: goto label_7F1A9710;
    case 0x7F1A9720u: goto label_7F1A9720;
    case 0x7F1A9738u: goto label_7F1A9738;
    case 0x7F1A9750u: goto label_7F1A9750;
    case 0x7F1A975Cu: goto label_7F1A975C;
    case 0x7F1A9778u: goto label_7F1A9778;
    case 0x7F1A977Cu: goto label_7F1A977C;
    case 0x7F1A978Cu: goto label_7F1A978C;
    case 0x7F1A97D4u: goto label_7F1A97D4;
    case 0x7F1A97E0u: goto label_7F1A97E0;
    case 0x7F1A97F4u: goto label_7F1A97F4;
    case 0x7F1A9800u: goto label_7F1A9800;
    case 0x7F1A9814u: goto label_7F1A9814;
    case 0x7F1A9820u: goto label_7F1A9820;
    case 0x7F1A9834u: goto label_7F1A9834;
    case 0x7F1A9840u: goto label_7F1A9840;
    case 0x7F1A985Cu: goto label_7F1A985C;
    case 0x7F1A9860u: goto label_7F1A9860;
    case 0x7F1A9870u: goto label_7F1A9870;
    case 0x7F1A98B8u: goto label_7F1A98B8;
    case 0x7F1A98ECu: goto label_7F1A98EC;
    case 0x7F1A98F4u: goto label_7F1A98F4;
    case 0x7F1A9934u: goto label_7F1A9934;
    case 0x7F1A9954u: goto label_7F1A9954;
    case 0x7F1A995Cu: goto label_7F1A995C;
    case 0x7F1A9970u: goto label_7F1A9970;
    case 0x7F1A9A10u: goto label_7F1A9A10;
    case 0x7F1A9A60u: goto label_7F1A9A60;
    case 0x7F1A9A7Cu: goto label_7F1A9A7C;
    case 0x7F1A9AC0u: goto label_7F1A9AC0;
    case 0x7F1A9AD0u: goto label_7F1A9AD0;
    case 0x7F1A9AE8u: goto label_7F1A9AE8;
    case 0x7F1A9B28u: goto label_7F1A9B28;
    case 0x7F1A9B3Cu: goto label_7F1A9B3C;
    case 0x7F1A9B58u: goto label_7F1A9B58;
    case 0x7F1A9B84u: goto label_7F1A9B84;
    case 0x7F1A9B94u: goto label_7F1A9B94;
    case 0x7F1A9BF0u: goto label_7F1A9BF0;
    case 0x7F1A9BFCu: goto label_7F1A9BFC;
    case 0x7F1A9C58u: goto label_7F1A9C58;
    case 0x7F1A9C64u: goto label_7F1A9C64;
    case 0x7F1A9CC0u: goto label_7F1A9CC0;
    case 0x7F1A9CCCu: goto label_7F1A9CCC;
    case 0x7F1A9D28u: goto label_7F1A9D28;
    case 0x7F1A9D34u: goto label_7F1A9D34;
    case 0x7F1A9D38u: goto label_7F1A9D38;
    case 0x7F1A9D68u: goto label_7F1A9D68;
    case 0x7F1A9E00u: goto label_7F1A9E00;
    case 0x7F1A9E78u: goto label_7F1A9E78;
    case 0x7F1A9ED0u: goto label_7F1A9ED0;
    case 0x7F1A9F28u: goto label_7F1A9F28;
    case 0x7F1A9F7Cu: goto label_7F1A9F7C;
    case 0x7F1A9F9Cu: goto label_7F1A9F9C;
    case 0x7F1AA020u: goto label_7F1AA020;
    case 0x7F1AA04Cu: goto label_7F1AA04C;
    case 0x7F1AA0A0u: goto label_7F1AA0A0;
    case 0x7F1AA0F8u: goto label_7F1AA0F8;
    case 0x7F1AA144u: goto label_7F1AA144;
    case 0x7F1AA198u: goto label_7F1AA198;
    case 0x7F1AA1D8u: goto label_7F1AA1D8;
    case 0x7F1AA250u: goto label_7F1AA250;
    case 0x7F1AA258u: goto label_7F1AA258;
    case 0x7F1AA294u: goto label_7F1AA294;
    case 0x7F1AA2A8u: goto label_7F1AA2A8;
    case 0x7F1AA2BCu: goto label_7F1AA2BC;
    case 0x7F1AA2D8u: goto label_7F1AA2D8;
    case 0x7F1AA304u: goto label_7F1AA304;
    case 0x7F1AA30Cu: goto label_7F1AA30C;
    case 0x7F1AA318u: goto label_7F1AA318;
    case 0x7F1AA330u: goto label_7F1AA330;
    case 0x7F1AA344u: goto label_7F1AA344;
    case 0x7F1AA3F8u: goto label_7F1AA3F8;
    case 0x7F1AA458u: goto label_7F1AA458;
    case 0x7F1AA474u: goto label_7F1AA474;
    case 0x7F1AA4E0u: goto label_7F1AA4E0;
    case 0x7F1AA4F0u: goto label_7F1AA4F0;
    case 0x7F1AA508u: goto label_7F1AA508;
    case 0x7F1AA59Cu: goto label_7F1AA59C;
    case 0x7F1AA5C4u: goto label_7F1AA5C4;
    case 0x7F1AA6B0u: goto label_7F1AA6B0;
    case 0x7F1AA6D8u: goto label_7F1AA6D8;
    case 0x7F1AA704u: goto label_7F1AA704;
    case 0x7F1AA754u: goto label_7F1AA754;
    case 0x7F1AA78Cu: goto label_7F1AA78C;
    case 0x7F1AA7BCu: goto label_7F1AA7BC;
    case 0x7F1AA7E4u: goto label_7F1AA7E4;
    case 0x7F1AA800u: goto label_7F1AA800;
    case 0x7F1AA88Cu: goto label_7F1AA88C;
    case 0x7F1AA89Cu: goto label_7F1AA89C;
    case 0x7F1AA8B4u: goto label_7F1AA8B4;
    case 0x7F1AA8C0u: goto label_7F1AA8C0;
    case 0x7F1AA9B8u: goto label_7F1AA9B8;
    case 0x7F1AA9C8u: goto label_7F1AA9C8;
    case 0x7F1AAA98u: goto label_7F1AAA98;
    case 0x7F1AAAA4u: goto label_7F1AAAA4;
    case 0x7F1AAAD0u: goto label_7F1AAAD0;
    case 0x7F1AAB2Cu: goto label_7F1AAB2C;
    case 0x7F1AAB68u: goto label_7F1AAB68;
    case 0x7F1AAC30u: goto label_7F1AAC30;
    case 0x7F1AAC3Cu: goto label_7F1AAC3C;
    case 0x7F1AAC48u: goto label_7F1AAC48;
    case 0x7F1AAC70u: goto label_7F1AAC70;
    case 0x7F1AACACu: goto label_7F1AACAC;
    case 0x7F1AACC8u: goto label_7F1AACC8;
    case 0x7F1AAD1Cu: goto label_7F1AAD1C;
    case 0x7F1AAD2Cu: goto label_7F1AAD2C;
    case 0x7F1AAD44u: goto label_7F1AAD44;
    case 0x7F1AAD50u: goto label_7F1AAD50;
    case 0x7F1AAD80u: goto label_7F1AAD80;
    case 0x7F1AADACu: goto label_7F1AADAC;
    case 0x7F1AAE30u: goto label_7F1AAE30;
    case 0x7F1AAE3Cu: goto label_7F1AAE3C;
    case 0x7F1AAE5Cu: goto label_7F1AAE5C;
    case 0x7F1AAEA8u: goto label_7F1AAEA8;
    case 0x7F1AAEC4u: goto label_7F1AAEC4;
    case 0x7F1AAF00u: goto label_7F1AAF00;
    case 0x7F1AAF10u: goto label_7F1AAF10;
    case 0x7F1AAF6Cu: goto label_7F1AAF6C;
    case 0x7F1AAFB4u: goto label_7F1AAFB4;
    case 0x7F1AAFC0u: goto label_7F1AAFC0;
    case 0x7F1AB008u: goto label_7F1AB008;
    case 0x7F1AB024u: goto label_7F1AB024;
    case 0x7F1AB060u: goto label_7F1AB060;
    case 0x7F1AB070u: goto label_7F1AB070;
    case 0x7F1AB118u: goto label_7F1AB118;
    case 0x7F1AB238u: goto label_7F1AB238;
    case 0x7F1AB244u: goto label_7F1AB244;
    case 0x7F1AB260u: goto label_7F1AB260;
    case 0x7F1AB294u: goto label_7F1AB294;
    case 0x7F1AB2A4u: goto label_7F1AB2A4;
    case 0x7F1AB304u: goto label_7F1AB304;
    case 0x7F1AB4F8u: goto label_7F1AB4F8;
    case 0x7F1AB504u: goto label_7F1AB504;
    case 0x7F1AB508u: goto label_7F1AB508;
    case 0x7F1AB5A8u: goto label_7F1AB5A8;
    case 0x7F1AB5E8u: goto label_7F1AB5E8;
    case 0x7F1AB5ECu: goto label_7F1AB5EC;
    case 0x7F1AB610u: goto label_7F1AB610;
    case 0x7F1AB6A0u: goto label_7F1AB6A0;
    case 0x7F1AB6BCu: goto label_7F1AB6BC;
    case 0x7F1AB6ECu: goto label_7F1AB6EC;
    case 0x7F1AB778u: goto label_7F1AB778;
    case 0x7F1AB794u: goto label_7F1AB794;
    case 0x7F1AB7C4u: goto label_7F1AB7C4;
    case 0x7F1AB82Cu: goto label_7F1AB82C;
    case 0x7F1AB834u: goto label_7F1AB834;
    case 0x7F1AB83Cu: goto label_7F1AB83C;
    case 0x7F1AB8ECu: goto label_7F1AB8EC;
    case 0x7F1AB8FCu: goto label_7F1AB8FC;
    case 0x7F1AB900u: goto label_7F1AB900;
    case 0x7F1AB918u: goto label_7F1AB918;
    case 0x7F1AB930u: goto label_7F1AB930;
    case 0x7F1AB958u: goto label_7F1AB958;
    case 0x7F1AB99Cu: goto label_7F1AB99C;
    case 0x7F1AB9B0u: goto label_7F1AB9B0;
    case 0x7F1AB9BCu: goto label_7F1AB9BC;
    case 0x7F1AB9C8u: goto label_7F1AB9C8;
    case 0x7F1ABA08u: goto label_7F1ABA08;
    case 0x7F1ABB38u: goto label_7F1ABB38;
    case 0x7F1ABBB8u: goto label_7F1ABBB8;
    case 0x7F1ABC1Cu: goto label_7F1ABC1C;
    case 0x7F1ABCA0u: goto label_7F1ABCA0;
    case 0x7F1ABD10u: goto label_7F1ABD10;
    case 0x7F1ABD84u: goto label_7F1ABD84;
    case 0x7F1ABD94u: goto label_7F1ABD94;
    case 0x7F1ABF00u: goto label_7F1ABF00;
    case 0x7F1ABF18u: goto label_7F1ABF18;
    case 0x7F1ABF1Cu: goto label_7F1ABF1C;
    case 0x7F1ABF38u: goto label_7F1ABF38;
    case 0x7F1ABF9Cu: goto label_7F1ABF9C;
    case 0x7F1ABFB8u: goto label_7F1ABFB8;
    case 0x7F1AC038u: goto label_7F1AC038;
    case 0x7F1AC048u: goto label_7F1AC048;
    case 0x7F1AC0E8u: goto label_7F1AC0E8;
    default: return;
    }
}

