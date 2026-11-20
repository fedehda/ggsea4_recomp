// DolRecomp output
#include "../generated.h"

static void loop_7F240604(CPUState* ctx) {
label_7F240604:
    ctx->downcount -= 12;
    ctx->pc = 0x7F240604u;
    // 7F240604: sth     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F240608u;
    // 7F240608: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F24060Cu;
    // 7F24060C: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F240610u;
    // 7F240610: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F240614u;
    // 7F240614: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F240618u;
    // 7F240618: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F24061Cu;
    // 7F24061C: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F240620u;
    // 7F240620: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F240624u;
    // 7F240624: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F240628u;
    // 7F240628: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    // 7F24062C: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

    // 7F240630: bc    16, 0, 0x7F240604
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240604u;
                return;
            }
            goto label_7F240604;
        }
    }

    ctx->pc = 0x7F240634u;
}

static void loop_7F241A08(CPUState* ctx) {
label_7F241A08:
    ctx->downcount -= 26;
    ctx->pc = 0x7F241A08u;
    // 7F241A08: lwz     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F241A0C: subfic  r3, r0, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

    // 7F241A10: subfic  r4, r5, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

    // 7F241A14: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F241A18: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

    // 7F241A1C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

    // 7F241A20: srawi r0, r0, 2
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

    // 7F241A24: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F241A28: mullw   r0, r29, r4
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

    // 7F241A2C: addi    r3, r3, 300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(300);

    ctx->pc = 0x7F241A30u;
    // 7F241A30: sth     r3, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    ctx->pc = 0x7F241A34u;
    // 7F241A34: sth     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    // 7F241A38: srawi r0, r0, 5
    {
        u32 sh = 5u;
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

    // 7F241A3C: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F241A40: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F241A44u;
    // 7F241A44: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F241A48: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

    // 7F241A4C: bc    16, 0, 0x7F241A08
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241A08u;
                return;
            }
            goto label_7F241A08;
        }
    }

    ctx->pc = 0x7F241A50u;
}

static void loop_7F241AC4(CPUState* ctx) {
label_7F241AC4:
    ctx->downcount -= 17;
    // 7F241AC4: subfic  r3, r5, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

    // 7F241AC8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F241ACC: mullw   r0, r29, r3
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

    // 7F241AD0: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

    // 7F241AD4: addi    r4, r3, 300
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(300);

    ctx->pc = 0x7F241AD8u;
    // 7F241AD8: sth     r4, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    // 7F241ADC: srawi r0, r0, 5
    {
        u32 sh = 5u;
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

    // 7F241AE0: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    ctx->pc = 0x7F241AE4u;
    // 7F241AE4: sth     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    // 7F241AE8: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F241AECu;
    // 7F241AEC: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F241AF0: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

    // 7F241AF4: bc    16, 0, 0x7F241AC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241AC4u;
                return;
            }
            goto label_7F241AC4;
        }
    }

    ctx->pc = 0x7F241AF8u;
}

static void loop_7F241B1C(CPUState* ctx) {
label_7F241B1C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F241B1Cu;
    // 7F241B1C: sth     r3, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    ctx->pc = 0x7F241B20u;
    // 7F241B20: sth     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    ctx->pc = 0x7F241B24u;
    // 7F241B24: stb     r3, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F241B28: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

    // 7F241B2C: bc    16, 0, 0x7F241B1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241B1Cu;
                return;
            }
            goto label_7F241B1C;
        }
    }

    ctx->pc = 0x7F241B30u;
}

static void loop_7F241FB4(CPUState* ctx) {
label_7F241FB4:
    ctx->downcount -= 12;
    ctx->pc = 0x7F241FB4u;
    // 7F241FB4: sth     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F241FB8u;
    // 7F241FB8: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F241FBCu;
    // 7F241FBC: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F241FC0u;
    // 7F241FC0: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F241FC4u;
    // 7F241FC4: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F241FC8u;
    // 7F241FC8: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F241FCCu;
    // 7F241FCC: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F241FD0u;
    // 7F241FD0: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F241FD4u;
    // 7F241FD4: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F241FD8u;
    // 7F241FD8: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    // 7F241FDC: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

    // 7F241FE0: bc    16, 0, 0x7F241FB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241FB4u;
                return;
            }
            goto label_7F241FB4;
        }
    }

    ctx->pc = 0x7F241FE4u;
}

static void loop_7F2421B0(CPUState* ctx) {
label_7F2421B0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2421B0u;
    // 7F2421B0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2421B4u;
    // 7F2421B4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2421B8u;
    // 7F2421B8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2421BCu;
    // 7F2421BC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2421C0: bc    16, 0, 0x7F2421B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2421B0u;
                return;
            }
            goto label_7F2421B0;
        }
    }

    ctx->pc = 0x7F2421C4u;
}

void func_7F2400EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2400ECu: goto label_7F2400EC;
    case 0x7F2400F0u: goto label_7F2400F0;
    case 0x7F2400F4u: goto label_7F2400F4;
    case 0x7F2400F8u: goto label_7F2400F8;
    case 0x7F2400FCu: goto label_7F2400FC;
    case 0x7F240100u: goto label_7F240100;
    case 0x7F240104u: goto label_7F240104;
    case 0x7F240108u: goto label_7F240108;
    case 0x7F24010Cu: goto label_7F24010C;
    case 0x7F240110u: goto label_7F240110;
    case 0x7F240114u: goto label_7F240114;
    case 0x7F240118u: goto label_7F240118;
    case 0x7F24011Cu: goto label_7F24011C;
    case 0x7F240120u: goto label_7F240120;
    case 0x7F240124u: goto label_7F240124;
    case 0x7F240128u: goto label_7F240128;
    case 0x7F24012Cu: goto label_7F24012C;
    case 0x7F240130u: goto label_7F240130;
    case 0x7F240134u: goto label_7F240134;
    case 0x7F240138u: goto label_7F240138;
    case 0x7F24013Cu: goto label_7F24013C;
    case 0x7F240140u: goto label_7F240140;
    case 0x7F240144u: goto label_7F240144;
    case 0x7F240148u: goto label_7F240148;
    case 0x7F24014Cu: goto label_7F24014C;
    case 0x7F240150u: goto label_7F240150;
    case 0x7F240154u: goto label_7F240154;
    case 0x7F240158u: goto label_7F240158;
    case 0x7F24015Cu: goto label_7F24015C;
    case 0x7F240160u: goto label_7F240160;
    case 0x7F240164u: goto label_7F240164;
    case 0x7F240168u: goto label_7F240168;
    case 0x7F24016Cu: goto label_7F24016C;
    case 0x7F240170u: goto label_7F240170;
    case 0x7F240174u: goto label_7F240174;
    case 0x7F240178u: goto label_7F240178;
    case 0x7F24017Cu: goto label_7F24017C;
    case 0x7F240180u: goto label_7F240180;
    case 0x7F240184u: goto label_7F240184;
    case 0x7F240188u: goto label_7F240188;
    case 0x7F24018Cu: goto label_7F24018C;
    case 0x7F240190u: goto label_7F240190;
    case 0x7F240194u: goto label_7F240194;
    case 0x7F240198u: goto label_7F240198;
    case 0x7F24019Cu: goto label_7F24019C;
    case 0x7F2401A0u: goto label_7F2401A0;
    case 0x7F2401A4u: goto label_7F2401A4;
    case 0x7F2401A8u: goto label_7F2401A8;
    case 0x7F2401ACu: goto label_7F2401AC;
    case 0x7F2401B0u: goto label_7F2401B0;
    case 0x7F2401B4u: goto label_7F2401B4;
    case 0x7F2401B8u: goto label_7F2401B8;
    case 0x7F2401BCu: goto label_7F2401BC;
    case 0x7F2401C0u: goto label_7F2401C0;
    case 0x7F2401C4u: goto label_7F2401C4;
    case 0x7F2401C8u: goto label_7F2401C8;
    case 0x7F2401CCu: goto label_7F2401CC;
    case 0x7F2401D0u: goto label_7F2401D0;
    case 0x7F2401D4u: goto label_7F2401D4;
    case 0x7F2401D8u: goto label_7F2401D8;
    case 0x7F2401DCu: goto label_7F2401DC;
    case 0x7F2401E0u: goto label_7F2401E0;
    case 0x7F2401E4u: goto label_7F2401E4;
    case 0x7F2401E8u: goto label_7F2401E8;
    case 0x7F2401ECu: goto label_7F2401EC;
    case 0x7F2401F0u: goto label_7F2401F0;
    case 0x7F2401F4u: goto label_7F2401F4;
    case 0x7F2401F8u: goto label_7F2401F8;
    case 0x7F2401FCu: goto label_7F2401FC;
    case 0x7F240200u: goto label_7F240200;
    case 0x7F240204u: goto label_7F240204;
    case 0x7F240208u: goto label_7F240208;
    case 0x7F24020Cu: goto label_7F24020C;
    case 0x7F240210u: goto label_7F240210;
    case 0x7F240214u: goto label_7F240214;
    case 0x7F240218u: goto label_7F240218;
    case 0x7F24021Cu: goto label_7F24021C;
    case 0x7F240220u: goto label_7F240220;
    case 0x7F240224u: goto label_7F240224;
    case 0x7F240228u: goto label_7F240228;
    case 0x7F24022Cu: goto label_7F24022C;
    case 0x7F240230u: goto label_7F240230;
    case 0x7F240234u: goto label_7F240234;
    case 0x7F240238u: goto label_7F240238;
    case 0x7F24023Cu: goto label_7F24023C;
    case 0x7F240240u: goto label_7F240240;
    case 0x7F240244u: goto label_7F240244;
    case 0x7F240248u: goto label_7F240248;
    case 0x7F24024Cu: goto label_7F24024C;
    case 0x7F240250u: goto label_7F240250;
    case 0x7F240254u: goto label_7F240254;
    case 0x7F240258u: goto label_7F240258;
    case 0x7F24025Cu: goto label_7F24025C;
    case 0x7F240260u: goto label_7F240260;
    case 0x7F240264u: goto label_7F240264;
    case 0x7F240268u: goto label_7F240268;
    case 0x7F24026Cu: goto label_7F24026C;
    case 0x7F240270u: goto label_7F240270;
    case 0x7F240274u: goto label_7F240274;
    case 0x7F240278u: goto label_7F240278;
    case 0x7F24027Cu: goto label_7F24027C;
    case 0x7F240280u: goto label_7F240280;
    case 0x7F240284u: goto label_7F240284;
    case 0x7F240288u: goto label_7F240288;
    case 0x7F24028Cu: goto label_7F24028C;
    case 0x7F240290u: goto label_7F240290;
    case 0x7F240294u: goto label_7F240294;
    case 0x7F240298u: goto label_7F240298;
    case 0x7F24029Cu: goto label_7F24029C;
    case 0x7F2402A0u: goto label_7F2402A0;
    case 0x7F2402A4u: goto label_7F2402A4;
    case 0x7F2402A8u: goto label_7F2402A8;
    case 0x7F2402ACu: goto label_7F2402AC;
    case 0x7F2402B0u: goto label_7F2402B0;
    case 0x7F2402B4u: goto label_7F2402B4;
    case 0x7F2402B8u: goto label_7F2402B8;
    case 0x7F2402BCu: goto label_7F2402BC;
    case 0x7F2402C0u: goto label_7F2402C0;
    case 0x7F2402C4u: goto label_7F2402C4;
    case 0x7F2402C8u: goto label_7F2402C8;
    case 0x7F2402CCu: goto label_7F2402CC;
    case 0x7F2402D0u: goto label_7F2402D0;
    case 0x7F2402D4u: goto label_7F2402D4;
    case 0x7F2402D8u: goto label_7F2402D8;
    case 0x7F2402DCu: goto label_7F2402DC;
    case 0x7F2402E0u: goto label_7F2402E0;
    case 0x7F2402E4u: goto label_7F2402E4;
    case 0x7F2402E8u: goto label_7F2402E8;
    case 0x7F2402ECu: goto label_7F2402EC;
    case 0x7F2402F0u: goto label_7F2402F0;
    case 0x7F2402F4u: goto label_7F2402F4;
    case 0x7F2402F8u: goto label_7F2402F8;
    case 0x7F2402FCu: goto label_7F2402FC;
    case 0x7F240300u: goto label_7F240300;
    case 0x7F240304u: goto label_7F240304;
    case 0x7F240308u: goto label_7F240308;
    case 0x7F24030Cu: goto label_7F24030C;
    case 0x7F240310u: goto label_7F240310;
    case 0x7F240314u: goto label_7F240314;
    case 0x7F240318u: goto label_7F240318;
    case 0x7F24031Cu: goto label_7F24031C;
    case 0x7F240320u: goto label_7F240320;
    case 0x7F240324u: goto label_7F240324;
    case 0x7F240328u: goto label_7F240328;
    case 0x7F24032Cu: goto label_7F24032C;
    case 0x7F240330u: goto label_7F240330;
    case 0x7F240334u: goto label_7F240334;
    case 0x7F240338u: goto label_7F240338;
    case 0x7F24033Cu: goto label_7F24033C;
    case 0x7F240340u: goto label_7F240340;
    case 0x7F240344u: goto label_7F240344;
    case 0x7F240348u: goto label_7F240348;
    case 0x7F24034Cu: goto label_7F24034C;
    case 0x7F240350u: goto label_7F240350;
    case 0x7F240354u: goto label_7F240354;
    case 0x7F240358u: goto label_7F240358;
    case 0x7F24035Cu: goto label_7F24035C;
    case 0x7F240360u: goto label_7F240360;
    case 0x7F240364u: goto label_7F240364;
    case 0x7F240368u: goto label_7F240368;
    case 0x7F24036Cu: goto label_7F24036C;
    case 0x7F240370u: goto label_7F240370;
    case 0x7F240374u: goto label_7F240374;
    case 0x7F240378u: goto label_7F240378;
    case 0x7F24037Cu: goto label_7F24037C;
    case 0x7F240380u: goto label_7F240380;
    case 0x7F240384u: goto label_7F240384;
    case 0x7F240388u: goto label_7F240388;
    case 0x7F24038Cu: goto label_7F24038C;
    case 0x7F240390u: goto label_7F240390;
    case 0x7F240394u: goto label_7F240394;
    case 0x7F240398u: goto label_7F240398;
    case 0x7F24039Cu: goto label_7F24039C;
    case 0x7F2403A0u: goto label_7F2403A0;
    case 0x7F2403A4u: goto label_7F2403A4;
    case 0x7F2403A8u: goto label_7F2403A8;
    case 0x7F2403ACu: goto label_7F2403AC;
    case 0x7F2403B0u: goto label_7F2403B0;
    case 0x7F2403B4u: goto label_7F2403B4;
    case 0x7F2403B8u: goto label_7F2403B8;
    case 0x7F2403BCu: goto label_7F2403BC;
    case 0x7F2403C0u: goto label_7F2403C0;
    case 0x7F2403C4u: goto label_7F2403C4;
    case 0x7F2403C8u: goto label_7F2403C8;
    case 0x7F2403CCu: goto label_7F2403CC;
    case 0x7F2403D0u: goto label_7F2403D0;
    case 0x7F2403D4u: goto label_7F2403D4;
    case 0x7F2403D8u: goto label_7F2403D8;
    case 0x7F2403DCu: goto label_7F2403DC;
    case 0x7F2403E0u: goto label_7F2403E0;
    case 0x7F2403E4u: goto label_7F2403E4;
    case 0x7F2403E8u: goto label_7F2403E8;
    case 0x7F2403ECu: goto label_7F2403EC;
    case 0x7F2403F0u: goto label_7F2403F0;
    case 0x7F2403F4u: goto label_7F2403F4;
    case 0x7F2403F8u: goto label_7F2403F8;
    case 0x7F2403FCu: goto label_7F2403FC;
    case 0x7F240400u: goto label_7F240400;
    case 0x7F240404u: goto label_7F240404;
    case 0x7F240408u: goto label_7F240408;
    case 0x7F24040Cu: goto label_7F24040C;
    case 0x7F240410u: goto label_7F240410;
    case 0x7F240414u: goto label_7F240414;
    case 0x7F240418u: goto label_7F240418;
    case 0x7F24041Cu: goto label_7F24041C;
    case 0x7F240420u: goto label_7F240420;
    case 0x7F240424u: goto label_7F240424;
    case 0x7F240428u: goto label_7F240428;
    case 0x7F24042Cu: goto label_7F24042C;
    case 0x7F240430u: goto label_7F240430;
    case 0x7F240434u: goto label_7F240434;
    case 0x7F240438u: goto label_7F240438;
    case 0x7F24043Cu: goto label_7F24043C;
    case 0x7F240440u: goto label_7F240440;
    case 0x7F240444u: goto label_7F240444;
    case 0x7F240448u: goto label_7F240448;
    case 0x7F24044Cu: goto label_7F24044C;
    case 0x7F240450u: goto label_7F240450;
    case 0x7F240454u: goto label_7F240454;
    case 0x7F240458u: goto label_7F240458;
    case 0x7F24045Cu: goto label_7F24045C;
    case 0x7F240460u: goto label_7F240460;
    case 0x7F240464u: goto label_7F240464;
    case 0x7F240468u: goto label_7F240468;
    case 0x7F24046Cu: goto label_7F24046C;
    case 0x7F240470u: goto label_7F240470;
    case 0x7F240474u: goto label_7F240474;
    case 0x7F240478u: goto label_7F240478;
    case 0x7F24047Cu: goto label_7F24047C;
    case 0x7F240480u: goto label_7F240480;
    case 0x7F240484u: goto label_7F240484;
    case 0x7F240488u: goto label_7F240488;
    case 0x7F24048Cu: goto label_7F24048C;
    case 0x7F240490u: goto label_7F240490;
    case 0x7F240494u: goto label_7F240494;
    case 0x7F240498u: goto label_7F240498;
    case 0x7F24049Cu: goto label_7F24049C;
    case 0x7F2404A0u: goto label_7F2404A0;
    case 0x7F2404A4u: goto label_7F2404A4;
    case 0x7F2404A8u: goto label_7F2404A8;
    case 0x7F2404ACu: goto label_7F2404AC;
    case 0x7F2404B0u: goto label_7F2404B0;
    case 0x7F2404B4u: goto label_7F2404B4;
    case 0x7F2404B8u: goto label_7F2404B8;
    case 0x7F2404BCu: goto label_7F2404BC;
    case 0x7F2404C0u: goto label_7F2404C0;
    case 0x7F2404C4u: goto label_7F2404C4;
    case 0x7F2404C8u: goto label_7F2404C8;
    case 0x7F2404CCu: goto label_7F2404CC;
    case 0x7F2404D0u: goto label_7F2404D0;
    case 0x7F2404D4u: goto label_7F2404D4;
    case 0x7F2404D8u: goto label_7F2404D8;
    case 0x7F2404DCu: goto label_7F2404DC;
    case 0x7F2404E0u: goto label_7F2404E0;
    case 0x7F2404E4u: goto label_7F2404E4;
    case 0x7F2404E8u: goto label_7F2404E8;
    case 0x7F2404ECu: goto label_7F2404EC;
    case 0x7F2404F0u: goto label_7F2404F0;
    case 0x7F2404F4u: goto label_7F2404F4;
    case 0x7F2404F8u: goto label_7F2404F8;
    case 0x7F2404FCu: goto label_7F2404FC;
    case 0x7F240500u: goto label_7F240500;
    case 0x7F240504u: goto label_7F240504;
    case 0x7F240508u: goto label_7F240508;
    case 0x7F24050Cu: goto label_7F24050C;
    case 0x7F240510u: goto label_7F240510;
    case 0x7F240514u: goto label_7F240514;
    case 0x7F240518u: goto label_7F240518;
    case 0x7F24051Cu: goto label_7F24051C;
    case 0x7F240520u: goto label_7F240520;
    case 0x7F240524u: goto label_7F240524;
    case 0x7F240528u: goto label_7F240528;
    case 0x7F24052Cu: goto label_7F24052C;
    case 0x7F240530u: goto label_7F240530;
    case 0x7F240534u: goto label_7F240534;
    case 0x7F240538u: goto label_7F240538;
    case 0x7F24053Cu: goto label_7F24053C;
    case 0x7F240540u: goto label_7F240540;
    case 0x7F240544u: goto label_7F240544;
    case 0x7F240548u: goto label_7F240548;
    case 0x7F24054Cu: goto label_7F24054C;
    case 0x7F240550u: goto label_7F240550;
    case 0x7F240554u: goto label_7F240554;
    case 0x7F240558u: goto label_7F240558;
    case 0x7F24055Cu: goto label_7F24055C;
    case 0x7F240560u: goto label_7F240560;
    case 0x7F240564u: goto label_7F240564;
    case 0x7F240568u: goto label_7F240568;
    case 0x7F24056Cu: goto label_7F24056C;
    case 0x7F240570u: goto label_7F240570;
    case 0x7F240574u: goto label_7F240574;
    case 0x7F240578u: goto label_7F240578;
    case 0x7F24057Cu: goto label_7F24057C;
    case 0x7F240580u: goto label_7F240580;
    case 0x7F240584u: goto label_7F240584;
    case 0x7F240588u: goto label_7F240588;
    case 0x7F24058Cu: goto label_7F24058C;
    case 0x7F240590u: goto label_7F240590;
    case 0x7F240594u: goto label_7F240594;
    case 0x7F240598u: goto label_7F240598;
    case 0x7F24059Cu: goto label_7F24059C;
    case 0x7F2405A0u: goto label_7F2405A0;
    case 0x7F2405A4u: goto label_7F2405A4;
    case 0x7F2405A8u: goto label_7F2405A8;
    case 0x7F2405ACu: goto label_7F2405AC;
    case 0x7F2405B0u: goto label_7F2405B0;
    case 0x7F2405B4u: goto label_7F2405B4;
    case 0x7F2405B8u: goto label_7F2405B8;
    case 0x7F2405BCu: goto label_7F2405BC;
    case 0x7F2405C0u: goto label_7F2405C0;
    case 0x7F2405C4u: goto label_7F2405C4;
    case 0x7F2405C8u: goto label_7F2405C8;
    case 0x7F2405CCu: goto label_7F2405CC;
    case 0x7F2405D0u: goto label_7F2405D0;
    case 0x7F2405D4u: goto label_7F2405D4;
    case 0x7F2405D8u: goto label_7F2405D8;
    case 0x7F2405DCu: goto label_7F2405DC;
    case 0x7F2405E0u: goto label_7F2405E0;
    case 0x7F2405E4u: goto label_7F2405E4;
    case 0x7F2405E8u: goto label_7F2405E8;
    case 0x7F2405ECu: goto label_7F2405EC;
    case 0x7F2405F0u: goto label_7F2405F0;
    case 0x7F2405F4u: goto label_7F2405F4;
    case 0x7F2405F8u: goto label_7F2405F8;
    case 0x7F2405FCu: goto label_7F2405FC;
    case 0x7F240600u: goto label_7F240600;
    case 0x7F240604u: goto label_7F240604;
    case 0x7F240608u: goto label_7F240608;
    case 0x7F24060Cu: goto label_7F24060C;
    case 0x7F240610u: goto label_7F240610;
    case 0x7F240614u: goto label_7F240614;
    case 0x7F240618u: goto label_7F240618;
    case 0x7F24061Cu: goto label_7F24061C;
    case 0x7F240620u: goto label_7F240620;
    case 0x7F240624u: goto label_7F240624;
    case 0x7F240628u: goto label_7F240628;
    case 0x7F24062Cu: goto label_7F24062C;
    case 0x7F240630u: goto label_7F240630;
    case 0x7F240634u: goto label_7F240634;
    case 0x7F240638u: goto label_7F240638;
    case 0x7F24063Cu: goto label_7F24063C;
    case 0x7F240640u: goto label_7F240640;
    case 0x7F240644u: goto label_7F240644;
    case 0x7F240648u: goto label_7F240648;
    case 0x7F24064Cu: goto label_7F24064C;
    case 0x7F240650u: goto label_7F240650;
    case 0x7F240654u: goto label_7F240654;
    case 0x7F240658u: goto label_7F240658;
    case 0x7F24065Cu: goto label_7F24065C;
    case 0x7F240660u: goto label_7F240660;
    case 0x7F240664u: goto label_7F240664;
    case 0x7F240668u: goto label_7F240668;
    case 0x7F24066Cu: goto label_7F24066C;
    case 0x7F240670u: goto label_7F240670;
    case 0x7F240674u: goto label_7F240674;
    case 0x7F240678u: goto label_7F240678;
    case 0x7F24067Cu: goto label_7F24067C;
    case 0x7F240680u: goto label_7F240680;
    case 0x7F240684u: goto label_7F240684;
    case 0x7F240688u: goto label_7F240688;
    case 0x7F24068Cu: goto label_7F24068C;
    case 0x7F240690u: goto label_7F240690;
    case 0x7F240694u: goto label_7F240694;
    case 0x7F240698u: goto label_7F240698;
    case 0x7F24069Cu: goto label_7F24069C;
    case 0x7F2406A0u: goto label_7F2406A0;
    case 0x7F2406A4u: goto label_7F2406A4;
    case 0x7F2406A8u: goto label_7F2406A8;
    case 0x7F2406ACu: goto label_7F2406AC;
    case 0x7F2406B0u: goto label_7F2406B0;
    case 0x7F2406B4u: goto label_7F2406B4;
    case 0x7F2406B8u: goto label_7F2406B8;
    case 0x7F2406BCu: goto label_7F2406BC;
    case 0x7F2406C0u: goto label_7F2406C0;
    case 0x7F2406C4u: goto label_7F2406C4;
    case 0x7F2406C8u: goto label_7F2406C8;
    case 0x7F2406CCu: goto label_7F2406CC;
    case 0x7F2406D0u: goto label_7F2406D0;
    case 0x7F2406D4u: goto label_7F2406D4;
    case 0x7F2406D8u: goto label_7F2406D8;
    case 0x7F2406DCu: goto label_7F2406DC;
    case 0x7F2406E0u: goto label_7F2406E0;
    case 0x7F2406E4u: goto label_7F2406E4;
    case 0x7F2406E8u: goto label_7F2406E8;
    case 0x7F2406ECu: goto label_7F2406EC;
    case 0x7F2406F0u: goto label_7F2406F0;
    case 0x7F2406F4u: goto label_7F2406F4;
    case 0x7F2406F8u: goto label_7F2406F8;
    case 0x7F2406FCu: goto label_7F2406FC;
    case 0x7F240700u: goto label_7F240700;
    case 0x7F240704u: goto label_7F240704;
    case 0x7F240708u: goto label_7F240708;
    case 0x7F24070Cu: goto label_7F24070C;
    case 0x7F240710u: goto label_7F240710;
    case 0x7F240714u: goto label_7F240714;
    case 0x7F240718u: goto label_7F240718;
    case 0x7F24071Cu: goto label_7F24071C;
    case 0x7F240720u: goto label_7F240720;
    case 0x7F240724u: goto label_7F240724;
    case 0x7F240728u: goto label_7F240728;
    case 0x7F24072Cu: goto label_7F24072C;
    case 0x7F240730u: goto label_7F240730;
    case 0x7F240734u: goto label_7F240734;
    case 0x7F240738u: goto label_7F240738;
    case 0x7F24073Cu: goto label_7F24073C;
    case 0x7F240740u: goto label_7F240740;
    case 0x7F240744u: goto label_7F240744;
    case 0x7F240748u: goto label_7F240748;
    case 0x7F24074Cu: goto label_7F24074C;
    case 0x7F240750u: goto label_7F240750;
    case 0x7F240754u: goto label_7F240754;
    case 0x7F240758u: goto label_7F240758;
    case 0x7F24075Cu: goto label_7F24075C;
    case 0x7F240760u: goto label_7F240760;
    case 0x7F240764u: goto label_7F240764;
    case 0x7F240768u: goto label_7F240768;
    case 0x7F24076Cu: goto label_7F24076C;
    case 0x7F240770u: goto label_7F240770;
    case 0x7F240774u: goto label_7F240774;
    case 0x7F240778u: goto label_7F240778;
    case 0x7F24077Cu: goto label_7F24077C;
    case 0x7F240780u: goto label_7F240780;
    case 0x7F240784u: goto label_7F240784;
    case 0x7F240788u: goto label_7F240788;
    case 0x7F24078Cu: goto label_7F24078C;
    case 0x7F240790u: goto label_7F240790;
    case 0x7F240794u: goto label_7F240794;
    case 0x7F240798u: goto label_7F240798;
    case 0x7F24079Cu: goto label_7F24079C;
    case 0x7F2407A0u: goto label_7F2407A0;
    case 0x7F2407A4u: goto label_7F2407A4;
    case 0x7F2407A8u: goto label_7F2407A8;
    case 0x7F2407ACu: goto label_7F2407AC;
    case 0x7F2407B0u: goto label_7F2407B0;
    case 0x7F2407B4u: goto label_7F2407B4;
    case 0x7F2407B8u: goto label_7F2407B8;
    case 0x7F2407BCu: goto label_7F2407BC;
    case 0x7F2407C0u: goto label_7F2407C0;
    case 0x7F2407C4u: goto label_7F2407C4;
    case 0x7F2407C8u: goto label_7F2407C8;
    case 0x7F2407CCu: goto label_7F2407CC;
    case 0x7F2407D0u: goto label_7F2407D0;
    case 0x7F2407D4u: goto label_7F2407D4;
    case 0x7F2407D8u: goto label_7F2407D8;
    case 0x7F2407DCu: goto label_7F2407DC;
    case 0x7F2407E0u: goto label_7F2407E0;
    case 0x7F2407E4u: goto label_7F2407E4;
    case 0x7F2407E8u: goto label_7F2407E8;
    case 0x7F2407ECu: goto label_7F2407EC;
    case 0x7F2407F0u: goto label_7F2407F0;
    case 0x7F2407F4u: goto label_7F2407F4;
    case 0x7F2407F8u: goto label_7F2407F8;
    case 0x7F2407FCu: goto label_7F2407FC;
    case 0x7F240800u: goto label_7F240800;
    case 0x7F240804u: goto label_7F240804;
    case 0x7F240808u: goto label_7F240808;
    case 0x7F24080Cu: goto label_7F24080C;
    case 0x7F240810u: goto label_7F240810;
    case 0x7F240814u: goto label_7F240814;
    case 0x7F240818u: goto label_7F240818;
    case 0x7F24081Cu: goto label_7F24081C;
    case 0x7F240820u: goto label_7F240820;
    case 0x7F240824u: goto label_7F240824;
    case 0x7F240828u: goto label_7F240828;
    case 0x7F24082Cu: goto label_7F24082C;
    case 0x7F240830u: goto label_7F240830;
    case 0x7F240834u: goto label_7F240834;
    case 0x7F240838u: goto label_7F240838;
    case 0x7F24083Cu: goto label_7F24083C;
    case 0x7F240840u: goto label_7F240840;
    case 0x7F240844u: goto label_7F240844;
    case 0x7F240848u: goto label_7F240848;
    case 0x7F24084Cu: goto label_7F24084C;
    case 0x7F240850u: goto label_7F240850;
    case 0x7F240854u: goto label_7F240854;
    case 0x7F240858u: goto label_7F240858;
    case 0x7F24085Cu: goto label_7F24085C;
    case 0x7F240860u: goto label_7F240860;
    case 0x7F240864u: goto label_7F240864;
    case 0x7F240868u: goto label_7F240868;
    case 0x7F24086Cu: goto label_7F24086C;
    case 0x7F240870u: goto label_7F240870;
    case 0x7F240874u: goto label_7F240874;
    case 0x7F240878u: goto label_7F240878;
    case 0x7F24087Cu: goto label_7F24087C;
    case 0x7F240880u: goto label_7F240880;
    case 0x7F240884u: goto label_7F240884;
    case 0x7F240888u: goto label_7F240888;
    case 0x7F24088Cu: goto label_7F24088C;
    case 0x7F240890u: goto label_7F240890;
    case 0x7F240894u: goto label_7F240894;
    case 0x7F240898u: goto label_7F240898;
    case 0x7F24089Cu: goto label_7F24089C;
    case 0x7F2408A0u: goto label_7F2408A0;
    case 0x7F2408A4u: goto label_7F2408A4;
    case 0x7F2408A8u: goto label_7F2408A8;
    case 0x7F2408ACu: goto label_7F2408AC;
    case 0x7F2408B0u: goto label_7F2408B0;
    case 0x7F2408B4u: goto label_7F2408B4;
    case 0x7F2408B8u: goto label_7F2408B8;
    case 0x7F2408BCu: goto label_7F2408BC;
    case 0x7F2408C0u: goto label_7F2408C0;
    case 0x7F2408C4u: goto label_7F2408C4;
    case 0x7F2408C8u: goto label_7F2408C8;
    case 0x7F2408CCu: goto label_7F2408CC;
    case 0x7F2408D0u: goto label_7F2408D0;
    case 0x7F2408D4u: goto label_7F2408D4;
    case 0x7F2408D8u: goto label_7F2408D8;
    case 0x7F2408DCu: goto label_7F2408DC;
    case 0x7F2408E0u: goto label_7F2408E0;
    case 0x7F2408E4u: goto label_7F2408E4;
    case 0x7F2408E8u: goto label_7F2408E8;
    case 0x7F2408ECu: goto label_7F2408EC;
    case 0x7F2408F0u: goto label_7F2408F0;
    case 0x7F2408F4u: goto label_7F2408F4;
    case 0x7F2408F8u: goto label_7F2408F8;
    case 0x7F2408FCu: goto label_7F2408FC;
    case 0x7F240900u: goto label_7F240900;
    case 0x7F240904u: goto label_7F240904;
    case 0x7F240908u: goto label_7F240908;
    case 0x7F24090Cu: goto label_7F24090C;
    case 0x7F240910u: goto label_7F240910;
    case 0x7F240914u: goto label_7F240914;
    case 0x7F240918u: goto label_7F240918;
    case 0x7F24091Cu: goto label_7F24091C;
    case 0x7F240920u: goto label_7F240920;
    case 0x7F240924u: goto label_7F240924;
    case 0x7F240928u: goto label_7F240928;
    case 0x7F24092Cu: goto label_7F24092C;
    case 0x7F240930u: goto label_7F240930;
    case 0x7F240934u: goto label_7F240934;
    case 0x7F240938u: goto label_7F240938;
    case 0x7F24093Cu: goto label_7F24093C;
    case 0x7F240940u: goto label_7F240940;
    case 0x7F240944u: goto label_7F240944;
    case 0x7F240948u: goto label_7F240948;
    case 0x7F24094Cu: goto label_7F24094C;
    case 0x7F240950u: goto label_7F240950;
    case 0x7F240954u: goto label_7F240954;
    case 0x7F240958u: goto label_7F240958;
    case 0x7F24095Cu: goto label_7F24095C;
    case 0x7F240960u: goto label_7F240960;
    case 0x7F240964u: goto label_7F240964;
    case 0x7F240968u: goto label_7F240968;
    case 0x7F24096Cu: goto label_7F24096C;
    case 0x7F240970u: goto label_7F240970;
    case 0x7F240974u: goto label_7F240974;
    case 0x7F240978u: goto label_7F240978;
    case 0x7F24097Cu: goto label_7F24097C;
    case 0x7F240980u: goto label_7F240980;
    case 0x7F240984u: goto label_7F240984;
    case 0x7F240988u: goto label_7F240988;
    case 0x7F24098Cu: goto label_7F24098C;
    case 0x7F240990u: goto label_7F240990;
    case 0x7F240994u: goto label_7F240994;
    case 0x7F240998u: goto label_7F240998;
    case 0x7F24099Cu: goto label_7F24099C;
    case 0x7F2409A0u: goto label_7F2409A0;
    case 0x7F2409A4u: goto label_7F2409A4;
    case 0x7F2409A8u: goto label_7F2409A8;
    case 0x7F2409ACu: goto label_7F2409AC;
    case 0x7F2409B0u: goto label_7F2409B0;
    case 0x7F2409B4u: goto label_7F2409B4;
    case 0x7F2409B8u: goto label_7F2409B8;
    case 0x7F2409BCu: goto label_7F2409BC;
    case 0x7F2409C0u: goto label_7F2409C0;
    case 0x7F2409C4u: goto label_7F2409C4;
    case 0x7F2409C8u: goto label_7F2409C8;
    case 0x7F2409CCu: goto label_7F2409CC;
    case 0x7F2409D0u: goto label_7F2409D0;
    case 0x7F2409D4u: goto label_7F2409D4;
    case 0x7F2409D8u: goto label_7F2409D8;
    case 0x7F2409DCu: goto label_7F2409DC;
    case 0x7F2409E0u: goto label_7F2409E0;
    case 0x7F2409E4u: goto label_7F2409E4;
    case 0x7F2409E8u: goto label_7F2409E8;
    case 0x7F2409ECu: goto label_7F2409EC;
    case 0x7F2409F0u: goto label_7F2409F0;
    case 0x7F2409F4u: goto label_7F2409F4;
    case 0x7F2409F8u: goto label_7F2409F8;
    case 0x7F2409FCu: goto label_7F2409FC;
    case 0x7F240A00u: goto label_7F240A00;
    case 0x7F240A04u: goto label_7F240A04;
    case 0x7F240A08u: goto label_7F240A08;
    case 0x7F240A0Cu: goto label_7F240A0C;
    case 0x7F240A10u: goto label_7F240A10;
    case 0x7F240A14u: goto label_7F240A14;
    case 0x7F240A18u: goto label_7F240A18;
    case 0x7F240A1Cu: goto label_7F240A1C;
    case 0x7F240A20u: goto label_7F240A20;
    case 0x7F240A24u: goto label_7F240A24;
    case 0x7F240A28u: goto label_7F240A28;
    case 0x7F240A2Cu: goto label_7F240A2C;
    case 0x7F240A30u: goto label_7F240A30;
    case 0x7F240A34u: goto label_7F240A34;
    case 0x7F240A38u: goto label_7F240A38;
    case 0x7F240A3Cu: goto label_7F240A3C;
    case 0x7F240A40u: goto label_7F240A40;
    case 0x7F240A44u: goto label_7F240A44;
    case 0x7F240A48u: goto label_7F240A48;
    case 0x7F240A4Cu: goto label_7F240A4C;
    case 0x7F240A50u: goto label_7F240A50;
    case 0x7F240A54u: goto label_7F240A54;
    case 0x7F240A58u: goto label_7F240A58;
    case 0x7F240A5Cu: goto label_7F240A5C;
    case 0x7F240A60u: goto label_7F240A60;
    case 0x7F240A64u: goto label_7F240A64;
    case 0x7F240A68u: goto label_7F240A68;
    case 0x7F240A6Cu: goto label_7F240A6C;
    case 0x7F240A70u: goto label_7F240A70;
    case 0x7F240A74u: goto label_7F240A74;
    case 0x7F240A78u: goto label_7F240A78;
    case 0x7F240A7Cu: goto label_7F240A7C;
    case 0x7F240A80u: goto label_7F240A80;
    case 0x7F240A84u: goto label_7F240A84;
    case 0x7F240A88u: goto label_7F240A88;
    case 0x7F240A8Cu: goto label_7F240A8C;
    case 0x7F240A90u: goto label_7F240A90;
    case 0x7F240A94u: goto label_7F240A94;
    case 0x7F240A98u: goto label_7F240A98;
    case 0x7F240A9Cu: goto label_7F240A9C;
    case 0x7F240AA0u: goto label_7F240AA0;
    case 0x7F240AA4u: goto label_7F240AA4;
    case 0x7F240AA8u: goto label_7F240AA8;
    case 0x7F240AACu: goto label_7F240AAC;
    case 0x7F240AB0u: goto label_7F240AB0;
    case 0x7F240AB4u: goto label_7F240AB4;
    case 0x7F240AB8u: goto label_7F240AB8;
    case 0x7F240ABCu: goto label_7F240ABC;
    case 0x7F240AC0u: goto label_7F240AC0;
    case 0x7F240AC4u: goto label_7F240AC4;
    case 0x7F240AC8u: goto label_7F240AC8;
    case 0x7F240ACCu: goto label_7F240ACC;
    case 0x7F240AD0u: goto label_7F240AD0;
    case 0x7F240AD4u: goto label_7F240AD4;
    case 0x7F240AD8u: goto label_7F240AD8;
    case 0x7F240ADCu: goto label_7F240ADC;
    case 0x7F240AE0u: goto label_7F240AE0;
    case 0x7F240AE4u: goto label_7F240AE4;
    case 0x7F240AE8u: goto label_7F240AE8;
    case 0x7F240AECu: goto label_7F240AEC;
    case 0x7F240AF0u: goto label_7F240AF0;
    case 0x7F240AF4u: goto label_7F240AF4;
    case 0x7F240AF8u: goto label_7F240AF8;
    case 0x7F240AFCu: goto label_7F240AFC;
    case 0x7F240B00u: goto label_7F240B00;
    case 0x7F240B04u: goto label_7F240B04;
    case 0x7F240B08u: goto label_7F240B08;
    case 0x7F240B0Cu: goto label_7F240B0C;
    case 0x7F240B10u: goto label_7F240B10;
    case 0x7F240B14u: goto label_7F240B14;
    case 0x7F240B18u: goto label_7F240B18;
    case 0x7F240B1Cu: goto label_7F240B1C;
    case 0x7F240B20u: goto label_7F240B20;
    case 0x7F240B24u: goto label_7F240B24;
    case 0x7F240B28u: goto label_7F240B28;
    case 0x7F240B2Cu: goto label_7F240B2C;
    case 0x7F240B30u: goto label_7F240B30;
    case 0x7F240B34u: goto label_7F240B34;
    case 0x7F240B38u: goto label_7F240B38;
    case 0x7F240B3Cu: goto label_7F240B3C;
    case 0x7F240B40u: goto label_7F240B40;
    case 0x7F240B44u: goto label_7F240B44;
    case 0x7F240B48u: goto label_7F240B48;
    case 0x7F240B4Cu: goto label_7F240B4C;
    case 0x7F240B50u: goto label_7F240B50;
    case 0x7F240B54u: goto label_7F240B54;
    case 0x7F240B58u: goto label_7F240B58;
    case 0x7F240B5Cu: goto label_7F240B5C;
    case 0x7F240B60u: goto label_7F240B60;
    case 0x7F240B64u: goto label_7F240B64;
    case 0x7F240B68u: goto label_7F240B68;
    case 0x7F240B6Cu: goto label_7F240B6C;
    case 0x7F240B70u: goto label_7F240B70;
    case 0x7F240B74u: goto label_7F240B74;
    case 0x7F240B78u: goto label_7F240B78;
    case 0x7F240B7Cu: goto label_7F240B7C;
    case 0x7F240B80u: goto label_7F240B80;
    case 0x7F240B84u: goto label_7F240B84;
    case 0x7F240B88u: goto label_7F240B88;
    case 0x7F240B8Cu: goto label_7F240B8C;
    case 0x7F240B90u: goto label_7F240B90;
    case 0x7F240B94u: goto label_7F240B94;
    case 0x7F240B98u: goto label_7F240B98;
    case 0x7F240B9Cu: goto label_7F240B9C;
    case 0x7F240BA0u: goto label_7F240BA0;
    case 0x7F240BA4u: goto label_7F240BA4;
    case 0x7F240BA8u: goto label_7F240BA8;
    case 0x7F240BACu: goto label_7F240BAC;
    case 0x7F240BB0u: goto label_7F240BB0;
    case 0x7F240BB4u: goto label_7F240BB4;
    case 0x7F240BB8u: goto label_7F240BB8;
    case 0x7F240BBCu: goto label_7F240BBC;
    case 0x7F240BC0u: goto label_7F240BC0;
    case 0x7F240BC4u: goto label_7F240BC4;
    case 0x7F240BC8u: goto label_7F240BC8;
    case 0x7F240BCCu: goto label_7F240BCC;
    case 0x7F240BD0u: goto label_7F240BD0;
    case 0x7F240BD4u: goto label_7F240BD4;
    case 0x7F240BD8u: goto label_7F240BD8;
    case 0x7F240BDCu: goto label_7F240BDC;
    case 0x7F240BE0u: goto label_7F240BE0;
    case 0x7F240BE4u: goto label_7F240BE4;
    case 0x7F240BE8u: goto label_7F240BE8;
    case 0x7F240BECu: goto label_7F240BEC;
    case 0x7F240BF0u: goto label_7F240BF0;
    case 0x7F240BF4u: goto label_7F240BF4;
    case 0x7F240BF8u: goto label_7F240BF8;
    case 0x7F240BFCu: goto label_7F240BFC;
    case 0x7F240C00u: goto label_7F240C00;
    case 0x7F240C04u: goto label_7F240C04;
    case 0x7F240C08u: goto label_7F240C08;
    case 0x7F240C0Cu: goto label_7F240C0C;
    case 0x7F240C10u: goto label_7F240C10;
    case 0x7F240C14u: goto label_7F240C14;
    case 0x7F240C18u: goto label_7F240C18;
    case 0x7F240C1Cu: goto label_7F240C1C;
    case 0x7F240C20u: goto label_7F240C20;
    case 0x7F240C24u: goto label_7F240C24;
    case 0x7F240C28u: goto label_7F240C28;
    case 0x7F240C2Cu: goto label_7F240C2C;
    case 0x7F240C30u: goto label_7F240C30;
    case 0x7F240C34u: goto label_7F240C34;
    case 0x7F240C38u: goto label_7F240C38;
    case 0x7F240C3Cu: goto label_7F240C3C;
    case 0x7F240C40u: goto label_7F240C40;
    case 0x7F240C44u: goto label_7F240C44;
    case 0x7F240C48u: goto label_7F240C48;
    case 0x7F240C4Cu: goto label_7F240C4C;
    case 0x7F240C50u: goto label_7F240C50;
    case 0x7F240C54u: goto label_7F240C54;
    case 0x7F240C58u: goto label_7F240C58;
    case 0x7F240C5Cu: goto label_7F240C5C;
    case 0x7F240C60u: goto label_7F240C60;
    case 0x7F240C64u: goto label_7F240C64;
    case 0x7F240C68u: goto label_7F240C68;
    case 0x7F240C6Cu: goto label_7F240C6C;
    case 0x7F240C70u: goto label_7F240C70;
    case 0x7F240C74u: goto label_7F240C74;
    case 0x7F240C78u: goto label_7F240C78;
    case 0x7F240C7Cu: goto label_7F240C7C;
    case 0x7F240C80u: goto label_7F240C80;
    case 0x7F240C84u: goto label_7F240C84;
    case 0x7F240C88u: goto label_7F240C88;
    case 0x7F240C8Cu: goto label_7F240C8C;
    case 0x7F240C90u: goto label_7F240C90;
    case 0x7F240C94u: goto label_7F240C94;
    case 0x7F240C98u: goto label_7F240C98;
    case 0x7F240C9Cu: goto label_7F240C9C;
    case 0x7F240CA0u: goto label_7F240CA0;
    case 0x7F240CA4u: goto label_7F240CA4;
    case 0x7F240CA8u: goto label_7F240CA8;
    case 0x7F240CACu: goto label_7F240CAC;
    case 0x7F240CB0u: goto label_7F240CB0;
    case 0x7F240CB4u: goto label_7F240CB4;
    case 0x7F240CB8u: goto label_7F240CB8;
    case 0x7F240CBCu: goto label_7F240CBC;
    case 0x7F240CC0u: goto label_7F240CC0;
    case 0x7F240CC4u: goto label_7F240CC4;
    case 0x7F240CC8u: goto label_7F240CC8;
    case 0x7F240CCCu: goto label_7F240CCC;
    case 0x7F240CD0u: goto label_7F240CD0;
    case 0x7F240CD4u: goto label_7F240CD4;
    case 0x7F240CD8u: goto label_7F240CD8;
    case 0x7F240CDCu: goto label_7F240CDC;
    case 0x7F240CE0u: goto label_7F240CE0;
    case 0x7F240CE4u: goto label_7F240CE4;
    case 0x7F240CE8u: goto label_7F240CE8;
    case 0x7F240CECu: goto label_7F240CEC;
    case 0x7F240CF0u: goto label_7F240CF0;
    case 0x7F240CF4u: goto label_7F240CF4;
    case 0x7F240CF8u: goto label_7F240CF8;
    case 0x7F240CFCu: goto label_7F240CFC;
    case 0x7F240D00u: goto label_7F240D00;
    case 0x7F240D04u: goto label_7F240D04;
    case 0x7F240D08u: goto label_7F240D08;
    case 0x7F240D0Cu: goto label_7F240D0C;
    case 0x7F240D10u: goto label_7F240D10;
    case 0x7F240D14u: goto label_7F240D14;
    case 0x7F240D18u: goto label_7F240D18;
    case 0x7F240D1Cu: goto label_7F240D1C;
    case 0x7F240D20u: goto label_7F240D20;
    case 0x7F240D24u: goto label_7F240D24;
    case 0x7F240D28u: goto label_7F240D28;
    case 0x7F240D2Cu: goto label_7F240D2C;
    case 0x7F240D30u: goto label_7F240D30;
    case 0x7F240D34u: goto label_7F240D34;
    case 0x7F240D38u: goto label_7F240D38;
    case 0x7F240D3Cu: goto label_7F240D3C;
    case 0x7F240D40u: goto label_7F240D40;
    case 0x7F240D44u: goto label_7F240D44;
    case 0x7F240D48u: goto label_7F240D48;
    case 0x7F240D4Cu: goto label_7F240D4C;
    case 0x7F240D50u: goto label_7F240D50;
    case 0x7F240D54u: goto label_7F240D54;
    case 0x7F240D58u: goto label_7F240D58;
    case 0x7F240D5Cu: goto label_7F240D5C;
    case 0x7F240D60u: goto label_7F240D60;
    case 0x7F240D64u: goto label_7F240D64;
    case 0x7F240D68u: goto label_7F240D68;
    case 0x7F240D6Cu: goto label_7F240D6C;
    case 0x7F240D70u: goto label_7F240D70;
    case 0x7F240D74u: goto label_7F240D74;
    case 0x7F240D78u: goto label_7F240D78;
    case 0x7F240D7Cu: goto label_7F240D7C;
    case 0x7F240D80u: goto label_7F240D80;
    case 0x7F240D84u: goto label_7F240D84;
    case 0x7F240D88u: goto label_7F240D88;
    case 0x7F240D8Cu: goto label_7F240D8C;
    case 0x7F240D90u: goto label_7F240D90;
    case 0x7F240D94u: goto label_7F240D94;
    case 0x7F240D98u: goto label_7F240D98;
    case 0x7F240D9Cu: goto label_7F240D9C;
    case 0x7F240DA0u: goto label_7F240DA0;
    case 0x7F240DA4u: goto label_7F240DA4;
    case 0x7F240DA8u: goto label_7F240DA8;
    case 0x7F240DACu: goto label_7F240DAC;
    case 0x7F240DB0u: goto label_7F240DB0;
    case 0x7F240DB4u: goto label_7F240DB4;
    case 0x7F240DB8u: goto label_7F240DB8;
    case 0x7F240DBCu: goto label_7F240DBC;
    case 0x7F240DC0u: goto label_7F240DC0;
    case 0x7F240DC4u: goto label_7F240DC4;
    case 0x7F240DC8u: goto label_7F240DC8;
    case 0x7F240DCCu: goto label_7F240DCC;
    case 0x7F240DD0u: goto label_7F240DD0;
    case 0x7F240DD4u: goto label_7F240DD4;
    case 0x7F240DD8u: goto label_7F240DD8;
    case 0x7F240DDCu: goto label_7F240DDC;
    case 0x7F240DE0u: goto label_7F240DE0;
    case 0x7F240DE4u: goto label_7F240DE4;
    case 0x7F240DE8u: goto label_7F240DE8;
    case 0x7F240DECu: goto label_7F240DEC;
    case 0x7F240DF0u: goto label_7F240DF0;
    case 0x7F240DF4u: goto label_7F240DF4;
    case 0x7F240DF8u: goto label_7F240DF8;
    case 0x7F240DFCu: goto label_7F240DFC;
    case 0x7F240E00u: goto label_7F240E00;
    case 0x7F240E04u: goto label_7F240E04;
    case 0x7F240E08u: goto label_7F240E08;
    case 0x7F240E0Cu: goto label_7F240E0C;
    case 0x7F240E10u: goto label_7F240E10;
    case 0x7F240E14u: goto label_7F240E14;
    case 0x7F240E18u: goto label_7F240E18;
    case 0x7F240E1Cu: goto label_7F240E1C;
    case 0x7F240E20u: goto label_7F240E20;
    case 0x7F240E24u: goto label_7F240E24;
    case 0x7F240E28u: goto label_7F240E28;
    case 0x7F240E2Cu: goto label_7F240E2C;
    case 0x7F240E30u: goto label_7F240E30;
    case 0x7F240E34u: goto label_7F240E34;
    case 0x7F240E38u: goto label_7F240E38;
    case 0x7F240E3Cu: goto label_7F240E3C;
    case 0x7F240E40u: goto label_7F240E40;
    case 0x7F240E44u: goto label_7F240E44;
    case 0x7F240E48u: goto label_7F240E48;
    case 0x7F240E4Cu: goto label_7F240E4C;
    case 0x7F240E50u: goto label_7F240E50;
    case 0x7F240E54u: goto label_7F240E54;
    case 0x7F240E58u: goto label_7F240E58;
    case 0x7F240E5Cu: goto label_7F240E5C;
    case 0x7F240E60u: goto label_7F240E60;
    case 0x7F240E64u: goto label_7F240E64;
    case 0x7F240E68u: goto label_7F240E68;
    case 0x7F240E6Cu: goto label_7F240E6C;
    case 0x7F240E70u: goto label_7F240E70;
    case 0x7F240E74u: goto label_7F240E74;
    case 0x7F240E78u: goto label_7F240E78;
    case 0x7F240E7Cu: goto label_7F240E7C;
    case 0x7F240E80u: goto label_7F240E80;
    case 0x7F240E84u: goto label_7F240E84;
    case 0x7F240E88u: goto label_7F240E88;
    case 0x7F240E8Cu: goto label_7F240E8C;
    case 0x7F240E90u: goto label_7F240E90;
    case 0x7F240E94u: goto label_7F240E94;
    case 0x7F240E98u: goto label_7F240E98;
    case 0x7F240E9Cu: goto label_7F240E9C;
    case 0x7F240EA0u: goto label_7F240EA0;
    case 0x7F240EA4u: goto label_7F240EA4;
    case 0x7F240EA8u: goto label_7F240EA8;
    case 0x7F240EACu: goto label_7F240EAC;
    case 0x7F240EB0u: goto label_7F240EB0;
    case 0x7F240EB4u: goto label_7F240EB4;
    case 0x7F240EB8u: goto label_7F240EB8;
    case 0x7F240EBCu: goto label_7F240EBC;
    case 0x7F240EC0u: goto label_7F240EC0;
    case 0x7F240EC4u: goto label_7F240EC4;
    case 0x7F240EC8u: goto label_7F240EC8;
    case 0x7F240ECCu: goto label_7F240ECC;
    case 0x7F240ED0u: goto label_7F240ED0;
    case 0x7F240ED4u: goto label_7F240ED4;
    case 0x7F240ED8u: goto label_7F240ED8;
    case 0x7F240EDCu: goto label_7F240EDC;
    case 0x7F240EE0u: goto label_7F240EE0;
    case 0x7F240EE4u: goto label_7F240EE4;
    case 0x7F240EE8u: goto label_7F240EE8;
    case 0x7F240EECu: goto label_7F240EEC;
    case 0x7F240EF0u: goto label_7F240EF0;
    case 0x7F240EF4u: goto label_7F240EF4;
    case 0x7F240EF8u: goto label_7F240EF8;
    case 0x7F240EFCu: goto label_7F240EFC;
    case 0x7F240F00u: goto label_7F240F00;
    case 0x7F240F04u: goto label_7F240F04;
    case 0x7F240F08u: goto label_7F240F08;
    case 0x7F240F0Cu: goto label_7F240F0C;
    case 0x7F240F10u: goto label_7F240F10;
    case 0x7F240F14u: goto label_7F240F14;
    case 0x7F240F18u: goto label_7F240F18;
    case 0x7F240F1Cu: goto label_7F240F1C;
    case 0x7F240F20u: goto label_7F240F20;
    case 0x7F240F24u: goto label_7F240F24;
    case 0x7F240F28u: goto label_7F240F28;
    case 0x7F240F2Cu: goto label_7F240F2C;
    case 0x7F240F30u: goto label_7F240F30;
    case 0x7F240F34u: goto label_7F240F34;
    case 0x7F240F38u: goto label_7F240F38;
    case 0x7F240F3Cu: goto label_7F240F3C;
    case 0x7F240F40u: goto label_7F240F40;
    case 0x7F240F44u: goto label_7F240F44;
    case 0x7F240F48u: goto label_7F240F48;
    case 0x7F240F4Cu: goto label_7F240F4C;
    case 0x7F240F50u: goto label_7F240F50;
    case 0x7F240F54u: goto label_7F240F54;
    case 0x7F240F58u: goto label_7F240F58;
    case 0x7F240F5Cu: goto label_7F240F5C;
    case 0x7F240F60u: goto label_7F240F60;
    case 0x7F240F64u: goto label_7F240F64;
    case 0x7F240F68u: goto label_7F240F68;
    case 0x7F240F6Cu: goto label_7F240F6C;
    case 0x7F240F70u: goto label_7F240F70;
    case 0x7F240F74u: goto label_7F240F74;
    case 0x7F240F78u: goto label_7F240F78;
    case 0x7F240F7Cu: goto label_7F240F7C;
    case 0x7F240F80u: goto label_7F240F80;
    case 0x7F240F84u: goto label_7F240F84;
    case 0x7F240F88u: goto label_7F240F88;
    case 0x7F240F8Cu: goto label_7F240F8C;
    case 0x7F240F90u: goto label_7F240F90;
    case 0x7F240F94u: goto label_7F240F94;
    case 0x7F240F98u: goto label_7F240F98;
    case 0x7F240F9Cu: goto label_7F240F9C;
    case 0x7F240FA0u: goto label_7F240FA0;
    case 0x7F240FA4u: goto label_7F240FA4;
    case 0x7F240FA8u: goto label_7F240FA8;
    case 0x7F240FACu: goto label_7F240FAC;
    case 0x7F240FB0u: goto label_7F240FB0;
    case 0x7F240FB4u: goto label_7F240FB4;
    case 0x7F240FB8u: goto label_7F240FB8;
    case 0x7F240FBCu: goto label_7F240FBC;
    case 0x7F240FC0u: goto label_7F240FC0;
    case 0x7F240FC4u: goto label_7F240FC4;
    case 0x7F240FC8u: goto label_7F240FC8;
    case 0x7F240FCCu: goto label_7F240FCC;
    case 0x7F240FD0u: goto label_7F240FD0;
    case 0x7F240FD4u: goto label_7F240FD4;
    case 0x7F240FD8u: goto label_7F240FD8;
    case 0x7F240FDCu: goto label_7F240FDC;
    case 0x7F240FE0u: goto label_7F240FE0;
    case 0x7F240FE4u: goto label_7F240FE4;
    case 0x7F240FE8u: goto label_7F240FE8;
    case 0x7F240FECu: goto label_7F240FEC;
    case 0x7F240FF0u: goto label_7F240FF0;
    case 0x7F240FF4u: goto label_7F240FF4;
    case 0x7F240FF8u: goto label_7F240FF8;
    case 0x7F240FFCu: goto label_7F240FFC;
    case 0x7F241000u: goto label_7F241000;
    case 0x7F241004u: goto label_7F241004;
    case 0x7F241008u: goto label_7F241008;
    case 0x7F24100Cu: goto label_7F24100C;
    case 0x7F241010u: goto label_7F241010;
    case 0x7F241014u: goto label_7F241014;
    case 0x7F241018u: goto label_7F241018;
    case 0x7F24101Cu: goto label_7F24101C;
    case 0x7F241020u: goto label_7F241020;
    case 0x7F241024u: goto label_7F241024;
    case 0x7F241028u: goto label_7F241028;
    case 0x7F24102Cu: goto label_7F24102C;
    case 0x7F241030u: goto label_7F241030;
    case 0x7F241034u: goto label_7F241034;
    case 0x7F241038u: goto label_7F241038;
    case 0x7F24103Cu: goto label_7F24103C;
    case 0x7F241040u: goto label_7F241040;
    case 0x7F241044u: goto label_7F241044;
    case 0x7F241048u: goto label_7F241048;
    case 0x7F24104Cu: goto label_7F24104C;
    case 0x7F241050u: goto label_7F241050;
    case 0x7F241054u: goto label_7F241054;
    case 0x7F241058u: goto label_7F241058;
    case 0x7F24105Cu: goto label_7F24105C;
    case 0x7F241060u: goto label_7F241060;
    case 0x7F241064u: goto label_7F241064;
    case 0x7F241068u: goto label_7F241068;
    case 0x7F24106Cu: goto label_7F24106C;
    case 0x7F241070u: goto label_7F241070;
    case 0x7F241074u: goto label_7F241074;
    case 0x7F241078u: goto label_7F241078;
    case 0x7F24107Cu: goto label_7F24107C;
    case 0x7F241080u: goto label_7F241080;
    case 0x7F241084u: goto label_7F241084;
    case 0x7F241088u: goto label_7F241088;
    case 0x7F24108Cu: goto label_7F24108C;
    case 0x7F241090u: goto label_7F241090;
    case 0x7F241094u: goto label_7F241094;
    case 0x7F241098u: goto label_7F241098;
    case 0x7F24109Cu: goto label_7F24109C;
    case 0x7F2410A0u: goto label_7F2410A0;
    case 0x7F2410A4u: goto label_7F2410A4;
    case 0x7F2410A8u: goto label_7F2410A8;
    case 0x7F2410ACu: goto label_7F2410AC;
    case 0x7F2410B0u: goto label_7F2410B0;
    case 0x7F2410B4u: goto label_7F2410B4;
    case 0x7F2410B8u: goto label_7F2410B8;
    case 0x7F2410BCu: goto label_7F2410BC;
    case 0x7F2410C0u: goto label_7F2410C0;
    case 0x7F2410C4u: goto label_7F2410C4;
    case 0x7F2410C8u: goto label_7F2410C8;
    case 0x7F2410CCu: goto label_7F2410CC;
    case 0x7F2410D0u: goto label_7F2410D0;
    case 0x7F2410D4u: goto label_7F2410D4;
    case 0x7F2410D8u: goto label_7F2410D8;
    case 0x7F2410DCu: goto label_7F2410DC;
    case 0x7F2410E0u: goto label_7F2410E0;
    case 0x7F2410E4u: goto label_7F2410E4;
    case 0x7F2410E8u: goto label_7F2410E8;
    case 0x7F2410ECu: goto label_7F2410EC;
    case 0x7F2410F0u: goto label_7F2410F0;
    case 0x7F2410F4u: goto label_7F2410F4;
    case 0x7F2410F8u: goto label_7F2410F8;
    case 0x7F2410FCu: goto label_7F2410FC;
    case 0x7F241100u: goto label_7F241100;
    case 0x7F241104u: goto label_7F241104;
    case 0x7F241108u: goto label_7F241108;
    case 0x7F24110Cu: goto label_7F24110C;
    case 0x7F241110u: goto label_7F241110;
    case 0x7F241114u: goto label_7F241114;
    case 0x7F241118u: goto label_7F241118;
    case 0x7F24111Cu: goto label_7F24111C;
    case 0x7F241120u: goto label_7F241120;
    case 0x7F241124u: goto label_7F241124;
    case 0x7F241128u: goto label_7F241128;
    case 0x7F24112Cu: goto label_7F24112C;
    case 0x7F241130u: goto label_7F241130;
    case 0x7F241134u: goto label_7F241134;
    case 0x7F241138u: goto label_7F241138;
    case 0x7F24113Cu: goto label_7F24113C;
    case 0x7F241140u: goto label_7F241140;
    case 0x7F241144u: goto label_7F241144;
    case 0x7F241148u: goto label_7F241148;
    case 0x7F24114Cu: goto label_7F24114C;
    case 0x7F241150u: goto label_7F241150;
    case 0x7F241154u: goto label_7F241154;
    case 0x7F241158u: goto label_7F241158;
    case 0x7F24115Cu: goto label_7F24115C;
    case 0x7F241160u: goto label_7F241160;
    case 0x7F241164u: goto label_7F241164;
    case 0x7F241168u: goto label_7F241168;
    case 0x7F24116Cu: goto label_7F24116C;
    case 0x7F241170u: goto label_7F241170;
    case 0x7F241174u: goto label_7F241174;
    case 0x7F241178u: goto label_7F241178;
    case 0x7F24117Cu: goto label_7F24117C;
    case 0x7F241180u: goto label_7F241180;
    case 0x7F241184u: goto label_7F241184;
    case 0x7F241188u: goto label_7F241188;
    case 0x7F24118Cu: goto label_7F24118C;
    case 0x7F241190u: goto label_7F241190;
    case 0x7F241194u: goto label_7F241194;
    case 0x7F241198u: goto label_7F241198;
    case 0x7F24119Cu: goto label_7F24119C;
    case 0x7F2411A0u: goto label_7F2411A0;
    case 0x7F2411A4u: goto label_7F2411A4;
    case 0x7F2411A8u: goto label_7F2411A8;
    case 0x7F2411ACu: goto label_7F2411AC;
    case 0x7F2411B0u: goto label_7F2411B0;
    case 0x7F2411B4u: goto label_7F2411B4;
    case 0x7F2411B8u: goto label_7F2411B8;
    case 0x7F2411BCu: goto label_7F2411BC;
    case 0x7F2411C0u: goto label_7F2411C0;
    case 0x7F2411C4u: goto label_7F2411C4;
    case 0x7F2411C8u: goto label_7F2411C8;
    case 0x7F2411CCu: goto label_7F2411CC;
    case 0x7F2411D0u: goto label_7F2411D0;
    case 0x7F2411D4u: goto label_7F2411D4;
    case 0x7F2411D8u: goto label_7F2411D8;
    case 0x7F2411DCu: goto label_7F2411DC;
    case 0x7F2411E0u: goto label_7F2411E0;
    case 0x7F2411E4u: goto label_7F2411E4;
    case 0x7F2411E8u: goto label_7F2411E8;
    case 0x7F2411ECu: goto label_7F2411EC;
    case 0x7F2411F0u: goto label_7F2411F0;
    case 0x7F2411F4u: goto label_7F2411F4;
    case 0x7F2411F8u: goto label_7F2411F8;
    case 0x7F2411FCu: goto label_7F2411FC;
    case 0x7F241200u: goto label_7F241200;
    case 0x7F241204u: goto label_7F241204;
    case 0x7F241208u: goto label_7F241208;
    case 0x7F24120Cu: goto label_7F24120C;
    case 0x7F241210u: goto label_7F241210;
    case 0x7F241214u: goto label_7F241214;
    case 0x7F241218u: goto label_7F241218;
    case 0x7F24121Cu: goto label_7F24121C;
    case 0x7F241220u: goto label_7F241220;
    case 0x7F241224u: goto label_7F241224;
    case 0x7F241228u: goto label_7F241228;
    case 0x7F24122Cu: goto label_7F24122C;
    case 0x7F241230u: goto label_7F241230;
    case 0x7F241234u: goto label_7F241234;
    case 0x7F241238u: goto label_7F241238;
    case 0x7F24123Cu: goto label_7F24123C;
    case 0x7F241240u: goto label_7F241240;
    case 0x7F241244u: goto label_7F241244;
    case 0x7F241248u: goto label_7F241248;
    case 0x7F24124Cu: goto label_7F24124C;
    case 0x7F241250u: goto label_7F241250;
    case 0x7F241254u: goto label_7F241254;
    case 0x7F241258u: goto label_7F241258;
    case 0x7F24125Cu: goto label_7F24125C;
    case 0x7F241260u: goto label_7F241260;
    case 0x7F241264u: goto label_7F241264;
    case 0x7F241268u: goto label_7F241268;
    case 0x7F24126Cu: goto label_7F24126C;
    case 0x7F241270u: goto label_7F241270;
    case 0x7F241274u: goto label_7F241274;
    case 0x7F241278u: goto label_7F241278;
    case 0x7F24127Cu: goto label_7F24127C;
    case 0x7F241280u: goto label_7F241280;
    case 0x7F241284u: goto label_7F241284;
    case 0x7F241288u: goto label_7F241288;
    case 0x7F24128Cu: goto label_7F24128C;
    case 0x7F241290u: goto label_7F241290;
    case 0x7F241294u: goto label_7F241294;
    case 0x7F241298u: goto label_7F241298;
    case 0x7F24129Cu: goto label_7F24129C;
    case 0x7F2412A0u: goto label_7F2412A0;
    case 0x7F2412A4u: goto label_7F2412A4;
    case 0x7F2412A8u: goto label_7F2412A8;
    case 0x7F2412ACu: goto label_7F2412AC;
    case 0x7F2412B0u: goto label_7F2412B0;
    case 0x7F2412B4u: goto label_7F2412B4;
    case 0x7F2412B8u: goto label_7F2412B8;
    case 0x7F2412BCu: goto label_7F2412BC;
    case 0x7F2412C0u: goto label_7F2412C0;
    case 0x7F2412C4u: goto label_7F2412C4;
    case 0x7F2412C8u: goto label_7F2412C8;
    case 0x7F2412CCu: goto label_7F2412CC;
    case 0x7F2412D0u: goto label_7F2412D0;
    case 0x7F2412D4u: goto label_7F2412D4;
    case 0x7F2412D8u: goto label_7F2412D8;
    case 0x7F2412DCu: goto label_7F2412DC;
    case 0x7F2412E0u: goto label_7F2412E0;
    case 0x7F2412E4u: goto label_7F2412E4;
    case 0x7F2412E8u: goto label_7F2412E8;
    case 0x7F2412ECu: goto label_7F2412EC;
    case 0x7F2412F0u: goto label_7F2412F0;
    case 0x7F2412F4u: goto label_7F2412F4;
    case 0x7F2412F8u: goto label_7F2412F8;
    case 0x7F2412FCu: goto label_7F2412FC;
    case 0x7F241300u: goto label_7F241300;
    case 0x7F241304u: goto label_7F241304;
    case 0x7F241308u: goto label_7F241308;
    case 0x7F24130Cu: goto label_7F24130C;
    case 0x7F241310u: goto label_7F241310;
    case 0x7F241314u: goto label_7F241314;
    case 0x7F241318u: goto label_7F241318;
    case 0x7F24131Cu: goto label_7F24131C;
    case 0x7F241320u: goto label_7F241320;
    case 0x7F241324u: goto label_7F241324;
    case 0x7F241328u: goto label_7F241328;
    case 0x7F24132Cu: goto label_7F24132C;
    case 0x7F241330u: goto label_7F241330;
    case 0x7F241334u: goto label_7F241334;
    case 0x7F241338u: goto label_7F241338;
    case 0x7F24133Cu: goto label_7F24133C;
    case 0x7F241340u: goto label_7F241340;
    case 0x7F241344u: goto label_7F241344;
    case 0x7F241348u: goto label_7F241348;
    case 0x7F24134Cu: goto label_7F24134C;
    case 0x7F241350u: goto label_7F241350;
    case 0x7F241354u: goto label_7F241354;
    case 0x7F241358u: goto label_7F241358;
    case 0x7F24135Cu: goto label_7F24135C;
    case 0x7F241360u: goto label_7F241360;
    case 0x7F241364u: goto label_7F241364;
    case 0x7F241368u: goto label_7F241368;
    case 0x7F24136Cu: goto label_7F24136C;
    case 0x7F241370u: goto label_7F241370;
    case 0x7F241374u: goto label_7F241374;
    case 0x7F241378u: goto label_7F241378;
    case 0x7F24137Cu: goto label_7F24137C;
    case 0x7F241380u: goto label_7F241380;
    case 0x7F241384u: goto label_7F241384;
    case 0x7F241388u: goto label_7F241388;
    case 0x7F24138Cu: goto label_7F24138C;
    case 0x7F241390u: goto label_7F241390;
    case 0x7F241394u: goto label_7F241394;
    case 0x7F241398u: goto label_7F241398;
    case 0x7F24139Cu: goto label_7F24139C;
    case 0x7F2413A0u: goto label_7F2413A0;
    case 0x7F2413A4u: goto label_7F2413A4;
    case 0x7F2413A8u: goto label_7F2413A8;
    case 0x7F2413ACu: goto label_7F2413AC;
    case 0x7F2413B0u: goto label_7F2413B0;
    case 0x7F2413B4u: goto label_7F2413B4;
    case 0x7F2413B8u: goto label_7F2413B8;
    case 0x7F2413BCu: goto label_7F2413BC;
    case 0x7F2413C0u: goto label_7F2413C0;
    case 0x7F2413C4u: goto label_7F2413C4;
    case 0x7F2413C8u: goto label_7F2413C8;
    case 0x7F2413CCu: goto label_7F2413CC;
    case 0x7F2413D0u: goto label_7F2413D0;
    case 0x7F2413D4u: goto label_7F2413D4;
    case 0x7F2413D8u: goto label_7F2413D8;
    case 0x7F2413DCu: goto label_7F2413DC;
    case 0x7F2413E0u: goto label_7F2413E0;
    case 0x7F2413E4u: goto label_7F2413E4;
    case 0x7F2413E8u: goto label_7F2413E8;
    case 0x7F2413ECu: goto label_7F2413EC;
    case 0x7F2413F0u: goto label_7F2413F0;
    case 0x7F2413F4u: goto label_7F2413F4;
    case 0x7F2413F8u: goto label_7F2413F8;
    case 0x7F2413FCu: goto label_7F2413FC;
    case 0x7F241400u: goto label_7F241400;
    case 0x7F241404u: goto label_7F241404;
    case 0x7F241408u: goto label_7F241408;
    case 0x7F24140Cu: goto label_7F24140C;
    case 0x7F241410u: goto label_7F241410;
    case 0x7F241414u: goto label_7F241414;
    case 0x7F241418u: goto label_7F241418;
    case 0x7F24141Cu: goto label_7F24141C;
    case 0x7F241420u: goto label_7F241420;
    case 0x7F241424u: goto label_7F241424;
    case 0x7F241428u: goto label_7F241428;
    case 0x7F24142Cu: goto label_7F24142C;
    case 0x7F241430u: goto label_7F241430;
    case 0x7F241434u: goto label_7F241434;
    case 0x7F241438u: goto label_7F241438;
    case 0x7F24143Cu: goto label_7F24143C;
    case 0x7F241440u: goto label_7F241440;
    case 0x7F241444u: goto label_7F241444;
    case 0x7F241448u: goto label_7F241448;
    case 0x7F24144Cu: goto label_7F24144C;
    case 0x7F241450u: goto label_7F241450;
    case 0x7F241454u: goto label_7F241454;
    case 0x7F241458u: goto label_7F241458;
    case 0x7F24145Cu: goto label_7F24145C;
    case 0x7F241460u: goto label_7F241460;
    case 0x7F241464u: goto label_7F241464;
    case 0x7F241468u: goto label_7F241468;
    case 0x7F24146Cu: goto label_7F24146C;
    case 0x7F241470u: goto label_7F241470;
    case 0x7F241474u: goto label_7F241474;
    case 0x7F241478u: goto label_7F241478;
    case 0x7F24147Cu: goto label_7F24147C;
    case 0x7F241480u: goto label_7F241480;
    case 0x7F241484u: goto label_7F241484;
    case 0x7F241488u: goto label_7F241488;
    case 0x7F24148Cu: goto label_7F24148C;
    case 0x7F241490u: goto label_7F241490;
    case 0x7F241494u: goto label_7F241494;
    case 0x7F241498u: goto label_7F241498;
    case 0x7F24149Cu: goto label_7F24149C;
    case 0x7F2414A0u: goto label_7F2414A0;
    case 0x7F2414A4u: goto label_7F2414A4;
    case 0x7F2414A8u: goto label_7F2414A8;
    case 0x7F2414ACu: goto label_7F2414AC;
    case 0x7F2414B0u: goto label_7F2414B0;
    case 0x7F2414B4u: goto label_7F2414B4;
    case 0x7F2414B8u: goto label_7F2414B8;
    case 0x7F2414BCu: goto label_7F2414BC;
    case 0x7F2414C0u: goto label_7F2414C0;
    case 0x7F2414C4u: goto label_7F2414C4;
    case 0x7F2414C8u: goto label_7F2414C8;
    case 0x7F2414CCu: goto label_7F2414CC;
    case 0x7F2414D0u: goto label_7F2414D0;
    case 0x7F2414D4u: goto label_7F2414D4;
    case 0x7F2414D8u: goto label_7F2414D8;
    case 0x7F2414DCu: goto label_7F2414DC;
    case 0x7F2414E0u: goto label_7F2414E0;
    case 0x7F2414E4u: goto label_7F2414E4;
    case 0x7F2414E8u: goto label_7F2414E8;
    case 0x7F2414ECu: goto label_7F2414EC;
    case 0x7F2414F0u: goto label_7F2414F0;
    case 0x7F2414F4u: goto label_7F2414F4;
    case 0x7F2414F8u: goto label_7F2414F8;
    case 0x7F2414FCu: goto label_7F2414FC;
    case 0x7F241500u: goto label_7F241500;
    case 0x7F241504u: goto label_7F241504;
    case 0x7F241508u: goto label_7F241508;
    case 0x7F24150Cu: goto label_7F24150C;
    case 0x7F241510u: goto label_7F241510;
    case 0x7F241514u: goto label_7F241514;
    case 0x7F241518u: goto label_7F241518;
    case 0x7F24151Cu: goto label_7F24151C;
    case 0x7F241520u: goto label_7F241520;
    case 0x7F241524u: goto label_7F241524;
    case 0x7F241528u: goto label_7F241528;
    case 0x7F24152Cu: goto label_7F24152C;
    case 0x7F241530u: goto label_7F241530;
    case 0x7F241534u: goto label_7F241534;
    case 0x7F241538u: goto label_7F241538;
    case 0x7F24153Cu: goto label_7F24153C;
    case 0x7F241540u: goto label_7F241540;
    case 0x7F241544u: goto label_7F241544;
    case 0x7F241548u: goto label_7F241548;
    case 0x7F24154Cu: goto label_7F24154C;
    case 0x7F241550u: goto label_7F241550;
    case 0x7F241554u: goto label_7F241554;
    case 0x7F241558u: goto label_7F241558;
    case 0x7F24155Cu: goto label_7F24155C;
    case 0x7F241560u: goto label_7F241560;
    case 0x7F241564u: goto label_7F241564;
    case 0x7F241568u: goto label_7F241568;
    case 0x7F24156Cu: goto label_7F24156C;
    case 0x7F241570u: goto label_7F241570;
    case 0x7F241574u: goto label_7F241574;
    case 0x7F241578u: goto label_7F241578;
    case 0x7F24157Cu: goto label_7F24157C;
    case 0x7F241580u: goto label_7F241580;
    case 0x7F241584u: goto label_7F241584;
    case 0x7F241588u: goto label_7F241588;
    case 0x7F24158Cu: goto label_7F24158C;
    case 0x7F241590u: goto label_7F241590;
    case 0x7F241594u: goto label_7F241594;
    case 0x7F241598u: goto label_7F241598;
    case 0x7F24159Cu: goto label_7F24159C;
    case 0x7F2415A0u: goto label_7F2415A0;
    case 0x7F2415A4u: goto label_7F2415A4;
    case 0x7F2415A8u: goto label_7F2415A8;
    case 0x7F2415ACu: goto label_7F2415AC;
    case 0x7F2415B0u: goto label_7F2415B0;
    case 0x7F2415B4u: goto label_7F2415B4;
    case 0x7F2415B8u: goto label_7F2415B8;
    case 0x7F2415BCu: goto label_7F2415BC;
    case 0x7F2415C0u: goto label_7F2415C0;
    case 0x7F2415C4u: goto label_7F2415C4;
    case 0x7F2415C8u: goto label_7F2415C8;
    case 0x7F2415CCu: goto label_7F2415CC;
    case 0x7F2415D0u: goto label_7F2415D0;
    case 0x7F2415D4u: goto label_7F2415D4;
    case 0x7F2415D8u: goto label_7F2415D8;
    case 0x7F2415DCu: goto label_7F2415DC;
    case 0x7F2415E0u: goto label_7F2415E0;
    case 0x7F2415E4u: goto label_7F2415E4;
    case 0x7F2415E8u: goto label_7F2415E8;
    case 0x7F2415ECu: goto label_7F2415EC;
    case 0x7F2415F0u: goto label_7F2415F0;
    case 0x7F2415F4u: goto label_7F2415F4;
    case 0x7F2415F8u: goto label_7F2415F8;
    case 0x7F2415FCu: goto label_7F2415FC;
    case 0x7F241600u: goto label_7F241600;
    case 0x7F241604u: goto label_7F241604;
    case 0x7F241608u: goto label_7F241608;
    case 0x7F24160Cu: goto label_7F24160C;
    case 0x7F241610u: goto label_7F241610;
    case 0x7F241614u: goto label_7F241614;
    case 0x7F241618u: goto label_7F241618;
    case 0x7F24161Cu: goto label_7F24161C;
    case 0x7F241620u: goto label_7F241620;
    case 0x7F241624u: goto label_7F241624;
    case 0x7F241628u: goto label_7F241628;
    case 0x7F24162Cu: goto label_7F24162C;
    case 0x7F241630u: goto label_7F241630;
    case 0x7F241634u: goto label_7F241634;
    case 0x7F241638u: goto label_7F241638;
    case 0x7F24163Cu: goto label_7F24163C;
    case 0x7F241640u: goto label_7F241640;
    case 0x7F241644u: goto label_7F241644;
    case 0x7F241648u: goto label_7F241648;
    case 0x7F24164Cu: goto label_7F24164C;
    case 0x7F241650u: goto label_7F241650;
    case 0x7F241654u: goto label_7F241654;
    case 0x7F241658u: goto label_7F241658;
    case 0x7F24165Cu: goto label_7F24165C;
    case 0x7F241660u: goto label_7F241660;
    case 0x7F241664u: goto label_7F241664;
    case 0x7F241668u: goto label_7F241668;
    case 0x7F24166Cu: goto label_7F24166C;
    case 0x7F241670u: goto label_7F241670;
    case 0x7F241674u: goto label_7F241674;
    case 0x7F241678u: goto label_7F241678;
    case 0x7F24167Cu: goto label_7F24167C;
    case 0x7F241680u: goto label_7F241680;
    case 0x7F241684u: goto label_7F241684;
    case 0x7F241688u: goto label_7F241688;
    case 0x7F24168Cu: goto label_7F24168C;
    case 0x7F241690u: goto label_7F241690;
    case 0x7F241694u: goto label_7F241694;
    case 0x7F241698u: goto label_7F241698;
    case 0x7F24169Cu: goto label_7F24169C;
    case 0x7F2416A0u: goto label_7F2416A0;
    case 0x7F2416A4u: goto label_7F2416A4;
    case 0x7F2416A8u: goto label_7F2416A8;
    case 0x7F2416ACu: goto label_7F2416AC;
    case 0x7F2416B0u: goto label_7F2416B0;
    case 0x7F2416B4u: goto label_7F2416B4;
    case 0x7F2416B8u: goto label_7F2416B8;
    case 0x7F2416BCu: goto label_7F2416BC;
    case 0x7F2416C0u: goto label_7F2416C0;
    case 0x7F2416C4u: goto label_7F2416C4;
    case 0x7F2416C8u: goto label_7F2416C8;
    case 0x7F2416CCu: goto label_7F2416CC;
    case 0x7F2416D0u: goto label_7F2416D0;
    case 0x7F2416D4u: goto label_7F2416D4;
    case 0x7F2416D8u: goto label_7F2416D8;
    case 0x7F2416DCu: goto label_7F2416DC;
    case 0x7F2416E0u: goto label_7F2416E0;
    case 0x7F2416E4u: goto label_7F2416E4;
    case 0x7F2416E8u: goto label_7F2416E8;
    case 0x7F2416ECu: goto label_7F2416EC;
    case 0x7F2416F0u: goto label_7F2416F0;
    case 0x7F2416F4u: goto label_7F2416F4;
    case 0x7F2416F8u: goto label_7F2416F8;
    case 0x7F2416FCu: goto label_7F2416FC;
    case 0x7F241700u: goto label_7F241700;
    case 0x7F241704u: goto label_7F241704;
    case 0x7F241708u: goto label_7F241708;
    case 0x7F24170Cu: goto label_7F24170C;
    case 0x7F241710u: goto label_7F241710;
    case 0x7F241714u: goto label_7F241714;
    case 0x7F241718u: goto label_7F241718;
    case 0x7F24171Cu: goto label_7F24171C;
    case 0x7F241720u: goto label_7F241720;
    case 0x7F241724u: goto label_7F241724;
    case 0x7F241728u: goto label_7F241728;
    case 0x7F24172Cu: goto label_7F24172C;
    case 0x7F241730u: goto label_7F241730;
    case 0x7F241734u: goto label_7F241734;
    case 0x7F241738u: goto label_7F241738;
    case 0x7F24173Cu: goto label_7F24173C;
    case 0x7F241740u: goto label_7F241740;
    case 0x7F241744u: goto label_7F241744;
    case 0x7F241748u: goto label_7F241748;
    case 0x7F24174Cu: goto label_7F24174C;
    case 0x7F241750u: goto label_7F241750;
    case 0x7F241754u: goto label_7F241754;
    case 0x7F241758u: goto label_7F241758;
    case 0x7F24175Cu: goto label_7F24175C;
    case 0x7F241760u: goto label_7F241760;
    case 0x7F241764u: goto label_7F241764;
    case 0x7F241768u: goto label_7F241768;
    case 0x7F24176Cu: goto label_7F24176C;
    case 0x7F241770u: goto label_7F241770;
    case 0x7F241774u: goto label_7F241774;
    case 0x7F241778u: goto label_7F241778;
    case 0x7F24177Cu: goto label_7F24177C;
    case 0x7F241780u: goto label_7F241780;
    case 0x7F241784u: goto label_7F241784;
    case 0x7F241788u: goto label_7F241788;
    case 0x7F24178Cu: goto label_7F24178C;
    case 0x7F241790u: goto label_7F241790;
    case 0x7F241794u: goto label_7F241794;
    case 0x7F241798u: goto label_7F241798;
    case 0x7F24179Cu: goto label_7F24179C;
    case 0x7F2417A0u: goto label_7F2417A0;
    case 0x7F2417A4u: goto label_7F2417A4;
    case 0x7F2417A8u: goto label_7F2417A8;
    case 0x7F2417ACu: goto label_7F2417AC;
    case 0x7F2417B0u: goto label_7F2417B0;
    case 0x7F2417B4u: goto label_7F2417B4;
    case 0x7F2417B8u: goto label_7F2417B8;
    case 0x7F2417BCu: goto label_7F2417BC;
    case 0x7F2417C0u: goto label_7F2417C0;
    case 0x7F2417C4u: goto label_7F2417C4;
    case 0x7F2417C8u: goto label_7F2417C8;
    case 0x7F2417CCu: goto label_7F2417CC;
    case 0x7F2417D0u: goto label_7F2417D0;
    case 0x7F2417D4u: goto label_7F2417D4;
    case 0x7F2417D8u: goto label_7F2417D8;
    case 0x7F2417DCu: goto label_7F2417DC;
    case 0x7F2417E0u: goto label_7F2417E0;
    case 0x7F2417E4u: goto label_7F2417E4;
    case 0x7F2417E8u: goto label_7F2417E8;
    case 0x7F2417ECu: goto label_7F2417EC;
    case 0x7F2417F0u: goto label_7F2417F0;
    case 0x7F2417F4u: goto label_7F2417F4;
    case 0x7F2417F8u: goto label_7F2417F8;
    case 0x7F2417FCu: goto label_7F2417FC;
    case 0x7F241800u: goto label_7F241800;
    case 0x7F241804u: goto label_7F241804;
    case 0x7F241808u: goto label_7F241808;
    case 0x7F24180Cu: goto label_7F24180C;
    case 0x7F241810u: goto label_7F241810;
    case 0x7F241814u: goto label_7F241814;
    case 0x7F241818u: goto label_7F241818;
    case 0x7F24181Cu: goto label_7F24181C;
    case 0x7F241820u: goto label_7F241820;
    case 0x7F241824u: goto label_7F241824;
    case 0x7F241828u: goto label_7F241828;
    case 0x7F24182Cu: goto label_7F24182C;
    case 0x7F241830u: goto label_7F241830;
    case 0x7F241834u: goto label_7F241834;
    case 0x7F241838u: goto label_7F241838;
    case 0x7F24183Cu: goto label_7F24183C;
    case 0x7F241840u: goto label_7F241840;
    case 0x7F241844u: goto label_7F241844;
    case 0x7F241848u: goto label_7F241848;
    case 0x7F24184Cu: goto label_7F24184C;
    case 0x7F241850u: goto label_7F241850;
    case 0x7F241854u: goto label_7F241854;
    case 0x7F241858u: goto label_7F241858;
    case 0x7F24185Cu: goto label_7F24185C;
    case 0x7F241860u: goto label_7F241860;
    case 0x7F241864u: goto label_7F241864;
    case 0x7F241868u: goto label_7F241868;
    case 0x7F24186Cu: goto label_7F24186C;
    case 0x7F241870u: goto label_7F241870;
    case 0x7F241874u: goto label_7F241874;
    case 0x7F241878u: goto label_7F241878;
    case 0x7F24187Cu: goto label_7F24187C;
    case 0x7F241880u: goto label_7F241880;
    case 0x7F241884u: goto label_7F241884;
    case 0x7F241888u: goto label_7F241888;
    case 0x7F24188Cu: goto label_7F24188C;
    case 0x7F241890u: goto label_7F241890;
    case 0x7F241894u: goto label_7F241894;
    case 0x7F241898u: goto label_7F241898;
    case 0x7F24189Cu: goto label_7F24189C;
    case 0x7F2418A0u: goto label_7F2418A0;
    case 0x7F2418A4u: goto label_7F2418A4;
    case 0x7F2418A8u: goto label_7F2418A8;
    case 0x7F2418ACu: goto label_7F2418AC;
    case 0x7F2418B0u: goto label_7F2418B0;
    case 0x7F2418B4u: goto label_7F2418B4;
    case 0x7F2418B8u: goto label_7F2418B8;
    case 0x7F2418BCu: goto label_7F2418BC;
    case 0x7F2418C0u: goto label_7F2418C0;
    case 0x7F2418C4u: goto label_7F2418C4;
    case 0x7F2418C8u: goto label_7F2418C8;
    case 0x7F2418CCu: goto label_7F2418CC;
    case 0x7F2418D0u: goto label_7F2418D0;
    case 0x7F2418D4u: goto label_7F2418D4;
    case 0x7F2418D8u: goto label_7F2418D8;
    case 0x7F2418DCu: goto label_7F2418DC;
    case 0x7F2418E0u: goto label_7F2418E0;
    case 0x7F2418E4u: goto label_7F2418E4;
    case 0x7F2418E8u: goto label_7F2418E8;
    case 0x7F2418ECu: goto label_7F2418EC;
    case 0x7F2418F0u: goto label_7F2418F0;
    case 0x7F2418F4u: goto label_7F2418F4;
    case 0x7F2418F8u: goto label_7F2418F8;
    case 0x7F2418FCu: goto label_7F2418FC;
    case 0x7F241900u: goto label_7F241900;
    case 0x7F241904u: goto label_7F241904;
    case 0x7F241908u: goto label_7F241908;
    case 0x7F24190Cu: goto label_7F24190C;
    case 0x7F241910u: goto label_7F241910;
    case 0x7F241914u: goto label_7F241914;
    case 0x7F241918u: goto label_7F241918;
    case 0x7F24191Cu: goto label_7F24191C;
    case 0x7F241920u: goto label_7F241920;
    case 0x7F241924u: goto label_7F241924;
    case 0x7F241928u: goto label_7F241928;
    case 0x7F24192Cu: goto label_7F24192C;
    case 0x7F241930u: goto label_7F241930;
    case 0x7F241934u: goto label_7F241934;
    case 0x7F241938u: goto label_7F241938;
    case 0x7F24193Cu: goto label_7F24193C;
    case 0x7F241940u: goto label_7F241940;
    case 0x7F241944u: goto label_7F241944;
    case 0x7F241948u: goto label_7F241948;
    case 0x7F24194Cu: goto label_7F24194C;
    case 0x7F241950u: goto label_7F241950;
    case 0x7F241954u: goto label_7F241954;
    case 0x7F241958u: goto label_7F241958;
    case 0x7F24195Cu: goto label_7F24195C;
    case 0x7F241960u: goto label_7F241960;
    case 0x7F241964u: goto label_7F241964;
    case 0x7F241968u: goto label_7F241968;
    case 0x7F24196Cu: goto label_7F24196C;
    case 0x7F241970u: goto label_7F241970;
    case 0x7F241974u: goto label_7F241974;
    case 0x7F241978u: goto label_7F241978;
    case 0x7F24197Cu: goto label_7F24197C;
    case 0x7F241980u: goto label_7F241980;
    case 0x7F241984u: goto label_7F241984;
    case 0x7F241988u: goto label_7F241988;
    case 0x7F24198Cu: goto label_7F24198C;
    case 0x7F241990u: goto label_7F241990;
    case 0x7F241994u: goto label_7F241994;
    case 0x7F241998u: goto label_7F241998;
    case 0x7F24199Cu: goto label_7F24199C;
    case 0x7F2419A0u: goto label_7F2419A0;
    case 0x7F2419A4u: goto label_7F2419A4;
    case 0x7F2419A8u: goto label_7F2419A8;
    case 0x7F2419ACu: goto label_7F2419AC;
    case 0x7F2419B0u: goto label_7F2419B0;
    case 0x7F2419B4u: goto label_7F2419B4;
    case 0x7F2419B8u: goto label_7F2419B8;
    case 0x7F2419BCu: goto label_7F2419BC;
    case 0x7F2419C0u: goto label_7F2419C0;
    case 0x7F2419C4u: goto label_7F2419C4;
    case 0x7F2419C8u: goto label_7F2419C8;
    case 0x7F2419CCu: goto label_7F2419CC;
    case 0x7F2419D0u: goto label_7F2419D0;
    case 0x7F2419D4u: goto label_7F2419D4;
    case 0x7F2419D8u: goto label_7F2419D8;
    case 0x7F2419DCu: goto label_7F2419DC;
    case 0x7F2419E0u: goto label_7F2419E0;
    case 0x7F2419E4u: goto label_7F2419E4;
    case 0x7F2419E8u: goto label_7F2419E8;
    case 0x7F2419ECu: goto label_7F2419EC;
    case 0x7F2419F0u: goto label_7F2419F0;
    case 0x7F2419F4u: goto label_7F2419F4;
    case 0x7F2419F8u: goto label_7F2419F8;
    case 0x7F2419FCu: goto label_7F2419FC;
    case 0x7F241A00u: goto label_7F241A00;
    case 0x7F241A04u: goto label_7F241A04;
    case 0x7F241A08u: goto label_7F241A08;
    case 0x7F241A0Cu: goto label_7F241A0C;
    case 0x7F241A10u: goto label_7F241A10;
    case 0x7F241A14u: goto label_7F241A14;
    case 0x7F241A18u: goto label_7F241A18;
    case 0x7F241A1Cu: goto label_7F241A1C;
    case 0x7F241A20u: goto label_7F241A20;
    case 0x7F241A24u: goto label_7F241A24;
    case 0x7F241A28u: goto label_7F241A28;
    case 0x7F241A2Cu: goto label_7F241A2C;
    case 0x7F241A30u: goto label_7F241A30;
    case 0x7F241A34u: goto label_7F241A34;
    case 0x7F241A38u: goto label_7F241A38;
    case 0x7F241A3Cu: goto label_7F241A3C;
    case 0x7F241A40u: goto label_7F241A40;
    case 0x7F241A44u: goto label_7F241A44;
    case 0x7F241A48u: goto label_7F241A48;
    case 0x7F241A4Cu: goto label_7F241A4C;
    case 0x7F241A50u: goto label_7F241A50;
    case 0x7F241A54u: goto label_7F241A54;
    case 0x7F241A58u: goto label_7F241A58;
    case 0x7F241A5Cu: goto label_7F241A5C;
    case 0x7F241A60u: goto label_7F241A60;
    case 0x7F241A64u: goto label_7F241A64;
    case 0x7F241A68u: goto label_7F241A68;
    case 0x7F241A6Cu: goto label_7F241A6C;
    case 0x7F241A70u: goto label_7F241A70;
    case 0x7F241A74u: goto label_7F241A74;
    case 0x7F241A78u: goto label_7F241A78;
    case 0x7F241A7Cu: goto label_7F241A7C;
    case 0x7F241A80u: goto label_7F241A80;
    case 0x7F241A84u: goto label_7F241A84;
    case 0x7F241A88u: goto label_7F241A88;
    case 0x7F241A8Cu: goto label_7F241A8C;
    case 0x7F241A90u: goto label_7F241A90;
    case 0x7F241A94u: goto label_7F241A94;
    case 0x7F241A98u: goto label_7F241A98;
    case 0x7F241A9Cu: goto label_7F241A9C;
    case 0x7F241AA0u: goto label_7F241AA0;
    case 0x7F241AA4u: goto label_7F241AA4;
    case 0x7F241AA8u: goto label_7F241AA8;
    case 0x7F241AACu: goto label_7F241AAC;
    case 0x7F241AB0u: goto label_7F241AB0;
    case 0x7F241AB4u: goto label_7F241AB4;
    case 0x7F241AB8u: goto label_7F241AB8;
    case 0x7F241ABCu: goto label_7F241ABC;
    case 0x7F241AC0u: goto label_7F241AC0;
    case 0x7F241AC4u: goto label_7F241AC4;
    case 0x7F241AC8u: goto label_7F241AC8;
    case 0x7F241ACCu: goto label_7F241ACC;
    case 0x7F241AD0u: goto label_7F241AD0;
    case 0x7F241AD4u: goto label_7F241AD4;
    case 0x7F241AD8u: goto label_7F241AD8;
    case 0x7F241ADCu: goto label_7F241ADC;
    case 0x7F241AE0u: goto label_7F241AE0;
    case 0x7F241AE4u: goto label_7F241AE4;
    case 0x7F241AE8u: goto label_7F241AE8;
    case 0x7F241AECu: goto label_7F241AEC;
    case 0x7F241AF0u: goto label_7F241AF0;
    case 0x7F241AF4u: goto label_7F241AF4;
    case 0x7F241AF8u: goto label_7F241AF8;
    case 0x7F241AFCu: goto label_7F241AFC;
    case 0x7F241B00u: goto label_7F241B00;
    case 0x7F241B04u: goto label_7F241B04;
    case 0x7F241B08u: goto label_7F241B08;
    case 0x7F241B0Cu: goto label_7F241B0C;
    case 0x7F241B10u: goto label_7F241B10;
    case 0x7F241B14u: goto label_7F241B14;
    case 0x7F241B18u: goto label_7F241B18;
    case 0x7F241B1Cu: goto label_7F241B1C;
    case 0x7F241B20u: goto label_7F241B20;
    case 0x7F241B24u: goto label_7F241B24;
    case 0x7F241B28u: goto label_7F241B28;
    case 0x7F241B2Cu: goto label_7F241B2C;
    case 0x7F241B30u: goto label_7F241B30;
    case 0x7F241B34u: goto label_7F241B34;
    case 0x7F241B38u: goto label_7F241B38;
    case 0x7F241B3Cu: goto label_7F241B3C;
    case 0x7F241B40u: goto label_7F241B40;
    case 0x7F241B44u: goto label_7F241B44;
    case 0x7F241B48u: goto label_7F241B48;
    case 0x7F241B4Cu: goto label_7F241B4C;
    case 0x7F241B50u: goto label_7F241B50;
    case 0x7F241B54u: goto label_7F241B54;
    case 0x7F241B58u: goto label_7F241B58;
    case 0x7F241B5Cu: goto label_7F241B5C;
    case 0x7F241B60u: goto label_7F241B60;
    case 0x7F241B64u: goto label_7F241B64;
    case 0x7F241B68u: goto label_7F241B68;
    case 0x7F241B6Cu: goto label_7F241B6C;
    case 0x7F241B70u: goto label_7F241B70;
    case 0x7F241B74u: goto label_7F241B74;
    case 0x7F241B78u: goto label_7F241B78;
    case 0x7F241B7Cu: goto label_7F241B7C;
    case 0x7F241B80u: goto label_7F241B80;
    case 0x7F241B84u: goto label_7F241B84;
    case 0x7F241B88u: goto label_7F241B88;
    case 0x7F241B8Cu: goto label_7F241B8C;
    case 0x7F241B90u: goto label_7F241B90;
    case 0x7F241B94u: goto label_7F241B94;
    case 0x7F241B98u: goto label_7F241B98;
    case 0x7F241B9Cu: goto label_7F241B9C;
    case 0x7F241BA0u: goto label_7F241BA0;
    case 0x7F241BA4u: goto label_7F241BA4;
    case 0x7F241BA8u: goto label_7F241BA8;
    case 0x7F241BACu: goto label_7F241BAC;
    case 0x7F241BB0u: goto label_7F241BB0;
    case 0x7F241BB4u: goto label_7F241BB4;
    case 0x7F241BB8u: goto label_7F241BB8;
    case 0x7F241BBCu: goto label_7F241BBC;
    case 0x7F241BC0u: goto label_7F241BC0;
    case 0x7F241BC4u: goto label_7F241BC4;
    case 0x7F241BC8u: goto label_7F241BC8;
    case 0x7F241BCCu: goto label_7F241BCC;
    case 0x7F241BD0u: goto label_7F241BD0;
    case 0x7F241BD4u: goto label_7F241BD4;
    case 0x7F241BD8u: goto label_7F241BD8;
    case 0x7F241BDCu: goto label_7F241BDC;
    case 0x7F241BE0u: goto label_7F241BE0;
    case 0x7F241BE4u: goto label_7F241BE4;
    case 0x7F241BE8u: goto label_7F241BE8;
    case 0x7F241BECu: goto label_7F241BEC;
    case 0x7F241BF0u: goto label_7F241BF0;
    case 0x7F241BF4u: goto label_7F241BF4;
    case 0x7F241BF8u: goto label_7F241BF8;
    case 0x7F241BFCu: goto label_7F241BFC;
    case 0x7F241C00u: goto label_7F241C00;
    case 0x7F241C04u: goto label_7F241C04;
    case 0x7F241C08u: goto label_7F241C08;
    case 0x7F241C0Cu: goto label_7F241C0C;
    case 0x7F241C10u: goto label_7F241C10;
    case 0x7F241C14u: goto label_7F241C14;
    case 0x7F241C18u: goto label_7F241C18;
    case 0x7F241C1Cu: goto label_7F241C1C;
    case 0x7F241C20u: goto label_7F241C20;
    case 0x7F241C24u: goto label_7F241C24;
    case 0x7F241C28u: goto label_7F241C28;
    case 0x7F241C2Cu: goto label_7F241C2C;
    case 0x7F241C30u: goto label_7F241C30;
    case 0x7F241C34u: goto label_7F241C34;
    case 0x7F241C38u: goto label_7F241C38;
    case 0x7F241C3Cu: goto label_7F241C3C;
    case 0x7F241C40u: goto label_7F241C40;
    case 0x7F241C44u: goto label_7F241C44;
    case 0x7F241C48u: goto label_7F241C48;
    case 0x7F241C4Cu: goto label_7F241C4C;
    case 0x7F241C50u: goto label_7F241C50;
    case 0x7F241C54u: goto label_7F241C54;
    case 0x7F241C58u: goto label_7F241C58;
    case 0x7F241C5Cu: goto label_7F241C5C;
    case 0x7F241C60u: goto label_7F241C60;
    case 0x7F241C64u: goto label_7F241C64;
    case 0x7F241C68u: goto label_7F241C68;
    case 0x7F241C6Cu: goto label_7F241C6C;
    case 0x7F241C70u: goto label_7F241C70;
    case 0x7F241C74u: goto label_7F241C74;
    case 0x7F241C78u: goto label_7F241C78;
    case 0x7F241C7Cu: goto label_7F241C7C;
    case 0x7F241C80u: goto label_7F241C80;
    case 0x7F241C84u: goto label_7F241C84;
    case 0x7F241C88u: goto label_7F241C88;
    case 0x7F241C8Cu: goto label_7F241C8C;
    case 0x7F241C90u: goto label_7F241C90;
    case 0x7F241C94u: goto label_7F241C94;
    case 0x7F241C98u: goto label_7F241C98;
    case 0x7F241C9Cu: goto label_7F241C9C;
    case 0x7F241CA0u: goto label_7F241CA0;
    case 0x7F241CA4u: goto label_7F241CA4;
    case 0x7F241CA8u: goto label_7F241CA8;
    case 0x7F241CACu: goto label_7F241CAC;
    case 0x7F241CB0u: goto label_7F241CB0;
    case 0x7F241CB4u: goto label_7F241CB4;
    case 0x7F241CB8u: goto label_7F241CB8;
    case 0x7F241CBCu: goto label_7F241CBC;
    case 0x7F241CC0u: goto label_7F241CC0;
    case 0x7F241CC4u: goto label_7F241CC4;
    case 0x7F241CC8u: goto label_7F241CC8;
    case 0x7F241CCCu: goto label_7F241CCC;
    case 0x7F241CD0u: goto label_7F241CD0;
    case 0x7F241CD4u: goto label_7F241CD4;
    case 0x7F241CD8u: goto label_7F241CD8;
    case 0x7F241CDCu: goto label_7F241CDC;
    case 0x7F241CE0u: goto label_7F241CE0;
    case 0x7F241CE4u: goto label_7F241CE4;
    case 0x7F241CE8u: goto label_7F241CE8;
    case 0x7F241CECu: goto label_7F241CEC;
    case 0x7F241CF0u: goto label_7F241CF0;
    case 0x7F241CF4u: goto label_7F241CF4;
    case 0x7F241CF8u: goto label_7F241CF8;
    case 0x7F241CFCu: goto label_7F241CFC;
    case 0x7F241D00u: goto label_7F241D00;
    case 0x7F241D04u: goto label_7F241D04;
    case 0x7F241D08u: goto label_7F241D08;
    case 0x7F241D0Cu: goto label_7F241D0C;
    case 0x7F241D10u: goto label_7F241D10;
    case 0x7F241D14u: goto label_7F241D14;
    case 0x7F241D18u: goto label_7F241D18;
    case 0x7F241D1Cu: goto label_7F241D1C;
    case 0x7F241D20u: goto label_7F241D20;
    case 0x7F241D24u: goto label_7F241D24;
    case 0x7F241D28u: goto label_7F241D28;
    case 0x7F241D2Cu: goto label_7F241D2C;
    case 0x7F241D30u: goto label_7F241D30;
    case 0x7F241D34u: goto label_7F241D34;
    case 0x7F241D38u: goto label_7F241D38;
    case 0x7F241D3Cu: goto label_7F241D3C;
    case 0x7F241D40u: goto label_7F241D40;
    case 0x7F241D44u: goto label_7F241D44;
    case 0x7F241D48u: goto label_7F241D48;
    case 0x7F241D4Cu: goto label_7F241D4C;
    case 0x7F241D50u: goto label_7F241D50;
    case 0x7F241D54u: goto label_7F241D54;
    case 0x7F241D58u: goto label_7F241D58;
    case 0x7F241D5Cu: goto label_7F241D5C;
    case 0x7F241D60u: goto label_7F241D60;
    case 0x7F241D64u: goto label_7F241D64;
    case 0x7F241D68u: goto label_7F241D68;
    case 0x7F241D6Cu: goto label_7F241D6C;
    case 0x7F241D70u: goto label_7F241D70;
    case 0x7F241D74u: goto label_7F241D74;
    case 0x7F241D78u: goto label_7F241D78;
    case 0x7F241D7Cu: goto label_7F241D7C;
    case 0x7F241D80u: goto label_7F241D80;
    case 0x7F241D84u: goto label_7F241D84;
    case 0x7F241D88u: goto label_7F241D88;
    case 0x7F241D8Cu: goto label_7F241D8C;
    case 0x7F241D90u: goto label_7F241D90;
    case 0x7F241D94u: goto label_7F241D94;
    case 0x7F241D98u: goto label_7F241D98;
    case 0x7F241D9Cu: goto label_7F241D9C;
    case 0x7F241DA0u: goto label_7F241DA0;
    case 0x7F241DA4u: goto label_7F241DA4;
    case 0x7F241DA8u: goto label_7F241DA8;
    case 0x7F241DACu: goto label_7F241DAC;
    case 0x7F241DB0u: goto label_7F241DB0;
    case 0x7F241DB4u: goto label_7F241DB4;
    case 0x7F241DB8u: goto label_7F241DB8;
    case 0x7F241DBCu: goto label_7F241DBC;
    case 0x7F241DC0u: goto label_7F241DC0;
    case 0x7F241DC4u: goto label_7F241DC4;
    case 0x7F241DC8u: goto label_7F241DC8;
    case 0x7F241DCCu: goto label_7F241DCC;
    case 0x7F241DD0u: goto label_7F241DD0;
    case 0x7F241DD4u: goto label_7F241DD4;
    case 0x7F241DD8u: goto label_7F241DD8;
    case 0x7F241DDCu: goto label_7F241DDC;
    case 0x7F241DE0u: goto label_7F241DE0;
    case 0x7F241DE4u: goto label_7F241DE4;
    case 0x7F241DE8u: goto label_7F241DE8;
    case 0x7F241DECu: goto label_7F241DEC;
    case 0x7F241DF0u: goto label_7F241DF0;
    case 0x7F241DF4u: goto label_7F241DF4;
    case 0x7F241DF8u: goto label_7F241DF8;
    case 0x7F241DFCu: goto label_7F241DFC;
    case 0x7F241E00u: goto label_7F241E00;
    case 0x7F241E04u: goto label_7F241E04;
    case 0x7F241E08u: goto label_7F241E08;
    case 0x7F241E0Cu: goto label_7F241E0C;
    case 0x7F241E10u: goto label_7F241E10;
    case 0x7F241E14u: goto label_7F241E14;
    case 0x7F241E18u: goto label_7F241E18;
    case 0x7F241E1Cu: goto label_7F241E1C;
    case 0x7F241E20u: goto label_7F241E20;
    case 0x7F241E24u: goto label_7F241E24;
    case 0x7F241E28u: goto label_7F241E28;
    case 0x7F241E2Cu: goto label_7F241E2C;
    case 0x7F241E30u: goto label_7F241E30;
    case 0x7F241E34u: goto label_7F241E34;
    case 0x7F241E38u: goto label_7F241E38;
    case 0x7F241E3Cu: goto label_7F241E3C;
    case 0x7F241E40u: goto label_7F241E40;
    case 0x7F241E44u: goto label_7F241E44;
    case 0x7F241E48u: goto label_7F241E48;
    case 0x7F241E4Cu: goto label_7F241E4C;
    case 0x7F241E50u: goto label_7F241E50;
    case 0x7F241E54u: goto label_7F241E54;
    case 0x7F241E58u: goto label_7F241E58;
    case 0x7F241E5Cu: goto label_7F241E5C;
    case 0x7F241E60u: goto label_7F241E60;
    case 0x7F241E64u: goto label_7F241E64;
    case 0x7F241E68u: goto label_7F241E68;
    case 0x7F241E6Cu: goto label_7F241E6C;
    case 0x7F241E70u: goto label_7F241E70;
    case 0x7F241E74u: goto label_7F241E74;
    case 0x7F241E78u: goto label_7F241E78;
    case 0x7F241E7Cu: goto label_7F241E7C;
    case 0x7F241E80u: goto label_7F241E80;
    case 0x7F241E84u: goto label_7F241E84;
    case 0x7F241E88u: goto label_7F241E88;
    case 0x7F241E8Cu: goto label_7F241E8C;
    case 0x7F241E90u: goto label_7F241E90;
    case 0x7F241E94u: goto label_7F241E94;
    case 0x7F241E98u: goto label_7F241E98;
    case 0x7F241E9Cu: goto label_7F241E9C;
    case 0x7F241EA0u: goto label_7F241EA0;
    case 0x7F241EA4u: goto label_7F241EA4;
    case 0x7F241EA8u: goto label_7F241EA8;
    case 0x7F241EACu: goto label_7F241EAC;
    case 0x7F241EB0u: goto label_7F241EB0;
    case 0x7F241EB4u: goto label_7F241EB4;
    case 0x7F241EB8u: goto label_7F241EB8;
    case 0x7F241EBCu: goto label_7F241EBC;
    case 0x7F241EC0u: goto label_7F241EC0;
    case 0x7F241EC4u: goto label_7F241EC4;
    case 0x7F241EC8u: goto label_7F241EC8;
    case 0x7F241ECCu: goto label_7F241ECC;
    case 0x7F241ED0u: goto label_7F241ED0;
    case 0x7F241ED4u: goto label_7F241ED4;
    case 0x7F241ED8u: goto label_7F241ED8;
    case 0x7F241EDCu: goto label_7F241EDC;
    case 0x7F241EE0u: goto label_7F241EE0;
    case 0x7F241EE4u: goto label_7F241EE4;
    case 0x7F241EE8u: goto label_7F241EE8;
    case 0x7F241EECu: goto label_7F241EEC;
    case 0x7F241EF0u: goto label_7F241EF0;
    case 0x7F241EF4u: goto label_7F241EF4;
    case 0x7F241EF8u: goto label_7F241EF8;
    case 0x7F241EFCu: goto label_7F241EFC;
    case 0x7F241F00u: goto label_7F241F00;
    case 0x7F241F04u: goto label_7F241F04;
    case 0x7F241F08u: goto label_7F241F08;
    case 0x7F241F0Cu: goto label_7F241F0C;
    case 0x7F241F10u: goto label_7F241F10;
    case 0x7F241F14u: goto label_7F241F14;
    case 0x7F241F18u: goto label_7F241F18;
    case 0x7F241F1Cu: goto label_7F241F1C;
    case 0x7F241F20u: goto label_7F241F20;
    case 0x7F241F24u: goto label_7F241F24;
    case 0x7F241F28u: goto label_7F241F28;
    case 0x7F241F2Cu: goto label_7F241F2C;
    case 0x7F241F30u: goto label_7F241F30;
    case 0x7F241F34u: goto label_7F241F34;
    case 0x7F241F38u: goto label_7F241F38;
    case 0x7F241F3Cu: goto label_7F241F3C;
    case 0x7F241F40u: goto label_7F241F40;
    case 0x7F241F44u: goto label_7F241F44;
    case 0x7F241F48u: goto label_7F241F48;
    case 0x7F241F4Cu: goto label_7F241F4C;
    case 0x7F241F50u: goto label_7F241F50;
    case 0x7F241F54u: goto label_7F241F54;
    case 0x7F241F58u: goto label_7F241F58;
    case 0x7F241F5Cu: goto label_7F241F5C;
    case 0x7F241F60u: goto label_7F241F60;
    case 0x7F241F64u: goto label_7F241F64;
    case 0x7F241F68u: goto label_7F241F68;
    case 0x7F241F6Cu: goto label_7F241F6C;
    case 0x7F241F70u: goto label_7F241F70;
    case 0x7F241F74u: goto label_7F241F74;
    case 0x7F241F78u: goto label_7F241F78;
    case 0x7F241F7Cu: goto label_7F241F7C;
    case 0x7F241F80u: goto label_7F241F80;
    case 0x7F241F84u: goto label_7F241F84;
    case 0x7F241F88u: goto label_7F241F88;
    case 0x7F241F8Cu: goto label_7F241F8C;
    case 0x7F241F90u: goto label_7F241F90;
    case 0x7F241F94u: goto label_7F241F94;
    case 0x7F241F98u: goto label_7F241F98;
    case 0x7F241F9Cu: goto label_7F241F9C;
    case 0x7F241FA0u: goto label_7F241FA0;
    case 0x7F241FA4u: goto label_7F241FA4;
    case 0x7F241FA8u: goto label_7F241FA8;
    case 0x7F241FACu: goto label_7F241FAC;
    case 0x7F241FB0u: goto label_7F241FB0;
    case 0x7F241FB4u: goto label_7F241FB4;
    case 0x7F241FB8u: goto label_7F241FB8;
    case 0x7F241FBCu: goto label_7F241FBC;
    case 0x7F241FC0u: goto label_7F241FC0;
    case 0x7F241FC4u: goto label_7F241FC4;
    case 0x7F241FC8u: goto label_7F241FC8;
    case 0x7F241FCCu: goto label_7F241FCC;
    case 0x7F241FD0u: goto label_7F241FD0;
    case 0x7F241FD4u: goto label_7F241FD4;
    case 0x7F241FD8u: goto label_7F241FD8;
    case 0x7F241FDCu: goto label_7F241FDC;
    case 0x7F241FE0u: goto label_7F241FE0;
    case 0x7F241FE4u: goto label_7F241FE4;
    case 0x7F241FE8u: goto label_7F241FE8;
    case 0x7F241FECu: goto label_7F241FEC;
    case 0x7F241FF0u: goto label_7F241FF0;
    case 0x7F241FF4u: goto label_7F241FF4;
    case 0x7F241FF8u: goto label_7F241FF8;
    case 0x7F241FFCu: goto label_7F241FFC;
    case 0x7F242000u: goto label_7F242000;
    case 0x7F242004u: goto label_7F242004;
    case 0x7F242008u: goto label_7F242008;
    case 0x7F24200Cu: goto label_7F24200C;
    case 0x7F242010u: goto label_7F242010;
    case 0x7F242014u: goto label_7F242014;
    case 0x7F242018u: goto label_7F242018;
    case 0x7F24201Cu: goto label_7F24201C;
    case 0x7F242020u: goto label_7F242020;
    case 0x7F242024u: goto label_7F242024;
    case 0x7F242028u: goto label_7F242028;
    case 0x7F24202Cu: goto label_7F24202C;
    case 0x7F242030u: goto label_7F242030;
    case 0x7F242034u: goto label_7F242034;
    case 0x7F242038u: goto label_7F242038;
    case 0x7F24203Cu: goto label_7F24203C;
    case 0x7F242040u: goto label_7F242040;
    case 0x7F242044u: goto label_7F242044;
    case 0x7F242048u: goto label_7F242048;
    case 0x7F24204Cu: goto label_7F24204C;
    case 0x7F242050u: goto label_7F242050;
    case 0x7F242054u: goto label_7F242054;
    case 0x7F242058u: goto label_7F242058;
    case 0x7F24205Cu: goto label_7F24205C;
    case 0x7F242060u: goto label_7F242060;
    case 0x7F242064u: goto label_7F242064;
    case 0x7F242068u: goto label_7F242068;
    case 0x7F24206Cu: goto label_7F24206C;
    case 0x7F242070u: goto label_7F242070;
    case 0x7F242074u: goto label_7F242074;
    case 0x7F242078u: goto label_7F242078;
    case 0x7F24207Cu: goto label_7F24207C;
    case 0x7F242080u: goto label_7F242080;
    case 0x7F242084u: goto label_7F242084;
    case 0x7F242088u: goto label_7F242088;
    case 0x7F24208Cu: goto label_7F24208C;
    case 0x7F242090u: goto label_7F242090;
    case 0x7F242094u: goto label_7F242094;
    case 0x7F242098u: goto label_7F242098;
    case 0x7F24209Cu: goto label_7F24209C;
    case 0x7F2420A0u: goto label_7F2420A0;
    case 0x7F2420A4u: goto label_7F2420A4;
    case 0x7F2420A8u: goto label_7F2420A8;
    case 0x7F2420ACu: goto label_7F2420AC;
    case 0x7F2420B0u: goto label_7F2420B0;
    case 0x7F2420B4u: goto label_7F2420B4;
    case 0x7F2420B8u: goto label_7F2420B8;
    case 0x7F2420BCu: goto label_7F2420BC;
    case 0x7F2420C0u: goto label_7F2420C0;
    case 0x7F2420C4u: goto label_7F2420C4;
    case 0x7F2420C8u: goto label_7F2420C8;
    case 0x7F2420CCu: goto label_7F2420CC;
    case 0x7F2420D0u: goto label_7F2420D0;
    case 0x7F2420D4u: goto label_7F2420D4;
    case 0x7F2420D8u: goto label_7F2420D8;
    case 0x7F2420DCu: goto label_7F2420DC;
    case 0x7F2420E0u: goto label_7F2420E0;
    case 0x7F2420E4u: goto label_7F2420E4;
    case 0x7F2420E8u: goto label_7F2420E8;
    case 0x7F2420ECu: goto label_7F2420EC;
    case 0x7F2420F0u: goto label_7F2420F0;
    case 0x7F2420F4u: goto label_7F2420F4;
    case 0x7F2420F8u: goto label_7F2420F8;
    case 0x7F2420FCu: goto label_7F2420FC;
    case 0x7F242100u: goto label_7F242100;
    case 0x7F242104u: goto label_7F242104;
    case 0x7F242108u: goto label_7F242108;
    case 0x7F24210Cu: goto label_7F24210C;
    case 0x7F242110u: goto label_7F242110;
    case 0x7F242114u: goto label_7F242114;
    case 0x7F242118u: goto label_7F242118;
    case 0x7F24211Cu: goto label_7F24211C;
    case 0x7F242120u: goto label_7F242120;
    case 0x7F242124u: goto label_7F242124;
    case 0x7F242128u: goto label_7F242128;
    case 0x7F24212Cu: goto label_7F24212C;
    case 0x7F242130u: goto label_7F242130;
    case 0x7F242134u: goto label_7F242134;
    case 0x7F242138u: goto label_7F242138;
    case 0x7F24213Cu: goto label_7F24213C;
    case 0x7F242140u: goto label_7F242140;
    case 0x7F242144u: goto label_7F242144;
    case 0x7F242148u: goto label_7F242148;
    case 0x7F24214Cu: goto label_7F24214C;
    case 0x7F242150u: goto label_7F242150;
    case 0x7F242154u: goto label_7F242154;
    case 0x7F242158u: goto label_7F242158;
    case 0x7F24215Cu: goto label_7F24215C;
    case 0x7F242160u: goto label_7F242160;
    case 0x7F242164u: goto label_7F242164;
    case 0x7F242168u: goto label_7F242168;
    case 0x7F24216Cu: goto label_7F24216C;
    case 0x7F242170u: goto label_7F242170;
    case 0x7F242174u: goto label_7F242174;
    case 0x7F242178u: goto label_7F242178;
    case 0x7F24217Cu: goto label_7F24217C;
    case 0x7F242180u: goto label_7F242180;
    case 0x7F242184u: goto label_7F242184;
    case 0x7F242188u: goto label_7F242188;
    case 0x7F24218Cu: goto label_7F24218C;
    case 0x7F242190u: goto label_7F242190;
    case 0x7F242194u: goto label_7F242194;
    case 0x7F242198u: goto label_7F242198;
    case 0x7F24219Cu: goto label_7F24219C;
    case 0x7F2421A0u: goto label_7F2421A0;
    case 0x7F2421A4u: goto label_7F2421A4;
    case 0x7F2421A8u: goto label_7F2421A8;
    case 0x7F2421ACu: goto label_7F2421AC;
    case 0x7F2421B0u: goto label_7F2421B0;
    case 0x7F2421B4u: goto label_7F2421B4;
    case 0x7F2421B8u: goto label_7F2421B8;
    case 0x7F2421BCu: goto label_7F2421BC;
    case 0x7F2421C0u: goto label_7F2421C0;
    case 0x7F2421C4u: goto label_7F2421C4;
    case 0x7F2421C8u: goto label_7F2421C8;
    case 0x7F2421CCu: goto label_7F2421CC;
    case 0x7F2421D0u: goto label_7F2421D0;
    case 0x7F2421D4u: goto label_7F2421D4;
    case 0x7F2421D8u: goto label_7F2421D8;
    case 0x7F2421DCu: goto label_7F2421DC;
    case 0x7F2421E0u: goto label_7F2421E0;
    case 0x7F2421E4u: goto label_7F2421E4;
    case 0x7F2421E8u: goto label_7F2421E8;
    case 0x7F2421ECu: goto label_7F2421EC;
    case 0x7F2421F0u: goto label_7F2421F0;
    case 0x7F2421F4u: goto label_7F2421F4;
    case 0x7F2421F8u: goto label_7F2421F8;
    case 0x7F2421FCu: goto label_7F2421FC;
    case 0x7F242200u: goto label_7F242200;
    case 0x7F242204u: goto label_7F242204;
    case 0x7F242208u: goto label_7F242208;
    case 0x7F24220Cu: goto label_7F24220C;
    case 0x7F242210u: goto label_7F242210;
    case 0x7F242214u: goto label_7F242214;
    case 0x7F242218u: goto label_7F242218;
    case 0x7F24221Cu: goto label_7F24221C;
    case 0x7F242220u: goto label_7F242220;
    case 0x7F242224u: goto label_7F242224;
    case 0x7F242228u: goto label_7F242228;
    case 0x7F24222Cu: goto label_7F24222C;
    case 0x7F242230u: goto label_7F242230;
    case 0x7F242234u: goto label_7F242234;
    case 0x7F242238u: goto label_7F242238;
    case 0x7F24223Cu: goto label_7F24223C;
    case 0x7F242240u: goto label_7F242240;
    case 0x7F242244u: goto label_7F242244;
    case 0x7F242248u: goto label_7F242248;
    case 0x7F24224Cu: goto label_7F24224C;
    case 0x7F242250u: goto label_7F242250;
    case 0x7F242254u: goto label_7F242254;
    case 0x7F242258u: goto label_7F242258;
    case 0x7F24225Cu: goto label_7F24225C;
    case 0x7F242260u: goto label_7F242260;
    case 0x7F242264u: goto label_7F242264;
    case 0x7F242268u: goto label_7F242268;
    case 0x7F24226Cu: goto label_7F24226C;
    case 0x7F242270u: goto label_7F242270;
    case 0x7F242274u: goto label_7F242274;
    case 0x7F242278u: goto label_7F242278;
    case 0x7F24227Cu: goto label_7F24227C;
    case 0x7F242280u: goto label_7F242280;
    case 0x7F242284u: goto label_7F242284;
    case 0x7F242288u: goto label_7F242288;
    case 0x7F24228Cu: goto label_7F24228C;
    case 0x7F242290u: goto label_7F242290;
    case 0x7F242294u: goto label_7F242294;
    case 0x7F242298u: goto label_7F242298;
    case 0x7F24229Cu: goto label_7F24229C;
    case 0x7F2422A0u: goto label_7F2422A0;
    case 0x7F2422A4u: goto label_7F2422A4;
    case 0x7F2422A8u: goto label_7F2422A8;
    case 0x7F2422ACu: goto label_7F2422AC;
    case 0x7F2422B0u: goto label_7F2422B0;
    case 0x7F2422B4u: goto label_7F2422B4;
    case 0x7F2422B8u: goto label_7F2422B8;
    case 0x7F2422BCu: goto label_7F2422BC;
    case 0x7F2422C0u: goto label_7F2422C0;
    case 0x7F2422C4u: goto label_7F2422C4;
    case 0x7F2422C8u: goto label_7F2422C8;
    case 0x7F2422CCu: goto label_7F2422CC;
    case 0x7F2422D0u: goto label_7F2422D0;
    case 0x7F2422D4u: goto label_7F2422D4;
    case 0x7F2422D8u: goto label_7F2422D8;
    case 0x7F2422DCu: goto label_7F2422DC;
    case 0x7F2422E0u: goto label_7F2422E0;
    case 0x7F2422E4u: goto label_7F2422E4;
    case 0x7F2422E8u: goto label_7F2422E8;
    case 0x7F2422ECu: goto label_7F2422EC;
    case 0x7F2422F0u: goto label_7F2422F0;
    case 0x7F2422F4u: goto label_7F2422F4;
    case 0x7F2422F8u: goto label_7F2422F8;
    case 0x7F2422FCu: goto label_7F2422FC;
    case 0x7F242300u: goto label_7F242300;
    case 0x7F242304u: goto label_7F242304;
    case 0x7F242308u: goto label_7F242308;
    case 0x7F24230Cu: goto label_7F24230C;
    case 0x7F242310u: goto label_7F242310;
    case 0x7F242314u: goto label_7F242314;
    case 0x7F242318u: goto label_7F242318;
    case 0x7F24231Cu: goto label_7F24231C;
    case 0x7F242320u: goto label_7F242320;
    case 0x7F242324u: goto label_7F242324;
    case 0x7F242328u: goto label_7F242328;
    case 0x7F24232Cu: goto label_7F24232C;
    case 0x7F242330u: goto label_7F242330;
    case 0x7F242334u: goto label_7F242334;
    case 0x7F242338u: goto label_7F242338;
    case 0x7F24233Cu: goto label_7F24233C;
    case 0x7F242340u: goto label_7F242340;
    case 0x7F242344u: goto label_7F242344;
    case 0x7F242348u: goto label_7F242348;
    case 0x7F24234Cu: goto label_7F24234C;
    case 0x7F242350u: goto label_7F242350;
    case 0x7F242354u: goto label_7F242354;
    case 0x7F242358u: goto label_7F242358;
    case 0x7F24235Cu: goto label_7F24235C;
    case 0x7F242360u: goto label_7F242360;
    case 0x7F242364u: goto label_7F242364;
    case 0x7F242368u: goto label_7F242368;
    case 0x7F24236Cu: goto label_7F24236C;
    case 0x7F242370u: goto label_7F242370;
    case 0x7F242374u: goto label_7F242374;
    case 0x7F242378u: goto label_7F242378;
    case 0x7F24237Cu: goto label_7F24237C;
    case 0x7F242380u: goto label_7F242380;
    case 0x7F242384u: goto label_7F242384;
    case 0x7F242388u: goto label_7F242388;
    case 0x7F24238Cu: goto label_7F24238C;
    case 0x7F242390u: goto label_7F242390;
    case 0x7F242394u: goto label_7F242394;
    case 0x7F242398u: goto label_7F242398;
    case 0x7F24239Cu: goto label_7F24239C;
    case 0x7F2423A0u: goto label_7F2423A0;
    case 0x7F2423A4u: goto label_7F2423A4;
    case 0x7F2423A8u: goto label_7F2423A8;
    case 0x7F2423ACu: goto label_7F2423AC;
    case 0x7F2423B0u: goto label_7F2423B0;
    case 0x7F2423B4u: goto label_7F2423B4;
    case 0x7F2423B8u: goto label_7F2423B8;
    case 0x7F2423BCu: goto label_7F2423BC;
    case 0x7F2423C0u: goto label_7F2423C0;
    case 0x7F2423C4u: goto label_7F2423C4;
    case 0x7F2423C8u: goto label_7F2423C8;
    case 0x7F2423CCu: goto label_7F2423CC;
    case 0x7F2423D0u: goto label_7F2423D0;
    case 0x7F2423D4u: goto label_7F2423D4;
    case 0x7F2423D8u: goto label_7F2423D8;
    case 0x7F2423DCu: goto label_7F2423DC;
    case 0x7F2423E0u: goto label_7F2423E0;
    case 0x7F2423E4u: goto label_7F2423E4;
    case 0x7F2423E8u: goto label_7F2423E8;
    case 0x7F2423ECu: goto label_7F2423EC;
    case 0x7F2423F0u: goto label_7F2423F0;
    case 0x7F2423F4u: goto label_7F2423F4;
    case 0x7F2423F8u: goto label_7F2423F8;
    case 0x7F2423FCu: goto label_7F2423FC;
    case 0x7F242400u: goto label_7F242400;
    case 0x7F242404u: goto label_7F242404;
    case 0x7F242408u: goto label_7F242408;
    case 0x7F24240Cu: goto label_7F24240C;
    case 0x7F242410u: goto label_7F242410;
    case 0x7F242414u: goto label_7F242414;
    case 0x7F242418u: goto label_7F242418;
    case 0x7F24241Cu: goto label_7F24241C;
    case 0x7F242420u: goto label_7F242420;
    case 0x7F242424u: goto label_7F242424;
    case 0x7F242428u: goto label_7F242428;
    case 0x7F24242Cu: goto label_7F24242C;
    case 0x7F242430u: goto label_7F242430;
    case 0x7F242434u: goto label_7F242434;
    case 0x7F242438u: goto label_7F242438;
    case 0x7F24243Cu: goto label_7F24243C;
    case 0x7F242440u: goto label_7F242440;
    case 0x7F242444u: goto label_7F242444;
    case 0x7F242448u: goto label_7F242448;
    case 0x7F24244Cu: goto label_7F24244C;
    case 0x7F242450u: goto label_7F242450;
    case 0x7F242454u: goto label_7F242454;
    case 0x7F242458u: goto label_7F242458;
    case 0x7F24245Cu: goto label_7F24245C;
    case 0x7F242460u: goto label_7F242460;
    case 0x7F242464u: goto label_7F242464;
    case 0x7F242468u: goto label_7F242468;
    case 0x7F24246Cu: goto label_7F24246C;
    case 0x7F242470u: goto label_7F242470;
    case 0x7F242474u: goto label_7F242474;
    case 0x7F242478u: goto label_7F242478;
    case 0x7F24247Cu: goto label_7F24247C;
    case 0x7F242480u: goto label_7F242480;
    case 0x7F242484u: goto label_7F242484;
    case 0x7F242488u: goto label_7F242488;
    case 0x7F24248Cu: goto label_7F24248C;
    case 0x7F242490u: goto label_7F242490;
    case 0x7F242494u: goto label_7F242494;
    case 0x7F242498u: goto label_7F242498;
    case 0x7F24249Cu: goto label_7F24249C;
    case 0x7F2424A0u: goto label_7F2424A0;
    case 0x7F2424A4u: goto label_7F2424A4;
    case 0x7F2424A8u: goto label_7F2424A8;
    case 0x7F2424ACu: goto label_7F2424AC;
    case 0x7F2424B0u: goto label_7F2424B0;
    case 0x7F2424B4u: goto label_7F2424B4;
    case 0x7F2424B8u: goto label_7F2424B8;
    case 0x7F2424BCu: goto label_7F2424BC;
    case 0x7F2424C0u: goto label_7F2424C0;
    case 0x7F2424C4u: goto label_7F2424C4;
    case 0x7F2424C8u: goto label_7F2424C8;
    case 0x7F2424CCu: goto label_7F2424CC;
    case 0x7F2424D0u: goto label_7F2424D0;
    case 0x7F2424D4u: goto label_7F2424D4;
    case 0x7F2424D8u: goto label_7F2424D8;
    case 0x7F2424DCu: goto label_7F2424DC;
    case 0x7F2424E0u: goto label_7F2424E0;
    case 0x7F2424E4u: goto label_7F2424E4;
    case 0x7F2424E8u: goto label_7F2424E8;
    case 0x7F2424ECu: goto label_7F2424EC;
    case 0x7F2424F0u: goto label_7F2424F0;
    case 0x7F2424F4u: goto label_7F2424F4;
    case 0x7F2424F8u: goto label_7F2424F8;
    case 0x7F2424FCu: goto label_7F2424FC;
    case 0x7F242500u: goto label_7F242500;
    case 0x7F242504u: goto label_7F242504;
    case 0x7F242508u: goto label_7F242508;
    case 0x7F24250Cu: goto label_7F24250C;
    case 0x7F242510u: goto label_7F242510;
    case 0x7F242514u: goto label_7F242514;
    case 0x7F242518u: goto label_7F242518;
    case 0x7F24251Cu: goto label_7F24251C;
    case 0x7F242520u: goto label_7F242520;
    case 0x7F242524u: goto label_7F242524;
    case 0x7F242528u: goto label_7F242528;
    case 0x7F24252Cu: goto label_7F24252C;
    case 0x7F242530u: goto label_7F242530;
    case 0x7F242534u: goto label_7F242534;
    case 0x7F242538u: goto label_7F242538;
    case 0x7F24253Cu: goto label_7F24253C;
    case 0x7F242540u: goto label_7F242540;
    case 0x7F242544u: goto label_7F242544;
    case 0x7F242548u: goto label_7F242548;
    case 0x7F24254Cu: goto label_7F24254C;
    case 0x7F242550u: goto label_7F242550;
    case 0x7F242554u: goto label_7F242554;
    case 0x7F242558u: goto label_7F242558;
    case 0x7F24255Cu: goto label_7F24255C;
    case 0x7F242560u: goto label_7F242560;
    case 0x7F242564u: goto label_7F242564;
    case 0x7F242568u: goto label_7F242568;
    case 0x7F24256Cu: goto label_7F24256C;
    case 0x7F242570u: goto label_7F242570;
    case 0x7F242574u: goto label_7F242574;
    case 0x7F242578u: goto label_7F242578;
    case 0x7F24257Cu: goto label_7F24257C;
    case 0x7F242580u: goto label_7F242580;
    case 0x7F242584u: goto label_7F242584;
    case 0x7F242588u: goto label_7F242588;
    case 0x7F24258Cu: goto label_7F24258C;
    case 0x7F242590u: goto label_7F242590;
    case 0x7F242594u: goto label_7F242594;
    case 0x7F242598u: goto label_7F242598;
    case 0x7F24259Cu: goto label_7F24259C;
    case 0x7F2425A0u: goto label_7F2425A0;
    case 0x7F2425A4u: goto label_7F2425A4;
    case 0x7F2425A8u: goto label_7F2425A8;
    case 0x7F2425ACu: goto label_7F2425AC;
    case 0x7F2425B0u: goto label_7F2425B0;
    case 0x7F2425B4u: goto label_7F2425B4;
    case 0x7F2425B8u: goto label_7F2425B8;
    case 0x7F2425BCu: goto label_7F2425BC;
    case 0x7F2425C0u: goto label_7F2425C0;
    case 0x7F2425C4u: goto label_7F2425C4;
    case 0x7F2425C8u: goto label_7F2425C8;
    case 0x7F2425CCu: goto label_7F2425CC;
    case 0x7F2425D0u: goto label_7F2425D0;
    case 0x7F2425D4u: goto label_7F2425D4;
    case 0x7F2425D8u: goto label_7F2425D8;
    case 0x7F2425DCu: goto label_7F2425DC;
    case 0x7F2425E0u: goto label_7F2425E0;
    case 0x7F2425E4u: goto label_7F2425E4;
    case 0x7F2425E8u: goto label_7F2425E8;
    case 0x7F2425ECu: goto label_7F2425EC;
    case 0x7F2425F0u: goto label_7F2425F0;
    case 0x7F2425F4u: goto label_7F2425F4;
    case 0x7F2425F8u: goto label_7F2425F8;
    case 0x7F2425FCu: goto label_7F2425FC;
    case 0x7F242600u: goto label_7F242600;
    case 0x7F242604u: goto label_7F242604;
    case 0x7F242608u: goto label_7F242608;
    case 0x7F24260Cu: goto label_7F24260C;
    case 0x7F242610u: goto label_7F242610;
    case 0x7F242614u: goto label_7F242614;
    case 0x7F242618u: goto label_7F242618;
    case 0x7F24261Cu: goto label_7F24261C;
    case 0x7F242620u: goto label_7F242620;
    case 0x7F242624u: goto label_7F242624;
    case 0x7F242628u: goto label_7F242628;
    case 0x7F24262Cu: goto label_7F24262C;
    case 0x7F242630u: goto label_7F242630;
    case 0x7F242634u: goto label_7F242634;
    case 0x7F242638u: goto label_7F242638;
    case 0x7F24263Cu: goto label_7F24263C;
    case 0x7F242640u: goto label_7F242640;
    case 0x7F242644u: goto label_7F242644;
    case 0x7F242648u: goto label_7F242648;
    case 0x7F24264Cu: goto label_7F24264C;
    case 0x7F242650u: goto label_7F242650;
    case 0x7F242654u: goto label_7F242654;
    case 0x7F242658u: goto label_7F242658;
    case 0x7F24265Cu: goto label_7F24265C;
    case 0x7F242660u: goto label_7F242660;
    case 0x7F242664u: goto label_7F242664;
    case 0x7F242668u: goto label_7F242668;
    case 0x7F24266Cu: goto label_7F24266C;
    case 0x7F242670u: goto label_7F242670;
    case 0x7F242674u: goto label_7F242674;
    case 0x7F242678u: goto label_7F242678;
    case 0x7F24267Cu: goto label_7F24267C;
    case 0x7F242680u: goto label_7F242680;
    case 0x7F242684u: goto label_7F242684;
    case 0x7F242688u: goto label_7F242688;
    case 0x7F24268Cu: goto label_7F24268C;
    case 0x7F242690u: goto label_7F242690;
    case 0x7F242694u: goto label_7F242694;
    case 0x7F242698u: goto label_7F242698;
    case 0x7F24269Cu: goto label_7F24269C;
    case 0x7F2426A0u: goto label_7F2426A0;
    case 0x7F2426A4u: goto label_7F2426A4;
    case 0x7F2426A8u: goto label_7F2426A8;
    case 0x7F2426ACu: goto label_7F2426AC;
    case 0x7F2426B0u: goto label_7F2426B0;
    case 0x7F2426B4u: goto label_7F2426B4;
    case 0x7F2426B8u: goto label_7F2426B8;
    case 0x7F2426BCu: goto label_7F2426BC;
    case 0x7F2426C0u: goto label_7F2426C0;
    case 0x7F2426C4u: goto label_7F2426C4;
    case 0x7F2426C8u: goto label_7F2426C8;
    case 0x7F2426CCu: goto label_7F2426CC;
    case 0x7F2426D0u: goto label_7F2426D0;
    case 0x7F2426D4u: goto label_7F2426D4;
    case 0x7F2426D8u: goto label_7F2426D8;
    case 0x7F2426DCu: goto label_7F2426DC;
    case 0x7F2426E0u: goto label_7F2426E0;
    case 0x7F2426E4u: goto label_7F2426E4;
    case 0x7F2426E8u: goto label_7F2426E8;
    case 0x7F2426ECu: goto label_7F2426EC;
    case 0x7F2426F0u: goto label_7F2426F0;
    case 0x7F2426F4u: goto label_7F2426F4;
    case 0x7F2426F8u: goto label_7F2426F8;
    case 0x7F2426FCu: goto label_7F2426FC;
    case 0x7F242700u: goto label_7F242700;
    case 0x7F242704u: goto label_7F242704;
    case 0x7F242708u: goto label_7F242708;
    case 0x7F24270Cu: goto label_7F24270C;
    case 0x7F242710u: goto label_7F242710;
    case 0x7F242714u: goto label_7F242714;
    case 0x7F242718u: goto label_7F242718;
    case 0x7F24271Cu: goto label_7F24271C;
    case 0x7F242720u: goto label_7F242720;
    case 0x7F242724u: goto label_7F242724;
    case 0x7F242728u: goto label_7F242728;
    case 0x7F24272Cu: goto label_7F24272C;
    case 0x7F242730u: goto label_7F242730;
    case 0x7F242734u: goto label_7F242734;
    case 0x7F242738u: goto label_7F242738;
    case 0x7F24273Cu: goto label_7F24273C;
    case 0x7F242740u: goto label_7F242740;
    case 0x7F242744u: goto label_7F242744;
    case 0x7F242748u: goto label_7F242748;
    case 0x7F24274Cu: goto label_7F24274C;
    case 0x7F242750u: goto label_7F242750;
    case 0x7F242754u: goto label_7F242754;
    case 0x7F242758u: goto label_7F242758;
    case 0x7F24275Cu: goto label_7F24275C;
    case 0x7F242760u: goto label_7F242760;
    case 0x7F242764u: goto label_7F242764;
    case 0x7F242768u: goto label_7F242768;
    case 0x7F24276Cu: goto label_7F24276C;
    case 0x7F242770u: goto label_7F242770;
    case 0x7F242774u: goto label_7F242774;
    case 0x7F242778u: goto label_7F242778;
    case 0x7F24277Cu: goto label_7F24277C;
    case 0x7F242780u: goto label_7F242780;
    case 0x7F242784u: goto label_7F242784;
    case 0x7F242788u: goto label_7F242788;
    case 0x7F24278Cu: goto label_7F24278C;
    case 0x7F242790u: goto label_7F242790;
    case 0x7F242794u: goto label_7F242794;
    case 0x7F242798u: goto label_7F242798;
    case 0x7F24279Cu: goto label_7F24279C;
    case 0x7F2427A0u: goto label_7F2427A0;
    case 0x7F2427A4u: goto label_7F2427A4;
    case 0x7F2427A8u: goto label_7F2427A8;
    case 0x7F2427ACu: goto label_7F2427AC;
    case 0x7F2427B0u: goto label_7F2427B0;
    case 0x7F2427B4u: goto label_7F2427B4;
    case 0x7F2427B8u: goto label_7F2427B8;
    case 0x7F2427BCu: goto label_7F2427BC;
    case 0x7F2427C0u: goto label_7F2427C0;
    case 0x7F2427C4u: goto label_7F2427C4;
    case 0x7F2427C8u: goto label_7F2427C8;
    case 0x7F2427CCu: goto label_7F2427CC;
    case 0x7F2427D0u: goto label_7F2427D0;
    case 0x7F2427D4u: goto label_7F2427D4;
    case 0x7F2427D8u: goto label_7F2427D8;
    case 0x7F2427DCu: goto label_7F2427DC;
    case 0x7F2427E0u: goto label_7F2427E0;
    case 0x7F2427E4u: goto label_7F2427E4;
    case 0x7F2427E8u: goto label_7F2427E8;
    case 0x7F2427ECu: goto label_7F2427EC;
    case 0x7F2427F0u: goto label_7F2427F0;
    case 0x7F2427F4u: goto label_7F2427F4;
    case 0x7F2427F8u: goto label_7F2427F8;
    case 0x7F2427FCu: goto label_7F2427FC;
    case 0x7F242800u: goto label_7F242800;
    case 0x7F242804u: goto label_7F242804;
    case 0x7F242808u: goto label_7F242808;
    case 0x7F24280Cu: goto label_7F24280C;
    case 0x7F242810u: goto label_7F242810;
    case 0x7F242814u: goto label_7F242814;
    case 0x7F242818u: goto label_7F242818;
    case 0x7F24281Cu: goto label_7F24281C;
    case 0x7F242820u: goto label_7F242820;
    case 0x7F242824u: goto label_7F242824;
    case 0x7F242828u: goto label_7F242828;
    case 0x7F24282Cu: goto label_7F24282C;
    case 0x7F242830u: goto label_7F242830;
    case 0x7F242834u: goto label_7F242834;
    case 0x7F242838u: goto label_7F242838;
    case 0x7F24283Cu: goto label_7F24283C;
    case 0x7F242840u: goto label_7F242840;
    case 0x7F242844u: goto label_7F242844;
    case 0x7F242848u: goto label_7F242848;
    case 0x7F24284Cu: goto label_7F24284C;
    case 0x7F242850u: goto label_7F242850;
    case 0x7F242854u: goto label_7F242854;
    case 0x7F242858u: goto label_7F242858;
    case 0x7F24285Cu: goto label_7F24285C;
    case 0x7F242860u: goto label_7F242860;
    case 0x7F242864u: goto label_7F242864;
    case 0x7F242868u: goto label_7F242868;
    case 0x7F24286Cu: goto label_7F24286C;
    case 0x7F242870u: goto label_7F242870;
    case 0x7F242874u: goto label_7F242874;
    case 0x7F242878u: goto label_7F242878;
    case 0x7F24287Cu: goto label_7F24287C;
    case 0x7F242880u: goto label_7F242880;
    case 0x7F242884u: goto label_7F242884;
    case 0x7F242888u: goto label_7F242888;
    case 0x7F24288Cu: goto label_7F24288C;
    case 0x7F242890u: goto label_7F242890;
    case 0x7F242894u: goto label_7F242894;
    case 0x7F242898u: goto label_7F242898;
    case 0x7F24289Cu: goto label_7F24289C;
    case 0x7F2428A0u: goto label_7F2428A0;
    case 0x7F2428A4u: goto label_7F2428A4;
    case 0x7F2428A8u: goto label_7F2428A8;
    case 0x7F2428ACu: goto label_7F2428AC;
    case 0x7F2428B0u: goto label_7F2428B0;
    case 0x7F2428B4u: goto label_7F2428B4;
    case 0x7F2428B8u: goto label_7F2428B8;
    case 0x7F2428BCu: goto label_7F2428BC;
    case 0x7F2428C0u: goto label_7F2428C0;
    case 0x7F2428C4u: goto label_7F2428C4;
    case 0x7F2428C8u: goto label_7F2428C8;
    case 0x7F2428CCu: goto label_7F2428CC;
    case 0x7F2428D0u: goto label_7F2428D0;
    case 0x7F2428D4u: goto label_7F2428D4;
    case 0x7F2428D8u: goto label_7F2428D8;
    case 0x7F2428DCu: goto label_7F2428DC;
    case 0x7F2428E0u: goto label_7F2428E0;
    case 0x7F2428E4u: goto label_7F2428E4;
    case 0x7F2428E8u: goto label_7F2428E8;
    case 0x7F2428ECu: goto label_7F2428EC;
    case 0x7F2428F0u: goto label_7F2428F0;
    case 0x7F2428F4u: goto label_7F2428F4;
    case 0x7F2428F8u: goto label_7F2428F8;
    case 0x7F2428FCu: goto label_7F2428FC;
    case 0x7F242900u: goto label_7F242900;
    case 0x7F242904u: goto label_7F242904;
    case 0x7F242908u: goto label_7F242908;
    case 0x7F24290Cu: goto label_7F24290C;
    case 0x7F242910u: goto label_7F242910;
    case 0x7F242914u: goto label_7F242914;
    case 0x7F242918u: goto label_7F242918;
    case 0x7F24291Cu: goto label_7F24291C;
    case 0x7F242920u: goto label_7F242920;
    case 0x7F242924u: goto label_7F242924;
    case 0x7F242928u: goto label_7F242928;
    case 0x7F24292Cu: goto label_7F24292C;
    case 0x7F242930u: goto label_7F242930;
    case 0x7F242934u: goto label_7F242934;
    case 0x7F242938u: goto label_7F242938;
    case 0x7F24293Cu: goto label_7F24293C;
    case 0x7F242940u: goto label_7F242940;
    case 0x7F242944u: goto label_7F242944;
    case 0x7F242948u: goto label_7F242948;
    case 0x7F24294Cu: goto label_7F24294C;
    case 0x7F242950u: goto label_7F242950;
    case 0x7F242954u: goto label_7F242954;
    case 0x7F242958u: goto label_7F242958;
    case 0x7F24295Cu: goto label_7F24295C;
    case 0x7F242960u: goto label_7F242960;
    case 0x7F242964u: goto label_7F242964;
    case 0x7F242968u: goto label_7F242968;
    case 0x7F24296Cu: goto label_7F24296C;
    case 0x7F242970u: goto label_7F242970;
    case 0x7F242974u: goto label_7F242974;
    case 0x7F242978u: goto label_7F242978;
    case 0x7F24297Cu: goto label_7F24297C;
    case 0x7F242980u: goto label_7F242980;
    case 0x7F242984u: goto label_7F242984;
    case 0x7F242988u: goto label_7F242988;
    case 0x7F24298Cu: goto label_7F24298C;
    case 0x7F242990u: goto label_7F242990;
    case 0x7F242994u: goto label_7F242994;
    case 0x7F242998u: goto label_7F242998;
    case 0x7F24299Cu: goto label_7F24299C;
    case 0x7F2429A0u: goto label_7F2429A0;
    case 0x7F2429A4u: goto label_7F2429A4;
    case 0x7F2429A8u: goto label_7F2429A8;
    case 0x7F2429ACu: goto label_7F2429AC;
    case 0x7F2429B0u: goto label_7F2429B0;
    case 0x7F2429B4u: goto label_7F2429B4;
    case 0x7F2429B8u: goto label_7F2429B8;
    case 0x7F2429BCu: goto label_7F2429BC;
    case 0x7F2429C0u: goto label_7F2429C0;
    case 0x7F2429C4u: goto label_7F2429C4;
    case 0x7F2429C8u: goto label_7F2429C8;
    case 0x7F2429CCu: goto label_7F2429CC;
    case 0x7F2429D0u: goto label_7F2429D0;
    case 0x7F2429D4u: goto label_7F2429D4;
    case 0x7F2429D8u: goto label_7F2429D8;
    case 0x7F2429DCu: goto label_7F2429DC;
    case 0x7F2429E0u: goto label_7F2429E0;
    case 0x7F2429E4u: goto label_7F2429E4;
    case 0x7F2429E8u: goto label_7F2429E8;
    case 0x7F2429ECu: goto label_7F2429EC;
    case 0x7F2429F0u: goto label_7F2429F0;
    case 0x7F2429F4u: goto label_7F2429F4;
    case 0x7F2429F8u: goto label_7F2429F8;
    case 0x7F2429FCu: goto label_7F2429FC;
    case 0x7F242A00u: goto label_7F242A00;
    case 0x7F242A04u: goto label_7F242A04;
    case 0x7F242A08u: goto label_7F242A08;
    case 0x7F242A0Cu: goto label_7F242A0C;
    case 0x7F242A10u: goto label_7F242A10;
    case 0x7F242A14u: goto label_7F242A14;
    case 0x7F242A18u: goto label_7F242A18;
    case 0x7F242A1Cu: goto label_7F242A1C;
    case 0x7F242A20u: goto label_7F242A20;
    case 0x7F242A24u: goto label_7F242A24;
    case 0x7F242A28u: goto label_7F242A28;
    case 0x7F242A2Cu: goto label_7F242A2C;
    case 0x7F242A30u: goto label_7F242A30;
    case 0x7F242A34u: goto label_7F242A34;
    case 0x7F242A38u: goto label_7F242A38;
    case 0x7F242A3Cu: goto label_7F242A3C;
    case 0x7F242A40u: goto label_7F242A40;
    case 0x7F242A44u: goto label_7F242A44;
    case 0x7F242A48u: goto label_7F242A48;
    case 0x7F242A4Cu: goto label_7F242A4C;
    case 0x7F242A50u: goto label_7F242A50;
    case 0x7F242A54u: goto label_7F242A54;
    case 0x7F242A58u: goto label_7F242A58;
    case 0x7F242A5Cu: goto label_7F242A5C;
    case 0x7F242A60u: goto label_7F242A60;
    case 0x7F242A64u: goto label_7F242A64;
    case 0x7F242A68u: goto label_7F242A68;
    case 0x7F242A6Cu: goto label_7F242A6C;
    case 0x7F242A70u: goto label_7F242A70;
    case 0x7F242A74u: goto label_7F242A74;
    case 0x7F242A78u: goto label_7F242A78;
    case 0x7F242A7Cu: goto label_7F242A7C;
    case 0x7F242A80u: goto label_7F242A80;
    case 0x7F242A84u: goto label_7F242A84;
    case 0x7F242A88u: goto label_7F242A88;
    case 0x7F242A8Cu: goto label_7F242A8C;
    case 0x7F242A90u: goto label_7F242A90;
    case 0x7F242A94u: goto label_7F242A94;
    case 0x7F242A98u: goto label_7F242A98;
    case 0x7F242A9Cu: goto label_7F242A9C;
    case 0x7F242AA0u: goto label_7F242AA0;
    case 0x7F242AA4u: goto label_7F242AA4;
    case 0x7F242AA8u: goto label_7F242AA8;
    case 0x7F242AACu: goto label_7F242AAC;
    case 0x7F242AB0u: goto label_7F242AB0;
    case 0x7F242AB4u: goto label_7F242AB4;
    case 0x7F242AB8u: goto label_7F242AB8;
    case 0x7F242ABCu: goto label_7F242ABC;
    case 0x7F242AC0u: goto label_7F242AC0;
    case 0x7F242AC4u: goto label_7F242AC4;
    case 0x7F242AC8u: goto label_7F242AC8;
    case 0x7F242ACCu: goto label_7F242ACC;
    case 0x7F242AD0u: goto label_7F242AD0;
    case 0x7F242AD4u: goto label_7F242AD4;
    case 0x7F242AD8u: goto label_7F242AD8;
    case 0x7F242ADCu: goto label_7F242ADC;
    case 0x7F242AE0u: goto label_7F242AE0;
    case 0x7F242AE4u: goto label_7F242AE4;
    case 0x7F242AE8u: goto label_7F242AE8;
    case 0x7F242AECu: goto label_7F242AEC;
    case 0x7F242AF0u: goto label_7F242AF0;
    case 0x7F242AF4u: goto label_7F242AF4;
    case 0x7F242AF8u: goto label_7F242AF8;
    case 0x7F242AFCu: goto label_7F242AFC;
    case 0x7F242B00u: goto label_7F242B00;
    case 0x7F242B04u: goto label_7F242B04;
    case 0x7F242B08u: goto label_7F242B08;
    case 0x7F242B0Cu: goto label_7F242B0C;
    case 0x7F242B10u: goto label_7F242B10;
    case 0x7F242B14u: goto label_7F242B14;
    case 0x7F242B18u: goto label_7F242B18;
    case 0x7F242B1Cu: goto label_7F242B1C;
    case 0x7F242B20u: goto label_7F242B20;
    case 0x7F242B24u: goto label_7F242B24;
    case 0x7F242B28u: goto label_7F242B28;
    case 0x7F242B2Cu: goto label_7F242B2C;
    case 0x7F242B30u: goto label_7F242B30;
    case 0x7F242B34u: goto label_7F242B34;
    case 0x7F242B38u: goto label_7F242B38;
    case 0x7F242B3Cu: goto label_7F242B3C;
    case 0x7F242B40u: goto label_7F242B40;
    case 0x7F242B44u: goto label_7F242B44;
    case 0x7F242B48u: goto label_7F242B48;
    case 0x7F242B4Cu: goto label_7F242B4C;
    case 0x7F242B50u: goto label_7F242B50;
    case 0x7F242B54u: goto label_7F242B54;
    case 0x7F242B58u: goto label_7F242B58;
    case 0x7F242B5Cu: goto label_7F242B5C;
    case 0x7F242B60u: goto label_7F242B60;
    case 0x7F242B64u: goto label_7F242B64;
    case 0x7F242B68u: goto label_7F242B68;
    case 0x7F242B6Cu: goto label_7F242B6C;
    case 0x7F242B70u: goto label_7F242B70;
    case 0x7F242B74u: goto label_7F242B74;
    case 0x7F242B78u: goto label_7F242B78;
    case 0x7F242B7Cu: goto label_7F242B7C;
    case 0x7F242B80u: goto label_7F242B80;
    case 0x7F242B84u: goto label_7F242B84;
    case 0x7F242B88u: goto label_7F242B88;
    case 0x7F242B8Cu: goto label_7F242B8C;
    case 0x7F242B90u: goto label_7F242B90;
    case 0x7F242B94u: goto label_7F242B94;
    case 0x7F242B98u: goto label_7F242B98;
    case 0x7F242B9Cu: goto label_7F242B9C;
    case 0x7F242BA0u: goto label_7F242BA0;
    case 0x7F242BA4u: goto label_7F242BA4;
    case 0x7F242BA8u: goto label_7F242BA8;
    case 0x7F242BACu: goto label_7F242BAC;
    case 0x7F242BB0u: goto label_7F242BB0;
    case 0x7F242BB4u: goto label_7F242BB4;
    case 0x7F242BB8u: goto label_7F242BB8;
    case 0x7F242BBCu: goto label_7F242BBC;
    case 0x7F242BC0u: goto label_7F242BC0;
    case 0x7F242BC4u: goto label_7F242BC4;
    case 0x7F242BC8u: goto label_7F242BC8;
    case 0x7F242BCCu: goto label_7F242BCC;
    case 0x7F242BD0u: goto label_7F242BD0;
    case 0x7F242BD4u: goto label_7F242BD4;
    case 0x7F242BD8u: goto label_7F242BD8;
    case 0x7F242BDCu: goto label_7F242BDC;
    case 0x7F242BE0u: goto label_7F242BE0;
    case 0x7F242BE4u: goto label_7F242BE4;
    case 0x7F242BE8u: goto label_7F242BE8;
    case 0x7F242BECu: goto label_7F242BEC;
    case 0x7F242BF0u: goto label_7F242BF0;
    case 0x7F242BF4u: goto label_7F242BF4;
    case 0x7F242BF8u: goto label_7F242BF8;
    case 0x7F242BFCu: goto label_7F242BFC;
    case 0x7F242C00u: goto label_7F242C00;
    case 0x7F242C04u: goto label_7F242C04;
    case 0x7F242C08u: goto label_7F242C08;
    case 0x7F242C0Cu: goto label_7F242C0C;
    case 0x7F242C10u: goto label_7F242C10;
    case 0x7F242C14u: goto label_7F242C14;
    case 0x7F242C18u: goto label_7F242C18;
    case 0x7F242C1Cu: goto label_7F242C1C;
    case 0x7F242C20u: goto label_7F242C20;
    case 0x7F242C24u: goto label_7F242C24;
    case 0x7F242C28u: goto label_7F242C28;
    case 0x7F242C2Cu: goto label_7F242C2C;
    case 0x7F242C30u: goto label_7F242C30;
    case 0x7F242C34u: goto label_7F242C34;
    case 0x7F242C38u: goto label_7F242C38;
    case 0x7F242C3Cu: goto label_7F242C3C;
    case 0x7F242C40u: goto label_7F242C40;
    case 0x7F242C44u: goto label_7F242C44;
    case 0x7F242C48u: goto label_7F242C48;
    case 0x7F242C4Cu: goto label_7F242C4C;
    case 0x7F242C50u: goto label_7F242C50;
    case 0x7F242C54u: goto label_7F242C54;
    case 0x7F242C58u: goto label_7F242C58;
    case 0x7F242C5Cu: goto label_7F242C5C;
    case 0x7F242C60u: goto label_7F242C60;
    case 0x7F242C64u: goto label_7F242C64;
    case 0x7F242C68u: goto label_7F242C68;
    case 0x7F242C6Cu: goto label_7F242C6C;
    case 0x7F242C70u: goto label_7F242C70;
    case 0x7F242C74u: goto label_7F242C74;
    case 0x7F242C78u: goto label_7F242C78;
    case 0x7F242C7Cu: goto label_7F242C7C;
    case 0x7F242C80u: goto label_7F242C80;
    case 0x7F242C84u: goto label_7F242C84;
    case 0x7F242C88u: goto label_7F242C88;
    case 0x7F242C8Cu: goto label_7F242C8C;
    case 0x7F242C90u: goto label_7F242C90;
    case 0x7F242C94u: goto label_7F242C94;
    case 0x7F242C98u: goto label_7F242C98;
    case 0x7F242C9Cu: goto label_7F242C9C;
    case 0x7F242CA0u: goto label_7F242CA0;
    case 0x7F242CA4u: goto label_7F242CA4;
    case 0x7F242CA8u: goto label_7F242CA8;
    case 0x7F242CACu: goto label_7F242CAC;
    case 0x7F242CB0u: goto label_7F242CB0;
    case 0x7F242CB4u: goto label_7F242CB4;
    case 0x7F242CB8u: goto label_7F242CB8;
    case 0x7F242CBCu: goto label_7F242CBC;
    case 0x7F242CC0u: goto label_7F242CC0;
    case 0x7F242CC4u: goto label_7F242CC4;
    case 0x7F242CC8u: goto label_7F242CC8;
    case 0x7F242CCCu: goto label_7F242CCC;
    case 0x7F242CD0u: goto label_7F242CD0;
    case 0x7F242CD4u: goto label_7F242CD4;
    case 0x7F242CD8u: goto label_7F242CD8;
    case 0x7F242CDCu: goto label_7F242CDC;
    case 0x7F242CE0u: goto label_7F242CE0;
    case 0x7F242CE4u: goto label_7F242CE4;
    case 0x7F242CE8u: goto label_7F242CE8;
    case 0x7F242CECu: goto label_7F242CEC;
    case 0x7F242CF0u: goto label_7F242CF0;
    case 0x7F242CF4u: goto label_7F242CF4;
    case 0x7F242CF8u: goto label_7F242CF8;
    case 0x7F242CFCu: goto label_7F242CFC;
    case 0x7F242D00u: goto label_7F242D00;
    case 0x7F242D04u: goto label_7F242D04;
    case 0x7F242D08u: goto label_7F242D08;
    case 0x7F242D0Cu: goto label_7F242D0C;
    case 0x7F242D10u: goto label_7F242D10;
    case 0x7F242D14u: goto label_7F242D14;
    case 0x7F242D18u: goto label_7F242D18;
    case 0x7F242D1Cu: goto label_7F242D1C;
    case 0x7F242D20u: goto label_7F242D20;
    case 0x7F242D24u: goto label_7F242D24;
    case 0x7F242D28u: goto label_7F242D28;
    case 0x7F242D2Cu: goto label_7F242D2C;
    case 0x7F242D30u: goto label_7F242D30;
    case 0x7F242D34u: goto label_7F242D34;
    case 0x7F242D38u: goto label_7F242D38;
    case 0x7F242D3Cu: goto label_7F242D3C;
    case 0x7F242D40u: goto label_7F242D40;
    case 0x7F242D44u: goto label_7F242D44;
    case 0x7F242D48u: goto label_7F242D48;
    case 0x7F242D4Cu: goto label_7F242D4C;
    case 0x7F242D50u: goto label_7F242D50;
    case 0x7F242D54u: goto label_7F242D54;
    case 0x7F242D58u: goto label_7F242D58;
    case 0x7F242D5Cu: goto label_7F242D5C;
    case 0x7F242D60u: goto label_7F242D60;
    case 0x7F242D64u: goto label_7F242D64;
    case 0x7F242D68u: goto label_7F242D68;
    case 0x7F242D6Cu: goto label_7F242D6C;
    case 0x7F242D70u: goto label_7F242D70;
    case 0x7F242D74u: goto label_7F242D74;
    case 0x7F242D78u: goto label_7F242D78;
    case 0x7F242D7Cu: goto label_7F242D7C;
    case 0x7F242D80u: goto label_7F242D80;
    case 0x7F242D84u: goto label_7F242D84;
    case 0x7F242D88u: goto label_7F242D88;
    case 0x7F242D8Cu: goto label_7F242D8C;
    case 0x7F242D90u: goto label_7F242D90;
    case 0x7F242D94u: goto label_7F242D94;
    case 0x7F242D98u: goto label_7F242D98;
    case 0x7F242D9Cu: goto label_7F242D9C;
    case 0x7F242DA0u: goto label_7F242DA0;
    case 0x7F242DA4u: goto label_7F242DA4;
    case 0x7F242DA8u: goto label_7F242DA8;
    case 0x7F242DACu: goto label_7F242DAC;
    case 0x7F242DB0u: goto label_7F242DB0;
    case 0x7F242DB4u: goto label_7F242DB4;
    case 0x7F242DB8u: goto label_7F242DB8;
    case 0x7F242DBCu: goto label_7F242DBC;
    case 0x7F242DC0u: goto label_7F242DC0;
    case 0x7F242DC4u: goto label_7F242DC4;
    case 0x7F242DC8u: goto label_7F242DC8;
    case 0x7F242DCCu: goto label_7F242DCC;
    case 0x7F242DD0u: goto label_7F242DD0;
    case 0x7F242DD4u: goto label_7F242DD4;
    case 0x7F242DD8u: goto label_7F242DD8;
    case 0x7F242DDCu: goto label_7F242DDC;
    case 0x7F242DE0u: goto label_7F242DE0;
    case 0x7F242DE4u: goto label_7F242DE4;
    case 0x7F242DE8u: goto label_7F242DE8;
    case 0x7F242DECu: goto label_7F242DEC;
    case 0x7F242DF0u: goto label_7F242DF0;
    case 0x7F242DF4u: goto label_7F242DF4;
    case 0x7F242DF8u: goto label_7F242DF8;
    case 0x7F242DFCu: goto label_7F242DFC;
    case 0x7F242E00u: goto label_7F242E00;
    case 0x7F242E04u: goto label_7F242E04;
    case 0x7F242E08u: goto label_7F242E08;
    case 0x7F242E0Cu: goto label_7F242E0C;
    case 0x7F242E10u: goto label_7F242E10;
    case 0x7F242E14u: goto label_7F242E14;
    case 0x7F242E18u: goto label_7F242E18;
    case 0x7F242E1Cu: goto label_7F242E1C;
    case 0x7F242E20u: goto label_7F242E20;
    case 0x7F242E24u: goto label_7F242E24;
    case 0x7F242E28u: goto label_7F242E28;
    case 0x7F242E2Cu: goto label_7F242E2C;
    case 0x7F242E30u: goto label_7F242E30;
    case 0x7F242E34u: goto label_7F242E34;
    case 0x7F242E38u: goto label_7F242E38;
    case 0x7F242E3Cu: goto label_7F242E3C;
    case 0x7F242E40u: goto label_7F242E40;
    case 0x7F242E44u: goto label_7F242E44;
    case 0x7F242E48u: goto label_7F242E48;
    case 0x7F242E4Cu: goto label_7F242E4C;
    case 0x7F242E50u: goto label_7F242E50;
    case 0x7F242E54u: goto label_7F242E54;
    case 0x7F242E58u: goto label_7F242E58;
    case 0x7F242E5Cu: goto label_7F242E5C;
    case 0x7F242E60u: goto label_7F242E60;
    case 0x7F242E64u: goto label_7F242E64;
    case 0x7F242E68u: goto label_7F242E68;
    case 0x7F242E6Cu: goto label_7F242E6C;
    case 0x7F242E70u: goto label_7F242E70;
    case 0x7F242E74u: goto label_7F242E74;
    case 0x7F242E78u: goto label_7F242E78;
    case 0x7F242E7Cu: goto label_7F242E7C;
    case 0x7F242E80u: goto label_7F242E80;
    case 0x7F242E84u: goto label_7F242E84;
    case 0x7F242E88u: goto label_7F242E88;
    case 0x7F242E8Cu: goto label_7F242E8C;
    case 0x7F242E90u: goto label_7F242E90;
    case 0x7F242E94u: goto label_7F242E94;
    case 0x7F242E98u: goto label_7F242E98;
    case 0x7F242E9Cu: goto label_7F242E9C;
    case 0x7F242EA0u: goto label_7F242EA0;
    case 0x7F242EA4u: goto label_7F242EA4;
    case 0x7F242EA8u: goto label_7F242EA8;
    case 0x7F242EACu: goto label_7F242EAC;
    case 0x7F242EB0u: goto label_7F242EB0;
    case 0x7F242EB4u: goto label_7F242EB4;
    case 0x7F242EB8u: goto label_7F242EB8;
    case 0x7F242EBCu: goto label_7F242EBC;
    case 0x7F242EC0u: goto label_7F242EC0;
    case 0x7F242EC4u: goto label_7F242EC4;
    case 0x7F242EC8u: goto label_7F242EC8;
    case 0x7F242ECCu: goto label_7F242ECC;
    case 0x7F242ED0u: goto label_7F242ED0;
    case 0x7F242ED4u: goto label_7F242ED4;
    case 0x7F242ED8u: goto label_7F242ED8;
    case 0x7F242EDCu: goto label_7F242EDC;
    case 0x7F242EE0u: goto label_7F242EE0;
    case 0x7F242EE4u: goto label_7F242EE4;
    case 0x7F242EE8u: goto label_7F242EE8;
    case 0x7F242EECu: goto label_7F242EEC;
    case 0x7F242EF0u: goto label_7F242EF0;
    case 0x7F242EF4u: goto label_7F242EF4;
    case 0x7F242EF8u: goto label_7F242EF8;
    case 0x7F242EFCu: goto label_7F242EFC;
    case 0x7F242F00u: goto label_7F242F00;
    case 0x7F242F04u: goto label_7F242F04;
    case 0x7F242F08u: goto label_7F242F08;
    case 0x7F242F0Cu: goto label_7F242F0C;
    case 0x7F242F10u: goto label_7F242F10;
    case 0x7F242F14u: goto label_7F242F14;
    case 0x7F242F18u: goto label_7F242F18;
    case 0x7F242F1Cu: goto label_7F242F1C;
    case 0x7F242F20u: goto label_7F242F20;
    case 0x7F242F24u: goto label_7F242F24;
    case 0x7F242F28u: goto label_7F242F28;
    case 0x7F242F2Cu: goto label_7F242F2C;
    case 0x7F242F30u: goto label_7F242F30;
    case 0x7F242F34u: goto label_7F242F34;
    case 0x7F242F38u: goto label_7F242F38;
    case 0x7F242F3Cu: goto label_7F242F3C;
    case 0x7F242F40u: goto label_7F242F40;
    case 0x7F242F44u: goto label_7F242F44;
    case 0x7F242F48u: goto label_7F242F48;
    case 0x7F242F4Cu: goto label_7F242F4C;
    case 0x7F242F50u: goto label_7F242F50;
    case 0x7F242F54u: goto label_7F242F54;
    case 0x7F242F58u: goto label_7F242F58;
    case 0x7F242F5Cu: goto label_7F242F5C;
    case 0x7F242F60u: goto label_7F242F60;
    case 0x7F242F64u: goto label_7F242F64;
    case 0x7F242F68u: goto label_7F242F68;
    case 0x7F242F6Cu: goto label_7F242F6C;
    case 0x7F242F70u: goto label_7F242F70;
    case 0x7F242F74u: goto label_7F242F74;
    case 0x7F242F78u: goto label_7F242F78;
    case 0x7F242F7Cu: goto label_7F242F7C;
    case 0x7F242F80u: goto label_7F242F80;
    case 0x7F242F84u: goto label_7F242F84;
    case 0x7F242F88u: goto label_7F242F88;
    case 0x7F242F8Cu: goto label_7F242F8C;
    case 0x7F242F90u: goto label_7F242F90;
    case 0x7F242F94u: goto label_7F242F94;
    case 0x7F242F98u: goto label_7F242F98;
    case 0x7F242F9Cu: goto label_7F242F9C;
    case 0x7F242FA0u: goto label_7F242FA0;
    case 0x7F242FA4u: goto label_7F242FA4;
    case 0x7F242FA8u: goto label_7F242FA8;
    case 0x7F242FACu: goto label_7F242FAC;
    case 0x7F242FB0u: goto label_7F242FB0;
    case 0x7F242FB4u: goto label_7F242FB4;
    case 0x7F242FB8u: goto label_7F242FB8;
    case 0x7F242FBCu: goto label_7F242FBC;
    case 0x7F242FC0u: goto label_7F242FC0;
    case 0x7F242FC4u: goto label_7F242FC4;
    case 0x7F242FC8u: goto label_7F242FC8;
    case 0x7F242FCCu: goto label_7F242FCC;
    case 0x7F242FD0u: goto label_7F242FD0;
    case 0x7F242FD4u: goto label_7F242FD4;
    case 0x7F242FD8u: goto label_7F242FD8;
    case 0x7F242FDCu: goto label_7F242FDC;
    case 0x7F242FE0u: goto label_7F242FE0;
    case 0x7F242FE4u: goto label_7F242FE4;
    case 0x7F242FE8u: goto label_7F242FE8;
    case 0x7F242FECu: goto label_7F242FEC;
    case 0x7F242FF0u: goto label_7F242FF0;
    case 0x7F242FF4u: goto label_7F242FF4;
    case 0x7F242FF8u: goto label_7F242FF8;
    case 0x7F242FFCu: goto label_7F242FFC;
    case 0x7F243000u: goto label_7F243000;
    case 0x7F243004u: goto label_7F243004;
    case 0x7F243008u: goto label_7F243008;
    case 0x7F24300Cu: goto label_7F24300C;
    case 0x7F243010u: goto label_7F243010;
    case 0x7F243014u: goto label_7F243014;
    case 0x7F243018u: goto label_7F243018;
    case 0x7F24301Cu: goto label_7F24301C;
    case 0x7F243020u: goto label_7F243020;
    case 0x7F243024u: goto label_7F243024;
    case 0x7F243028u: goto label_7F243028;
    case 0x7F24302Cu: goto label_7F24302C;
    case 0x7F243030u: goto label_7F243030;
    case 0x7F243034u: goto label_7F243034;
    case 0x7F243038u: goto label_7F243038;
    case 0x7F24303Cu: goto label_7F24303C;
    case 0x7F243040u: goto label_7F243040;
    case 0x7F243044u: goto label_7F243044;
    case 0x7F243048u: goto label_7F243048;
    case 0x7F24304Cu: goto label_7F24304C;
    case 0x7F243050u: goto label_7F243050;
    case 0x7F243054u: goto label_7F243054;
    case 0x7F243058u: goto label_7F243058;
    case 0x7F24305Cu: goto label_7F24305C;
    case 0x7F243060u: goto label_7F243060;
    case 0x7F243064u: goto label_7F243064;
    case 0x7F243068u: goto label_7F243068;
    case 0x7F24306Cu: goto label_7F24306C;
    case 0x7F243070u: goto label_7F243070;
    case 0x7F243074u: goto label_7F243074;
    case 0x7F243078u: goto label_7F243078;
    case 0x7F24307Cu: goto label_7F24307C;
    case 0x7F243080u: goto label_7F243080;
    case 0x7F243084u: goto label_7F243084;
    case 0x7F243088u: goto label_7F243088;
    case 0x7F24308Cu: goto label_7F24308C;
    case 0x7F243090u: goto label_7F243090;
    case 0x7F243094u: goto label_7F243094;
    case 0x7F243098u: goto label_7F243098;
    case 0x7F24309Cu: goto label_7F24309C;
    case 0x7F2430A0u: goto label_7F2430A0;
    case 0x7F2430A4u: goto label_7F2430A4;
    case 0x7F2430A8u: goto label_7F2430A8;
    case 0x7F2430ACu: goto label_7F2430AC;
    case 0x7F2430B0u: goto label_7F2430B0;
    case 0x7F2430B4u: goto label_7F2430B4;
    case 0x7F2430B8u: goto label_7F2430B8;
    case 0x7F2430BCu: goto label_7F2430BC;
    case 0x7F2430C0u: goto label_7F2430C0;
    case 0x7F2430C4u: goto label_7F2430C4;
    case 0x7F2430C8u: goto label_7F2430C8;
    case 0x7F2430CCu: goto label_7F2430CC;
    case 0x7F2430D0u: goto label_7F2430D0;
    case 0x7F2430D4u: goto label_7F2430D4;
    case 0x7F2430D8u: goto label_7F2430D8;
    case 0x7F2430DCu: goto label_7F2430DC;
    case 0x7F2430E0u: goto label_7F2430E0;
    case 0x7F2430E4u: goto label_7F2430E4;
    case 0x7F2430E8u: goto label_7F2430E8;
    case 0x7F2430ECu: goto label_7F2430EC;
    case 0x7F2430F0u: goto label_7F2430F0;
    case 0x7F2430F4u: goto label_7F2430F4;
    case 0x7F2430F8u: goto label_7F2430F8;
    case 0x7F2430FCu: goto label_7F2430FC;
    case 0x7F243100u: goto label_7F243100;
    case 0x7F243104u: goto label_7F243104;
    case 0x7F243108u: goto label_7F243108;
    case 0x7F24310Cu: goto label_7F24310C;
    case 0x7F243110u: goto label_7F243110;
    case 0x7F243114u: goto label_7F243114;
    case 0x7F243118u: goto label_7F243118;
    case 0x7F24311Cu: goto label_7F24311C;
    case 0x7F243120u: goto label_7F243120;
    case 0x7F243124u: goto label_7F243124;
    case 0x7F243128u: goto label_7F243128;
    case 0x7F24312Cu: goto label_7F24312C;
    case 0x7F243130u: goto label_7F243130;
    case 0x7F243134u: goto label_7F243134;
    case 0x7F243138u: goto label_7F243138;
    case 0x7F24313Cu: goto label_7F24313C;
    case 0x7F243140u: goto label_7F243140;
    case 0x7F243144u: goto label_7F243144;
    case 0x7F243148u: goto label_7F243148;
    case 0x7F24314Cu: goto label_7F24314C;
    case 0x7F243150u: goto label_7F243150;
    case 0x7F243154u: goto label_7F243154;
    case 0x7F243158u: goto label_7F243158;
    case 0x7F24315Cu: goto label_7F24315C;
    case 0x7F243160u: goto label_7F243160;
    case 0x7F243164u: goto label_7F243164;
    case 0x7F243168u: goto label_7F243168;
    case 0x7F24316Cu: goto label_7F24316C;
    case 0x7F243170u: goto label_7F243170;
    case 0x7F243174u: goto label_7F243174;
    case 0x7F243178u: goto label_7F243178;
    case 0x7F24317Cu: goto label_7F24317C;
    case 0x7F243180u: goto label_7F243180;
    case 0x7F243184u: goto label_7F243184;
    case 0x7F243188u: goto label_7F243188;
    case 0x7F24318Cu: goto label_7F24318C;
    case 0x7F243190u: goto label_7F243190;
    case 0x7F243194u: goto label_7F243194;
    case 0x7F243198u: goto label_7F243198;
    case 0x7F24319Cu: goto label_7F24319C;
    case 0x7F2431A0u: goto label_7F2431A0;
    case 0x7F2431A4u: goto label_7F2431A4;
    case 0x7F2431A8u: goto label_7F2431A8;
    case 0x7F2431ACu: goto label_7F2431AC;
    case 0x7F2431B0u: goto label_7F2431B0;
    case 0x7F2431B4u: goto label_7F2431B4;
    case 0x7F2431B8u: goto label_7F2431B8;
    case 0x7F2431BCu: goto label_7F2431BC;
    case 0x7F2431C0u: goto label_7F2431C0;
    case 0x7F2431C4u: goto label_7F2431C4;
    case 0x7F2431C8u: goto label_7F2431C8;
    case 0x7F2431CCu: goto label_7F2431CC;
    case 0x7F2431D0u: goto label_7F2431D0;
    case 0x7F2431D4u: goto label_7F2431D4;
    case 0x7F2431D8u: goto label_7F2431D8;
    case 0x7F2431DCu: goto label_7F2431DC;
    case 0x7F2431E0u: goto label_7F2431E0;
    case 0x7F2431E4u: goto label_7F2431E4;
    case 0x7F2431E8u: goto label_7F2431E8;
    case 0x7F2431ECu: goto label_7F2431EC;
    case 0x7F2431F0u: goto label_7F2431F0;
    case 0x7F2431F4u: goto label_7F2431F4;
    case 0x7F2431F8u: goto label_7F2431F8;
    case 0x7F2431FCu: goto label_7F2431FC;
    case 0x7F243200u: goto label_7F243200;
    case 0x7F243204u: goto label_7F243204;
    case 0x7F243208u: goto label_7F243208;
    case 0x7F24320Cu: goto label_7F24320C;
    case 0x7F243210u: goto label_7F243210;
    case 0x7F243214u: goto label_7F243214;
    case 0x7F243218u: goto label_7F243218;
    case 0x7F24321Cu: goto label_7F24321C;
    case 0x7F243220u: goto label_7F243220;
    case 0x7F243224u: goto label_7F243224;
    case 0x7F243228u: goto label_7F243228;
    case 0x7F24322Cu: goto label_7F24322C;
    case 0x7F243230u: goto label_7F243230;
    case 0x7F243234u: goto label_7F243234;
    case 0x7F243238u: goto label_7F243238;
    case 0x7F24323Cu: goto label_7F24323C;
    case 0x7F243240u: goto label_7F243240;
    case 0x7F243244u: goto label_7F243244;
    case 0x7F243248u: goto label_7F243248;
    case 0x7F24324Cu: goto label_7F24324C;
    case 0x7F243250u: goto label_7F243250;
    case 0x7F243254u: goto label_7F243254;
    case 0x7F243258u: goto label_7F243258;
    case 0x7F24325Cu: goto label_7F24325C;
    case 0x7F243260u: goto label_7F243260;
    case 0x7F243264u: goto label_7F243264;
    case 0x7F243268u: goto label_7F243268;
    case 0x7F24326Cu: goto label_7F24326C;
    case 0x7F243270u: goto label_7F243270;
    case 0x7F243274u: goto label_7F243274;
    case 0x7F243278u: goto label_7F243278;
    case 0x7F24327Cu: goto label_7F24327C;
    case 0x7F243280u: goto label_7F243280;
    case 0x7F243284u: goto label_7F243284;
    case 0x7F243288u: goto label_7F243288;
    case 0x7F24328Cu: goto label_7F24328C;
    case 0x7F243290u: goto label_7F243290;
    case 0x7F243294u: goto label_7F243294;
    case 0x7F243298u: goto label_7F243298;
    case 0x7F24329Cu: goto label_7F24329C;
    case 0x7F2432A0u: goto label_7F2432A0;
    case 0x7F2432A4u: goto label_7F2432A4;
    case 0x7F2432A8u: goto label_7F2432A8;
    case 0x7F2432ACu: goto label_7F2432AC;
    case 0x7F2432B0u: goto label_7F2432B0;
    case 0x7F2432B4u: goto label_7F2432B4;
    case 0x7F2432B8u: goto label_7F2432B8;
    case 0x7F2432BCu: goto label_7F2432BC;
    case 0x7F2432C0u: goto label_7F2432C0;
    case 0x7F2432C4u: goto label_7F2432C4;
    case 0x7F2432C8u: goto label_7F2432C8;
    case 0x7F2432CCu: goto label_7F2432CC;
    case 0x7F2432D0u: goto label_7F2432D0;
    case 0x7F2432D4u: goto label_7F2432D4;
    case 0x7F2432D8u: goto label_7F2432D8;
    case 0x7F2432DCu: goto label_7F2432DC;
    case 0x7F2432E0u: goto label_7F2432E0;
    case 0x7F2432E4u: goto label_7F2432E4;
    case 0x7F2432E8u: goto label_7F2432E8;
    case 0x7F2432ECu: goto label_7F2432EC;
    case 0x7F2432F0u: goto label_7F2432F0;
    case 0x7F2432F4u: goto label_7F2432F4;
    case 0x7F2432F8u: goto label_7F2432F8;
    case 0x7F2432FCu: goto label_7F2432FC;
    case 0x7F243300u: goto label_7F243300;
    case 0x7F243304u: goto label_7F243304;
    case 0x7F243308u: goto label_7F243308;
    case 0x7F24330Cu: goto label_7F24330C;
    case 0x7F243310u: goto label_7F243310;
    case 0x7F243314u: goto label_7F243314;
    case 0x7F243318u: goto label_7F243318;
    case 0x7F24331Cu: goto label_7F24331C;
    case 0x7F243320u: goto label_7F243320;
    case 0x7F243324u: goto label_7F243324;
    case 0x7F243328u: goto label_7F243328;
    case 0x7F24332Cu: goto label_7F24332C;
    case 0x7F243330u: goto label_7F243330;
    case 0x7F243334u: goto label_7F243334;
    case 0x7F243338u: goto label_7F243338;
    case 0x7F24333Cu: goto label_7F24333C;
    case 0x7F243340u: goto label_7F243340;
    case 0x7F243344u: goto label_7F243344;
    case 0x7F243348u: goto label_7F243348;
    case 0x7F24334Cu: goto label_7F24334C;
    case 0x7F243350u: goto label_7F243350;
    case 0x7F243354u: goto label_7F243354;
    case 0x7F243358u: goto label_7F243358;
    case 0x7F24335Cu: goto label_7F24335C;
    case 0x7F243360u: goto label_7F243360;
    case 0x7F243364u: goto label_7F243364;
    case 0x7F243368u: goto label_7F243368;
    case 0x7F24336Cu: goto label_7F24336C;
    case 0x7F243370u: goto label_7F243370;
    case 0x7F243374u: goto label_7F243374;
    case 0x7F243378u: goto label_7F243378;
    case 0x7F24337Cu: goto label_7F24337C;
    case 0x7F243380u: goto label_7F243380;
    case 0x7F243384u: goto label_7F243384;
    case 0x7F243388u: goto label_7F243388;
    case 0x7F24338Cu: goto label_7F24338C;
    case 0x7F243390u: goto label_7F243390;
    case 0x7F243394u: goto label_7F243394;
    case 0x7F243398u: goto label_7F243398;
    case 0x7F24339Cu: goto label_7F24339C;
    case 0x7F2433A0u: goto label_7F2433A0;
    case 0x7F2433A4u: goto label_7F2433A4;
    case 0x7F2433A8u: goto label_7F2433A8;
    case 0x7F2433ACu: goto label_7F2433AC;
    case 0x7F2433B0u: goto label_7F2433B0;
    case 0x7F2433B4u: goto label_7F2433B4;
    case 0x7F2433B8u: goto label_7F2433B8;
    case 0x7F2433BCu: goto label_7F2433BC;
    case 0x7F2433C0u: goto label_7F2433C0;
    case 0x7F2433C4u: goto label_7F2433C4;
    case 0x7F2433C8u: goto label_7F2433C8;
    case 0x7F2433CCu: goto label_7F2433CC;
    case 0x7F2433D0u: goto label_7F2433D0;
    case 0x7F2433D4u: goto label_7F2433D4;
    case 0x7F2433D8u: goto label_7F2433D8;
    case 0x7F2433DCu: goto label_7F2433DC;
    case 0x7F2433E0u: goto label_7F2433E0;
    case 0x7F2433E4u: goto label_7F2433E4;
    case 0x7F2433E8u: goto label_7F2433E8;
    case 0x7F2433ECu: goto label_7F2433EC;
    case 0x7F2433F0u: goto label_7F2433F0;
    case 0x7F2433F4u: goto label_7F2433F4;
    case 0x7F2433F8u: goto label_7F2433F8;
    case 0x7F2433FCu: goto label_7F2433FC;
    case 0x7F243400u: goto label_7F243400;
    case 0x7F243404u: goto label_7F243404;
    case 0x7F243408u: goto label_7F243408;
    case 0x7F24340Cu: goto label_7F24340C;
    case 0x7F243410u: goto label_7F243410;
    case 0x7F243414u: goto label_7F243414;
    case 0x7F243418u: goto label_7F243418;
    case 0x7F24341Cu: goto label_7F24341C;
    case 0x7F243420u: goto label_7F243420;
    case 0x7F243424u: goto label_7F243424;
    case 0x7F243428u: goto label_7F243428;
    case 0x7F24342Cu: goto label_7F24342C;
    case 0x7F243430u: goto label_7F243430;
    case 0x7F243434u: goto label_7F243434;
    case 0x7F243438u: goto label_7F243438;
    case 0x7F24343Cu: goto label_7F24343C;
    case 0x7F243440u: goto label_7F243440;
    case 0x7F243444u: goto label_7F243444;
    case 0x7F243448u: goto label_7F243448;
    case 0x7F24344Cu: goto label_7F24344C;
    case 0x7F243450u: goto label_7F243450;
    case 0x7F243454u: goto label_7F243454;
    case 0x7F243458u: goto label_7F243458;
    case 0x7F24345Cu: goto label_7F24345C;
    case 0x7F243460u: goto label_7F243460;
    case 0x7F243464u: goto label_7F243464;
    case 0x7F243468u: goto label_7F243468;
    case 0x7F24346Cu: goto label_7F24346C;
    case 0x7F243470u: goto label_7F243470;
    case 0x7F243474u: goto label_7F243474;
    case 0x7F243478u: goto label_7F243478;
    case 0x7F24347Cu: goto label_7F24347C;
    case 0x7F243480u: goto label_7F243480;
    case 0x7F243484u: goto label_7F243484;
    case 0x7F243488u: goto label_7F243488;
    case 0x7F24348Cu: goto label_7F24348C;
    case 0x7F243490u: goto label_7F243490;
    case 0x7F243494u: goto label_7F243494;
    case 0x7F243498u: goto label_7F243498;
    case 0x7F24349Cu: goto label_7F24349C;
    case 0x7F2434A0u: goto label_7F2434A0;
    case 0x7F2434A4u: goto label_7F2434A4;
    case 0x7F2434A8u: goto label_7F2434A8;
    case 0x7F2434ACu: goto label_7F2434AC;
    case 0x7F2434B0u: goto label_7F2434B0;
    case 0x7F2434B4u: goto label_7F2434B4;
    case 0x7F2434B8u: goto label_7F2434B8;
    case 0x7F2434BCu: goto label_7F2434BC;
    case 0x7F2434C0u: goto label_7F2434C0;
    case 0x7F2434C4u: goto label_7F2434C4;
    case 0x7F2434C8u: goto label_7F2434C8;
    case 0x7F2434CCu: goto label_7F2434CC;
    case 0x7F2434D0u: goto label_7F2434D0;
    case 0x7F2434D4u: goto label_7F2434D4;
    case 0x7F2434D8u: goto label_7F2434D8;
    case 0x7F2434DCu: goto label_7F2434DC;
    case 0x7F2434E0u: goto label_7F2434E0;
    case 0x7F2434E4u: goto label_7F2434E4;
    case 0x7F2434E8u: goto label_7F2434E8;
    case 0x7F2434ECu: goto label_7F2434EC;
    case 0x7F2434F0u: goto label_7F2434F0;
    case 0x7F2434F4u: goto label_7F2434F4;
    case 0x7F2434F8u: goto label_7F2434F8;
    case 0x7F2434FCu: goto label_7F2434FC;
    case 0x7F243500u: goto label_7F243500;
    case 0x7F243504u: goto label_7F243504;
    case 0x7F243508u: goto label_7F243508;
    case 0x7F24350Cu: goto label_7F24350C;
    case 0x7F243510u: goto label_7F243510;
    case 0x7F243514u: goto label_7F243514;
    case 0x7F243518u: goto label_7F243518;
    case 0x7F24351Cu: goto label_7F24351C;
    case 0x7F243520u: goto label_7F243520;
    case 0x7F243524u: goto label_7F243524;
    case 0x7F243528u: goto label_7F243528;
    case 0x7F24352Cu: goto label_7F24352C;
    case 0x7F243530u: goto label_7F243530;
    case 0x7F243534u: goto label_7F243534;
    case 0x7F243538u: goto label_7F243538;
    case 0x7F24353Cu: goto label_7F24353C;
    case 0x7F243540u: goto label_7F243540;
    case 0x7F243544u: goto label_7F243544;
    case 0x7F243548u: goto label_7F243548;
    case 0x7F24354Cu: goto label_7F24354C;
    case 0x7F243550u: goto label_7F243550;
    case 0x7F243554u: goto label_7F243554;
    case 0x7F243558u: goto label_7F243558;
    case 0x7F24355Cu: goto label_7F24355C;
    case 0x7F243560u: goto label_7F243560;
    case 0x7F243564u: goto label_7F243564;
    case 0x7F243568u: goto label_7F243568;
    case 0x7F24356Cu: goto label_7F24356C;
    case 0x7F243570u: goto label_7F243570;
    case 0x7F243574u: goto label_7F243574;
    case 0x7F243578u: goto label_7F243578;
    case 0x7F24357Cu: goto label_7F24357C;
    case 0x7F243580u: goto label_7F243580;
    case 0x7F243584u: goto label_7F243584;
    case 0x7F243588u: goto label_7F243588;
    case 0x7F24358Cu: goto label_7F24358C;
    case 0x7F243590u: goto label_7F243590;
    case 0x7F243594u: goto label_7F243594;
    case 0x7F243598u: goto label_7F243598;
    case 0x7F24359Cu: goto label_7F24359C;
    case 0x7F2435A0u: goto label_7F2435A0;
    case 0x7F2435A4u: goto label_7F2435A4;
    case 0x7F2435A8u: goto label_7F2435A8;
    case 0x7F2435ACu: goto label_7F2435AC;
    case 0x7F2435B0u: goto label_7F2435B0;
    case 0x7F2435B4u: goto label_7F2435B4;
    case 0x7F2435B8u: goto label_7F2435B8;
    case 0x7F2435BCu: goto label_7F2435BC;
    case 0x7F2435C0u: goto label_7F2435C0;
    case 0x7F2435C4u: goto label_7F2435C4;
    case 0x7F2435C8u: goto label_7F2435C8;
    case 0x7F2435CCu: goto label_7F2435CC;
    case 0x7F2435D0u: goto label_7F2435D0;
    case 0x7F2435D4u: goto label_7F2435D4;
    case 0x7F2435D8u: goto label_7F2435D8;
    case 0x7F2435DCu: goto label_7F2435DC;
    case 0x7F2435E0u: goto label_7F2435E0;
    case 0x7F2435E4u: goto label_7F2435E4;
    case 0x7F2435E8u: goto label_7F2435E8;
    case 0x7F2435ECu: goto label_7F2435EC;
    case 0x7F2435F0u: goto label_7F2435F0;
    case 0x7F2435F4u: goto label_7F2435F4;
    case 0x7F2435F8u: goto label_7F2435F8;
    case 0x7F2435FCu: goto label_7F2435FC;
    case 0x7F243600u: goto label_7F243600;
    case 0x7F243604u: goto label_7F243604;
    case 0x7F243608u: goto label_7F243608;
    case 0x7F24360Cu: goto label_7F24360C;
    case 0x7F243610u: goto label_7F243610;
    case 0x7F243614u: goto label_7F243614;
    case 0x7F243618u: goto label_7F243618;
    case 0x7F24361Cu: goto label_7F24361C;
    case 0x7F243620u: goto label_7F243620;
    case 0x7F243624u: goto label_7F243624;
    case 0x7F243628u: goto label_7F243628;
    case 0x7F24362Cu: goto label_7F24362C;
    case 0x7F243630u: goto label_7F243630;
    case 0x7F243634u: goto label_7F243634;
    case 0x7F243638u: goto label_7F243638;
    case 0x7F24363Cu: goto label_7F24363C;
    case 0x7F243640u: goto label_7F243640;
    case 0x7F243644u: goto label_7F243644;
    case 0x7F243648u: goto label_7F243648;
    case 0x7F24364Cu: goto label_7F24364C;
    case 0x7F243650u: goto label_7F243650;
    case 0x7F243654u: goto label_7F243654;
    case 0x7F243658u: goto label_7F243658;
    case 0x7F24365Cu: goto label_7F24365C;
    case 0x7F243660u: goto label_7F243660;
    case 0x7F243664u: goto label_7F243664;
    case 0x7F243668u: goto label_7F243668;
    case 0x7F24366Cu: goto label_7F24366C;
    case 0x7F243670u: goto label_7F243670;
    case 0x7F243674u: goto label_7F243674;
    case 0x7F243678u: goto label_7F243678;
    case 0x7F24367Cu: goto label_7F24367C;
    case 0x7F243680u: goto label_7F243680;
    case 0x7F243684u: goto label_7F243684;
    case 0x7F243688u: goto label_7F243688;
    case 0x7F24368Cu: goto label_7F24368C;
    case 0x7F243690u: goto label_7F243690;
    case 0x7F243694u: goto label_7F243694;
    case 0x7F243698u: goto label_7F243698;
    case 0x7F24369Cu: goto label_7F24369C;
    case 0x7F2436A0u: goto label_7F2436A0;
    case 0x7F2436A4u: goto label_7F2436A4;
    case 0x7F2436A8u: goto label_7F2436A8;
    case 0x7F2436ACu: goto label_7F2436AC;
    case 0x7F2436B0u: goto label_7F2436B0;
    case 0x7F2436B4u: goto label_7F2436B4;
    case 0x7F2436B8u: goto label_7F2436B8;
    case 0x7F2436BCu: goto label_7F2436BC;
    case 0x7F2436C0u: goto label_7F2436C0;
    case 0x7F2436C4u: goto label_7F2436C4;
    case 0x7F2436C8u: goto label_7F2436C8;
    case 0x7F2436CCu: goto label_7F2436CC;
    case 0x7F2436D0u: goto label_7F2436D0;
    case 0x7F2436D4u: goto label_7F2436D4;
    case 0x7F2436D8u: goto label_7F2436D8;
    case 0x7F2436DCu: goto label_7F2436DC;
    case 0x7F2436E0u: goto label_7F2436E0;
    case 0x7F2436E4u: goto label_7F2436E4;
    case 0x7F2436E8u: goto label_7F2436E8;
    case 0x7F2436ECu: goto label_7F2436EC;
    case 0x7F2436F0u: goto label_7F2436F0;
    case 0x7F2436F4u: goto label_7F2436F4;
    case 0x7F2436F8u: goto label_7F2436F8;
    case 0x7F2436FCu: goto label_7F2436FC;
    case 0x7F243700u: goto label_7F243700;
    case 0x7F243704u: goto label_7F243704;
    case 0x7F243708u: goto label_7F243708;
    case 0x7F24370Cu: goto label_7F24370C;
    case 0x7F243710u: goto label_7F243710;
    case 0x7F243714u: goto label_7F243714;
    case 0x7F243718u: goto label_7F243718;
    case 0x7F24371Cu: goto label_7F24371C;
    case 0x7F243720u: goto label_7F243720;
    case 0x7F243724u: goto label_7F243724;
    case 0x7F243728u: goto label_7F243728;
    case 0x7F24372Cu: goto label_7F24372C;
    case 0x7F243730u: goto label_7F243730;
    case 0x7F243734u: goto label_7F243734;
    case 0x7F243738u: goto label_7F243738;
    case 0x7F24373Cu: goto label_7F24373C;
    case 0x7F243740u: goto label_7F243740;
    case 0x7F243744u: goto label_7F243744;
    case 0x7F243748u: goto label_7F243748;
    case 0x7F24374Cu: goto label_7F24374C;
    case 0x7F243750u: goto label_7F243750;
    case 0x7F243754u: goto label_7F243754;
    case 0x7F243758u: goto label_7F243758;
    case 0x7F24375Cu: goto label_7F24375C;
    case 0x7F243760u: goto label_7F243760;
    case 0x7F243764u: goto label_7F243764;
    case 0x7F243768u: goto label_7F243768;
    case 0x7F24376Cu: goto label_7F24376C;
    case 0x7F243770u: goto label_7F243770;
    case 0x7F243774u: goto label_7F243774;
    case 0x7F243778u: goto label_7F243778;
    case 0x7F24377Cu: goto label_7F24377C;
    case 0x7F243780u: goto label_7F243780;
    case 0x7F243784u: goto label_7F243784;
    case 0x7F243788u: goto label_7F243788;
    case 0x7F24378Cu: goto label_7F24378C;
    case 0x7F243790u: goto label_7F243790;
    case 0x7F243794u: goto label_7F243794;
    case 0x7F243798u: goto label_7F243798;
    case 0x7F24379Cu: goto label_7F24379C;
    case 0x7F2437A0u: goto label_7F2437A0;
    case 0x7F2437A4u: goto label_7F2437A4;
    case 0x7F2437A8u: goto label_7F2437A8;
    case 0x7F2437ACu: goto label_7F2437AC;
    case 0x7F2437B0u: goto label_7F2437B0;
    case 0x7F2437B4u: goto label_7F2437B4;
    case 0x7F2437B8u: goto label_7F2437B8;
    case 0x7F2437BCu: goto label_7F2437BC;
    case 0x7F2437C0u: goto label_7F2437C0;
    case 0x7F2437C4u: goto label_7F2437C4;
    case 0x7F2437C8u: goto label_7F2437C8;
    case 0x7F2437CCu: goto label_7F2437CC;
    case 0x7F2437D0u: goto label_7F2437D0;
    case 0x7F2437D4u: goto label_7F2437D4;
    case 0x7F2437D8u: goto label_7F2437D8;
    case 0x7F2437DCu: goto label_7F2437DC;
    case 0x7F2437E0u: goto label_7F2437E0;
    case 0x7F2437E4u: goto label_7F2437E4;
    case 0x7F2437E8u: goto label_7F2437E8;
    case 0x7F2437ECu: goto label_7F2437EC;
    case 0x7F2437F0u: goto label_7F2437F0;
    case 0x7F2437F4u: goto label_7F2437F4;
    case 0x7F2437F8u: goto label_7F2437F8;
    case 0x7F2437FCu: goto label_7F2437FC;
    case 0x7F243800u: goto label_7F243800;
    case 0x7F243804u: goto label_7F243804;
    case 0x7F243808u: goto label_7F243808;
    case 0x7F24380Cu: goto label_7F24380C;
    case 0x7F243810u: goto label_7F243810;
    case 0x7F243814u: goto label_7F243814;
    case 0x7F243818u: goto label_7F243818;
    case 0x7F24381Cu: goto label_7F24381C;
    case 0x7F243820u: goto label_7F243820;
    case 0x7F243824u: goto label_7F243824;
    case 0x7F243828u: goto label_7F243828;
    case 0x7F24382Cu: goto label_7F24382C;
    case 0x7F243830u: goto label_7F243830;
    case 0x7F243834u: goto label_7F243834;
    case 0x7F243838u: goto label_7F243838;
    case 0x7F24383Cu: goto label_7F24383C;
    case 0x7F243840u: goto label_7F243840;
    case 0x7F243844u: goto label_7F243844;
    case 0x7F243848u: goto label_7F243848;
    case 0x7F24384Cu: goto label_7F24384C;
    case 0x7F243850u: goto label_7F243850;
    case 0x7F243854u: goto label_7F243854;
    case 0x7F243858u: goto label_7F243858;
    case 0x7F24385Cu: goto label_7F24385C;
    case 0x7F243860u: goto label_7F243860;
    case 0x7F243864u: goto label_7F243864;
    case 0x7F243868u: goto label_7F243868;
    case 0x7F24386Cu: goto label_7F24386C;
    case 0x7F243870u: goto label_7F243870;
    case 0x7F243874u: goto label_7F243874;
    case 0x7F243878u: goto label_7F243878;
    case 0x7F24387Cu: goto label_7F24387C;
    case 0x7F243880u: goto label_7F243880;
    case 0x7F243884u: goto label_7F243884;
    case 0x7F243888u: goto label_7F243888;
    case 0x7F24388Cu: goto label_7F24388C;
    case 0x7F243890u: goto label_7F243890;
    case 0x7F243894u: goto label_7F243894;
    case 0x7F243898u: goto label_7F243898;
    case 0x7F24389Cu: goto label_7F24389C;
    case 0x7F2438A0u: goto label_7F2438A0;
    case 0x7F2438A4u: goto label_7F2438A4;
    case 0x7F2438A8u: goto label_7F2438A8;
    case 0x7F2438ACu: goto label_7F2438AC;
    case 0x7F2438B0u: goto label_7F2438B0;
    case 0x7F2438B4u: goto label_7F2438B4;
    case 0x7F2438B8u: goto label_7F2438B8;
    case 0x7F2438BCu: goto label_7F2438BC;
    case 0x7F2438C0u: goto label_7F2438C0;
    case 0x7F2438C4u: goto label_7F2438C4;
    case 0x7F2438C8u: goto label_7F2438C8;
    case 0x7F2438CCu: goto label_7F2438CC;
    case 0x7F2438D0u: goto label_7F2438D0;
    case 0x7F2438D4u: goto label_7F2438D4;
    case 0x7F2438D8u: goto label_7F2438D8;
    case 0x7F2438DCu: goto label_7F2438DC;
    case 0x7F2438E0u: goto label_7F2438E0;
    case 0x7F2438E4u: goto label_7F2438E4;
    case 0x7F2438E8u: goto label_7F2438E8;
    case 0x7F2438ECu: goto label_7F2438EC;
    case 0x7F2438F0u: goto label_7F2438F0;
    case 0x7F2438F4u: goto label_7F2438F4;
    case 0x7F2438F8u: goto label_7F2438F8;
    case 0x7F2438FCu: goto label_7F2438FC;
    case 0x7F243900u: goto label_7F243900;
    case 0x7F243904u: goto label_7F243904;
    case 0x7F243908u: goto label_7F243908;
    case 0x7F24390Cu: goto label_7F24390C;
    case 0x7F243910u: goto label_7F243910;
    case 0x7F243914u: goto label_7F243914;
    case 0x7F243918u: goto label_7F243918;
    case 0x7F24391Cu: goto label_7F24391C;
    case 0x7F243920u: goto label_7F243920;
    case 0x7F243924u: goto label_7F243924;
    case 0x7F243928u: goto label_7F243928;
    case 0x7F24392Cu: goto label_7F24392C;
    case 0x7F243930u: goto label_7F243930;
    case 0x7F243934u: goto label_7F243934;
    case 0x7F243938u: goto label_7F243938;
    case 0x7F24393Cu: goto label_7F24393C;
    case 0x7F243940u: goto label_7F243940;
    case 0x7F243944u: goto label_7F243944;
    case 0x7F243948u: goto label_7F243948;
    case 0x7F24394Cu: goto label_7F24394C;
    case 0x7F243950u: goto label_7F243950;
    case 0x7F243954u: goto label_7F243954;
    case 0x7F243958u: goto label_7F243958;
    case 0x7F24395Cu: goto label_7F24395C;
    case 0x7F243960u: goto label_7F243960;
    case 0x7F243964u: goto label_7F243964;
    case 0x7F243968u: goto label_7F243968;
    case 0x7F24396Cu: goto label_7F24396C;
    case 0x7F243970u: goto label_7F243970;
    case 0x7F243974u: goto label_7F243974;
    case 0x7F243978u: goto label_7F243978;
    case 0x7F24397Cu: goto label_7F24397C;
    case 0x7F243980u: goto label_7F243980;
    case 0x7F243984u: goto label_7F243984;
    case 0x7F243988u: goto label_7F243988;
    case 0x7F24398Cu: goto label_7F24398C;
    case 0x7F243990u: goto label_7F243990;
    case 0x7F243994u: goto label_7F243994;
    case 0x7F243998u: goto label_7F243998;
    case 0x7F24399Cu: goto label_7F24399C;
    case 0x7F2439A0u: goto label_7F2439A0;
    case 0x7F2439A4u: goto label_7F2439A4;
    case 0x7F2439A8u: goto label_7F2439A8;
    case 0x7F2439ACu: goto label_7F2439AC;
    case 0x7F2439B0u: goto label_7F2439B0;
    case 0x7F2439B4u: goto label_7F2439B4;
    case 0x7F2439B8u: goto label_7F2439B8;
    case 0x7F2439BCu: goto label_7F2439BC;
    case 0x7F2439C0u: goto label_7F2439C0;
    case 0x7F2439C4u: goto label_7F2439C4;
    case 0x7F2439C8u: goto label_7F2439C8;
    case 0x7F2439CCu: goto label_7F2439CC;
    case 0x7F2439D0u: goto label_7F2439D0;
    case 0x7F2439D4u: goto label_7F2439D4;
    case 0x7F2439D8u: goto label_7F2439D8;
    case 0x7F2439DCu: goto label_7F2439DC;
    case 0x7F2439E0u: goto label_7F2439E0;
    case 0x7F2439E4u: goto label_7F2439E4;
    case 0x7F2439E8u: goto label_7F2439E8;
    case 0x7F2439ECu: goto label_7F2439EC;
    case 0x7F2439F0u: goto label_7F2439F0;
    case 0x7F2439F4u: goto label_7F2439F4;
    case 0x7F2439F8u: goto label_7F2439F8;
    case 0x7F2439FCu: goto label_7F2439FC;
    case 0x7F243A00u: goto label_7F243A00;
    case 0x7F243A04u: goto label_7F243A04;
    case 0x7F243A08u: goto label_7F243A08;
    case 0x7F243A0Cu: goto label_7F243A0C;
    case 0x7F243A10u: goto label_7F243A10;
    case 0x7F243A14u: goto label_7F243A14;
    case 0x7F243A18u: goto label_7F243A18;
    case 0x7F243A1Cu: goto label_7F243A1C;
    case 0x7F243A20u: goto label_7F243A20;
    case 0x7F243A24u: goto label_7F243A24;
    case 0x7F243A28u: goto label_7F243A28;
    case 0x7F243A2Cu: goto label_7F243A2C;
    case 0x7F243A30u: goto label_7F243A30;
    case 0x7F243A34u: goto label_7F243A34;
    case 0x7F243A38u: goto label_7F243A38;
    case 0x7F243A3Cu: goto label_7F243A3C;
    case 0x7F243A40u: goto label_7F243A40;
    case 0x7F243A44u: goto label_7F243A44;
    case 0x7F243A48u: goto label_7F243A48;
    case 0x7F243A4Cu: goto label_7F243A4C;
    case 0x7F243A50u: goto label_7F243A50;
    case 0x7F243A54u: goto label_7F243A54;
    case 0x7F243A58u: goto label_7F243A58;
    case 0x7F243A5Cu: goto label_7F243A5C;
    case 0x7F243A60u: goto label_7F243A60;
    case 0x7F243A64u: goto label_7F243A64;
    case 0x7F243A68u: goto label_7F243A68;
    case 0x7F243A6Cu: goto label_7F243A6C;
    case 0x7F243A70u: goto label_7F243A70;
    case 0x7F243A74u: goto label_7F243A74;
    case 0x7F243A78u: goto label_7F243A78;
    case 0x7F243A7Cu: goto label_7F243A7C;
    case 0x7F243A80u: goto label_7F243A80;
    case 0x7F243A84u: goto label_7F243A84;
    case 0x7F243A88u: goto label_7F243A88;
    case 0x7F243A8Cu: goto label_7F243A8C;
    case 0x7F243A90u: goto label_7F243A90;
    case 0x7F243A94u: goto label_7F243A94;
    case 0x7F243A98u: goto label_7F243A98;
    case 0x7F243A9Cu: goto label_7F243A9C;
    case 0x7F243AA0u: goto label_7F243AA0;
    case 0x7F243AA4u: goto label_7F243AA4;
    case 0x7F243AA8u: goto label_7F243AA8;
    case 0x7F243AACu: goto label_7F243AAC;
    case 0x7F243AB0u: goto label_7F243AB0;
    case 0x7F243AB4u: goto label_7F243AB4;
    case 0x7F243AB8u: goto label_7F243AB8;
    case 0x7F243ABCu: goto label_7F243ABC;
    case 0x7F243AC0u: goto label_7F243AC0;
    case 0x7F243AC4u: goto label_7F243AC4;
    case 0x7F243AC8u: goto label_7F243AC8;
    case 0x7F243ACCu: goto label_7F243ACC;
    case 0x7F243AD0u: goto label_7F243AD0;
    case 0x7F243AD4u: goto label_7F243AD4;
    case 0x7F243AD8u: goto label_7F243AD8;
    case 0x7F243ADCu: goto label_7F243ADC;
    case 0x7F243AE0u: goto label_7F243AE0;
    case 0x7F243AE4u: goto label_7F243AE4;
    case 0x7F243AE8u: goto label_7F243AE8;
    case 0x7F243AECu: goto label_7F243AEC;
    case 0x7F243AF0u: goto label_7F243AF0;
    case 0x7F243AF4u: goto label_7F243AF4;
    case 0x7F243AF8u: goto label_7F243AF8;
    case 0x7F243AFCu: goto label_7F243AFC;
    case 0x7F243B00u: goto label_7F243B00;
    case 0x7F243B04u: goto label_7F243B04;
    case 0x7F243B08u: goto label_7F243B08;
    case 0x7F243B0Cu: goto label_7F243B0C;
    case 0x7F243B10u: goto label_7F243B10;
    case 0x7F243B14u: goto label_7F243B14;
    case 0x7F243B18u: goto label_7F243B18;
    case 0x7F243B1Cu: goto label_7F243B1C;
    case 0x7F243B20u: goto label_7F243B20;
    case 0x7F243B24u: goto label_7F243B24;
    case 0x7F243B28u: goto label_7F243B28;
    case 0x7F243B2Cu: goto label_7F243B2C;
    case 0x7F243B30u: goto label_7F243B30;
    case 0x7F243B34u: goto label_7F243B34;
    case 0x7F243B38u: goto label_7F243B38;
    case 0x7F243B3Cu: goto label_7F243B3C;
    case 0x7F243B40u: goto label_7F243B40;
    case 0x7F243B44u: goto label_7F243B44;
    case 0x7F243B48u: goto label_7F243B48;
    case 0x7F243B4Cu: goto label_7F243B4C;
    case 0x7F243B50u: goto label_7F243B50;
    case 0x7F243B54u: goto label_7F243B54;
    case 0x7F243B58u: goto label_7F243B58;
    case 0x7F243B5Cu: goto label_7F243B5C;
    case 0x7F243B60u: goto label_7F243B60;
    case 0x7F243B64u: goto label_7F243B64;
    case 0x7F243B68u: goto label_7F243B68;
    case 0x7F243B6Cu: goto label_7F243B6C;
    case 0x7F243B70u: goto label_7F243B70;
    case 0x7F243B74u: goto label_7F243B74;
    case 0x7F243B78u: goto label_7F243B78;
    case 0x7F243B7Cu: goto label_7F243B7C;
    case 0x7F243B80u: goto label_7F243B80;
    case 0x7F243B84u: goto label_7F243B84;
    case 0x7F243B88u: goto label_7F243B88;
    case 0x7F243B8Cu: goto label_7F243B8C;
    case 0x7F243B90u: goto label_7F243B90;
    case 0x7F243B94u: goto label_7F243B94;
    case 0x7F243B98u: goto label_7F243B98;
    case 0x7F243B9Cu: goto label_7F243B9C;
    case 0x7F243BA0u: goto label_7F243BA0;
    case 0x7F243BA4u: goto label_7F243BA4;
    case 0x7F243BA8u: goto label_7F243BA8;
    case 0x7F243BACu: goto label_7F243BAC;
    case 0x7F243BB0u: goto label_7F243BB0;
    case 0x7F243BB4u: goto label_7F243BB4;
    case 0x7F243BB8u: goto label_7F243BB8;
    case 0x7F243BBCu: goto label_7F243BBC;
    case 0x7F243BC0u: goto label_7F243BC0;
    case 0x7F243BC4u: goto label_7F243BC4;
    case 0x7F243BC8u: goto label_7F243BC8;
    case 0x7F243BCCu: goto label_7F243BCC;
    case 0x7F243BD0u: goto label_7F243BD0;
    case 0x7F243BD4u: goto label_7F243BD4;
    case 0x7F243BD8u: goto label_7F243BD8;
    case 0x7F243BDCu: goto label_7F243BDC;
    case 0x7F243BE0u: goto label_7F243BE0;
    case 0x7F243BE4u: goto label_7F243BE4;
    case 0x7F243BE8u: goto label_7F243BE8;
    case 0x7F243BECu: goto label_7F243BEC;
    case 0x7F243BF0u: goto label_7F243BF0;
    case 0x7F243BF4u: goto label_7F243BF4;
    case 0x7F243BF8u: goto label_7F243BF8;
    case 0x7F243BFCu: goto label_7F243BFC;
    case 0x7F243C00u: goto label_7F243C00;
    case 0x7F243C04u: goto label_7F243C04;
    case 0x7F243C08u: goto label_7F243C08;
    case 0x7F243C0Cu: goto label_7F243C0C;
    case 0x7F243C10u: goto label_7F243C10;
    case 0x7F243C14u: goto label_7F243C14;
    case 0x7F243C18u: goto label_7F243C18;
    case 0x7F243C1Cu: goto label_7F243C1C;
    case 0x7F243C20u: goto label_7F243C20;
    case 0x7F243C24u: goto label_7F243C24;
    case 0x7F243C28u: goto label_7F243C28;
    case 0x7F243C2Cu: goto label_7F243C2C;
    case 0x7F243C30u: goto label_7F243C30;
    case 0x7F243C34u: goto label_7F243C34;
    case 0x7F243C38u: goto label_7F243C38;
    case 0x7F243C3Cu: goto label_7F243C3C;
    case 0x7F243C40u: goto label_7F243C40;
    case 0x7F243C44u: goto label_7F243C44;
    case 0x7F243C48u: goto label_7F243C48;
    case 0x7F243C4Cu: goto label_7F243C4C;
    case 0x7F243C50u: goto label_7F243C50;
    case 0x7F243C54u: goto label_7F243C54;
    case 0x7F243C58u: goto label_7F243C58;
    case 0x7F243C5Cu: goto label_7F243C5C;
    case 0x7F243C60u: goto label_7F243C60;
    case 0x7F243C64u: goto label_7F243C64;
    case 0x7F243C68u: goto label_7F243C68;
    case 0x7F243C6Cu: goto label_7F243C6C;
    case 0x7F243C70u: goto label_7F243C70;
    case 0x7F243C74u: goto label_7F243C74;
    case 0x7F243C78u: goto label_7F243C78;
    case 0x7F243C7Cu: goto label_7F243C7C;
    case 0x7F243C80u: goto label_7F243C80;
    case 0x7F243C84u: goto label_7F243C84;
    case 0x7F243C88u: goto label_7F243C88;
    case 0x7F243C8Cu: goto label_7F243C8C;
    case 0x7F243C90u: goto label_7F243C90;
    case 0x7F243C94u: goto label_7F243C94;
    case 0x7F243C98u: goto label_7F243C98;
    case 0x7F243C9Cu: goto label_7F243C9C;
    case 0x7F243CA0u: goto label_7F243CA0;
    case 0x7F243CA4u: goto label_7F243CA4;
    case 0x7F243CA8u: goto label_7F243CA8;
    case 0x7F243CACu: goto label_7F243CAC;
    case 0x7F243CB0u: goto label_7F243CB0;
    case 0x7F243CB4u: goto label_7F243CB4;
    case 0x7F243CB8u: goto label_7F243CB8;
    case 0x7F243CBCu: goto label_7F243CBC;
    case 0x7F243CC0u: goto label_7F243CC0;
    case 0x7F243CC4u: goto label_7F243CC4;
    case 0x7F243CC8u: goto label_7F243CC8;
    case 0x7F243CCCu: goto label_7F243CCC;
    case 0x7F243CD0u: goto label_7F243CD0;
    case 0x7F243CD4u: goto label_7F243CD4;
    case 0x7F243CD8u: goto label_7F243CD8;
    case 0x7F243CDCu: goto label_7F243CDC;
    case 0x7F243CE0u: goto label_7F243CE0;
    case 0x7F243CE4u: goto label_7F243CE4;
    case 0x7F243CE8u: goto label_7F243CE8;
    case 0x7F243CECu: goto label_7F243CEC;
    case 0x7F243CF0u: goto label_7F243CF0;
    case 0x7F243CF4u: goto label_7F243CF4;
    case 0x7F243CF8u: goto label_7F243CF8;
    case 0x7F243CFCu: goto label_7F243CFC;
    case 0x7F243D00u: goto label_7F243D00;
    case 0x7F243D04u: goto label_7F243D04;
    case 0x7F243D08u: goto label_7F243D08;
    case 0x7F243D0Cu: goto label_7F243D0C;
    case 0x7F243D10u: goto label_7F243D10;
    case 0x7F243D14u: goto label_7F243D14;
    case 0x7F243D18u: goto label_7F243D18;
    case 0x7F243D1Cu: goto label_7F243D1C;
    case 0x7F243D20u: goto label_7F243D20;
    case 0x7F243D24u: goto label_7F243D24;
    case 0x7F243D28u: goto label_7F243D28;
    case 0x7F243D2Cu: goto label_7F243D2C;
    case 0x7F243D30u: goto label_7F243D30;
    case 0x7F243D34u: goto label_7F243D34;
    case 0x7F243D38u: goto label_7F243D38;
    case 0x7F243D3Cu: goto label_7F243D3C;
    case 0x7F243D40u: goto label_7F243D40;
    case 0x7F243D44u: goto label_7F243D44;
    case 0x7F243D48u: goto label_7F243D48;
    case 0x7F243D4Cu: goto label_7F243D4C;
    case 0x7F243D50u: goto label_7F243D50;
    case 0x7F243D54u: goto label_7F243D54;
    case 0x7F243D58u: goto label_7F243D58;
    case 0x7F243D5Cu: goto label_7F243D5C;
    case 0x7F243D60u: goto label_7F243D60;
    case 0x7F243D64u: goto label_7F243D64;
    case 0x7F243D68u: goto label_7F243D68;
    case 0x7F243D6Cu: goto label_7F243D6C;
    case 0x7F243D70u: goto label_7F243D70;
    case 0x7F243D74u: goto label_7F243D74;
    case 0x7F243D78u: goto label_7F243D78;
    case 0x7F243D7Cu: goto label_7F243D7C;
    case 0x7F243D80u: goto label_7F243D80;
    case 0x7F243D84u: goto label_7F243D84;
    case 0x7F243D88u: goto label_7F243D88;
    case 0x7F243D8Cu: goto label_7F243D8C;
    case 0x7F243D90u: goto label_7F243D90;
    case 0x7F243D94u: goto label_7F243D94;
    case 0x7F243D98u: goto label_7F243D98;
    case 0x7F243D9Cu: goto label_7F243D9C;
    case 0x7F243DA0u: goto label_7F243DA0;
    case 0x7F243DA4u: goto label_7F243DA4;
    case 0x7F243DA8u: goto label_7F243DA8;
    case 0x7F243DACu: goto label_7F243DAC;
    case 0x7F243DB0u: goto label_7F243DB0;
    case 0x7F243DB4u: goto label_7F243DB4;
    case 0x7F243DB8u: goto label_7F243DB8;
    case 0x7F243DBCu: goto label_7F243DBC;
    case 0x7F243DC0u: goto label_7F243DC0;
    case 0x7F243DC4u: goto label_7F243DC4;
    case 0x7F243DC8u: goto label_7F243DC8;
    case 0x7F243DCCu: goto label_7F243DCC;
    case 0x7F243DD0u: goto label_7F243DD0;
    case 0x7F243DD4u: goto label_7F243DD4;
    case 0x7F243DD8u: goto label_7F243DD8;
    case 0x7F243DDCu: goto label_7F243DDC;
    case 0x7F243DE0u: goto label_7F243DE0;
    case 0x7F243DE4u: goto label_7F243DE4;
    case 0x7F243DE8u: goto label_7F243DE8;
    case 0x7F243DECu: goto label_7F243DEC;
    case 0x7F243DF0u: goto label_7F243DF0;
    case 0x7F243DF4u: goto label_7F243DF4;
    case 0x7F243DF8u: goto label_7F243DF8;
    case 0x7F243DFCu: goto label_7F243DFC;
    case 0x7F243E00u: goto label_7F243E00;
    case 0x7F243E04u: goto label_7F243E04;
    case 0x7F243E08u: goto label_7F243E08;
    case 0x7F243E0Cu: goto label_7F243E0C;
    case 0x7F243E10u: goto label_7F243E10;
    case 0x7F243E14u: goto label_7F243E14;
    case 0x7F243E18u: goto label_7F243E18;
    case 0x7F243E1Cu: goto label_7F243E1C;
    case 0x7F243E20u: goto label_7F243E20;
    case 0x7F243E24u: goto label_7F243E24;
    case 0x7F243E28u: goto label_7F243E28;
    case 0x7F243E2Cu: goto label_7F243E2C;
    case 0x7F243E30u: goto label_7F243E30;
    case 0x7F243E34u: goto label_7F243E34;
    case 0x7F243E38u: goto label_7F243E38;
    case 0x7F243E3Cu: goto label_7F243E3C;
    case 0x7F243E40u: goto label_7F243E40;
    case 0x7F243E44u: goto label_7F243E44;
    case 0x7F243E48u: goto label_7F243E48;
    case 0x7F243E4Cu: goto label_7F243E4C;
    case 0x7F243E50u: goto label_7F243E50;
    case 0x7F243E54u: goto label_7F243E54;
    case 0x7F243E58u: goto label_7F243E58;
    case 0x7F243E5Cu: goto label_7F243E5C;
    case 0x7F243E60u: goto label_7F243E60;
    case 0x7F243E64u: goto label_7F243E64;
    case 0x7F243E68u: goto label_7F243E68;
    case 0x7F243E6Cu: goto label_7F243E6C;
    case 0x7F243E70u: goto label_7F243E70;
    case 0x7F243E74u: goto label_7F243E74;
    case 0x7F243E78u: goto label_7F243E78;
    case 0x7F243E7Cu: goto label_7F243E7C;
    case 0x7F243E80u: goto label_7F243E80;
    case 0x7F243E84u: goto label_7F243E84;
    case 0x7F243E88u: goto label_7F243E88;
    case 0x7F243E8Cu: goto label_7F243E8C;
    case 0x7F243E90u: goto label_7F243E90;
    case 0x7F243E94u: goto label_7F243E94;
    case 0x7F243E98u: goto label_7F243E98;
    case 0x7F243E9Cu: goto label_7F243E9C;
    case 0x7F243EA0u: goto label_7F243EA0;
    case 0x7F243EA4u: goto label_7F243EA4;
    case 0x7F243EA8u: goto label_7F243EA8;
    case 0x7F243EACu: goto label_7F243EAC;
    case 0x7F243EB0u: goto label_7F243EB0;
    case 0x7F243EB4u: goto label_7F243EB4;
    case 0x7F243EB8u: goto label_7F243EB8;
    case 0x7F243EBCu: goto label_7F243EBC;
    case 0x7F243EC0u: goto label_7F243EC0;
    case 0x7F243EC4u: goto label_7F243EC4;
    case 0x7F243EC8u: goto label_7F243EC8;
    case 0x7F243ECCu: goto label_7F243ECC;
    case 0x7F243ED0u: goto label_7F243ED0;
    case 0x7F243ED4u: goto label_7F243ED4;
    case 0x7F243ED8u: goto label_7F243ED8;
    case 0x7F243EDCu: goto label_7F243EDC;
    case 0x7F243EE0u: goto label_7F243EE0;
    case 0x7F243EE4u: goto label_7F243EE4;
    case 0x7F243EE8u: goto label_7F243EE8;
    case 0x7F243EECu: goto label_7F243EEC;
    case 0x7F243EF0u: goto label_7F243EF0;
    case 0x7F243EF4u: goto label_7F243EF4;
    case 0x7F243EF8u: goto label_7F243EF8;
    case 0x7F243EFCu: goto label_7F243EFC;
    case 0x7F243F00u: goto label_7F243F00;
    case 0x7F243F04u: goto label_7F243F04;
    case 0x7F243F08u: goto label_7F243F08;
    case 0x7F243F0Cu: goto label_7F243F0C;
    case 0x7F243F10u: goto label_7F243F10;
    case 0x7F243F14u: goto label_7F243F14;
    case 0x7F243F18u: goto label_7F243F18;
    case 0x7F243F1Cu: goto label_7F243F1C;
    case 0x7F243F20u: goto label_7F243F20;
    case 0x7F243F24u: goto label_7F243F24;
    case 0x7F243F28u: goto label_7F243F28;
    case 0x7F243F2Cu: goto label_7F243F2C;
    case 0x7F243F30u: goto label_7F243F30;
    case 0x7F243F34u: goto label_7F243F34;
    case 0x7F243F38u: goto label_7F243F38;
    case 0x7F243F3Cu: goto label_7F243F3C;
    case 0x7F243F40u: goto label_7F243F40;
    case 0x7F243F44u: goto label_7F243F44;
    case 0x7F243F48u: goto label_7F243F48;
    case 0x7F243F4Cu: goto label_7F243F4C;
    case 0x7F243F50u: goto label_7F243F50;
    case 0x7F243F54u: goto label_7F243F54;
    case 0x7F243F58u: goto label_7F243F58;
    case 0x7F243F5Cu: goto label_7F243F5C;
    case 0x7F243F60u: goto label_7F243F60;
    case 0x7F243F64u: goto label_7F243F64;
    case 0x7F243F68u: goto label_7F243F68;
    case 0x7F243F6Cu: goto label_7F243F6C;
    case 0x7F243F70u: goto label_7F243F70;
    case 0x7F243F74u: goto label_7F243F74;
    case 0x7F243F78u: goto label_7F243F78;
    case 0x7F243F7Cu: goto label_7F243F7C;
    case 0x7F243F80u: goto label_7F243F80;
    case 0x7F243F84u: goto label_7F243F84;
    case 0x7F243F88u: goto label_7F243F88;
    case 0x7F243F8Cu: goto label_7F243F8C;
    case 0x7F243F90u: goto label_7F243F90;
    case 0x7F243F94u: goto label_7F243F94;
    case 0x7F243F98u: goto label_7F243F98;
    case 0x7F243F9Cu: goto label_7F243F9C;
    case 0x7F243FA0u: goto label_7F243FA0;
    case 0x7F243FA4u: goto label_7F243FA4;
    case 0x7F243FA8u: goto label_7F243FA8;
    case 0x7F243FACu: goto label_7F243FAC;
    case 0x7F243FB0u: goto label_7F243FB0;
    case 0x7F243FB4u: goto label_7F243FB4;
    case 0x7F243FB8u: goto label_7F243FB8;
    case 0x7F243FBCu: goto label_7F243FBC;
    case 0x7F243FC0u: goto label_7F243FC0;
    case 0x7F243FC4u: goto label_7F243FC4;
    case 0x7F243FC8u: goto label_7F243FC8;
    case 0x7F243FCCu: goto label_7F243FCC;
    case 0x7F243FD0u: goto label_7F243FD0;
    case 0x7F243FD4u: goto label_7F243FD4;
    case 0x7F243FD8u: goto label_7F243FD8;
    case 0x7F243FDCu: goto label_7F243FDC;
    case 0x7F243FE0u: goto label_7F243FE0;
    case 0x7F243FE4u: goto label_7F243FE4;
    case 0x7F243FE8u: goto label_7F243FE8;
    case 0x7F243FECu: goto label_7F243FEC;
    case 0x7F243FF0u: goto label_7F243FF0;
    case 0x7F243FF4u: goto label_7F243FF4;
    case 0x7F243FF8u: goto label_7F243FF8;
    case 0x7F243FFCu: goto label_7F243FFC;
    case 0x7F244000u: goto label_7F244000;
    case 0x7F244004u: goto label_7F244004;
    case 0x7F244008u: goto label_7F244008;
    case 0x7F24400Cu: goto label_7F24400C;
    case 0x7F244010u: goto label_7F244010;
    case 0x7F244014u: goto label_7F244014;
    case 0x7F244018u: goto label_7F244018;
    case 0x7F24401Cu: goto label_7F24401C;
    case 0x7F244020u: goto label_7F244020;
    case 0x7F244024u: goto label_7F244024;
    case 0x7F244028u: goto label_7F244028;
    case 0x7F24402Cu: goto label_7F24402C;
    case 0x7F244030u: goto label_7F244030;
    case 0x7F244034u: goto label_7F244034;
    case 0x7F244038u: goto label_7F244038;
    case 0x7F24403Cu: goto label_7F24403C;
    case 0x7F244040u: goto label_7F244040;
    case 0x7F244044u: goto label_7F244044;
    case 0x7F244048u: goto label_7F244048;
    case 0x7F24404Cu: goto label_7F24404C;
    case 0x7F244050u: goto label_7F244050;
    case 0x7F244054u: goto label_7F244054;
    case 0x7F244058u: goto label_7F244058;
    case 0x7F24405Cu: goto label_7F24405C;
    case 0x7F244060u: goto label_7F244060;
    case 0x7F244064u: goto label_7F244064;
    case 0x7F244068u: goto label_7F244068;
    case 0x7F24406Cu: goto label_7F24406C;
    case 0x7F244070u: goto label_7F244070;
    case 0x7F244074u: goto label_7F244074;
    case 0x7F244078u: goto label_7F244078;
    case 0x7F24407Cu: goto label_7F24407C;
    case 0x7F244080u: goto label_7F244080;
    case 0x7F244084u: goto label_7F244084;
    case 0x7F244088u: goto label_7F244088;
    case 0x7F24408Cu: goto label_7F24408C;
    case 0x7F244090u: goto label_7F244090;
    case 0x7F244094u: goto label_7F244094;
    case 0x7F244098u: goto label_7F244098;
    case 0x7F24409Cu: goto label_7F24409C;
    case 0x7F2440A0u: goto label_7F2440A0;
    case 0x7F2440A4u: goto label_7F2440A4;
    case 0x7F2440A8u: goto label_7F2440A8;
    case 0x7F2440ACu: goto label_7F2440AC;
    case 0x7F2440B0u: goto label_7F2440B0;
    case 0x7F2440B4u: goto label_7F2440B4;
    case 0x7F2440B8u: goto label_7F2440B8;
    case 0x7F2440BCu: goto label_7F2440BC;
    case 0x7F2440C0u: goto label_7F2440C0;
    case 0x7F2440C4u: goto label_7F2440C4;
    case 0x7F2440C8u: goto label_7F2440C8;
    case 0x7F2440CCu: goto label_7F2440CC;
    case 0x7F2440D0u: goto label_7F2440D0;
    case 0x7F2440D4u: goto label_7F2440D4;
    case 0x7F2440D8u: goto label_7F2440D8;
    case 0x7F2440DCu: goto label_7F2440DC;
    case 0x7F2440E0u: goto label_7F2440E0;
    case 0x7F2440E4u: goto label_7F2440E4;
    case 0x7F2440E8u: goto label_7F2440E8;
    default: return;
    }
label_7F2400EC:
    ctx->pc = 0x7F2400ECu;
    ctx->downcount -= 1;
    // 7F2400EC: bc    4, 2, 0x7F240100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240100;
        }
    }

label_7F2400F0:
    ctx->pc = 0x7F2400F0u;
    ctx->downcount -= 4;
    // 7F2400F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2400F4:
    ctx->pc = 0x7F2400F4u;
    // 7F2400F4: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2400F8:
    ctx->pc = 0x7F2400F8u;
    // 7F2400F8: lwz     r3, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2400FC:
    ctx->pc = 0x7F2400FCu;
    // 7F2400FC: bl      0x7F026B18
    {
            ctx->lr = 0x7F240100u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F240100:
    ctx->pc = 0x7F240100u;
    ctx->downcount -= 12;
    // 7F240100: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240104:
    ctx->pc = 0x7F240104u;
    // 7F240104: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F240108:
    ctx->pc = 0x7F240108u;
    // 7F240108: addi    r5, r3, 19872
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19872);

label_7F24010C:
    ctx->pc = 0x7F24010Cu;
    // 7F24010C: lfs     f0, 19988(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24010Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240110:
    ctx->pc = 0x7F240110u;
    // 7F240110: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F240110u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240114:
    ctx->pc = 0x7F240114u;
    // 7F240114: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F240118:
    ctx->pc = 0x7F240118u;
    // 7F240118: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24011C:
    ctx->pc = 0x7F24011Cu;
    // 7F24011C: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24011Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240120:
    ctx->pc = 0x7F240120u;
    // 7F240120: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240124:
    ctx->pc = 0x7F240124u;
    // 7F240124: lwz     r4, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240128:
    ctx->pc = 0x7F240128u;
    // 7F240128: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F24012C:
    ctx->pc = 0x7F24012Cu;
    // 7F24012C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F240130u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F240130:
    ctx->pc = 0x7F240130u;
    ctx->downcount -= 4;
    // 7F240130: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F240134:
    ctx->pc = 0x7F240134u;
    // 7F240134: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F240138:
    ctx->pc = 0x7F240138u;
    // 7F240138: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24013C:
    ctx->pc = 0x7F24013Cu;
    // 7F24013C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F240140u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F240140:
    ctx->pc = 0x7F240140u;
    ctx->downcount -= 7;
    // 7F240140: lwz     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240144:
    ctx->pc = 0x7F240144u;
    // 7F240144: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F240148:
    ctx->pc = 0x7F240148u;
    // 7F240148: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F24014C:
    ctx->pc = 0x7F24014Cu;
    // 7F24014C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F240150:
    ctx->pc = 0x7F240150u;
    // 7F240150: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F240154:
    ctx->pc = 0x7F240154u;
    // 7F240154: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F240158:
    ctx->pc = 0x7F240158u;
    // 7F240158: bl      0x7F10B744
    {
            ctx->lr = 0x7F24015Cu;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F24015C:
    ctx->pc = 0x7F24015Cu;
    ctx->downcount -= 2;
    // 7F24015C: cmpwi   r3, 0
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

label_7F240160:
    ctx->pc = 0x7F240160u;
    // 7F240160: bc    12, 2, 0x7F2401AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2401AC;
        }
    }

label_7F240164:
    ctx->pc = 0x7F240164u;
    ctx->downcount -= 2;
    // 7F240164: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F240168:
    ctx->pc = 0x7F240168u;
    // 7F240168: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F24016Cu;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F24016C:
    ctx->pc = 0x7F24016Cu;
    ctx->downcount -= 2;
    // 7F24016C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F240170:
    ctx->pc = 0x7F240170u;
    // 7F240170: bl      0x7F3CC594
    {
            ctx->lr = 0x7F240174u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F240174:
    ctx->pc = 0x7F240174u;
    ctx->downcount -= 4;
    // 7F240174: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240178:
    ctx->pc = 0x7F240178u;
    // 7F240178: lfs     f0, 19964(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F240178u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24017C:
    ctx->pc = 0x7F24017Cu;
    // 7F24017C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24017Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F240180:
    ctx->pc = 0x7F240180u;
    // 7F240180: bc    4, 1, 0x7F24019C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24019C;
        }
    }

label_7F240184:
    ctx->pc = 0x7F240184u;
    ctx->downcount -= 6;
    // 7F240184: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F240188:
    ctx->pc = 0x7F240188u;
    // 7F240188: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F240188u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F24018C:
    ctx->pc = 0x7F24018Cu;
    // 7F24018C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F240190:
    ctx->pc = 0x7F240190u;
    // 7F240190: lfs     f1, 19872(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240190u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240194:
    ctx->pc = 0x7F240194u;
    // 7F240194: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240198:
    ctx->pc = 0x7F240198u;
    // 7F240198: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F24019Cu;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F24019C:
    ctx->pc = 0x7F24019Cu;
    ctx->downcount -= 4;
    // 7F24019C: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2401A0:
    ctx->pc = 0x7F2401A0u;
    // 7F2401A0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2401A4:
    ctx->pc = 0x7F2401A4u;
    // 7F2401A4: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2401A8:
    ctx->pc = 0x7F2401A8u;
    // 7F2401A8: bl      0x800261B4
    {
            ctx->lr = 0x7F2401ACu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2401AC:
    ctx->pc = 0x7F2401ACu;
    ctx->downcount -= 4;
    // 7F2401AC: lwz     r3, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2401B0:
    ctx->pc = 0x7F2401B0u;
    // 7F2401B0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2401B4:
    ctx->pc = 0x7F2401B4u;
    // 7F2401B4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2401B8:
    ctx->pc = 0x7F2401B8u;
    // 7F2401B8: bl      0x7F3C9F98
    {
            ctx->lr = 0x7F2401BCu;
            ctx->pc = 0x7F3C9F98u;
            return;
    }

label_7F2401BC:
    ctx->pc = 0x7F2401BCu;
    ctx->downcount -= 9;
    // 7F2401BC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F2401C0:
    ctx->pc = 0x7F2401C0u;
    // 7F2401C0: lwz     r4, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2401C4:
    ctx->pc = 0x7F2401C4u;
    // 7F2401C4: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F2401C8:
    ctx->pc = 0x7F2401C8u;
    // 7F2401C8: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F2401CC:
    ctx->pc = 0x7F2401CCu;
    // 7F2401CC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2401D0:
    ctx->pc = 0x7F2401D0u;
    // 7F2401D0: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2401D4:
    ctx->pc = 0x7F2401D4u;
    // 7F2401D4: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F2401D8:
    ctx->pc = 0x7F2401D8u;
    // 7F2401D8: li      r8, 128
    ctx->gpr[8] = (u32)(s32)(128);

label_7F2401DC:
    ctx->pc = 0x7F2401DCu;
    // 7F2401DC: bl      0x7F1081A8
    {
            ctx->lr = 0x7F2401E0u;
            ctx->pc = 0x7F1081A8u;
            return;
    }

label_7F2401E0:
    ctx->pc = 0x7F2401E0u;
    ctx->downcount -= 2;
    // 7F2401E0: cmpwi   r3, 0
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

label_7F2401E4:
    ctx->pc = 0x7F2401E4u;
    // 7F2401E4: bc    4, 2, 0x7F2402C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2402C0;
        }
    }

label_7F2401E8:
    ctx->pc = 0x7F2401E8u;
    ctx->downcount -= 7;
    // 7F2401E8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F2401EC:
    ctx->pc = 0x7F2401ECu;
    // 7F2401EC: lwz     r4, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2401F0:
    ctx->pc = 0x7F2401F0u;
    // 7F2401F0: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F2401F4:
    ctx->pc = 0x7F2401F4u;
    // 7F2401F4: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F2401F8:
    ctx->pc = 0x7F2401F8u;
    // 7F2401F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2401FC:
    ctx->pc = 0x7F2401FCu;
    // 7F2401FC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F240200:
    ctx->pc = 0x7F240200u;
    // 7F240200: bl      0x7F106A30
    {
            ctx->lr = 0x7F240204u;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F240204:
    ctx->pc = 0x7F240204u;
    ctx->downcount -= 2;
    // 7F240204: or.   r28, r3, r3
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

label_7F240208:
    ctx->pc = 0x7F240208u;
    // 7F240208: bc    12, 2, 0x7F24026C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24026C;
        }
    }

label_7F24020C:
    ctx->pc = 0x7F24020Cu;
    ctx->downcount -= 2;
    // 7F24020C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F240210:
    ctx->pc = 0x7F240210u;
    // 7F240210: bl      0x7F106FC0
    {
            ctx->lr = 0x7F240214u;
            ctx->pc = 0x7F106FC0u;
            return;
    }

label_7F240214:
    ctx->pc = 0x7F240214u;
    ctx->downcount -= 2;
    // 7F240214: rlwinm. r0, r28, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F240218:
    ctx->pc = 0x7F240218u;
    // 7F240218: bc    4, 2, 0x7F240228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240228;
        }
    }

label_7F24021C:
    ctx->pc = 0x7F24021Cu;
    ctx->downcount -= 3;
    // 7F24021C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240220:
    ctx->pc = 0x7F240220u;
    // 7F240220: lfs     f0, 19992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F240220u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240224:
    ctx->pc = 0x7F240224u;
    // 7F240224: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F240228:
    ctx->pc = 0x7F240228u;
    ctx->downcount -= 2;
    // 7F240228: rlwinm. r0, r28, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24022C:
    ctx->pc = 0x7F24022Cu;
    // 7F24022C: bc    4, 2, 0x7F24023C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24023C;
        }
    }

label_7F240230:
    ctx->pc = 0x7F240230u;
    ctx->downcount -= 3;
    // 7F240230: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240234:
    ctx->pc = 0x7F240234u;
    // 7F240234: lfs     f0, 19996(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F240234u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19996);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240238:
    ctx->pc = 0x7F240238u;
    // 7F240238: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24023C:
    ctx->pc = 0x7F24023Cu;
    ctx->downcount -= 8;
    // 7F24023C: lwz     r4, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240240:
    ctx->pc = 0x7F240240u;
    // 7F240240: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240244:
    ctx->pc = 0x7F240244u;
    // 7F240244: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240248:
    ctx->pc = 0x7F240248u;
    // 7F240248: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240248u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24024C:
    ctx->pc = 0x7F24024Cu;
    // 7F24024C: lfs     f1, 19900(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24024Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240250:
    ctx->pc = 0x7F240250u;
    // 7F240250: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F240250u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F240254:
    ctx->pc = 0x7F240254u;
    // 7F240254: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F240254u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F240258:
    ctx->pc = 0x7F240258u;
    // 7F240258: bc    12, 0, 0x7F2402C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2402C0;
        }
    }

label_7F24025C:
    ctx->pc = 0x7F24025Cu;
    ctx->downcount -= 4;
    // 7F24025C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24025Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240260:
    ctx->pc = 0x7F240260u;
    // 7F240260: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F240260u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F240264:
    ctx->pc = 0x7F240264u;
    // 7F240264: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F240264u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F240268:
    ctx->pc = 0x7F240268u;
    // 7F240268: bc    12, 0, 0x7F2402C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2402C0;
        }
    }

label_7F24026C:
    ctx->pc = 0x7F24026Cu;
    ctx->downcount -= 10;
    // 7F24026C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240270:
    ctx->pc = 0x7F240270u;
    // 7F240270: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F240274:
    ctx->pc = 0x7F240274u;
    // 7F240274: addi    r4, r3, 20000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20000);

label_7F240278:
    ctx->pc = 0x7F240278u;
    // 7F240278: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24027C:
    ctx->pc = 0x7F24027Cu;
    // 7F24027C: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24027Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F240280:
    ctx->pc = 0x7F240280u;
    // 7F240280: addi    r28, r5, 20080
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(20080);

label_7F240284:
    ctx->pc = 0x7F240284u;
    // 7F240284: addi    r29, r3, 21616
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(21616);

label_7F240288:
    ctx->pc = 0x7F240288u;
    // 7F240288: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F24028C:
    ctx->pc = 0x7F24028Cu;
    // 7F24028C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F240290:
    ctx->pc = 0x7F240290u;
    // 7F240290: b       0x7F2402B0
    {
            goto label_7F2402B0;
    }

label_7F240294:
    ctx->pc = 0x7F240294u;
    ctx->downcount -= 3;
    // 7F240294: lwz     r3, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240298:
    ctx->pc = 0x7F240298u;
    // 7F240298: lwzx    r4, r28, r31
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24029C:
    // 7F24029C: bl      0x7F3CC608
    {
            ctx->lr = 0x7F2402A0u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F2402A0:
    ctx->pc = 0x7F2402A0u;
    ctx->downcount -= 2;
    // 7F2402A0: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2402A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_7F2402A4:
    // 7F2402A4: bc    12, 0, 0x7F2402C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2402C0;
        }
    }

label_7F2402A8:
    ctx->downcount -= 2;
    // 7F2402A8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2402AC:
    // 7F2402AC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F2402B0:
    ctx->pc = 0x7F2402B0u;
    ctx->downcount -= 3;
    // 7F2402B0: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2402B4:
    // 7F2402B4: cmpw    r27, r0
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

label_7F2402B8:
    // 7F2402B8: bc    12, 0, 0x7F240294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240294u;
                return;
            }
            goto label_7F240294;
        }
    }

label_7F2402BC:
    ctx->pc = 0x7F2402BCu;
    ctx->downcount -= 1;
    // 7F2402BC: b       0x7F240304
    {
            goto label_7F240304;
    }

label_7F2402C0:
    ctx->pc = 0x7F2402C0u;
    ctx->downcount -= 2;
    // 7F2402C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2402C4:
    ctx->pc = 0x7F2402C4u;
    // 7F2402C4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2402C8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2402C8:
    ctx->pc = 0x7F2402C8u;
    ctx->downcount -= 7;
    // 7F2402C8: lwz     r0, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2402CC:
    ctx->pc = 0x7F2402CCu;
    // 7F2402CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2402D0:
    ctx->pc = 0x7F2402D0u;
    // 7F2402D0: addi    r3, r3, -5896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5896);

label_7F2402D4:
    ctx->pc = 0x7F2402D4u;
    // 7F2402D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2402D8:
    ctx->pc = 0x7F2402D8u;
    // 7F2402D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2402DC:
    ctx->pc = 0x7F2402DCu;
    // 7F2402DC: stwx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2402E0:
    ctx->pc = 0x7F2402E0u;
    // 7F2402E0: b       0x7F240304
    {
            goto label_7F240304;
    }

label_7F2402E4:
    ctx->pc = 0x7F2402E4u;
    ctx->downcount -= 2;
    // 7F2402E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2402E8:
    ctx->pc = 0x7F2402E8u;
    // 7F2402E8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2402ECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2402EC:
    ctx->pc = 0x7F2402ECu;
    ctx->downcount -= 6;
    // 7F2402EC: lwz     r0, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2402F0:
    ctx->pc = 0x7F2402F0u;
    // 7F2402F0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2402F4:
    ctx->pc = 0x7F2402F4u;
    // 7F2402F4: addi    r3, r3, -5896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5896);

label_7F2402F8:
    ctx->pc = 0x7F2402F8u;
    // 7F2402F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2402FC:
    ctx->pc = 0x7F2402FCu;
    // 7F2402FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F240300:
    ctx->pc = 0x7F240300u;
    // 7F240300: stwx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F240304:
    ctx->pc = 0x7F240304u;
    ctx->downcount -= 13;
    // 7F240304: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240308:
    ctx->pc = 0x7F240308u;
    // 7F240308: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24030C:
    ctx->pc = 0x7F24030Cu;
    // 7F24030C: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240310:
    ctx->pc = 0x7F240310u;
    // 7F240310: stwu     r3, -5916(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5916);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
        ctx->gpr[4] = ea;
    }

label_7F240314:
    ctx->pc = 0x7F240314u;
    // 7F240314: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240318:
    ctx->pc = 0x7F240318u;
    // 7F240318: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24031C:
    ctx->pc = 0x7F24031Cu;
    // 7F24031C: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240320:
    ctx->pc = 0x7F240320u;
    // 7F240320: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F240324:
    ctx->pc = 0x7F240324u;
    // 7F240324: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240328:
    ctx->pc = 0x7F240328u;
    // 7F240328: lwz     r3, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24032C:
    ctx->pc = 0x7F24032Cu;
    // 7F24032C: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240330:
    ctx->pc = 0x7F240330u;
    // 7F240330: cmplwi  r0, 0x0000
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

label_7F240334:
    ctx->pc = 0x7F240334u;
    // 7F240334: bc    12, 2, 0x7F240344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F240344;
        }
    }

label_7F240338:
    ctx->pc = 0x7F240338u;
    ctx->downcount -= 3;
    // 7F240338: lwz     r3, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24033C:
    ctx->pc = 0x7F24033Cu;
    // 7F24033C: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240340:
    ctx->pc = 0x7F240340u;
    // 7F240340: bl      0x7F013550
    {
            ctx->lr = 0x7F240344u;
            ctx->pc = 0x7F013550u;
            return;
    }

label_7F240344:
    ctx->pc = 0x7F240344u;
    ctx->downcount -= 3;
    // 7F240344: lwz     r0, 1128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240348:
    ctx->pc = 0x7F240348u;
    // 7F240348: rlwinm. r0, r0, 0, 31, 31
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

label_7F24034C:
    ctx->pc = 0x7F24034Cu;
    // 7F24034C: bc    12, 2, 0x7F240364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F240364;
        }
    }

label_7F240350:
    ctx->pc = 0x7F240350u;
    ctx->downcount -= 5;
    // 7F240350: lwz     r3, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240354:
    ctx->pc = 0x7F240354u;
    // 7F240354: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240358:
    ctx->pc = 0x7F240358u;
    // 7F240358: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24035C:
    ctx->pc = 0x7F24035Cu;
    // 7F24035C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240360:
    ctx->pc = 0x7F240360u;
    // 7F240360: b       0x7F240374
    {
            goto label_7F240374;
    }

label_7F240364:
    ctx->pc = 0x7F240364u;
    ctx->downcount -= 4;
    // 7F240364: lwz     r3, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240368:
    ctx->pc = 0x7F240368u;
    // 7F240368: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24036C:
    ctx->pc = 0x7F24036Cu;
    // 7F24036C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F240370:
    ctx->pc = 0x7F240370u;
    // 7F240370: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240374:
    ctx->pc = 0x7F240374u;
    ctx->downcount -= 5;
    // 7F240374: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F240378:
    ctx->pc = 0x7F240378u;
    // 7F240378: lwz     r3, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24037C:
    ctx->pc = 0x7F24037Cu;
    // 7F24037C: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F240380:
    ctx->pc = 0x7F240380u;
    // 7F240380: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240384:
    ctx->pc = 0x7F240384u;
    // 7F240384: bl      0x7F240488
    {
            ctx->lr = 0x7F240388u;
            goto label_7F240488;
    }

label_7F240388:
    ctx->pc = 0x7F240388u;
    ctx->downcount -= 10;
    // 7F240388: lwz     r6, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24038C:
    ctx->pc = 0x7F24038Cu;
    // 7F24038C: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F240390:
    ctx->pc = 0x7F240390u;
    // 7F240390: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F240394:
    ctx->pc = 0x7F240394u;
    // 7F240394: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F240398:
    ctx->pc = 0x7F240398u;
    // 7F240398: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24039C:
    ctx->pc = 0x7F24039Cu;
    // 7F24039C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2403A0:
    ctx->pc = 0x7F2403A0u;
    // 7F2403A0: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2403A4:
    ctx->pc = 0x7F2403A4u;
    // 7F2403A4: lwz     r28, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F2403A8:
    ctx->pc = 0x7F2403A8u;
    // 7F2403A8: lwz     r29, 180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(180);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2403AC:
    ctx->pc = 0x7F2403ACu;
    // 7F2403AC: bl      0x800261B4
    {
            ctx->lr = 0x7F2403B0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2403B0:
    ctx->pc = 0x7F2403B0u;
    ctx->downcount -= 3;
    // 7F2403B0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2403B4:
    ctx->pc = 0x7F2403B4u;
    // 7F2403B4: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F2403B8:
    ctx->pc = 0x7F2403B8u;
    // 7F2403B8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2403BCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2403BC:
    ctx->pc = 0x7F2403BCu;
    ctx->downcount -= 3;
    // 7F2403BC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2403C0:
    ctx->pc = 0x7F2403C0u;
    // 7F2403C0: addi    r3, r3, 11224
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11224);

label_7F2403C4:
    ctx->pc = 0x7F2403C4u;
    // 7F2403C4: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2403C8u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2403C8:
    ctx->pc = 0x7F2403C8u;
    ctx->downcount -= 8;
    // 7F2403C8: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F2403CC:
    ctx->pc = 0x7F2403CCu;
    // 7F2403CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2403D0:
    ctx->pc = 0x7F2403D0u;
    // 7F2403D0: add   r4, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2403D4:
    ctx->pc = 0x7F2403D4u;
    // 7F2403D4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F2403D8:
    ctx->pc = 0x7F2403D8u;
    // 7F2403D8: lwz     r31, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2403DC:
    ctx->pc = 0x7F2403DCu;
    // 7F2403DC: addi    r3, r3, -10256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10256);

label_7F2403E0:
    ctx->pc = 0x7F2403E0u;
    // 7F2403E0: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2403E4:
    ctx->pc = 0x7F2403E4u;
    // 7F2403E4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2403E8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2403E8:
    ctx->pc = 0x7F2403E8u;
    ctx->downcount -= 13;
    // 7F2403E8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2403EC:
    ctx->pc = 0x7F2403ECu;
    // 7F2403EC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2403F0:
    ctx->pc = 0x7F2403F0u;
    // 7F2403F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2403F4:
    ctx->pc = 0x7F2403F4u;
    // 7F2403F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2403F8:
    ctx->pc = 0x7F2403F8u;
    // 7F2403F8: lfd     f3, 19880(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2403F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19880);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2403FC:
    ctx->pc = 0x7F2403FCu;
    // 7F2403FC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F240400:
    ctx->pc = 0x7F240400u;
    // 7F240400: lfs     f2, 20012(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240400u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F240404:
    ctx->pc = 0x7F240404u;
    // 7F240404: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F240408:
    ctx->pc = 0x7F240408u;
    // 7F240408: lfs     f4, 20008(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F240408u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F24040C:
    ctx->pc = 0x7F24040Cu;
    // 7F24040C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F240410:
    ctx->pc = 0x7F240410u;
    // 7F240410: lfs     f1, 20004(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F240410u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240414:
    ctx->pc = 0x7F240414u;
    // 7F240414: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F240418:
    ctx->downcount -= 21;
    // 7F240418: subfic  r3, r5, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F24041C:
    ctx->pc = 0x7F24041Cu;
    // 7F24041C: stw     r4, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F240420:
    // 7F240420: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F240424:
    // 7F240424: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F240428:
    ctx->pc = 0x7F240428u;
    // 7F240428: stw     r0, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24042C:
    // 7F24042C: mulli   r3, r3, 3
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)3);

label_7F240430:
    ctx->pc = 0x7F240430u;
    // 7F240430: lfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240430u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F240434:
    // 7F240434: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F240438:
    ctx->pc = 0x7F240438u;
    // 7F240438: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F240438u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F24043C:
    ctx->pc = 0x7F24043Cu;
    // 7F24043C: sth     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F240440:
    ctx->pc = 0x7F240440u;
    // 7F240440: sth     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F240444:
    ctx->pc = 0x7F240444u;
    // 7F240444: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F240444u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F240448:
    ctx->pc = 0x7F240448u;
    // 7F240448: fmadds f0, f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F240448u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F24044C:
    ctx->pc = 0x7F24044Cu;
    // 7F24044C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24044Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F240450:
    ctx->pc = 0x7F240450u;
    // 7F240450: stfd     f0, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F240454:
    ctx->pc = 0x7F240454u;
    // 7F240454: lwz     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240458:
    ctx->pc = 0x7F240458u;
    // 7F240458: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24045C:
    // 7F24045C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F240460:
    // 7F240460: bc    16, 0, 0x7F240418
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240418u;
                return;
            }
            goto label_7F240418;
        }
    }

label_7F240464:
    ctx->pc = 0x7F240464u;
    ctx->downcount -= 20;
    // 7F240464: psq_l   f31, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F240464u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F240464u);
        if (ctx->exception) return;
    }

label_7F240468:
    ctx->pc = 0x7F240468u;
    // 7F240468: lfd     f31, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24046C:
    ctx->pc = 0x7F24046Cu;
    // 7F24046C: psq_l   f30, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24046Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F24046Cu);
        if (ctx->exception) return;
    }

label_7F240470:
    ctx->pc = 0x7F240470u;
    // 7F240470: lfd     f30, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F240474:
    ctx->pc = 0x7F240474u;
    // 7F240474: lmw     r27, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240478:
    ctx->pc = 0x7F240478u;
    // 7F240478: lwz     r0, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24047C:
    ctx->pc = 0x7F24047Cu;
    // 7F24047C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240480:
    ctx->pc = 0x7F240480u;
    // 7F240480: addi    r1, r1, 432
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(432);

label_7F240484:
    ctx->pc = 0x7F240484u;
    // 7F240484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240488:
    ctx->pc = 0x7F240488u;
    ctx->downcount -= 7;
    // 7F240488: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24048C:
    ctx->pc = 0x7F24048Cu;
    // 7F24048C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240490:
    ctx->pc = 0x7F240490u;
    // 7F240490: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240494:
    ctx->pc = 0x7F240494u;
    // 7F240494: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F240498:
    ctx->pc = 0x7F240498u;
    // 7F240498: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24049C:
    ctx->pc = 0x7F24049Cu;
    // 7F24049C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2404A0:
    ctx->pc = 0x7F2404A0u;
    // 7F2404A0: bl      0x7F01B234
    {
            ctx->lr = 0x7F2404A4u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F2404A4:
    ctx->pc = 0x7F2404A4u;
    ctx->downcount -= 7;
    // 7F2404A4: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2404A8:
    ctx->pc = 0x7F2404A8u;
    // 7F2404A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2404AC:
    ctx->pc = 0x7F2404ACu;
    // 7F2404AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2404B0:
    ctx->pc = 0x7F2404B0u;
    // 7F2404B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2404B4:
    ctx->pc = 0x7F2404B4u;
    // 7F2404B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2404B8:
    ctx->pc = 0x7F2404B8u;
    // 7F2404B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F2404BC:
    ctx->pc = 0x7F2404BCu;
    ctx->downcount -= 8;
    // 7F2404BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2404C0:
    ctx->pc = 0x7F2404C0u;
    // 7F2404C0: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2404C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2404C4:
    ctx->pc = 0x7F2404C4u;
    // 7F2404C4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2404C8:
    ctx->pc = 0x7F2404C8u;
    // 7F2404C8: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F2404CC:
    ctx->pc = 0x7F2404CCu;
    // 7F2404CC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2404D0:
    ctx->pc = 0x7F2404D0u;
    // 7F2404D0: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2404D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2404D4:
    ctx->pc = 0x7F2404D4u;
    // 7F2404D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2404D8:
    ctx->pc = 0x7F2404D8u;
    // 7F2404D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F2404DC:
    ctx->pc = 0x7F2404DCu;
    ctx->downcount -= 3;
    // 7F2404DC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2404E0:
    ctx->pc = 0x7F2404E0u;
    // 7F2404E0: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2404E4:
    ctx->pc = 0x7F2404E4u;
    // 7F2404E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F2404E8:
    ctx->pc = 0x7F2404E8u;
    ctx->downcount -= 7;
    // 7F2404E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2404EC:
    ctx->pc = 0x7F2404ECu;
    // 7F2404EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2404F0:
    ctx->pc = 0x7F2404F0u;
    // 7F2404F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2404F4:
    ctx->pc = 0x7F2404F4u;
    // 7F2404F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2404F8:
    ctx->pc = 0x7F2404F8u;
    // 7F2404F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2404FC:
    ctx->pc = 0x7F2404FCu;
    // 7F2404FC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F240500:
    ctx->pc = 0x7F240500u;
    // 7F240500: bl      0x7F023E10
    {
            ctx->lr = 0x7F240504u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F240504:
    ctx->pc = 0x7F240504u;
    ctx->downcount -= 2;
    // 7F240504: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F240508:
    ctx->pc = 0x7F240508u;
    // 7F240508: bl      0x7F042AAC
    {
            ctx->lr = 0x7F24050Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F24050C:
    ctx->pc = 0x7F24050Cu;
    ctx->downcount -= 2;
    // 7F24050C: addi    r3, r31, 896
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(896);

label_7F240510:
    ctx->pc = 0x7F240510u;
    // 7F240510: bl      0x7F0146B0
    {
            ctx->lr = 0x7F240514u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F240514:
    ctx->pc = 0x7F240514u;
    ctx->downcount -= 2;
    // 7F240514: addi    r3, r31, 1088
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1088);

label_7F240518:
    ctx->pc = 0x7F240518u;
    // 7F240518: bl      0x7F23A1C8
    {
            ctx->lr = 0x7F24051Cu;
            ctx->pc = 0x7F23A1C8u;
            return;
    }

label_7F24051C:
    ctx->pc = 0x7F24051Cu;
    ctx->downcount -= 2;
    // 7F24051C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240520:
    ctx->pc = 0x7F240520u;
    // 7F240520: bl      0x7F23F684
    {
            ctx->lr = 0x7F240524u;
            ctx->pc = 0x7F23F684u;
            return;
    }

label_7F240524:
    ctx->pc = 0x7F240524u;
    ctx->downcount -= 2;
    // 7F240524: lwz     r3, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240528:
    ctx->pc = 0x7F240528u;
    // 7F240528: bl      0x7F0259FC
    {
            ctx->lr = 0x7F24052Cu;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F24052C:
    ctx->pc = 0x7F24052Cu;
    ctx->downcount -= 16;
    // 7F24052C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240530:
    ctx->pc = 0x7F240530u;
    // 7F240530: lwz     r6, 1116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1116);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F240534:
    ctx->pc = 0x7F240534u;
    // 7F240534: addi    r4, r3, -5976
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5976);

label_7F240538:
    ctx->pc = 0x7F240538u;
    // 7F240538: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F24053C:
    ctx->pc = 0x7F24053Cu;
    // 7F24053C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240540:
    ctx->pc = 0x7F240540u;
    // 7F240540: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240544:
    ctx->pc = 0x7F240544u;
    // 7F240544: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F240548:
    ctx->pc = 0x7F240548u;
    // 7F240548: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F24054C:
    ctx->pc = 0x7F24054Cu;
    // 7F24054C: addi    r5, r5, -5896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5896);

label_7F240550:
    ctx->pc = 0x7F240550u;
    // 7F240550: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_7F240554:
    ctx->pc = 0x7F240554u;
    // 7F240554: stwx    r7, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F240558:
    ctx->pc = 0x7F240558u;
    // 7F240558: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24055C:
    ctx->pc = 0x7F24055Cu;
    // 7F24055C: sth     r7, -5898(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5898);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F240560:
    ctx->pc = 0x7F240560u;
    // 7F240560: lwz     r3, 1172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240564:
    ctx->pc = 0x7F240564u;
    // 7F240564: cmplwi  r3, 0x0000
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

label_7F240568:
    ctx->pc = 0x7F240568u;
    // 7F240568: bc    12, 2, 0x7F240570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F240570;
        }
    }

label_7F24056C:
    ctx->pc = 0x7F24056Cu;
    ctx->downcount -= 1;
    // 7F24056C: bl      0x7F3C2440
    {
            ctx->lr = 0x7F240570u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F240570:
    ctx->pc = 0x7F240570u;
    ctx->downcount -= 1;
    // 7F240570: bl      0x7F23F638
    {
            ctx->lr = 0x7F240574u;
            ctx->pc = 0x7F23F638u;
            return;
    }

label_7F240574:
    ctx->pc = 0x7F240574u;
    ctx->downcount -= 9;
    // 7F240574: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240578:
    ctx->pc = 0x7F240578u;
    // 7F240578: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24057C:
    ctx->pc = 0x7F24057Cu;
    // 7F24057C: stw     r0, -10264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240580:
    ctx->pc = 0x7F240580u;
    // 7F240580: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240584:
    ctx->pc = 0x7F240584u;
    // 7F240584: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F240588:
    ctx->pc = 0x7F240588u;
    // 7F240588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24058C:
    ctx->pc = 0x7F24058Cu;
    // 7F24058C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F240590:
    ctx->pc = 0x7F240590u;
    // 7F240590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240594:
    ctx->pc = 0x7F240594u;
    ctx->downcount -= 20;
    // 7F240594: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240598:
    ctx->pc = 0x7F240598u;
    // 7F240598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24059C:
    ctx->pc = 0x7F24059Cu;
    // 7F24059C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2405A0:
    ctx->pc = 0x7F2405A0u;
    // 7F2405A0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2405A4:
    ctx->pc = 0x7F2405A4u;
    // 7F2405A4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2405A8:
    ctx->pc = 0x7F2405A8u;
    // 7F2405A8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2405AC:
    ctx->pc = 0x7F2405ACu;
    // 7F2405AC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2405B0:
    ctx->pc = 0x7F2405B0u;
    // 7F2405B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2405B4:
    ctx->pc = 0x7F2405B4u;
    // 7F2405B4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2405B8:
    ctx->pc = 0x7F2405B8u;
    // 7F2405B8: bl      0x7F3C2534
    {
            ctx->lr = 0x7F2405BCu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F2405BC:
    ctx->pc = 0x7F2405BCu;
    ctx->downcount -= 6;
    // 7F2405BC: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F2405C0:
    ctx->pc = 0x7F2405C0u;
    // 7F2405C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2405C4:
    ctx->pc = 0x7F2405C4u;
    // 7F2405C4: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2405C8:
    ctx->pc = 0x7F2405C8u;
    // 7F2405C8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2405CC:
    ctx->pc = 0x7F2405CCu;
    // 7F2405CC: stw     r7, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2405D0:
    ctx->pc = 0x7F2405D0u;
    // 7F2405D0: stw     r7, 304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2405D4:
    ctx->downcount -= 4;
    // 7F2405D4: addi    r0, r7, 192
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(192);

label_7F2405D8:
    // 7F2405D8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2405DC:
    ctx->pc = 0x7F2405DCu;
    // 7F2405DC: lwzx    r8, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2405E0:
    // 7F2405E0: b       0x7F240638
    {
            goto label_7F240638;
    }

label_7F2405E4:
    ctx->downcount -= 9;
    // 7F2405E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2405E8:
    // 7F2405E8: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F2405EC:
    // 7F2405EC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F2405F0:
    // 7F2405F0: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F2405F4:
    // 7F2405F4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2405F8:
    ctx->pc = 0x7F2405F8u;
    // 7F2405F8: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_7F2405FC:
    // 7F2405FC: cmpwi   r31, 0
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

label_7F240600:
    // 7F240600: bc    4, 1, 0x7F240634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240634;
        }
    }

label_7F240604:
    loop_7F240604(ctx);
    if (ctx->pc == 0x7F240634u) goto label_7F240634;
    return;
label_7F240608:
    ctx->pc = 0x7F240608u;
    // 7F240608: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F24060C:
    ctx->pc = 0x7F24060Cu;
    // 7F24060C: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F240610:
    ctx->pc = 0x7F240610u;
    // 7F240610: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F240614:
    ctx->pc = 0x7F240614u;
    // 7F240614: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F240618:
    ctx->pc = 0x7F240618u;
    // 7F240618: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F24061C:
    ctx->pc = 0x7F24061Cu;
    // 7F24061C: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F240620:
    ctx->pc = 0x7F240620u;
    // 7F240620: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F240624:
    ctx->pc = 0x7F240624u;
    // 7F240624: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F240628:
    ctx->pc = 0x7F240628u;
    // 7F240628: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F24062C:
    // 7F24062C: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F240630:
    // 7F240630: bc    16, 0, 0x7F240604
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240604u;
                return;
            }
            goto label_7F240604;
        }
    }

label_7F240634:
    ctx->downcount -= 1;
    // 7F240634: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F240638:
    ctx->downcount -= 2;
    // 7F240638: cmpw    r10, r30
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24063C:
    // 7F24063C: bc    12, 0, 0x7F2405E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2405E4u;
                return;
            }
            goto label_7F2405E4;
        }
    }

label_7F240640:
    ctx->downcount -= 4;
    // 7F240640: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F240644:
    // 7F240644: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F240648:
    // 7F240648: cmpwi   r9, 2
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24064C:
    // 7F24064C: bc    12, 0, 0x7F2405D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2405D4u;
                return;
            }
            goto label_7F2405D4;
        }
    }

label_7F240650:
    ctx->pc = 0x7F240650u;
    ctx->downcount -= 16;
    // 7F240650: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240654:
    ctx->pc = 0x7F240654u;
    // 7F240654: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240658:
    ctx->pc = 0x7F240658u;
    // 7F240658: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24065C:
    ctx->pc = 0x7F24065Cu;
    // 7F24065C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F240660:
    ctx->pc = 0x7F240660u;
    // 7F240660: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240664:
    ctx->pc = 0x7F240664u;
    ctx->downcount -= 18;
    // 7F240664: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240668:
    ctx->pc = 0x7F240668u;
    // 7F240668: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24066C:
    ctx->pc = 0x7F24066Cu;
    // 7F24066C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240670:
    ctx->pc = 0x7F240670u;
    // 7F240670: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240674:
    ctx->pc = 0x7F240674u;
    // 7F240674: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240678:
    ctx->pc = 0x7F240678u;
    // 7F240678: lwz     r0, 1128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24067C:
    ctx->pc = 0x7F24067Cu;
    // 7F24067C: rlwinm. r0, r0, 0, 25, 25
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

label_7F240680:
    ctx->pc = 0x7F240680u;
    // 7F240680: bc    12, 2, 0x7F2406F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2406F4;
        }
    }

label_7F240684:
    ctx->pc = 0x7F240684u;
    ctx->downcount -= 5;
    // 7F240684: lwz     r3, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240688:
    ctx->pc = 0x7F240688u;
    // 7F240688: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24068C:
    ctx->pc = 0x7F24068Cu;
    // 7F24068C: subfic  r3, r3, 60
    {
        u64 res = (u64)(u32)(s32)(60) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F240690:
    ctx->pc = 0x7F240690u;
    // 7F240690: cmpwi   r3, 0
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

label_7F240694:
    ctx->pc = 0x7F240694u;
    // 7F240694: bc    12, 2, 0x7F24069C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24069C;
        }
    }

label_7F240698:
    ctx->pc = 0x7F240698u;
    ctx->downcount -= 1;
    // 7F240698: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24069C:
    ctx->pc = 0x7F24069Cu;
    ctx->downcount -= 2;
    // 7F24069C: rlwinm r29, r0, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2406A0:
    ctx->pc = 0x7F2406A0u;
    // 7F2406A0: bl      0x7F240738
    {
            ctx->lr = 0x7F2406A4u;
            goto label_7F240738;
    }

label_7F2406A4:
    ctx->pc = 0x7F2406A4u;
    ctx->downcount -= 55;
    // 7F2406A4: divwu   r6, r3, r29
    {
        u32 divisor = ctx->gpr[29];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F2406A8:
    ctx->pc = 0x7F2406A8u;
    // 7F2406A8: srawi r0, r29, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[29];
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

label_7F2406AC:
    ctx->pc = 0x7F2406ACu;
    // 7F2406AC: lha     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2406B0:
    ctx->pc = 0x7F2406B0u;
    // 7F2406B0: addze  r30, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[30] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2406B4:
    ctx->pc = 0x7F2406B4u;
    // 7F2406B4: lwz     r4, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2406B8:
    ctx->pc = 0x7F2406B8u;
    // 7F2406B8: mullw   r0, r6, r29
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[0] = (u32)product;
    }

label_7F2406BC:
    ctx->pc = 0x7F2406BCu;
    // 7F2406BC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2406C0:
    ctx->pc = 0x7F2406C0u;
    // 7F2406C0: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2406C4:
    ctx->pc = 0x7F2406C4u;
    // 7F2406C4: addi    r0, r3, 1024
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1024);

label_7F2406C8:
    ctx->pc = 0x7F2406C8u;
    // 7F2406C8: subf   r0, r30, r0
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2406CC:
    ctx->pc = 0x7F2406CCu;
    // 7F2406CC: sth     r0, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2406D0:
    ctx->pc = 0x7F2406D0u;
    // 7F2406D0: bl      0x7F240738
    {
            ctx->lr = 0x7F2406D4u;
            goto label_7F240738;
    }

label_7F2406D4:
    ctx->pc = 0x7F2406D4u;
    ctx->downcount -= 51;
    // 7F2406D4: divwu   r5, r3, r29
    {
        u32 divisor = ctx->gpr[29];
        ctx->gpr[5] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F2406D8:
    ctx->pc = 0x7F2406D8u;
    // 7F2406D8: lha     r0, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2406DC:
    ctx->pc = 0x7F2406DCu;
    // 7F2406DC: lwz     r4, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2406E0:
    ctx->pc = 0x7F2406E0u;
    // 7F2406E0: mullw   r5, r5, r29
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[5] = (u32)product;
    }

label_7F2406E4:
    ctx->pc = 0x7F2406E4u;
    // 7F2406E4: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F2406E8:
    ctx->pc = 0x7F2406E8u;
    // 7F2406E8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2406EC:
    ctx->pc = 0x7F2406ECu;
    // 7F2406EC: subf   r0, r30, r0
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2406F0:
    ctx->pc = 0x7F2406F0u;
    // 7F2406F0: sth     r0, 130(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(130);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2406F4:
    ctx->pc = 0x7F2406F4u;
    ctx->downcount -= 3;
    // 7F2406F4: lwz     r0, 1152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2406F8:
    ctx->pc = 0x7F2406F8u;
    // 7F2406F8: cmpwi   r0, 0
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

label_7F2406FC:
    ctx->pc = 0x7F2406FCu;
    // 7F2406FC: bc    4, 2, 0x7F240724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240724;
        }
    }

label_7F240700:
    ctx->pc = 0x7F240700u;
    ctx->downcount -= 6;
    // 7F240700: lwz     r4, 1108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240704:
    ctx->pc = 0x7F240704u;
    // 7F240704: li      r3, 2188
    ctx->gpr[3] = (u32)(s32)(2188);

label_7F240708:
    ctx->pc = 0x7F240708u;
    // 7F240708: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24070C:
    ctx->pc = 0x7F24070Cu;
    // 7F24070C: li      r6, 46
    ctx->gpr[6] = (u32)(s32)(46);

label_7F240710:
    ctx->pc = 0x7F240710u;
    // 7F240710: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F240714:
    ctx->pc = 0x7F240714u;
    // 7F240714: bl      0x7F0118D8
    {
            ctx->lr = 0x7F240718u;
            ctx->pc = 0x7F0118D8u;
            return;
    }

label_7F240718:
    ctx->pc = 0x7F240718u;
    ctx->downcount -= 3;
    // 7F240718: stw     r3, 1160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24071C:
    ctx->pc = 0x7F24071Cu;
    // 7F24071C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F240720:
    ctx->pc = 0x7F240720u;
    // 7F240720: stw     r0, 1152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240724:
    ctx->pc = 0x7F240724u;
    ctx->downcount -= 16;
    // 7F240724: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240728:
    ctx->pc = 0x7F240728u;
    // 7F240728: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24072C:
    ctx->pc = 0x7F24072Cu;
    // 7F24072C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240730:
    ctx->pc = 0x7F240730u;
    // 7F240730: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F240734:
    ctx->pc = 0x7F240734u;
    // 7F240734: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240738:
    ctx->pc = 0x7F240738u;
    ctx->downcount -= 13;
    // 7F240738: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24073C:
    ctx->pc = 0x7F24073Cu;
    // 7F24073C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F240740:
    ctx->pc = 0x7F240740u;
    // 7F240740: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F240744:
    ctx->pc = 0x7F240744u;
    // 7F240744: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240748:
    ctx->pc = 0x7F240748u;
    // 7F240748: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F24074C:
    ctx->pc = 0x7F24074Cu;
    // 7F24074C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F240750:
    ctx->pc = 0x7F240750u;
    // 7F240750: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F240754:
    ctx->pc = 0x7F240754u;
    // 7F240754: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F240758:
    ctx->pc = 0x7F240758u;
    // 7F240758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F24075C:
    ctx->pc = 0x7F24075Cu;
    ctx->downcount -= 32;
    // 7F24075C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240760:
    ctx->pc = 0x7F240760u;
    // 7F240760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240764:
    ctx->pc = 0x7F240764u;
    // 7F240764: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F240768:
    ctx->pc = 0x7F240768u;
    // 7F240768: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24076C:
    ctx->pc = 0x7F24076Cu;
    // 7F24076C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240770:
    ctx->pc = 0x7F240770u;
    // 7F240770: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F240774:
    ctx->pc = 0x7F240774u;
    // 7F240774: lfs     f1, 20016(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F240774u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240778:
    ctx->pc = 0x7F240778u;
    // 7F240778: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24077C:
    ctx->pc = 0x7F24077Cu;
    // 7F24077C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240780:
    ctx->pc = 0x7F240780u;
    // 7F240780: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240784:
    ctx->pc = 0x7F240784u;
    // 7F240784: lfs     f0, 19888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240784u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240788:
    ctx->pc = 0x7F240788u;
    // 7F240788: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24078C:
    ctx->pc = 0x7F24078Cu;
    // 7F24078C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F240790:
    ctx->pc = 0x7F240790u;
    // 7F240790: addi    r30, r31, 704
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(704);

label_7F240794:
    ctx->pc = 0x7F240794u;
    // 7F240794: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F240798:
    ctx->pc = 0x7F240798u;
    // 7F240798: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F24079C:
    ctx->pc = 0x7F24079Cu;
    // 7F24079C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24079Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2407A0:
    ctx->pc = 0x7F2407A0u;
    // 7F2407A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2407A4:
    ctx->pc = 0x7F2407A4u;
    // 7F2407A4: addi    r4, r4, 20481
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20481);

label_7F2407A8:
    ctx->pc = 0x7F2407A8u;
    // 7F2407A8: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2407A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2407AC:
    ctx->pc = 0x7F2407ACu;
    // 7F2407AC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2407ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2407B0:
    ctx->pc = 0x7F2407B0u;
    // 7F2407B0: bl      0x7F014788
    {
            ctx->lr = 0x7F2407B4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2407B4:
    ctx->pc = 0x7F2407B4u;
    ctx->downcount -= 4;
    // 7F2407B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2407B8:
    ctx->pc = 0x7F2407B8u;
    // 7F2407B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2407BC:
    ctx->pc = 0x7F2407BCu;
    // 7F2407BC: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_7F2407C0:
    ctx->pc = 0x7F2407C0u;
    // 7F2407C0: bl      0x7F014B60
    {
            ctx->lr = 0x7F2407C4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F2407C4:
    ctx->pc = 0x7F2407C4u;
    ctx->downcount -= 3;
    // 7F2407C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2407C8:
    ctx->pc = 0x7F2407C8u;
    // 7F2407C8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F2407CC:
    ctx->pc = 0x7F2407CCu;
    // 7F2407CC: bl      0x7F01488C
    {
            ctx->lr = 0x7F2407D0u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F2407D0:
    ctx->pc = 0x7F2407D0u;
    ctx->downcount -= 5;
    // 7F2407D0: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F2407D4:
    ctx->pc = 0x7F2407D4u;
    // 7F2407D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2407D8:
    ctx->pc = 0x7F2407D8u;
    // 7F2407D8: addi    r4, r4, -4520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4520);

label_7F2407DC:
    ctx->pc = 0x7F2407DCu;
    // 7F2407DC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2407E0:
    ctx->pc = 0x7F2407E0u;
    // 7F2407E0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2407E4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2407E4:
    ctx->pc = 0x7F2407E4u;
    ctx->downcount -= 18;
    // 7F2407E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2407E8:
    ctx->pc = 0x7F2407E8u;
    // 7F2407E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2407EC:
    ctx->pc = 0x7F2407ECu;
    // 7F2407EC: addi    r5, r3, 20016
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20016);

label_7F2407F0:
    ctx->pc = 0x7F2407F0u;
    // 7F2407F0: lfs     f0, 19888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2407F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2407F4:
    ctx->pc = 0x7F2407F4u;
    // 7F2407F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2407F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2407F8:
    ctx->pc = 0x7F2407F8u;
    // 7F2407F8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2407FC:
    ctx->pc = 0x7F2407FCu;
    // 7F2407FC: lis     r4, 528
    ctx->gpr[4] = ((u32)(s32)(528) << 16);

label_7F240800:
    ctx->pc = 0x7F240800u;
    // 7F240800: addi    r30, r31, 896
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(896);

label_7F240804:
    ctx->pc = 0x7F240804u;
    // 7F240804: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240808:
    ctx->pc = 0x7F240808u;
    // 7F240808: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F24080C:
    ctx->pc = 0x7F24080Cu;
    // 7F24080C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240810:
    ctx->pc = 0x7F240810u;
    // 7F240810: addi    r4, r4, 16385
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16385);

label_7F240814:
    ctx->pc = 0x7F240814u;
    // 7F240814: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240818:
    ctx->pc = 0x7F240818u;
    // 7F240818: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24081C:
    ctx->pc = 0x7F24081Cu;
    // 7F24081C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F240820:
    ctx->pc = 0x7F240820u;
    // 7F240820: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F240824:
    ctx->pc = 0x7F240824u;
    // 7F240824: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F240828:
    ctx->pc = 0x7F240828u;
    // 7F240828: bl      0x7F014788
    {
            ctx->lr = 0x7F24082Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F24082C:
    ctx->pc = 0x7F24082Cu;
    ctx->downcount -= 3;
    // 7F24082C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240830:
    ctx->pc = 0x7F240830u;
    // 7F240830: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F240834:
    ctx->pc = 0x7F240834u;
    // 7F240834: bl      0x7F01488C
    {
            ctx->lr = 0x7F240838u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F240838:
    ctx->pc = 0x7F240838u;
    ctx->downcount -= 5;
    // 7F240838: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F24083C:
    ctx->pc = 0x7F24083Cu;
    // 7F24083C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240840:
    ctx->pc = 0x7F240840u;
    // 7F240840: addi    r4, r4, -4388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4388);

label_7F240844:
    ctx->pc = 0x7F240844u;
    // 7F240844: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240848:
    ctx->pc = 0x7F240848u;
    // 7F240848: bl      0x7F014B6C
    {
            ctx->lr = 0x7F24084Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F24084C:
    ctx->pc = 0x7F24084Cu;
    ctx->downcount -= 2;
    // 7F24084C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240850:
    ctx->pc = 0x7F240850u;
    // 7F240850: bl      0x7F0148A0
    {
            ctx->lr = 0x7F240854u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F240854:
    ctx->pc = 0x7F240854u;
    ctx->downcount -= 16;
    // 7F240854: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240858:
    ctx->pc = 0x7F240858u;
    // 7F240858: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24085C:
    ctx->pc = 0x7F24085Cu;
    // 7F24085C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240860:
    ctx->pc = 0x7F240860u;
    // 7F240860: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F240864:
    ctx->pc = 0x7F240864u;
    // 7F240864: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240868:
    ctx->pc = 0x7F240868u;
    ctx->downcount -= 22;
    // 7F240868: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24086C:
    ctx->pc = 0x7F24086Cu;
    // 7F24086C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240870:
    ctx->pc = 0x7F240870u;
    // 7F240870: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240874:
    ctx->pc = 0x7F240874u;
    // 7F240874: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240878:
    ctx->pc = 0x7F240878u;
    // 7F240878: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24087C:
    ctx->pc = 0x7F24087Cu;
    // 7F24087C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240880:
    ctx->pc = 0x7F240880u;
    // 7F240880: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F240884:
    ctx->pc = 0x7F240884u;
    // 7F240884: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240888:
    ctx->pc = 0x7F240888u;
    // 7F240888: addi    r6, r31, 32
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(32);

label_7F24088C:
    ctx->pc = 0x7F24088Cu;
    // 7F24088C: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F240890:
    ctx->pc = 0x7F240890u;
    // 7F240890: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F240894:
    ctx->pc = 0x7F240894u;
    // 7F240894: bl      0x7F1C7B2C
    {
            ctx->lr = 0x7F240898u;
            ctx->pc = 0x7F1C7B2Cu;
            return;
    }

label_7F240898:
    ctx->pc = 0x7F240898u;
    ctx->downcount -= 6;
    // 7F240898: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_7F24089C:
    ctx->pc = 0x7F24089Cu;
    // 7F24089C: lwz     r5, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2408A0:
    ctx->pc = 0x7F2408A0u;
    // 7F2408A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2408A4:
    ctx->pc = 0x7F2408A4u;
    // 7F2408A4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F2408A8:
    ctx->pc = 0x7F2408A8u;
    // 7F2408A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2408AC:
    ctx->pc = 0x7F2408ACu;
    // 7F2408AC: bl      0x7F022FB4
    {
            ctx->lr = 0x7F2408B0u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F2408B0:
    ctx->pc = 0x7F2408B0u;
    ctx->downcount -= 2;
    // 7F2408B0: cmpwi   r3, 0
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

label_7F2408B4:
    ctx->pc = 0x7F2408B4u;
    // 7F2408B4: bc    4, 0, 0x7F2408C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2408C0;
        }
    }

label_7F2408B8:
    ctx->pc = 0x7F2408B8u;
    ctx->downcount -= 2;
    // 7F2408B8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2408BC:
    ctx->pc = 0x7F2408BCu;
    // 7F2408BC: b       0x7F240954
    {
            goto label_7F240954;
    }

label_7F2408C0:
    ctx->pc = 0x7F2408C0u;
    ctx->downcount -= 10;
    // 7F2408C0: lha     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2408C4:
    ctx->pc = 0x7F2408C4u;
    // 7F2408C4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2408C8:
    ctx->pc = 0x7F2408C8u;
    // 7F2408C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2408CC:
    ctx->pc = 0x7F2408CCu;
    // 7F2408CC: addi    r0, r5, -1024
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1024);

label_7F2408D0:
    ctx->pc = 0x7F2408D0u;
    // 7F2408D0: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2408D4:
    ctx->pc = 0x7F2408D4u;
    // 7F2408D4: lha     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2408D8:
    ctx->pc = 0x7F2408D8u;
    // 7F2408D8: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2408DC:
    ctx->pc = 0x7F2408DCu;
    // 7F2408DC: lha     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2408E0:
    ctx->pc = 0x7F2408E0u;
    // 7F2408E0: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2408E4:
    ctx->pc = 0x7F2408E4u;
    // 7F2408E4: bl      0x7F3CC414
    {
            ctx->lr = 0x7F2408E8u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F2408E8:
    ctx->pc = 0x7F2408E8u;
    ctx->downcount -= 4;
    // 7F2408E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2408EC:
    ctx->pc = 0x7F2408ECu;
    // 7F2408EC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2408F0:
    ctx->pc = 0x7F2408F0u;
    // 7F2408F0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2408F4:
    ctx->pc = 0x7F2408F4u;
    // 7F2408F4: bl      0x7F023F1C
    {
            ctx->lr = 0x7F2408F8u;
            ctx->pc = 0x7F023F1Cu;
            return;
    }

label_7F2408F8:
    ctx->pc = 0x7F2408F8u;
    ctx->downcount -= 2;
    // 7F2408F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2408FC:
    ctx->pc = 0x7F2408FCu;
    // 7F2408FC: bl      0x7F023FCC
    {
            ctx->lr = 0x7F240900u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F240900:
    ctx->pc = 0x7F240900u;
    ctx->downcount -= 2;
    // 7F240900: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240904:
    ctx->pc = 0x7F240904u;
    // 7F240904: bl      0x7F023FEC
    {
            ctx->lr = 0x7F240908u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F240908:
    ctx->pc = 0x7F240908u;
    ctx->downcount -= 3;
    // 7F240908: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24090C:
    ctx->pc = 0x7F24090Cu;
    // 7F24090C: addi    r3, r3, 11240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11240);

label_7F240910:
    ctx->pc = 0x7F240910u;
    // 7F240910: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F240914u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F240914:
    ctx->pc = 0x7F240914u;
    ctx->downcount -= 9;
    // 7F240914: stw     r3, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F240918:
    ctx->pc = 0x7F240918u;
    // 7F240918: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24091C:
    ctx->pc = 0x7F24091Cu;
    // 7F24091C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_7F240920:
    ctx->pc = 0x7F240920u;
    // 7F240920: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F240924:
    ctx->pc = 0x7F240924u;
    // 7F240924: lwz     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240928:
    ctx->pc = 0x7F240928u;
    // 7F240928: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F24092C:
    ctx->pc = 0x7F24092Cu;
    // 7F24092C: ori     r0, r0, 0x200C
    ctx->gpr[0] = ctx->gpr[0] | 0x200Cu;

label_7F240930:
    ctx->pc = 0x7F240930u;
    // 7F240930: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240934:
    ctx->pc = 0x7F240934u;
    // 7F240934: bl      0x7F023F7C
    {
            ctx->lr = 0x7F240938u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F240938:
    ctx->pc = 0x7F240938u;
    ctx->downcount -= 7;
    // 7F240938: li      r0, 132
    ctx->gpr[0] = (u32)(s32)(132);

label_7F24093C:
    ctx->pc = 0x7F24093Cu;
    // 7F24093C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240940:
    ctx->pc = 0x7F240940u;
    // 7F240940: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240944:
    ctx->pc = 0x7F240944u;
    // 7F240944: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240948:
    ctx->pc = 0x7F240948u;
    // 7F240948: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F24094C:
    ctx->pc = 0x7F24094Cu;
    // 7F24094C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F240950:
    ctx->pc = 0x7F240950u;
    // 7F240950: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F240954:
    ctx->pc = 0x7F240954u;
    ctx->downcount -= 16;
    // 7F240954: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240958:
    ctx->pc = 0x7F240958u;
    // 7F240958: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24095C:
    ctx->pc = 0x7F24095Cu;
    // 7F24095C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240960:
    ctx->pc = 0x7F240960u;
    // 7F240960: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F240964:
    ctx->pc = 0x7F240964u;
    // 7F240964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240968:
    ctx->pc = 0x7F240968u;
    ctx->downcount -= 21;
    // 7F240968: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24096C:
    ctx->pc = 0x7F24096Cu;
    // 7F24096C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240970:
    ctx->pc = 0x7F240970u;
    // 7F240970: lis     r4, 113
    ctx->gpr[4] = ((u32)(s32)(113) << 16);

label_7F240974:
    ctx->pc = 0x7F240974u;
    // 7F240974: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F240978:
    ctx->pc = 0x7F240978u;
    // 7F240978: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24097C:
    ctx->pc = 0x7F24097Cu;
    // 7F24097C: addi    r4, r4, 24361
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24361);

label_7F240980:
    ctx->pc = 0x7F240980u;
    // 7F240980: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240984:
    ctx->pc = 0x7F240984u;
    // 7F240984: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240988:
    ctx->pc = 0x7F240988u;
    // 7F240988: addi    r31, r30, 432
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(432);

label_7F24098C:
    ctx->pc = 0x7F24098Cu;
    // 7F24098C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240990:
    ctx->pc = 0x7F240990u;
    // 7F240990: bl      0x7F04272C
    {
            ctx->lr = 0x7F240994u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F240994:
    ctx->pc = 0x7F240994u;
    ctx->downcount -= 3;
    // 7F240994: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240998:
    ctx->pc = 0x7F240998u;
    // 7F240998: cmplwi  r0, 0x0000
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

label_7F24099C:
    ctx->pc = 0x7F24099Cu;
    // 7F24099C: bc    4, 2, 0x7F2409A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2409A8;
        }
    }

label_7F2409A0:
    ctx->pc = 0x7F2409A0u;
    ctx->downcount -= 2;
    // 7F2409A0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2409A4:
    ctx->pc = 0x7F2409A4u;
    // 7F2409A4: b       0x7F2409F8
    {
            goto label_7F2409F8;
    }

label_7F2409A8:
    ctx->pc = 0x7F2409A8u;
    ctx->downcount -= 7;
    // 7F2409A8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2409AC:
    ctx->pc = 0x7F2409ACu;
    // 7F2409AC: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F2409B0:
    ctx->pc = 0x7F2409B0u;
    // 7F2409B0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2409B4:
    ctx->pc = 0x7F2409B4u;
    // 7F2409B4: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2409B8:
    ctx->pc = 0x7F2409B8u;
    // 7F2409B8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2409BC:
    ctx->pc = 0x7F2409BCu;
    // 7F2409BC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2409C0:
    ctx->pc = 0x7F2409C0u;
    // 7F2409C0: bl      0x7F240A0C
    {
            ctx->lr = 0x7F2409C4u;
            goto label_7F240A0C;
    }

label_7F2409C4:
    ctx->pc = 0x7F2409C4u;
    ctx->downcount -= 3;
    // 7F2409C4: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2409C8:
    ctx->pc = 0x7F2409C8u;
    // 7F2409C8: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F2409CC:
    ctx->pc = 0x7F2409CCu;
    // 7F2409CC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2409D0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2409D0:
    ctx->pc = 0x7F2409D0u;
    ctx->downcount -= 2;
    // 7F2409D0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2409D4:
    ctx->pc = 0x7F2409D4u;
    // 7F2409D4: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F2409D8u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F2409D8:
    ctx->pc = 0x7F2409D8u;
    ctx->downcount -= 3;
    // 7F2409D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2409DC:
    ctx->pc = 0x7F2409DCu;
    // 7F2409DC: addi    r4, r30, 476
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(476);

label_7F2409E0:
    ctx->pc = 0x7F2409E0u;
    // 7F2409E0: bl      0x7F042B20
    {
            ctx->lr = 0x7F2409E4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F2409E4:
    ctx->pc = 0x7F2409E4u;
    ctx->downcount -= 5;
    // 7F2409E4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2409E8:
    ctx->pc = 0x7F2409E8u;
    // 7F2409E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2409EC:
    ctx->pc = 0x7F2409ECu;
    // 7F2409EC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2409F0:
    ctx->pc = 0x7F2409F0u;
    // 7F2409F0: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2409F4:
    ctx->pc = 0x7F2409F4u;
    // 7F2409F4: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2409F8:
    ctx->pc = 0x7F2409F8u;
    ctx->downcount -= 16;
    // 7F2409F8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2409FC:
    ctx->pc = 0x7F2409FCu;
    // 7F2409FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240A00:
    ctx->pc = 0x7F240A00u;
    // 7F240A00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240A04:
    ctx->pc = 0x7F240A04u;
    // 7F240A04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F240A08:
    ctx->pc = 0x7F240A08u;
    // 7F240A08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240A0C:
    ctx->pc = 0x7F240A0Cu;
    ctx->downcount -= 7;
    // 7F240A0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240A10:
    ctx->pc = 0x7F240A10u;
    // 7F240A10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240A14:
    ctx->pc = 0x7F240A14u;
    // 7F240A14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240A18:
    ctx->pc = 0x7F240A18u;
    // 7F240A18: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F240A1C:
    ctx->pc = 0x7F240A1Cu;
    // 7F240A1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240A20:
    ctx->pc = 0x7F240A20u;
    // 7F240A20: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240A24:
    ctx->pc = 0x7F240A24u;
    // 7F240A24: bl      0x7F01B234
    {
            ctx->lr = 0x7F240A28u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F240A28:
    ctx->pc = 0x7F240A28u;
    ctx->downcount -= 7;
    // 7F240A28: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F240A2C:
    ctx->pc = 0x7F240A2Cu;
    // 7F240A2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240A30:
    ctx->pc = 0x7F240A30u;
    // 7F240A30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F240A34:
    ctx->pc = 0x7F240A34u;
    // 7F240A34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240A38:
    ctx->pc = 0x7F240A38u;
    // 7F240A38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F240A3C:
    ctx->pc = 0x7F240A3Cu;
    // 7F240A3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240A40:
    ctx->pc = 0x7F240A40u;
    ctx->downcount -= 23;
    // 7F240A40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240A44:
    ctx->pc = 0x7F240A44u;
    // 7F240A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240A48:
    ctx->pc = 0x7F240A48u;
    // 7F240A48: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F240A4C:
    ctx->pc = 0x7F240A4Cu;
    // 7F240A4C: lis     r5, 22
    ctx->gpr[5] = ((u32)(s32)(22) << 16);

label_7F240A50:
    ctx->pc = 0x7F240A50u;
    // 7F240A50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240A54:
    ctx->pc = 0x7F240A54u;
    // 7F240A54: addi    r4, r4, -5852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5852);

label_7F240A58:
    ctx->pc = 0x7F240A58u;
    // 7F240A58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F240A5C:
    ctx->pc = 0x7F240A5Cu;
    // 7F240A5C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240A60:
    ctx->pc = 0x7F240A60u;
    // 7F240A60: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240A64:
    ctx->pc = 0x7F240A64u;
    // 7F240A64: addi    r3, r5, 29959
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(29959);

label_7F240A68:
    ctx->pc = 0x7F240A68u;
    // 7F240A68: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F240A6C:
    ctx->pc = 0x7F240A6Cu;
    // 7F240A6C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240A70:
    ctx->pc = 0x7F240A70u;
    // 7F240A70: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F240A74u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F240A74:
    ctx->pc = 0x7F240A74u;
    ctx->downcount -= 3;
    // 7F240A74: or.   r31, r3, r3
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

label_7F240A78:
    ctx->pc = 0x7F240A78u;
    // 7F240A78: stw     r31, 1168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F240A7C:
    ctx->pc = 0x7F240A7Cu;
    // 7F240A7C: bc    4, 2, 0x7F240A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240A88;
        }
    }

label_7F240A80:
    ctx->pc = 0x7F240A80u;
    ctx->downcount -= 2;
    // 7F240A80: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F240A84:
    ctx->pc = 0x7F240A84u;
    // 7F240A84: b       0x7F240B00
    {
            goto label_7F240B00;
    }

label_7F240A88:
    ctx->pc = 0x7F240A88u;
    ctx->downcount -= 3;
    // 7F240A88: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F240A8C:
    ctx->pc = 0x7F240A8Cu;
    // 7F240A8C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F240A90:
    ctx->pc = 0x7F240A90u;
    // 7F240A90: bl      0x7F026EBC
    {
            ctx->lr = 0x7F240A94u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F240A94:
    ctx->pc = 0x7F240A94u;
    ctx->downcount -= 3;
    // 7F240A94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240A98:
    ctx->pc = 0x7F240A98u;
    // 7F240A98: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F240A9C:
    ctx->pc = 0x7F240A9Cu;
    // 7F240A9C: bl      0x7F026F30
    {
            ctx->lr = 0x7F240AA0u;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F240AA0:
    ctx->pc = 0x7F240AA0u;
    ctx->downcount -= 3;
    // 7F240AA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240AA4:
    ctx->pc = 0x7F240AA4u;
    // 7F240AA4: li      r4, 500
    ctx->gpr[4] = (u32)(s32)(500);

label_7F240AA8:
    ctx->pc = 0x7F240AA8u;
    // 7F240AA8: bl      0x7F026F4C
    {
            ctx->lr = 0x7F240AACu;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F240AAC:
    ctx->pc = 0x7F240AACu;
    ctx->downcount -= 4;
    // 7F240AAC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F240AB0:
    ctx->pc = 0x7F240AB0u;
    // 7F240AB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240AB4:
    ctx->pc = 0x7F240AB4u;
    // 7F240AB4: lfs     f1, 20020(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240AB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240AB8:
    ctx->pc = 0x7F240AB8u;
    // 7F240AB8: bl      0x7F026F54
    {
            ctx->lr = 0x7F240ABCu;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F240ABC:
    ctx->pc = 0x7F240ABCu;
    ctx->downcount -= 6;
    // 7F240ABC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240AC0:
    ctx->pc = 0x7F240AC0u;
    // 7F240AC0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F240AC4:
    ctx->pc = 0x7F240AC4u;
    // 7F240AC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F240AC8:
    ctx->pc = 0x7F240AC8u;
    // 7F240AC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F240ACC:
    ctx->pc = 0x7F240ACCu;
    // 7F240ACC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F240AD0:
    ctx->pc = 0x7F240AD0u;
    // 7F240AD0: bl      0x7F026928
    {
            ctx->lr = 0x7F240AD4u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F240AD4:
    ctx->pc = 0x7F240AD4u;
    ctx->downcount -= 10;
    // 7F240AD4: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240AD8:
    ctx->pc = 0x7F240AD8u;
    // 7F240AD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240ADC:
    ctx->pc = 0x7F240ADCu;
    // 7F240ADC: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240AE0:
    ctx->pc = 0x7F240AE0u;
    // 7F240AE0: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F240AE4:
    ctx->pc = 0x7F240AE4u;
    // 7F240AE4: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240AE8:
    ctx->pc = 0x7F240AE8u;
    // 7F240AE8: lwz     r4, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240AEC:
    ctx->pc = 0x7F240AECu;
    // 7F240AEC: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240AF0:
    ctx->pc = 0x7F240AF0u;
    // 7F240AF0: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F240AF4:
    ctx->pc = 0x7F240AF4u;
    // 7F240AF4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240AF8:
    ctx->pc = 0x7F240AF8u;
    // 7F240AF8: bl      0x7F240B14
    {
            ctx->lr = 0x7F240AFCu;
            goto label_7F240B14;
    }

label_7F240AFC:
    ctx->pc = 0x7F240AFCu;
    ctx->downcount -= 1;
    // 7F240AFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240B00:
    ctx->pc = 0x7F240B00u;
    ctx->downcount -= 16;
    // 7F240B00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240B04:
    ctx->pc = 0x7F240B04u;
    // 7F240B04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240B08:
    ctx->pc = 0x7F240B08u;
    // 7F240B08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240B0C:
    ctx->pc = 0x7F240B0Cu;
    // 7F240B0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F240B10:
    ctx->pc = 0x7F240B10u;
    // 7F240B10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240B14:
    ctx->pc = 0x7F240B14u;
    ctx->downcount -= 10;
    // 7F240B14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240B18:
    ctx->pc = 0x7F240B18u;
    // 7F240B18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240B1C:
    ctx->pc = 0x7F240B1Cu;
    // 7F240B1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240B20:
    ctx->pc = 0x7F240B20u;
    // 7F240B20: lwz     r0, 1128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240B24:
    ctx->pc = 0x7F240B24u;
    // 7F240B24: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F240B28:
    ctx->pc = 0x7F240B28u;
    // 7F240B28: stw     r0, 1128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240B2C:
    ctx->pc = 0x7F240B2Cu;
    // 7F240B2C: lwz     r4, 1168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240B30:
    ctx->pc = 0x7F240B30u;
    // 7F240B30: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240B34:
    ctx->pc = 0x7F240B34u;
    // 7F240B34: cmplwi  r0, 0x0000
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

label_7F240B38:
    ctx->pc = 0x7F240B38u;
    // 7F240B38: bc    4, 2, 0x7F240B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240B4C;
        }
    }

label_7F240B3C:
    ctx->pc = 0x7F240B3Cu;
    ctx->downcount -= 4;
    // 7F240B3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F240B40:
    ctx->pc = 0x7F240B40u;
    // 7F240B40: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240B44:
    ctx->pc = 0x7F240B44u;
    // 7F240B44: lwz     r3, 1116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240B48:
    ctx->pc = 0x7F240B48u;
    // 7F240B48: bl      0x7F026B18
    {
            ctx->lr = 0x7F240B4Cu;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F240B4C:
    ctx->pc = 0x7F240B4Cu;
    ctx->downcount -= 5;
    // 7F240B4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240B50:
    ctx->pc = 0x7F240B50u;
    // 7F240B50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240B54:
    ctx->pc = 0x7F240B54u;
    // 7F240B54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F240B58:
    ctx->pc = 0x7F240B58u;
    // 7F240B58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240B5C:
    ctx->pc = 0x7F240B5Cu;
    ctx->downcount -= 21;
    // 7F240B5C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240B60:
    ctx->pc = 0x7F240B60u;
    // 7F240B60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240B64:
    ctx->pc = 0x7F240B64u;
    // 7F240B64: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240B68:
    ctx->pc = 0x7F240B68u;
    // 7F240B68: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240B6C:
    ctx->pc = 0x7F240B6Cu;
    // 7F240B6C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240B70:
    ctx->pc = 0x7F240B70u;
    // 7F240B70: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240B74:
    ctx->pc = 0x7F240B74u;
    // 7F240B74: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F240B78:
    ctx->pc = 0x7F240B78u;
    // 7F240B78: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F240B7C:
    ctx->pc = 0x7F240B7Cu;
    // 7F240B7C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F240B80:
    ctx->pc = 0x7F240B80u;
    // 7F240B80: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F240B84:
    ctx->pc = 0x7F240B84u;
    // 7F240B84: bl      0x7F3CC414
    {
            ctx->lr = 0x7F240B88u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F240B88:
    ctx->pc = 0x7F240B88u;
    ctx->downcount -= 14;
    // 7F240B88: lwz     r7, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F240B8C:
    ctx->pc = 0x7F240B8Cu;
    // 7F240B8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240B90:
    ctx->pc = 0x7F240B90u;
    // 7F240B90: lwz     r8, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F240B94:
    ctx->pc = 0x7F240B94u;
    // 7F240B94: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F240B98:
    ctx->pc = 0x7F240B98u;
    // 7F240B98: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F240B9C:
    ctx->pc = 0x7F240B9Cu;
    // 7F240B9C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F240BA0:
    ctx->pc = 0x7F240BA0u;
    // 7F240BA0: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240BA4:
    ctx->pc = 0x7F240BA4u;
    // 7F240BA4: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F240BA8:
    ctx->pc = 0x7F240BA8u;
    // 7F240BA8: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240BAC:
    ctx->pc = 0x7F240BACu;
    // 7F240BAC: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F240BB0:
    ctx->pc = 0x7F240BB0u;
    // 7F240BB0: stw     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F240BB4:
    ctx->pc = 0x7F240BB4u;
    // 7F240BB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240BB8:
    ctx->pc = 0x7F240BB8u;
    // 7F240BB8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240BB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F240BBC:
    ctx->pc = 0x7F240BBCu;
    // 7F240BBC: bl      0x7F240868
    {
            ctx->lr = 0x7F240BC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240868u;
                return;
            }
            goto label_7F240868;
    }

label_7F240BC0:
    ctx->pc = 0x7F240BC0u;
    ctx->downcount -= 2;
    // 7F240BC0: cmpwi   r3, 0
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

label_7F240BC4:
    ctx->pc = 0x7F240BC4u;
    // 7F240BC4: bc    4, 0, 0x7F240BD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240BD0;
        }
    }

label_7F240BC8:
    ctx->pc = 0x7F240BC8u;
    ctx->downcount -= 2;
    // 7F240BC8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F240BCC:
    ctx->pc = 0x7F240BCCu;
    // 7F240BCC: b       0x7F240DDC
    {
            goto label_7F240DDC;
    }

label_7F240BD0:
    ctx->pc = 0x7F240BD0u;
    ctx->downcount -= 3;
    // 7F240BD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240BD4:
    ctx->pc = 0x7F240BD4u;
    // 7F240BD4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F240BD8:
    ctx->pc = 0x7F240BD8u;
    // 7F240BD8: bl      0x7F240968
    {
            ctx->lr = 0x7F240BDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240968u;
                return;
            }
            goto label_7F240968;
    }

label_7F240BDC:
    ctx->pc = 0x7F240BDCu;
    ctx->downcount -= 2;
    // 7F240BDC: cmpwi   r3, 0
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

label_7F240BE0:
    ctx->pc = 0x7F240BE0u;
    // 7F240BE0: bc    4, 0, 0x7F240BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240BEC;
        }
    }

label_7F240BE4:
    ctx->pc = 0x7F240BE4u;
    ctx->downcount -= 2;
    // 7F240BE4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F240BE8:
    ctx->pc = 0x7F240BE8u;
    // 7F240BE8: b       0x7F240DDC
    {
            goto label_7F240DDC;
    }

label_7F240BEC:
    ctx->pc = 0x7F240BECu;
    ctx->downcount -= 2;
    // 7F240BEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240BF0:
    ctx->pc = 0x7F240BF0u;
    // 7F240BF0: bl      0x7F24075C
    {
            ctx->lr = 0x7F240BF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24075Cu;
                return;
            }
            goto label_7F24075C;
    }

label_7F240BF4:
    ctx->pc = 0x7F240BF4u;
    ctx->downcount -= 2;
    // 7F240BF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240BF8:
    ctx->pc = 0x7F240BF8u;
    // 7F240BF8: bl      0x7F240A40
    {
            ctx->lr = 0x7F240BFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240A40u;
                return;
            }
            goto label_7F240A40;
    }

label_7F240BFC:
    ctx->pc = 0x7F240BFCu;
    ctx->downcount -= 2;
    // 7F240BFC: cmpwi   r3, 0
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

label_7F240C00:
    ctx->pc = 0x7F240C00u;
    // 7F240C00: bc    4, 0, 0x7F240C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240C0C;
        }
    }

label_7F240C04:
    ctx->pc = 0x7F240C04u;
    ctx->downcount -= 2;
    // 7F240C04: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F240C08:
    ctx->pc = 0x7F240C08u;
    // 7F240C08: b       0x7F240DDC
    {
            goto label_7F240DDC;
    }

label_7F240C0C:
    ctx->pc = 0x7F240C0Cu;
    ctx->downcount -= 64;
    // 7F240C0C: stw     r29, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F240C10:
    ctx->pc = 0x7F240C10u;
    // 7F240C10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240C14:
    ctx->pc = 0x7F240C14u;
    // 7F240C14: mulli   r6, r31, 44
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)44);

label_7F240C18:
    ctx->pc = 0x7F240C18u;
    // 7F240C18: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F240C1C:
    ctx->pc = 0x7F240C1Cu;
    // 7F240C1C: lha     r0, -5900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5900);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F240C20:
    ctx->pc = 0x7F240C20u;
    // 7F240C20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240C24:
    ctx->pc = 0x7F240C24u;
    // 7F240C24: li      r7, 60
    ctx->gpr[7] = (u32)(s32)(60);

label_7F240C28:
    ctx->pc = 0x7F240C28u;
    // 7F240C28: stw     r0, 1136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240C2C:
    ctx->pc = 0x7F240C2Cu;
    // 7F240C2C: addi    r0, r5, 14080
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(14080);

label_7F240C30:
    ctx->pc = 0x7F240C30u;
    // 7F240C30: addi    r4, r3, 19872
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19872);

label_7F240C34:
    ctx->pc = 0x7F240C34u;
    // 7F240C34: stw     r7, 1140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F240C38:
    ctx->pc = 0x7F240C38u;
    // 7F240C38: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F240C3C:
    ctx->pc = 0x7F240C3Cu;
    // 7F240C3C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240C3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F240C40:
    ctx->pc = 0x7F240C40u;
    // 7F240C40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240C44:
    ctx->pc = 0x7F240C44u;
    // 7F240C44: stw     r0, 1112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240C48:
    ctx->pc = 0x7F240C48u;
    // 7F240C48: addi    r7, r3, 19940
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(19940);

label_7F240C4C:
    ctx->pc = 0x7F240C4Cu;
    // 7F240C4C: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F240C4Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F240C50:
    ctx->pc = 0x7F240C50u;
    // 7F240C50: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F240C54:
    ctx->pc = 0x7F240C54u;
    // 7F240C54: stw     r31, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F240C58:
    ctx->pc = 0x7F240C58u;
    // 7F240C58: addi    r0, r6, 21980
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(21980);

label_7F240C5C:
    ctx->pc = 0x7F240C5Cu;
    // 7F240C5C: rlwinm r7, r31, 4, 0, 27
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F240C60:
    ctx->pc = 0x7F240C60u;
    // 7F240C60: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F240C64:
    ctx->pc = 0x7F240C64u;
    // 7F240C64: stfs     f1, 676(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F240C64u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(676);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240C68:
    ctx->pc = 0x7F240C68u;
    // 7F240C68: addi    r9, r5, -5896
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-5896);

label_7F240C6C:
    ctx->pc = 0x7F240C6Cu;
    // 7F240C6C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240C70:
    ctx->pc = 0x7F240C70u;
    // 7F240C70: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F240C74:
    ctx->pc = 0x7F240C74u;
    // 7F240C74: stfs     f1, 668(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F240C74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(668);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F240C78:
    ctx->pc = 0x7F240C78u;
    // 7F240C78: addi    r8, r3, -5916
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5916);

label_7F240C7C:
    ctx->pc = 0x7F240C7Cu;
    // 7F240C7C: add   r29, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F240C80:
    ctx->pc = 0x7F240C80u;
    // 7F240C80: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F240C84:
    ctx->pc = 0x7F240C84u;
    // 7F240C84: stfs     f0, 672(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F240C84u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(672);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F240C88:
    ctx->pc = 0x7F240C88u;
    // 7F240C88: addi    r7, r4, -5976
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5976);

label_7F240C8C:
    ctx->pc = 0x7F240C8Cu;
    // 7F240C8C: rlwinm r10, r31, 2, 0, 29
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F240C90:
    ctx->pc = 0x7F240C90u;
    // 7F240C90: li      r11, 1
    ctx->gpr[11] = (u32)(s32)(1);

label_7F240C94:
    ctx->pc = 0x7F240C94u;
    // 7F240C94: stw     r12, 1152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1152);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F240C98:
    ctx->pc = 0x7F240C98u;
    // 7F240C98: addi    r3, r30, 1088
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1088);

label_7F240C9C:
    ctx->pc = 0x7F240C9Cu;
    // 7F240C9C: addi    r5, r30, 32
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(32);

label_7F240CA0:
    ctx->pc = 0x7F240CA0u;
    // 7F240CA0: addi    r6, r30, 48
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(48);

label_7F240CA4:
    ctx->pc = 0x7F240CA4u;
    // 7F240CA4: stw     r12, 1156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F240CA8:
    ctx->pc = 0x7F240CA8u;
    // 7F240CA8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F240CAC:
    ctx->pc = 0x7F240CACu;
    // 7F240CAC: stw     r12, 1164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F240CB0:
    ctx->pc = 0x7F240CB0u;
    // 7F240CB0: lwz     r12, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F240CB4:
    ctx->pc = 0x7F240CB4u;
    // 7F240CB4: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240CB8:
    ctx->pc = 0x7F240CB8u;
    // 7F240CB8: stw     r12, 684(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(684);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F240CBC:
    ctx->pc = 0x7F240CBCu;
    // 7F240CBC: stw     r0, 688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240CC0:
    ctx->pc = 0x7F240CC0u;
    // 7F240CC0: lwz     r12, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F240CC4:
    ctx->pc = 0x7F240CC4u;
    // 7F240CC4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240CC8:
    ctx->pc = 0x7F240CC8u;
    // 7F240CC8: stw     r12, 692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F240CCC:
    ctx->pc = 0x7F240CCCu;
    // 7F240CCC: stw     r0, 696(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240CD0:
    ctx->pc = 0x7F240CD0u;
    // 7F240CD0: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240CD4:
    ctx->pc = 0x7F240CD4u;
    // 7F240CD4: stwx    r11, r9, r10
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F240CD8:
    ctx->pc = 0x7F240CD8u;
    // 7F240CD8: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F240CDC:
    ctx->pc = 0x7F240CDCu;
    // 7F240CDC: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240CE0:
    ctx->pc = 0x7F240CE0u;
    // 7F240CE0: lwz     r7, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F240CE4:
    ctx->pc = 0x7F240CE4u;
    // 7F240CE4: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240CE8:
    ctx->pc = 0x7F240CE8u;
    // 7F240CE8: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F240CEC:
    ctx->pc = 0x7F240CECu;
    // 7F240CEC: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240CF0:
    ctx->pc = 0x7F240CF0u;
    // 7F240CF0: lwz     r7, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F240CF4:
    ctx->pc = 0x7F240CF4u;
    // 7F240CF4: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240CF8:
    ctx->pc = 0x7F240CF8u;
    // 7F240CF8: stw     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F240CFC:
    ctx->pc = 0x7F240CFCu;
    // 7F240CFC: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240D00:
    ctx->pc = 0x7F240D00u;
    // 7F240D00: bl      0x7F23A19C
    {
            ctx->lr = 0x7F240D04u;
            ctx->pc = 0x7F23A19Cu;
            return;
    }

label_7F240D04:
    ctx->pc = 0x7F240D04u;
    ctx->downcount -= 2;
    // 7F240D04: addi    r3, r30, 1088
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1088);

label_7F240D08:
    ctx->pc = 0x7F240D08u;
    // 7F240D08: bl      0x7F23A1B4
    {
            ctx->lr = 0x7F240D0Cu;
            ctx->pc = 0x7F23A1B4u;
            return;
    }

label_7F240D0C:
    ctx->pc = 0x7F240D0Cu;
    ctx->downcount -= 3;
    // 7F240D0C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F240D10:
    ctx->pc = 0x7F240D10u;
    // 7F240D10: addi    r3, r3, 11248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11248);

label_7F240D14:
    ctx->pc = 0x7F240D14u;
    // 7F240D14: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F240D18u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F240D18:
    ctx->pc = 0x7F240D18u;
    ctx->downcount -= 1;
    // 7F240D18: bl      0x7F3B6420
    {
            ctx->lr = 0x7F240D1Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F240D1C:
    ctx->pc = 0x7F240D1Cu;
    ctx->downcount -= 7;
    // 7F240D1C: lis     r5, 10
    ctx->gpr[5] = ((u32)(s32)(10) << 16);

label_7F240D20:
    ctx->pc = 0x7F240D20u;
    // 7F240D20: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240D24:
    ctx->pc = 0x7F240D24u;
    // 7F240D24: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F240D28:
    ctx->pc = 0x7F240D28u;
    // 7F240D28: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F240D2C:
    ctx->pc = 0x7F240D2Cu;
    // 7F240D2C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F240D30:
    ctx->pc = 0x7F240D30u;
    // 7F240D30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F240D34:
    ctx->pc = 0x7F240D34u;
    // 7F240D34: bl      0x7F3C2408
    {
            ctx->lr = 0x7F240D38u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F240D38:
    ctx->pc = 0x7F240D38u;
    ctx->downcount -= 3;
    // 7F240D38: or.   r4, r3, r3
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

label_7F240D3C:
    ctx->pc = 0x7F240D3Cu;
    // 7F240D3C: stw     r3, 1172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F240D40:
    ctx->pc = 0x7F240D40u;
    // 7F240D40: bc    4, 2, 0x7F240D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240D4C;
        }
    }

label_7F240D44:
    ctx->pc = 0x7F240D44u;
    ctx->downcount -= 2;
    // 7F240D44: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F240D48:
    ctx->pc = 0x7F240D48u;
    // 7F240D48: b       0x7F240DDC
    {
            goto label_7F240DDC;
    }

label_7F240D4C:
    ctx->pc = 0x7F240D4Cu;
    ctx->downcount -= 5;
    // 7F240D4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240D50:
    ctx->pc = 0x7F240D50u;
    // 7F240D50: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F240D54:
    ctx->pc = 0x7F240D54u;
    // 7F240D54: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F240D58:
    ctx->pc = 0x7F240D58u;
    // 7F240D58: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F240D5C:
    ctx->pc = 0x7F240D5Cu;
    // 7F240D5C: bl      0x7F240594
    {
            ctx->lr = 0x7F240D60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240594u;
                return;
            }
            goto label_7F240594;
    }

label_7F240D60:
    ctx->pc = 0x7F240D60u;
    ctx->downcount -= 14;
    // 7F240D60: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F240D64:
    ctx->pc = 0x7F240D64u;
    // 7F240D64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F240D68:
    ctx->pc = 0x7F240D68u;
    // 7F240D68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F240D6C:
    ctx->pc = 0x7F240D6Cu;
    // 7F240D6C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F240D70:
    ctx->pc = 0x7F240D70u;
    // 7F240D70: lfs     f2, 20024(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F240D70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F240D74:
    ctx->pc = 0x7F240D74u;
    // 7F240D74: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F240D78:
    ctx->pc = 0x7F240D78u;
    // 7F240D78: lfd     f1, 19880(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F240D78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19880);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F240D7C:
    ctx->pc = 0x7F240D7Cu;
    // 7F240D7C: addi    r5, r5, -10256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10256);

label_7F240D80:
    ctx->pc = 0x7F240D80u;
    // 7F240D80: lfs     f3, 19872(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F240D80u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(19872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F240D84:
    ctx->pc = 0x7F240D84u;
    // 7F240D84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F240D88:
    ctx->pc = 0x7F240D88u;
    // 7F240D88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240D8C:
    ctx->pc = 0x7F240D8Cu;
    // 7F240D8C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F240D90:
    ctx->pc = 0x7F240D90u;
    // 7F240D90: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F240D94:
    ctx->downcount -= 14;
    // 7F240D94: addi    r0, r7, 1
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(1);

label_7F240D98:
    // 7F240D98: add   r6, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F240D9C:
    // 7F240D9C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F240DA0:
    ctx->pc = 0x7F240DA0u;
    // 7F240DA0: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F240DA4:
    // 7F240DA4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F240DA8:
    // 7F240DA8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F240DAC:
    ctx->pc = 0x7F240DACu;
    // 7F240DAC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240DB0:
    ctx->pc = 0x7F240DB0u;
    // 7F240DB0: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240DB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F240DB4:
    ctx->pc = 0x7F240DB4u;
    // 7F240DB4: stfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F240DB4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F240DB8:
    ctx->pc = 0x7F240DB8u;
    // 7F240DB8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F240DB8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F240DBC:
    ctx->pc = 0x7F240DBCu;
    // 7F240DBC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F240DBCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F240DC0:
    ctx->pc = 0x7F240DC0u;
    // 7F240DC0: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F240DC0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F240DC4:
    ctx->pc = 0x7F240DC4u;
    // 7F240DC4: stfs     f3, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F240DC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F240DC8:
    // 7F240DC8: bc    16, 0, 0x7F240D94
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240D94u;
                return;
            }
            goto label_7F240D94;
        }
    }

label_7F240DCC:
    ctx->pc = 0x7F240DCCu;
    ctx->downcount -= 4;
    // 7F240DCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F240DD0:
    ctx->pc = 0x7F240DD0u;
    // 7F240DD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240DD4:
    ctx->pc = 0x7F240DD4u;
    // 7F240DD4: stw     r0, 1144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240DD8:
    ctx->pc = 0x7F240DD8u;
    // 7F240DD8: stw     r0, 1148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240DDC:
    ctx->pc = 0x7F240DDCu;
    ctx->downcount -= 16;
    // 7F240DDC: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240DE0:
    ctx->pc = 0x7F240DE0u;
    // 7F240DE0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240DE4:
    ctx->pc = 0x7F240DE4u;
    // 7F240DE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240DE8:
    ctx->pc = 0x7F240DE8u;
    // 7F240DE8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F240DEC:
    ctx->pc = 0x7F240DECu;
    // 7F240DEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240DF0:
    ctx->pc = 0x7F240DF0u;
    ctx->downcount -= 23;
    // 7F240DF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240DF4:
    ctx->pc = 0x7F240DF4u;
    // 7F240DF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240DF8:
    ctx->pc = 0x7F240DF8u;
    // 7F240DF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240DFC:
    ctx->pc = 0x7F240DFCu;
    // 7F240DFC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240E00:
    ctx->pc = 0x7F240E00u;
    // 7F240E00: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240E04:
    ctx->pc = 0x7F240E04u;
    // 7F240E04: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240E08:
    ctx->pc = 0x7F240E08u;
    // 7F240E08: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F240E0C:
    ctx->pc = 0x7F240E0Cu;
    // 7F240E0C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F240E10:
    ctx->pc = 0x7F240E10u;
    // 7F240E10: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F240E14:
    ctx->pc = 0x7F240E14u;
    // 7F240E14: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F240E18:
    ctx->pc = 0x7F240E18u;
    // 7F240E18: li      r5, 1200
    ctx->gpr[5] = (u32)(s32)(1200);

label_7F240E1C:
    ctx->pc = 0x7F240E1Cu;
    // 7F240E1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F240E20:
    ctx->pc = 0x7F240E20u;
    // 7F240E20: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F240E24u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F240E24:
    ctx->pc = 0x7F240E24u;
    ctx->downcount -= 2;
    // 7F240E24: or.   r31, r3, r3
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

label_7F240E28:
    ctx->pc = 0x7F240E28u;
    // 7F240E28: bc    12, 2, 0x7F240EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F240EC8;
        }
    }

label_7F240E2C:
    ctx->pc = 0x7F240E2Cu;
    ctx->downcount -= 5;
    // 7F240E2C: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F240E30:
    ctx->pc = 0x7F240E30u;
    // 7F240E30: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F240E34:
    ctx->pc = 0x7F240E34u;
    // 7F240E34: addi    r4, r4, -2284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2284);

label_7F240E38:
    ctx->pc = 0x7F240E38u;
    // 7F240E38: addi    r5, r5, 1256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1256);

label_7F240E3C:
    ctx->pc = 0x7F240E3Cu;
    // 7F240E3C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F240E40u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F240E40:
    ctx->pc = 0x7F240E40u;
    ctx->downcount -= 6;
    // 7F240E40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240E44:
    ctx->pc = 0x7F240E44u;
    // 7F240E44: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F240E48:
    ctx->pc = 0x7F240E48u;
    // 7F240E48: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F240E4C:
    ctx->pc = 0x7F240E4Cu;
    // 7F240E4C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F240E50:
    ctx->pc = 0x7F240E50u;
    // 7F240E50: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240E54:
    ctx->pc = 0x7F240E54u;
    // 7F240E54: bl      0x7F240B5C
    {
            ctx->lr = 0x7F240E58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240B5Cu;
                return;
            }
            goto label_7F240B5C;
    }

label_7F240E58:
    ctx->pc = 0x7F240E58u;
    ctx->downcount -= 2;
    // 7F240E58: cmpwi   r3, 0
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

label_7F240E5C:
    ctx->pc = 0x7F240E5Cu;
    // 7F240E5C: bc    4, 0, 0x7F240E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240E70;
        }
    }

label_7F240E60:
    ctx->pc = 0x7F240E60u;
    ctx->downcount -= 2;
    // 7F240E60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240E64:
    ctx->pc = 0x7F240E64u;
    // 7F240E64: bl      0x7F3C8210
    {
            ctx->lr = 0x7F240E68u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F240E68:
    ctx->pc = 0x7F240E68u;
    ctx->downcount -= 2;
    // 7F240E68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240E6C:
    ctx->pc = 0x7F240E6Cu;
    // 7F240E6C: b       0x7F240F0C
    {
            goto label_7F240F0C;
    }

label_7F240E70:
    ctx->pc = 0x7F240E70u;
    ctx->downcount -= 9;
    // 7F240E70: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F240E74:
    ctx->pc = 0x7F240E74u;
    // 7F240E74: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F240E78:
    ctx->pc = 0x7F240E78u;
    // 7F240E78: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240E7C:
    ctx->pc = 0x7F240E7Cu;
    // 7F240E7C: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F240E80:
    ctx->pc = 0x7F240E80u;
    // 7F240E80: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F240E84:
    ctx->pc = 0x7F240E84u;
    // 7F240E84: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F240E88:
    ctx->pc = 0x7F240E88u;
    // 7F240E88: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F240E8C:
    ctx->pc = 0x7F240E8Cu;
    // 7F240E8C: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F240E90:
    ctx->pc = 0x7F240E90u;
    // 7F240E90: bc    4, 1, 0x7F240EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240EA0;
        }
    }

label_7F240E94:
    ctx->pc = 0x7F240E94u;
    ctx->downcount -= 3;
    // 7F240E94: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240E98:
    ctx->pc = 0x7F240E98u;
    // 7F240E98: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F240E9C:
    ctx->pc = 0x7F240E9Cu;
    // 7F240E9C: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F240EA0:
    ctx->pc = 0x7F240EA0u;
    ctx->downcount -= 3;
    // 7F240EA0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F240EA4:
    ctx->pc = 0x7F240EA4u;
    // 7F240EA4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F240EA8:
    ctx->pc = 0x7F240EA8u;
    // 7F240EA8: bl      0x7F01EC24
    {
            ctx->lr = 0x7F240EACu;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F240EAC:
    ctx->pc = 0x7F240EACu;
    ctx->downcount -= 3;
    // 7F240EAC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F240EB0:
    ctx->pc = 0x7F240EB0u;
    // 7F240EB0: addi    r3, r3, 11260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11260);

label_7F240EB4:
    ctx->pc = 0x7F240EB4u;
    // 7F240EB4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F240EB8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F240EB8:
    ctx->pc = 0x7F240EB8u;
    ctx->downcount -= 2;
    // 7F240EB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F240EBC:
    ctx->pc = 0x7F240EBCu;
    // 7F240EBC: bl      0x7F013E60
    {
            ctx->lr = 0x7F240EC0u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F240EC0:
    ctx->pc = 0x7F240EC0u;
    ctx->downcount -= 2;
    // 7F240EC0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F240EC4:
    ctx->pc = 0x7F240EC4u;
    // 7F240EC4: bl      0x7F2568E4
    {
            ctx->lr = 0x7F240EC8u;
            ctx->pc = 0x7F2568E4u;
            return;
    }

label_7F240EC8:
    ctx->pc = 0x7F240EC8u;
    ctx->downcount -= 3;
    // 7F240EC8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240ECC:
    ctx->pc = 0x7F240ECCu;
    // 7F240ECC: stw     r31, -10264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10264);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F240ED0:
    ctx->pc = 0x7F240ED0u;
    // 7F240ED0: bl      0x7F01C474
    {
            ctx->lr = 0x7F240ED4u;
            ctx->pc = 0x7F01C474u;
            return;
    }

label_7F240ED4:
    ctx->pc = 0x7F240ED4u;
    ctx->downcount -= 8;
    // 7F240ED4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F240ED8:
    ctx->pc = 0x7F240ED8u;
    // 7F240ED8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240EDC:
    ctx->pc = 0x7F240EDCu;
    // 7F240EDC: addi    r4, r4, -5848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5848);

label_7F240EE0:
    ctx->pc = 0x7F240EE0u;
    // 7F240EE0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240EE4:
    ctx->pc = 0x7F240EE4u;
    // 7F240EE4: addi    r3, r3, -5920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5920);

label_7F240EE8:
    ctx->pc = 0x7F240EE8u;
    // 7F240EE8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240EEC:
    ctx->pc = 0x7F240EECu;
    // 7F240EEC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240EF0:
    ctx->pc = 0x7F240EF0u;
    // 7F240EF0: bl      0x7F01C400
    {
            ctx->lr = 0x7F240EF4u;
            ctx->pc = 0x7F01C400u;
            return;
    }

label_7F240EF4:
    ctx->pc = 0x7F240EF4u;
    ctx->downcount -= 5;
    // 7F240EF4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240EF8:
    ctx->pc = 0x7F240EF8u;
    // 7F240EF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F240EFC:
    ctx->pc = 0x7F240EFCu;
    // 7F240EFC: addi    r3, r3, -5920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5920);

label_7F240F00:
    ctx->pc = 0x7F240F00u;
    // 7F240F00: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240F04:
    ctx->pc = 0x7F240F04u;
    // 7F240F04: bl      0x7F01C3D0
    {
            ctx->lr = 0x7F240F08u;
            ctx->pc = 0x7F01C3D0u;
            return;
    }

label_7F240F08:
    ctx->pc = 0x7F240F08u;
    ctx->downcount -= 1;
    // 7F240F08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F240F0C:
    ctx->pc = 0x7F240F0Cu;
    ctx->downcount -= 16;
    // 7F240F0C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240F10:
    ctx->pc = 0x7F240F10u;
    // 7F240F10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240F14:
    ctx->pc = 0x7F240F14u;
    // 7F240F14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240F18:
    ctx->pc = 0x7F240F18u;
    // 7F240F18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F240F1C:
    ctx->pc = 0x7F240F1Cu;
    // 7F240F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240F20:
    ctx->pc = 0x7F240F20u;
    ctx->downcount -= 4;
    // 7F240F20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240F24:
    ctx->pc = 0x7F240F24u;
    // 7F240F24: lha     r0, -5898(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5898);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F240F28:
    ctx->pc = 0x7F240F28u;
    // 7F240F28: cmpwi   r0, 0
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

label_7F240F2C:
    ctx->pc = 0x7F240F2Cu;
    // 7F240F2C: bc    4, 1, 0x7F240F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240F40;
        }
    }

label_7F240F30:
    ctx->pc = 0x7F240F30u;
    ctx->downcount -= 4;
    // 7F240F30: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F240F34:
    ctx->pc = 0x7F240F34u;
    // 7F240F34: lwz     r4, -10264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10264);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F240F38:
    ctx->pc = 0x7F240F38u;
    // 7F240F38: cmplwi  r4, 0x0000
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

label_7F240F3C:
    ctx->pc = 0x7F240F3Cu;
    // 7F240F3C: bc    4, 2, 0x7F240F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F240F48;
        }
    }

label_7F240F40:
    ctx->pc = 0x7F240F40u;
    ctx->downcount -= 2;
    // 7F240F40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F240F44:
    ctx->pc = 0x7F240F44u;
    // 7F240F44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240F48:
    ctx->pc = 0x7F240F48u;
    ctx->downcount -= 5;
    // 7F240F48: lwz     r0, 1128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240F4C:
    ctx->pc = 0x7F240F4Cu;
    // 7F240F4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F240F50:
    ctx->pc = 0x7F240F50u;
    // 7F240F50: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F240F54:
    ctx->pc = 0x7F240F54u;
    // 7F240F54: stw     r0, 1128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240F58:
    ctx->pc = 0x7F240F58u;
    // 7F240F58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240F5C:
    ctx->pc = 0x7F240F5Cu;
    ctx->downcount -= 19;
    // 7F240F5C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240F60:
    ctx->pc = 0x7F240F60u;
    // 7F240F60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240F64:
    ctx->pc = 0x7F240F64u;
    // 7F240F64: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240F68:
    ctx->pc = 0x7F240F68u;
    // 7F240F68: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240F6C:
    ctx->pc = 0x7F240F6Cu;
    // 7F240F6C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240F70:
    ctx->pc = 0x7F240F70u;
    // 7F240F70: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F240F74:
    ctx->pc = 0x7F240F74u;
    // 7F240F74: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F240F78:
    ctx->pc = 0x7F240F78u;
    // 7F240F78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F240F7C:
    ctx->pc = 0x7F240F7Cu;
    // 7F240F7C: bl      0x7F0151A0
    {
            ctx->lr = 0x7F240F80u;
            ctx->pc = 0x7F0151A0u;
            return;
    }

label_7F240F80:
    ctx->pc = 0x7F240F80u;
    ctx->downcount -= 9;
    // 7F240F80: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F240F84:
    ctx->pc = 0x7F240F84u;
    // 7F240F84: addi    r4, r29, 128
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(128);

label_7F240F88:
    ctx->pc = 0x7F240F88u;
    // 7F240F88: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F240F8C:
    ctx->pc = 0x7F240F8Cu;
    // 7F240F8C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F240F90:
    ctx->pc = 0x7F240F90u;
    // 7F240F90: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F240F94:
    ctx->pc = 0x7F240F94u;
    // 7F240F94: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F240F98:
    ctx->pc = 0x7F240F98u;
    // 7F240F98: li      r7, 132
    ctx->gpr[7] = (u32)(s32)(132);

label_7F240F9C:
    ctx->pc = 0x7F240F9Cu;
    // 7F240F9C: li      r8, 132
    ctx->gpr[8] = (u32)(s32)(132);

label_7F240FA0:
    ctx->pc = 0x7F240FA0u;
    // 7F240FA0: bl      0x7F10B744
    {
            ctx->lr = 0x7F240FA4u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F240FA4:
    ctx->pc = 0x7F240FA4u;
    ctx->downcount -= 2;
    // 7F240FA4: cmpwi   r3, 0
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

label_7F240FA8:
    ctx->pc = 0x7F240FA8u;
    // 7F240FA8: bc    12, 2, 0x7F240FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F240FBC;
        }
    }

label_7F240FAC:
    ctx->pc = 0x7F240FACu;
    ctx->downcount -= 3;
    // 7F240FAC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F240FB0:
    ctx->pc = 0x7F240FB0u;
    // 7F240FB0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F240FB4:
    ctx->pc = 0x7F240FB4u;
    // 7F240FB4: bl      0x7F01521C
    {
            ctx->lr = 0x7F240FB8u;
            ctx->pc = 0x7F01521Cu;
            return;
    }

label_7F240FB8:
    ctx->pc = 0x7F240FB8u;
    ctx->downcount -= 1;
    // 7F240FB8: b       0x7F240FC8
    {
            goto label_7F240FC8;
    }

label_7F240FBC:
    ctx->pc = 0x7F240FBCu;
    ctx->downcount -= 3;
    // 7F240FBC: lwz     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240FC0:
    ctx->pc = 0x7F240FC0u;
    // 7F240FC0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F240FC4:
    ctx->pc = 0x7F240FC4u;
    // 7F240FC4: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240FC8:
    ctx->pc = 0x7F240FC8u;
    ctx->downcount -= 16;
    // 7F240FC8: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F240FCC:
    ctx->pc = 0x7F240FCCu;
    // 7F240FCC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F240FD0:
    ctx->pc = 0x7F240FD0u;
    // 7F240FD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F240FD4:
    ctx->pc = 0x7F240FD4u;
    // 7F240FD4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F240FD8:
    ctx->pc = 0x7F240FD8u;
    // 7F240FD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F240FDC:
    ctx->pc = 0x7F240FDCu;
    ctx->downcount -= 23;
    // 7F240FDC: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F240FE0:
    ctx->pc = 0x7F240FE0u;
    // 7F240FE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F240FE4:
    ctx->pc = 0x7F240FE4u;
    // 7F240FE4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F240FE8:
    ctx->pc = 0x7F240FE8u;
    // 7F240FE8: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F240FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F240FEC:
    ctx->pc = 0x7F240FECu;
    // 7F240FEC: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F240FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F240FECu);
        if (ctx->exception) return;
    }

label_7F240FF0:
    ctx->pc = 0x7F240FF0u;
    // 7F240FF0: stmw     r25, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F240FF4:
    ctx->pc = 0x7F240FF4u;
    // 7F240FF4: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F240FF8:
    ctx->pc = 0x7F240FF8u;
    // 7F240FF8: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F240FFC:
    ctx->pc = 0x7F240FFCu;
    // 7F240FFC: lwz     r0, 868(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(868);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241000:
    ctx->pc = 0x7F241000u;
    // 7F241000: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F241004:
    ctx->pc = 0x7F241004u;
    // 7F241004: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F241008:
    ctx->pc = 0x7F241008u;
    // 7F241008: cmpwi   r0, 450
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(450);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24100C:
    ctx->pc = 0x7F24100Cu;
    // 7F24100C: bc    4, 0, 0x7F241050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241050;
        }
    }

label_7F241010:
    ctx->pc = 0x7F241010u;
    ctx->downcount -= 32;
    // 7F241010: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F241014:
    ctx->pc = 0x7F241014u;
    // 7F241014: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F241018:
    ctx->pc = 0x7F241018u;
    // 7F241018: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24101C:
    ctx->pc = 0x7F24101Cu;
    // 7F24101C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241020:
    ctx->pc = 0x7F241020u;
    // 7F241020: addi    r3, r4, 20040
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20040);

label_7F241024:
    ctx->pc = 0x7F241024u;
    // 7F241024: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241028:
    ctx->pc = 0x7F241028u;
    // 7F241028: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24102C:
    ctx->pc = 0x7F24102Cu;
    // 7F24102C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24102Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241030:
    ctx->pc = 0x7F241030u;
    // 7F241030: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241034:
    ctx->pc = 0x7F241034u;
    // 7F241034: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241038:
    ctx->pc = 0x7F241038u;
    // 7F241038: lfs     f2, -9712(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241038u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24103C:
    ctx->pc = 0x7F24103Cu;
    // 7F24103C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24103Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F241040:
    ctx->pc = 0x7F241040u;
    // 7F241040: lfs     f0, 20048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241040u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241044:
    ctx->pc = 0x7F241044u;
    // 7F241044: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241044u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F241048:
    ctx->pc = 0x7F241048u;
    // 7F241048: fdivs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241048u)) return;
    ppc_fdivs(ctx, 31, 1, 0);

label_7F24104C:
    ctx->pc = 0x7F24104Cu;
    // 7F24104C: b       0x7F241058
    {
            goto label_7F241058;
    }

label_7F241050:
    ctx->pc = 0x7F241050u;
    ctx->downcount -= 2;
    // 7F241050: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241054:
    ctx->pc = 0x7F241054u;
    // 7F241054: lfs     f31, -9712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241054u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F241058:
    ctx->pc = 0x7F241058u;
    ctx->downcount -= 3;
    // 7F241058: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24105C:
    ctx->pc = 0x7F24105Cu;
    // 7F24105C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F241060:
    ctx->pc = 0x7F241060u;
    // 7F241060: bl      0x7F114F50
    {
            ctx->lr = 0x7F241064u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F241064:
    ctx->pc = 0x7F241064u;
    ctx->downcount -= 4;
    // 7F241064: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F241064u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F241068:
    ctx->pc = 0x7F241068u;
    // 7F241068: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24106C:
    ctx->pc = 0x7F24106Cu;
    // 7F24106C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241070:
    ctx->pc = 0x7F241070u;
    // 7F241070: bl      0x800261FC
    {
            ctx->lr = 0x7F241074u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F241074:
    ctx->pc = 0x7F241074u;
    ctx->downcount -= 4;
    // 7F241074: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F241078:
    ctx->pc = 0x7F241078u;
    // 7F241078: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24107C:
    ctx->pc = 0x7F24107Cu;
    // 7F24107C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F241080:
    ctx->pc = 0x7F241080u;
    // 7F241080: bl      0x800261B4
    {
            ctx->lr = 0x7F241084u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F241084:
    ctx->pc = 0x7F241084u;
    ctx->downcount -= 8;
    // 7F241084: lwz     r4, 868(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(868);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241088:
    ctx->pc = 0x7F241088u;
    // 7F241088: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24108C:
    ctx->pc = 0x7F24108Cu;
    // 7F24108C: addi    r0, r4, 5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5);

label_7F241090:
    ctx->pc = 0x7F241090u;
    // 7F241090: stw     r0, 868(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241094:
    ctx->pc = 0x7F241094u;
    // 7F241094: lfs     f0, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F241094u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241098:
    ctx->pc = 0x7F241098u;
    // 7F241098: lfs     f1, -9704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241098u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24109C:
    ctx->pc = 0x7F24109Cu;
    // 7F24109C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24109Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F2410A0:
    ctx->pc = 0x7F2410A0u;
    // 7F2410A0: bc    4, 1, 0x7F2410A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2410A8;
        }
    }

label_7F2410A4:
    ctx->pc = 0x7F2410A4u;
    ctx->downcount -= 1;
    // 7F2410A4: stfs     f1, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2410A4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2410A8:
    ctx->pc = 0x7F2410A8u;
    ctx->downcount -= 10;
    // 7F2410A8: lha     r4, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2410AC:
    ctx->pc = 0x7F2410ACu;
    // 7F2410AC: lha     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2410B0:
    ctx->pc = 0x7F2410B0u;
    // 7F2410B0: lha     r3, 42(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2410B4:
    ctx->pc = 0x7F2410B4u;
    // 7F2410B4: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F2410B8:
    ctx->pc = 0x7F2410B8u;
    // 7F2410B8: lha     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2410BC:
    ctx->pc = 0x7F2410BCu;
    // 7F2410BC: extsh r31, r4
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2410C0:
    ctx->pc = 0x7F2410C0u;
    // 7F2410C0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2410C4:
    ctx->pc = 0x7F2410C4u;
    // 7F2410C4: cmpwi   r31, 2048
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2410C8:
    ctx->pc = 0x7F2410C8u;
    // 7F2410C8: extsh r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F2410CC:
    ctx->pc = 0x7F2410CCu;
    // 7F2410CC: bc    4, 1, 0x7F2410D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2410D8;
        }
    }

label_7F2410D0:
    ctx->pc = 0x7F2410D0u;
    ctx->downcount -= 2;
    // 7F2410D0: addi    r31, r31, -4096
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-4096);

label_7F2410D4:
    ctx->pc = 0x7F2410D4u;
    // 7F2410D4: b       0x7F2410E4
    {
            goto label_7F2410E4;
    }

label_7F2410D8:
    ctx->pc = 0x7F2410D8u;
    ctx->downcount -= 2;
    // 7F2410D8: cmpwi   r31, -2048
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2410DC:
    ctx->pc = 0x7F2410DCu;
    // 7F2410DC: bc    4, 0, 0x7F2410E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2410E4;
        }
    }

label_7F2410E0:
    ctx->pc = 0x7F2410E0u;
    ctx->downcount -= 1;
    // 7F2410E0: addi    r31, r31, 4096
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4096);

label_7F2410E4:
    ctx->pc = 0x7F2410E4u;
    ctx->downcount -= 2;
    // 7F2410E4: cmpwi   r30, 2048
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2410E8:
    ctx->pc = 0x7F2410E8u;
    // 7F2410E8: bc    4, 1, 0x7F2410F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2410F4;
        }
    }

label_7F2410EC:
    ctx->pc = 0x7F2410ECu;
    ctx->downcount -= 2;
    // 7F2410EC: addi    r30, r30, -4096
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-4096);

label_7F2410F0:
    ctx->pc = 0x7F2410F0u;
    // 7F2410F0: b       0x7F241100
    {
            goto label_7F241100;
    }

label_7F2410F4:
    ctx->pc = 0x7F2410F4u;
    ctx->downcount -= 2;
    // 7F2410F4: cmpwi   r30, -2048
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2410F8:
    ctx->pc = 0x7F2410F8u;
    // 7F2410F8: bc    4, 0, 0x7F241100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241100;
        }
    }

label_7F2410FC:
    ctx->pc = 0x7F2410FCu;
    ctx->downcount -= 1;
    // 7F2410FC: addi    r30, r30, 4096
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4096);

label_7F241100:
    ctx->pc = 0x7F241100u;
    ctx->downcount -= 4;
    // 7F241100: lbz     r0, 872(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(872);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F241104:
    ctx->pc = 0x7F241104u;
    // 7F241104: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F241108:
    ctx->pc = 0x7F241108u;
    // 7F241108: cmpwi   r0, 1
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

label_7F24110C:
    ctx->pc = 0x7F24110Cu;
    // 7F24110C: bc    12, 2, 0x7F241270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241270;
        }
    }

label_7F241110:
    ctx->pc = 0x7F241110u;
    ctx->downcount -= 1;
    // 7F241110: bc    4, 0, 0x7F2413B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2413B4;
        }
    }

label_7F241114:
    ctx->pc = 0x7F241114u;
    ctx->downcount -= 2;
    // 7F241114: cmpwi   r0, 0
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

label_7F241118:
    ctx->pc = 0x7F241118u;
    // 7F241118: bc    4, 0, 0x7F241120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241120;
        }
    }

label_7F24111C:
    ctx->pc = 0x7F24111Cu;
    ctx->downcount -= 1;
    // 7F24111C: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F241120:
    ctx->pc = 0x7F241120u;
    ctx->downcount -= 22;
    // 7F241120: extsh r28, r31
    {
        ctx->gpr[28] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F241124:
    ctx->pc = 0x7F241124u;
    // 7F241124: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F241128:
    ctx->pc = 0x7F241128u;
    // 7F241128: extsh r29, r30
    {
        ctx->gpr[29] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F24112C:
    ctx->pc = 0x7F24112Cu;
    // 7F24112C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241130:
    ctx->pc = 0x7F241130u;
    // 7F241130: mullw   r4, r28, r28
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[28];
        ctx->gpr[4] = (u32)product;
    }

label_7F241134:
    ctx->pc = 0x7F241134u;
    // 7F241134: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241138:
    ctx->pc = 0x7F241138u;
    // 7F241138: lfd     f1, 20040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241138u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24113C:
    ctx->pc = 0x7F24113Cu;
    // 7F24113C: mullw   r0, r29, r29
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[0] = (u32)product;
    }

label_7F241140:
    ctx->pc = 0x7F241140u;
    // 7F241140: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F241144:
    ctx->pc = 0x7F241144u;
    // 7F241144: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F241148:
    ctx->pc = 0x7F241148u;
    // 7F241148: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24114C:
    ctx->pc = 0x7F24114Cu;
    // 7F24114C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24114Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241150:
    ctx->pc = 0x7F241150u;
    // 7F241150: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241150u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F241154:
    ctx->pc = 0x7F241154u;
    // 7F241154: bl      0x80006668
    {
            ctx->lr = 0x7F241158u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F241158:
    ctx->pc = 0x7F241158u;
    ctx->downcount -= 42;
    // 7F241158: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24115C:
    ctx->pc = 0x7F24115Cu;
    // 7F24115C: fctiwz    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24115Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F241160:
    ctx->pc = 0x7F241160u;
    // 7F241160: lfs     f0, 20052(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241160u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20052);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241164:
    ctx->pc = 0x7F241164u;
    // 7F241164: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F241168:
    ctx->pc = 0x7F241168u;
    // 7F241168: lfs     f1, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F241168u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24116C:
    ctx->pc = 0x7F24116Cu;
    // 7F24116C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F241170:
    ctx->pc = 0x7F241170u;
    // 7F241170: lwz     r6, -9700(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9700);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F241174:
    ctx->pc = 0x7F241174u;
    // 7F241174: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241174u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F241178:
    ctx->pc = 0x7F241178u;
    // 7F241178: stfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F24117C:
    ctx->pc = 0x7F24117Cu;
    // 7F24117C: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F241180:
    ctx->pc = 0x7F241180u;
    // 7F241180: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241184:
    ctx->pc = 0x7F241184u;
    // 7F241184: addi    r4, r3, 20040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20040);

label_7F241188:
    ctx->pc = 0x7F241188u;
    // 7F241188: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24118C:
    ctx->pc = 0x7F24118Cu;
    // 7F24118C: xoris   r3, r7, 0x8000
    ctx->gpr[3] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F241190:
    ctx->pc = 0x7F241190u;
    // 7F241190: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241194:
    ctx->pc = 0x7F241194u;
    // 7F241194: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241194u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241198:
    ctx->pc = 0x7F241198u;
    // 7F241198: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24119C:
    ctx->pc = 0x7F24119Cu;
    // 7F24119C: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24119Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2411A0:
    ctx->pc = 0x7F2411A0u;
    // 7F2411A0: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2411A4:
    ctx->pc = 0x7F2411A4u;
    // 7F2411A4: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2411A4u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2411A8:
    ctx->pc = 0x7F2411A8u;
    // 7F2411A8: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2411AC:
    ctx->pc = 0x7F2411ACu;
    // 7F2411AC: lfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2411ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2411B0:
    ctx->pc = 0x7F2411B0u;
    // 7F2411B0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2411B0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2411B4:
    ctx->pc = 0x7F2411B4u;
    // 7F2411B4: fsubs   f1, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2411B4u)) return;
    ppc_fsubs(ctx, 1, 2, 3);

label_7F2411B8:
    ctx->pc = 0x7F2411B8u;
    // 7F2411B8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2411B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2411BC:
    ctx->pc = 0x7F2411BCu;
    // 7F2411BC: bc    4, 1, 0x7F2411D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2411D8;
        }
    }

label_7F2411C0:
    ctx->pc = 0x7F2411C0u;
    ctx->downcount -= 92;
    // 7F2411C0: mullw   r3, r28, r6
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[3] = (u32)product;
    }

label_7F2411C4:
    ctx->pc = 0x7F2411C4u;
    // 7F2411C4: mullw   r0, r29, r6
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F2411C8:
    ctx->pc = 0x7F2411C8u;
    // 7F2411C8: divw   r3, r3, r7
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2411CC:
    ctx->pc = 0x7F2411CCu;
    // 7F2411CC: divw   r0, r0, r7
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2411D0:
    ctx->pc = 0x7F2411D0u;
    // 7F2411D0: extsh r31, r3
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F2411D4:
    ctx->pc = 0x7F2411D4u;
    // 7F2411D4: extsh r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F2411D8:
    ctx->pc = 0x7F2411D8u;
    ctx->downcount -= 2;
    // 7F2411D8: lfs     f1, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2411D8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2411DC:
    ctx->pc = 0x7F2411DCu;
    // 7F2411DC: bl      0x7F2413E4
    {
            ctx->lr = 0x7F2411E0u;
            goto label_7F2413E4;
    }

label_7F2411E0:
    ctx->pc = 0x7F2411E0u;
    ctx->downcount -= 3;
    // 7F2411E0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2411E0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2411E4:
    ctx->pc = 0x7F2411E4u;
    // 7F2411E4: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2411E4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2411E8:
    ctx->pc = 0x7F2411E8u;
    // 7F2411E8: bl      0x7F2413E4
    {
            ctx->lr = 0x7F2411ECu;
            goto label_7F2413E4;
    }

label_7F2411EC:
    ctx->pc = 0x7F2411ECu;
    ctx->downcount -= 3;
    // 7F2411EC: fadds   f31, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2411ECu)) return;
    ppc_fadds(ctx, 31, 31, 1);

label_7F2411F0:
    ctx->pc = 0x7F2411F0u;
    // 7F2411F0: lfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2411F0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2411F4:
    ctx->pc = 0x7F2411F4u;
    // 7F2411F4: bl      0x7F2413E4
    {
            ctx->lr = 0x7F2411F8u;
            goto label_7F2413E4;
    }

label_7F2411F8:
    ctx->pc = 0x7F2411F8u;
    ctx->downcount -= 5;
    // 7F2411F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2411FC:
    ctx->pc = 0x7F2411FCu;
    // 7F2411FC: fadds   f31, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2411FCu)) return;
    ppc_fadds(ctx, 31, 31, 1);

label_7F241200:
    ctx->pc = 0x7F241200u;
    // 7F241200: lfs     f0, 20056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241200u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241204:
    ctx->pc = 0x7F241204u;
    // 7F241204: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241204u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F241208:
    ctx->pc = 0x7F241208u;
    // 7F241208: bc    4, 0, 0x7F241214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241214;
        }
    }

label_7F24120C:
    ctx->pc = 0x7F24120Cu;
    ctx->downcount -= 2;
    // 7F24120C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F241210:
    ctx->pc = 0x7F241210u;
    // 7F241210: stb     r0, 872(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(872);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241214:
    ctx->pc = 0x7F241214u;
    ctx->downcount -= 3;
    // 7F241214: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241218:
    ctx->pc = 0x7F241218u;
    // 7F241218: addi    r3, r26, 64
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(64);

label_7F24121C:
    ctx->pc = 0x7F24121Cu;
    // 7F24121C: bl      0x800260DC
    {
            ctx->lr = 0x7F241220u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F241220:
    ctx->pc = 0x7F241220u;
    ctx->downcount -= 4;
    // 7F241220: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241224:
    ctx->pc = 0x7F241224u;
    // 7F241224: lfs     f0, 20032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241224u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241228:
    ctx->pc = 0x7F241228u;
    // 7F241228: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241228u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24122C:
    ctx->pc = 0x7F24122Cu;
    // 7F24122C: bc    4, 0, 0x7F24123C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24123C;
        }
    }

label_7F241230:
    ctx->pc = 0x7F241230u;
    ctx->downcount -= 3;
    // 7F241230: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F241234:
    ctx->pc = 0x7F241234u;
    // 7F241234: stb     r0, 872(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(872);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241238:
    ctx->pc = 0x7F241238u;
    // 7F241238: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F24123C:
    ctx->pc = 0x7F24123Cu;
    ctx->downcount -= 13;
    // 7F24123C: lha     r3, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F241240:
    ctx->pc = 0x7F241240u;
    // 7F241240: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F241244:
    ctx->pc = 0x7F241244u;
    // 7F241244: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F241248:
    ctx->pc = 0x7F241248u;
    // 7F241248: sth     r3, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F24124C:
    ctx->pc = 0x7F24124Cu;
    // 7F24124C: lha     r3, 42(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F241250:
    ctx->pc = 0x7F241250u;
    // 7F241250: add   r3, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F241254:
    ctx->pc = 0x7F241254u;
    // 7F241254: sth     r3, 42(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241258:
    ctx->pc = 0x7F241258u;
    // 7F241258: lwz     r4, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24125C:
    ctx->pc = 0x7F24125Cu;
    // 7F24125C: lwz     r3, 44(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241260:
    ctx->pc = 0x7F241260u;
    // 7F241260: stw     r4, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F241264:
    ctx->pc = 0x7F241264u;
    // 7F241264: stw     r3, 36(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241268:
    ctx->pc = 0x7F241268u;
    // 7F241268: stw     r0, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24126C:
    ctx->pc = 0x7F24126Cu;
    // 7F24126C: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F241270:
    ctx->pc = 0x7F241270u;
    ctx->downcount -= 3;
    // 7F241270: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241274:
    ctx->pc = 0x7F241274u;
    // 7F241274: addi    r3, r26, 64
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(64);

label_7F241278:
    ctx->pc = 0x7F241278u;
    // 7F241278: bl      0x800260DC
    {
            ctx->lr = 0x7F24127Cu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F24127C:
    ctx->pc = 0x7F24127Cu;
    ctx->downcount -= 4;
    // 7F24127C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241280:
    ctx->pc = 0x7F241280u;
    // 7F241280: lfs     f0, 20032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241280u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241284:
    ctx->pc = 0x7F241284u;
    // 7F241284: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241284u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F241288:
    ctx->pc = 0x7F241288u;
    // 7F241288: bc    4, 1, 0x7F241378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241378;
        }
    }

label_7F24128C:
    ctx->pc = 0x7F24128Cu;
    ctx->downcount -= 22;
    // 7F24128C: extsh r29, r31
    {
        ctx->gpr[29] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F241290:
    ctx->pc = 0x7F241290u;
    // 7F241290: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F241294:
    ctx->pc = 0x7F241294u;
    // 7F241294: extsh r28, r30
    {
        ctx->gpr[28] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F241298:
    ctx->pc = 0x7F241298u;
    // 7F241298: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24129C:
    ctx->pc = 0x7F24129Cu;
    // 7F24129C: mullw   r4, r29, r29
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[29];
        ctx->gpr[4] = (u32)product;
    }

label_7F2412A0:
    ctx->pc = 0x7F2412A0u;
    // 7F2412A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2412A4:
    ctx->pc = 0x7F2412A4u;
    // 7F2412A4: lfd     f1, 20040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2412A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2412A8:
    ctx->pc = 0x7F2412A8u;
    // 7F2412A8: mullw   r0, r28, r28
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[28];
        ctx->gpr[0] = (u32)product;
    }

label_7F2412AC:
    ctx->pc = 0x7F2412ACu;
    // 7F2412AC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2412B0:
    ctx->pc = 0x7F2412B0u;
    // 7F2412B0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2412B4:
    ctx->pc = 0x7F2412B4u;
    // 7F2412B4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2412B8:
    ctx->pc = 0x7F2412B8u;
    // 7F2412B8: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2412B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2412BC:
    ctx->pc = 0x7F2412BCu;
    // 7F2412BC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2412BCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F2412C0:
    ctx->pc = 0x7F2412C0u;
    // 7F2412C0: bl      0x80006668
    {
            ctx->lr = 0x7F2412C4u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F2412C4:
    ctx->pc = 0x7F2412C4u;
    ctx->downcount -= 42;
    // 7F2412C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2412C8:
    ctx->pc = 0x7F2412C8u;
    // 7F2412C8: fctiwz    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2412C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F2412CC:
    ctx->pc = 0x7F2412CCu;
    // 7F2412CC: lfs     f0, 20052(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2412CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20052);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2412D0:
    ctx->pc = 0x7F2412D0u;
    // 7F2412D0: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F2412D4:
    ctx->pc = 0x7F2412D4u;
    // 7F2412D4: lfs     f1, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2412D4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2412D8:
    ctx->pc = 0x7F2412D8u;
    // 7F2412D8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2412DC:
    ctx->pc = 0x7F2412DCu;
    // 7F2412DC: lwz     r6, -9700(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9700);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2412E0:
    ctx->pc = 0x7F2412E0u;
    // 7F2412E0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2412E0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F2412E4:
    ctx->pc = 0x7F2412E4u;
    // 7F2412E4: stfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2412E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F2412E8:
    ctx->pc = 0x7F2412E8u;
    // 7F2412E8: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F2412EC:
    ctx->pc = 0x7F2412ECu;
    // 7F2412EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2412F0:
    ctx->pc = 0x7F2412F0u;
    // 7F2412F0: addi    r4, r3, 20040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20040);

label_7F2412F4:
    ctx->pc = 0x7F2412F4u;
    // 7F2412F4: lwz     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2412F8:
    ctx->pc = 0x7F2412F8u;
    // 7F2412F8: xoris   r3, r7, 0x8000
    ctx->gpr[3] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F2412FC:
    ctx->pc = 0x7F2412FCu;
    // 7F2412FC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241300:
    ctx->pc = 0x7F241300u;
    // 7F241300: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241300u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241304:
    ctx->pc = 0x7F241304u;
    // 7F241304: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F241308:
    ctx->pc = 0x7F241308u;
    // 7F241308: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24130C:
    ctx->pc = 0x7F24130Cu;
    // 7F24130C: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241310:
    ctx->pc = 0x7F241310u;
    // 7F241310: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F241310u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F241314:
    ctx->pc = 0x7F241314u;
    // 7F241314: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F241318:
    ctx->pc = 0x7F241318u;
    // 7F241318: lfd     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24131C:
    ctx->pc = 0x7F24131Cu;
    // 7F24131C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24131Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F241320:
    ctx->pc = 0x7F241320u;
    // 7F241320: fsubs   f1, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F241320u)) return;
    ppc_fsubs(ctx, 1, 2, 3);

label_7F241324:
    ctx->pc = 0x7F241324u;
    // 7F241324: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241324u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F241328:
    ctx->pc = 0x7F241328u;
    // 7F241328: bc    4, 1, 0x7F241344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241344;
        }
    }

label_7F24132C:
    ctx->pc = 0x7F24132Cu;
    ctx->downcount -= 92;
    // 7F24132C: mullw   r3, r29, r6
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[3] = (u32)product;
    }

label_7F241330:
    ctx->pc = 0x7F241330u;
    // 7F241330: mullw   r0, r28, r6
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F241334:
    ctx->pc = 0x7F241334u;
    // 7F241334: divw   r3, r3, r7
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F241338:
    ctx->pc = 0x7F241338u;
    // 7F241338: divw   r0, r0, r7
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F24133C:
    ctx->pc = 0x7F24133Cu;
    // 7F24133C: extsh r31, r3
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F241340:
    ctx->pc = 0x7F241340u;
    // 7F241340: extsh r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F241344:
    ctx->pc = 0x7F241344u;
    ctx->downcount -= 13;
    // 7F241344: lha     r3, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F241348:
    ctx->pc = 0x7F241348u;
    // 7F241348: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24134C:
    ctx->pc = 0x7F24134Cu;
    // 7F24134C: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F241350:
    ctx->pc = 0x7F241350u;
    // 7F241350: sth     r3, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241354:
    ctx->pc = 0x7F241354u;
    // 7F241354: lha     r3, 42(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F241358:
    ctx->pc = 0x7F241358u;
    // 7F241358: add   r3, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F24135C:
    ctx->pc = 0x7F24135Cu;
    // 7F24135C: sth     r3, 42(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241360:
    ctx->pc = 0x7F241360u;
    // 7F241360: lwz     r4, 40(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241364:
    ctx->pc = 0x7F241364u;
    // 7F241364: lwz     r3, 44(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241368:
    ctx->pc = 0x7F241368u;
    // 7F241368: stw     r4, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24136C:
    ctx->pc = 0x7F24136Cu;
    // 7F24136C: stw     r3, 36(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241370:
    ctx->pc = 0x7F241370u;
    // 7F241370: stw     r0, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241374:
    ctx->pc = 0x7F241374u;
    // 7F241374: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F241378:
    ctx->pc = 0x7F241378u;
    ctx->downcount -= 5;
    // 7F241378: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F24137C:
    ctx->pc = 0x7F24137Cu;
    // 7F24137C: stb     r0, 872(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(872);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241380:
    ctx->pc = 0x7F241380u;
    // 7F241380: lwz     r0, 804(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(804);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241384:
    ctx->pc = 0x7F241384u;
    // 7F241384: cmpwi   r0, 90
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(90);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F241388:
    ctx->pc = 0x7F241388u;
    // 7F241388: bc    4, 1, 0x7F241398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241398;
        }
    }

label_7F24138C:
    ctx->pc = 0x7F24138Cu;
    ctx->downcount -= 3;
    // 7F24138C: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F241390:
    ctx->pc = 0x7F241390u;
    // 7F241390: stw     r0, 804(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241394:
    ctx->pc = 0x7F241394u;
    // 7F241394: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F241398:
    ctx->pc = 0x7F241398u;
    ctx->downcount -= 2;
    // 7F241398: cmpwi   r0, 40
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24139C:
    ctx->pc = 0x7F24139Cu;
    // 7F24139C: bc    4, 1, 0x7F2413AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2413AC;
        }
    }

label_7F2413A0:
    ctx->pc = 0x7F2413A0u;
    ctx->downcount -= 3;
    // 7F2413A0: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F2413A4:
    ctx->pc = 0x7F2413A4u;
    // 7F2413A4: stw     r0, 804(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2413A8:
    ctx->pc = 0x7F2413A8u;
    // 7F2413A8: b       0x7F2413B4
    {
            goto label_7F2413B4;
    }

label_7F2413AC:
    ctx->pc = 0x7F2413ACu;
    ctx->downcount -= 2;
    // 7F2413AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2413B0:
    ctx->pc = 0x7F2413B0u;
    // 7F2413B0: stw     r0, 804(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2413B4:
    ctx->pc = 0x7F2413B4u;
    ctx->downcount -= 23;
    // 7F2413B4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2413B8:
    ctx->pc = 0x7F2413B8u;
    // 7F2413B8: lfs     f1, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2413B8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2413BC:
    ctx->pc = 0x7F2413BCu;
    // 7F2413BC: lfs     f0, -9708(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2413BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2413C0:
    ctx->pc = 0x7F2413C0u;
    // 7F2413C0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2413C0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2413C4:
    ctx->pc = 0x7F2413C4u;
    // 7F2413C4: stfs     f0, 832(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2413C4u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2413C8:
    ctx->pc = 0x7F2413C8u;
    // 7F2413C8: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2413C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2413C8u);
        if (ctx->exception) return;
    }

label_7F2413CC:
    ctx->pc = 0x7F2413CCu;
    // 7F2413CC: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2413CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2413D0:
    ctx->pc = 0x7F2413D0u;
    // 7F2413D0: lmw     r25, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2413D4:
    ctx->pc = 0x7F2413D4u;
    // 7F2413D4: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2413D8:
    ctx->pc = 0x7F2413D8u;
    // 7F2413D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2413DC:
    ctx->pc = 0x7F2413DCu;
    // 7F2413DC: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2413E0:
    ctx->pc = 0x7F2413E0u;
    // 7F2413E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F2413E4:
    ctx->pc = 0x7F2413E4u;
    ctx->downcount -= 8;
    // 7F2413E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2413E8:
    ctx->pc = 0x7F2413E8u;
    // 7F2413E8: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2413E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2413EC:
    ctx->pc = 0x7F2413ECu;
    // 7F2413EC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2413F0:
    ctx->pc = 0x7F2413F0u;
    // 7F2413F0: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F2413F4:
    ctx->pc = 0x7F2413F4u;
    // 7F2413F4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2413F8:
    ctx->pc = 0x7F2413F8u;
    // 7F2413F8: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2413F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2413FC:
    ctx->pc = 0x7F2413FCu;
    // 7F2413FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F241400:
    ctx->pc = 0x7F241400u;
    // 7F241400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241404:
    ctx->pc = 0x7F241404u;
    ctx->downcount -= 19;
    // 7F241404: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F241408:
    ctx->pc = 0x7F241408u;
    // 7F241408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24140C:
    ctx->pc = 0x7F24140Cu;
    // 7F24140C: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241410:
    ctx->pc = 0x7F241410u;
    // 7F241410: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F241414:
    ctx->pc = 0x7F241414u;
    // 7F241414: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F241414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F241414u);
        if (ctx->exception) return;
    }

label_7F241418:
    ctx->pc = 0x7F241418u;
    // 7F241418: stmw     r27, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24141C:
    ctx->pc = 0x7F24141Cu;
    // 7F24141C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241420:
    ctx->pc = 0x7F241420u;
    // 7F241420: lis     r3, 10240
    ctx->gpr[3] = ((u32)(s32)(10240) << 16);

label_7F241424:
    ctx->pc = 0x7F241424u;
    // 7F241424: bl      0x7F012050
    {
            ctx->lr = 0x7F241428u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F241428:
    ctx->pc = 0x7F241428u;
    ctx->downcount -= 2;
    // 7F241428: cmpwi   r3, 0
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

label_7F24142C:
    ctx->pc = 0x7F24142Cu;
    // 7F24142C: bc    4, 2, 0x7F24143C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24143C;
        }
    }

label_7F241430:
    ctx->pc = 0x7F241430u;
    ctx->downcount -= 3;
    // 7F241430: lwz     r0, 792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241434:
    ctx->pc = 0x7F241434u;
    // 7F241434: rlwinm. r0, r0, 0, 31, 31
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

label_7F241438:
    ctx->pc = 0x7F241438u;
    // 7F241438: bc    12, 2, 0x7F241448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241448;
        }
    }

label_7F24143C:
    ctx->pc = 0x7F24143Cu;
    ctx->downcount -= 2;
    // 7F24143C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F241440:
    ctx->pc = 0x7F241440u;
    // 7F241440: bl      0x7F3C8210
    {
            ctx->lr = 0x7F241444u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F241444:
    ctx->pc = 0x7F241444u;
    ctx->downcount -= 1;
    // 7F241444: b       0x7F241DE0
    {
            goto label_7F241DE0;
    }

label_7F241448:
    ctx->pc = 0x7F241448u;
    ctx->downcount -= 4;
    // 7F241448: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24144C:
    ctx->pc = 0x7F24144Cu;
    // 7F24144C: addi    r3, r3, 18316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18316);

label_7F241450:
    ctx->pc = 0x7F241450u;
    // 7F241450: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241454:
    ctx->pc = 0x7F241454u;
    // 7F241454: bl      0x7F241E9C
    {
            ctx->lr = 0x7F241458u;
            goto label_7F241E9C;
    }

label_7F241458:
    ctx->pc = 0x7F241458u;
    ctx->downcount -= 3;
    // 7F241458: lwz     r0, 792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24145C:
    ctx->pc = 0x7F24145Cu;
    // 7F24145C: rlwinm. r0, r0, 0, 29, 29
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

label_7F241460:
    ctx->pc = 0x7F241460u;
    // 7F241460: bc    12, 2, 0x7F2414CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2414CC;
        }
    }

label_7F241464:
    ctx->pc = 0x7F241464u;
    ctx->downcount -= 4;
    // 7F241464: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241468:
    ctx->pc = 0x7F241468u;
    // 7F241468: lwz     r0, -6168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24146C:
    ctx->pc = 0x7F24146Cu;
    // 7F24146C: cmplwi  r0, 0x0000
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

label_7F241470:
    ctx->pc = 0x7F241470u;
    // 7F241470: bc    12, 2, 0x7F2414CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2414CC;
        }
    }

label_7F241474:
    ctx->pc = 0x7F241474u;
    ctx->downcount -= 3;
    // 7F241474: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F241478:
    ctx->pc = 0x7F241478u;
    // 7F241478: addi    r3, r3, 11328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11328);

label_7F24147C:
    ctx->pc = 0x7F24147Cu;
    // 7F24147C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F241480u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F241480:
    ctx->pc = 0x7F241480u;
    ctx->downcount -= 17;
    // 7F241480: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F241484:
    ctx->pc = 0x7F241484u;
    // 7F241484: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F241488:
    ctx->pc = 0x7F241488u;
    // 7F241488: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F24148C:
    ctx->pc = 0x7F24148Cu;
    // 7F24148C: lwz     r12, -6168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6168);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F241490:
    ctx->pc = 0x7F241490u;
    // 7F241490: addi    r8, r6, 20060
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20060);

label_7F241494:
    ctx->pc = 0x7F241494u;
    // 7F241494: lwz     r9, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F241498:
    ctx->pc = 0x7F241498u;
    // 7F241498: addi    r7, r5, 20064
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20064);

label_7F24149C:
    ctx->pc = 0x7F24149Cu;
    // 7F24149C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2414A0:
    ctx->pc = 0x7F2414A0u;
    // 7F2414A0: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2414A0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2414A4:
    ctx->pc = 0x7F2414A4u;
    // 7F2414A4: addi    r3, r9, 4
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(4);

label_7F2414A8:
    ctx->pc = 0x7F2414A8u;
    // 7F2414A8: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2414AC:
    ctx->pc = 0x7F2414ACu;
    // 7F2414AC: lfs     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2414ACu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2414B0:
    ctx->pc = 0x7F2414B0u;
    // 7F2414B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2414B4:
    ctx->pc = 0x7F2414B4u;
    // 7F2414B4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2414B8:
    ctx->pc = 0x7F2414B8u;
    // 7F2414B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2414BC:
    ctx->pc = 0x7F2414BCu;
    // 7F2414BC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2414C0u;
            ctx->pc = target;
            return;
        }
    }

label_7F2414C0:
    ctx->pc = 0x7F2414C0u;
    ctx->downcount -= 2;
    // 7F2414C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2414C4:
    ctx->pc = 0x7F2414C4u;
    // 7F2414C4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2414C8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2414C8:
    ctx->pc = 0x7F2414C8u;
    ctx->downcount -= 1;
    // 7F2414C8: b       0x7F241DE0
    {
            goto label_7F241DE0;
    }

label_7F2414CC:
    ctx->pc = 0x7F2414CCu;
    ctx->downcount -= 8;
    // 7F2414CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2414D0:
    ctx->pc = 0x7F2414D0u;
    // 7F2414D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2414D4:
    ctx->pc = 0x7F2414D4u;
    // 7F2414D4: addi    r5, r3, 20068
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20068);

label_7F2414D8:
    ctx->pc = 0x7F2414D8u;
    // 7F2414D8: lfs     f2, 20072(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2414D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2414DC:
    ctx->pc = 0x7F2414DCu;
    // 7F2414DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2414DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2414E0:
    ctx->pc = 0x7F2414E0u;
    // 7F2414E0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2414E4:
    ctx->pc = 0x7F2414E4u;
    // 7F2414E4: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2414E8:
    ctx->pc = 0x7F2414E8u;
    // 7F2414E8: bl      0x7F23A52C
    {
            ctx->lr = 0x7F2414ECu;
            ctx->pc = 0x7F23A52Cu;
            return;
    }

label_7F2414EC:
    ctx->pc = 0x7F2414ECu;
    ctx->downcount -= 2;
    // 7F2414EC: cmpwi   r3, 0
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

label_7F2414F0:
    ctx->pc = 0x7F2414F0u;
    // 7F2414F0: bc    12, 2, 0x7F241500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241500;
        }
    }

label_7F2414F4:
    ctx->pc = 0x7F2414F4u;
    ctx->downcount -= 3;
    // 7F2414F4: lwz     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2414F8:
    ctx->pc = 0x7F2414F8u;
    // 7F2414F8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F2414FC:
    ctx->pc = 0x7F2414FCu;
    // 7F2414FC: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241500:
    ctx->pc = 0x7F241500u;
    ctx->downcount -= 13;
    // 7F241500: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F241504:
    ctx->pc = 0x7F241504u;
    // 7F241504: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241508:
    ctx->pc = 0x7F241508u;
    // 7F241508: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24150C:
    ctx->pc = 0x7F24150Cu;
    // 7F24150C: addi    r27, r31, 48
    ctx->gpr[27] = ctx->gpr[31] + (u32)(s32)(48);

label_7F241510:
    ctx->pc = 0x7F241510u;
    // 7F241510: lwz     r6, -8576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8576);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F241514:
    ctx->pc = 0x7F241514u;
    // 7F241514: stw     r5, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F241518:
    ctx->pc = 0x7F241518u;
    // 7F241518: cmplwi  r6, 0x0000
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

label_7F24151C:
    ctx->pc = 0x7F24151Cu;
    // 7F24151C: stw     r4, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F241520:
    ctx->pc = 0x7F241520u;
    // 7F241520: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241524:
    ctx->pc = 0x7F241524u;
    // 7F241524: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241528:
    ctx->pc = 0x7F241528u;
    // 7F241528: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24152C:
    ctx->pc = 0x7F24152Cu;
    // 7F24152C: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241530:
    ctx->pc = 0x7F241530u;
    // 7F241530: bc    12, 2, 0x7F241564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241564;
        }
    }

label_7F241534:
    ctx->pc = 0x7F241534u;
    ctx->downcount -= 4;
    // 7F241534: addi    r3, r6, 16
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(16);

label_7F241538:
    ctx->pc = 0x7F241538u;
    // 7F241538: addi    r4, r6, 96
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(96);

label_7F24153C:
    ctx->pc = 0x7F24153Cu;
    // 7F24153C: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F241540:
    ctx->pc = 0x7F241540u;
    // 7F241540: bl      0x7F114508
    {
            ctx->lr = 0x7F241544u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F241544:
    ctx->pc = 0x7F241544u;
    ctx->downcount -= 7;
    // 7F241544: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241548:
    ctx->pc = 0x7F241548u;
    // 7F241548: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F24154C:
    ctx->pc = 0x7F24154Cu;
    // 7F24154C: addi    r3, r3, -8576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8576);

label_7F241550:
    ctx->pc = 0x7F241550u;
    // 7F241550: addi    r5, r1, 84
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(84);

label_7F241554:
    ctx->pc = 0x7F241554u;
    // 7F241554: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241558:
    ctx->pc = 0x7F241558u;
    // 7F241558: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F24155C:
    ctx->pc = 0x7F24155Cu;
    // 7F24155C: bl      0x800261B4
    {
            ctx->lr = 0x7F241560u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F241560:
    ctx->pc = 0x7F241560u;
    ctx->downcount -= 1;
    // 7F241560: b       0x7F241574
    {
            goto label_7F241574;
    }

label_7F241564:
    ctx->pc = 0x7F241564u;
    ctx->downcount -= 4;
    // 7F241564: stw     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F241568:
    ctx->pc = 0x7F241568u;
    // 7F241568: stw     r4, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24156C:
    ctx->pc = 0x7F24156Cu;
    // 7F24156C: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241570:
    ctx->pc = 0x7F241570u;
    // 7F241570: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241574:
    ctx->pc = 0x7F241574u;
    ctx->downcount -= 4;
    // 7F241574: addi    r3, r1, 84
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(84);

label_7F241578:
    ctx->pc = 0x7F241578u;
    // 7F241578: addi    r4, r1, 100
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(100);

label_7F24157C:
    ctx->pc = 0x7F24157Cu;
    // 7F24157C: addi    r5, r1, 68
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(68);

label_7F241580:
    ctx->pc = 0x7F241580u;
    // 7F241580: bl      0x800261D8
    {
            ctx->lr = 0x7F241584u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F241584:
    ctx->pc = 0x7F241584u;
    ctx->downcount -= 2;
    // 7F241584: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241588:
    ctx->pc = 0x7F241588u;
    // 7F241588: bl      0x7F023170
    {
            ctx->lr = 0x7F24158Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F24158C:
    ctx->pc = 0x7F24158Cu;
    ctx->downcount -= 7;
    // 7F24158C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F241590:
    ctx->pc = 0x7F241590u;
    // 7F241590: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F241594:
    ctx->pc = 0x7F241594u;
    // 7F241594: addi    r4, r4, 14080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F241598:
    ctx->pc = 0x7F241598u;
    // 7F241598: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24159C:
    ctx->pc = 0x7F24159Cu;
    // 7F24159C: addi    r7, r3, 11312
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(11312);

label_7F2415A0:
    ctx->pc = 0x7F2415A0u;
    // 7F2415A0: rlwinm. r0, r0, 0, 28, 28
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

label_7F2415A4:
    ctx->pc = 0x7F2415A4u;
    // 7F2415A4: bc    12, 2, 0x7F2415B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2415B0;
        }
    }

label_7F2415A8:
    ctx->pc = 0x7F2415A8u;
    ctx->downcount -= 2;
    // 7F2415A8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2415AC:
    ctx->pc = 0x7F2415ACu;
    // 7F2415AC: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2415B0:
    ctx->pc = 0x7F2415B0u;
    ctx->downcount -= 12;
    // 7F2415B0: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2415B4:
    ctx->pc = 0x7F2415B4u;
    // 7F2415B4: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F2415B8:
    ctx->pc = 0x7F2415B8u;
    // 7F2415B8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2415BC:
    ctx->pc = 0x7F2415BCu;
    // 7F2415BC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2415C0:
    ctx->pc = 0x7F2415C0u;
    // 7F2415C0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2415C4:
    ctx->pc = 0x7F2415C4u;
    // 7F2415C4: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2415C8:
    ctx->pc = 0x7F2415C8u;
    // 7F2415C8: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2415CC:
    ctx->pc = 0x7F2415CCu;
    // 7F2415CC: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2415D0:
    ctx->pc = 0x7F2415D0u;
    // 7F2415D0: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2415D4:
    ctx->pc = 0x7F2415D4u;
    // 7F2415D4: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2415D8:
    ctx->pc = 0x7F2415D8u;
    // 7F2415D8: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2415DC:
    ctx->pc = 0x7F2415DCu;
    // 7F2415DC: bl      0x800261B4
    {
            ctx->lr = 0x7F2415E0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2415E0:
    ctx->pc = 0x7F2415E0u;
    ctx->downcount -= 3;
    // 7F2415E0: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F2415E4:
    ctx->pc = 0x7F2415E4u;
    // 7F2415E4: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_7F2415E8:
    ctx->pc = 0x7F2415E8u;
    // 7F2415E8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2415ECu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2415EC:
    ctx->pc = 0x7F2415ECu;
    ctx->downcount -= 2;
    // 7F2415EC: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F2415F0:
    ctx->pc = 0x7F2415F0u;
    // 7F2415F0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F2415F4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F2415F4:
    ctx->pc = 0x7F2415F4u;
    ctx->downcount -= 4;
    // 7F2415F4: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F2415F8:
    ctx->pc = 0x7F2415F8u;
    // 7F2415F8: addi    r4, r31, 460
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(460);

label_7F2415FC:
    ctx->pc = 0x7F2415FCu;
    // 7F2415FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F241600:
    ctx->pc = 0x7F241600u;
    // 7F241600: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F241604u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F241604:
    ctx->pc = 0x7F241604u;
    ctx->downcount -= 3;
    // 7F241604: lbz     r0, 203(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(203);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F241608:
    ctx->pc = 0x7F241608u;
    // 7F241608: extsb. r0, r0
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

label_7F24160C:
    ctx->pc = 0x7F24160Cu;
    // 7F24160C: bc    4, 2, 0x7F241620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241620;
        }
    }

label_7F241610:
    ctx->pc = 0x7F241610u;
    ctx->downcount -= 4;
    // 7F241610: lwz     r3, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241614:
    ctx->pc = 0x7F241614u;
    // 7F241614: addic.  r0, r3, -1
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

label_7F241618:
    ctx->pc = 0x7F241618u;
    // 7F241618: stw     r0, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24161C:
    ctx->pc = 0x7F24161Cu;
    // 7F24161C: bc    12, 1, 0x7F24162C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24162C;
        }
    }

label_7F241620:
    ctx->pc = 0x7F241620u;
    ctx->downcount -= 3;
    // 7F241620: lwz     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241624:
    ctx->pc = 0x7F241624u;
    // 7F241624: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F241628:
    ctx->pc = 0x7F241628u;
    // 7F241628: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24162C:
    ctx->pc = 0x7F24162Cu;
    ctx->downcount -= 7;
    // 7F24162C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F241630:
    ctx->pc = 0x7F241630u;
    // 7F241630: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241634:
    ctx->pc = 0x7F241634u;
    // 7F241634: addi    r4, r3, 18316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18316);

label_7F241638:
    ctx->pc = 0x7F241638u;
    // 7F241638: addi    r3, r31, 592
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(592);

label_7F24163C:
    ctx->pc = 0x7F24163Cu;
    // 7F24163C: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F241640:
    ctx->pc = 0x7F241640u;
    // 7F241640: addi    r4, r1, 100
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(100);

label_7F241644:
    ctx->pc = 0x7F241644u;
    // 7F241644: bl      0x7F014A08
    {
            ctx->lr = 0x7F241648u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F241648:
    ctx->pc = 0x7F241648u;
    ctx->downcount -= 2;
    // 7F241648: addi    r3, r31, 592
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(592);

label_7F24164C:
    ctx->pc = 0x7F24164Cu;
    // 7F24164C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F241650u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F241650:
    ctx->pc = 0x7F241650u;
    ctx->downcount -= 3;
    // 7F241650: lwz     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241654:
    ctx->pc = 0x7F241654u;
    // 7F241654: rlwinm. r0, r0, 0, 31, 31
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

label_7F241658:
    ctx->pc = 0x7F241658u;
    // 7F241658: bc    4, 2, 0x7F24166C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24166C;
        }
    }

label_7F24165C:
    ctx->pc = 0x7F24165Cu;
    ctx->downcount -= 4;
    // 7F24165C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241660:
    ctx->pc = 0x7F241660u;
    // 7F241660: lwz     r0, -9736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241664:
    ctx->pc = 0x7F241664u;
    // 7F241664: cmpwi   r0, 0
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

label_7F241668:
    ctx->pc = 0x7F241668u;
    // 7F241668: bc    12, 2, 0x7F241698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241698;
        }
    }

label_7F24166C:
    ctx->pc = 0x7F24166Cu;
    ctx->downcount -= 8;
    // 7F24166C: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F241670:
    ctx->pc = 0x7F241670u;
    // 7F241670: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F241674:
    ctx->pc = 0x7F241674u;
    // 7F241674: li      r5, 1000
    ctx->gpr[5] = (u32)(s32)(1000);

label_7F241678:
    ctx->pc = 0x7F241678u;
    // 7F241678: li      r6, 2000
    ctx->gpr[6] = (u32)(s32)(2000);

label_7F24167C:
    ctx->pc = 0x7F24167Cu;
    // 7F24167C: li      r7, 40
    ctx->gpr[7] = (u32)(s32)(40);

label_7F241680:
    ctx->pc = 0x7F241680u;
    // 7F241680: li      r8, 10
    ctx->gpr[8] = (u32)(s32)(10);

label_7F241684:
    ctx->pc = 0x7F241684u;
    // 7F241684: li      r9, 7
    ctx->gpr[9] = (u32)(s32)(7);

label_7F241688:
    ctx->pc = 0x7F241688u;
    // 7F241688: bl      0x7F23B434
    {
            ctx->lr = 0x7F24168Cu;
            ctx->pc = 0x7F23B434u;
            return;
    }

label_7F24168C:
    ctx->pc = 0x7F24168Cu;
    ctx->downcount -= 2;
    // 7F24168C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F241690:
    ctx->pc = 0x7F241690u;
    // 7F241690: bl      0x7F3C8210
    {
            ctx->lr = 0x7F241694u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F241694:
    ctx->pc = 0x7F241694u;
    ctx->downcount -= 1;
    // 7F241694: b       0x7F241DE0
    {
            goto label_7F241DE0;
    }

label_7F241698:
    ctx->pc = 0x7F241698u;
    ctx->downcount -= 3;
    // 7F241698: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24169C:
    ctx->pc = 0x7F24169Cu;
    // 7F24169C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2416A0:
    ctx->pc = 0x7F2416A0u;
    // 7F2416A0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2416A4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2416A4:
    ctx->pc = 0x7F2416A4u;
    ctx->downcount -= 3;
    // 7F2416A4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2416A8:
    ctx->pc = 0x7F2416A8u;
    // 7F2416A8: addi    r3, r3, 11296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11296);

label_7F2416AC:
    ctx->pc = 0x7F2416ACu;
    // 7F2416AC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2416B0u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2416B0:
    ctx->pc = 0x7F2416B0u;
    ctx->downcount -= 2;
    // 7F2416B0: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F2416B4:
    ctx->pc = 0x7F2416B4u;
    // 7F2416B4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2416B8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2416B8:
    ctx->pc = 0x7F2416B8u;
    ctx->downcount -= 3;
    // 7F2416B8: lwz     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2416BC:
    ctx->pc = 0x7F2416BCu;
    // 7F2416BC: cmpwi   r0, 1
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

label_7F2416C0:
    ctx->pc = 0x7F2416C0u;
    // 7F2416C0: bc    12, 2, 0x7F241774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241774;
        }
    }

label_7F2416C4:
    ctx->pc = 0x7F2416C4u;
    ctx->downcount -= 1;
    // 7F2416C4: bc    4, 0, 0x7F2418F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2418F4;
        }
    }

label_7F2416C8:
    ctx->pc = 0x7F2416C8u;
    ctx->downcount -= 2;
    // 7F2416C8: cmpwi   r0, 0
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

label_7F2416CC:
    ctx->pc = 0x7F2416CCu;
    // 7F2416CC: bc    4, 0, 0x7F2416D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2416D4;
        }
    }

label_7F2416D0:
    ctx->pc = 0x7F2416D0u;
    ctx->downcount -= 1;
    // 7F2416D0: b       0x7F2418F4
    {
            goto label_7F2418F4;
    }

label_7F2416D4:
    ctx->pc = 0x7F2416D4u;
    ctx->downcount -= 18;
    // 7F2416D4: lwz     r7, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2416D8:
    ctx->pc = 0x7F2416D8u;
    // 7F2416D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2416DC:
    ctx->pc = 0x7F2416DCu;
    // 7F2416DC: addi    r4, r3, 20076
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20076);

label_7F2416E0:
    ctx->pc = 0x7F2416E0u;
    // 7F2416E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2416E4:
    ctx->pc = 0x7F2416E4u;
    // 7F2416E4: lwz     r6, 164(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2416E8:
    ctx->pc = 0x7F2416E8u;
    // 7F2416E8: addi    r5, r3, 20080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20080);

label_7F2416EC:
    ctx->pc = 0x7F2416ECu;
    // 7F2416EC: addi    r3, r27, 16
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(16);

label_7F2416F0:
    ctx->pc = 0x7F2416F0u;
    // 7F2416F0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2416F4:
    ctx->pc = 0x7F2416F4u;
    // 7F2416F4: ori     r6, r6, 0x3000
    ctx->gpr[6] = ctx->gpr[6] | 0x3000u;

label_7F2416F8:
    ctx->pc = 0x7F2416F8u;
    // 7F2416F8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2416F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2416FC:
    ctx->pc = 0x7F2416FCu;
    // 7F2416FC: stw     r6, 164(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F241700:
    ctx->pc = 0x7F241700u;
    // 7F241700: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241704:
    ctx->pc = 0x7F241704u;
    // 7F241704: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F241704u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241708:
    ctx->pc = 0x7F241708u;
    // 7F241708: stw     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24170C:
    ctx->pc = 0x7F24170Cu;
    // 7F24170C: lfs     f2, 20(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F24170Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241710:
    ctx->pc = 0x7F241710u;
    // 7F241710: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241710u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241714:
    ctx->pc = 0x7F241714u;
    // 7F241714: stfs     f0, 20(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F241714u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241718:
    ctx->pc = 0x7F241718u;
    // 7F241718: bl      0x800261FC
    {
            ctx->lr = 0x7F24171Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F24171C:
    ctx->pc = 0x7F24171Cu;
    ctx->downcount -= 3;
    // 7F24171C: lwz     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241720:
    ctx->pc = 0x7F241720u;
    // 7F241720: cmpwi   r0, 15
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

label_7F241724:
    ctx->pc = 0x7F241724u;
    // 7F241724: bc    4, 1, 0x7F2418F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2418F4;
        }
    }

label_7F241728:
    ctx->pc = 0x7F241728u;
    ctx->downcount -= 4;
    // 7F241728: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24172C:
    ctx->pc = 0x7F24172Cu;
    // 7F24172C: li      r3, 77
    ctx->gpr[3] = (u32)(s32)(77);

label_7F241730:
    ctx->pc = 0x7F241730u;
    // 7F241730: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F241734:
    ctx->pc = 0x7F241734u;
    // 7F241734: bl      0x7F0117B8
    {
            ctx->lr = 0x7F241738u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F241738:
    ctx->pc = 0x7F241738u;
    ctx->downcount -= 10;
    // 7F241738: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24173C:
    ctx->pc = 0x7F24173Cu;
    // 7F24173C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241740:
    ctx->pc = 0x7F241740u;
    // 7F241740: stw     r5, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F241744:
    ctx->pc = 0x7F241744u;
    // 7F241744: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F241748:
    ctx->pc = 0x7F241748u;
    // 7F241748: addi    r4, r3, 20084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20084);

label_7F24174C:
    ctx->pc = 0x7F24174Cu;
    // 7F24174C: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F241750:
    ctx->pc = 0x7F241750u;
    // 7F241750: stw     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241754:
    ctx->pc = 0x7F241754u;
    // 7F241754: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241754u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241758:
    ctx->pc = 0x7F241758u;
    // 7F241758: stb     r5, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F24175C:
    ctx->pc = 0x7F24175Cu;
    // 7F24175C: bl      0x7F25A968
    {
            ctx->lr = 0x7F241760u;
            ctx->pc = 0x7F25A968u;
            return;
    }

label_7F241760:
    ctx->pc = 0x7F241760u;
    ctx->downcount -= 4;
    // 7F241760: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241764:
    ctx->pc = 0x7F241764u;
    // 7F241764: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F241768:
    ctx->pc = 0x7F241768u;
    // 7F241768: lfs     f1, 20068(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241768u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24176C:
    ctx->pc = 0x7F24176Cu;
    // 7F24176C: bl      0x7F25A968
    {
            ctx->lr = 0x7F241770u;
            ctx->pc = 0x7F25A968u;
            return;
    }

label_7F241770:
    ctx->pc = 0x7F241770u;
    ctx->downcount -= 1;
    // 7F241770: b       0x7F2418F4
    {
            goto label_7F2418F4;
    }

label_7F241774:
    ctx->pc = 0x7F241774u;
    ctx->downcount -= 2;
    // 7F241774: addic.  r0, r1, 84
    {
        u64 a = ctx->gpr[1];
        u64 b = (u32)(s32)(84);
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

label_7F241778:
    ctx->pc = 0x7F241778u;
    // 7F241778: bc    4, 2, 0x7F241788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241788;
        }
    }

label_7F24177C:
    ctx->pc = 0x7F24177Cu;
    ctx->downcount -= 2;
    // 7F24177C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F241780:
    ctx->pc = 0x7F241780u;
    // 7F241780: bl      0x7F3C8210
    {
            ctx->lr = 0x7F241784u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F241784:
    ctx->pc = 0x7F241784u;
    ctx->downcount -= 1;
    // 7F241784: b       0x7F241DE0
    {
            goto label_7F241DE0;
    }

label_7F241788:
    ctx->pc = 0x7F241788u;
    ctx->downcount -= 6;
    // 7F241788: lwz     r3, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24178C:
    ctx->pc = 0x7F24178Cu;
    // 7F24178C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F241790:
    ctx->pc = 0x7F241790u;
    // 7F241790: stw     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241794:
    ctx->pc = 0x7F241794u;
    // 7F241794: lwz     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241798:
    ctx->pc = 0x7F241798u;
    // 7F241798: cmpwi   r0, 15
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

label_7F24179C:
    ctx->pc = 0x7F24179Cu;
    // 7F24179C: bc    4, 2, 0x7F2417CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2417CC;
        }
    }

label_7F2417A0:
    ctx->pc = 0x7F2417A0u;
    ctx->downcount -= 8;
    // 7F2417A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2417A4:
    ctx->pc = 0x7F2417A4u;
    // 7F2417A4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2417A8:
    ctx->pc = 0x7F2417A8u;
    // 7F2417A8: addi    r5, r3, 20088
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20088);

label_7F2417AC:
    ctx->pc = 0x7F2417ACu;
    // 7F2417AC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2417ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2417B0:
    ctx->pc = 0x7F2417B0u;
    // 7F2417B0: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F2417B4:
    ctx->pc = 0x7F2417B4u;
    // 7F2417B4: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F2417B8:
    ctx->pc = 0x7F2417B8u;
    // 7F2417B8: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F2417BC:
    ctx->pc = 0x7F2417BCu;
    // 7F2417BC: bl      0x7F26C10C
    {
            ctx->lr = 0x7F2417C0u;
            ctx->pc = 0x7F26C10Cu;
            return;
    }

label_7F2417C0:
    ctx->pc = 0x7F2417C0u;
    ctx->downcount -= 3;
    // 7F2417C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2417C4:
    ctx->pc = 0x7F2417C4u;
    // 7F2417C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2417C8:
    ctx->pc = 0x7F2417C8u;
    // 7F2417C8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2417CCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2417CC:
    ctx->pc = 0x7F2417CCu;
    ctx->downcount -= 3;
    // 7F2417CC: lwz     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2417D0:
    ctx->pc = 0x7F2417D0u;
    // 7F2417D0: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2417D4:
    ctx->pc = 0x7F2417D4u;
    // 7F2417D4: bc    4, 2, 0x7F24181C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24181C;
        }
    }

label_7F2417D8:
    ctx->pc = 0x7F2417D8u;
    ctx->downcount -= 10;
    // 7F2417D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2417DC:
    ctx->pc = 0x7F2417DCu;
    // 7F2417DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2417E0:
    ctx->pc = 0x7F2417E0u;
    // 7F2417E0: addi    r5, r3, 20032
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20032);

label_7F2417E4:
    ctx->pc = 0x7F2417E4u;
    // 7F2417E4: lfs     f0, 20092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2417E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2417E8:
    ctx->pc = 0x7F2417E8u;
    // 7F2417E8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2417E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2417EC:
    ctx->pc = 0x7F2417ECu;
    // 7F2417EC: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F2417F0:
    ctx->pc = 0x7F2417F0u;
    // 7F2417F0: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2417F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2417F4:
    ctx->pc = 0x7F2417F4u;
    // 7F2417F4: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2417F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2417F8:
    ctx->pc = 0x7F2417F8u;
    // 7F2417F8: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2417F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2417FC:
    ctx->pc = 0x7F2417FCu;
    // 7F2417FC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F241800u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F241800:
    ctx->pc = 0x7F241800u;
    ctx->downcount -= 4;
    // 7F241800: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241804:
    ctx->pc = 0x7F241804u;
    // 7F241804: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F241808:
    ctx->pc = 0x7F241808u;
    // 7F241808: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24180C:
    ctx->pc = 0x7F24180Cu;
    // 7F24180C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F241810u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F241810:
    ctx->pc = 0x7F241810u;
    ctx->downcount -= 3;
    // 7F241810: addi    r3, r31, 924
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(924);

label_7F241814:
    ctx->pc = 0x7F241814u;
    // 7F241814: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241818:
    ctx->pc = 0x7F241818u;
    // 7F241818: bl      0x7F25C18C
    {
            ctx->lr = 0x7F24181Cu;
            ctx->pc = 0x7F25C18Cu;
            return;
    }

label_7F24181C:
    ctx->pc = 0x7F24181Cu;
    ctx->downcount -= 4;
    // 7F24181C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241820:
    ctx->pc = 0x7F241820u;
    // 7F241820: lwz     r0, -8576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241824:
    ctx->pc = 0x7F241824u;
    // 7F241824: cmplwi  r0, 0x0000
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

label_7F241828:
    ctx->pc = 0x7F241828u;
    // 7F241828: bc    12, 2, 0x7F241860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241860;
        }
    }

label_7F24182C:
    ctx->pc = 0x7F24182Cu;
    ctx->downcount -= 3;
    // 7F24182C: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_7F241830:
    ctx->pc = 0x7F241830u;
    // 7F241830: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F241834:
    ctx->pc = 0x7F241834u;
    // 7F241834: bl      0x7F3CC7EC
    {
            ctx->lr = 0x7F241838u;
            ctx->pc = 0x7F3CC7ECu;
            return;
    }

label_7F241838:
    ctx->pc = 0x7F241838u;
    ctx->downcount -= 9;
    // 7F241838: lha     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24183C:
    ctx->pc = 0x7F24183Cu;
    // 7F24183C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241840:
    ctx->pc = 0x7F241840u;
    // 7F241840: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F241844:
    ctx->pc = 0x7F241844u;
    // 7F241844: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F241848:
    ctx->pc = 0x7F241848u;
    // 7F241848: addi    r0, r6, -1024
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1024);

label_7F24184C:
    ctx->pc = 0x7F24184Cu;
    // 7F24184C: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F241850:
    ctx->pc = 0x7F241850u;
    // 7F241850: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F241854:
    ctx->pc = 0x7F241854u;
    // 7F241854: addi    r7, r1, 68
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(68);

label_7F241858:
    ctx->pc = 0x7F241858u;
    // 7F241858: bl      0x7F240FDC
    {
            ctx->lr = 0x7F24185Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F240FDCu;
                return;
            }
            goto label_7F240FDC;
    }

label_7F24185C:
    ctx->pc = 0x7F24185Cu;
    ctx->downcount -= 1;
    // 7F24185C: b       0x7F24188C
    {
            goto label_7F24188C;
    }

label_7F241860:
    ctx->pc = 0x7F241860u;
    ctx->downcount -= 10;
    // 7F241860: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F241864:
    ctx->pc = 0x7F241864u;
    // 7F241864: lfs     f1, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241864u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241868:
    ctx->pc = 0x7F241868u;
    // 7F241868: lfs     f0, -9708(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241868u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24186C:
    ctx->pc = 0x7F24186Cu;
    // 7F24186C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241870:
    ctx->pc = 0x7F241870u;
    // 7F241870: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241870u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F241874:
    ctx->pc = 0x7F241874u;
    // 7F241874: stfs     f0, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241874u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241878:
    ctx->pc = 0x7F241878u;
    // 7F241878: lfs     f0, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241878u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24187C:
    ctx->pc = 0x7F24187Cu;
    // 7F24187C: lfs     f1, -9704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24187Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241880:
    ctx->pc = 0x7F241880u;
    // 7F241880: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241880u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F241884:
    ctx->pc = 0x7F241884u;
    // 7F241884: bc    4, 1, 0x7F24188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24188C;
        }
    }

label_7F241888:
    ctx->pc = 0x7F241888u;
    ctx->downcount -= 1;
    // 7F241888: stfs     f1, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241888u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24188C:
    ctx->pc = 0x7F24188Cu;
    ctx->downcount -= 14;
    // 7F24188C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F241890:
    ctx->pc = 0x7F241890u;
    // 7F241890: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F241894:
    ctx->pc = 0x7F241894u;
    // 7F241894: addi    r5, r4, -9732
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9732);

label_7F241898:
    ctx->pc = 0x7F241898u;
    // 7F241898: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F241898u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24189C:
    ctx->pc = 0x7F24189Cu;
    // 7F24189C: addi    r4, r27, 32
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(32);

label_7F2418A0:
    ctx->pc = 0x7F2418A0u;
    // 7F2418A0: lfs     f2, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2418A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2418A4:
    ctx->pc = 0x7F2418A4u;
    // 7F2418A4: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2418A8:
    ctx->pc = 0x7F2418A8u;
    // 7F2418A8: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2418A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2418AC:
    ctx->pc = 0x7F2418ACu;
    // 7F2418AC: lfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2418ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2418B0:
    ctx->pc = 0x7F2418B0u;
    // 7F2418B0: lfs     f1, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2418B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2418B4:
    ctx->pc = 0x7F2418B4u;
    // 7F2418B4: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2418B4u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F2418B8:
    ctx->pc = 0x7F2418B8u;
    // 7F2418B8: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2418B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2418BC:
    ctx->pc = 0x7F2418BCu;
    // 7F2418BC: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2418BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2418C0:
    ctx->pc = 0x7F2418C0u;
    // 7F2418C0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2418C4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2418C4:
    ctx->pc = 0x7F2418C4u;
    ctx->downcount -= 4;
    // 7F2418C4: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F2418C8:
    ctx->pc = 0x7F2418C8u;
    // 7F2418C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2418CC:
    ctx->pc = 0x7F2418CCu;
    // 7F2418CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2418D0:
    ctx->pc = 0x7F2418D0u;
    // 7F2418D0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F2418D4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F2418D4:
    ctx->pc = 0x7F2418D4u;
    ctx->downcount -= 8;
    // 7F2418D4: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2418D8:
    ctx->pc = 0x7F2418D8u;
    // 7F2418D8: lwz     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2418DC:
    ctx->pc = 0x7F2418DCu;
    // 7F2418DC: stw     r3, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2418E0:
    ctx->pc = 0x7F2418E0u;
    // 7F2418E0: stw     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2418E4:
    ctx->pc = 0x7F2418E4u;
    // 7F2418E4: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2418E8:
    ctx->pc = 0x7F2418E8u;
    // 7F2418E8: lwz     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2418EC:
    ctx->pc = 0x7F2418ECu;
    // 7F2418EC: stw     r3, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2418F0:
    ctx->pc = 0x7F2418F0u;
    // 7F2418F0: stw     r0, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2418F4:
    ctx->pc = 0x7F2418F4u;
    ctx->downcount -= 19;
    // 7F2418F4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2418F8:
    ctx->pc = 0x7F2418F8u;
    // 7F2418F8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2418FC:
    ctx->pc = 0x7F2418FCu;
    // 7F2418FC: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241900:
    ctx->pc = 0x7F241900u;
    // 7F241900: addi    r5, r3, -5936
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5936);

label_7F241904:
    ctx->pc = 0x7F241904u;
    // 7F241904: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F241908:
    ctx->pc = 0x7F241908u;
    // 7F241908: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24190C:
    ctx->pc = 0x7F24190Cu;
    // 7F24190C: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F241910:
    ctx->pc = 0x7F241910u;
    // 7F241910: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241914:
    ctx->pc = 0x7F241914u;
    // 7F241914: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241918:
    ctx->pc = 0x7F241918u;
    // 7F241918: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24191C:
    ctx->pc = 0x7F24191Cu;
    // 7F24191C: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241920:
    ctx->pc = 0x7F241920u;
    // 7F241920: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241924:
    ctx->pc = 0x7F241924u;
    // 7F241924: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241928:
    ctx->pc = 0x7F241928u;
    // 7F241928: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24192C:
    ctx->pc = 0x7F24192Cu;
    // 7F24192C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F241930:
    ctx->pc = 0x7F241930u;
    // 7F241930: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241934:
    ctx->pc = 0x7F241934u;
    // 7F241934: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241938:
    ctx->pc = 0x7F241938u;
    // 7F241938: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24193C:
    ctx->pc = 0x7F24193Cu;
    // 7F24193C: bl      0x7F241E68
    {
            ctx->lr = 0x7F241940u;
            goto label_7F241E68;
    }

label_7F241940:
    ctx->pc = 0x7F241940u;
    ctx->downcount -= 8;
    // 7F241940: lwz     r4, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241944:
    ctx->pc = 0x7F241944u;
    // 7F241944: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F241948:
    ctx->pc = 0x7F241948u;
    // 7F241948: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24194C:
    ctx->pc = 0x7F24194Cu;
    // 7F24194C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F241950:
    ctx->pc = 0x7F241950u;
    // 7F241950: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241954:
    ctx->pc = 0x7F241954u;
    // 7F241954: lwz     r4, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241958:
    ctx->pc = 0x7F241958u;
    // 7F241958: lwz     r28, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F24195C:
    ctx->pc = 0x7F24195Cu;
    // 7F24195C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F241960u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F241960:
    ctx->pc = 0x7F241960u;
    ctx->downcount -= 7;
    // 7F241960: lwz     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241964:
    ctx->pc = 0x7F241964u;
    // 7F241964: rlwinm r30, r28, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_7F241968:
    ctx->pc = 0x7F241968u;
    // 7F241968: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24196C:
    ctx->pc = 0x7F24196Cu;
    // 7F24196C: cmpwi   r0, -1
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

label_7F241970:
    ctx->pc = 0x7F241970u;
    // 7F241970: add   r4, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F241974:
    ctx->pc = 0x7F241974u;
    // 7F241974: lwz     r28, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F241978:
    ctx->pc = 0x7F241978u;
    // 7F241978: bc    12, 2, 0x7F241AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241AFC;
        }
    }

label_7F24197C:
    ctx->pc = 0x7F24197Cu;
    ctx->downcount -= 10;
    // 7F24197C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241980:
    ctx->pc = 0x7F241980u;
    // 7F241980: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241984:
    ctx->pc = 0x7F241984u;
    // 7F241984: lfs     f2, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241984u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241988:
    ctx->pc = 0x7F241988u;
    // 7F241988: lfs     f1, 20096(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241988u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24198C:
    ctx->pc = 0x7F24198Cu;
    // 7F24198C: lfs     f0, 20032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24198Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241990:
    ctx->pc = 0x7F241990u;
    // 7F241990: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241990u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F241994:
    ctx->pc = 0x7F241994u;
    // 7F241994: stfs     f1, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241994u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F241998:
    ctx->pc = 0x7F241998u;
    // 7F241998: lfs     f1, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F241998u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24199C:
    ctx->pc = 0x7F24199Cu;
    // 7F24199C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24199Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2419A0:
    ctx->pc = 0x7F2419A0u;
    // 7F2419A0: bc    4, 1, 0x7F2419A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2419A8;
        }
    }

label_7F2419A4:
    ctx->pc = 0x7F2419A4u;
    ctx->downcount -= 1;
    // 7F2419A4: b       0x7F2419AC
    {
            goto label_7F2419AC;
    }

label_7F2419A8:
    ctx->pc = 0x7F2419A8u;
    ctx->downcount -= 1;
    // 7F2419A8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2419A8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F2419AC:
    ctx->pc = 0x7F2419ACu;
    ctx->downcount -= 3;
    // 7F2419AC: stfs     f1, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2419ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2419B0:
    ctx->pc = 0x7F2419B0u;
    // 7F2419B0: lfs     f31, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2419B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2419B4:
    ctx->pc = 0x7F2419B4u;
    // 7F2419B4: bl      0x7F241DFC
    {
            ctx->lr = 0x7F2419B8u;
            goto label_7F241DFC;
    }

label_7F2419B8:
    ctx->pc = 0x7F2419B8u;
    ctx->downcount -= 10;
    // 7F2419B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2419BC:
    ctx->pc = 0x7F2419BCu;
    // 7F2419BC: fmadds f1, f31, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2419BCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F2419C0:
    ctx->pc = 0x7F2419C0u;
    // 7F2419C0: lfs     f0, 20100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2419C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2419C4:
    ctx->pc = 0x7F2419C4u;
    // 7F2419C4: lwz     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2419C8:
    ctx->pc = 0x7F2419C8u;
    // 7F2419C8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2419C8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F2419CC:
    ctx->pc = 0x7F2419CCu;
    // 7F2419CC: cmpwi   r0, 32
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

label_7F2419D0:
    ctx->pc = 0x7F2419D0u;
    // 7F2419D0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2419D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2419D4:
    ctx->pc = 0x7F2419D4u;
    // 7F2419D4: stfd     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2419D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2419D8:
    ctx->pc = 0x7F2419D8u;
    // 7F2419D8: lwz     r29, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2419DC:
    ctx->pc = 0x7F2419DCu;
    // 7F2419DC: bc    4, 0, 0x7F241A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241A9C;
        }
    }

label_7F2419E0:
    ctx->pc = 0x7F2419E0u;
    ctx->downcount -= 7;
    // 7F2419E0: lwz     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2419E4:
    ctx->pc = 0x7F2419E4u;
    // 7F2419E4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2419E8:
    ctx->pc = 0x7F2419E8u;
    // 7F2419E8: addi    r3, r3, -9680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9680);

label_7F2419EC:
    ctx->pc = 0x7F2419ECu;
    // 7F2419EC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F2419F0:
    ctx->pc = 0x7F2419F0u;
    // 7F2419F0: add   r4, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2419F4:
    ctx->pc = 0x7F2419F4u;
    // 7F2419F4: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2419F8:
    ctx->pc = 0x7F2419F8u;
    // 7F2419F8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2419FCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2419FC:
    ctx->pc = 0x7F2419FCu;
    ctx->downcount -= 4;
    // 7F2419FC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F241A00:
    ctx->pc = 0x7F241A00u;
    // 7F241A00: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F241A04:
    ctx->pc = 0x7F241A04u;
    // 7F241A04: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F241A08:
    loop_7F241A08(ctx);
    if (ctx->pc == 0x7F241A50u) goto label_7F241A50;
    return;
label_7F241A0C:
    // 7F241A0C: subfic  r3, r0, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F241A10:
    // 7F241A10: subfic  r4, r5, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F241A14:
    // 7F241A14: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F241A18:
    // 7F241A18: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F241A1C:
    // 7F241A1C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F241A20:
    // 7F241A20: srawi r0, r0, 2
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

label_7F241A24:
    // 7F241A24: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F241A28:
    // 7F241A28: mullw   r0, r29, r4
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F241A2C:
    // 7F241A2C: addi    r3, r3, 300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(300);

label_7F241A30:
    ctx->pc = 0x7F241A30u;
    // 7F241A30: sth     r3, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241A34:
    ctx->pc = 0x7F241A34u;
    // 7F241A34: sth     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241A38:
    // 7F241A38: srawi r0, r0, 5
    {
        u32 sh = 5u;
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

label_7F241A3C:
    // 7F241A3C: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F241A40:
    // 7F241A40: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F241A44:
    ctx->pc = 0x7F241A44u;
    // 7F241A44: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241A48:
    // 7F241A48: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F241A4C:
    // 7F241A4C: bc    16, 0, 0x7F241A08
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241A08u;
                return;
            }
            goto label_7F241A08;
        }
    }

label_7F241A50:
    ctx->pc = 0x7F241A50u;
    ctx->downcount -= 3;
    // 7F241A50: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241A54:
    ctx->pc = 0x7F241A54u;
    // 7F241A54: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F241A58:
    ctx->pc = 0x7F241A58u;
    // 7F241A58: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F241A5Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F241A5C:
    ctx->pc = 0x7F241A5Cu;
    ctx->downcount -= 3;
    // 7F241A5C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F241A60:
    ctx->pc = 0x7F241A60u;
    // 7F241A60: addi    r3, r3, 11280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11280);

label_7F241A64:
    ctx->pc = 0x7F241A64u;
    // 7F241A64: bl      0x7F3B3134
    {
            ctx->lr = 0x7F241A68u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F241A68:
    ctx->pc = 0x7F241A68u;
    ctx->downcount -= 2;
    // 7F241A68: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_7F241A6C:
    ctx->pc = 0x7F241A6Cu;
    // 7F241A6C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F241A70u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F241A70:
    ctx->pc = 0x7F241A70u;
    ctx->downcount -= 10;
    // 7F241A70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241A74:
    ctx->pc = 0x7F241A74u;
    // 7F241A74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241A78:
    ctx->pc = 0x7F241A78u;
    // 7F241A78: addi    r5, r4, 20104
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20104);

label_7F241A7C:
    ctx->pc = 0x7F241A7Cu;
    // 7F241A7C: lfs     f2, 20108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241A7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241A80:
    ctx->pc = 0x7F241A80u;
    // 7F241A80: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F241A84:
    ctx->pc = 0x7F241A84u;
    // 7F241A84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F241A84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241A88:
    ctx->pc = 0x7F241A88u;
    // 7F241A88: addi    r3, r1, 164
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(164);

label_7F241A8C:
    ctx->pc = 0x7F241A8Cu;
    // 7F241A8C: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F241A90:
    ctx->pc = 0x7F241A90u;
    // 7F241A90: addi    r4, r4, -15296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15296);

label_7F241A94:
    ctx->pc = 0x7F241A94u;
    // 7F241A94: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F241A98u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F241A98:
    ctx->pc = 0x7F241A98u;
    ctx->downcount -= 1;
    // 7F241A98: b       0x7F241B30
    {
            goto label_7F241B30;
    }

label_7F241A9C:
    ctx->pc = 0x7F241A9Cu;
    ctx->downcount -= 7;
    // 7F241A9C: lwz     r0, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241AA0:
    ctx->pc = 0x7F241AA0u;
    // 7F241AA0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241AA4:
    ctx->pc = 0x7F241AA4u;
    // 7F241AA4: addi    r3, r3, -9168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9168);

label_7F241AA8:
    ctx->pc = 0x7F241AA8u;
    // 7F241AA8: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F241AAC:
    ctx->pc = 0x7F241AACu;
    // 7F241AAC: add   r4, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F241AB0:
    ctx->pc = 0x7F241AB0u;
    // 7F241AB0: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241AB4:
    ctx->pc = 0x7F241AB4u;
    // 7F241AB4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F241AB8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F241AB8:
    ctx->pc = 0x7F241AB8u;
    ctx->downcount -= 4;
    // 7F241AB8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F241ABC:
    ctx->pc = 0x7F241ABCu;
    // 7F241ABC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F241AC0:
    ctx->pc = 0x7F241AC0u;
    // 7F241AC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F241AC4:
    loop_7F241AC4(ctx);
    if (ctx->pc == 0x7F241AF8u) goto label_7F241AF8;
    return;
label_7F241AC8:
    // 7F241AC8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F241ACC:
    // 7F241ACC: mullw   r0, r29, r3
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F241AD0:
    // 7F241AD0: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F241AD4:
    // 7F241AD4: addi    r4, r3, 300
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(300);

label_7F241AD8:
    ctx->pc = 0x7F241AD8u;
    // 7F241AD8: sth     r4, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F241ADC:
    // 7F241ADC: srawi r0, r0, 5
    {
        u32 sh = 5u;
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

label_7F241AE0:
    // 7F241AE0: addze  r3, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F241AE4:
    ctx->pc = 0x7F241AE4u;
    // 7F241AE4: sth     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F241AE8:
    // 7F241AE8: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F241AEC:
    ctx->pc = 0x7F241AECu;
    // 7F241AEC: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241AF0:
    // 7F241AF0: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F241AF4:
    // 7F241AF4: bc    16, 0, 0x7F241AC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241AC4u;
                return;
            }
            goto label_7F241AC4;
        }
    }

label_7F241AF8:
    ctx->pc = 0x7F241AF8u;
    ctx->downcount -= 1;
    // 7F241AF8: b       0x7F241B30
    {
            goto label_7F241B30;
    }

label_7F241AFC:
    ctx->pc = 0x7F241AFCu;
    ctx->downcount -= 5;
    // 7F241AFC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241B00:
    ctx->pc = 0x7F241B00u;
    // 7F241B00: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241B04:
    ctx->pc = 0x7F241B04u;
    // 7F241B04: addi    r3, r3, -9168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9168);

label_7F241B08:
    ctx->pc = 0x7F241B08u;
    // 7F241B08: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F241B0C:
    ctx->pc = 0x7F241B0Cu;
    // 7F241B0C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F241B10u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F241B10:
    ctx->pc = 0x7F241B10u;
    ctx->downcount -= 4;
    // 7F241B10: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F241B14:
    ctx->pc = 0x7F241B14u;
    // 7F241B14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F241B18:
    ctx->pc = 0x7F241B18u;
    // 7F241B18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F241B1C:
    loop_7F241B1C(ctx);
    if (ctx->pc == 0x7F241B30u) goto label_7F241B30;
    return;
label_7F241B20:
    ctx->pc = 0x7F241B20u;
    // 7F241B20: sth     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F241B24:
    ctx->pc = 0x7F241B24u;
    // 7F241B24: stb     r3, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F241B28:
    // 7F241B28: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F241B2C:
    // 7F241B2C: bc    16, 0, 0x7F241B1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241B1Cu;
                return;
            }
            goto label_7F241B1C;
        }
    }

label_7F241B30:
    ctx->pc = 0x7F241B30u;
    ctx->downcount -= 3;
    // 7F241B30: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241B34:
    ctx->pc = 0x7F241B34u;
    // 7F241B34: cmpwi   r0, 0
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

label_7F241B38:
    ctx->pc = 0x7F241B38u;
    // 7F241B38: bc    4, 2, 0x7F241B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241B80;
        }
    }

label_7F241B3C:
    ctx->pc = 0x7F241B3Cu;
    ctx->downcount -= 10;
    // 7F241B3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241B40:
    ctx->pc = 0x7F241B40u;
    // 7F241B40: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241B44:
    ctx->pc = 0x7F241B44u;
    // 7F241B44: addi    r5, r3, 20032
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20032);

label_7F241B48:
    ctx->pc = 0x7F241B48u;
    // 7F241B48: lfs     f0, 20092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241B48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241B4C:
    ctx->pc = 0x7F241B4Cu;
    // 7F241B4C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F241B4Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241B50:
    ctx->pc = 0x7F241B50u;
    // 7F241B50: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F241B54:
    ctx->pc = 0x7F241B54u;
    // 7F241B54: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241B58:
    ctx->pc = 0x7F241B58u;
    // 7F241B58: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241B58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F241B5C:
    ctx->pc = 0x7F241B5Cu;
    // 7F241B5C: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241B5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F241B60:
    ctx->pc = 0x7F241B60u;
    // 7F241B60: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F241B64u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F241B64:
    ctx->pc = 0x7F241B64u;
    ctx->downcount -= 4;
    // 7F241B64: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241B68:
    ctx->pc = 0x7F241B68u;
    // 7F241B68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F241B6C:
    ctx->pc = 0x7F241B6Cu;
    // 7F241B6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241B70:
    ctx->pc = 0x7F241B70u;
    // 7F241B70: bl      0x7F3B3648
    {
            ctx->lr = 0x7F241B74u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F241B74:
    ctx->pc = 0x7F241B74u;
    ctx->downcount -= 3;
    // 7F241B74: addi    r3, r31, 924
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(924);

label_7F241B78:
    ctx->pc = 0x7F241B78u;
    // 7F241B78: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241B7C:
    ctx->pc = 0x7F241B7Cu;
    // 7F241B7C: bl      0x7F25C18C
    {
            ctx->lr = 0x7F241B80u;
            ctx->pc = 0x7F25C18Cu;
            return;
    }

label_7F241B80:
    ctx->pc = 0x7F241B80u;
    ctx->downcount -= 3;
    // 7F241B80: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241B84:
    ctx->pc = 0x7F241B84u;
    // 7F241B84: cmpwi   r0, 4
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

label_7F241B88:
    ctx->pc = 0x7F241B88u;
    // 7F241B88: bc    4, 2, 0x7F241BD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241BD0;
        }
    }

label_7F241B8C:
    ctx->pc = 0x7F241B8Cu;
    ctx->downcount -= 10;
    // 7F241B8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241B90:
    ctx->pc = 0x7F241B90u;
    // 7F241B90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241B94:
    ctx->pc = 0x7F241B94u;
    // 7F241B94: addi    r5, r3, 20032
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20032);

label_7F241B98:
    ctx->pc = 0x7F241B98u;
    // 7F241B98: lfs     f0, 20112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241B98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241B9C:
    ctx->pc = 0x7F241B9Cu;
    // 7F241B9C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F241B9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241BA0:
    ctx->pc = 0x7F241BA0u;
    // 7F241BA0: addi    r3, r31, 876
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(876);

label_7F241BA4:
    ctx->pc = 0x7F241BA4u;
    // 7F241BA4: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241BA8:
    ctx->pc = 0x7F241BA8u;
    // 7F241BA8: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F241BAC:
    ctx->pc = 0x7F241BACu;
    // 7F241BAC: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241BACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F241BB0:
    ctx->pc = 0x7F241BB0u;
    // 7F241BB0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F241BB4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F241BB4:
    ctx->pc = 0x7F241BB4u;
    ctx->downcount -= 4;
    // 7F241BB4: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241BB8:
    ctx->pc = 0x7F241BB8u;
    // 7F241BB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F241BBC:
    ctx->pc = 0x7F241BBCu;
    // 7F241BBC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241BC0:
    ctx->pc = 0x7F241BC0u;
    // 7F241BC0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F241BC4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F241BC4:
    ctx->pc = 0x7F241BC4u;
    ctx->downcount -= 3;
    // 7F241BC4: addi    r3, r31, 924
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(924);

label_7F241BC8:
    ctx->pc = 0x7F241BC8u;
    // 7F241BC8: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_7F241BCC:
    ctx->pc = 0x7F241BCCu;
    // 7F241BCC: bl      0x7F25CA7C
    {
            ctx->lr = 0x7F241BD0u;
            ctx->pc = 0x7F25CA7Cu;
            return;
    }

label_7F241BD0:
    ctx->pc = 0x7F241BD0u;
    ctx->downcount -= 3;
    // 7F241BD0: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241BD4:
    ctx->pc = 0x7F241BD4u;
    // 7F241BD4: cmpwi   r0, 4
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

label_7F241BD8:
    ctx->pc = 0x7F241BD8u;
    // 7F241BD8: bc    4, 2, 0x7F241BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241BEC;
        }
    }

label_7F241BDC:
    ctx->pc = 0x7F241BDCu;
    ctx->downcount -= 4;
    // 7F241BDC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F241BE0:
    ctx->pc = 0x7F241BE0u;
    // 7F241BE0: addi    r4, r27, 32
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(32);

label_7F241BE4:
    ctx->pc = 0x7F241BE4u;
    // 7F241BE4: addi    r5, r27, 16
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(16);

label_7F241BE8:
    ctx->pc = 0x7F241BE8u;
    // 7F241BE8: bl      0x7F25D5C0
    {
            ctx->lr = 0x7F241BECu;
            ctx->pc = 0x7F25D5C0u;
            return;
    }

label_7F241BEC:
    ctx->pc = 0x7F241BECu;
    ctx->downcount -= 3;
    // 7F241BEC: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241BF0:
    ctx->pc = 0x7F241BF0u;
    // 7F241BF0: cmpwi   r0, 60
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F241BF4:
    ctx->pc = 0x7F241BF4u;
    // 7F241BF4: bc    4, 2, 0x7F241C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241C04;
        }
    }

label_7F241BF8:
    ctx->pc = 0x7F241BF8u;
    ctx->downcount -= 3;
    // 7F241BF8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241BFC:
    ctx->pc = 0x7F241BFCu;
    // 7F241BFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F241C00:
    ctx->pc = 0x7F241C00u;
    // 7F241C00: stw     r0, -9744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241C04:
    ctx->pc = 0x7F241C04u;
    ctx->downcount -= 3;
    // 7F241C04: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241C08:
    ctx->pc = 0x7F241C08u;
    // 7F241C08: cmpwi   r0, 35
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(35);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F241C0C:
    ctx->pc = 0x7F241C0Cu;
    // 7F241C0C: bc    4, 1, 0x7F241DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241DC8;
        }
    }

label_7F241C10:
    ctx->pc = 0x7F241C10u;
    ctx->downcount -= 7;
    // 7F241C10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241C14:
    ctx->pc = 0x7F241C14u;
    // 7F241C14: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F241C18:
    ctx->pc = 0x7F241C18u;
    // 7F241C18: addi    r4, r3, 20032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20032);

label_7F241C1C:
    ctx->pc = 0x7F241C1Cu;
    // 7F241C1C: addi    r3, r31, 332
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(332);

label_7F241C20:
    ctx->pc = 0x7F241C20u;
    // 7F241C20: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241C24:
    ctx->pc = 0x7F241C24u;
    // 7F241C24: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F241C28:
    ctx->pc = 0x7F241C28u;
    ctx->downcount -= 3;
    // 7F241C28: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241C28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241C2C:
    ctx->pc = 0x7F241C2Cu;
    // 7F241C2C: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241C2Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241C30:
    // 7F241C30: bc    4, 1, 0x7F241C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241C48;
        }
    }

label_7F241C34:
    ctx->downcount -= 5;
    // 7F241C34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C38:
    ctx->pc = 0x7F241C38u;
    // 7F241C38: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241C3C:
    ctx->pc = 0x7F241C3Cu;
    // 7F241C3C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241C3Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241C40:
    ctx->pc = 0x7F241C40u;
    // 7F241C40: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241C40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241C44:
    // 7F241C44: b       0x7F241C68
    {
            goto label_7F241C68;
    }

label_7F241C48:
    ctx->downcount -= 4;
    // 7F241C48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C4C:
    ctx->pc = 0x7F241C4Cu;
    // 7F241C4C: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241C50:
    ctx->pc = 0x7F241C50u;
    // 7F241C50: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241C50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241C54:
    // 7F241C54: bc    4, 0, 0x7F241C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241C68;
        }
    }

label_7F241C58:
    ctx->downcount -= 4;
    // 7F241C58: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C5C:
    ctx->pc = 0x7F241C5Cu;
    // 7F241C5C: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241C60:
    ctx->pc = 0x7F241C60u;
    // 7F241C60: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241C60u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241C64:
    ctx->pc = 0x7F241C64u;
    // 7F241C64: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241C64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241C68:
    ctx->pc = 0x7F241C68u;
    ctx->downcount -= 3;
    // 7F241C68: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241C68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241C6C:
    ctx->pc = 0x7F241C6Cu;
    // 7F241C6C: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241C6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241C70:
    // 7F241C70: bc    4, 1, 0x7F241C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241C88;
        }
    }

label_7F241C74:
    ctx->downcount -= 5;
    // 7F241C74: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C78:
    ctx->pc = 0x7F241C78u;
    // 7F241C78: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241C7C:
    ctx->pc = 0x7F241C7Cu;
    // 7F241C7C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241C7Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241C80:
    ctx->pc = 0x7F241C80u;
    // 7F241C80: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241C80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241C84:
    // 7F241C84: b       0x7F241CA8
    {
            goto label_7F241CA8;
    }

label_7F241C88:
    ctx->downcount -= 4;
    // 7F241C88: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C8C:
    ctx->pc = 0x7F241C8Cu;
    // 7F241C8C: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241C90:
    ctx->pc = 0x7F241C90u;
    // 7F241C90: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241C90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241C94:
    // 7F241C94: bc    4, 0, 0x7F241CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241CA8;
        }
    }

label_7F241C98:
    ctx->downcount -= 4;
    // 7F241C98: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241C9C:
    ctx->pc = 0x7F241C9Cu;
    // 7F241C9C: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241C9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241CA0:
    ctx->pc = 0x7F241CA0u;
    // 7F241CA0: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241CA0u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241CA4:
    ctx->pc = 0x7F241CA4u;
    // 7F241CA4: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241CA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241CA8:
    ctx->pc = 0x7F241CA8u;
    ctx->downcount -= 3;
    // 7F241CA8: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241CA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241CAC:
    ctx->pc = 0x7F241CACu;
    // 7F241CAC: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241CACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241CB0:
    // 7F241CB0: bc    4, 1, 0x7F241CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241CC8;
        }
    }

label_7F241CB4:
    ctx->downcount -= 5;
    // 7F241CB4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241CB8:
    ctx->pc = 0x7F241CB8u;
    // 7F241CB8: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241CB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241CBC:
    ctx->pc = 0x7F241CBCu;
    // 7F241CBC: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241CBCu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241CC0:
    ctx->pc = 0x7F241CC0u;
    // 7F241CC0: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241CC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241CC4:
    // 7F241CC4: b       0x7F241CE8
    {
            goto label_7F241CE8;
    }

label_7F241CC8:
    ctx->downcount -= 4;
    // 7F241CC8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241CCC:
    ctx->pc = 0x7F241CCCu;
    // 7F241CCC: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241CCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241CD0:
    ctx->pc = 0x7F241CD0u;
    // 7F241CD0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241CD0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241CD4:
    // 7F241CD4: bc    4, 0, 0x7F241CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241CE8;
        }
    }

label_7F241CD8:
    ctx->downcount -= 4;
    // 7F241CD8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241CDC:
    ctx->pc = 0x7F241CDCu;
    // 7F241CDC: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241CDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241CE0:
    ctx->pc = 0x7F241CE0u;
    // 7F241CE0: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241CE0u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241CE4:
    ctx->pc = 0x7F241CE4u;
    // 7F241CE4: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241CE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241CE8:
    ctx->downcount -= 2;
    // 7F241CE8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F241CEC:
    // 7F241CEC: bc    16, 0, 0x7F241C28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241C28u;
                return;
            }
            goto label_7F241C28;
        }
    }

label_7F241CF0:
    ctx->pc = 0x7F241CF0u;
    ctx->downcount -= 5;
    // 7F241CF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241CF4:
    ctx->pc = 0x7F241CF4u;
    // 7F241CF4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F241CF8:
    ctx->pc = 0x7F241CF8u;
    // 7F241CF8: lfs     f1, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241CF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F241CFC:
    ctx->pc = 0x7F241CFCu;
    // 7F241CFC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F241D00:
    ctx->pc = 0x7F241D00u;
    ctx->downcount -= 3;
    // 7F241D00: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241D04:
    ctx->pc = 0x7F241D04u;
    // 7F241D04: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241D04u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241D08:
    // 7F241D08: bc    4, 1, 0x7F241D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241D20;
        }
    }

label_7F241D0C:
    ctx->downcount -= 5;
    // 7F241D0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D10:
    ctx->pc = 0x7F241D10u;
    // 7F241D10: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D14:
    ctx->pc = 0x7F241D14u;
    // 7F241D14: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D14u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241D18:
    ctx->pc = 0x7F241D18u;
    // 7F241D18: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241D1C:
    // 7F241D1C: b       0x7F241D40
    {
            goto label_7F241D40;
    }

label_7F241D20:
    ctx->downcount -= 4;
    // 7F241D20: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D24:
    ctx->pc = 0x7F241D24u;
    // 7F241D24: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D28:
    ctx->pc = 0x7F241D28u;
    // 7F241D28: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D28u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241D2C:
    // 7F241D2C: bc    4, 0, 0x7F241D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241D40;
        }
    }

label_7F241D30:
    ctx->downcount -= 4;
    // 7F241D30: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D34:
    ctx->pc = 0x7F241D34u;
    // 7F241D34: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D38:
    ctx->pc = 0x7F241D38u;
    // 7F241D38: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D38u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241D3C:
    ctx->pc = 0x7F241D3Cu;
    // 7F241D3C: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241D40:
    ctx->pc = 0x7F241D40u;
    ctx->downcount -= 3;
    // 7F241D40: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241D44:
    ctx->pc = 0x7F241D44u;
    // 7F241D44: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241D44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241D48:
    // 7F241D48: bc    4, 1, 0x7F241D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241D60;
        }
    }

label_7F241D4C:
    ctx->downcount -= 5;
    // 7F241D4C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D50:
    ctx->pc = 0x7F241D50u;
    // 7F241D50: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D50u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D54:
    ctx->pc = 0x7F241D54u;
    // 7F241D54: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D54u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241D58:
    ctx->pc = 0x7F241D58u;
    // 7F241D58: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241D5C:
    // 7F241D5C: b       0x7F241D80
    {
            goto label_7F241D80;
    }

label_7F241D60:
    ctx->downcount -= 4;
    // 7F241D60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D64:
    ctx->pc = 0x7F241D64u;
    // 7F241D64: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D68:
    ctx->pc = 0x7F241D68u;
    // 7F241D68: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D68u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241D6C:
    // 7F241D6C: bc    4, 0, 0x7F241D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241D80;
        }
    }

label_7F241D70:
    ctx->downcount -= 4;
    // 7F241D70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D74:
    ctx->pc = 0x7F241D74u;
    // 7F241D74: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D78:
    ctx->pc = 0x7F241D78u;
    // 7F241D78: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D78u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241D7C:
    ctx->pc = 0x7F241D7Cu;
    // 7F241D7C: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241D80:
    ctx->pc = 0x7F241D80u;
    ctx->downcount -= 3;
    // 7F241D80: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F241D84:
    ctx->pc = 0x7F241D84u;
    // 7F241D84: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F241D84u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F241D88:
    // 7F241D88: bc    4, 1, 0x7F241DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241DA0;
        }
    }

label_7F241D8C:
    ctx->downcount -= 5;
    // 7F241D8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241D90:
    ctx->pc = 0x7F241D90u;
    // 7F241D90: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241D90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241D94:
    ctx->pc = 0x7F241D94u;
    // 7F241D94: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241D94u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F241D98:
    ctx->pc = 0x7F241D98u;
    // 7F241D98: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241D98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241D9C:
    // 7F241D9C: b       0x7F241DC0
    {
            goto label_7F241DC0;
    }

label_7F241DA0:
    ctx->downcount -= 4;
    // 7F241DA0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241DA4:
    ctx->pc = 0x7F241DA4u;
    // 7F241DA4: lfs     f0, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241DA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241DA8:
    ctx->pc = 0x7F241DA8u;
    // 7F241DA8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241DA8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F241DAC:
    // 7F241DAC: bc    4, 0, 0x7F241DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241DC0;
        }
    }

label_7F241DB0:
    ctx->downcount -= 4;
    // 7F241DB0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241DB4:
    ctx->pc = 0x7F241DB4u;
    // 7F241DB4: lfs     f0, 20120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241DB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241DB8:
    ctx->pc = 0x7F241DB8u;
    // 7F241DB8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241DB8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F241DBC:
    ctx->pc = 0x7F241DBCu;
    // 7F241DBC: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241DBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F241DC0:
    ctx->downcount -= 2;
    // 7F241DC0: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F241DC4:
    // 7F241DC4: bc    16, 0, 0x7F241D00
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241D00u;
                return;
            }
            goto label_7F241D00;
        }
    }

label_7F241DC8:
    ctx->pc = 0x7F241DC8u;
    ctx->downcount -= 6;
    // 7F241DC8: lwz     r3, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241DCC:
    ctx->pc = 0x7F241DCCu;
    // 7F241DCC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F241DD0:
    ctx->pc = 0x7F241DD0u;
    // 7F241DD0: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241DD4:
    ctx->pc = 0x7F241DD4u;
    // 7F241DD4: lwz     r3, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241DD8:
    ctx->pc = 0x7F241DD8u;
    // 7F241DD8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F241DDC:
    ctx->pc = 0x7F241DDCu;
    // 7F241DDC: stw     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241DE0:
    ctx->pc = 0x7F241DE0u;
    ctx->downcount -= 18;
    // 7F241DE0: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F241DE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F241DE0u);
        if (ctx->exception) return;
    }

label_7F241DE4:
    ctx->pc = 0x7F241DE4u;
    // 7F241DE4: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241DE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241DE8:
    ctx->pc = 0x7F241DE8u;
    // 7F241DE8: lmw     r27, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F241DEC:
    ctx->pc = 0x7F241DECu;
    // 7F241DEC: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241DF0:
    ctx->pc = 0x7F241DF0u;
    // 7F241DF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F241DF4:
    ctx->pc = 0x7F241DF4u;
    // 7F241DF4: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F241DF8:
    ctx->pc = 0x7F241DF8u;
    // 7F241DF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241DFC:
    ctx->pc = 0x7F241DFCu;
    ctx->downcount -= 4;
    // 7F241DFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F241E00:
    ctx->pc = 0x7F241E00u;
    // 7F241E00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F241E04:
    ctx->pc = 0x7F241E04u;
    // 7F241E04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241E08:
    ctx->pc = 0x7F241E08u;
    // 7F241E08: bl      0x7F241E44
    {
            ctx->lr = 0x7F241E0Cu;
            goto label_7F241E44;
    }

label_7F241E0C:
    ctx->pc = 0x7F241E0Cu;
    ctx->downcount -= 31;
    // 7F241E0C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F241E10:
    ctx->pc = 0x7F241E10u;
    // 7F241E10: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241E14:
    ctx->pc = 0x7F241E14u;
    // 7F241E14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F241E18:
    ctx->pc = 0x7F241E18u;
    // 7F241E18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F241E1C:
    ctx->pc = 0x7F241E1Cu;
    // 7F241E1C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241E20:
    ctx->pc = 0x7F241E20u;
    // 7F241E20: lfd     f2, 20128(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F241E20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20128);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241E24:
    ctx->pc = 0x7F241E24u;
    // 7F241E24: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F241E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F241E28:
    ctx->pc = 0x7F241E28u;
    // 7F241E28: lfs     f0, 20124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F241E28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F241E2C:
    ctx->pc = 0x7F241E2Cu;
    // 7F241E2C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F241E2Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F241E30:
    ctx->pc = 0x7F241E30u;
    // 7F241E30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241E34:
    ctx->pc = 0x7F241E34u;
    // 7F241E34: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F241E34u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F241E38:
    ctx->pc = 0x7F241E38u;
    // 7F241E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F241E3C:
    ctx->pc = 0x7F241E3Cu;
    // 7F241E3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F241E40:
    ctx->pc = 0x7F241E40u;
    // 7F241E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241E44:
    ctx->pc = 0x7F241E44u;
    ctx->downcount -= 13;
    // 7F241E44: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F241E48:
    ctx->pc = 0x7F241E48u;
    // 7F241E48: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F241E4C:
    ctx->pc = 0x7F241E4Cu;
    // 7F241E4C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F241E50:
    ctx->pc = 0x7F241E50u;
    // 7F241E50: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F241E54:
    ctx->pc = 0x7F241E54u;
    // 7F241E54: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F241E58:
    ctx->pc = 0x7F241E58u;
    // 7F241E58: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F241E5C:
    ctx->pc = 0x7F241E5Cu;
    // 7F241E5C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F241E60:
    ctx->pc = 0x7F241E60u;
    // 7F241E60: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241E64:
    ctx->pc = 0x7F241E64u;
    // 7F241E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241E68:
    ctx->pc = 0x7F241E68u;
    ctx->downcount -= 7;
    // 7F241E68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F241E6C:
    ctx->pc = 0x7F241E6Cu;
    // 7F241E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F241E70:
    ctx->pc = 0x7F241E70u;
    // 7F241E70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241E74:
    ctx->pc = 0x7F241E74u;
    // 7F241E74: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F241E78:
    ctx->pc = 0x7F241E78u;
    // 7F241E78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241E7C:
    ctx->pc = 0x7F241E7Cu;
    // 7F241E7C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F241E80:
    ctx->pc = 0x7F241E80u;
    // 7F241E80: bl      0x7F01B234
    {
            ctx->lr = 0x7F241E84u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F241E84:
    ctx->pc = 0x7F241E84u;
    ctx->downcount -= 7;
    // 7F241E84: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241E88:
    ctx->pc = 0x7F241E88u;
    // 7F241E88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241E8C:
    ctx->pc = 0x7F241E8Cu;
    // 7F241E8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F241E90:
    ctx->pc = 0x7F241E90u;
    // 7F241E90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F241E94:
    ctx->pc = 0x7F241E94u;
    // 7F241E94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F241E98:
    ctx->pc = 0x7F241E98u;
    // 7F241E98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241E9C:
    ctx->pc = 0x7F241E9Cu;
    ctx->downcount -= 3;
    // 7F241E9C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F241EA0:
    ctx->pc = 0x7F241EA0u;
    // 7F241EA0: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241EA4:
    ctx->pc = 0x7F241EA4u;
    // 7F241EA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241EA8:
    ctx->pc = 0x7F241EA8u;
    ctx->downcount -= 7;
    // 7F241EA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F241EAC:
    ctx->pc = 0x7F241EACu;
    // 7F241EAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F241EB0:
    ctx->pc = 0x7F241EB0u;
    // 7F241EB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241EB4:
    ctx->pc = 0x7F241EB4u;
    // 7F241EB4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F241EB8:
    ctx->pc = 0x7F241EB8u;
    // 7F241EB8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F241EBC:
    ctx->pc = 0x7F241EBCu;
    // 7F241EBC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F241EC0:
    ctx->pc = 0x7F241EC0u;
    // 7F241EC0: bl      0x7F023E10
    {
            ctx->lr = 0x7F241EC4u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F241EC4:
    ctx->pc = 0x7F241EC4u;
    ctx->downcount -= 2;
    // 7F241EC4: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F241EC8:
    ctx->pc = 0x7F241EC8u;
    // 7F241EC8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F241ECCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F241ECC:
    ctx->pc = 0x7F241ECCu;
    ctx->downcount -= 2;
    // 7F241ECC: addi    r3, r31, 784
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(784);

label_7F241ED0:
    ctx->pc = 0x7F241ED0u;
    // 7F241ED0: bl      0x7F23A1C8
    {
            ctx->lr = 0x7F241ED4u;
            ctx->pc = 0x7F23A1C8u;
            return;
    }

label_7F241ED4:
    ctx->pc = 0x7F241ED4u;
    ctx->downcount -= 3;
    // 7F241ED4: lwz     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241ED8:
    ctx->pc = 0x7F241ED8u;
    // 7F241ED8: cmplwi  r3, 0x0000
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

label_7F241EDC:
    ctx->pc = 0x7F241EDCu;
    // 7F241EDC: bc    12, 2, 0x7F241EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241EE4;
        }
    }

label_7F241EE0:
    ctx->pc = 0x7F241EE0u;
    ctx->downcount -= 1;
    // 7F241EE0: bl      0x7F3C2440
    {
            ctx->lr = 0x7F241EE4u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F241EE4:
    ctx->pc = 0x7F241EE4u;
    ctx->downcount -= 6;
    // 7F241EE4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241EE8:
    ctx->pc = 0x7F241EE8u;
    // 7F241EE8: addi    r4, r3, -9740
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9740);

label_7F241EEC:
    ctx->pc = 0x7F241EECu;
    // 7F241EEC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241EF0:
    ctx->pc = 0x7F241EF0u;
    // 7F241EF0: addic.  r0, r3, -1
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

label_7F241EF4:
    ctx->pc = 0x7F241EF4u;
    // 7F241EF4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241EF8:
    ctx->pc = 0x7F241EF8u;
    // 7F241EF8: bc    12, 1, 0x7F241F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241F14;
        }
    }

label_7F241EFC:
    ctx->pc = 0x7F241EFCu;
    ctx->downcount -= 4;
    // 7F241EFC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241F00:
    ctx->pc = 0x7F241F00u;
    // 7F241F00: lwzu     r0, -9744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9744);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F241F04:
    ctx->pc = 0x7F241F04u;
    // 7F241F04: cmpwi   r0, 0
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

label_7F241F08:
    ctx->pc = 0x7F241F08u;
    // 7F241F08: bc    12, 2, 0x7F241F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F241F14;
        }
    }

label_7F241F0C:
    ctx->pc = 0x7F241F0Cu;
    ctx->downcount -= 2;
    // 7F241F0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F241F10:
    ctx->pc = 0x7F241F10u;
    // 7F241F10: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241F14:
    ctx->pc = 0x7F241F14u;
    ctx->downcount -= 13;
    // 7F241F14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F241F18:
    ctx->pc = 0x7F241F18u;
    // 7F241F18: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F241F1C:
    ctx->pc = 0x7F241F1Cu;
    // 7F241F1C: addi    r4, r3, -5976
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5976);

label_7F241F20:
    ctx->pc = 0x7F241F20u;
    // 7F241F20: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F241F24:
    ctx->pc = 0x7F241F24u;
    // 7F241F24: rlwinm r3, r3, 0, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFEu;
    }

label_7F241F28:
    ctx->pc = 0x7F241F28u;
    // 7F241F28: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F241F2C:
    ctx->pc = 0x7F241F2Cu;
    // 7F241F2C: stb     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241F30:
    ctx->pc = 0x7F241F30u;
    // 7F241F30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F241F34:
    ctx->pc = 0x7F241F34u;
    // 7F241F34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F241F38:
    ctx->pc = 0x7F241F38u;
    // 7F241F38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F241F3C:
    ctx->pc = 0x7F241F3Cu;
    // 7F241F3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F241F40:
    ctx->pc = 0x7F241F40u;
    // 7F241F40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F241F44:
    ctx->pc = 0x7F241F44u;
    ctx->downcount -= 20;
    // 7F241F44: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F241F48:
    ctx->pc = 0x7F241F48u;
    // 7F241F48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F241F4C:
    ctx->pc = 0x7F241F4Cu;
    // 7F241F4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241F50:
    ctx->pc = 0x7F241F50u;
    // 7F241F50: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F241F54:
    ctx->pc = 0x7F241F54u;
    // 7F241F54: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F241F58:
    ctx->pc = 0x7F241F58u;
    // 7F241F58: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F241F5C:
    ctx->pc = 0x7F241F5Cu;
    // 7F241F5C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F241F60:
    ctx->pc = 0x7F241F60u;
    // 7F241F60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F241F64:
    ctx->pc = 0x7F241F64u;
    // 7F241F64: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F241F68:
    ctx->pc = 0x7F241F68u;
    // 7F241F68: bl      0x7F3C2534
    {
            ctx->lr = 0x7F241F6Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F241F6C:
    ctx->pc = 0x7F241F6Cu;
    ctx->downcount -= 6;
    // 7F241F6C: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F241F70:
    ctx->pc = 0x7F241F70u;
    // 7F241F70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F241F74:
    ctx->pc = 0x7F241F74u;
    // 7F241F74: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F241F78:
    ctx->pc = 0x7F241F78u;
    // 7F241F78: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F241F7C:
    ctx->pc = 0x7F241F7Cu;
    // 7F241F7C: stw     r7, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F241F80:
    ctx->pc = 0x7F241F80u;
    // 7F241F80: stw     r7, 304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F241F84:
    ctx->downcount -= 4;
    // 7F241F84: addi    r0, r7, 192
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(192);

label_7F241F88:
    // 7F241F88: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F241F8C:
    ctx->pc = 0x7F241F8Cu;
    // 7F241F8C: lwzx    r8, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F241F90:
    // 7F241F90: b       0x7F241FE8
    {
            goto label_7F241FE8;
    }

label_7F241F94:
    ctx->downcount -= 9;
    // 7F241F94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F241F98:
    // 7F241F98: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F241F9C:
    // 7F241F9C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F241FA0:
    // 7F241FA0: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F241FA4:
    // 7F241FA4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F241FA8:
    ctx->pc = 0x7F241FA8u;
    // 7F241FA8: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_7F241FAC:
    // 7F241FAC: cmpwi   r31, 0
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

label_7F241FB0:
    // 7F241FB0: bc    4, 1, 0x7F241FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F241FE4;
        }
    }

label_7F241FB4:
    loop_7F241FB4(ctx);
    if (ctx->pc == 0x7F241FE4u) goto label_7F241FE4;
    return;
label_7F241FB8:
    ctx->pc = 0x7F241FB8u;
    // 7F241FB8: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F241FBC:
    ctx->pc = 0x7F241FBCu;
    // 7F241FBC: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F241FC0:
    ctx->pc = 0x7F241FC0u;
    // 7F241FC0: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F241FC4:
    ctx->pc = 0x7F241FC4u;
    // 7F241FC4: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F241FC8:
    ctx->pc = 0x7F241FC8u;
    // 7F241FC8: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F241FCC:
    ctx->pc = 0x7F241FCCu;
    // 7F241FCC: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F241FD0:
    ctx->pc = 0x7F241FD0u;
    // 7F241FD0: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F241FD4:
    ctx->pc = 0x7F241FD4u;
    // 7F241FD4: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F241FD8:
    ctx->pc = 0x7F241FD8u;
    // 7F241FD8: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F241FDC:
    // 7F241FDC: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F241FE0:
    // 7F241FE0: bc    16, 0, 0x7F241FB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241FB4u;
                return;
            }
            goto label_7F241FB4;
        }
    }

label_7F241FE4:
    ctx->downcount -= 1;
    // 7F241FE4: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F241FE8:
    ctx->downcount -= 2;
    // 7F241FE8: cmpw    r10, r30
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F241FEC:
    // 7F241FEC: bc    12, 0, 0x7F241F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241F94u;
                return;
            }
            goto label_7F241F94;
        }
    }

label_7F241FF0:
    ctx->downcount -= 4;
    // 7F241FF0: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F241FF4:
    // 7F241FF4: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F241FF8:
    // 7F241FF8: cmpwi   r9, 2
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F241FFC:
    // 7F241FFC: bc    12, 0, 0x7F241F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241F84u;
                return;
            }
            goto label_7F241F84;
        }
    }

label_7F242000:
    ctx->pc = 0x7F242000u;
    ctx->downcount -= 3;
    // 7F242000: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F242004:
    ctx->pc = 0x7F242004u;
    // 7F242004: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F242008:
    ctx->pc = 0x7F242008u;
    // 7F242008: bl      0x7F3C9120
    {
            ctx->lr = 0x7F24200Cu;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F24200C:
    ctx->pc = 0x7F24200Cu;
    ctx->downcount -= 3;
    // 7F24200C: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F242010:
    ctx->pc = 0x7F242010u;
    // 7F242010: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F242014:
    ctx->pc = 0x7F242014u;
    // 7F242014: bl      0x7F3C9120
    {
            ctx->lr = 0x7F242018u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F242018:
    ctx->pc = 0x7F242018u;
    ctx->downcount -= 16;
    // 7F242018: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24201C:
    ctx->pc = 0x7F24201Cu;
    // 7F24201C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242020:
    ctx->pc = 0x7F242020u;
    // 7F242020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242024:
    ctx->pc = 0x7F242024u;
    // 7F242024: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F242028:
    ctx->pc = 0x7F242028u;
    // 7F242028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F24202C:
    ctx->pc = 0x7F24202Cu;
    ctx->downcount -= 22;
    // 7F24202C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242030:
    ctx->pc = 0x7F242030u;
    // 7F242030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242034:
    ctx->pc = 0x7F242034u;
    // 7F242034: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F242038:
    ctx->pc = 0x7F242038u;
    // 7F242038: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24203C:
    ctx->pc = 0x7F24203Cu;
    // 7F24203C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242040:
    ctx->pc = 0x7F242040u;
    // 7F242040: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F242044:
    ctx->pc = 0x7F242044u;
    // 7F242044: addi    r31, r3, 48
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(48);

label_7F242048:
    ctx->pc = 0x7F242048u;
    // 7F242048: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24204C:
    ctx->pc = 0x7F24204Cu;
    // 7F24204C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F242050:
    ctx->pc = 0x7F242050u;
    // 7F242050: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242054:
    ctx->pc = 0x7F242054u;
    // 7F242054: lwz     r5, 18312(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242058:
    ctx->pc = 0x7F242058u;
    // 7F242058: bl      0x7F022FB4
    {
            ctx->lr = 0x7F24205Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F24205C:
    ctx->pc = 0x7F24205Cu;
    ctx->downcount -= 2;
    // 7F24205C: cmpwi   r3, 0
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

label_7F242060:
    ctx->pc = 0x7F242060u;
    // 7F242060: bc    4, 0, 0x7F24206C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24206C;
        }
    }

label_7F242064:
    ctx->pc = 0x7F242064u;
    ctx->downcount -= 2;
    // 7F242064: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242068:
    ctx->pc = 0x7F242068u;
    // 7F242068: b       0x7F242130
    {
            goto label_7F242130;
    }

label_7F24206C:
    ctx->pc = 0x7F24206Cu;
    ctx->downcount -= 2;
    // 7F24206C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F242070:
    ctx->pc = 0x7F242070u;
    // 7F242070: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F242074u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F242074:
    ctx->pc = 0x7F242074u;
    ctx->downcount -= 5;
    // 7F242074: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242078:
    ctx->pc = 0x7F242078u;
    // 7F242078: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24207C:
    ctx->pc = 0x7F24207Cu;
    // 7F24207C: addi    r3, r3, -9732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9732);

label_7F242080:
    ctx->pc = 0x7F242080u;
    // 7F242080: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F242084:
    ctx->pc = 0x7F242084u;
    // 7F242084: bl      0x7F3B3648
    {
            ctx->lr = 0x7F242088u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F242088:
    ctx->pc = 0x7F242088u;
    ctx->downcount -= 3;
    // 7F242088: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24208C:
    ctx->pc = 0x7F24208Cu;
    // 7F24208C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F242090:
    ctx->pc = 0x7F242090u;
    // 7F242090: bl      0x7F3CC7EC
    {
            ctx->lr = 0x7F242094u;
            ctx->pc = 0x7F3CC7ECu;
            return;
    }

label_7F242094:
    ctx->pc = 0x7F242094u;
    ctx->downcount -= 3;
    // 7F242094: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F242098:
    ctx->pc = 0x7F242098u;
    // 7F242098: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24209C:
    ctx->pc = 0x7F24209Cu;
    // 7F24209C: bl      0x7F3CC414
    {
            ctx->lr = 0x7F2420A0u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F2420A0:
    ctx->pc = 0x7F2420A0u;
    ctx->downcount -= 7;
    // 7F2420A0: lha     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2420A4:
    ctx->pc = 0x7F2420A4u;
    // 7F2420A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2420A8:
    ctx->pc = 0x7F2420A8u;
    // 7F2420A8: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2420AC:
    ctx->pc = 0x7F2420ACu;
    // 7F2420AC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2420B0:
    ctx->pc = 0x7F2420B0u;
    // 7F2420B0: addi    r0, r6, -1024
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1024);

label_7F2420B4:
    ctx->pc = 0x7F2420B4u;
    // 7F2420B4: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2420B8:
    ctx->pc = 0x7F2420B8u;
    // 7F2420B8: bl      0x7F023F1C
    {
            ctx->lr = 0x7F2420BCu;
            ctx->pc = 0x7F023F1Cu;
            return;
    }

label_7F2420BC:
    ctx->pc = 0x7F2420BCu;
    ctx->downcount -= 21;
    // 7F2420BC: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2420C0:
    ctx->pc = 0x7F2420C0u;
    // 7F2420C0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2420C4:
    ctx->pc = 0x7F2420C4u;
    // 7F2420C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2420C8:
    ctx->pc = 0x7F2420C8u;
    // 7F2420C8: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F2420CC:
    ctx->pc = 0x7F2420CCu;
    // 7F2420CC: addi    r8, r3, 18316
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(18316);

label_7F2420D0:
    ctx->pc = 0x7F2420D0u;
    // 7F2420D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2420D4:
    ctx->pc = 0x7F2420D4u;
    // 7F2420D4: stw     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2420D8:
    ctx->pc = 0x7F2420D8u;
    // 7F2420D8: addi    r7, r4, -27952
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-27952);

label_7F2420DC:
    ctx->pc = 0x7F2420DCu;
    // 7F2420DC: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F2420E0:
    ctx->pc = 0x7F2420E0u;
    // 7F2420E0: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F2420E4:
    ctx->pc = 0x7F2420E4u;
    // 7F2420E4: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2420E8:
    ctx->pc = 0x7F2420E8u;
    // 7F2420E8: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F2420EC:
    ctx->pc = 0x7F2420ECu;
    // 7F2420EC: lwz     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2420F0:
    ctx->pc = 0x7F2420F0u;
    // 7F2420F0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2420F4:
    ctx->pc = 0x7F2420F4u;
    // 7F2420F4: stw     r9, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2420F8:
    ctx->pc = 0x7F2420F8u;
    // 7F2420F8: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2420FC:
    ctx->pc = 0x7F2420FCu;
    // 7F2420FC: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242100:
    ctx->pc = 0x7F242100u;
    // 7F242100: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242104:
    ctx->pc = 0x7F242104u;
    // 7F242104: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242108:
    ctx->pc = 0x7F242108u;
    // 7F242108: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24210C:
    ctx->pc = 0x7F24210Cu;
    // 7F24210C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F242110u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F242110:
    ctx->pc = 0x7F242110u;
    ctx->downcount -= 8;
    // 7F242110: li      r3, 132
    ctx->gpr[3] = (u32)(s32)(132);

label_7F242114:
    ctx->pc = 0x7F242114u;
    // 7F242114: li      r0, 16516
    ctx->gpr[0] = (u32)(s32)(16516);

label_7F242118:
    ctx->pc = 0x7F242118u;
    // 7F242118: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24211C:
    ctx->pc = 0x7F24211Cu;
    // 7F24211C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242120:
    ctx->pc = 0x7F242120u;
    // 7F242120: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242124:
    ctx->pc = 0x7F242124u;
    // 7F242124: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F242128:
    ctx->pc = 0x7F242128u;
    // 7F242128: ori     r0, r0, 0x0102
    ctx->gpr[0] = ctx->gpr[0] | 0x0102u;

label_7F24212C:
    ctx->pc = 0x7F24212Cu;
    // 7F24212C: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F242130:
    ctx->pc = 0x7F242130u;
    ctx->downcount -= 16;
    // 7F242130: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F242134:
    ctx->pc = 0x7F242134u;
    // 7F242134: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242138:
    ctx->pc = 0x7F242138u;
    // 7F242138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24213C:
    ctx->pc = 0x7F24213Cu;
    // 7F24213C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F242140:
    ctx->pc = 0x7F242140u;
    // 7F242140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242144:
    ctx->pc = 0x7F242144u;
    ctx->downcount -= 22;
    // 7F242144: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242148:
    ctx->pc = 0x7F242148u;
    // 7F242148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24214C:
    ctx->pc = 0x7F24214Cu;
    // 7F24214C: lis     r5, 161
    ctx->gpr[5] = ((u32)(s32)(161) << 16);

label_7F242150:
    ctx->pc = 0x7F242150u;
    // 7F242150: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242154:
    ctx->pc = 0x7F242154u;
    // 7F242154: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F242158:
    ctx->pc = 0x7F242158u;
    // 7F242158: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24215C:
    ctx->pc = 0x7F24215Cu;
    // 7F24215C: addi    r30, r31, 272
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(272);

label_7F242160:
    ctx->pc = 0x7F242160u;
    // 7F242160: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F242164:
    ctx->pc = 0x7F242164u;
    // 7F242164: addi    r4, r5, 24698
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(24698);

label_7F242168:
    ctx->pc = 0x7F242168u;
    // 7F242168: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F24216C:
    ctx->pc = 0x7F24216Cu;
    // 7F24216C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F242170:
    ctx->pc = 0x7F242170u;
    // 7F242170: bl      0x7F04272C
    {
            ctx->lr = 0x7F242174u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F242174:
    ctx->pc = 0x7F242174u;
    ctx->downcount -= 3;
    // 7F242174: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242178:
    ctx->pc = 0x7F242178u;
    // 7F242178: cmplwi  r0, 0x0000
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

label_7F24217C:
    ctx->pc = 0x7F24217Cu;
    // 7F24217C: bc    4, 2, 0x7F242188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242188;
        }
    }

label_7F242180:
    ctx->pc = 0x7F242180u;
    ctx->downcount -= 2;
    // 7F242180: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242184:
    ctx->pc = 0x7F242184u;
    // 7F242184: b       0x7F2422F8
    {
            goto label_7F2422F8;
    }

label_7F242188:
    ctx->pc = 0x7F242188u;
    ctx->downcount -= 3;
    // 7F242188: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24218C:
    ctx->pc = 0x7F24218Cu;
    // 7F24218C: addi    r4, r31, 316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(316);

label_7F242190:
    ctx->pc = 0x7F242190u;
    // 7F242190: bl      0x7F042C1C
    {
            ctx->lr = 0x7F242194u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F242194:
    ctx->pc = 0x7F242194u;
    ctx->downcount -= 3;
    // 7F242194: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F242198:
    ctx->pc = 0x7F242198u;
    // 7F242198: addi    r4, r31, 460
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(460);

label_7F24219C:
    ctx->pc = 0x7F24219Cu;
    // 7F24219C: bl      0x7F042B20
    {
            ctx->lr = 0x7F2421A0u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F2421A0:
    ctx->pc = 0x7F2421A0u;
    ctx->downcount -= 5;
    // 7F2421A0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2421A4:
    ctx->pc = 0x7F2421A4u;
    // 7F2421A4: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2421A8:
    ctx->pc = 0x7F2421A8u;
    // 7F2421A8: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F2421AC:
    ctx->pc = 0x7F2421ACu;
    // 7F2421AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2421B0:
    loop_7F2421B0(ctx);
    if (ctx->pc == 0x7F2421C4u) goto label_7F2421C4;
    return;
label_7F2421B4:
    ctx->pc = 0x7F2421B4u;
    // 7F2421B4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2421B8:
    ctx->pc = 0x7F2421B8u;
    // 7F2421B8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2421BC:
    ctx->pc = 0x7F2421BCu;
    // 7F2421BC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2421C0:
    // 7F2421C0: bc    16, 0, 0x7F2421B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2421B0u;
                return;
            }
            goto label_7F2421B0;
        }
    }

label_7F2421C4:
    ctx->pc = 0x7F2421C4u;
    ctx->downcount -= 77;
    // 7F2421C4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2421C8:
    ctx->pc = 0x7F2421C8u;
    // 7F2421C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2421CC:
    ctx->pc = 0x7F2421CCu;
    // 7F2421CC: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2421D0:
    ctx->pc = 0x7F2421D0u;
    // 7F2421D0: lfs     f3, 20136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2421D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2421D4:
    ctx->pc = 0x7F2421D4u;
    // 7F2421D4: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2421D8:
    ctx->pc = 0x7F2421D8u;
    // 7F2421D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2421DC:
    ctx->pc = 0x7F2421DCu;
    // 7F2421DC: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2421E0:
    ctx->pc = 0x7F2421E0u;
    // 7F2421E0: lfs     f2, 20032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2421E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2421E4:
    ctx->pc = 0x7F2421E4u;
    // 7F2421E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2421E8:
    ctx->pc = 0x7F2421E8u;
    // 7F2421E8: stw     r5, 316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2421EC:
    ctx->pc = 0x7F2421ECu;
    // 7F2421EC: addi    r5, r3, 20140
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20140);

label_7F2421F0:
    ctx->pc = 0x7F2421F0u;
    // 7F2421F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2421F4:
    ctx->pc = 0x7F2421F4u;
    // 7F2421F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2421F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2421F8:
    ctx->pc = 0x7F2421F8u;
    // 7F2421F8: stw     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2421FC:
    ctx->pc = 0x7F2421FCu;
    // 7F2421FC: addi    r4, r3, 20144
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20144);

label_7F242200:
    ctx->pc = 0x7F242200u;
    // 7F242200: lwz     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F242204:
    ctx->pc = 0x7F242204u;
    // 7F242204: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242208:
    ctx->pc = 0x7F242208u;
    // 7F242208: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24220C:
    ctx->pc = 0x7F24220Cu;
    // 7F24220C: lwz     r7, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F242210:
    ctx->pc = 0x7F242210u;
    // 7F242210: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F242214:
    ctx->pc = 0x7F242214u;
    // 7F242214: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242214u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242218:
    ctx->pc = 0x7F242218u;
    // 7F242218: stw     r0, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24221C:
    ctx->pc = 0x7F24221Cu;
    // 7F24221C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242220:
    ctx->pc = 0x7F242220u;
    // 7F242220: stw     r7, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F242224:
    ctx->pc = 0x7F242224u;
    // 7F242224: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242228:
    ctx->pc = 0x7F242228u;
    // 7F242228: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242228u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24222C:
    ctx->pc = 0x7F24222Cu;
    // 7F24222C: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F242230:
    ctx->pc = 0x7F242230u;
    // 7F242230: stw     r0, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242234:
    ctx->pc = 0x7F242234u;
    // 7F242234: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242238:
    ctx->pc = 0x7F242238u;
    // 7F242238: stw     r7, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F24223C:
    ctx->pc = 0x7F24223Cu;
    // 7F24223C: stw     r5, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242240:
    ctx->pc = 0x7F242240u;
    // 7F242240: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242244:
    ctx->pc = 0x7F242244u;
    // 7F242244: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F242248:
    ctx->pc = 0x7F242248u;
    // 7F242248: stw     r6, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24224C:
    ctx->pc = 0x7F24224Cu;
    // 7F24224C: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24224Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242250:
    ctx->pc = 0x7F242250u;
    // 7F242250: stw     r4, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F242254:
    ctx->pc = 0x7F242254u;
    // 7F242254: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242258:
    ctx->pc = 0x7F242258u;
    // 7F242258: stw     r7, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F24225C:
    ctx->pc = 0x7F24225Cu;
    // 7F24225C: stw     r0, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242260:
    ctx->pc = 0x7F242260u;
    // 7F242260: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242264:
    ctx->pc = 0x7F242264u;
    // 7F242264: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242268:
    ctx->pc = 0x7F242268u;
    // 7F242268: stw     r6, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24226C:
    ctx->pc = 0x7F24226Cu;
    // 7F24226C: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242270:
    ctx->pc = 0x7F242270u;
    // 7F242270: stw     r7, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F242274:
    ctx->pc = 0x7F242274u;
    // 7F242274: stw     r5, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242278:
    ctx->pc = 0x7F242278u;
    // 7F242278: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242278u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24227C:
    ctx->pc = 0x7F24227Cu;
    // 7F24227C: stw     r6, 376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F242280:
    ctx->pc = 0x7F242280u;
    // 7F242280: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242284:
    ctx->pc = 0x7F242284u;
    // 7F242284: stfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242284u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F242288:
    ctx->pc = 0x7F242288u;
    // 7F242288: stw     r4, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24228C:
    ctx->pc = 0x7F24228Cu;
    // 7F24228C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242290:
    ctx->pc = 0x7F242290u;
    // 7F242290: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242294:
    ctx->pc = 0x7F242294u;
    // 7F242294: stw     r7, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F242298:
    ctx->pc = 0x7F242298u;
    // 7F242298: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24229C:
    ctx->pc = 0x7F24229Cu;
    // 7F24229C: stw     r0, 388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2422A0:
    ctx->pc = 0x7F2422A0u;
    // 7F2422A0: stw     r6, 392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2422A4:
    ctx->pc = 0x7F2422A4u;
    // 7F2422A4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2422A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2422A8:
    ctx->pc = 0x7F2422A8u;
    // 7F2422A8: stw     r4, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2422AC:
    ctx->pc = 0x7F2422ACu;
    // 7F2422AC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2422B0:
    ctx->pc = 0x7F2422B0u;
    // 7F2422B0: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2422B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2422B4:
    ctx->pc = 0x7F2422B4u;
    // 7F2422B4: stw     r0, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2422B8:
    ctx->pc = 0x7F2422B8u;
    // 7F2422B8: stw     r5, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2422BC:
    ctx->pc = 0x7F2422BCu;
    // 7F2422BC: stw     r6, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2422C0:
    ctx->pc = 0x7F2422C0u;
    // 7F2422C0: stw     r4, 412(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2422C4:
    ctx->pc = 0x7F2422C4u;
    // 7F2422C4: stw     r0, 416(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2422C8:
    ctx->pc = 0x7F2422C8u;
    // 7F2422C8: stw     r5, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2422CC:
    ctx->pc = 0x7F2422CCu;
    // 7F2422CC: stw     r6, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2422D0:
    ctx->pc = 0x7F2422D0u;
    // 7F2422D0: stw     r4, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2422D4:
    ctx->pc = 0x7F2422D4u;
    // 7F2422D4: stw     r0, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2422D8:
    ctx->pc = 0x7F2422D8u;
    // 7F2422D8: stw     r5, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2422DC:
    ctx->pc = 0x7F2422DCu;
    // 7F2422DC: stw     r6, 440(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2422E0:
    ctx->pc = 0x7F2422E0u;
    // 7F2422E0: stw     r4, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2422E4:
    ctx->pc = 0x7F2422E4u;
    // 7F2422E4: stw     r0, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2422E8:
    ctx->pc = 0x7F2422E8u;
    // 7F2422E8: stw     r5, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2422EC:
    ctx->pc = 0x7F2422ECu;
    // 7F2422EC: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2422ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2422F0:
    ctx->pc = 0x7F2422F0u;
    // 7F2422F0: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2422F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2422F4:
    ctx->pc = 0x7F2422F4u;
    // 7F2422F4: stw     r6, 456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(456);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2422F8:
    ctx->pc = 0x7F2422F8u;
    ctx->downcount -= 16;
    // 7F2422F8: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2422FC:
    ctx->pc = 0x7F2422FCu;
    // 7F2422FC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242300:
    ctx->pc = 0x7F242300u;
    // 7F242300: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242304:
    ctx->pc = 0x7F242304u;
    // 7F242304: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F242308:
    ctx->pc = 0x7F242308u;
    // 7F242308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F24230C:
    ctx->pc = 0x7F24230Cu;
    ctx->downcount -= 26;
    // 7F24230C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242310:
    ctx->pc = 0x7F242310u;
    // 7F242310: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242314:
    ctx->pc = 0x7F242314u;
    // 7F242314: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F242318:
    ctx->pc = 0x7F242318u;
    // 7F242318: lis     r6, 1281
    ctx->gpr[6] = ((u32)(s32)(1281) << 16);

label_7F24231C:
    ctx->pc = 0x7F24231Cu;
    // 7F24231C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242320:
    ctx->pc = 0x7F242320u;
    // 7F242320: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F242324:
    ctx->pc = 0x7F242324u;
    // 7F242324: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242328:
    ctx->pc = 0x7F242328u;
    // 7F242328: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24232C:
    ctx->pc = 0x7F24232Cu;
    // 7F24232C: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F242330:
    ctx->pc = 0x7F242330u;
    // 7F242330: addi    r31, r30, 592
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(592);

label_7F242334:
    ctx->pc = 0x7F242334u;
    // 7F242334: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242338:
    ctx->pc = 0x7F242338u;
    // 7F242338: lwz     r5, 18308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24233C:
    ctx->pc = 0x7F24233Cu;
    // 7F24233C: addi    r4, r6, 4097
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4097);

label_7F242340:
    ctx->pc = 0x7F242340u;
    // 7F242340: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F242344:
    ctx->pc = 0x7F242344u;
    // 7F242344: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F242348:
    ctx->pc = 0x7F242348u;
    // 7F242348: bl      0x7F014788
    {
            ctx->lr = 0x7F24234Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F24234C:
    ctx->pc = 0x7F24234Cu;
    ctx->downcount -= 4;
    // 7F24234C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242350:
    ctx->pc = 0x7F242350u;
    // 7F242350: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F242354:
    ctx->pc = 0x7F242354u;
    // 7F242354: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_7F242358:
    ctx->pc = 0x7F242358u;
    // 7F242358: bl      0x7F014B60
    {
            ctx->lr = 0x7F24235Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F24235C:
    ctx->pc = 0x7F24235Cu;
    ctx->downcount -= 3;
    // 7F24235C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242360:
    ctx->pc = 0x7F242360u;
    // 7F242360: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F242364:
    ctx->pc = 0x7F242364u;
    // 7F242364: bl      0x7F01488C
    {
            ctx->lr = 0x7F242368u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F242368:
    ctx->pc = 0x7F242368u;
    ctx->downcount -= 5;
    // 7F242368: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F24236C:
    ctx->pc = 0x7F24236Cu;
    // 7F24236C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242370:
    ctx->pc = 0x7F242370u;
    // 7F242370: addi    r4, r4, 3932
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3932);

label_7F242374:
    ctx->pc = 0x7F242374u;
    // 7F242374: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F242378:
    ctx->pc = 0x7F242378u;
    // 7F242378: bl      0x7F014B6C
    {
            ctx->lr = 0x7F24237Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F24237C:
    ctx->pc = 0x7F24237Cu;
    ctx->downcount -= 16;
    // 7F24237C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F242380:
    ctx->pc = 0x7F242380u;
    // 7F242380: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242384:
    ctx->pc = 0x7F242384u;
    // 7F242384: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242388:
    ctx->pc = 0x7F242388u;
    // 7F242388: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24238C:
    ctx->pc = 0x7F24238Cu;
    // 7F24238C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242390:
    ctx->pc = 0x7F242390u;
    ctx->downcount -= 20;
    // 7F242390: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242394:
    ctx->pc = 0x7F242394u;
    // 7F242394: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242398:
    ctx->pc = 0x7F242398u;
    // 7F242398: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24239C:
    ctx->pc = 0x7F24239Cu;
    // 7F24239C: stmw     r24, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2423A0:
    ctx->pc = 0x7F2423A0u;
    // 7F2423A0: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2423A4:
    ctx->pc = 0x7F2423A4u;
    // 7F2423A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2423A8:
    ctx->pc = 0x7F2423A8u;
    // 7F2423A8: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2423AC:
    ctx->pc = 0x7F2423ACu;
    // 7F2423AC: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F2423B0:
    ctx->pc = 0x7F2423B0u;
    // 7F2423B0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2423B4:
    ctx->pc = 0x7F2423B4u;
    // 7F2423B4: bl      0x7F3CC414
    {
            ctx->lr = 0x7F2423B8u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F2423B8:
    ctx->pc = 0x7F2423B8u;
    ctx->downcount -= 2;
    // 7F2423B8: cmplwi  r24, 0x0000
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

label_7F2423BC:
    ctx->pc = 0x7F2423BCu;
    // 7F2423BC: bc    12, 2, 0x7F2424E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2424E4;
        }
    }

label_7F2423C0:
    ctx->pc = 0x7F2423C0u;
    ctx->downcount -= 14;
    // 7F2423C0: lwz     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2423C4:
    ctx->pc = 0x7F2423C4u;
    // 7F2423C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2423C8:
    ctx->pc = 0x7F2423C8u;
    // 7F2423C8: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2423CC:
    ctx->pc = 0x7F2423CCu;
    // 7F2423CC: lwz     r0, -9736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2423D0:
    ctx->pc = 0x7F2423D0u;
    // 7F2423D0: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2423D4:
    ctx->pc = 0x7F2423D4u;
    // 7F2423D4: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2423D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2423D8:
    ctx->pc = 0x7F2423D8u;
    // 7F2423D8: cmpwi   r0, 0
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

label_7F2423DC:
    ctx->pc = 0x7F2423DCu;
    // 7F2423DC: stw     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2423E0:
    ctx->pc = 0x7F2423E0u;
    // 7F2423E0: lwz     r3, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2423E4:
    ctx->pc = 0x7F2423E4u;
    // 7F2423E4: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2423E8:
    ctx->pc = 0x7F2423E8u;
    // 7F2423E8: stw     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2423EC:
    ctx->pc = 0x7F2423ECu;
    // 7F2423EC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2423F0:
    ctx->pc = 0x7F2423F0u;
    // 7F2423F0: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2423F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2423F4:
    ctx->pc = 0x7F2423F4u;
    // 7F2423F4: bc    4, 2, 0x7F24241C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24241C;
        }
    }

label_7F2423F8:
    ctx->pc = 0x7F2423F8u;
    ctx->downcount -= 7;
    // 7F2423F8: lwz     r3, 164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2423FC:
    ctx->pc = 0x7F2423FCu;
    // 7F2423FC: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F242400:
    ctx->pc = 0x7F242400u;
    // 7F242400: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F242404:
    ctx->pc = 0x7F242404u;
    // 7F242404: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F242408:
    ctx->pc = 0x7F242408u;
    // 7F242408: li      r7, 132
    ctx->gpr[7] = (u32)(s32)(132);

label_7F24240C:
    ctx->pc = 0x7F24240Cu;
    // 7F24240C: li      r8, 132
    ctx->gpr[8] = (u32)(s32)(132);

label_7F242410:
    ctx->pc = 0x7F242410u;
    // 7F242410: bl      0x7F10B744
    {
            ctx->lr = 0x7F242414u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F242414:
    ctx->pc = 0x7F242414u;
    ctx->downcount -= 2;
    // 7F242414: cmpwi   r3, 0
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

label_7F242418:
    ctx->pc = 0x7F242418u;
    // 7F242418: bc    4, 1, 0x7F2424E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2424E4;
        }
    }

label_7F24241C:
    ctx->pc = 0x7F24241Cu;
    ctx->downcount -= 2;
    // 7F24241C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F242420:
    ctx->pc = 0x7F242420u;
    // 7F242420: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F242424u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F242424:
    ctx->pc = 0x7F242424u;
    ctx->downcount -= 2;
    // 7F242424: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F242428:
    ctx->pc = 0x7F242428u;
    // 7F242428: bl      0x7F3CC594
    {
            ctx->lr = 0x7F24242Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F24242C:
    ctx->pc = 0x7F24242Cu;
    ctx->downcount -= 4;
    // 7F24242C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242430:
    ctx->pc = 0x7F242430u;
    // 7F242430: lfs     f0, 20164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242430u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242434:
    ctx->pc = 0x7F242434u;
    // 7F242434: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242434u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F242438:
    ctx->pc = 0x7F242438u;
    // 7F242438: bc    4, 1, 0x7F242454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242454;
        }
    }

label_7F24243C:
    ctx->pc = 0x7F24243Cu;
    ctx->downcount -= 6;
    // 7F24243C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242440:
    ctx->pc = 0x7F242440u;
    // 7F242440: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242440u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F242444:
    ctx->pc = 0x7F242444u;
    // 7F242444: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F242448:
    ctx->pc = 0x7F242448u;
    // 7F242448: lfs     f1, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242448u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24244C:
    ctx->pc = 0x7F24244Cu;
    // 7F24244C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242450:
    ctx->pc = 0x7F242450u;
    // 7F242450: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F242454u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F242454:
    ctx->pc = 0x7F242454u;
    ctx->downcount -= 4;
    // 7F242454: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F242458:
    ctx->pc = 0x7F242458u;
    // 7F242458: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F24245C:
    ctx->pc = 0x7F24245Cu;
    // 7F24245C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F242460:
    ctx->pc = 0x7F242460u;
    // 7F242460: bl      0x800261B4
    {
            ctx->lr = 0x7F242464u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F242464:
    ctx->pc = 0x7F242464u;
    ctx->downcount -= 8;
    // 7F242464: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F242468:
    ctx->pc = 0x7F242468u;
    // 7F242468: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F24246C:
    ctx->pc = 0x7F24246Cu;
    // 7F24246C: li      r5, 1000
    ctx->gpr[5] = (u32)(s32)(1000);

label_7F242470:
    ctx->pc = 0x7F242470u;
    // 7F242470: li      r6, 2000
    ctx->gpr[6] = (u32)(s32)(2000);

label_7F242474:
    ctx->pc = 0x7F242474u;
    // 7F242474: li      r7, 40
    ctx->gpr[7] = (u32)(s32)(40);

label_7F242478:
    ctx->pc = 0x7F242478u;
    // 7F242478: li      r8, 10
    ctx->gpr[8] = (u32)(s32)(10);

label_7F24247C:
    ctx->pc = 0x7F24247Cu;
    // 7F24247C: li      r9, 7
    ctx->gpr[9] = (u32)(s32)(7);

label_7F242480:
    ctx->pc = 0x7F242480u;
    // 7F242480: bl      0x7F23B434
    {
            ctx->lr = 0x7F242484u;
            ctx->pc = 0x7F23B434u;
            return;
    }

label_7F242484:
    ctx->pc = 0x7F242484u;
    ctx->downcount -= 9;
    // 7F242484: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F242488:
    ctx->pc = 0x7F242488u;
    // 7F242488: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24248C:
    ctx->pc = 0x7F24248Cu;
    // 7F24248C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F242490:
    ctx->pc = 0x7F242490u;
    // 7F242490: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F242494:
    ctx->pc = 0x7F242494u;
    // 7F242494: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F242498:
    ctx->pc = 0x7F242498u;
    // 7F242498: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F24249C:
    ctx->pc = 0x7F24249Cu;
    // 7F24249C: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2424A0:
    ctx->pc = 0x7F2424A0u;
    // 7F2424A0: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2424A4:
    ctx->pc = 0x7F2424A4u;
    // 7F2424A4: bc    4, 1, 0x7F2424B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2424B4;
        }
    }

label_7F2424A8:
    ctx->pc = 0x7F2424A8u;
    ctx->downcount -= 3;
    // 7F2424A8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2424AC:
    ctx->pc = 0x7F2424ACu;
    // 7F2424AC: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2424B0:
    ctx->pc = 0x7F2424B0u;
    // 7F2424B0: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2424B4:
    ctx->pc = 0x7F2424B4u;
    ctx->downcount -= 3;
    // 7F2424B4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F2424B8:
    ctx->pc = 0x7F2424B8u;
    // 7F2424B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2424BC:
    ctx->pc = 0x7F2424BCu;
    // 7F2424BC: bl      0x7F01EC24
    {
            ctx->lr = 0x7F2424C0u;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F2424C0:
    ctx->pc = 0x7F2424C0u;
    ctx->downcount -= 3;
    // 7F2424C0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2424C4:
    ctx->pc = 0x7F2424C4u;
    // 7F2424C4: addi    r3, r3, 11336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11336);

label_7F2424C8:
    ctx->pc = 0x7F2424C8u;
    // 7F2424C8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2424CCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2424CC:
    ctx->pc = 0x7F2424CCu;
    ctx->downcount -= 2;
    // 7F2424CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2424D0:
    ctx->pc = 0x7F2424D0u;
    // 7F2424D0: bl      0x7F013E60
    {
            ctx->lr = 0x7F2424D4u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F2424D4:
    ctx->pc = 0x7F2424D4u;
    ctx->downcount -= 2;
    // 7F2424D4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F2424D8:
    ctx->pc = 0x7F2424D8u;
    // 7F2424D8: bl      0x7F2568E4
    {
            ctx->lr = 0x7F2424DCu;
            ctx->pc = 0x7F2568E4u;
            return;
    }

label_7F2424DC:
    ctx->pc = 0x7F2424DCu;
    ctx->downcount -= 2;
    // 7F2424DC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2424E0:
    ctx->pc = 0x7F2424E0u;
    // 7F2424E0: b       0x7F242854
    {
            goto label_7F242854;
    }

label_7F2424E4:
    ctx->pc = 0x7F2424E4u;
    ctx->downcount -= 4;
    // 7F2424E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2424E8:
    ctx->pc = 0x7F2424E8u;
    // 7F2424E8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2424EC:
    ctx->pc = 0x7F2424ECu;
    // 7F2424EC: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2424F0:
    ctx->pc = 0x7F2424F0u;
    // 7F2424F0: bl      0x7F24202C
    {
            ctx->lr = 0x7F2424F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24202Cu;
                return;
            }
            goto label_7F24202C;
    }

label_7F2424F4:
    ctx->pc = 0x7F2424F4u;
    ctx->downcount -= 2;
    // 7F2424F4: cmpwi   r3, 0
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

label_7F2424F8:
    ctx->pc = 0x7F2424F8u;
    // 7F2424F8: bc    4, 0, 0x7F242504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242504;
        }
    }

label_7F2424FC:
    ctx->pc = 0x7F2424FCu;
    ctx->downcount -= 2;
    // 7F2424FC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242500:
    ctx->pc = 0x7F242500u;
    // 7F242500: b       0x7F242854
    {
            goto label_7F242854;
    }

label_7F242504:
    ctx->pc = 0x7F242504u;
    ctx->downcount -= 3;
    // 7F242504: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242508:
    ctx->pc = 0x7F242508u;
    // 7F242508: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24250C:
    ctx->pc = 0x7F24250Cu;
    // 7F24250C: bl      0x7F242144
    {
            ctx->lr = 0x7F242510u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242144u;
                return;
            }
            goto label_7F242144;
    }

label_7F242510:
    ctx->pc = 0x7F242510u;
    ctx->downcount -= 2;
    // 7F242510: cmpwi   r3, 0
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

label_7F242514:
    ctx->pc = 0x7F242514u;
    // 7F242514: bc    4, 0, 0x7F242520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242520;
        }
    }

label_7F242518:
    ctx->pc = 0x7F242518u;
    ctx->downcount -= 2;
    // 7F242518: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24251C:
    ctx->pc = 0x7F24251Cu;
    // 7F24251C: b       0x7F242854
    {
            goto label_7F242854;
    }

label_7F242520:
    ctx->pc = 0x7F242520u;
    ctx->downcount -= 2;
    // 7F242520: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242524:
    ctx->pc = 0x7F242524u;
    // 7F242524: bl      0x7F24230C
    {
            ctx->lr = 0x7F242528u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24230Cu;
                return;
            }
            goto label_7F24230C;
    }

label_7F242528:
    ctx->pc = 0x7F242528u;
    ctx->downcount -= 4;
    // 7F242528: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24252C:
    ctx->pc = 0x7F24252Cu;
    // 7F24252C: lwz     r0, -8576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242530:
    ctx->pc = 0x7F242530u;
    // 7F242530: cmplwi  r0, 0x0000
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

label_7F242534:
    ctx->pc = 0x7F242534u;
    // 7F242534: bc    12, 2, 0x7F242548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F242548;
        }
    }

label_7F242538:
    ctx->pc = 0x7F242538u;
    ctx->downcount -= 4;
    // 7F242538: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24253C:
    ctx->pc = 0x7F24253Cu;
    // 7F24253C: lwz     r0, -9716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242540:
    ctx->pc = 0x7F242540u;
    // 7F242540: stw     r0, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242544:
    ctx->pc = 0x7F242544u;
    // 7F242544: b       0x7F24255C
    {
            goto label_7F24255C;
    }

label_7F242548:
    ctx->pc = 0x7F242548u;
    ctx->downcount -= 5;
    // 7F242548: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24254C:
    ctx->pc = 0x7F24254Cu;
    // 7F24254C: lwz     r0, -9716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242550:
    ctx->pc = 0x7F242550u;
    // 7F242550: srawi r0, r0, 1
    {
        u32 sh = 1u;
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

label_7F242554:
    ctx->pc = 0x7F242554u;
    // 7F242554: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F242558:
    ctx->pc = 0x7F242558u;
    // 7F242558: stw     r0, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24255C:
    ctx->pc = 0x7F24255Cu;
    ctx->downcount -= 13;
    // 7F24255C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F242560:
    ctx->pc = 0x7F242560u;
    // 7F242560: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242564:
    ctx->pc = 0x7F242564u;
    // 7F242564: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242568:
    ctx->pc = 0x7F242568u;
    // 7F242568: addi    r4, r3, 20032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20032);

label_7F24256C:
    ctx->pc = 0x7F24256Cu;
    // 7F24256C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24256Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242570:
    ctx->pc = 0x7F242570u;
    // 7F242570: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242574:
    ctx->pc = 0x7F242574u;
    // 7F242574: stw     r0, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242578:
    ctx->pc = 0x7F242578u;
    // 7F242578: stw     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24257C:
    ctx->pc = 0x7F24257Cu;
    // 7F24257C: stfs     f0, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F24257Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242580:
    ctx->pc = 0x7F242580u;
    // 7F242580: stfs     f0, 836(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242580u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(836);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242584:
    ctx->pc = 0x7F242584u;
    // 7F242584: lwz     r0, -9700(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9700);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242588:
    ctx->pc = 0x7F242588u;
    // 7F242588: stw     r0, 840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24258C:
    ctx->pc = 0x7F24258Cu;
    // 7F24258C: bl      0x7F241E44
    {
            ctx->lr = 0x7F242590u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241E44u;
                return;
            }
            goto label_7F241E44;
    }

label_7F242590:
    ctx->pc = 0x7F242590u;
    ctx->downcount -= 3;
    // 7F242590: rlwinm r0, r3, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001000u;
    }

label_7F242594:
    ctx->pc = 0x7F242594u;
    // 7F242594: sth     r0, 844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F242598:
    ctx->pc = 0x7F242598u;
    // 7F242598: bl      0x7F241E44
    {
            ctx->lr = 0x7F24259Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241E44u;
                return;
            }
            goto label_7F241E44;
    }

label_7F24259C:
    ctx->pc = 0x7F24259Cu;
    ctx->downcount -= 5;
    // 7F24259C: rlwinm r3, r3, 0, 19, 19
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001000u;
    }

label_7F2425A0:
    ctx->pc = 0x7F2425A0u;
    // 7F2425A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2425A4:
    ctx->pc = 0x7F2425A4u;
    // 7F2425A4: sth     r3, 846(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(846);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2425A8:
    ctx->pc = 0x7F2425A8u;
    // 7F2425A8: sth     r0, 848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(848);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2425AC:
    ctx->pc = 0x7F2425ACu;
    // 7F2425AC: bl      0x7F241E44
    {
            ctx->lr = 0x7F2425B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241E44u;
                return;
            }
            goto label_7F241E44;
    }

label_7F2425B0:
    ctx->pc = 0x7F2425B0u;
    ctx->downcount -= 4;
    // 7F2425B0: rlwinm r3, r3, 0, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F2425B4:
    ctx->pc = 0x7F2425B4u;
    // 7F2425B4: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_7F2425B8:
    ctx->pc = 0x7F2425B8u;
    // 7F2425B8: sth     r0, 852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(852);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2425BC:
    ctx->pc = 0x7F2425BCu;
    // 7F2425BC: bl      0x7F241E44
    {
            ctx->lr = 0x7F2425C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241E44u;
                return;
            }
            goto label_7F241E44;
    }

label_7F2425C0:
    ctx->pc = 0x7F2425C0u;
    ctx->downcount -= 9;
    // 7F2425C0: rlwinm r4, r3, 0, 28, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F2425C4:
    ctx->pc = 0x7F2425C4u;
    // 7F2425C4: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F2425C8:
    ctx->pc = 0x7F2425C8u;
    // 7F2425C8: addi    r4, r4, -8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8);

label_7F2425CC:
    ctx->pc = 0x7F2425CCu;
    // 7F2425CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2425D0:
    ctx->pc = 0x7F2425D0u;
    // 7F2425D0: sth     r4, 854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(854);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2425D4:
    ctx->pc = 0x7F2425D4u;
    // 7F2425D4: addi    r3, r3, -24084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24084);

label_7F2425D8:
    ctx->pc = 0x7F2425D8u;
    // 7F2425D8: sth     r0, 856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(856);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2425DC:
    ctx->pc = 0x7F2425DCu;
    // 7F2425DC: stb     r0, 872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2425E0:
    ctx->pc = 0x7F2425E0u;
    // 7F2425E0: bl      0x7F3B6420
    {
            ctx->lr = 0x7F2425E4u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F2425E4:
    ctx->pc = 0x7F2425E4u;
    ctx->downcount -= 7;
    // 7F2425E4: lis     r5, 10
    ctx->gpr[5] = ((u32)(s32)(10) << 16);

label_7F2425E8:
    ctx->pc = 0x7F2425E8u;
    // 7F2425E8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2425EC:
    ctx->pc = 0x7F2425ECu;
    // 7F2425EC: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F2425F0:
    ctx->pc = 0x7F2425F0u;
    // 7F2425F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2425F4:
    ctx->pc = 0x7F2425F4u;
    // 7F2425F4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F2425F8:
    ctx->pc = 0x7F2425F8u;
    // 7F2425F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2425FC:
    ctx->pc = 0x7F2425FCu;
    // 7F2425FC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F242600u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F242600:
    ctx->pc = 0x7F242600u;
    ctx->downcount -= 3;
    // 7F242600: or.   r4, r3, r3
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

label_7F242604:
    ctx->pc = 0x7F242604u;
    // 7F242604: stw     r3, 860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242608:
    ctx->pc = 0x7F242608u;
    // 7F242608: bc    4, 2, 0x7F242614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242614;
        }
    }

label_7F24260C:
    ctx->pc = 0x7F24260Cu;
    ctx->downcount -= 2;
    // 7F24260C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242610:
    ctx->pc = 0x7F242610u;
    // 7F242610: b       0x7F242854
    {
            goto label_7F242854;
    }

label_7F242614:
    ctx->pc = 0x7F242614u;
    ctx->downcount -= 5;
    // 7F242614: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242618:
    ctx->pc = 0x7F242618u;
    // 7F242618: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24261C:
    ctx->pc = 0x7F24261Cu;
    // 7F24261C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F242620:
    ctx->pc = 0x7F242620u;
    // 7F242620: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F242624:
    ctx->pc = 0x7F242624u;
    // 7F242624: bl      0x7F241F44
    {
            ctx->lr = 0x7F242628u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F241F44u;
                return;
            }
            goto label_7F241F44;
    }

label_7F242628:
    ctx->pc = 0x7F242628u;
    ctx->downcount -= 25;
    // 7F242628: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F24262C:
    ctx->pc = 0x7F24262Cu;
    // 7F24262C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F242630:
    ctx->pc = 0x7F242630u;
    // 7F242630: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F242634:
    ctx->pc = 0x7F242634u;
    // 7F242634: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242638:
    ctx->pc = 0x7F242638u;
    // 7F242638: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24263C:
    ctx->pc = 0x7F24263Cu;
    // 7F24263C: addi    r9, r7, 20032
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(20032);

label_7F242640:
    ctx->pc = 0x7F242640u;
    // 7F242640: addi    r8, r6, 20168
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20168);

label_7F242644:
    ctx->pc = 0x7F242644u;
    // 7F242644: addi    r7, r5, 20172
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20172);

label_7F242648:
    ctx->pc = 0x7F242648u;
    // 7F242648: addi    r6, r4, 20040
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20040);

label_7F24264C:
    ctx->pc = 0x7F24264Cu;
    // 7F24264C: addi    r4, r3, 20096
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20096);

label_7F242650:
    ctx->pc = 0x7F242650u;
    // 7F242650: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F242654:
    ctx->pc = 0x7F242654u;
    // 7F242654: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242658:
    ctx->pc = 0x7F242658u;
    // 7F242658: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F24265C:
    ctx->pc = 0x7F24265Cu;
    // 7F24265C: lfs     f6, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F24265Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F242660:
    ctx->pc = 0x7F242660u;
    // 7F242660: addi    r9, r5, -9168
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-9168);

label_7F242664:
    ctx->pc = 0x7F242664u;
    // 7F242664: addi    r5, r3, -9680
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9680);

label_7F242668:
    ctx->pc = 0x7F242668u;
    // 7F242668: lfs     f5, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F242668u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F24266C:
    ctx->pc = 0x7F24266Cu;
    // 7F24266C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F242670:
    ctx->pc = 0x7F242670u;
    // 7F242670: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F242670u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F242674:
    ctx->pc = 0x7F242674u;
    // 7F242674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242678:
    ctx->pc = 0x7F242678u;
    // 7F242678: lfd     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F242678u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24267C:
    ctx->pc = 0x7F24267Cu;
    // 7F24267C: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F242680:
    ctx->pc = 0x7F242680u;
    // 7F242680: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242680u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F242684:
    ctx->pc = 0x7F242684u;
    // 7F242684: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F242688:
    ctx->downcount -= 20;
    // 7F242688: subfic  r0, r8, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[8]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F24268C:
    // 7F24268C: add   r4, r9, r3
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F242690:
    // 7F242690: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F242694:
    // 7F242694: add   r7, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F242698:
    ctx->pc = 0x7F242698u;
    // 7F242698: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24269C:
    // 7F24269C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F2426A0:
    // 7F2426A0: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2426A4:
    ctx->pc = 0x7F2426A4u;
    // 7F2426A4: stw     r6, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2426A8:
    ctx->pc = 0x7F2426A8u;
    // 7F2426A8: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2426A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2426AC:
    ctx->pc = 0x7F2426ACu;
    // 7F2426AC: stfs     f6, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2426ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F2426B0:
    ctx->pc = 0x7F2426B0u;
    // 7F2426B0: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2426B0u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2426B4:
    ctx->pc = 0x7F2426B4u;
    // 7F2426B4: stfs     f6, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2426B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F2426B8:
    ctx->pc = 0x7F2426B8u;
    // 7F2426B8: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2426B8u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F2426BC:
    ctx->pc = 0x7F2426BCu;
    // 7F2426BC: fadds   f2, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2426BCu)) return;
    ppc_fadds(ctx, 2, 5, 0);

label_7F2426C0:
    ctx->pc = 0x7F2426C0u;
    // 7F2426C0: fmadds f0, f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2426C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[5], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F2426C4:
    ctx->pc = 0x7F2426C4u;
    // 7F2426C4: stfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2426C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2426C8:
    ctx->pc = 0x7F2426C8u;
    // 7F2426C8: stfs     f0, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2426C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2426CC:
    ctx->pc = 0x7F2426CCu;
    // 7F2426CC: stfs     f6, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2426CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F2426D0:
    ctx->pc = 0x7F2426D0u;
    // 7F2426D0: stfs     f6, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2426D0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F2426D4:
    // 7F2426D4: bc    16, 0, 0x7F242688
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242688u;
                return;
            }
            goto label_7F242688;
        }
    }

label_7F2426D8:
    ctx->pc = 0x7F2426D8u;
    ctx->downcount -= 9;
    // 7F2426D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2426DC:
    ctx->pc = 0x7F2426DCu;
    // 7F2426DC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2426E0:
    ctx->pc = 0x7F2426E0u;
    // 7F2426E0: lfs     f0, 20176(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2426E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2426E4:
    ctx->pc = 0x7F2426E4u;
    // 7F2426E4: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2426E8:
    ctx->pc = 0x7F2426E8u;
    // 7F2426E8: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_7F2426EC:
    ctx->pc = 0x7F2426ECu;
    // 7F2426EC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2426F0:
    ctx->pc = 0x7F2426F0u;
    // 7F2426F0: stfs     f0, 864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2426F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2426F4:
    ctx->pc = 0x7F2426F4u;
    // 7F2426F4: stw     r0, 828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2426F8:
    ctx->pc = 0x7F2426F8u;
    // 7F2426F8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2426FCu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2426FC:
    ctx->pc = 0x7F2426FCu;
    ctx->downcount -= 4;
    // 7F2426FC: lwz     r5, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242700:
    ctx->pc = 0x7F242700u;
    // 7F242700: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F242704:
    ctx->pc = 0x7F242704u;
    // 7F242704: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F242708:
    ctx->pc = 0x7F242708u;
    // 7F242708: bl      0x7F022090
    {
            ctx->lr = 0x7F24270Cu;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F24270C:
    ctx->pc = 0x7F24270Cu;
    ctx->downcount -= 5;
    // 7F24270C: addi    r3, r31, 784
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(784);

label_7F242710:
    ctx->pc = 0x7F242710u;
    // 7F242710: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F242714:
    ctx->pc = 0x7F242714u;
    // 7F242714: addi    r6, r31, 64
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(64);

label_7F242718:
    ctx->pc = 0x7F242718u;
    // 7F242718: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F24271C:
    ctx->pc = 0x7F24271Cu;
    // 7F24271C: bl      0x7F23A19C
    {
            ctx->lr = 0x7F242720u;
            ctx->pc = 0x7F23A19Cu;
            return;
    }

label_7F242720:
    ctx->pc = 0x7F242720u;
    ctx->downcount -= 2;
    // 7F242720: addi    r3, r31, 784
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(784);

label_7F242724:
    ctx->pc = 0x7F242724u;
    // 7F242724: bl      0x7F23A1B4
    {
            ctx->lr = 0x7F242728u;
            ctx->pc = 0x7F23A1B4u;
            return;
    }

label_7F242728:
    ctx->pc = 0x7F242728u;
    ctx->downcount -= 71;
    // 7F242728: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24272C:
    ctx->pc = 0x7F24272Cu;
    // 7F24272C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F242730:
    ctx->pc = 0x7F242730u;
    // 7F242730: addi    r4, r3, -5976
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5976);

label_7F242734:
    ctx->pc = 0x7F242734u;
    // 7F242734: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F242738:
    ctx->pc = 0x7F242738u;
    // 7F242738: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24273C:
    ctx->pc = 0x7F24273Cu;
    // 7F24273C: addi    r29, r6, 20092
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(20092);

label_7F242740:
    ctx->pc = 0x7F242740u;
    // 7F242740: addi    r9, r8, 20032
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(20032);

label_7F242744:
    ctx->pc = 0x7F242744u;
    // 7F242744: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242748:
    ctx->pc = 0x7F242748u;
    // 7F242748: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F24274C:
    ctx->pc = 0x7F24274Cu;
    // 7F24274C: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F242750:
    ctx->pc = 0x7F242750u;
    // 7F242750: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242754:
    ctx->pc = 0x7F242754u;
    // 7F242754: addi    r8, r3, 20180
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(20180);

label_7F242758:
    ctx->pc = 0x7F242758u;
    // 7F242758: lis     r12, 32589
    ctx->gpr[12] = ((u32)(s32)(32589) << 16);

label_7F24275C:
    ctx->pc = 0x7F24275Cu;
    // 7F24275C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F242760:
    ctx->pc = 0x7F242760u;
    // 7F242760: lwz     r11, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F242764:
    ctx->pc = 0x7F242764u;
    // 7F242764: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242768:
    ctx->pc = 0x7F242768u;
    // 7F242768: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24276C:
    ctx->pc = 0x7F24276Cu;
    // 7F24276C: addi    r3, r12, -5936
    ctx->gpr[3] = ctx->gpr[12] + (u32)(s32)(-5936);

label_7F242770:
    ctx->pc = 0x7F242770u;
    // 7F242770: addi    r30, r4, 20192
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(20192);

label_7F242774:
    ctx->pc = 0x7F242774u;
    // 7F242774: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F242778:
    ctx->pc = 0x7F242778u;
    // 7F242778: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24277C:
    ctx->pc = 0x7F24277Cu;
    // 7F24277C: addi    r12, r6, 20196
    ctx->gpr[12] = ctx->gpr[6] + (u32)(s32)(20196);

label_7F242780:
    ctx->pc = 0x7F242780u;
    // 7F242780: addi    r28, r7, 20184
    ctx->gpr[28] = ctx->gpr[7] + (u32)(s32)(20184);

label_7F242784:
    ctx->pc = 0x7F242784u;
    // 7F242784: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F242788:
    ctx->pc = 0x7F242788u;
    // 7F242788: stw     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F24278C:
    ctx->pc = 0x7F24278Cu;
    // 7F24278C: addi    r7, r5, 20188
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20188);

label_7F242790:
    ctx->pc = 0x7F242790u;
    // 7F242790: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F242794:
    ctx->pc = 0x7F242794u;
    // 7F242794: lfs     f8, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F242794u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F242798:
    ctx->pc = 0x7F242798u;
    // 7F242798: lwz     r25, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F24279C:
    ctx->pc = 0x7F24279Cu;
    // 7F24279C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2427A0:
    ctx->pc = 0x7F2427A0u;
    // 7F2427A0: lwz     r6, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2427A4:
    ctx->pc = 0x7F2427A4u;
    // 7F2427A4: addi    r11, r5, 20200
    ctx->gpr[11] = ctx->gpr[5] + (u32)(s32)(20200);

label_7F2427A8:
    ctx->pc = 0x7F2427A8u;
    // 7F2427A8: addi    r24, r10, 20148
    ctx->gpr[24] = ctx->gpr[10] + (u32)(s32)(20148);

label_7F2427AC:
    ctx->pc = 0x7F2427ACu;
    // 7F2427AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2427B0:
    ctx->pc = 0x7F2427B0u;
    // 7F2427B0: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2427B4:
    ctx->pc = 0x7F2427B4u;
    // 7F2427B4: addi    r10, r4, 20204
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(20204);

label_7F2427B8:
    ctx->pc = 0x7F2427B8u;
    // 7F2427B8: lfs     f7, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2427B8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F2427BC:
    ctx->pc = 0x7F2427BCu;
    // 7F2427BC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2427C0:
    ctx->pc = 0x7F2427C0u;
    // 7F2427C0: stw     r25, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F2427C4:
    ctx->pc = 0x7F2427C4u;
    // 7F2427C4: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F2427C8:
    ctx->pc = 0x7F2427C8u;
    // 7F2427C8: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2427C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2427CC:
    ctx->pc = 0x7F2427CCu;
    // 7F2427CC: addi    r4, r31, 876
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(876);

label_7F2427D0:
    ctx->pc = 0x7F2427D0u;
    // 7F2427D0: stb     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2427D4:
    ctx->pc = 0x7F2427D4u;
    // 7F2427D4: addi    r6, r1, 40
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2427D8:
    ctx->pc = 0x7F2427D8u;
    // 7F2427D8: lfs     f6, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2427D8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F2427DC:
    ctx->pc = 0x7F2427DCu;
    // 7F2427DC: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2427E0:
    ctx->pc = 0x7F2427E0u;
    // 7F2427E0: lwz     r25, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F2427E4:
    ctx->pc = 0x7F2427E4u;
    // 7F2427E4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2427E8:
    ctx->pc = 0x7F2427E8u;
    // 7F2427E8: lwz     r26, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F2427EC:
    ctx->pc = 0x7F2427ECu;
    // 7F2427EC: addi    r9, r31, 940
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(940);

label_7F2427F0:
    ctx->pc = 0x7F2427F0u;
    // 7F2427F0: lwz     r27, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F2427F4:
    ctx->pc = 0x7F2427F4u;
    // 7F2427F4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_7F2427F8:
    ctx->pc = 0x7F2427F8u;
    // 7F2427F8: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2427FC:
    ctx->pc = 0x7F2427FCu;
    // 7F2427FC: lfs     f5, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2427FCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F242800:
    ctx->pc = 0x7F242800u;
    // 7F242800: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F242800u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242804:
    ctx->pc = 0x7F242804u;
    // 7F242804: stw     r25, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F242808:
    ctx->pc = 0x7F242808u;
    // 7F242808: lfs     f1, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F242808u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24280C:
    ctx->pc = 0x7F24280Cu;
    // 7F24280C: stw     r26, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F242810:
    ctx->pc = 0x7F242810u;
    // 7F242810: lfs     f2, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F242810u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F242814:
    ctx->pc = 0x7F242814u;
    // 7F242814: stw     r27, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F242818:
    ctx->pc = 0x7F242818u;
    // 7F242818: lfs     f3, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F242818u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F24281C:
    ctx->pc = 0x7F24281Cu;
    // 7F24281C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242820:
    ctx->pc = 0x7F242820u;
    // 7F242820: stfs     f8, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_7F242824:
    ctx->pc = 0x7F242824u;
    // 7F242824: stfs     f7, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F242828:
    ctx->pc = 0x7F242828u;
    // 7F242828: stfs     f6, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F24282C:
    ctx->pc = 0x7F24282Cu;
    // 7F24282C: stfs     f5, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24282Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F242830:
    ctx->pc = 0x7F242830u;
    // 7F242830: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F242834:
    ctx->pc = 0x7F242834u;
    // 7F242834: stfs     f4, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242834u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F242838:
    ctx->pc = 0x7F242838u;
    // 7F242838: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242838u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24283C:
    ctx->pc = 0x7F24283Cu;
    // 7F24283C: stfs     f8, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24283Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_7F242840:
    ctx->pc = 0x7F242840u;
    // 7F242840: bl      0x7F25ECA4
    {
            ctx->lr = 0x7F242844u;
            ctx->pc = 0x7F25ECA4u;
            return;
    }

label_7F242844:
    ctx->pc = 0x7F242844u;
    ctx->downcount -= 3;
    // 7F242844: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242848:
    ctx->pc = 0x7F242848u;
    // 7F242848: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24284C:
    ctx->pc = 0x7F24284Cu;
    // 7F24284C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F242850u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F242850:
    ctx->pc = 0x7F242850u;
    ctx->downcount -= 1;
    // 7F242850: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242854:
    ctx->pc = 0x7F242854u;
    ctx->downcount -= 16;
    // 7F242854: lmw     r24, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F242858:
    ctx->pc = 0x7F242858u;
    // 7F242858: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24285C:
    ctx->pc = 0x7F24285Cu;
    // 7F24285C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242860:
    ctx->pc = 0x7F242860u;
    // 7F242860: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F242864:
    ctx->pc = 0x7F242864u;
    // 7F242864: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242868:
    ctx->pc = 0x7F242868u;
    ctx->downcount -= 22;
    // 7F242868: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24286C:
    ctx->pc = 0x7F24286Cu;
    // 7F24286C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242870:
    ctx->pc = 0x7F242870u;
    // 7F242870: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F242874:
    ctx->pc = 0x7F242874u;
    // 7F242874: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242878:
    ctx->pc = 0x7F242878u;
    // 7F242878: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24287C:
    ctx->pc = 0x7F24287Cu;
    // 7F24287C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242880:
    ctx->pc = 0x7F242880u;
    // 7F242880: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F242884:
    ctx->pc = 0x7F242884u;
    // 7F242884: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F242888:
    ctx->pc = 0x7F242888u;
    // 7F242888: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F24288C:
    ctx->pc = 0x7F24288Cu;
    // 7F24288C: lwz     r0, -9744(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-9744);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242890:
    ctx->pc = 0x7F242890u;
    // 7F242890: cmpwi   r0, 0
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

label_7F242894:
    ctx->pc = 0x7F242894u;
    // 7F242894: bc    12, 2, 0x7F2428A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2428A0;
        }
    }

label_7F242898:
    ctx->pc = 0x7F242898u;
    ctx->downcount -= 2;
    // 7F242898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24289C:
    ctx->pc = 0x7F24289Cu;
    // 7F24289C: b       0x7F2429F0
    {
            goto label_7F2429F0;
    }

label_7F2428A0:
    ctx->pc = 0x7F2428A0u;
    ctx->downcount -= 5;
    // 7F2428A0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F2428A4:
    ctx->pc = 0x7F2428A4u;
    // 7F2428A4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2428A8:
    ctx->pc = 0x7F2428A8u;
    // 7F2428A8: li      r5, 944
    ctx->gpr[5] = (u32)(s32)(944);

label_7F2428AC:
    ctx->pc = 0x7F2428ACu;
    // 7F2428AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2428B0:
    ctx->pc = 0x7F2428B0u;
    // 7F2428B0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2428B4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2428B4:
    ctx->pc = 0x7F2428B4u;
    ctx->downcount -= 2;
    // 7F2428B4: or.   r31, r3, r3
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

label_7F2428B8:
    ctx->pc = 0x7F2428B8u;
    // 7F2428B8: bc    12, 2, 0x7F2429EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2429EC;
        }
    }

label_7F2428BC:
    ctx->pc = 0x7F2428BCu;
    ctx->downcount -= 18;
    // 7F2428BC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2428C0:
    ctx->pc = 0x7F2428C0u;
    // 7F2428C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2428C4:
    ctx->pc = 0x7F2428C4u;
    // 7F2428C4: addi    r6, r3, -9740
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-9740);

label_7F2428C8:
    ctx->pc = 0x7F2428C8u;
    // 7F2428C8: lfs     f1, 20032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2428C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2428CC:
    ctx->pc = 0x7F2428CCu;
    // 7F2428CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2428D0:
    ctx->pc = 0x7F2428D0u;
    // 7F2428D0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2428D4:
    ctx->pc = 0x7F2428D4u;
    // 7F2428D4: lfs     f0, 20208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2428D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2428D8:
    ctx->pc = 0x7F2428D8u;
    // 7F2428D8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2428DC:
    ctx->pc = 0x7F2428DCu;
    // 7F2428DC: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2428E0:
    ctx->pc = 0x7F2428E0u;
    // 7F2428E0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2428E4:
    ctx->pc = 0x7F2428E4u;
    // 7F2428E4: addi    r4, r3, -9744
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9744);

label_7F2428E8:
    ctx->pc = 0x7F2428E8u;
    // 7F2428E8: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2428EC:
    ctx->pc = 0x7F2428ECu;
    // 7F2428EC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2428F0:
    ctx->pc = 0x7F2428F0u;
    // 7F2428F0: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2428F4:
    ctx->pc = 0x7F2428F4u;
    // 7F2428F4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2428F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2428F8:
    ctx->pc = 0x7F2428F8u;
    // 7F2428F8: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2428F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2428FC:
    ctx->pc = 0x7F2428FCu;
    // 7F2428FC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2428FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242900:
    ctx->pc = 0x7F242900u;
    // 7F242900: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F242904u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F242904:
    ctx->pc = 0x7F242904u;
    ctx->downcount -= 5;
    // 7F242904: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F242908:
    ctx->pc = 0x7F242908u;
    // 7F242908: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24290C:
    ctx->pc = 0x7F24290Cu;
    // 7F24290C: addi    r4, r4, -9696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9696);

label_7F242910:
    ctx->pc = 0x7F242910u;
    // 7F242910: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F242914:
    ctx->pc = 0x7F242914u;
    // 7F242914: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F242918u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F242918:
    ctx->pc = 0x7F242918u;
    ctx->downcount -= 9;
    // 7F242918: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24291C:
    ctx->pc = 0x7F24291Cu;
    // 7F24291C: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F242920:
    ctx->pc = 0x7F242920u;
    // 7F242920: addi    r0, r3, -9696
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9696);

label_7F242924:
    ctx->pc = 0x7F242924u;
    // 7F242924: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F242928:
    ctx->pc = 0x7F242928u;
    // 7F242928: stw     r0, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24292C:
    ctx->pc = 0x7F24292Cu;
    // 7F24292C: addi    r5, r3, 7848
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7848);

label_7F242930:
    ctx->pc = 0x7F242930u;
    // 7F242930: addi    r4, r4, 5124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5124);

label_7F242934:
    ctx->pc = 0x7F242934u;
    // 7F242934: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242938:
    ctx->pc = 0x7F242938u;
    // 7F242938: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F24293Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F24293C:
    ctx->pc = 0x7F24293Cu;
    ctx->downcount -= 16;
    // 7F24293C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242940:
    ctx->pc = 0x7F242940u;
    // 7F242940: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F242944:
    ctx->pc = 0x7F242944u;
    // 7F242944: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F242948:
    ctx->pc = 0x7F242948u;
    // 7F242948: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24294C:
    ctx->pc = 0x7F24294Cu;
    // 7F24294C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F242950:
    ctx->pc = 0x7F242950u;
    // 7F242950: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F242954:
    ctx->pc = 0x7F242954u;
    // 7F242954: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242958:
    ctx->pc = 0x7F242958u;
    // 7F242958: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24295C:
    ctx->pc = 0x7F24295Cu;
    // 7F24295C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F242960:
    ctx->pc = 0x7F242960u;
    // 7F242960: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F242964:
    ctx->pc = 0x7F242964u;
    // 7F242964: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F242968:
    ctx->pc = 0x7F242968u;
    // 7F242968: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24296C:
    ctx->pc = 0x7F24296Cu;
    // 7F24296C: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F242970:
    ctx->pc = 0x7F242970u;
    // 7F242970: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F242974:
    ctx->pc = 0x7F242974u;
    // 7F242974: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242978:
    ctx->pc = 0x7F242978u;
    // 7F242978: bl      0x7F242390
    {
            ctx->lr = 0x7F24297Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242390u;
                return;
            }
            goto label_7F242390;
    }

label_7F24297C:
    ctx->pc = 0x7F24297Cu;
    ctx->downcount -= 2;
    // 7F24297C: cmpwi   r3, 0
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

label_7F242980:
    ctx->pc = 0x7F242980u;
    // 7F242980: bc    4, 0, 0x7F242994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242994;
        }
    }

label_7F242984:
    ctx->pc = 0x7F242984u;
    ctx->downcount -= 2;
    // 7F242984: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242988:
    ctx->pc = 0x7F242988u;
    // 7F242988: bl      0x7F3C8210
    {
            ctx->lr = 0x7F24298Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F24298C:
    ctx->pc = 0x7F24298Cu;
    ctx->downcount -= 2;
    // 7F24298C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242990:
    ctx->pc = 0x7F242990u;
    // 7F242990: b       0x7F2429F0
    {
            goto label_7F2429F0;
    }

label_7F242994:
    ctx->pc = 0x7F242994u;
    ctx->downcount -= 9;
    // 7F242994: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F242998:
    ctx->pc = 0x7F242998u;
    // 7F242998: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24299C:
    ctx->pc = 0x7F24299Cu;
    // 7F24299C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2429A0:
    ctx->pc = 0x7F2429A0u;
    // 7F2429A0: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2429A4:
    ctx->pc = 0x7F2429A4u;
    // 7F2429A4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2429A8:
    ctx->pc = 0x7F2429A8u;
    // 7F2429A8: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F2429AC:
    ctx->pc = 0x7F2429ACu;
    // 7F2429AC: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2429B0:
    ctx->pc = 0x7F2429B0u;
    // 7F2429B0: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2429B4:
    ctx->pc = 0x7F2429B4u;
    // 7F2429B4: bc    4, 1, 0x7F2429C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2429C4;
        }
    }

label_7F2429B8:
    ctx->pc = 0x7F2429B8u;
    ctx->downcount -= 3;
    // 7F2429B8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2429BC:
    ctx->pc = 0x7F2429BCu;
    // 7F2429BC: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F2429C0:
    ctx->pc = 0x7F2429C0u;
    // 7F2429C0: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2429C4:
    ctx->pc = 0x7F2429C4u;
    ctx->downcount -= 3;
    // 7F2429C4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F2429C8:
    ctx->pc = 0x7F2429C8u;
    // 7F2429C8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2429CC:
    ctx->pc = 0x7F2429CCu;
    // 7F2429CC: bl      0x7F01EC24
    {
            ctx->lr = 0x7F2429D0u;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F2429D0:
    ctx->pc = 0x7F2429D0u;
    ctx->downcount -= 3;
    // 7F2429D0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2429D4:
    ctx->pc = 0x7F2429D4u;
    // 7F2429D4: addi    r3, r3, 11336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11336);

label_7F2429D8:
    ctx->pc = 0x7F2429D8u;
    // 7F2429D8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2429DCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2429DC:
    ctx->pc = 0x7F2429DCu;
    ctx->downcount -= 2;
    // 7F2429DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2429E0:
    ctx->pc = 0x7F2429E0u;
    // 7F2429E0: bl      0x7F013E60
    {
            ctx->lr = 0x7F2429E4u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F2429E4:
    ctx->pc = 0x7F2429E4u;
    ctx->downcount -= 2;
    // 7F2429E4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F2429E8:
    ctx->pc = 0x7F2429E8u;
    // 7F2429E8: bl      0x7F2568E4
    {
            ctx->lr = 0x7F2429ECu;
            ctx->pc = 0x7F2568E4u;
            return;
    }

label_7F2429EC:
    ctx->pc = 0x7F2429ECu;
    ctx->downcount -= 1;
    // 7F2429EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2429F0:
    ctx->pc = 0x7F2429F0u;
    ctx->downcount -= 16;
    // 7F2429F0: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2429F4:
    ctx->pc = 0x7F2429F4u;
    // 7F2429F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2429F8:
    ctx->pc = 0x7F2429F8u;
    // 7F2429F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2429FC:
    ctx->pc = 0x7F2429FCu;
    // 7F2429FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F242A00:
    ctx->pc = 0x7F242A00u;
    // 7F242A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242A04:
    ctx->pc = 0x7F242A04u;
    ctx->downcount -= 6;
    // 7F242A04: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242A08:
    ctx->pc = 0x7F242A08u;
    // 7F242A08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242A0C:
    ctx->pc = 0x7F242A0Cu;
    // 7F242A0C: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F242A10:
    ctx->pc = 0x7F242A10u;
    // 7F242A10: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F242A14:
    ctx->pc = 0x7F242A14u;
    // 7F242A14: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242A18:
    ctx->pc = 0x7F242A18u;
    // 7F242A18: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F242A1Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F242A1C:
    ctx->pc = 0x7F242A1Cu;
    ctx->downcount -= 5;
    // 7F242A1C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F242A20:
    ctx->pc = 0x7F242A20u;
    // 7F242A20: li      r4, 400
    ctx->gpr[4] = (u32)(s32)(400);

label_7F242A24:
    ctx->pc = 0x7F242A24u;
    // 7F242A24: stw     r3, -9700(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9700);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242A28:
    ctx->pc = 0x7F242A28u;
    // 7F242A28: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F242A2C:
    ctx->pc = 0x7F242A2Cu;
    // 7F242A2C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F242A30u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F242A30:
    ctx->pc = 0x7F242A30u;
    ctx->downcount -= 14;
    // 7F242A30: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242A34:
    ctx->pc = 0x7F242A34u;
    // 7F242A34: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242A38:
    ctx->pc = 0x7F242A38u;
    // 7F242A38: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242A3C:
    ctx->pc = 0x7F242A3Cu;
    // 7F242A3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242A40:
    ctx->pc = 0x7F242A40u;
    // 7F242A40: lfd     f1, 20040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242A40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242A44:
    ctx->pc = 0x7F242A44u;
    // 7F242A44: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242A48:
    ctx->pc = 0x7F242A48u;
    // 7F242A48: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242A4C:
    ctx->pc = 0x7F242A4Cu;
    // 7F242A4C: addi    r5, r3, -9704
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9704);

label_7F242A50:
    ctx->pc = 0x7F242A50u;
    // 7F242A50: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F242A54:
    ctx->pc = 0x7F242A54u;
    // 7F242A54: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_7F242A58:
    ctx->pc = 0x7F242A58u;
    // 7F242A58: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242A5C:
    ctx->pc = 0x7F242A5Cu;
    // 7F242A5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242A5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F242A60:
    ctx->pc = 0x7F242A60u;
    // 7F242A60: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F242A60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242A64:
    ctx->pc = 0x7F242A64u;
    // 7F242A64: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F242A68u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F242A68:
    ctx->pc = 0x7F242A68u;
    ctx->downcount -= 35;
    // 7F242A68: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242A6C:
    ctx->pc = 0x7F242A6Cu;
    // 7F242A6C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242A70:
    ctx->pc = 0x7F242A70u;
    // 7F242A70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242A74:
    ctx->pc = 0x7F242A74u;
    // 7F242A74: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242A78:
    ctx->pc = 0x7F242A78u;
    // 7F242A78: addi    r5, r4, 20040
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20040);

label_7F242A7C:
    ctx->pc = 0x7F242A7Cu;
    // 7F242A7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242A80:
    ctx->pc = 0x7F242A80u;
    // 7F242A80: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242A84:
    ctx->pc = 0x7F242A84u;
    // 7F242A84: addi    r4, r3, 20052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20052);

label_7F242A88:
    ctx->pc = 0x7F242A88u;
    // 7F242A88: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F242A88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242A8C:
    ctx->pc = 0x7F242A8Cu;
    // 7F242A8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242A90:
    ctx->pc = 0x7F242A90u;
    // 7F242A90: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242A94:
    ctx->pc = 0x7F242A94u;
    // 7F242A94: addi    r5, r3, -9708
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9708);

label_7F242A98:
    ctx->pc = 0x7F242A98u;
    // 7F242A98: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242A98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242A9C:
    ctx->pc = 0x7F242A9Cu;
    // 7F242A9C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F242AA0:
    ctx->pc = 0x7F242AA0u;
    // 7F242AA0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F242AA0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F242AA4:
    ctx->pc = 0x7F242AA4u;
    // 7F242AA4: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_7F242AA8:
    ctx->pc = 0x7F242AA8u;
    // 7F242AA8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242AA8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F242AAC:
    ctx->pc = 0x7F242AACu;
    // 7F242AAC: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F242AACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242AB0:
    ctx->pc = 0x7F242AB0u;
    // 7F242AB0: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F242AB4u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F242AB4:
    ctx->pc = 0x7F242AB4u;
    ctx->downcount -= 14;
    // 7F242AB4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242AB8:
    ctx->pc = 0x7F242AB8u;
    // 7F242AB8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242ABC:
    ctx->pc = 0x7F242ABCu;
    // 7F242ABC: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242AC0:
    ctx->pc = 0x7F242AC0u;
    // 7F242AC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242AC4:
    ctx->pc = 0x7F242AC4u;
    // 7F242AC4: lfd     f1, 20040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242AC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242AC8:
    ctx->pc = 0x7F242AC8u;
    // 7F242AC8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242ACC:
    ctx->pc = 0x7F242ACCu;
    // 7F242ACC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242AD0:
    ctx->pc = 0x7F242AD0u;
    // 7F242AD0: addi    r5, r3, -9712
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9712);

label_7F242AD4:
    ctx->pc = 0x7F242AD4u;
    // 7F242AD4: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F242AD8:
    ctx->pc = 0x7F242AD8u;
    // 7F242AD8: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_7F242ADC:
    ctx->pc = 0x7F242ADCu;
    // 7F242ADC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242AE0:
    ctx->pc = 0x7F242AE0u;
    // 7F242AE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242AE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F242AE4:
    ctx->pc = 0x7F242AE4u;
    // 7F242AE4: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F242AE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242AE8:
    ctx->pc = 0x7F242AE8u;
    // 7F242AE8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F242AECu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F242AEC:
    ctx->pc = 0x7F242AECu;
    ctx->downcount -= 4;
    // 7F242AEC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F242AF0:
    ctx->pc = 0x7F242AF0u;
    // 7F242AF0: stw     r3, -9716(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9716);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242AF4:
    ctx->pc = 0x7F242AF4u;
    // 7F242AF4: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F242AF8:
    ctx->pc = 0x7F242AF8u;
    // 7F242AF8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F242AFCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F242AFC:
    ctx->pc = 0x7F242AFCu;
    ctx->downcount -= 1;
    // 7F242AFC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F242B00u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F242B00:
    ctx->pc = 0x7F242B00u;
    ctx->downcount -= 11;
    // 7F242B00: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242B04:
    ctx->pc = 0x7F242B04u;
    // 7F242B04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242B08:
    ctx->pc = 0x7F242B08u;
    // 7F242B08: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242B0C:
    ctx->pc = 0x7F242B0Cu;
    // 7F242B0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242B10:
    ctx->pc = 0x7F242B10u;
    // 7F242B10: lfd     f1, 20040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242B10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B14:
    ctx->pc = 0x7F242B14u;
    // 7F242B14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242B18:
    ctx->pc = 0x7F242B18u;
    // 7F242B18: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242B1C:
    ctx->pc = 0x7F242B1Cu;
    // 7F242B1C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B20:
    ctx->pc = 0x7F242B20u;
    // 7F242B20: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242B20u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F242B24:
    ctx->pc = 0x7F242B24u;
    // 7F242B24: stfs     f0, -9732(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242B24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9732);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242B28:
    ctx->pc = 0x7F242B28u;
    // 7F242B28: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F242B2Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F242B2C:
    ctx->pc = 0x7F242B2Cu;
    ctx->downcount -= 12;
    // 7F242B2C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242B30:
    ctx->pc = 0x7F242B30u;
    // 7F242B30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242B34:
    ctx->pc = 0x7F242B34u;
    // 7F242B34: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242B38:
    ctx->pc = 0x7F242B38u;
    // 7F242B38: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242B3C:
    ctx->pc = 0x7F242B3Cu;
    // 7F242B3C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242B40:
    ctx->pc = 0x7F242B40u;
    // 7F242B40: lfd     f1, 20040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242B40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B44:
    ctx->pc = 0x7F242B44u;
    // 7F242B44: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242B48:
    ctx->pc = 0x7F242B48u;
    // 7F242B48: addi    r3, r3, -9732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9732);

label_7F242B4C:
    ctx->pc = 0x7F242B4Cu;
    // 7F242B4C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B50:
    ctx->pc = 0x7F242B50u;
    // 7F242B50: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242B50u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F242B54:
    ctx->pc = 0x7F242B54u;
    // 7F242B54: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242B54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242B58:
    ctx->pc = 0x7F242B58u;
    // 7F242B58: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F242B5Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F242B5C:
    ctx->pc = 0x7F242B5Cu;
    ctx->downcount -= 16;
    // 7F242B5C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F242B60:
    ctx->pc = 0x7F242B60u;
    // 7F242B60: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F242B64:
    ctx->pc = 0x7F242B64u;
    // 7F242B64: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242B68:
    ctx->pc = 0x7F242B68u;
    // 7F242B68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242B6C:
    ctx->pc = 0x7F242B6Cu;
    // 7F242B6C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F242B70:
    ctx->pc = 0x7F242B70u;
    // 7F242B70: lfd     f1, 20040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242B70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20040);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B74:
    ctx->pc = 0x7F242B74u;
    // 7F242B74: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242B78:
    ctx->pc = 0x7F242B78u;
    // 7F242B78: addi    r3, r3, -9732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9732);

label_7F242B7C:
    ctx->pc = 0x7F242B7Cu;
    // 7F242B7C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F242B80:
    ctx->pc = 0x7F242B80u;
    // 7F242B80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242B80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F242B84:
    ctx->pc = 0x7F242B84u;
    // 7F242B84: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242B84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242B88:
    ctx->pc = 0x7F242B88u;
    // 7F242B88: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242B8C:
    ctx->pc = 0x7F242B8Cu;
    // 7F242B8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242B90:
    ctx->pc = 0x7F242B90u;
    // 7F242B90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F242B94:
    ctx->pc = 0x7F242B94u;
    // 7F242B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242B98:
    ctx->pc = 0x7F242B98u;
    ctx->downcount -= 5;
    // 7F242B98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242B9C:
    ctx->pc = 0x7F242B9Cu;
    // 7F242B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242BA0:
    ctx->pc = 0x7F242BA0u;
    // 7F242BA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242BA4:
    ctx->pc = 0x7F242BA4u;
    // 7F242BA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242BA8:
    ctx->pc = 0x7F242BA8u;
    // 7F242BA8: bl      0x7F242BBC
    {
            ctx->lr = 0x7F242BACu;
            goto label_7F242BBC;
    }

label_7F242BAC:
    ctx->pc = 0x7F242BACu;
    ctx->downcount -= 5;
    // 7F242BAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242BB0:
    ctx->pc = 0x7F242BB0u;
    // 7F242BB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242BB4:
    ctx->pc = 0x7F242BB4u;
    // 7F242BB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242BB8:
    ctx->pc = 0x7F242BB8u;
    // 7F242BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242BBC:
    ctx->pc = 0x7F242BBCu;
    ctx->downcount -= 10;
    // 7F242BBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242BC0:
    ctx->pc = 0x7F242BC0u;
    // 7F242BC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242BC4:
    ctx->pc = 0x7F242BC4u;
    // 7F242BC4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F242BC8:
    ctx->pc = 0x7F242BC8u;
    // 7F242BC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242BCC:
    ctx->pc = 0x7F242BCCu;
    // 7F242BCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F242BD0:
    ctx->pc = 0x7F242BD0u;
    // 7F242BD0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242BD4:
    ctx->pc = 0x7F242BD4u;
    // 7F242BD4: addi    r0, r4, 11352
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(11352);

label_7F242BD8:
    ctx->pc = 0x7F242BD8u;
    // 7F242BD8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242BDC:
    ctx->pc = 0x7F242BDCu;
    // 7F242BDC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F242BE0:
    ctx->pc = 0x7F242BE0u;
    // 7F242BE0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F242BE4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F242BE4:
    ctx->pc = 0x7F242BE4u;
    ctx->downcount -= 3;
    // 7F242BE4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F242BE8:
    ctx->pc = 0x7F242BE8u;
    // 7F242BE8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F242BEC:
    ctx->pc = 0x7F242BECu;
    // 7F242BEC: bl      0x7F291828
    {
            ctx->lr = 0x7F242BF0u;
            ctx->pc = 0x7F291828u;
            return;
    }

label_7F242BF0:
    ctx->pc = 0x7F242BF0u;
    ctx->downcount -= 3;
    // 7F242BF0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F242BF4:
    ctx->pc = 0x7F242BF4u;
    // 7F242BF4: addi    r3, r3, 11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11368);

label_7F242BF8:
    ctx->pc = 0x7F242BF8u;
    // 7F242BF8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F242BFCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F242BFC:
    ctx->pc = 0x7F242BFCu;
    ctx->downcount -= 3;
    // 7F242BFC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F242C00:
    ctx->pc = 0x7F242C00u;
    // 7F242C00: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F242C04:
    ctx->pc = 0x7F242C04u;
    // 7F242C04: bl      0x7F291828
    {
            ctx->lr = 0x7F242C08u;
            ctx->pc = 0x7F291828u;
            return;
    }

label_7F242C08:
    ctx->pc = 0x7F242C08u;
    ctx->downcount -= 5;
    // 7F242C08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242C0C:
    ctx->pc = 0x7F242C0Cu;
    // 7F242C0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242C10:
    ctx->pc = 0x7F242C10u;
    // 7F242C10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242C14:
    ctx->pc = 0x7F242C14u;
    // 7F242C14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242C18:
    ctx->pc = 0x7F242C18u;
    ctx->downcount -= 5;
    // 7F242C18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242C1C:
    ctx->pc = 0x7F242C1Cu;
    // 7F242C1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242C20:
    ctx->pc = 0x7F242C20u;
    // 7F242C20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F242C24:
    ctx->pc = 0x7F242C24u;
    // 7F242C24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242C28:
    ctx->pc = 0x7F242C28u;
    // 7F242C28: bl      0x7F242BBC
    {
            ctx->lr = 0x7F242C2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242BBCu;
                return;
            }
            goto label_7F242BBC;
    }

label_7F242C2C:
    ctx->pc = 0x7F242C2Cu;
    ctx->downcount -= 5;
    // 7F242C2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242C30:
    ctx->pc = 0x7F242C30u;
    // 7F242C30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242C34:
    ctx->pc = 0x7F242C34u;
    // 7F242C34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242C38:
    ctx->pc = 0x7F242C38u;
    // 7F242C38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242C3C:
    ctx->pc = 0x7F242C3Cu;
    ctx->downcount -= 26;
    // 7F242C3C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242C40:
    ctx->pc = 0x7F242C40u;
    // 7F242C40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242C44:
    ctx->pc = 0x7F242C44u;
    // 7F242C44: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242C48:
    ctx->pc = 0x7F242C48u;
    // 7F242C48: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F242C4C:
    ctx->pc = 0x7F242C4Cu;
    // 7F242C4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242C50:
    ctx->pc = 0x7F242C50u;
    // 7F242C50: addi    r6, r4, 20216
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20216);

label_7F242C54:
    ctx->pc = 0x7F242C54u;
    // 7F242C54: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F242C54u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F242C58:
    ctx->pc = 0x7F242C58u;
    // 7F242C58: addi    r6, r5, 20220
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20220);

label_7F242C5C:
    ctx->pc = 0x7F242C5Cu;
    // 7F242C5C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F242C60:
    ctx->pc = 0x7F242C60u;
    // 7F242C60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242C64:
    ctx->pc = 0x7F242C64u;
    // 7F242C64: addi    r5, r4, 20224
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20224);

label_7F242C68:
    ctx->pc = 0x7F242C68u;
    // 7F242C68: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F242C68u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242C6C:
    ctx->pc = 0x7F242C6Cu;
    // 7F242C6C: stfs     f2, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242C6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242C70:
    ctx->pc = 0x7F242C70u;
    // 7F242C70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242C74:
    ctx->pc = 0x7F242C74u;
    // 7F242C74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242C78:
    ctx->pc = 0x7F242C78u;
    // 7F242C78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F242C78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F242C7C:
    ctx->pc = 0x7F242C7Cu;
    // 7F242C7C: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242C7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242C80:
    ctx->pc = 0x7F242C80u;
    // 7F242C80: addi    r4, r3, 20228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20228);

label_7F242C84:
    ctx->pc = 0x7F242C84u;
    // 7F242C84: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F242C88:
    ctx->pc = 0x7F242C88u;
    // 7F242C88: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242C88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242C8C:
    ctx->pc = 0x7F242C8Cu;
    // 7F242C8C: stfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242C8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242C90:
    ctx->pc = 0x7F242C90u;
    // 7F242C90: addi    r3, r3, 11352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11352);

label_7F242C94:
    ctx->pc = 0x7F242C94u;
    // 7F242C94: stfs     f2, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242C94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F242C98:
    ctx->pc = 0x7F242C98u;
    // 7F242C98: stfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242C98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F242C9C:
    ctx->pc = 0x7F242C9Cu;
    // 7F242C9C: stfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F242C9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242CA0:
    ctx->pc = 0x7F242CA0u;
    // 7F242CA0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F242CA4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F242CA4:
    ctx->pc = 0x7F242CA4u;
    ctx->downcount -= 15;
    // 7F242CA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F242CA8:
    ctx->pc = 0x7F242CA8u;
    // 7F242CA8: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F242CAC:
    ctx->pc = 0x7F242CACu;
    // 7F242CAC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242CB0:
    ctx->pc = 0x7F242CB0u;
    // 7F242CB0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242CB4:
    ctx->pc = 0x7F242CB4u;
    // 7F242CB4: lfs     f1, 20232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242CB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F242CB8:
    ctx->pc = 0x7F242CB8u;
    // 7F242CB8: addi    r5, r5, 22156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22156);

label_7F242CBC:
    ctx->pc = 0x7F242CBCu;
    // 7F242CBC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242CC0:
    ctx->pc = 0x7F242CC0u;
    // 7F242CC0: addi    r7, r31, 48
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(48);

label_7F242CC4:
    ctx->pc = 0x7F242CC4u;
    // 7F242CC4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F242CC8:
    ctx->pc = 0x7F242CC8u;
    // 7F242CC8: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F242CCC:
    ctx->pc = 0x7F242CCCu;
    // 7F242CCC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242CD0:
    ctx->pc = 0x7F242CD0u;
    // 7F242CD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F242CD4:
    ctx->pc = 0x7F242CD4u;
    // 7F242CD4: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F242CD8:
    ctx->pc = 0x7F242CD8u;
    // 7F242CD8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F242CDC:
    ctx->pc = 0x7F242CDCu;
    // 7F242CDC: bl      0x7F303188
    {
            ctx->lr = 0x7F242CE0u;
            ctx->pc = 0x7F303188u;
            return;
    }

label_7F242CE0:
    ctx->pc = 0x7F242CE0u;
    ctx->downcount -= 4;
    // 7F242CE0: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242CE4:
    ctx->pc = 0x7F242CE4u;
    // 7F242CE4: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F242CE8:
    ctx->pc = 0x7F242CE8u;
    // 7F242CE8: cmplwi  r4, 0x0000
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

label_7F242CEC:
    ctx->pc = 0x7F242CECu;
    // 7F242CEC: bc    4, 2, 0x7F242CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242CF8;
        }
    }

label_7F242CF0:
    ctx->pc = 0x7F242CF0u;
    ctx->downcount -= 2;
    // 7F242CF0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242CF4:
    ctx->pc = 0x7F242CF4u;
    // 7F242CF4: b       0x7F242D84
    {
            goto label_7F242D84;
    }

label_7F242CF8:
    ctx->pc = 0x7F242CF8u;
    ctx->downcount -= 2;
    // 7F242CF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242CFC:
    ctx->pc = 0x7F242CFCu;
    // 7F242CFC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F242D00u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F242D00:
    ctx->pc = 0x7F242D00u;
    ctx->downcount -= 3;
    // 7F242D00: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F242D04:
    ctx->pc = 0x7F242D04u;
    // 7F242D04: addi    r3, r3, 11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11368);

label_7F242D08:
    ctx->pc = 0x7F242D08u;
    // 7F242D08: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F242D0Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F242D0C:
    ctx->pc = 0x7F242D0Cu;
    ctx->downcount -= 15;
    // 7F242D0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F242D10:
    ctx->pc = 0x7F242D10u;
    // 7F242D10: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F242D14:
    ctx->pc = 0x7F242D14u;
    // 7F242D14: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242D18:
    ctx->pc = 0x7F242D18u;
    // 7F242D18: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242D1C:
    ctx->pc = 0x7F242D1Cu;
    // 7F242D1C: lfs     f1, 20232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242D1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F242D20:
    ctx->pc = 0x7F242D20u;
    // 7F242D20: addi    r5, r5, 22156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22156);

label_7F242D24:
    ctx->pc = 0x7F242D24u;
    // 7F242D24: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242D28:
    ctx->pc = 0x7F242D28u;
    // 7F242D28: addi    r7, r31, 64
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(64);

label_7F242D2C:
    ctx->pc = 0x7F242D2Cu;
    // 7F242D2C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F242D30:
    ctx->pc = 0x7F242D30u;
    // 7F242D30: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F242D34:
    ctx->pc = 0x7F242D34u;
    // 7F242D34: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242D38:
    ctx->pc = 0x7F242D38u;
    // 7F242D38: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F242D3C:
    ctx->pc = 0x7F242D3Cu;
    // 7F242D3C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F242D40:
    ctx->pc = 0x7F242D40u;
    // 7F242D40: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F242D44:
    ctx->pc = 0x7F242D44u;
    // 7F242D44: bl      0x7F303188
    {
            ctx->lr = 0x7F242D48u;
            ctx->pc = 0x7F303188u;
            return;
    }

label_7F242D48:
    ctx->pc = 0x7F242D48u;
    ctx->downcount -= 4;
    // 7F242D48: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F242D4C:
    ctx->pc = 0x7F242D4Cu;
    // 7F242D4C: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F242D50:
    ctx->pc = 0x7F242D50u;
    // 7F242D50: cmplwi  r4, 0x0000
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

label_7F242D54:
    ctx->pc = 0x7F242D54u;
    // 7F242D54: bc    4, 2, 0x7F242D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242D60;
        }
    }

label_7F242D58:
    ctx->pc = 0x7F242D58u;
    ctx->downcount -= 2;
    // 7F242D58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F242D5C:
    ctx->pc = 0x7F242D5Cu;
    // 7F242D5C: b       0x7F242D84
    {
            goto label_7F242D84;
    }

label_7F242D60:
    ctx->pc = 0x7F242D60u;
    ctx->downcount -= 2;
    // 7F242D60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242D64:
    ctx->pc = 0x7F242D64u;
    // 7F242D64: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F242D68u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F242D68:
    ctx->pc = 0x7F242D68u;
    ctx->downcount -= 7;
    // 7F242D68: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F242D6C:
    ctx->pc = 0x7F242D6Cu;
    // 7F242D6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242D70:
    ctx->pc = 0x7F242D70u;
    // 7F242D70: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F242D74:
    ctx->pc = 0x7F242D74u;
    // 7F242D74: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F242D78:
    ctx->pc = 0x7F242D78u;
    // 7F242D78: lha     r0, 5566(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5566);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F242D7C:
    ctx->pc = 0x7F242D7Cu;
    // 7F242D7C: ori     r0, r0, 0x0120
    ctx->gpr[0] = ctx->gpr[0] | 0x0120u;

label_7F242D80:
    ctx->pc = 0x7F242D80u;
    // 7F242D80: sth     r0, 5566(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5566);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F242D84:
    ctx->pc = 0x7F242D84u;
    ctx->downcount -= 6;
    // 7F242D84: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242D88:
    ctx->pc = 0x7F242D88u;
    // 7F242D88: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F242D8C:
    ctx->pc = 0x7F242D8Cu;
    // 7F242D8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242D90:
    ctx->pc = 0x7F242D90u;
    // 7F242D90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F242D94:
    ctx->pc = 0x7F242D94u;
    // 7F242D94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242D98:
    ctx->pc = 0x7F242D98u;
    ctx->downcount -= 9;
    // 7F242D98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242D9C:
    ctx->pc = 0x7F242D9Cu;
    // 7F242D9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242DA0:
    ctx->pc = 0x7F242DA0u;
    // 7F242DA0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F242DA4:
    ctx->pc = 0x7F242DA4u;
    // 7F242DA4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F242DA8:
    ctx->pc = 0x7F242DA8u;
    // 7F242DA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242DAC:
    ctx->pc = 0x7F242DACu;
    // 7F242DAC: li      r5, 88
    ctx->gpr[5] = (u32)(s32)(88);

label_7F242DB0:
    ctx->pc = 0x7F242DB0u;
    // 7F242DB0: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F242DB4:
    ctx->pc = 0x7F242DB4u;
    // 7F242DB4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F242DB8:
    ctx->pc = 0x7F242DB8u;
    // 7F242DB8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F242DBCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F242DBC:
    ctx->pc = 0x7F242DBCu;
    ctx->downcount -= 2;
    // 7F242DBC: or.   r31, r3, r3
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

label_7F242DC0:
    ctx->pc = 0x7F242DC0u;
    // 7F242DC0: bc    4, 2, 0x7F242DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242DCC;
        }
    }

label_7F242DC4:
    ctx->pc = 0x7F242DC4u;
    ctx->downcount -= 2;
    // 7F242DC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242DC8:
    ctx->pc = 0x7F242DC8u;
    // 7F242DC8: b       0x7F242E2C
    {
            goto label_7F242E2C;
    }

label_7F242DCC:
    ctx->pc = 0x7F242DCCu;
    ctx->downcount -= 5;
    // 7F242DCC: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F242DD0:
    ctx->pc = 0x7F242DD0u;
    // 7F242DD0: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F242DD4:
    ctx->pc = 0x7F242DD4u;
    // 7F242DD4: addi    r4, r4, 11160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11160);

label_7F242DD8:
    ctx->pc = 0x7F242DD8u;
    // 7F242DD8: addi    r5, r5, 11288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11288);

label_7F242DDC:
    ctx->pc = 0x7F242DDCu;
    // 7F242DDC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F242DE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F242DE0:
    ctx->pc = 0x7F242DE0u;
    ctx->downcount -= 12;
    // 7F242DE0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242DE4:
    ctx->pc = 0x7F242DE4u;
    // 7F242DE4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F242DE8:
    ctx->pc = 0x7F242DE8u;
    // 7F242DE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F242DEC:
    ctx->pc = 0x7F242DECu;
    // 7F242DEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242DF0:
    ctx->pc = 0x7F242DF0u;
    // 7F242DF0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F242DF4:
    ctx->pc = 0x7F242DF4u;
    // 7F242DF4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F242DF8:
    ctx->pc = 0x7F242DF8u;
    // 7F242DF8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F242DFC:
    ctx->pc = 0x7F242DFCu;
    // 7F242DFC: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242E00:
    ctx->pc = 0x7F242E00u;
    // 7F242E00: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242E04:
    ctx->pc = 0x7F242E04u;
    // 7F242E04: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F242E08:
    ctx->pc = 0x7F242E08u;
    // 7F242E08: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242E0C:
    ctx->pc = 0x7F242E0Cu;
    // 7F242E0C: bl      0x7F242C3C
    {
            ctx->lr = 0x7F242E10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242C3Cu;
                return;
            }
            goto label_7F242C3C;
    }

label_7F242E10:
    ctx->pc = 0x7F242E10u;
    ctx->downcount -= 2;
    // 7F242E10: cmpwi   r3, 0
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

label_7F242E14:
    ctx->pc = 0x7F242E14u;
    // 7F242E14: bc    4, 0, 0x7F242E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242E28;
        }
    }

label_7F242E18:
    ctx->pc = 0x7F242E18u;
    ctx->downcount -= 2;
    // 7F242E18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242E1C:
    ctx->pc = 0x7F242E1Cu;
    // 7F242E1C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F242E20u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F242E20:
    ctx->pc = 0x7F242E20u;
    ctx->downcount -= 2;
    // 7F242E20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242E24:
    ctx->pc = 0x7F242E24u;
    // 7F242E24: b       0x7F242E2C
    {
            goto label_7F242E2C;
    }

label_7F242E28:
    ctx->pc = 0x7F242E28u;
    ctx->downcount -= 1;
    // 7F242E28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F242E2C:
    ctx->pc = 0x7F242E2Cu;
    ctx->downcount -= 6;
    // 7F242E2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242E30:
    ctx->pc = 0x7F242E30u;
    // 7F242E30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F242E34:
    ctx->pc = 0x7F242E34u;
    // 7F242E34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242E38:
    ctx->pc = 0x7F242E38u;
    // 7F242E38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242E3C:
    ctx->pc = 0x7F242E3Cu;
    // 7F242E3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242E40:
    ctx->pc = 0x7F242E40u;
    ctx->downcount -= 28;
    // 7F242E40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242E44:
    ctx->pc = 0x7F242E44u;
    // 7F242E44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242E48:
    ctx->pc = 0x7F242E48u;
    // 7F242E48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242E4C:
    ctx->pc = 0x7F242E4Cu;
    // 7F242E4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242E50:
    ctx->pc = 0x7F242E50u;
    // 7F242E50: lfs     f9, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

label_7F242E54:
    ctx->pc = 0x7F242E54u;
    // 7F242E54: lfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242E58:
    ctx->pc = 0x7F242E58u;
    // 7F242E58: lfs     f2, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F242E5C:
    ctx->pc = 0x7F242E5Cu;
    // 7F242E5C: lfs     f10, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

label_7F242E60:
    ctx->pc = 0x7F242E60u;
    // 7F242E60: fsubs   f1, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x7F242E60u)) return;
    ppc_fsubs(ctx, 1, 0, 9);

label_7F242E64:
    ctx->pc = 0x7F242E64u;
    // 7F242E64: lfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F242E68:
    ctx->pc = 0x7F242E68u;
    // 7F242E68: fsubs   f5, f9, f2
    if (!ppc_fp_available_inline(ctx, 0x7F242E68u)) return;
    ppc_fsubs(ctx, 5, 9, 2);

label_7F242E6C:
    ctx->pc = 0x7F242E6Cu;
    // 7F242E6C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242E70:
    ctx->pc = 0x7F242E70u;
    // 7F242E70: fsubs   f7, f2, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242E70u)) return;
    ppc_fsubs(ctx, 7, 2, 10);

label_7F242E74:
    ctx->pc = 0x7F242E74u;
    // 7F242E74: lfs     f8, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F242E78:
    ctx->pc = 0x7F242E78u;
    // 7F242E78: fsubs   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242E78u)) return;
    ppc_fsubs(ctx, 2, 4, 0);

label_7F242E7C:
    ctx->pc = 0x7F242E7Cu;
    // 7F242E7C: lfs     f3, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242E7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F242E80:
    ctx->pc = 0x7F242E80u;
    // 7F242E80: fsubs   f6, f8, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242E80u)) return;
    ppc_fsubs(ctx, 6, 8, 0);

label_7F242E84:
    ctx->pc = 0x7F242E84u;
    // 7F242E84: lfs     f0, 20240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242E84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242E88:
    ctx->pc = 0x7F242E88u;
    // 7F242E88: fsubs   f8, f4, f8
    if (!ppc_fp_available_inline(ctx, 0x7F242E88u)) return;
    ppc_fsubs(ctx, 8, 4, 8);

label_7F242E8C:
    ctx->pc = 0x7F242E8Cu;
    // 7F242E8C: fsubs   f4, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F242E8Cu)) return;
    ppc_fsubs(ctx, 4, 3, 4);

label_7F242E90:
    ctx->pc = 0x7F242E90u;
    // 7F242E90: fmuls   f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x7F242E90u)) return;
    ppc_fmuls(ctx, 5, 6, 5);

label_7F242E94:
    ctx->pc = 0x7F242E94u;
    // 7F242E94: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242E94u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F242E98:
    ctx->pc = 0x7F242E98u;
    // 7F242E98: fsubs   f3, f9, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242E98u)) return;
    ppc_fsubs(ctx, 3, 9, 10);

label_7F242E9C:
    ctx->pc = 0x7F242E9Cu;
    // 7F242E9C: fmsubs f2, f8, f7, f5
    if (!ppc_fp_available_inline(ctx, 0x7F242E9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[8], ctx->fpr[7], ctx->fpr[5], true, true, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F242EA0:
    ctx->pc = 0x7F242EA0u;
    // 7F242EA0: fmsubs f1, f4, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242EA0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[1], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F242EA4:
    ctx->pc = 0x7F242EA4u;
    // 7F242EA4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F242EA4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F242EA8:
    ctx->pc = 0x7F242EA8u;
    // 7F242EA8: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242EA8u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F242EAC:
    ctx->pc = 0x7F242EACu;
    // 7F242EAC: bl      0x7F242EC0
    {
            ctx->lr = 0x7F242EB0u;
            goto label_7F242EC0;
    }

label_7F242EB0:
    ctx->pc = 0x7F242EB0u;
    ctx->downcount -= 5;
    // 7F242EB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242EB4:
    ctx->pc = 0x7F242EB4u;
    // 7F242EB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F242EB8:
    ctx->pc = 0x7F242EB8u;
    // 7F242EB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242EBC:
    ctx->pc = 0x7F242EBCu;
    // 7F242EBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242EC0:
    ctx->pc = 0x7F242EC0u;
    ctx->downcount -= 8;
    // 7F242EC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242EC4:
    ctx->pc = 0x7F242EC4u;
    // 7F242EC4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242EC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F242EC8:
    ctx->pc = 0x7F242EC8u;
    // 7F242EC8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242ECC:
    ctx->pc = 0x7F242ECCu;
    // 7F242ECC: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F242ED0:
    ctx->pc = 0x7F242ED0u;
    // 7F242ED0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242ED4:
    ctx->pc = 0x7F242ED4u;
    // 7F242ED4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F242ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F242ED8:
    ctx->pc = 0x7F242ED8u;
    // 7F242ED8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F242EDC:
    ctx->pc = 0x7F242EDCu;
    // 7F242EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242EE0:
    ctx->pc = 0x7F242EE0u;
    ctx->downcount -= 14;
    // 7F242EE0: lfs     f7, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242EE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F242EE4:
    ctx->pc = 0x7F242EE4u;
    // 7F242EE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F242EE8:
    ctx->pc = 0x7F242EE8u;
    // 7F242EE8: lfs     f8, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242EE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F242EEC:
    ctx->pc = 0x7F242EECu;
    // 7F242EEC: lfs     f10, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242EECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

label_7F242EF0:
    ctx->pc = 0x7F242EF0u;
    // 7F242EF0: fsubs   f0, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x7F242EF0u)) return;
    ppc_fsubs(ctx, 0, 1, 7);

label_7F242EF4:
    ctx->pc = 0x7F242EF4u;
    // 7F242EF4: lfs     f9, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242EF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

label_7F242EF8:
    ctx->pc = 0x7F242EF8u;
    // 7F242EF8: fsubs   f3, f2, f8
    if (!ppc_fp_available_inline(ctx, 0x7F242EF8u)) return;
    ppc_fsubs(ctx, 3, 2, 8);

label_7F242EFC:
    ctx->pc = 0x7F242EFCu;
    // 7F242EFC: fsubs   f6, f10, f8
    if (!ppc_fp_available_inline(ctx, 0x7F242EFCu)) return;
    ppc_fsubs(ctx, 6, 10, 8);

label_7F242F00:
    ctx->pc = 0x7F242F00u;
    // 7F242F00: lfs     f4, 20244(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F242F00u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F242F04:
    ctx->pc = 0x7F242F04u;
    // 7F242F04: fsubs   f5, f9, f7
    if (!ppc_fp_available_inline(ctx, 0x7F242F04u)) return;
    ppc_fsubs(ctx, 5, 9, 7);

label_7F242F08:
    ctx->pc = 0x7F242F08u;
    // 7F242F08: fmuls   f0, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x7F242F08u)) return;
    ppc_fmuls(ctx, 0, 0, 6);

label_7F242F0C:
    ctx->pc = 0x7F242F0Cu;
    // 7F242F0C: fmsubs f0, f3, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242F0Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[5], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F242F10:
    ctx->pc = 0x7F242F10u;
    // 7F242F10: fcmpo   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F242F10u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], true);

label_7F242F14:
    ctx->pc = 0x7F242F14u;
    // 7F242F14: bc    4, 0, 0x7F242F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242F20;
        }
    }

label_7F242F18:
    ctx->pc = 0x7F242F18u;
    ctx->downcount -= 2;
    // 7F242F18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242F1C:
    ctx->pc = 0x7F242F1Cu;
    // 7F242F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242F20:
    ctx->pc = 0x7F242F20u;
    ctx->downcount -= 10;
    // 7F242F20: lfs     f6, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242F20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F242F24:
    ctx->pc = 0x7F242F24u;
    // 7F242F24: fsubs   f0, f1, f9
    if (!ppc_fp_available_inline(ctx, 0x7F242F24u)) return;
    ppc_fsubs(ctx, 0, 1, 9);

label_7F242F28:
    ctx->pc = 0x7F242F28u;
    // 7F242F28: lfs     f5, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242F28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F242F2C:
    ctx->pc = 0x7F242F2Cu;
    // 7F242F2C: fsubs   f3, f2, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242F2Cu)) return;
    ppc_fsubs(ctx, 3, 2, 10);

label_7F242F30:
    ctx->pc = 0x7F242F30u;
    // 7F242F30: fsubs   f10, f6, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242F30u)) return;
    ppc_fsubs(ctx, 10, 6, 10);

label_7F242F34:
    ctx->pc = 0x7F242F34u;
    // 7F242F34: fsubs   f9, f5, f9
    if (!ppc_fp_available_inline(ctx, 0x7F242F34u)) return;
    ppc_fsubs(ctx, 9, 5, 9);

label_7F242F38:
    ctx->pc = 0x7F242F38u;
    // 7F242F38: fmuls   f0, f0, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242F38u)) return;
    ppc_fmuls(ctx, 0, 0, 10);

label_7F242F3C:
    ctx->pc = 0x7F242F3Cu;
    // 7F242F3C: fmsubs f0, f3, f9, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242F3Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[9], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F242F40:
    ctx->pc = 0x7F242F40u;
    // 7F242F40: fcmpo   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F242F40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], true);

label_7F242F44:
    ctx->pc = 0x7F242F44u;
    // 7F242F44: bc    4, 0, 0x7F242F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242F50;
        }
    }

label_7F242F48:
    ctx->pc = 0x7F242F48u;
    ctx->downcount -= 2;
    // 7F242F48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242F4C:
    ctx->pc = 0x7F242F4Cu;
    // 7F242F4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242F50:
    ctx->pc = 0x7F242F50u;
    ctx->downcount -= 10;
    // 7F242F50: lfs     f10, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242F50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

label_7F242F54:
    ctx->pc = 0x7F242F54u;
    // 7F242F54: fsubs   f0, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F242F54u)) return;
    ppc_fsubs(ctx, 0, 1, 5);

label_7F242F58:
    ctx->pc = 0x7F242F58u;
    // 7F242F58: lfs     f9, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242F58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

label_7F242F5C:
    ctx->pc = 0x7F242F5Cu;
    // 7F242F5C: fsubs   f3, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x7F242F5Cu)) return;
    ppc_fsubs(ctx, 3, 2, 6);

label_7F242F60:
    ctx->pc = 0x7F242F60u;
    // 7F242F60: fsubs   f6, f10, f6
    if (!ppc_fp_available_inline(ctx, 0x7F242F60u)) return;
    ppc_fsubs(ctx, 6, 10, 6);

label_7F242F64:
    ctx->pc = 0x7F242F64u;
    // 7F242F64: fsubs   f5, f9, f5
    if (!ppc_fp_available_inline(ctx, 0x7F242F64u)) return;
    ppc_fsubs(ctx, 5, 9, 5);

label_7F242F68:
    ctx->pc = 0x7F242F68u;
    // 7F242F68: fmuls   f0, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x7F242F68u)) return;
    ppc_fmuls(ctx, 0, 0, 6);

label_7F242F6C:
    ctx->pc = 0x7F242F6Cu;
    // 7F242F6C: fmsubs f0, f3, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242F6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[5], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F242F70:
    ctx->pc = 0x7F242F70u;
    // 7F242F70: fcmpo   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F242F70u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], true);

label_7F242F74:
    ctx->pc = 0x7F242F74u;
    // 7F242F74: bc    4, 0, 0x7F242F80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F242F80;
        }
    }

label_7F242F78:
    ctx->pc = 0x7F242F78u;
    ctx->downcount -= 2;
    // 7F242F78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F242F7C:
    ctx->pc = 0x7F242F7Cu;
    // 7F242F7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242F80:
    ctx->pc = 0x7F242F80u;
    ctx->downcount -= 12;
    // 7F242F80: fsubs   f1, f1, f9
    if (!ppc_fp_available_inline(ctx, 0x7F242F80u)) return;
    ppc_fsubs(ctx, 1, 1, 9);

label_7F242F84:
    ctx->pc = 0x7F242F84u;
    // 7F242F84: fsubs   f0, f8, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242F84u)) return;
    ppc_fsubs(ctx, 0, 8, 10);

label_7F242F88:
    ctx->pc = 0x7F242F88u;
    // 7F242F88: fsubs   f3, f2, f10
    if (!ppc_fp_available_inline(ctx, 0x7F242F88u)) return;
    ppc_fsubs(ctx, 3, 2, 10);

label_7F242F8C:
    ctx->pc = 0x7F242F8Cu;
    // 7F242F8C: fsubs   f2, f7, f9
    if (!ppc_fp_available_inline(ctx, 0x7F242F8Cu)) return;
    ppc_fsubs(ctx, 2, 7, 9);

label_7F242F90:
    ctx->pc = 0x7F242F90u;
    // 7F242F90: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242F90u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F242F94:
    ctx->pc = 0x7F242F94u;
    // 7F242F94: fmsubs f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242F94u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F242F98:
    ctx->pc = 0x7F242F98u;
    // 7F242F98: fcmpo   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F242F98u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], true);

label_7F242F9C:
    ctx->pc = 0x7F242F9Cu;
    // 7F242F9C: mfcr    r0
    ctx->gpr[0] = ctx->cr;

label_7F242FA0:
    ctx->pc = 0x7F242FA0u;
    // 7F242FA0: rlwinm r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F242FA4:
    ctx->pc = 0x7F242FA4u;
    // 7F242FA4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F242FA8:
    ctx->pc = 0x7F242FA8u;
    // 7F242FA8: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F242FAC:
    ctx->pc = 0x7F242FACu;
    // 7F242FAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F242FB0:
    ctx->pc = 0x7F242FB0u;
    ctx->downcount -= 26;
    // 7F242FB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F242FB4:
    ctx->pc = 0x7F242FB4u;
    // 7F242FB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F242FB8:
    ctx->pc = 0x7F242FB8u;
    // 7F242FB8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F242FBC:
    ctx->pc = 0x7F242FBCu;
    // 7F242FBC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F242FC0:
    ctx->pc = 0x7F242FC0u;
    // 7F242FC0: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F242FC4:
    ctx->pc = 0x7F242FC4u;
    // 7F242FC4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F242FC8:
    ctx->pc = 0x7F242FC8u;
    // 7F242FC8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F242FCC:
    ctx->pc = 0x7F242FCCu;
    // 7F242FCC: lha     r0, 198(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(198);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F242FD0:
    ctx->pc = 0x7F242FD0u;
    // 7F242FD0: lwz     r5, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F242FD4:
    ctx->pc = 0x7F242FD4u;
    // 7F242FD4: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F242FD8:
    ctx->pc = 0x7F242FD8u;
    // 7F242FD8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F242FDC:
    ctx->pc = 0x7F242FDCu;
    // 7F242FDC: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F242FE0:
    ctx->pc = 0x7F242FE0u;
    // 7F242FE0: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F242FE4:
    ctx->pc = 0x7F242FE4u;
    // 7F242FE4: bl      0x7F3CC414
    {
            ctx->lr = 0x7F242FE8u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F242FE8:
    ctx->pc = 0x7F242FE8u;
    ctx->downcount -= 3;
    // 7F242FE8: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F242FEC:
    ctx->pc = 0x7F242FECu;
    // 7F242FEC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F242FF0:
    ctx->pc = 0x7F242FF0u;
    // 7F242FF0: bl      0x7F3CC608
    {
            ctx->lr = 0x7F242FF4u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F242FF4:
    ctx->pc = 0x7F242FF4u;
    ctx->downcount -= 4;
    // 7F242FF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F242FF8:
    ctx->pc = 0x7F242FF8u;
    // 7F242FF8: lfs     f0, 20248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F242FF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F242FFC:
    ctx->pc = 0x7F242FFCu;
    // 7F242FFC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F242FFCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243000:
    ctx->pc = 0x7F243000u;
    // 7F243000: bc    4, 1, 0x7F24300C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24300C;
        }
    }

label_7F243004:
    ctx->pc = 0x7F243004u;
    ctx->downcount -= 2;
    // 7F243004: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F243008:
    ctx->pc = 0x7F243008u;
    // 7F243008: sth     r0, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24300C:
    ctx->pc = 0x7F24300Cu;
    ctx->downcount -= 16;
    // 7F24300C: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F243010:
    ctx->pc = 0x7F243010u;
    // 7F243010: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243014:
    ctx->pc = 0x7F243014u;
    // 7F243014: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243018:
    ctx->pc = 0x7F243018u;
    // 7F243018: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24301C:
    ctx->pc = 0x7F24301Cu;
    // 7F24301C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243020:
    ctx->pc = 0x7F243020u;
    ctx->downcount -= 29;
    // 7F243020: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243024:
    ctx->pc = 0x7F243024u;
    // 7F243024: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243028:
    ctx->pc = 0x7F243028u;
    // 7F243028: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F24302C:
    ctx->pc = 0x7F24302Cu;
    // 7F24302C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F243030:
    ctx->pc = 0x7F243030u;
    // 7F243030: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243034:
    ctx->pc = 0x7F243034u;
    // 7F243034: addi    r7, r5, -8652
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-8652);

label_7F243038:
    ctx->pc = 0x7F243038u;
    // 7F243038: lis     r6, 32548
    ctx->gpr[6] = ((u32)(s32)(32548) << 16);

label_7F24303C:
    ctx->pc = 0x7F24303Cu;
    // 7F24303C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F243040:
    ctx->pc = 0x7F243040u;
    // 7F243040: stmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F243044:
    ctx->pc = 0x7F243044u;
    // 7F243044: addi    r27, r4, 12832
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F243048:
    ctx->pc = 0x7F243048u;
    // 7F243048: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24304C:
    ctx->pc = 0x7F24304Cu;
    // 7F24304C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243050:
    ctx->pc = 0x7F243050u;
    // 7F243050: addi    r28, r6, 12208
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(12208);

label_7F243054:
    ctx->pc = 0x7F243054u;
    // 7F243054: addi    r29, r5, -5848
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(-5848);

label_7F243058:
    ctx->pc = 0x7F243058u;
    // 7F243058: addi    r30, r4, -6188
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-6188);

label_7F24305C:
    ctx->pc = 0x7F24305Cu;
    // 7F24305C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F243060:
    ctx->pc = 0x7F243060u;
    // 7F243060: lis     r26, 1285
    ctx->gpr[26] = ((u32)(s32)(1285) << 16);

label_7F243064:
    ctx->pc = 0x7F243064u;
    // 7F243064: lwz     r25, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F243068:
    ctx->pc = 0x7F243068u;
    // 7F243068: b       0x7F2430F4
    {
            goto label_7F2430F4;
    }

label_7F24306C:
    ctx->pc = 0x7F24306Cu;
    ctx->downcount -= 10;
    // 7F24306C: lha     r0, 198(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(198);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F243070:
    // 7F243070: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F243074:
    ctx->pc = 0x7F243074u;
    // 7F243074: lwz     r5, 192(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F243078:
    // 7F243078: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F24307C:
    ctx->pc = 0x7F24307Cu;
    // 7F24307C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243080:
    // 7F243080: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F243084:
    // 7F243084: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F243088:
    // 7F243088: bl      0x7F3CC414
    {
            ctx->lr = 0x7F24308Cu;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F24308C:
    ctx->downcount -= 9;
    // 7F24308C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F243090:
    // 7F243090: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F243094:
    ctx->pc = 0x7F243094u;
    // 7F243094: sth     r0, 196(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243098:
    // 7F243098: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24309C:
    // 7F24309C: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2430A0:
    // 7F2430A0: addi    r4, r26, 4112
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(4112);

label_7F2430A4:
    // 7F2430A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2430A8:
    // 7F2430A8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2430AC:
    // 7F2430AC: bl      0x7F014788
    {
            ctx->lr = 0x7F2430B0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2430B0:
    ctx->downcount -= 4;
    // 7F2430B0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2430B4:
    // 7F2430B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2430B8:
    // 7F2430B8: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F2430BC:
    // 7F2430BC: bl      0x7F014B60
    {
            ctx->lr = 0x7F2430C0u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F2430C0:
    ctx->downcount -= 4;
    // 7F2430C0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2430C4:
    // 7F2430C4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2430C8:
    // 7F2430C8: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2430CC:
    // 7F2430CC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2430D0u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2430D0:
    ctx->pc = 0x7F2430D0u;
    ctx->downcount -= 5;
    // 7F2430D0: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2430D4:
    // 7F2430D4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2430D8:
    ctx->pc = 0x7F2430D8u;
    // 7F2430D8: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2430DC:
    // 7F2430DC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2430E0:
    // 7F2430E0: bl      0x7F014A08
    {
            ctx->lr = 0x7F2430E4u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F2430E4:
    ctx->downcount -= 2;
    // 7F2430E4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2430E8:
    // 7F2430E8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2430ECu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2430EC:
    ctx->downcount -= 2;
    // 7F2430EC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F2430F0:
    // 7F2430F0: addi    r25, r25, 208
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(208);

label_7F2430F4:
    ctx->pc = 0x7F2430F4u;
    ctx->downcount -= 3;
    // 7F2430F4: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2430F8:
    // 7F2430F8: cmpw    r24, r0
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

label_7F2430FC:
    // 7F2430FC: bc    12, 0, 0x7F24306C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24306Cu;
                return;
            }
            goto label_7F24306C;
        }
    }

label_7F243100:
    ctx->pc = 0x7F243100u;
    ctx->downcount -= 16;
    // 7F243100: lmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F243104:
    ctx->pc = 0x7F243104u;
    // 7F243104: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243108:
    ctx->pc = 0x7F243108u;
    // 7F243108: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24310C:
    ctx->pc = 0x7F24310Cu;
    // 7F24310C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F243110:
    ctx->pc = 0x7F243110u;
    // 7F243110: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243114:
    ctx->pc = 0x7F243114u;
    ctx->downcount -= 5;
    // 7F243114: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243118:
    ctx->pc = 0x7F243118u;
    // 7F243118: lfs     f0, 112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F243118u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24311C:
    ctx->pc = 0x7F24311Cu;
    // 7F24311C: lfs     f1, 20252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24311Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243120:
    ctx->pc = 0x7F243120u;
    // 7F243120: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243120u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F243124:
    ctx->pc = 0x7F243124u;
    // 7F243124: bc    12, 1, 0x7F243140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243140;
        }
    }

label_7F243128:
    ctx->pc = 0x7F243128u;
    ctx->downcount -= 3;
    // 7F243128: lfs     f0, 116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F243128u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24312C:
    ctx->pc = 0x7F24312Cu;
    // 7F24312C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24312Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F243130:
    ctx->pc = 0x7F243130u;
    // 7F243130: bc    12, 1, 0x7F243140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243140;
        }
    }

label_7F243134:
    ctx->pc = 0x7F243134u;
    ctx->downcount -= 3;
    // 7F243134: lfs     f0, 120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F243134u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243138:
    ctx->pc = 0x7F243138u;
    // 7F243138: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243138u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F24313C:
    ctx->pc = 0x7F24313Cu;
    // 7F24313C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243140:
    ctx->pc = 0x7F243140u;
    ctx->downcount -= 3;
    // 7F243140: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F243144:
    ctx->pc = 0x7F243144u;
    // 7F243144: stw     r0, 304(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243148:
    ctx->pc = 0x7F243148u;
    // 7F243148: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F24314C:
    ctx->pc = 0x7F24314Cu;
    ctx->downcount -= 29;
    // 7F24314C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243150:
    ctx->pc = 0x7F243150u;
    // 7F243150: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243154:
    ctx->pc = 0x7F243154u;
    // 7F243154: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F243158:
    ctx->pc = 0x7F243158u;
    // 7F243158: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F24315C:
    ctx->pc = 0x7F24315Cu;
    // 7F24315C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243160:
    ctx->pc = 0x7F243160u;
    // 7F243160: addi    r7, r5, -8656
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-8656);

label_7F243164:
    ctx->pc = 0x7F243164u;
    // 7F243164: lis     r6, 32548
    ctx->gpr[6] = ((u32)(s32)(32548) << 16);

label_7F243168:
    ctx->pc = 0x7F243168u;
    // 7F243168: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F24316C:
    ctx->pc = 0x7F24316Cu;
    // 7F24316C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F243170:
    ctx->pc = 0x7F243170u;
    // 7F243170: addi    r28, r4, 12832
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F243174:
    ctx->pc = 0x7F243174u;
    // 7F243174: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F243178:
    ctx->pc = 0x7F243178u;
    // 7F243178: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24317C:
    ctx->pc = 0x7F24317Cu;
    // 7F24317C: addi    r29, r6, 12564
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(12564);

label_7F243180:
    ctx->pc = 0x7F243180u;
    // 7F243180: addi    r30, r5, -5848
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-5848);

label_7F243184:
    ctx->pc = 0x7F243184u;
    // 7F243184: addi    r31, r4, -6192
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-6192);

label_7F243188:
    ctx->pc = 0x7F243188u;
    // 7F243188: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F24318C:
    ctx->pc = 0x7F24318Cu;
    // 7F24318C: lis     r27, 1285
    ctx->gpr[27] = ((u32)(s32)(1285) << 16);

label_7F243190:
    ctx->pc = 0x7F243190u;
    // 7F243190: lwz     r26, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F243194:
    ctx->pc = 0x7F243194u;
    // 7F243194: b       0x7F243204
    {
            goto label_7F243204;
    }

label_7F243198:
    ctx->downcount -= 10;
    // 7F243198: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24319C:
    // 7F24319C: addi    r25, r26, 96
    ctx->gpr[25] = ctx->gpr[26] + (u32)(s32)(96);

label_7F2431A0:
    ctx->pc = 0x7F2431A0u;
    // 7F2431A0: stw     r0, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2431A4:
    // 7F2431A4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2431A8:
    // 7F2431A8: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2431AC:
    // 7F2431AC: or   r8, r28, r28
    {
        ctx->gpr[8] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2431B0:
    // 7F2431B0: addi    r4, r27, 4112
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(4112);

label_7F2431B4:
    // 7F2431B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2431B8:
    // 7F2431B8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2431BC:
    // 7F2431BC: bl      0x7F014788
    {
            ctx->lr = 0x7F2431C0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2431C0:
    ctx->downcount -= 4;
    // 7F2431C0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2431C4:
    // 7F2431C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2431C8:
    // 7F2431C8: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F2431CC:
    // 7F2431CC: bl      0x7F014B60
    {
            ctx->lr = 0x7F2431D0u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F2431D0:
    ctx->downcount -= 4;
    // 7F2431D0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2431D4:
    // 7F2431D4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2431D8:
    // 7F2431D8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2431DC:
    // 7F2431DC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2431E0u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2431E0:
    ctx->pc = 0x7F2431E0u;
    ctx->downcount -= 5;
    // 7F2431E0: lwz     r4, 112(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2431E4:
    // 7F2431E4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2431E8:
    ctx->pc = 0x7F2431E8u;
    // 7F2431E8: lwz     r6, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2431EC:
    // 7F2431EC: addi    r5, r26, 80
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(80);

label_7F2431F0:
    // 7F2431F0: bl      0x7F014A08
    {
            ctx->lr = 0x7F2431F4u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F2431F4:
    ctx->downcount -= 2;
    // 7F2431F4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2431F8:
    // 7F2431F8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2431FCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2431FC:
    ctx->downcount -= 2;
    // 7F2431FC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F243200:
    // 7F243200: addi    r26, r26, 320
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(320);

label_7F243204:
    ctx->pc = 0x7F243204u;
    ctx->downcount -= 3;
    // 7F243204: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243208:
    // 7F243208: cmpw    r24, r0
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

label_7F24320C:
    // 7F24320C: bc    12, 0, 0x7F243198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243198u;
                return;
            }
            goto label_7F243198;
        }
    }

label_7F243210:
    ctx->pc = 0x7F243210u;
    ctx->downcount -= 16;
    // 7F243210: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F243214:
    ctx->pc = 0x7F243214u;
    // 7F243214: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243218:
    ctx->pc = 0x7F243218u;
    // 7F243218: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24321C:
    ctx->pc = 0x7F24321Cu;
    // 7F24321C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F243220:
    ctx->pc = 0x7F243220u;
    // 7F243220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243224:
    ctx->pc = 0x7F243224u;
    ctx->downcount -= 37;
    // 7F243224: stwu     r1, -416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-416);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243228:
    ctx->pc = 0x7F243228u;
    // 7F243228: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24322C:
    ctx->pc = 0x7F24322Cu;
    // 7F24322C: stw     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243230:
    ctx->pc = 0x7F243230u;
    // 7F243230: stfd     f31, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F243234:
    ctx->pc = 0x7F243234u;
    // 7F243234: psq_st   f31, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F243234u);
        if (ctx->exception) return;
    }

label_7F243238:
    ctx->pc = 0x7F243238u;
    // 7F243238: stfd     f30, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F24323C:
    ctx->pc = 0x7F24323Cu;
    // 7F24323C: psq_st   f30, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24323Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F24323Cu);
        if (ctx->exception) return;
    }

label_7F243240:
    ctx->pc = 0x7F243240u;
    // 7F243240: stfd     f29, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F243244:
    ctx->pc = 0x7F243244u;
    // 7F243244: psq_st   f29, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F243244u);
        if (ctx->exception) return;
    }

label_7F243248:
    ctx->pc = 0x7F243248u;
    // 7F243248: stfd     f28, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F24324C:
    ctx->pc = 0x7F24324Cu;
    // 7F24324C: psq_st   f28, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24324Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F24324Cu);
        if (ctx->exception) return;
    }

label_7F243250:
    ctx->pc = 0x7F243250u;
    // 7F243250: stfd     f27, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F243254:
    ctx->pc = 0x7F243254u;
    // 7F243254: psq_st   f27, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F243254u);
        if (ctx->exception) return;
    }

label_7F243258:
    ctx->pc = 0x7F243258u;
    // 7F243258: stfd     f26, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243258u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F24325C:
    ctx->pc = 0x7F24325Cu;
    // 7F24325C: psq_st   f26, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24325Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F24325Cu);
        if (ctx->exception) return;
    }

label_7F243260:
    ctx->pc = 0x7F243260u;
    // 7F243260: stfd     f25, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F243264:
    ctx->pc = 0x7F243264u;
    // 7F243264: psq_st   f25, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F243264u);
        if (ctx->exception) return;
    }

label_7F243268:
    ctx->pc = 0x7F243268u;
    // 7F243268: stfd     f24, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F24326C:
    ctx->pc = 0x7F24326Cu;
    // 7F24326C: psq_st   f24, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24326Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F24326Cu);
        if (ctx->exception) return;
    }

label_7F243270:
    ctx->pc = 0x7F243270u;
    // 7F243270: stfd     f23, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

label_7F243274:
    ctx->pc = 0x7F243274u;
    // 7F243274: psq_st   f23, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x7F243274u);
        if (ctx->exception) return;
    }

label_7F243278:
    ctx->pc = 0x7F243278u;
    // 7F243278: stfd     f22, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243278u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[22]));
    }

label_7F24327C:
    ctx->pc = 0x7F24327Cu;
    // 7F24327C: psq_st   f22, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24327Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 22u, ea, false, 0u, false, 0x7F24327Cu);
        if (ctx->exception) return;
    }

label_7F243280:
    ctx->pc = 0x7F243280u;
    // 7F243280: stmw     r19, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F243284:
    ctx->pc = 0x7F243284u;
    // 7F243284: cmpwi   r4, 0
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

label_7F243288:
    ctx->pc = 0x7F243288u;
    // 7F243288: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24328C:
    ctx->pc = 0x7F24328Cu;
    // 7F24328C: bc    4, 2, 0x7F2432A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2432A0;
        }
    }

label_7F243290:
    ctx->pc = 0x7F243290u;
    ctx->downcount -= 1;
    // 7F243290: bl      0x7F243020
    {
            ctx->lr = 0x7F243294u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243020u;
                return;
            }
            goto label_7F243020;
    }

label_7F243294:
    ctx->pc = 0x7F243294u;
    ctx->downcount -= 2;
    // 7F243294: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243298:
    ctx->pc = 0x7F243298u;
    // 7F243298: bl      0x7F24314C
    {
            ctx->lr = 0x7F24329Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24314Cu;
                return;
            }
            goto label_7F24314C;
    }

label_7F24329C:
    ctx->pc = 0x7F24329Cu;
    ctx->downcount -= 1;
    // 7F24329C: b       0x7F243A50
    {
            goto label_7F243A50;
    }

label_7F2432A0:
    ctx->pc = 0x7F2432A0u;
    ctx->downcount -= 2;
    // 7F2432A0: cmpwi   r4, 1
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

label_7F2432A4:
    ctx->pc = 0x7F2432A4u;
    // 7F2432A4: bc    4, 2, 0x7F243A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243A50;
        }
    }

label_7F2432A8:
    ctx->pc = 0x7F2432A8u;
    ctx->downcount -= 4;
    // 7F2432A8: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2432AC:
    ctx->pc = 0x7F2432ACu;
    // 7F2432AC: addi    r5, r1, 116
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(116);

label_7F2432B0:
    ctx->pc = 0x7F2432B0u;
    // 7F2432B0: addi    r4, r3, 16
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2432B4:
    ctx->pc = 0x7F2432B4u;
    // 7F2432B4: bl      0x800261D8
    {
            ctx->lr = 0x7F2432B8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2432B8:
    ctx->pc = 0x7F2432B8u;
    ctx->downcount -= 25;
    // 7F2432B8: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2432BC:
    ctx->pc = 0x7F2432BCu;
    // 7F2432BC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2432C0:
    ctx->pc = 0x7F2432C0u;
    // 7F2432C0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2432C4:
    ctx->pc = 0x7F2432C4u;
    // 7F2432C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2432C8:
    ctx->pc = 0x7F2432C8u;
    // 7F2432C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2432CC:
    ctx->pc = 0x7F2432CCu;
    // 7F2432CC: addi    r11, r7, -8656
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(-8656);

label_7F2432D0:
    ctx->pc = 0x7F2432D0u;
    // 7F2432D0: addi    r10, r6, 20244
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(20244);

label_7F2432D4:
    ctx->pc = 0x7F2432D4u;
    // 7F2432D4: addi    r9, r5, 20280
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(20280);

label_7F2432D8:
    ctx->pc = 0x7F2432D8u;
    // 7F2432D8: addi    r6, r4, 20288
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20288);

label_7F2432DC:
    ctx->pc = 0x7F2432DCu;
    // 7F2432DC: addi    r5, r3, 20272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20272);

label_7F2432E0:
    ctx->pc = 0x7F2432E0u;
    // 7F2432E0: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2432E4:
    ctx->pc = 0x7F2432E4u;
    // 7F2432E4: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2432E8:
    ctx->pc = 0x7F2432E8u;
    // 7F2432E8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2432EC:
    ctx->pc = 0x7F2432ECu;
    // 7F2432EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2432F0:
    ctx->pc = 0x7F2432F0u;
    // 7F2432F0: lwz     r22, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F2432F4:
    ctx->pc = 0x7F2432F4u;
    // 7F2432F4: addi    r28, r8, -8640
    ctx->gpr[28] = ctx->gpr[8] + (u32)(s32)(-8640);

label_7F2432F8:
    ctx->pc = 0x7F2432F8u;
    // 7F2432F8: lfs     f30, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F2432F8u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2432FC:
    ctx->pc = 0x7F2432FCu;
    // 7F2432FC: addi    r29, r7, -8644
    ctx->gpr[29] = ctx->gpr[7] + (u32)(s32)(-8644);

label_7F243300:
    ctx->pc = 0x7F243300u;
    // 7F243300: lfd     f25, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F243300u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243304:
    ctx->pc = 0x7F243304u;
    // 7F243304: addi    r30, r4, -8648
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-8648);

label_7F243308:
    ctx->pc = 0x7F243308u;
    // 7F243308: lfs     f23, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F243308u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[23] = value;
        ctx->ps1[23] = value;
    }

label_7F24330C:
    ctx->pc = 0x7F24330Cu;
    // 7F24330C: addi    r20, r3, -6192
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(-6192);

label_7F243310:
    ctx->pc = 0x7F243310u;
    // 7F243310: lfs     f22, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F243310u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[22] = value;
        ctx->ps1[22] = value;
    }

label_7F243314:
    ctx->pc = 0x7F243314u;
    // 7F243314: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F243318:
    ctx->pc = 0x7F243318u;
    // 7F243318: b       0x7F243654
    {
            goto label_7F243654;
    }

label_7F24331C:
    ctx->downcount -= 3;
    // 7F24331C: addi    r3, r22, 64
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(64);

label_7F243320:
    // 7F243320: addi    r4, r1, 116
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(116);

label_7F243324:
    // 7F243324: bl      0x800260DC
    {
            ctx->lr = 0x7F243328u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F243328:
    ctx->pc = 0x7F243328u;
    ctx->downcount -= 4;
    // 7F243328: fcmpo   cr0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F243328u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[30], true);

label_7F24332C:
    // 7F24332C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F243330:
    // 7F243330: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F243334:
    // 7F243334: bc    12, 2, 0x7F2435F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2435F4;
        }
    }

label_7F243338:
    ctx->downcount -= 2;
    // 7F243338: addi    r3, r22, 64
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(64);

label_7F24333C:
    // 7F24333C: bl      0x7F3CC708
    {
            ctx->lr = 0x7F243340u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F243340:
    ctx->downcount -= 3;
    // 7F243340: extsh r21, r3
    {
        ctx->gpr[21] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F243344:
    // 7F243344: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_7F243348:
    // 7F243348: bl      0x7F3CC708
    {
            ctx->lr = 0x7F24334Cu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F24334C:
    ctx->downcount -= 3;
    // 7F24334C: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F243350:
    // 7F243350: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F243354:
    // 7F243354: bl      0x7F3CC924
    {
            ctx->lr = 0x7F243358u;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F243358:
    ctx->pc = 0x7F243358u;
    ctx->downcount -= 3;
    // 7F243358: lwz     r0, 300(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24335C:
    // 7F24335C: cmpw    r3, r0
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

label_7F243360:
    // 7F243360: bc    12, 1, 0x7F2435F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2435F4;
        }
    }

label_7F243364:
    ctx->downcount -= 2;
    // 7F243364: addi    r3, r22, 64
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(64);

label_7F243368:
    // 7F243368: bl      0x7F3CC764
    {
            ctx->lr = 0x7F24336Cu;
            ctx->pc = 0x7F3CC764u;
            return;
    }

label_7F24336C:
    ctx->downcount -= 3;
    // 7F24336C: extsh r21, r3
    {
        ctx->gpr[21] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F243370:
    // 7F243370: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_7F243374:
    // 7F243374: bl      0x7F3CC764
    {
            ctx->lr = 0x7F243378u;
            ctx->pc = 0x7F3CC764u;
            return;
    }

label_7F243378:
    ctx->downcount -= 3;
    // 7F243378: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F24337C:
    // 7F24337C: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F243380:
    // 7F243380: bl      0x7F3CC924
    {
            ctx->lr = 0x7F243384u;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F243384:
    ctx->pc = 0x7F243384u;
    ctx->downcount -= 3;
    // 7F243384: lwz     r0, 296(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243388:
    // 7F243388: cmpw    r3, r0
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

label_7F24338C:
    // 7F24338C: bc    12, 1, 0x7F2435F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2435F4;
        }
    }

label_7F243390:
    ctx->pc = 0x7F243390u;
    ctx->downcount -= 3;
    // 7F243390: lwz     r0, 304(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243394:
    // 7F243394: cmpwi   r0, 0
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

label_7F243398:
    // 7F243398: bc    4, 2, 0x7F2435F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2435F4;
        }
    }

label_7F24339C:
    ctx->downcount -= 4;
    // 7F24339C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F2433A0:
    // 7F2433A0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F2433A4:
    // 7F2433A4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2433A8:
    // 7F2433A8: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2433AC:
    ctx->downcount -= 7;
    // 7F2433AC: addi    r19, r1, 132
    ctx->gpr[19] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2433B0:
    // 7F2433B0: add   r25, r22, r21
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F2433B4:
    // 7F2433B4: add   r19, r19, r21
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F2433B8:
    // 7F2433B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2433BC:
    // 7F2433BC: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F2433C0:
    // 7F2433C0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2433C4:
    // 7F2433C4: bl      0x7F3B3CBC
    {
            ctx->lr = 0x7F2433C8u;
            ctx->pc = 0x7F3B3CBCu;
            return;
    }

label_7F2433C8:
    ctx->pc = 0x7F2433C8u;
    ctx->downcount -= 44;
    // 7F2433C8: lfs     f1, 0(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433C8u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2433CC:
    ctx->pc = 0x7F2433CCu;
    // 7F2433CC: lfs     f0, 12(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433CCu)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2433D0:
    ctx->pc = 0x7F2433D0u;
    // 7F2433D0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2433D0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F2433D4:
    ctx->pc = 0x7F2433D4u;
    // 7F2433D4: stfs     f0, 0(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433D4u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2433D8:
    ctx->pc = 0x7F2433D8u;
    // 7F2433D8: lfs     f1, 4(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433D8u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2433DC:
    ctx->pc = 0x7F2433DCu;
    // 7F2433DC: lfs     f0, 12(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433DCu)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2433E0:
    ctx->pc = 0x7F2433E0u;
    // 7F2433E0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2433E0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F2433E4:
    ctx->pc = 0x7F2433E4u;
    // 7F2433E4: stfs     f0, 4(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433E4u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2433E8:
    ctx->pc = 0x7F2433E8u;
    // 7F2433E8: lfs     f1, 8(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433E8u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2433EC:
    ctx->pc = 0x7F2433ECu;
    // 7F2433EC: lfs     f0, 12(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433ECu)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2433F0:
    ctx->pc = 0x7F2433F0u;
    // 7F2433F0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2433F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2433F4:
    // 7F2433F4: bc    4, 0, 0x7F243478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243478;
        }
    }

label_7F2433F8:
    ctx->pc = 0x7F2433F8u;
    ctx->downcount -= 2;
    // 7F2433F8: lfs     f1, 0(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F2433F8u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2433FC:
    // 7F2433FC: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243400u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243400:
    ctx->downcount -= 4;
    // 7F243400: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243404:
    ctx->pc = 0x7F243404u;
    // 7F243404: lfs     f0, 20256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F243404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243408:
    ctx->pc = 0x7F243408u;
    // 7F243408: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243408u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24340C:
    // 7F24340C: bc    4, 0, 0x7F243468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243468;
        }
    }

label_7F243410:
    ctx->pc = 0x7F243410u;
    ctx->downcount -= 2;
    // 7F243410: lfs     f1, 4(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F243410u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243414:
    // 7F243414: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243418u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243418:
    ctx->downcount -= 4;
    // 7F243418: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24341C:
    ctx->pc = 0x7F24341Cu;
    // 7F24341C: lfs     f0, 20256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24341Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243420:
    ctx->pc = 0x7F243420u;
    // 7F243420: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243420u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243424:
    // 7F243424: bc    4, 0, 0x7F243468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243468;
        }
    }

label_7F243428:
    ctx->downcount -= 10;
    // 7F243428: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F24342C:
    // 7F24342C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F243430:
    // 7F243430: addi    r5, r4, -27956
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-27956);

label_7F243434:
    ctx->pc = 0x7F243434u;
    // 7F243434: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243438:
    // 7F243438: addi    r7, r3, 4
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(4);

label_7F24343C:
    ctx->pc = 0x7F24343Cu;
    // 7F24343C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243440:
    // 7F243440: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F243444:
    // 7F243444: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F243448:
    // 7F243448: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24344C:
    // 7F24344C: bl      0x7F10B744
    {
            ctx->lr = 0x7F243450u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F243450:
    ctx->downcount -= 2;
    // 7F243450: cmpwi   r3, 0
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

label_7F243454:
    // 7F243454: bc    12, 2, 0x7F243484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243484;
        }
    }

label_7F243458:
    ctx->downcount -= 4;
    // 7F243458: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24345C:
    // 7F24345C: slw   r0, r0, r26
    {
        u32 sh = ctx->gpr[26] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F243460:
    // 7F243460: or   r23, r23, r0
    {
        ctx->gpr[23] = ctx->gpr[23] | ctx->gpr[0];
    }

label_7F243464:
    // 7F243464: b       0x7F243484
    {
            goto label_7F243484;
    }

label_7F243468:
    ctx->downcount -= 4;
    // 7F243468: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24346C:
    // 7F24346C: slw   r0, r0, r26
    {
        u32 sh = ctx->gpr[26] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F243470:
    // 7F243470: or   r24, r24, r0
    {
        ctx->gpr[24] = ctx->gpr[24] | ctx->gpr[0];
    }

label_7F243474:
    // 7F243474: b       0x7F243484
    {
            goto label_7F243484;
    }

label_7F243478:
    ctx->downcount -= 3;
    // 7F243478: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24347C:
    // 7F24347C: slw   r0, r0, r26
    {
        u32 sh = ctx->gpr[26] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F243480:
    // 7F243480: or   r24, r24, r0
    {
        ctx->gpr[24] = ctx->gpr[24] | ctx->gpr[0];
    }

label_7F243484:
    ctx->downcount -= 4;
    // 7F243484: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F243488:
    // 7F243488: addi    r21, r21, 16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(16);

label_7F24348C:
    // 7F24348C: cmpwi   r26, 4
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

label_7F243490:
    // 7F243490: bc    12, 0, 0x7F2433AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2433ACu;
                return;
            }
            goto label_7F2433AC;
        }
    }

label_7F243494:
    ctx->downcount -= 4;
    // 7F243494: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F243498:
    // 7F243498: addi    r4, r22, 80
    ctx->gpr[4] = ctx->gpr[22] + (u32)(s32)(80);

label_7F24349C:
    // 7F24349C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2434A0:
    // 7F2434A0: bl      0x7F3B3CBC
    {
            ctx->lr = 0x7F2434A4u;
            ctx->pc = 0x7F3B3CBCu;
            return;
    }

label_7F2434A4:
    ctx->pc = 0x7F2434A4u;
    ctx->downcount -= 41;
    // 7F2434A4: lfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2434A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2434A8:
    // 7F2434A8: cmpwi   r24, 15
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2434AC:
    ctx->pc = 0x7F2434ACu;
    // 7F2434AC: lfs     f2, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2434ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2434B0:
    ctx->pc = 0x7F2434B0u;
    // 7F2434B0: lfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2434B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2434B4:
    ctx->pc = 0x7F2434B4u;
    // 7F2434B4: fdivs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2434B4u)) return;
    ppc_fdivs(ctx, 1, 1, 2);

label_7F2434B8:
    ctx->pc = 0x7F2434B8u;
    // 7F2434B8: fdivs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2434B8u)) return;
    ppc_fdivs(ctx, 0, 0, 2);

label_7F2434BC:
    ctx->pc = 0x7F2434BCu;
    // 7F2434BC: stfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2434BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2434C0:
    ctx->pc = 0x7F2434C0u;
    // 7F2434C0: stfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2434C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2434C4:
    // 7F2434C4: bc    4, 2, 0x7F243550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243550;
        }
    }

label_7F2434C8:
    ctx->downcount -= 5;
    // 7F2434C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2434CC:
    // 7F2434CC: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2434D0:
    ctx->pc = 0x7F2434D0u;
    // 7F2434D0: lfs     f1, 20260(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2434D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2434D4:
    ctx->pc = 0x7F2434D4u;
    // 7F2434D4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2434D4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2434D8:
    // 7F2434D8: bl      0x7F242EE0
    {
            ctx->lr = 0x7F2434DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EE0u;
                return;
            }
            goto label_7F242EE0;
    }

label_7F2434DC:
    ctx->downcount -= 2;
    // 7F2434DC: cmpwi   r3, 0
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

label_7F2434E0:
    // 7F2434E0: bc    12, 2, 0x7F243550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243550;
        }
    }

label_7F2434E4:
    ctx->downcount -= 7;
    // 7F2434E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2434E8:
    // 7F2434E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2434EC:
    // 7F2434EC: addi    r5, r3, 20256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20256);

label_7F2434F0:
    ctx->pc = 0x7F2434F0u;
    // 7F2434F0: lfs     f2, 20260(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2434F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2434F4:
    ctx->pc = 0x7F2434F4u;
    // 7F2434F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2434F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2434F8:
    // 7F2434F8: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2434FC:
    // 7F2434FC: bl      0x7F242EE0
    {
            ctx->lr = 0x7F243500u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EE0u;
                return;
            }
            goto label_7F242EE0;
    }

label_7F243500:
    ctx->downcount -= 2;
    // 7F243500: cmpwi   r3, 0
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

label_7F243504:
    // 7F243504: bc    12, 2, 0x7F243550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243550;
        }
    }

label_7F243508:
    ctx->downcount -= 7;
    // 7F243508: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24350C:
    // 7F24350C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F243510:
    // 7F243510: addi    r5, r3, 20260
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20260);

label_7F243514:
    ctx->pc = 0x7F243514u;
    // 7F243514: lfs     f2, 20256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F243514u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F243518:
    ctx->pc = 0x7F243518u;
    // 7F243518: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F243518u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24351C:
    // 7F24351C: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F243520:
    // 7F243520: bl      0x7F242EE0
    {
            ctx->lr = 0x7F243524u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EE0u;
                return;
            }
            goto label_7F242EE0;
    }

label_7F243524:
    ctx->downcount -= 2;
    // 7F243524: cmpwi   r3, 0
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

label_7F243528:
    // 7F243528: bc    12, 2, 0x7F243550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243550;
        }
    }

label_7F24352C:
    ctx->downcount -= 5;
    // 7F24352C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F243530:
    // 7F243530: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F243534:
    ctx->pc = 0x7F243534u;
    // 7F243534: lfs     f1, 20256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F243534u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243538:
    ctx->pc = 0x7F243538u;
    // 7F243538: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243538u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F24353C:
    // 7F24353C: bl      0x7F242EE0
    {
            ctx->lr = 0x7F243540u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EE0u;
                return;
            }
            goto label_7F242EE0;
    }

label_7F243540:
    ctx->downcount -= 2;
    // 7F243540: cmpwi   r3, 0
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

label_7F243544:
    // 7F243544: bc    12, 2, 0x7F243550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243550;
        }
    }

label_7F243548:
    ctx->downcount -= 2;
    // 7F243548: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_7F24354C:
    // 7F24354C: b       0x7F2435F4
    {
            goto label_7F2435F4;
    }

label_7F243550:
    ctx->downcount -= 2;
    // 7F243550: cmpwi   r24, 0
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

label_7F243554:
    // 7F243554: bc    12, 2, 0x7F2435A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2435A8;
        }
    }

label_7F243558:
    ctx->pc = 0x7F243558u;
    ctx->downcount -= 4;
    // 7F243558: lfs     f1, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24355C:
    ctx->pc = 0x7F24355Cu;
    // 7F24355C: lfs     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24355Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243560:
    ctx->pc = 0x7F243560u;
    // 7F243560: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243560u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243564:
    // 7F243564: bc    12, 1, 0x7F243598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243598;
        }
    }

label_7F243568:
    ctx->pc = 0x7F243568u;
    ctx->downcount -= 2;
    // 7F243568: lfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24356C:
    // 7F24356C: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243570u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243570:
    ctx->downcount -= 4;
    // 7F243570: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243574:
    ctx->pc = 0x7F243574u;
    // 7F243574: lfs     f0, 20264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F243574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243578:
    ctx->pc = 0x7F243578u;
    // 7F243578: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243578u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24357C:
    // 7F24357C: bc    12, 1, 0x7F243598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243598;
        }
    }

label_7F243580:
    ctx->pc = 0x7F243580u;
    ctx->downcount -= 2;
    // 7F243580: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243580u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243584:
    // 7F243584: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243588u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243588:
    ctx->downcount -= 4;
    // 7F243588: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24358C:
    ctx->pc = 0x7F24358Cu;
    // 7F24358C: lfs     f0, 20264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24358Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243590:
    ctx->pc = 0x7F243590u;
    // 7F243590: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243590u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243594:
    // 7F243594: bc    4, 1, 0x7F2435A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2435A0;
        }
    }

label_7F243598:
    ctx->downcount -= 2;
    // 7F243598: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F24359C:
    // 7F24359C: b       0x7F2435F4
    {
            goto label_7F2435F4;
    }

label_7F2435A0:
    ctx->downcount -= 2;
    // 7F2435A0: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_7F2435A4:
    // 7F2435A4: b       0x7F2435F4
    {
            goto label_7F2435F4;
    }

label_7F2435A8:
    ctx->downcount -= 2;
    // 7F2435A8: cmpwi   r23, 0
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

label_7F2435AC:
    // 7F2435AC: bc    12, 2, 0x7F2435B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2435B8;
        }
    }

label_7F2435B0:
    ctx->downcount -= 2;
    // 7F2435B0: li      r25, 2
    ctx->gpr[25] = (u32)(s32)(2);

label_7F2435B4:
    // 7F2435B4: b       0x7F2435F4
    {
            goto label_7F2435F4;
    }

label_7F2435B8:
    ctx->downcount -= 2;
    // 7F2435B8: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2435BC:
    // 7F2435BC: bl      0x7F242E40
    {
            ctx->lr = 0x7F2435C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242E40u;
                return;
            }
            goto label_7F242E40;
    }

label_7F2435C0:
    ctx->downcount -= 10;
    // 7F2435C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2435C4:
    ctx->pc = 0x7F2435C4u;
    // 7F2435C4: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2435C4u)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F2435C8:
    ctx->pc = 0x7F2435C8u;
    // 7F2435C8: lfs     f0, 20272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2435C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2435CC:
    // 7F2435CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2435D0:
    ctx->pc = 0x7F2435D0u;
    // 7F2435D0: lfs     f1, 20268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2435D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2435D4:
    ctx->pc = 0x7F2435D4u;
    // 7F2435D4: fmuls   f0, f24, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2435D4u)) return;
    ppc_fmuls(ctx, 0, 24, 0);

label_7F2435D8:
    ctx->pc = 0x7F2435D8u;
    // 7F2435D8: lfs     f2, 288(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F2435D8u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2435DC:
    ctx->pc = 0x7F2435DCu;
    // 7F2435DC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2435DCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2435E0:
    ctx->pc = 0x7F2435E0u;
    // 7F2435E0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2435E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2435E4:
    // 7F2435E4: bc    4, 1, 0x7F2435F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2435F0;
        }
    }

label_7F2435E8:
    ctx->downcount -= 2;
    // 7F2435E8: li      r25, 3
    ctx->gpr[25] = (u32)(s32)(3);

label_7F2435EC:
    // 7F2435EC: b       0x7F2435F4
    {
            goto label_7F2435F4;
    }

label_7F2435F0:
    ctx->downcount -= 1;
    // 7F2435F0: li      r25, 4
    ctx->gpr[25] = (u32)(s32)(4);

label_7F2435F4:
    ctx->pc = 0x7F2435F4u;
    ctx->downcount -= 14;
    // 7F2435F4: lfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2435F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2435F8:
    ctx->pc = 0x7F2435F8u;
    // 7F2435F8: fmuls   f0, f24, f22
    if (!ppc_fp_available_inline(ctx, 0x7F2435F8u)) return;
    ppc_fmuls(ctx, 0, 24, 22);

label_7F2435FC:
    ctx->pc = 0x7F2435FCu;
    // 7F2435FC: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2435FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243600:
    ctx->pc = 0x7F243600u;
    // 7F243600: fmul   f2, f25, f2
    if (!ppc_fp_available_inline(ctx, 0x7F243600u)) return;
    ppc_fmul(ctx, 2, 25, 2);

label_7F243604:
    ctx->pc = 0x7F243604u;
    // 7F243604: fmul   f1, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243604u)) return;
    ppc_fmul(ctx, 1, 25, 1);

label_7F243608:
    ctx->pc = 0x7F243608u;
    // 7F243608: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F243608u)) return;
    ppc_frsp(ctx, 2, 2);

label_7F24360C:
    ctx->pc = 0x7F24360Cu;
    // 7F24360C: fmuls   f0, f23, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24360Cu)) return;
    ppc_fmuls(ctx, 0, 23, 0);

label_7F243610:
    ctx->pc = 0x7F243610u;
    // 7F243610: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243610u)) return;
    ppc_frsp(ctx, 1, 1);

label_7F243614:
    ctx->pc = 0x7F243614u;
    // 7F243614: stfs     f2, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F243614u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F243618:
    ctx->pc = 0x7F243618u;
    // 7F243618: stfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F243618u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24361C:
    ctx->pc = 0x7F24361Cu;
    // 7F24361C: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F24361Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243620:
    ctx->pc = 0x7F243620u;
    // 7F243620: lwz     r0, 292(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243624:
    // 7F243624: cmpwi   r0, 0
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

label_7F243628:
    // 7F243628: bc    12, 2, 0x7F24364C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24364C;
        }
    }

label_7F24362C:
    ctx->downcount -= 8;
    // 7F24362C: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F243630:
    // 7F243630: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F243634:
    ctx->pc = 0x7F243634u;
    // 7F243634: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F243638:
    // 7F243638: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F24363C:
    ctx->pc = 0x7F24363Cu;
    // 7F24363C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243640:
    ctx->pc = 0x7F243640u;
    // 7F243640: stw     r25, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F243644:
    ctx->pc = 0x7F243644u;
    // 7F243644: lwz     r3, 292(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243648:
    // 7F243648: bl      0x7F01FA88
    {
            ctx->lr = 0x7F24364Cu;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F24364C:
    ctx->downcount -= 2;
    // 7F24364C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F243650:
    // 7F243650: addi    r22, r22, 320
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(320);

label_7F243654:
    ctx->pc = 0x7F243654u;
    ctx->downcount -= 3;
    // 7F243654: lwz     r0, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243658:
    // 7F243658: cmpw    r27, r0
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

label_7F24365C:
    // 7F24365C: bc    12, 0, 0x7F24331C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24331Cu;
                return;
            }
            goto label_7F24331C;
        }
    }

label_7F243660:
    ctx->pc = 0x7F243660u;
    ctx->downcount -= 23;
    // 7F243660: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F243664:
    ctx->pc = 0x7F243664u;
    // 7F243664: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F243668:
    ctx->pc = 0x7F243668u;
    // 7F243668: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24366C:
    ctx->pc = 0x7F24366Cu;
    // 7F24366C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243670:
    ctx->pc = 0x7F243670u;
    // 7F243670: addi    r10, r6, -8652
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-8652);

label_7F243674:
    ctx->pc = 0x7F243674u;
    // 7F243674: addi    r9, r5, 20280
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(20280);

label_7F243678:
    ctx->pc = 0x7F243678u;
    // 7F243678: addi    r6, r4, 20288
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20288);

label_7F24367C:
    ctx->pc = 0x7F24367Cu;
    // 7F24367C: addi    r5, r3, 20272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20272);

label_7F243680:
    ctx->pc = 0x7F243680u;
    // 7F243680: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F243684:
    ctx->pc = 0x7F243684u;
    // 7F243684: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F243688:
    ctx->pc = 0x7F243688u;
    // 7F243688: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F24368C:
    ctx->pc = 0x7F24368Cu;
    // 7F24368C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F243690:
    ctx->pc = 0x7F243690u;
    // 7F243690: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F243694:
    ctx->pc = 0x7F243694u;
    // 7F243694: lwz     r22, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F243698:
    ctx->pc = 0x7F243698u;
    // 7F243698: lfd     f31, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F243698u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24369C:
    ctx->pc = 0x7F24369Cu;
    // 7F24369C: or   r28, r29, r29
    {
        ctx->gpr[28] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2436A0:
    ctx->pc = 0x7F2436A0u;
    // 7F2436A0: lfs     f22, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2436A0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[22] = value;
        ctx->ps1[22] = value;
    }

label_7F2436A4:
    ctx->pc = 0x7F2436A4u;
    // 7F2436A4: addi    r30, r8, -8640
    ctx->gpr[30] = ctx->gpr[8] + (u32)(s32)(-8640);

label_7F2436A8:
    ctx->pc = 0x7F2436A8u;
    // 7F2436A8: lfs     f23, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2436A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[23] = value;
        ctx->ps1[23] = value;
    }

label_7F2436AC:
    ctx->pc = 0x7F2436ACu;
    // 7F2436AC: addi    r26, r7, -8644
    ctx->gpr[26] = ctx->gpr[7] + (u32)(s32)(-8644);

label_7F2436B0:
    ctx->pc = 0x7F2436B0u;
    // 7F2436B0: addi    r25, r4, -8648
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(-8648);

label_7F2436B4:
    ctx->pc = 0x7F2436B4u;
    // 7F2436B4: addi    r21, r3, -6188
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(-6188);

label_7F2436B8:
    ctx->pc = 0x7F2436B8u;
    // 7F2436B8: b       0x7F243A28
    {
            goto label_7F243A28;
    }

label_7F2436BC:
    ctx->pc = 0x7F2436BCu;
    ctx->downcount -= 5;
    // 7F2436BC: lwz     r4, 192(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2436C0:
    ctx->pc = 0x7F2436C0u;
    // 7F2436C0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2436C4:
    ctx->pc = 0x7F2436C4u;
    // 7F2436C4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2436C8:
    // 7F2436C8: rlwinm. r0, r0, 0, 19, 19
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

label_7F2436CC:
    // 7F2436CC: bc    12, 2, 0x7F2436E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2436E8;
        }
    }

label_7F2436D0:
    ctx->pc = 0x7F2436D0u;
    ctx->downcount -= 3;
    // 7F2436D0: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2436D4:
    // 7F2436D4: cmplwi  r4, 0x0000
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

label_7F2436D8:
    // 7F2436D8: bc    12, 2, 0x7F2439C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2439C8;
        }
    }

label_7F2436DC:
    ctx->pc = 0x7F2436DCu;
    ctx->downcount -= 3;
    // 7F2436DC: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2436E0:
    // 7F2436E0: rlwinm. r0, r0, 0, 23, 23
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

label_7F2436E4:
    // 7F2436E4: bc    4, 2, 0x7F2439C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2439C8;
        }
    }

label_7F2436E8:
    ctx->pc = 0x7F2436E8u;
    ctx->downcount -= 3;
    // 7F2436E8: lha     r4, 198(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(198);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2436EC:
    // 7F2436EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2436F0:
    // 7F2436F0: bl      0x7F3B3C24
    {
            ctx->lr = 0x7F2436F4u;
            ctx->pc = 0x7F3B3C24u;
            return;
    }

label_7F2436F4:
    ctx->downcount -= 2;
    // 7F2436F4: cmpwi   r3, 0
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

label_7F2436F8:
    // 7F2436F8: bc    4, 2, 0x7F2439C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2439C8;
        }
    }

label_7F2436FC:
    ctx->pc = 0x7F2436FCu;
    ctx->downcount -= 18;
    // 7F2436FC: lwz     r3, 192(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243700:
    // 7F243700: addi    r4, r1, 84
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(84);

label_7F243704:
    ctx->pc = 0x7F243704u;
    // 7F243704: lha     r0, 198(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(198);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F243708:
    ctx->pc = 0x7F243708u;
    // 7F243708: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24370C:
    // 7F24370C: mulli   r5, r0, 324
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F243710:
    ctx->pc = 0x7F243710u;
    // 7F243710: lwz     r3, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243714:
    ctx->pc = 0x7F243714u;
    // 7F243714: lwz     r3, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243718:
    // 7F243718: addi    r24, r5, 444
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(444);

label_7F24371C:
    // 7F24371C: mulli   r0, r0, 72
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)72);

label_7F243720:
    ctx->pc = 0x7F243720u;
    // 7F243720: lwz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F243724:
    // 7F243724: add   r24, r6, r24
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F243728:
    // 7F243728: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24372C:
    // 7F24372C: add   r23, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F243730:
    // 7F243730: bl      0x7F3CC414
    {
            ctx->lr = 0x7F243734u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F243734:
    ctx->downcount -= 4;
    // 7F243734: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F243738:
    // 7F243738: addi    r4, r1, 84
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(84);

label_7F24373C:
    // 7F24373C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243740:
    // 7F243740: bl      0x7F3B3CBC
    {
            ctx->lr = 0x7F243744u;
            ctx->pc = 0x7F3B3CBCu;
            return;
    }

label_7F243744:
    ctx->pc = 0x7F243744u;
    ctx->downcount -= 42;
    // 7F243744: lfs     f0, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243748:
    ctx->pc = 0x7F243748u;
    // 7F243748: lfs     f3, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F24374C:
    ctx->pc = 0x7F24374Cu;
    // 7F24374C: lfs     f2, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24374Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F243750:
    ctx->pc = 0x7F243750u;
    // 7F243750: fdivs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F243750u)) return;
    ppc_fdivs(ctx, 1, 0, 3);

label_7F243754:
    ctx->pc = 0x7F243754u;
    // 7F243754: lfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243758:
    ctx->pc = 0x7F243758u;
    // 7F243758: fdivs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F243758u)) return;
    ppc_fdivs(ctx, 2, 2, 3);

label_7F24375C:
    ctx->pc = 0x7F24375Cu;
    // 7F24375C: stfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24375Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243760:
    ctx->pc = 0x7F243760u;
    // 7F243760: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F243760u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_7F243764:
    ctx->pc = 0x7F243764u;
    // 7F243764: stfs     f2, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F243768:
    // 7F243768: bc    12, 1, 0x7F243798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243798;
        }
    }

label_7F24376C:
    ctx->downcount -= 1;
    // 7F24376C: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243770u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243770:
    ctx->downcount -= 4;
    // 7F243770: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243774:
    ctx->pc = 0x7F243774u;
    // 7F243774: lfs     f0, 20292(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F243774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243778:
    ctx->pc = 0x7F243778u;
    // 7F243778: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243778u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24377C:
    // 7F24377C: bc    12, 1, 0x7F243798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243798;
        }
    }

label_7F243780:
    ctx->pc = 0x7F243780u;
    ctx->downcount -= 2;
    // 7F243780: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243784:
    // 7F243784: bl      0x7F242EC0
    {
            ctx->lr = 0x7F243788u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242EC0u;
                return;
            }
            goto label_7F242EC0;
    }

label_7F243788:
    ctx->downcount -= 4;
    // 7F243788: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24378C:
    ctx->pc = 0x7F24378Cu;
    // 7F24378C: lfs     f0, 20292(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24378Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243790:
    ctx->pc = 0x7F243790u;
    // 7F243790: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243790u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243794:
    // 7F243794: bc    4, 1, 0x7F2437A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2437A0;
        }
    }

label_7F243798:
    ctx->downcount -= 2;
    // 7F243798: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F24379C:
    // 7F24379C: b       0x7F2439C8
    {
            goto label_7F2439C8;
    }

label_7F2437A0:
    ctx->pc = 0x7F2437A0u;
    ctx->downcount -= 3;
    // 7F2437A0: lhz     r0, 196(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2437A4:
    // 7F2437A4: cmplwi  r0, 0x0000
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

label_7F2437A8:
    // 7F2437A8: bc    12, 2, 0x7F2437B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2437B4;
        }
    }

label_7F2437AC:
    ctx->downcount -= 2;
    // 7F2437AC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2437B0:
    // 7F2437B0: b       0x7F2439C8
    {
            goto label_7F2439C8;
    }

label_7F2437B4:
    ctx->downcount -= 10;
    // 7F2437B4: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F2437B8:
    // 7F2437B8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2437BC:
    // 7F2437BC: addi    r5, r4, -27956
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-27956);

label_7F2437C0:
    ctx->pc = 0x7F2437C0u;
    // 7F2437C0: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2437C4:
    // 7F2437C4: addi    r7, r3, 4
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2437C8:
    ctx->pc = 0x7F2437C8u;
    // 7F2437C8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2437CC:
    // 7F2437CC: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2437D0:
    // 7F2437D0: addi    r5, r1, 84
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(84);

label_7F2437D4:
    // 7F2437D4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2437D8:
    // 7F2437D8: bl      0x7F10B744
    {
            ctx->lr = 0x7F2437DCu;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F2437DC:
    ctx->downcount -= 2;
    // 7F2437DC: cmpwi   r3, 0
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

label_7F2437E0:
    // 7F2437E0: bc    12, 2, 0x7F2437EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2437EC;
        }
    }

label_7F2437E4:
    ctx->downcount -= 2;
    // 7F2437E4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2437E8:
    // 7F2437E8: b       0x7F2439C8
    {
            goto label_7F2439C8;
    }

label_7F2437EC:
    ctx->downcount -= 18;
    // 7F2437EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2437F0:
    // 7F2437F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2437F4:
    ctx->pc = 0x7F2437F4u;
    // 7F2437F4: lfs     f0, 20300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2437F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2437F8:
    // 7F2437F8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2437FC:
    ctx->pc = 0x7F2437FCu;
    // 7F2437FC: lfs     f1, 20296(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2437FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243800:
    ctx->pc = 0x7F243800u;
    // 7F243800: lfs     f29, 8(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243800u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F243804:
    ctx->pc = 0x7F243804u;
    // 7F243804: stfs     f1, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243808:
    ctx->pc = 0x7F243808u;
    // 7F243808: lfs     f28, 12(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243808u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F24380C:
    ctx->pc = 0x7F24380Cu;
    // 7F24380C: stfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24380Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243810:
    ctx->pc = 0x7F243810u;
    // 7F243810: lfs     f27, 16(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243810u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F243814:
    ctx->pc = 0x7F243814u;
    // 7F243814: stfs     f1, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243818:
    ctx->pc = 0x7F243818u;
    // 7F243818: lfs     f26, 20(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243818u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F24381C:
    ctx->pc = 0x7F24381Cu;
    // 7F24381C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24381Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243820:
    ctx->pc = 0x7F243820u;
    // 7F243820: lfs     f25, 24(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243820u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F243824:
    ctx->pc = 0x7F243824u;
    // 7F243824: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243828:
    ctx->pc = 0x7F243828u;
    // 7F243828: lfs     f24, 28(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F243828u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

label_7F24382C:
    ctx->pc = 0x7F24382Cu;
    // 7F24382C: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24382Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243830:
    // 7F243830: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F243834u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F243834:
    ctx->downcount -= 3;
    // 7F243834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243838:
    // 7F243838: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F24383C:
    ctx->pc = 0x7F24383Cu;
    // 7F24383C: lfs     f30, 20256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24383Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F243840:
    ctx->downcount -= 2;
    // 7F243840: rlwinm. r0, r19, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[19], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F243844:
    // 7F243844: bc    12, 2, 0x7F243850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243850;
        }
    }

label_7F243848:
    ctx->pc = 0x7F243848u;
    ctx->downcount -= 2;
    // 7F243848: fmr    f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F243848u)) return;
    ctx->fpr[0] = ctx->fpr[29];

label_7F24384C:
    // 7F24384C: b       0x7F243854
    {
            goto label_7F243854;
    }

label_7F243850:
    ctx->pc = 0x7F243850u;
    ctx->downcount -= 1;
    // 7F243850: fmr    f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F243850u)) return;
    ctx->fpr[0] = ctx->fpr[26];

label_7F243854:
    ctx->downcount -= 3;
    // 7F243854: rlwinm. r0, r19, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[19], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F243858:
    ctx->pc = 0x7F243858u;
    // 7F243858: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24385C:
    // 7F24385C: bc    12, 2, 0x7F243868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243868;
        }
    }

label_7F243860:
    ctx->pc = 0x7F243860u;
    ctx->downcount -= 2;
    // 7F243860: fmr    f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F243860u)) return;
    ctx->fpr[0] = ctx->fpr[28];

label_7F243864:
    // 7F243864: b       0x7F24386C
    {
            goto label_7F24386C;
    }

label_7F243868:
    ctx->pc = 0x7F243868u;
    ctx->downcount -= 1;
    // 7F243868: fmr    f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F243868u)) return;
    ctx->fpr[0] = ctx->fpr[25];

label_7F24386C:
    ctx->downcount -= 3;
    // 7F24386C: rlwinm. r0, r19, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[19], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F243870:
    ctx->pc = 0x7F243870u;
    // 7F243870: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243874:
    // 7F243874: bc    12, 2, 0x7F243880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243880;
        }
    }

label_7F243878:
    ctx->pc = 0x7F243878u;
    ctx->downcount -= 2;
    // 7F243878: fmr    f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F243878u)) return;
    ctx->fpr[0] = ctx->fpr[27];

label_7F24387C:
    // 7F24387C: b       0x7F243884
    {
            goto label_7F243884;
    }

label_7F243880:
    ctx->pc = 0x7F243880u;
    ctx->downcount -= 1;
    // 7F243880: fmr    f0, f24
    if (!ppc_fp_available_inline(ctx, 0x7F243880u)) return;
    ctx->fpr[0] = ctx->fpr[24];

label_7F243884:
    ctx->downcount -= 6;
    // 7F243884: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F243888:
    ctx->pc = 0x7F243888u;
    // 7F243888: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24388C:
    // 7F24388C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243890:
    // 7F243890: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F243894:
    ctx->pc = 0x7F243894u;
    // 7F243894: stfs     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243894u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F243898:
    // 7F243898: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24389Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24389C:
    ctx->downcount -= 4;
    // 7F24389C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F2438A0:
    // 7F2438A0: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F2438A4:
    // 7F2438A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2438A8:
    // 7F2438A8: bl      0x7F3B3CBC
    {
            ctx->lr = 0x7F2438ACu;
            ctx->pc = 0x7F3B3CBCu;
            return;
    }

label_7F2438AC:
    ctx->pc = 0x7F2438ACu;
    ctx->downcount -= 42;
    // 7F2438AC: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2438B0:
    ctx->pc = 0x7F2438B0u;
    // 7F2438B0: lfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2438B4:
    ctx->pc = 0x7F2438B4u;
    // 7F2438B4: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2438B8:
    ctx->pc = 0x7F2438B8u;
    // 7F2438B8: fdivs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2438B8u)) return;
    ppc_fdivs(ctx, 2, 0, 3);

label_7F2438BC:
    ctx->pc = 0x7F2438BCu;
    // 7F2438BC: lfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2438C0:
    ctx->pc = 0x7F2438C0u;
    // 7F2438C0: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2438C0u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F2438C4:
    ctx->pc = 0x7F2438C4u;
    // 7F2438C4: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2438C8:
    ctx->pc = 0x7F2438C8u;
    // 7F2438C8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2438C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2438CC:
    ctx->pc = 0x7F2438CCu;
    // 7F2438CC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2438D0:
    // 7F2438D0: bc    4, 1, 0x7F2438D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2438D8;
        }
    }

label_7F2438D4:
    ctx->pc = 0x7F2438D4u;
    ctx->downcount -= 1;
    // 7F2438D4: stfs     f2, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2438D8:
    ctx->pc = 0x7F2438D8u;
    ctx->downcount -= 3;
    // 7F2438D8: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2438DC:
    ctx->pc = 0x7F2438DCu;
    // 7F2438DC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2438DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2438E0:
    // 7F2438E0: bc    4, 0, 0x7F2438E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2438E8;
        }
    }

label_7F2438E4:
    ctx->pc = 0x7F2438E4u;
    ctx->downcount -= 1;
    // 7F2438E4: stfs     f2, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2438E8:
    ctx->pc = 0x7F2438E8u;
    ctx->downcount -= 4;
    // 7F2438E8: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2438EC:
    ctx->pc = 0x7F2438ECu;
    // 7F2438EC: lfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2438F0:
    ctx->pc = 0x7F2438F0u;
    // 7F2438F0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2438F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2438F4:
    // 7F2438F4: bc    4, 1, 0x7F2438FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2438FC;
        }
    }

label_7F2438F8:
    ctx->pc = 0x7F2438F8u;
    ctx->downcount -= 1;
    // 7F2438F8: stfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2438FC:
    ctx->pc = 0x7F2438FCu;
    ctx->downcount -= 4;
    // 7F2438FC: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2438FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243900:
    ctx->pc = 0x7F243900u;
    // 7F243900: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F243904:
    ctx->pc = 0x7F243904u;
    // 7F243904: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F243904u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F243908:
    // 7F243908: bc    4, 0, 0x7F243910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243910;
        }
    }

label_7F24390C:
    ctx->pc = 0x7F24390Cu;
    ctx->downcount -= 1;
    // 7F24390C: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24390Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243910:
    ctx->downcount -= 3;
    // 7F243910: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_7F243914:
    // 7F243914: cmpwi   r19, 8
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243918:
    // 7F243918: bc    12, 0, 0x7F243840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243840u;
                return;
            }
            goto label_7F243840;
        }
    }

label_7F24391C:
    ctx->pc = 0x7F24391Cu;
    ctx->downcount -= 30;
    // 7F24391C: lwz     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F243920:
    // 7F243920: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F243924:
    ctx->pc = 0x7F243924u;
    // 7F243924: lwz     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F243928:
    ctx->pc = 0x7F243928u;
    // 7F243928: stw     r9, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24392C:
    ctx->pc = 0x7F24392Cu;
    // 7F24392C: lwz     r10, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F243930:
    ctx->pc = 0x7F243930u;
    // 7F243930: lwz     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F243934:
    ctx->pc = 0x7F243934u;
    // 7F243934: lwz     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F243938:
    ctx->pc = 0x7F243938u;
    // 7F243938: lwz     r6, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24393C:
    ctx->pc = 0x7F24393Cu;
    // 7F24393C: lwz     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243940:
    ctx->pc = 0x7F243940u;
    // 7F243940: lwz     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243944:
    ctx->pc = 0x7F243944u;
    // 7F243944: stw     r5, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F243948:
    ctx->pc = 0x7F243948u;
    // 7F243948: lfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24394C:
    ctx->pc = 0x7F24394Cu;
    // 7F24394C: stw     r5, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F243950:
    ctx->pc = 0x7F243950u;
    // 7F243950: lfs     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243954:
    ctx->pc = 0x7F243954u;
    // 7F243954: stw     r9, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F243958:
    ctx->pc = 0x7F243958u;
    // 7F243958: stw     r10, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F24395C:
    ctx->pc = 0x7F24395Cu;
    // 7F24395C: stw     r8, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F243960:
    ctx->pc = 0x7F243960u;
    // 7F243960: stw     r7, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F243964:
    ctx->pc = 0x7F243964u;
    // 7F243964: stw     r6, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F243968:
    ctx->pc = 0x7F243968u;
    // 7F243968: stw     r4, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24396C:
    ctx->pc = 0x7F24396Cu;
    // 7F24396C: stw     r0, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243970:
    ctx->pc = 0x7F243970u;
    // 7F243970: stw     r10, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F243974:
    ctx->pc = 0x7F243974u;
    // 7F243974: stw     r8, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F243978:
    ctx->pc = 0x7F243978u;
    // 7F243978: stw     r7, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F24397C:
    ctx->pc = 0x7F24397Cu;
    // 7F24397C: stfs     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24397Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F243980:
    ctx->pc = 0x7F243980u;
    // 7F243980: stw     r6, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F243984:
    ctx->pc = 0x7F243984u;
    // 7F243984: stw     r4, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F243988:
    ctx->pc = 0x7F243988u;
    // 7F243988: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24398C:
    ctx->pc = 0x7F24398Cu;
    // 7F24398C: stfs     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24398Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F243990:
    // 7F243990: bl      0x7F242E40
    {
            ctx->lr = 0x7F243994u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F242E40u;
                return;
            }
            goto label_7F242E40;
    }

label_7F243994:
    ctx->downcount -= 10;
    // 7F243994: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243998:
    ctx->pc = 0x7F243998u;
    // 7F243998: fmr    f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F243998u)) return;
    ctx->fpr[24] = ctx->fpr[1];

label_7F24399C:
    ctx->pc = 0x7F24399Cu;
    // 7F24399C: lfs     f0, 20272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24399Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2439A0:
    // 7F2439A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2439A4:
    ctx->pc = 0x7F2439A4u;
    // 7F2439A4: lfs     f1, 20268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2439A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2439A8:
    ctx->pc = 0x7F2439A8u;
    // 7F2439A8: fmuls   f0, f24, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2439A8u)) return;
    ppc_fmuls(ctx, 0, 24, 0);

label_7F2439AC:
    ctx->pc = 0x7F2439ACu;
    // 7F2439AC: lfs     f2, 200(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F2439ACu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2439B0:
    ctx->pc = 0x7F2439B0u;
    // 7F2439B0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2439B0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2439B4:
    ctx->pc = 0x7F2439B4u;
    // 7F2439B4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2439B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F2439B8:
    // 7F2439B8: bc    4, 1, 0x7F2439C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2439C4;
        }
    }

label_7F2439BC:
    ctx->downcount -= 2;
    // 7F2439BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2439C0:
    // 7F2439C0: b       0x7F2439C8
    {
            goto label_7F2439C8;
    }

label_7F2439C4:
    ctx->downcount -= 1;
    // 7F2439C4: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F2439C8:
    ctx->pc = 0x7F2439C8u;
    ctx->downcount -= 14;
    // 7F2439C8: lfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2439C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2439CC:
    ctx->pc = 0x7F2439CCu;
    // 7F2439CC: fmuls   f0, f24, f23
    if (!ppc_fp_available_inline(ctx, 0x7F2439CCu)) return;
    ppc_fmuls(ctx, 0, 24, 23);

label_7F2439D0:
    ctx->pc = 0x7F2439D0u;
    // 7F2439D0: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2439D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2439D4:
    ctx->pc = 0x7F2439D4u;
    // 7F2439D4: fmul   f2, f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2439D4u)) return;
    ppc_fmul(ctx, 2, 31, 2);

label_7F2439D8:
    ctx->pc = 0x7F2439D8u;
    // 7F2439D8: fmul   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2439D8u)) return;
    ppc_fmul(ctx, 1, 31, 1);

label_7F2439DC:
    ctx->pc = 0x7F2439DCu;
    // 7F2439DC: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2439DCu)) return;
    ppc_frsp(ctx, 2, 2);

label_7F2439E0:
    ctx->pc = 0x7F2439E0u;
    // 7F2439E0: fmuls   f0, f22, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2439E0u)) return;
    ppc_fmuls(ctx, 0, 22, 0);

label_7F2439E4:
    ctx->pc = 0x7F2439E4u;
    // 7F2439E4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2439E4u)) return;
    ppc_frsp(ctx, 1, 1);

label_7F2439E8:
    ctx->pc = 0x7F2439E8u;
    // 7F2439E8: stfs     f2, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2439E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2439EC:
    ctx->pc = 0x7F2439ECu;
    // 7F2439EC: stfs     f1, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2439ECu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2439F0:
    ctx->pc = 0x7F2439F0u;
    // 7F2439F0: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F2439F0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2439F4:
    ctx->pc = 0x7F2439F4u;
    // 7F2439F4: lwz     r0, 204(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2439F8:
    // 7F2439F8: cmpwi   r0, 0
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

label_7F2439FC:
    // 7F2439FC: bc    12, 2, 0x7F243A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243A20;
        }
    }

label_7F243A00:
    ctx->downcount -= 8;
    // 7F243A00: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F243A04:
    // 7F243A04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F243A08:
    ctx->pc = 0x7F243A08u;
    // 7F243A08: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F243A0C:
    // 7F243A0C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F243A10:
    ctx->pc = 0x7F243A10u;
    // 7F243A10: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243A14:
    ctx->pc = 0x7F243A14u;
    // 7F243A14: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F243A18:
    ctx->pc = 0x7F243A18u;
    // 7F243A18: lwz     r3, 204(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243A1C:
    // 7F243A1C: bl      0x7F01FA88
    {
            ctx->lr = 0x7F243A20u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F243A20:
    ctx->downcount -= 2;
    // 7F243A20: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F243A24:
    // 7F243A24: addi    r22, r22, 208
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(208);

label_7F243A28:
    ctx->pc = 0x7F243A28u;
    ctx->downcount -= 3;
    // 7F243A28: lwz     r0, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243A2C:
    // 7F243A2C: cmpw    r28, r0
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

label_7F243A30:
    // 7F243A30: bc    12, 0, 0x7F2436BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2436BCu;
                return;
            }
            goto label_7F2436BC;
        }
    }

label_7F243A34:
    ctx->pc = 0x7F243A34u;
    ctx->downcount -= 5;
    // 7F243A34: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F243A38:
    ctx->pc = 0x7F243A38u;
    // 7F243A38: addi    r3, r3, -6184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6184);

label_7F243A3C:
    ctx->pc = 0x7F243A3Cu;
    // 7F243A3C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243A40:
    ctx->pc = 0x7F243A40u;
    // 7F243A40: cmpwi   r3, 0
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

label_7F243A44:
    ctx->pc = 0x7F243A44u;
    // 7F243A44: bc    12, 2, 0x7F243A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243A50;
        }
    }

label_7F243A48:
    ctx->pc = 0x7F243A48u;
    ctx->downcount -= 2;
    // 7F243A48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F243A4C:
    ctx->pc = 0x7F243A4Cu;
    // 7F243A4C: bl      0x7F01FA88
    {
            ctx->lr = 0x7F243A50u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F243A50:
    ctx->pc = 0x7F243A50u;
    ctx->downcount -= 36;
    // 7F243A50: psq_l   f31, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F243A50u);
        if (ctx->exception) return;
    }

label_7F243A54:
    ctx->pc = 0x7F243A54u;
    // 7F243A54: lfd     f31, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A58:
    ctx->pc = 0x7F243A58u;
    // 7F243A58: psq_l   f30, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F243A58u);
        if (ctx->exception) return;
    }

label_7F243A5C:
    ctx->pc = 0x7F243A5Cu;
    // 7F243A5C: lfd     f30, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A60:
    ctx->pc = 0x7F243A60u;
    // 7F243A60: psq_l   f29, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F243A60u);
        if (ctx->exception) return;
    }

label_7F243A64:
    ctx->pc = 0x7F243A64u;
    // 7F243A64: lfd     f29, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A68:
    ctx->pc = 0x7F243A68u;
    // 7F243A68: psq_l   f28, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F243A68u);
        if (ctx->exception) return;
    }

label_7F243A6C:
    ctx->pc = 0x7F243A6Cu;
    // 7F243A6C: lfd     f28, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A70:
    ctx->pc = 0x7F243A70u;
    // 7F243A70: psq_l   f27, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F243A70u);
        if (ctx->exception) return;
    }

label_7F243A74:
    ctx->pc = 0x7F243A74u;
    // 7F243A74: lfd     f27, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A78:
    ctx->pc = 0x7F243A78u;
    // 7F243A78: psq_l   f26, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F243A78u);
        if (ctx->exception) return;
    }

label_7F243A7C:
    ctx->pc = 0x7F243A7Cu;
    // 7F243A7C: lfd     f26, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A80:
    ctx->pc = 0x7F243A80u;
    // 7F243A80: psq_l   f25, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F243A80u);
        if (ctx->exception) return;
    }

label_7F243A84:
    ctx->pc = 0x7F243A84u;
    // 7F243A84: lfd     f25, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A88:
    ctx->pc = 0x7F243A88u;
    // 7F243A88: psq_l   f24, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F243A88u);
        if (ctx->exception) return;
    }

label_7F243A8C:
    ctx->pc = 0x7F243A8Cu;
    // 7F243A8C: lfd     f24, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A90:
    ctx->pc = 0x7F243A90u;
    // 7F243A90: psq_l   f23, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F243A90u);
        if (ctx->exception) return;
    }

label_7F243A94:
    ctx->pc = 0x7F243A94u;
    // 7F243A94: lfd     f23, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243A98:
    ctx->pc = 0x7F243A98u;
    // 7F243A98: psq_l   f22, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F243A98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x7F243A98u);
        if (ctx->exception) return;
    }

label_7F243A9C:
    ctx->pc = 0x7F243A9Cu;
    // 7F243A9C: lfd     f22, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F243A9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F243AA0:
    ctx->pc = 0x7F243AA0u;
    // 7F243AA0: lmw     r19, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F243AA4:
    ctx->pc = 0x7F243AA4u;
    // 7F243AA4: lwz     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243AA8:
    ctx->pc = 0x7F243AA8u;
    // 7F243AA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243AAC:
    ctx->pc = 0x7F243AACu;
    // 7F243AAC: addi    r1, r1, 416
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(416);

label_7F243AB0:
    ctx->pc = 0x7F243AB0u;
    // 7F243AB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243AB4:
    ctx->pc = 0x7F243AB4u;
    ctx->downcount -= 7;
    // 7F243AB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243AB8:
    ctx->pc = 0x7F243AB8u;
    // 7F243AB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243ABC:
    ctx->pc = 0x7F243ABCu;
    // 7F243ABC: cmpwi   r4, 32
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

label_7F243AC0:
    ctx->pc = 0x7F243AC0u;
    // 7F243AC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243AC4:
    ctx->pc = 0x7F243AC4u;
    // 7F243AC4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F243AC8:
    ctx->pc = 0x7F243AC8u;
    // 7F243AC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243ACC:
    ctx->pc = 0x7F243ACCu;
    // 7F243ACC: bc    12, 2, 0x7F243B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243B44;
        }
    }

label_7F243AD0:
    ctx->pc = 0x7F243AD0u;
    ctx->downcount -= 1;
    // 7F243AD0: bc    4, 0, 0x7F243AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243AF8;
        }
    }

label_7F243AD4:
    ctx->pc = 0x7F243AD4u;
    ctx->downcount -= 2;
    // 7F243AD4: cmpwi   r4, 2
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

label_7F243AD8:
    ctx->pc = 0x7F243AD8u;
    // 7F243AD8: bc    12, 2, 0x7F243C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243C08;
        }
    }

label_7F243ADC:
    ctx->pc = 0x7F243ADCu;
    ctx->downcount -= 1;
    // 7F243ADC: bc    4, 0, 0x7F243AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243AEC;
        }
    }

label_7F243AE0:
    ctx->pc = 0x7F243AE0u;
    ctx->downcount -= 2;
    // 7F243AE0: cmpwi   r4, 1
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

label_7F243AE4:
    ctx->pc = 0x7F243AE4u;
    // 7F243AE4: bc    4, 0, 0x7F243BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243BFC;
        }
    }

label_7F243AE8:
    ctx->pc = 0x7F243AE8u;
    ctx->downcount -= 1;
    // 7F243AE8: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243AEC:
    ctx->pc = 0x7F243AECu;
    ctx->downcount -= 2;
    // 7F243AEC: cmpwi   r4, 16
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243AF0:
    ctx->pc = 0x7F243AF0u;
    // 7F243AF0: bc    12, 2, 0x7F243B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243B24;
        }
    }

label_7F243AF4:
    ctx->pc = 0x7F243AF4u;
    ctx->downcount -= 1;
    // 7F243AF4: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243AF8:
    ctx->pc = 0x7F243AF8u;
    ctx->downcount -= 2;
    // 7F243AF8: cmpwi   r4, 128
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

label_7F243AFC:
    ctx->pc = 0x7F243AFCu;
    // 7F243AFC: bc    12, 2, 0x7F243BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243BEC;
        }
    }

label_7F243B00:
    ctx->pc = 0x7F243B00u;
    ctx->downcount -= 1;
    // 7F243B00: bc    4, 0, 0x7F243B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243B10;
        }
    }

label_7F243B04:
    ctx->pc = 0x7F243B04u;
    ctx->downcount -= 2;
    // 7F243B04: cmpwi   r4, 64
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243B08:
    ctx->pc = 0x7F243B08u;
    // 7F243B08: bc    12, 2, 0x7F243BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243BC4;
        }
    }

label_7F243B0C:
    ctx->pc = 0x7F243B0Cu;
    ctx->downcount -= 1;
    // 7F243B0C: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243B10:
    ctx->pc = 0x7F243B10u;
    ctx->downcount -= 4;
    // 7F243B10: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F243B14:
    ctx->pc = 0x7F243B14u;
    // 7F243B14: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F243B18:
    ctx->pc = 0x7F243B18u;
    // 7F243B18: cmpw    r4, r0
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

label_7F243B1C:
    ctx->pc = 0x7F243B1Cu;
    // 7F243B1C: bc    12, 2, 0x7F243C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243C10;
        }
    }

label_7F243B20:
    ctx->pc = 0x7F243B20u;
    ctx->downcount -= 1;
    // 7F243B20: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243B24:
    ctx->pc = 0x7F243B24u;
    ctx->downcount -= 3;
    // 7F243B24: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F243B28:
    ctx->pc = 0x7F243B28u;
    // 7F243B28: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F243B2C:
    ctx->pc = 0x7F243B2Cu;
    // 7F243B2C: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F243B30u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F243B30:
    ctx->pc = 0x7F243B30u;
    ctx->downcount -= 4;
    // 7F243B30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243B34:
    ctx->pc = 0x7F243B34u;
    // 7F243B34: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F243B38:
    ctx->pc = 0x7F243B38u;
    // 7F243B38: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F243B3C:
    ctx->pc = 0x7F243B3Cu;
    // 7F243B3C: bl      0x7F011698
    {
            ctx->lr = 0x7F243B40u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F243B40:
    ctx->pc = 0x7F243B40u;
    ctx->downcount -= 1;
    // 7F243B40: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243B44:
    ctx->pc = 0x7F243B44u;
    ctx->downcount -= 2;
    // 7F243B44: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F243B48:
    ctx->pc = 0x7F243B48u;
    // 7F243B48: bl      0x7F3C8968
    {
            ctx->lr = 0x7F243B4Cu;
            ctx->pc = 0x7F3C8968u;
            return;
    }

label_7F243B4C:
    ctx->pc = 0x7F243B4Cu;
    ctx->downcount -= 7;
    // 7F243B4C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F243B50:
    ctx->pc = 0x7F243B50u;
    // 7F243B50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243B54:
    ctx->pc = 0x7F243B54u;
    // 7F243B54: sth     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243B58:
    ctx->pc = 0x7F243B58u;
    // 7F243B58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F243B5C:
    ctx->pc = 0x7F243B5Cu;
    // 7F243B5C: sth     r3, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F243B60:
    ctx->pc = 0x7F243B60u;
    // 7F243B60: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243B64:
    ctx->pc = 0x7F243B64u;
    // 7F243B64: bl      0x7F22ED88
    {
            ctx->lr = 0x7F243B68u;
            ctx->pc = 0x7F22ED88u;
            return;
    }

label_7F243B68:
    ctx->pc = 0x7F243B68u;
    ctx->downcount -= 1;
    // 7F243B68: bl      0x7F0221D0
    {
            ctx->lr = 0x7F243B6Cu;
            ctx->pc = 0x7F0221D0u;
            return;
    }

label_7F243B6C:
    ctx->pc = 0x7F243B6Cu;
    ctx->downcount -= 1;
    // 7F243B6C: bl      0x7F022260
    {
            ctx->lr = 0x7F243B70u;
            ctx->pc = 0x7F022260u;
            return;
    }

label_7F243B70:
    ctx->pc = 0x7F243B70u;
    ctx->downcount -= 1;
    // 7F243B70: bl      0x7F01C970
    {
            ctx->lr = 0x7F243B74u;
            ctx->pc = 0x7F01C970u;
            return;
    }

label_7F243B74:
    ctx->pc = 0x7F243B74u;
    ctx->downcount -= 2;
    // 7F243B74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F243B78:
    ctx->pc = 0x7F243B78u;
    // 7F243B78: bl      0x7F191328
    {
            ctx->lr = 0x7F243B7Cu;
            ctx->pc = 0x7F191328u;
            return;
    }

label_7F243B7C:
    ctx->pc = 0x7F243B7Cu;
    ctx->downcount -= 2;
    // 7F243B7C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F243B80:
    ctx->pc = 0x7F243B80u;
    // 7F243B80: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243B84u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243B84:
    ctx->pc = 0x7F243B84u;
    ctx->downcount -= 2;
    // 7F243B84: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F243B88:
    ctx->pc = 0x7F243B88u;
    // 7F243B88: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243B8Cu;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243B8C:
    ctx->pc = 0x7F243B8Cu;
    ctx->downcount -= 2;
    // 7F243B8C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F243B90:
    ctx->pc = 0x7F243B90u;
    // 7F243B90: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243B94u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243B94:
    ctx->pc = 0x7F243B94u;
    ctx->downcount -= 2;
    // 7F243B94: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F243B98:
    ctx->pc = 0x7F243B98u;
    // 7F243B98: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243B9Cu;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243B9C:
    ctx->pc = 0x7F243B9Cu;
    ctx->downcount -= 2;
    // 7F243B9C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F243BA0:
    ctx->pc = 0x7F243BA0u;
    // 7F243BA0: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243BA4u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243BA4:
    ctx->pc = 0x7F243BA4u;
    ctx->downcount -= 3;
    // 7F243BA4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F243BA8:
    ctx->pc = 0x7F243BA8u;
    // 7F243BA8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F243BAC:
    ctx->pc = 0x7F243BACu;
    // 7F243BAC: bl      0x7F399F58
    {
            ctx->lr = 0x7F243BB0u;
            ctx->pc = 0x7F399F58u;
            return;
    }

label_7F243BB0:
    ctx->pc = 0x7F243BB0u;
    ctx->downcount -= 2;
    // 7F243BB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F243BB4:
    ctx->pc = 0x7F243BB4u;
    // 7F243BB4: bl      0x7F3AED60
    {
            ctx->lr = 0x7F243BB8u;
            ctx->pc = 0x7F3AED60u;
            return;
    }

label_7F243BB8:
    ctx->pc = 0x7F243BB8u;
    ctx->downcount -= 3;
    // 7F243BB8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F243BBC:
    ctx->pc = 0x7F243BBCu;
    // 7F243BBC: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243BC0:
    ctx->pc = 0x7F243BC0u;
    // 7F243BC0: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243BC4:
    ctx->pc = 0x7F243BC4u;
    ctx->downcount -= 5;
    // 7F243BC4: lis     r4, 1536
    ctx->gpr[4] = ((u32)(s32)(1536) << 16);

label_7F243BC8:
    ctx->pc = 0x7F243BC8u;
    // 7F243BC8: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F243BCC:
    ctx->pc = 0x7F243BCCu;
    // 7F243BCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F243BD0:
    ctx->pc = 0x7F243BD0u;
    // 7F243BD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243BD4:
    ctx->pc = 0x7F243BD4u;
    // 7F243BD4: bl      0x7F042E08
    {
            ctx->lr = 0x7F243BD8u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F243BD8:
    ctx->pc = 0x7F243BD8u;
    ctx->downcount -= 2;
    // 7F243BD8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F243BDC:
    ctx->pc = 0x7F243BDCu;
    // 7F243BDC: bl      0x7F3C897C
    {
            ctx->lr = 0x7F243BE0u;
            ctx->pc = 0x7F3C897Cu;
            return;
    }

label_7F243BE0:
    ctx->pc = 0x7F243BE0u;
    ctx->downcount -= 3;
    // 7F243BE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F243BE4:
    ctx->pc = 0x7F243BE4u;
    // 7F243BE4: sth     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243BE8:
    ctx->pc = 0x7F243BE8u;
    // 7F243BE8: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243BEC:
    ctx->pc = 0x7F243BECu;
    ctx->downcount -= 3;
    // 7F243BEC: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F243BF0:
    ctx->pc = 0x7F243BF0u;
    // 7F243BF0: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243BF4:
    ctx->pc = 0x7F243BF4u;
    // 7F243BF4: bl      0x7F243C40
    {
            ctx->lr = 0x7F243BF8u;
            goto label_7F243C40;
    }

label_7F243BF8:
    ctx->pc = 0x7F243BF8u;
    ctx->downcount -= 1;
    // 7F243BF8: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243BFC:
    ctx->pc = 0x7F243BFCu;
    ctx->downcount -= 3;
    // 7F243BFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F243C00:
    ctx->pc = 0x7F243C00u;
    // 7F243C00: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243C04:
    ctx->pc = 0x7F243C04u;
    // 7F243C04: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243C08:
    ctx->pc = 0x7F243C08u;
    ctx->downcount -= 2;
    // 7F243C08: stw     r5, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F243C0C:
    ctx->pc = 0x7F243C0Cu;
    // 7F243C0C: b       0x7F243C28
    {
            goto label_7F243C28;
    }

label_7F243C10:
    ctx->pc = 0x7F243C10u;
    ctx->downcount -= 4;
    // 7F243C10: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243C14:
    ctx->pc = 0x7F243C14u;
    // 7F243C14: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F243C18:
    ctx->pc = 0x7F243C18u;
    // 7F243C18: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243C1C:
    ctx->pc = 0x7F243C1Cu;
    // 7F243C1C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F243C20u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F243C20:
    ctx->pc = 0x7F243C20u;
    ctx->downcount -= 2;
    // 7F243C20: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F243C24:
    ctx->pc = 0x7F243C24u;
    // 7F243C24: b       0x7F243C2C
    {
            goto label_7F243C2C;
    }

label_7F243C28:
    ctx->pc = 0x7F243C28u;
    ctx->downcount -= 1;
    // 7F243C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243C2C:
    ctx->pc = 0x7F243C2Cu;
    ctx->downcount -= 6;
    // 7F243C2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243C30:
    ctx->pc = 0x7F243C30u;
    // 7F243C30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F243C34:
    ctx->pc = 0x7F243C34u;
    // 7F243C34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243C38:
    ctx->pc = 0x7F243C38u;
    // 7F243C38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F243C3C:
    ctx->pc = 0x7F243C3Cu;
    // 7F243C3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243C40:
    ctx->pc = 0x7F243C40u;
    ctx->downcount -= 17;
    // 7F243C40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243C44:
    ctx->pc = 0x7F243C44u;
    // 7F243C44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243C48:
    ctx->pc = 0x7F243C48u;
    // 7F243C48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243C4C:
    ctx->pc = 0x7F243C4Cu;
    // 7F243C4C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F243C50:
    ctx->pc = 0x7F243C50u;
    // 7F243C50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243C54:
    ctx->pc = 0x7F243C54u;
    // 7F243C54: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F243C58:
    ctx->pc = 0x7F243C58u;
    // 7F243C58: bl      0x7F018418
    {
            ctx->lr = 0x7F243C5Cu;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F243C5C:
    ctx->pc = 0x7F243C5Cu;
    ctx->downcount -= 3;
    // 7F243C5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243C60:
    ctx->pc = 0x7F243C60u;
    // 7F243C60: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F243C64:
    ctx->pc = 0x7F243C64u;
    // 7F243C64: bl      0x7F018418
    {
            ctx->lr = 0x7F243C68u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F243C68:
    ctx->pc = 0x7F243C68u;
    ctx->downcount -= 3;
    // 7F243C68: or   r31, r31, r3
    {
        ctx->gpr[31] = ctx->gpr[31] | ctx->gpr[3];
    }

label_7F243C6C:
    ctx->pc = 0x7F243C6Cu;
    // 7F243C6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243C70:
    ctx->pc = 0x7F243C70u;
    // 7F243C70: bl      0x7F3AED60
    {
            ctx->lr = 0x7F243C74u;
            ctx->pc = 0x7F3AED60u;
            return;
    }

label_7F243C74:
    ctx->pc = 0x7F243C74u;
    ctx->downcount -= 3;
    // 7F243C74: lwz     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243C78:
    ctx->pc = 0x7F243C78u;
    // 7F243C78: rlwinm. r0, r0, 0, 31, 31
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

label_7F243C7C:
    ctx->pc = 0x7F243C7Cu;
    // 7F243C7C: bc    12, 2, 0x7F243CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243CCC;
        }
    }

label_7F243C80:
    ctx->pc = 0x7F243C80u;
    ctx->downcount -= 1;
    // 7F243C80: bl      0x7F02221C
    {
            ctx->lr = 0x7F243C84u;
            ctx->pc = 0x7F02221Cu;
            return;
    }

label_7F243C84:
    ctx->pc = 0x7F243C84u;
    ctx->downcount -= 1;
    // 7F243C84: bl      0x7F0222AC
    {
            ctx->lr = 0x7F243C88u;
            ctx->pc = 0x7F0222ACu;
            return;
    }

label_7F243C88:
    ctx->pc = 0x7F243C88u;
    ctx->downcount -= 2;
    // 7F243C88: rlwinm. r0, r31, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F243C8C:
    ctx->pc = 0x7F243C8Cu;
    // 7F243C8C: bc    12, 2, 0x7F243C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243C9C;
        }
    }

label_7F243C90:
    ctx->pc = 0x7F243C90u;
    ctx->downcount -= 2;
    // 7F243C90: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F243C94:
    ctx->pc = 0x7F243C94u;
    // 7F243C94: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243C98u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243C98:
    ctx->pc = 0x7F243C98u;
    ctx->downcount -= 1;
    // 7F243C98: b       0x7F243CA4
    {
            goto label_7F243CA4;
    }

label_7F243C9C:
    ctx->pc = 0x7F243C9Cu;
    ctx->downcount -= 2;
    // 7F243C9C: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F243CA0:
    ctx->pc = 0x7F243CA0u;
    // 7F243CA0: bl      0x7F01808C
    {
            ctx->lr = 0x7F243CA4u;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F243CA4:
    ctx->pc = 0x7F243CA4u;
    ctx->downcount -= 2;
    // 7F243CA4: rlwinm. r0, r31, 0, 10, 10
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00200000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F243CA8:
    ctx->pc = 0x7F243CA8u;
    // 7F243CA8: bc    12, 2, 0x7F243CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243CB8;
        }
    }

label_7F243CAC:
    ctx->pc = 0x7F243CACu;
    ctx->downcount -= 2;
    // 7F243CAC: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F243CB0:
    ctx->pc = 0x7F243CB0u;
    // 7F243CB0: bl      0x7F0180A0
    {
            ctx->lr = 0x7F243CB4u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F243CB4:
    ctx->pc = 0x7F243CB4u;
    ctx->downcount -= 1;
    // 7F243CB4: b       0x7F243CC0
    {
            goto label_7F243CC0;
    }

label_7F243CB8:
    ctx->pc = 0x7F243CB8u;
    ctx->downcount -= 2;
    // 7F243CB8: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F243CBC:
    ctx->pc = 0x7F243CBCu;
    // 7F243CBC: bl      0x7F01808C
    {
            ctx->lr = 0x7F243CC0u;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F243CC0:
    ctx->pc = 0x7F243CC0u;
    ctx->downcount -= 3;
    // 7F243CC0: lwz     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243CC4:
    ctx->pc = 0x7F243CC4u;
    // 7F243CC4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F243CC8:
    ctx->pc = 0x7F243CC8u;
    // 7F243CC8: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243CCC:
    ctx->pc = 0x7F243CCCu;
    ctx->downcount -= 2;
    // 7F243CCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243CD0:
    ctx->pc = 0x7F243CD0u;
    // 7F243CD0: bl      0x7F191328
    {
            ctx->lr = 0x7F243CD4u;
            ctx->pc = 0x7F191328u;
            return;
    }

label_7F243CD4:
    ctx->pc = 0x7F243CD4u;
    ctx->downcount -= 3;
    // 7F243CD4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F243CD8:
    ctx->pc = 0x7F243CD8u;
    // 7F243CD8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F243CDC:
    ctx->pc = 0x7F243CDCu;
    // 7F243CDC: bl      0x7F39A0F4
    {
            ctx->lr = 0x7F243CE0u;
            ctx->pc = 0x7F39A0F4u;
            return;
    }

label_7F243CE0:
    ctx->pc = 0x7F243CE0u;
    ctx->downcount -= 1;
    // 7F243CE0: bl      0x7F22EDEC
    {
            ctx->lr = 0x7F243CE4u;
            ctx->pc = 0x7F22EDECu;
            return;
    }

label_7F243CE4:
    ctx->pc = 0x7F243CE4u;
    ctx->downcount -= 16;
    // 7F243CE4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F243CE8:
    ctx->pc = 0x7F243CE8u;
    // 7F243CE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243CEC:
    ctx->pc = 0x7F243CECu;
    // 7F243CEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243CF0:
    ctx->pc = 0x7F243CF0u;
    // 7F243CF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F243CF4:
    ctx->pc = 0x7F243CF4u;
    // 7F243CF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243CF8:
    ctx->pc = 0x7F243CF8u;
    ctx->downcount -= 8;
    // 7F243CF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243CFC:
    ctx->pc = 0x7F243CFCu;
    // 7F243CFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243D00:
    ctx->pc = 0x7F243D00u;
    // 7F243D00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243D04:
    ctx->pc = 0x7F243D04u;
    // 7F243D04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F243D08:
    ctx->pc = 0x7F243D08u;
    // 7F243D08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243D0C:
    ctx->pc = 0x7F243D0Cu;
    // 7F243D0C: lwz     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243D10:
    ctx->pc = 0x7F243D10u;
    // 7F243D10: cmplwi  r0, 0x0000
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

label_7F243D14:
    ctx->pc = 0x7F243D14u;
    // 7F243D14: bc    4, 2, 0x7F243D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243D88;
        }
    }

label_7F243D18:
    ctx->pc = 0x7F243D18u;
    ctx->downcount -= 21;
    // 7F243D18: lwz     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243D1C:
    ctx->pc = 0x7F243D1Cu;
    // 7F243D1C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F243D20:
    ctx->pc = 0x7F243D20u;
    // 7F243D20: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F243D24:
    ctx->pc = 0x7F243D24u;
    // 7F243D24: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F243D28:
    ctx->pc = 0x7F243D28u;
    // 7F243D28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F243D2C:
    ctx->pc = 0x7F243D2Cu;
    // 7F243D2C: addi    r10, r6, -5768
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-5768);

label_7F243D30:
    ctx->pc = 0x7F243D30u;
    // 7F243D30: addi    r8, r4, 20308
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(20308);

label_7F243D34:
    ctx->pc = 0x7F243D34u;
    // 7F243D34: addi    r9, r5, 20304
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(20304);

label_7F243D38:
    ctx->pc = 0x7F243D38u;
    // 7F243D38: addi    r7, r3, 20312
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(20312);

label_7F243D3C:
    ctx->pc = 0x7F243D3Cu;
    // 7F243D3C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F243D40:
    ctx->pc = 0x7F243D40u;
    // 7F243D40: addi    r5, r3, 14080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F243D44:
    ctx->pc = 0x7F243D44u;
    // 7F243D44: cmpwi   r0, 15
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

label_7F243D48:
    ctx->pc = 0x7F243D48u;
    // 7F243D48: lis     r6, 103
    ctx->gpr[6] = ((u32)(s32)(103) << 16);

label_7F243D4C:
    ctx->pc = 0x7F243D4Cu;
    // 7F243D4C: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F243D4Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F243D50:
    ctx->pc = 0x7F243D50u;
    // 7F243D50: addi    r7, r6, -29609
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-29609);

label_7F243D54:
    ctx->pc = 0x7F243D54u;
    // 7F243D54: lwz     r4, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243D58:
    ctx->pc = 0x7F243D58u;
    // 7F243D58: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F243D58u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F243D5C:
    ctx->pc = 0x7F243D5Cu;
    // 7F243D5C: addi    r3, r31, 112
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(112);

label_7F243D60:
    ctx->pc = 0x7F243D60u;
    // 7F243D60: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F243D60u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F243D64:
    ctx->pc = 0x7F243D64u;
    // 7F243D64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F243D68:
    ctx->pc = 0x7F243D68u;
    // 7F243D68: bc    4, 2, 0x7F243D74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243D74;
        }
    }

label_7F243D6C:
    ctx->pc = 0x7F243D6Cu;
    ctx->downcount -= 2;
    // 7F243D6C: lis     r7, 123
    ctx->gpr[7] = ((u32)(s32)(123) << 16);

label_7F243D70:
    ctx->pc = 0x7F243D70u;
    // 7F243D70: addi    r7, r7, 14123
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14123);

label_7F243D74:
    ctx->pc = 0x7F243D74u;
    ctx->downcount -= 1;
    // 7F243D74: bl      0x7F27FF9C
    {
            ctx->lr = 0x7F243D78u;
            ctx->pc = 0x7F27FF9Cu;
            return;
    }

label_7F243D78:
    ctx->pc = 0x7F243D78u;
    ctx->downcount -= 4;
    // 7F243D78: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F243D7C:
    ctx->pc = 0x7F243D7Cu;
    // 7F243D7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243D80:
    ctx->pc = 0x7F243D80u;
    // 7F243D80: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243D84:
    ctx->pc = 0x7F243D84u;
    // 7F243D84: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F243D88u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F243D88:
    ctx->pc = 0x7F243D88u;
    ctx->downcount -= 3;
    // 7F243D88: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243D8C:
    ctx->pc = 0x7F243D8Cu;
    // 7F243D8C: cmplwi  r0, 0x0000
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

label_7F243D90:
    ctx->pc = 0x7F243D90u;
    // 7F243D90: bc    4, 2, 0x7F243DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243DAC;
        }
    }

label_7F243D94:
    ctx->pc = 0x7F243D94u;
    ctx->downcount -= 2;
    // 7F243D94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F243D98:
    ctx->pc = 0x7F243D98u;
    // 7F243D98: bl      0x7F280274
    {
            ctx->lr = 0x7F243D9Cu;
            ctx->pc = 0x7F280274u;
            return;
    }

label_7F243D9C:
    ctx->pc = 0x7F243D9Cu;
    ctx->downcount -= 4;
    // 7F243D9C: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F243DA0:
    ctx->pc = 0x7F243DA0u;
    // 7F243DA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243DA4:
    ctx->pc = 0x7F243DA4u;
    // 7F243DA4: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243DA8:
    ctx->pc = 0x7F243DA8u;
    // 7F243DA8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F243DACu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F243DAC:
    ctx->pc = 0x7F243DACu;
    ctx->downcount -= 6;
    // 7F243DAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243DB0:
    ctx->pc = 0x7F243DB0u;
    // 7F243DB0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F243DB4:
    ctx->pc = 0x7F243DB4u;
    // 7F243DB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243DB8:
    ctx->pc = 0x7F243DB8u;
    // 7F243DB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F243DBC:
    ctx->pc = 0x7F243DBCu;
    // 7F243DBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243DC0:
    ctx->pc = 0x7F243DC0u;
    ctx->downcount -= 9;
    // 7F243DC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243DC4:
    ctx->pc = 0x7F243DC4u;
    // 7F243DC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243DC8:
    ctx->pc = 0x7F243DC8u;
    // 7F243DC8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F243DCC:
    ctx->pc = 0x7F243DCCu;
    // 7F243DCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243DD0:
    ctx->pc = 0x7F243DD0u;
    // 7F243DD0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F243DD4:
    ctx->pc = 0x7F243DD4u;
    // 7F243DD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243DD8:
    ctx->pc = 0x7F243DD8u;
    // 7F243DD8: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243DDC:
    ctx->pc = 0x7F243DDCu;
    // 7F243DDC: cmpwi   r0, 0
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

label_7F243DE0:
    ctx->pc = 0x7F243DE0u;
    // 7F243DE0: bc    4, 2, 0x7F243E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243E9C;
        }
    }

label_7F243DE4:
    ctx->pc = 0x7F243DE4u;
    ctx->downcount -= 7;
    // 7F243DE4: lhz     r3, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F243DE8:
    ctx->pc = 0x7F243DE8u;
    // 7F243DE8: lwz     r4, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243DEC:
    ctx->pc = 0x7F243DECu;
    // 7F243DEC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F243DF0:
    ctx->pc = 0x7F243DF0u;
    // 7F243DF0: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F243DF4:
    ctx->pc = 0x7F243DF4u;
    // 7F243DF4: sth     r3, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F243DF8:
    ctx->pc = 0x7F243DF8u;
    // 7F243DF8: cmplwi  r0, 0x001E
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x001Eu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243DFC:
    ctx->pc = 0x7F243DFCu;
    // 7F243DFC: bc    4, 1, 0x7F243E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243E78;
        }
    }

label_7F243E00:
    ctx->pc = 0x7F243E00u;
    ctx->downcount -= 3;
    // 7F243E00: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243E04:
    ctx->pc = 0x7F243E04u;
    // 7F243E04: rlwinm. r0, r0, 0, 24, 24
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

label_7F243E08:
    ctx->pc = 0x7F243E08u;
    // 7F243E08: bc    12, 2, 0x7F243E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243E78;
        }
    }

label_7F243E0C:
    ctx->pc = 0x7F243E0Cu;
    ctx->downcount -= 3;
    // 7F243E0C: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243E10:
    ctx->pc = 0x7F243E10u;
    // 7F243E10: cmpwi   r0, 128
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

label_7F243E14:
    ctx->pc = 0x7F243E14u;
    // 7F243E14: bc    12, 2, 0x7F243E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243E78;
        }
    }

label_7F243E18:
    ctx->pc = 0x7F243E18u;
    ctx->downcount -= 3;
    // 7F243E18: lwz     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243E1C:
    ctx->pc = 0x7F243E1Cu;
    // 7F243E1C: cmpwi   r0, 0
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

label_7F243E20:
    ctx->pc = 0x7F243E20u;
    // 7F243E20: bc    12, 1, 0x7F243E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243E78;
        }
    }

label_7F243E24:
    ctx->pc = 0x7F243E24u;
    ctx->downcount -= 1;
    // 7F243E24: bl      0x7F01F590
    {
            ctx->lr = 0x7F243E28u;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F243E28:
    ctx->pc = 0x7F243E28u;
    ctx->downcount -= 2;
    // 7F243E28: cmpwi   r3, 1
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

label_7F243E2C:
    ctx->pc = 0x7F243E2Cu;
    // 7F243E2C: bc    12, 2, 0x7F243E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243E78;
        }
    }

label_7F243E30:
    ctx->pc = 0x7F243E30u;
    ctx->downcount -= 5;
    // 7F243E30: lis     r4, 1536
    ctx->gpr[4] = ((u32)(s32)(1536) << 16);

label_7F243E34:
    ctx->pc = 0x7F243E34u;
    // 7F243E34: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F243E38:
    ctx->pc = 0x7F243E38u;
    // 7F243E38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F243E3C:
    ctx->pc = 0x7F243E3Cu;
    // 7F243E3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243E40:
    ctx->pc = 0x7F243E40u;
    // 7F243E40: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F243E44u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F243E44:
    ctx->pc = 0x7F243E44u;
    ctx->downcount -= 2;
    // 7F243E44: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F243E48:
    ctx->pc = 0x7F243E48u;
    // 7F243E48: bl      0x7F3C8968
    {
            ctx->lr = 0x7F243E4Cu;
            ctx->pc = 0x7F3C8968u;
            return;
    }

label_7F243E4C:
    ctx->pc = 0x7F243E4Cu;
    ctx->downcount -= 4;
    // 7F243E4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243E50:
    ctx->pc = 0x7F243E50u;
    // 7F243E50: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F243E54:
    ctx->pc = 0x7F243E54u;
    // 7F243E54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243E58:
    ctx->pc = 0x7F243E58u;
    // 7F243E58: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F243E5Cu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F243E5C:
    ctx->pc = 0x7F243E5Cu;
    ctx->downcount -= 1;
    // 7F243E5C: bl      0x7F257868
    {
            ctx->lr = 0x7F243E60u;
            ctx->pc = 0x7F257868u;
            return;
    }

label_7F243E60:
    ctx->pc = 0x7F243E60u;
    ctx->downcount -= 3;
    // 7F243E60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243E64:
    ctx->pc = 0x7F243E64u;
    // 7F243E64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243E68:
    ctx->pc = 0x7F243E68u;
    // 7F243E68: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F243E6Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F243E6C:
    ctx->pc = 0x7F243E6Cu;
    ctx->downcount -= 3;
    // 7F243E6C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F243E70:
    ctx->pc = 0x7F243E70u;
    // 7F243E70: sth     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243E74:
    ctx->pc = 0x7F243E74u;
    // 7F243E74: b       0x7F243E9C
    {
            goto label_7F243E9C;
    }

label_7F243E78:
    ctx->pc = 0x7F243E78u;
    ctx->downcount -= 3;
    // 7F243E78: lwz     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243E7C:
    ctx->pc = 0x7F243E7Cu;
    // 7F243E7C: cmpwi   r0, 21
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243E80:
    ctx->pc = 0x7F243E80u;
    // 7F243E80: bc    4, 2, 0x7F243E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243E9C;
        }
    }

label_7F243E84:
    ctx->pc = 0x7F243E84u;
    ctx->downcount -= 3;
    // 7F243E84: lhz     r0, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F243E88:
    ctx->pc = 0x7F243E88u;
    // 7F243E88: cmplwi  r0, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243E8C:
    ctx->pc = 0x7F243E8Cu;
    // 7F243E8C: bc    4, 1, 0x7F243E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243E9C;
        }
    }

label_7F243E90:
    ctx->pc = 0x7F243E90u;
    ctx->downcount -= 3;
    // 7F243E90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243E94:
    ctx->pc = 0x7F243E94u;
    // 7F243E94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F243E98:
    ctx->pc = 0x7F243E98u;
    // 7F243E98: bl      0x7F243224
    {
            ctx->lr = 0x7F243E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243224u;
                return;
            }
            goto label_7F243224;
    }

label_7F243E9C:
    ctx->pc = 0x7F243E9Cu;
    ctx->downcount -= 6;
    // 7F243E9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243EA0:
    ctx->pc = 0x7F243EA0u;
    // 7F243EA0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F243EA4:
    ctx->pc = 0x7F243EA4u;
    // 7F243EA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243EA8:
    ctx->pc = 0x7F243EA8u;
    // 7F243EA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F243EAC:
    ctx->pc = 0x7F243EACu;
    // 7F243EAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243EB0:
    ctx->pc = 0x7F243EB0u;
    ctx->downcount -= 11;
    // 7F243EB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243EB4:
    ctx->pc = 0x7F243EB4u;
    // 7F243EB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243EB8:
    ctx->pc = 0x7F243EB8u;
    // 7F243EB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243EBC:
    ctx->pc = 0x7F243EBCu;
    // 7F243EBC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F243EC0:
    ctx->pc = 0x7F243EC0u;
    // 7F243EC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243EC4:
    ctx->pc = 0x7F243EC4u;
    // 7F243EC4: lhz     r3, 122(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(122);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F243EC8:
    ctx->pc = 0x7F243EC8u;
    // 7F243EC8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F243ECC:
    ctx->pc = 0x7F243ECCu;
    // 7F243ECC: sth     r0, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243ED0:
    ctx->pc = 0x7F243ED0u;
    // 7F243ED0: lhz     r0, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F243ED4:
    ctx->pc = 0x7F243ED4u;
    // 7F243ED4: cmplwi  r0, 0x0032
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0032u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243ED8:
    ctx->pc = 0x7F243ED8u;
    // 7F243ED8: bc    4, 2, 0x7F243EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243EF4;
        }
    }

label_7F243EDC:
    ctx->pc = 0x7F243EDCu;
    ctx->downcount -= 5;
    // 7F243EDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F243EE0:
    ctx->pc = 0x7F243EE0u;
    // 7F243EE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F243EE4:
    ctx->pc = 0x7F243EE4u;
    // 7F243EE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243EE8:
    ctx->pc = 0x7F243EE8u;
    // 7F243EE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F243EEC:
    ctx->pc = 0x7F243EECu;
    // 7F243EEC: bl      0x7F279D40
    {
            ctx->lr = 0x7F243EF0u;
            ctx->pc = 0x7F279D40u;
            return;
    }

label_7F243EF0:
    ctx->pc = 0x7F243EF0u;
    ctx->downcount -= 1;
    // 7F243EF0: b       0x7F243F28
    {
            goto label_7F243F28;
    }

label_7F243EF4:
    ctx->pc = 0x7F243EF4u;
    ctx->downcount -= 2;
    // 7F243EF4: cmplwi  r0, 0x0033
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0033u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F243EF8:
    ctx->pc = 0x7F243EF8u;
    // 7F243EF8: bc    4, 2, 0x7F243F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243F28;
        }
    }

label_7F243EFC:
    ctx->pc = 0x7F243EFCu;
    ctx->downcount -= 5;
    // 7F243EFC: lis     r4, 1536
    ctx->gpr[4] = ((u32)(s32)(1536) << 16);

label_7F243F00:
    ctx->pc = 0x7F243F00u;
    // 7F243F00: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F243F04:
    ctx->pc = 0x7F243F04u;
    // 7F243F04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F243F08:
    ctx->pc = 0x7F243F08u;
    // 7F243F08: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F243F0C:
    ctx->pc = 0x7F243F0Cu;
    // 7F243F0C: bl      0x7F042E08
    {
            ctx->lr = 0x7F243F10u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F243F10:
    ctx->pc = 0x7F243F10u;
    ctx->downcount -= 4;
    // 7F243F10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F243F14:
    ctx->pc = 0x7F243F14u;
    // 7F243F14: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F243F18:
    ctx->pc = 0x7F243F18u;
    // 7F243F18: sth     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F243F1C:
    ctx->pc = 0x7F243F1Cu;
    // 7F243F1C: bl      0x7F3C897C
    {
            ctx->lr = 0x7F243F20u;
            ctx->pc = 0x7F3C897Cu;
            return;
    }

label_7F243F20:
    ctx->pc = 0x7F243F20u;
    ctx->downcount -= 2;
    // 7F243F20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F243F24:
    ctx->pc = 0x7F243F24u;
    // 7F243F24: bl      0x7F243C40
    {
            ctx->lr = 0x7F243F28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243C40u;
                return;
            }
            goto label_7F243C40;
    }

label_7F243F28:
    ctx->pc = 0x7F243F28u;
    ctx->downcount -= 6;
    // 7F243F28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243F2C:
    ctx->pc = 0x7F243F2Cu;
    // 7F243F2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F243F30:
    ctx->pc = 0x7F243F30u;
    // 7F243F30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F243F34:
    ctx->pc = 0x7F243F34u;
    // 7F243F34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F243F38:
    ctx->pc = 0x7F243F38u;
    // 7F243F38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F243F3C:
    ctx->pc = 0x7F243F3Cu;
    ctx->downcount -= 6;
    // 7F243F3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F243F40:
    ctx->pc = 0x7F243F40u;
    // 7F243F40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F243F44:
    ctx->pc = 0x7F243F44u;
    // 7F243F44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243F48:
    ctx->pc = 0x7F243F48u;
    // 7F243F48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F243F4C:
    ctx->pc = 0x7F243F4Cu;
    // 7F243F4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F243F50:
    ctx->pc = 0x7F243F50u;
    // 7F243F50: bl      0x7F243CF8
    {
            ctx->lr = 0x7F243F54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243CF8u;
                return;
            }
            goto label_7F243CF8;
    }

label_7F243F54:
    ctx->pc = 0x7F243F54u;
    ctx->downcount -= 3;
    // 7F243F54: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243F58:
    ctx->pc = 0x7F243F58u;
    // 7F243F58: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243F5C:
    ctx->pc = 0x7F243F5Cu;
    // 7F243F5C: bl      0x7F026F84
    {
            ctx->lr = 0x7F243F60u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F243F60:
    ctx->pc = 0x7F243F60u;
    ctx->downcount -= 3;
    // 7F243F60: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F243F64:
    ctx->pc = 0x7F243F64u;
    // 7F243F64: cmplw   r3, r4
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

label_7F243F68:
    ctx->pc = 0x7F243F68u;
    // 7F243F68: bc    12, 2, 0x7F243F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243F74;
        }
    }

label_7F243F6C:
    ctx->pc = 0x7F243F6Cu;
    ctx->downcount -= 2;
    // 7F243F6C: lwz     r3, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243F70:
    ctx->pc = 0x7F243F70u;
    // 7F243F70: bl      0x7F026B18
    {
            ctx->lr = 0x7F243F74u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F243F74:
    ctx->pc = 0x7F243F74u;
    ctx->downcount -= 5;
    // 7F243F74: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F243F78:
    ctx->pc = 0x7F243F78u;
    // 7F243F78: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F243F7C:
    ctx->pc = 0x7F243F7Cu;
    // 7F243F7C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243F80:
    ctx->pc = 0x7F243F80u;
    // 7F243F80: cmplwi  r3, 0x0000
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

label_7F243F84:
    ctx->pc = 0x7F243F84u;
    // 7F243F84: bc    12, 2, 0x7F243FE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F243FE0;
        }
    }

label_7F243F88:
    ctx->pc = 0x7F243F88u;
    ctx->downcount -= 4;
    // 7F243F88: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243F8C:
    ctx->pc = 0x7F243F8Cu;
    // 7F243F8C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243F90:
    ctx->pc = 0x7F243F90u;
    // 7F243F90: rlwinm. r0, r0, 0, 19, 19
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

label_7F243F94:
    ctx->pc = 0x7F243F94u;
    // 7F243F94: bc    4, 2, 0x7F243FE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F243FE0;
        }
    }

label_7F243F98:
    ctx->pc = 0x7F243F98u;
    ctx->downcount -= 2;
    // 7F243F98: li      r3, 513
    ctx->gpr[3] = (u32)(s32)(513);

label_7F243F9C:
    ctx->pc = 0x7F243F9Cu;
    // 7F243F9C: bl      0x7F24408C
    {
            ctx->lr = 0x7F243FA0u;
            goto label_7F24408C;
    }

label_7F243FA0:
    ctx->pc = 0x7F243FA0u;
    ctx->downcount -= 15;
    // 7F243FA0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F243FA4:
    ctx->pc = 0x7F243FA4u;
    // 7F243FA4: lwz     r7, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F243FA8:
    ctx->pc = 0x7F243FA8u;
    // 7F243FA8: addi    r6, r4, 21980
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(21980);

label_7F243FAC:
    ctx->pc = 0x7F243FACu;
    // 7F243FAC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F243FB0:
    ctx->pc = 0x7F243FB0u;
    // 7F243FB0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F243FB4:
    ctx->pc = 0x7F243FB4u;
    // 7F243FB4: addi    r4, r3, 21964
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(21964);

label_7F243FB8:
    ctx->pc = 0x7F243FB8u;
    // 7F243FB8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243FBC:
    ctx->pc = 0x7F243FBCu;
    // 7F243FBC: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F243FC0:
    ctx->pc = 0x7F243FC0u;
    // 7F243FC0: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243FC4:
    ctx->pc = 0x7F243FC4u;
    // 7F243FC4: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243FC8:
    ctx->pc = 0x7F243FC8u;
    // 7F243FC8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F243FCC:
    ctx->pc = 0x7F243FCCu;
    // 7F243FCC: stw     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F243FD0:
    ctx->pc = 0x7F243FD0u;
    // 7F243FD0: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F243FD4:
    ctx->pc = 0x7F243FD4u;
    // 7F243FD4: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F243FD8:
    ctx->pc = 0x7F243FD8u;
    // 7F243FD8: bl      0x7F026F30
    {
            ctx->lr = 0x7F243FDCu;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F243FDC:
    ctx->pc = 0x7F243FDCu;
    ctx->downcount -= 1;
    // 7F243FDC: b       0x7F244064
    {
            goto label_7F244064;
    }

label_7F243FE0:
    ctx->pc = 0x7F243FE0u;
    ctx->downcount -= 2;
    // 7F243FE0: li      r3, 513
    ctx->gpr[3] = (u32)(s32)(513);

label_7F243FE4:
    ctx->pc = 0x7F243FE4u;
    // 7F243FE4: bl      0x7F244078
    {
            ctx->lr = 0x7F243FE8u;
            goto label_7F244078;
    }

label_7F243FE8:
    ctx->pc = 0x7F243FE8u;
    ctx->downcount -= 3;
    // 7F243FE8: lhz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F243FEC:
    ctx->pc = 0x7F243FECu;
    // 7F243FEC: cmpwi   r0, 2
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

label_7F243FF0:
    ctx->pc = 0x7F243FF0u;
    // 7F243FF0: bc    12, 2, 0x7F244040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244040;
        }
    }

label_7F243FF4:
    ctx->pc = 0x7F243FF4u;
    ctx->downcount -= 1;
    // 7F243FF4: bc    4, 0, 0x7F244004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244004;
        }
    }

label_7F243FF8:
    ctx->pc = 0x7F243FF8u;
    ctx->downcount -= 2;
    // 7F243FF8: cmpwi   r0, 0
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

label_7F243FFC:
    ctx->pc = 0x7F243FFCu;
    // 7F243FFC: bc    12, 2, 0x7F244010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244010;
        }
    }

label_7F244000:
    ctx->pc = 0x7F244000u;
    ctx->downcount -= 1;
    // 7F244000: b       0x7F244064
    {
            goto label_7F244064;
    }

label_7F244004:
    ctx->pc = 0x7F244004u;
    ctx->downcount -= 2;
    // 7F244004: cmpwi   r0, 4
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

label_7F244008:
    ctx->pc = 0x7F244008u;
    // 7F244008: bc    4, 0, 0x7F244064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244064;
        }
    }

label_7F24400C:
    ctx->pc = 0x7F24400Cu;
    ctx->downcount -= 1;
    // 7F24400C: b       0x7F244054
    {
            goto label_7F244054;
    }

label_7F244010:
    ctx->pc = 0x7F244010u;
    ctx->downcount -= 4;
    // 7F244010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244014:
    ctx->pc = 0x7F244014u;
    // 7F244014: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F244018:
    ctx->pc = 0x7F244018u;
    // 7F244018: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F24401C:
    ctx->pc = 0x7F24401Cu;
    // 7F24401C: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F244020u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F244020:
    ctx->pc = 0x7F244020u;
    ctx->downcount -= 3;
    // 7F244020: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244024:
    ctx->pc = 0x7F244024u;
    // 7F244024: cmpwi   r3, 0
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

label_7F244028:
    ctx->pc = 0x7F244028u;
    // 7F244028: bc    4, 1, 0x7F244034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244034;
        }
    }

label_7F24402C:
    ctx->pc = 0x7F24402Cu;
    ctx->downcount -= 2;
    // 7F24402C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F244030:
    ctx->pc = 0x7F244030u;
    // 7F244030: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244034:
    ctx->pc = 0x7F244034u;
    ctx->downcount -= 2;
    // 7F244034: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244038:
    ctx->pc = 0x7F244038u;
    // 7F244038: bl      0x7F243DC0
    {
            ctx->lr = 0x7F24403Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F243DC0u;
                return;
            }
            goto label_7F243DC0;
    }

label_7F24403C:
    ctx->pc = 0x7F24403Cu;
    ctx->downcount -= 1;
    // 7F24403C: b       0x7F244064
    {
            goto label_7F244064;
    }

label_7F244040:
    ctx->pc = 0x7F244040u;
    ctx->downcount -= 5;
    // 7F244040: lwz     r12, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F244044:
    ctx->pc = 0x7F244044u;
    // 7F244044: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244048:
    ctx->pc = 0x7F244048u;
    // 7F244048: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F24404C:
    ctx->pc = 0x7F24404Cu;
    // 7F24404C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F244050u;
            ctx->pc = target;
            return;
        }
    }

label_7F244050:
    ctx->pc = 0x7F244050u;
    ctx->downcount -= 1;
    // 7F244050: b       0x7F244064
    {
            goto label_7F244064;
    }

label_7F244054:
    ctx->pc = 0x7F244054u;
    ctx->downcount -= 4;
    // 7F244054: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244058:
    ctx->pc = 0x7F244058u;
    // 7F244058: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F24405C:
    ctx->pc = 0x7F24405Cu;
    // 7F24405C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F244060:
    ctx->pc = 0x7F244060u;
    // 7F244060: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F244064u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F244064:
    ctx->pc = 0x7F244064u;
    ctx->downcount -= 6;
    // 7F244064: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244068:
    ctx->pc = 0x7F244068u;
    // 7F244068: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24406C:
    ctx->pc = 0x7F24406Cu;
    // 7F24406C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244070:
    ctx->pc = 0x7F244070u;
    // 7F244070: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244074:
    ctx->pc = 0x7F244074u;
    // 7F244074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F244078:
    ctx->pc = 0x7F244078u;
    ctx->downcount -= 5;
    // 7F244078: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24407C:
    ctx->pc = 0x7F24407Cu;
    // 7F24407C: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F244080:
    ctx->pc = 0x7F244080u;
    // 7F244080: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F244084:
    ctx->pc = 0x7F244084u;
    // 7F244084: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244088:
    ctx->pc = 0x7F244088u;
    // 7F244088: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F24408C:
    ctx->pc = 0x7F24408Cu;
    ctx->downcount -= 5;
    // 7F24408C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244090:
    ctx->pc = 0x7F244090u;
    // 7F244090: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F244094:
    ctx->pc = 0x7F244094u;
    // 7F244094: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F244098:
    ctx->pc = 0x7F244098u;
    // 7F244098: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24409C:
    ctx->pc = 0x7F24409Cu;
    // 7F24409C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2400EC;
        }
    }

label_7F2440A0:
    ctx->pc = 0x7F2440A0u;
    ctx->downcount -= 8;
    // 7F2440A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2440A4:
    ctx->pc = 0x7F2440A4u;
    // 7F2440A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2440A8:
    ctx->pc = 0x7F2440A8u;
    // 7F2440A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2440AC:
    ctx->pc = 0x7F2440ACu;
    // 7F2440AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2440B0:
    ctx->pc = 0x7F2440B0u;
    // 7F2440B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2440B4:
    ctx->pc = 0x7F2440B4u;
    // 7F2440B4: lwz     r3, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2440B8:
    ctx->pc = 0x7F2440B8u;
    // 7F2440B8: cmplwi  r3, 0x0000
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

label_7F2440BC:
    ctx->pc = 0x7F2440BCu;
    // 7F2440BC: bc    12, 2, 0x7F2440C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2440C8;
        }
    }

label_7F2440C0:
    ctx->pc = 0x7F2440C0u;
    ctx->downcount -= 2;
    // 7F2440C0: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2440C4:
    ctx->pc = 0x7F2440C4u;
    // 7F2440C4: bl      0x7F026B18
    {
            ctx->lr = 0x7F2440C8u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F2440C8:
    ctx->pc = 0x7F2440C8u;
    ctx->downcount -= 2;
    // 7F2440C8: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2440CC:
    ctx->pc = 0x7F2440CCu;
    // 7F2440CC: bl      0x7F0259FC
    {
            ctx->lr = 0x7F2440D0u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F2440D0:
    ctx->pc = 0x7F2440D0u;
    ctx->downcount -= 7;
    // 7F2440D0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2440D4:
    ctx->pc = 0x7F2440D4u;
    // 7F2440D4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2440D8:
    ctx->pc = 0x7F2440D8u;
    // 7F2440D8: addi    r5, r4, 24764
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(24764);

label_7F2440DC:
    ctx->pc = 0x7F2440DCu;
    // 7F2440DC: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F2440E0:
    ctx->pc = 0x7F2440E0u;
    // 7F2440E0: addi    r4, r3, 24768
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24768);

label_7F2440E4:
    ctx->pc = 0x7F2440E4u;
    // 7F2440E4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2440E8:
    ctx->pc = 0x7F2440E8u;
    // 7F2440E8: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

    ctx->pc = 0x7F2440ECu;
    return;
return_dispatch_7F2400EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F240100u: goto label_7F240100;
    case 0x7F240130u: goto label_7F240130;
    case 0x7F240140u: goto label_7F240140;
    case 0x7F24015Cu: goto label_7F24015C;
    case 0x7F24016Cu: goto label_7F24016C;
    case 0x7F240174u: goto label_7F240174;
    case 0x7F24019Cu: goto label_7F24019C;
    case 0x7F2401ACu: goto label_7F2401AC;
    case 0x7F2401BCu: goto label_7F2401BC;
    case 0x7F2401E0u: goto label_7F2401E0;
    case 0x7F240204u: goto label_7F240204;
    case 0x7F240214u: goto label_7F240214;
    case 0x7F2402A0u: goto label_7F2402A0;
    case 0x7F2402C8u: goto label_7F2402C8;
    case 0x7F2402ECu: goto label_7F2402EC;
    case 0x7F240344u: goto label_7F240344;
    case 0x7F240388u: goto label_7F240388;
    case 0x7F2403B0u: goto label_7F2403B0;
    case 0x7F2403BCu: goto label_7F2403BC;
    case 0x7F2403C8u: goto label_7F2403C8;
    case 0x7F2403E8u: goto label_7F2403E8;
    case 0x7F2404A4u: goto label_7F2404A4;
    case 0x7F240504u: goto label_7F240504;
    case 0x7F24050Cu: goto label_7F24050C;
    case 0x7F240514u: goto label_7F240514;
    case 0x7F24051Cu: goto label_7F24051C;
    case 0x7F240524u: goto label_7F240524;
    case 0x7F24052Cu: goto label_7F24052C;
    case 0x7F240570u: goto label_7F240570;
    case 0x7F240574u: goto label_7F240574;
    case 0x7F2405BCu: goto label_7F2405BC;
    case 0x7F2406A4u: goto label_7F2406A4;
    case 0x7F2406D4u: goto label_7F2406D4;
    case 0x7F240718u: goto label_7F240718;
    case 0x7F2407B4u: goto label_7F2407B4;
    case 0x7F2407C4u: goto label_7F2407C4;
    case 0x7F2407D0u: goto label_7F2407D0;
    case 0x7F2407E4u: goto label_7F2407E4;
    case 0x7F24082Cu: goto label_7F24082C;
    case 0x7F240838u: goto label_7F240838;
    case 0x7F24084Cu: goto label_7F24084C;
    case 0x7F240854u: goto label_7F240854;
    case 0x7F240898u: goto label_7F240898;
    case 0x7F2408B0u: goto label_7F2408B0;
    case 0x7F2408E8u: goto label_7F2408E8;
    case 0x7F2408F8u: goto label_7F2408F8;
    case 0x7F240900u: goto label_7F240900;
    case 0x7F240908u: goto label_7F240908;
    case 0x7F240914u: goto label_7F240914;
    case 0x7F240938u: goto label_7F240938;
    case 0x7F240994u: goto label_7F240994;
    case 0x7F2409C4u: goto label_7F2409C4;
    case 0x7F2409D0u: goto label_7F2409D0;
    case 0x7F2409D8u: goto label_7F2409D8;
    case 0x7F2409E4u: goto label_7F2409E4;
    case 0x7F240A28u: goto label_7F240A28;
    case 0x7F240A74u: goto label_7F240A74;
    case 0x7F240A94u: goto label_7F240A94;
    case 0x7F240AA0u: goto label_7F240AA0;
    case 0x7F240AACu: goto label_7F240AAC;
    case 0x7F240ABCu: goto label_7F240ABC;
    case 0x7F240AD4u: goto label_7F240AD4;
    case 0x7F240AFCu: goto label_7F240AFC;
    case 0x7F240B4Cu: goto label_7F240B4C;
    case 0x7F240B88u: goto label_7F240B88;
    case 0x7F240BC0u: goto label_7F240BC0;
    case 0x7F240BDCu: goto label_7F240BDC;
    case 0x7F240BF4u: goto label_7F240BF4;
    case 0x7F240BFCu: goto label_7F240BFC;
    case 0x7F240D04u: goto label_7F240D04;
    case 0x7F240D0Cu: goto label_7F240D0C;
    case 0x7F240D18u: goto label_7F240D18;
    case 0x7F240D1Cu: goto label_7F240D1C;
    case 0x7F240D38u: goto label_7F240D38;
    case 0x7F240D60u: goto label_7F240D60;
    case 0x7F240E24u: goto label_7F240E24;
    case 0x7F240E40u: goto label_7F240E40;
    case 0x7F240E58u: goto label_7F240E58;
    case 0x7F240E68u: goto label_7F240E68;
    case 0x7F240EACu: goto label_7F240EAC;
    case 0x7F240EB8u: goto label_7F240EB8;
    case 0x7F240EC0u: goto label_7F240EC0;
    case 0x7F240EC8u: goto label_7F240EC8;
    case 0x7F240ED4u: goto label_7F240ED4;
    case 0x7F240EF4u: goto label_7F240EF4;
    case 0x7F240F08u: goto label_7F240F08;
    case 0x7F240F80u: goto label_7F240F80;
    case 0x7F240FA4u: goto label_7F240FA4;
    case 0x7F240FB8u: goto label_7F240FB8;
    case 0x7F241064u: goto label_7F241064;
    case 0x7F241074u: goto label_7F241074;
    case 0x7F241084u: goto label_7F241084;
    case 0x7F241158u: goto label_7F241158;
    case 0x7F2411E0u: goto label_7F2411E0;
    case 0x7F2411ECu: goto label_7F2411EC;
    case 0x7F2411F8u: goto label_7F2411F8;
    case 0x7F241220u: goto label_7F241220;
    case 0x7F24127Cu: goto label_7F24127C;
    case 0x7F2412C4u: goto label_7F2412C4;
    case 0x7F241428u: goto label_7F241428;
    case 0x7F241444u: goto label_7F241444;
    case 0x7F241458u: goto label_7F241458;
    case 0x7F241480u: goto label_7F241480;
    case 0x7F2414C0u: goto label_7F2414C0;
    case 0x7F2414C8u: goto label_7F2414C8;
    case 0x7F2414ECu: goto label_7F2414EC;
    case 0x7F241544u: goto label_7F241544;
    case 0x7F241560u: goto label_7F241560;
    case 0x7F241584u: goto label_7F241584;
    case 0x7F24158Cu: goto label_7F24158C;
    case 0x7F2415E0u: goto label_7F2415E0;
    case 0x7F2415ECu: goto label_7F2415EC;
    case 0x7F2415F4u: goto label_7F2415F4;
    case 0x7F241604u: goto label_7F241604;
    case 0x7F241648u: goto label_7F241648;
    case 0x7F241650u: goto label_7F241650;
    case 0x7F24168Cu: goto label_7F24168C;
    case 0x7F241694u: goto label_7F241694;
    case 0x7F2416A4u: goto label_7F2416A4;
    case 0x7F2416B0u: goto label_7F2416B0;
    case 0x7F2416B8u: goto label_7F2416B8;
    case 0x7F24171Cu: goto label_7F24171C;
    case 0x7F241738u: goto label_7F241738;
    case 0x7F241760u: goto label_7F241760;
    case 0x7F241770u: goto label_7F241770;
    case 0x7F241784u: goto label_7F241784;
    case 0x7F2417C0u: goto label_7F2417C0;
    case 0x7F2417CCu: goto label_7F2417CC;
    case 0x7F241800u: goto label_7F241800;
    case 0x7F241810u: goto label_7F241810;
    case 0x7F24181Cu: goto label_7F24181C;
    case 0x7F241838u: goto label_7F241838;
    case 0x7F24185Cu: goto label_7F24185C;
    case 0x7F2418C4u: goto label_7F2418C4;
    case 0x7F2418D4u: goto label_7F2418D4;
    case 0x7F241940u: goto label_7F241940;
    case 0x7F241960u: goto label_7F241960;
    case 0x7F2419B8u: goto label_7F2419B8;
    case 0x7F2419FCu: goto label_7F2419FC;
    case 0x7F241A5Cu: goto label_7F241A5C;
    case 0x7F241A68u: goto label_7F241A68;
    case 0x7F241A70u: goto label_7F241A70;
    case 0x7F241A98u: goto label_7F241A98;
    case 0x7F241AB8u: goto label_7F241AB8;
    case 0x7F241B10u: goto label_7F241B10;
    case 0x7F241B64u: goto label_7F241B64;
    case 0x7F241B74u: goto label_7F241B74;
    case 0x7F241B80u: goto label_7F241B80;
    case 0x7F241BB4u: goto label_7F241BB4;
    case 0x7F241BC4u: goto label_7F241BC4;
    case 0x7F241BD0u: goto label_7F241BD0;
    case 0x7F241BECu: goto label_7F241BEC;
    case 0x7F241E0Cu: goto label_7F241E0C;
    case 0x7F241E84u: goto label_7F241E84;
    case 0x7F241EC4u: goto label_7F241EC4;
    case 0x7F241ECCu: goto label_7F241ECC;
    case 0x7F241ED4u: goto label_7F241ED4;
    case 0x7F241EE4u: goto label_7F241EE4;
    case 0x7F241F6Cu: goto label_7F241F6C;
    case 0x7F24200Cu: goto label_7F24200C;
    case 0x7F242018u: goto label_7F242018;
    case 0x7F24205Cu: goto label_7F24205C;
    case 0x7F242074u: goto label_7F242074;
    case 0x7F242088u: goto label_7F242088;
    case 0x7F242094u: goto label_7F242094;
    case 0x7F2420A0u: goto label_7F2420A0;
    case 0x7F2420BCu: goto label_7F2420BC;
    case 0x7F242110u: goto label_7F242110;
    case 0x7F242174u: goto label_7F242174;
    case 0x7F242194u: goto label_7F242194;
    case 0x7F2421A0u: goto label_7F2421A0;
    case 0x7F24234Cu: goto label_7F24234C;
    case 0x7F24235Cu: goto label_7F24235C;
    case 0x7F242368u: goto label_7F242368;
    case 0x7F24237Cu: goto label_7F24237C;
    case 0x7F2423B8u: goto label_7F2423B8;
    case 0x7F242414u: goto label_7F242414;
    case 0x7F242424u: goto label_7F242424;
    case 0x7F24242Cu: goto label_7F24242C;
    case 0x7F242454u: goto label_7F242454;
    case 0x7F242464u: goto label_7F242464;
    case 0x7F242484u: goto label_7F242484;
    case 0x7F2424C0u: goto label_7F2424C0;
    case 0x7F2424CCu: goto label_7F2424CC;
    case 0x7F2424D4u: goto label_7F2424D4;
    case 0x7F2424DCu: goto label_7F2424DC;
    case 0x7F2424F4u: goto label_7F2424F4;
    case 0x7F242510u: goto label_7F242510;
    case 0x7F242528u: goto label_7F242528;
    case 0x7F242590u: goto label_7F242590;
    case 0x7F24259Cu: goto label_7F24259C;
    case 0x7F2425B0u: goto label_7F2425B0;
    case 0x7F2425C0u: goto label_7F2425C0;
    case 0x7F2425E4u: goto label_7F2425E4;
    case 0x7F242600u: goto label_7F242600;
    case 0x7F242628u: goto label_7F242628;
    case 0x7F2426FCu: goto label_7F2426FC;
    case 0x7F24270Cu: goto label_7F24270C;
    case 0x7F242720u: goto label_7F242720;
    case 0x7F242728u: goto label_7F242728;
    case 0x7F242844u: goto label_7F242844;
    case 0x7F242850u: goto label_7F242850;
    case 0x7F2428B4u: goto label_7F2428B4;
    case 0x7F242904u: goto label_7F242904;
    case 0x7F242918u: goto label_7F242918;
    case 0x7F24293Cu: goto label_7F24293C;
    case 0x7F24297Cu: goto label_7F24297C;
    case 0x7F24298Cu: goto label_7F24298C;
    case 0x7F2429D0u: goto label_7F2429D0;
    case 0x7F2429DCu: goto label_7F2429DC;
    case 0x7F2429E4u: goto label_7F2429E4;
    case 0x7F2429ECu: goto label_7F2429EC;
    case 0x7F242A1Cu: goto label_7F242A1C;
    case 0x7F242A30u: goto label_7F242A30;
    case 0x7F242A68u: goto label_7F242A68;
    case 0x7F242AB4u: goto label_7F242AB4;
    case 0x7F242AECu: goto label_7F242AEC;
    case 0x7F242AFCu: goto label_7F242AFC;
    case 0x7F242B00u: goto label_7F242B00;
    case 0x7F242B2Cu: goto label_7F242B2C;
    case 0x7F242B5Cu: goto label_7F242B5C;
    case 0x7F242BACu: goto label_7F242BAC;
    case 0x7F242BE4u: goto label_7F242BE4;
    case 0x7F242BF0u: goto label_7F242BF0;
    case 0x7F242BFCu: goto label_7F242BFC;
    case 0x7F242C08u: goto label_7F242C08;
    case 0x7F242C2Cu: goto label_7F242C2C;
    case 0x7F242CA4u: goto label_7F242CA4;
    case 0x7F242CE0u: goto label_7F242CE0;
    case 0x7F242D00u: goto label_7F242D00;
    case 0x7F242D0Cu: goto label_7F242D0C;
    case 0x7F242D48u: goto label_7F242D48;
    case 0x7F242D68u: goto label_7F242D68;
    case 0x7F242DBCu: goto label_7F242DBC;
    case 0x7F242DE0u: goto label_7F242DE0;
    case 0x7F242E10u: goto label_7F242E10;
    case 0x7F242E20u: goto label_7F242E20;
    case 0x7F242EB0u: goto label_7F242EB0;
    case 0x7F242FE8u: goto label_7F242FE8;
    case 0x7F242FF4u: goto label_7F242FF4;
    case 0x7F24308Cu: goto label_7F24308C;
    case 0x7F2430B0u: goto label_7F2430B0;
    case 0x7F2430C0u: goto label_7F2430C0;
    case 0x7F2430D0u: goto label_7F2430D0;
    case 0x7F2430E4u: goto label_7F2430E4;
    case 0x7F2430ECu: goto label_7F2430EC;
    case 0x7F2431C0u: goto label_7F2431C0;
    case 0x7F2431D0u: goto label_7F2431D0;
    case 0x7F2431E0u: goto label_7F2431E0;
    case 0x7F2431F4u: goto label_7F2431F4;
    case 0x7F2431FCu: goto label_7F2431FC;
    case 0x7F243294u: goto label_7F243294;
    case 0x7F24329Cu: goto label_7F24329C;
    case 0x7F2432B8u: goto label_7F2432B8;
    case 0x7F243328u: goto label_7F243328;
    case 0x7F243340u: goto label_7F243340;
    case 0x7F24334Cu: goto label_7F24334C;
    case 0x7F243358u: goto label_7F243358;
    case 0x7F24336Cu: goto label_7F24336C;
    case 0x7F243378u: goto label_7F243378;
    case 0x7F243384u: goto label_7F243384;
    case 0x7F2433C8u: goto label_7F2433C8;
    case 0x7F243400u: goto label_7F243400;
    case 0x7F243418u: goto label_7F243418;
    case 0x7F243450u: goto label_7F243450;
    case 0x7F2434A4u: goto label_7F2434A4;
    case 0x7F2434DCu: goto label_7F2434DC;
    case 0x7F243500u: goto label_7F243500;
    case 0x7F243524u: goto label_7F243524;
    case 0x7F243540u: goto label_7F243540;
    case 0x7F243570u: goto label_7F243570;
    case 0x7F243588u: goto label_7F243588;
    case 0x7F2435C0u: goto label_7F2435C0;
    case 0x7F24364Cu: goto label_7F24364C;
    case 0x7F2436F4u: goto label_7F2436F4;
    case 0x7F243734u: goto label_7F243734;
    case 0x7F243744u: goto label_7F243744;
    case 0x7F243770u: goto label_7F243770;
    case 0x7F243788u: goto label_7F243788;
    case 0x7F2437DCu: goto label_7F2437DC;
    case 0x7F243834u: goto label_7F243834;
    case 0x7F24389Cu: goto label_7F24389C;
    case 0x7F2438ACu: goto label_7F2438AC;
    case 0x7F243994u: goto label_7F243994;
    case 0x7F243A20u: goto label_7F243A20;
    case 0x7F243A50u: goto label_7F243A50;
    case 0x7F243B30u: goto label_7F243B30;
    case 0x7F243B40u: goto label_7F243B40;
    case 0x7F243B4Cu: goto label_7F243B4C;
    case 0x7F243B68u: goto label_7F243B68;
    case 0x7F243B6Cu: goto label_7F243B6C;
    case 0x7F243B70u: goto label_7F243B70;
    case 0x7F243B74u: goto label_7F243B74;
    case 0x7F243B7Cu: goto label_7F243B7C;
    case 0x7F243B84u: goto label_7F243B84;
    case 0x7F243B8Cu: goto label_7F243B8C;
    case 0x7F243B94u: goto label_7F243B94;
    case 0x7F243B9Cu: goto label_7F243B9C;
    case 0x7F243BA4u: goto label_7F243BA4;
    case 0x7F243BB0u: goto label_7F243BB0;
    case 0x7F243BB8u: goto label_7F243BB8;
    case 0x7F243BD8u: goto label_7F243BD8;
    case 0x7F243BE0u: goto label_7F243BE0;
    case 0x7F243BF8u: goto label_7F243BF8;
    case 0x7F243C20u: goto label_7F243C20;
    case 0x7F243C5Cu: goto label_7F243C5C;
    case 0x7F243C68u: goto label_7F243C68;
    case 0x7F243C74u: goto label_7F243C74;
    case 0x7F243C84u: goto label_7F243C84;
    case 0x7F243C88u: goto label_7F243C88;
    case 0x7F243C98u: goto label_7F243C98;
    case 0x7F243CA4u: goto label_7F243CA4;
    case 0x7F243CB4u: goto label_7F243CB4;
    case 0x7F243CC0u: goto label_7F243CC0;
    case 0x7F243CD4u: goto label_7F243CD4;
    case 0x7F243CE0u: goto label_7F243CE0;
    case 0x7F243CE4u: goto label_7F243CE4;
    case 0x7F243D78u: goto label_7F243D78;
    case 0x7F243D88u: goto label_7F243D88;
    case 0x7F243D9Cu: goto label_7F243D9C;
    case 0x7F243DACu: goto label_7F243DAC;
    case 0x7F243E28u: goto label_7F243E28;
    case 0x7F243E44u: goto label_7F243E44;
    case 0x7F243E4Cu: goto label_7F243E4C;
    case 0x7F243E5Cu: goto label_7F243E5C;
    case 0x7F243E60u: goto label_7F243E60;
    case 0x7F243E6Cu: goto label_7F243E6C;
    case 0x7F243E9Cu: goto label_7F243E9C;
    case 0x7F243EF0u: goto label_7F243EF0;
    case 0x7F243F10u: goto label_7F243F10;
    case 0x7F243F20u: goto label_7F243F20;
    case 0x7F243F28u: goto label_7F243F28;
    case 0x7F243F54u: goto label_7F243F54;
    case 0x7F243F60u: goto label_7F243F60;
    case 0x7F243F74u: goto label_7F243F74;
    case 0x7F243FA0u: goto label_7F243FA0;
    case 0x7F243FDCu: goto label_7F243FDC;
    case 0x7F243FE8u: goto label_7F243FE8;
    case 0x7F244020u: goto label_7F244020;
    case 0x7F24403Cu: goto label_7F24403C;
    case 0x7F244050u: goto label_7F244050;
    case 0x7F244064u: goto label_7F244064;
    case 0x7F2440C8u: goto label_7F2440C8;
    case 0x7F2440D0u: goto label_7F2440D0;
    default: return;
    }
}

