// DolRecomp output
#include "../generated.h"

static void loop_7F45C43C(CPUState* ctx) {
label_7F45C43C:
    ctx->downcount -= 23;
    ctx->pc = 0x7F45C43Cu;
    // 7F45C43C: lwz     r4, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F45C440: mullw   r0, r7, r6
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

    // 7F45C444: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    // 7F45C448: subfic  r4, r4, 8
    {
        u64 res = (u64)(u32)(s32)(8) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

    // 7F45C44C: mullw   r5, r4, r3
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[5] = (u32)product;
    }

    // 7F45C450: addi    r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3);

    // 7F45C454: srawi r0, r0, 5
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

    // 7F45C458: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F45C45C: addi    r5, r5, 30
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30);

    // 7F45C460: addi    r0, r4, 2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2);

    ctx->pc = 0x7F45C464u;
    // 7F45C464: sth     r5, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F45C468u;
    // 7F45C468: sth     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F45C46Cu;
    // 7F45C46C: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F45C470: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

    // 7F45C474: bc    16, 0, 0x7F45C43C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C43Cu;
                return;
            }
            goto label_7F45C43C;
        }
    }

    ctx->pc = 0x7F45C478u;
}

static void loop_7F45C48C(CPUState* ctx) {
label_7F45C48C:
    ctx->downcount -= 16;
    // 7F45C48C: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    // 7F45C490: addi    r4, r3, 30
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(30);

    ctx->pc = 0x7F45C494u;
    // 7F45C494: sth     r4, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    // 7F45C498: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F45C49C: addi    r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3);

    ctx->pc = 0x7F45C4A0u;
    // 7F45C4A0: sth     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    // 7F45C4A4: srawi r0, r0, 5
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

    // 7F45C4A8: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    // 7F45C4AC: addi    r0, r4, 2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2);

    ctx->pc = 0x7F45C4B0u;
    // 7F45C4B0: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F45C4B4: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

    // 7F45C4B8: bc    16, 0, 0x7F45C48C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C48Cu;
                return;
            }
            goto label_7F45C48C;
        }
    }

    ctx->pc = 0x7F45C4BCu;
}

static void loop_7F45C700(CPUState* ctx) {
label_7F45C700:
    ctx->downcount -= 12;
    ctx->pc = 0x7F45C700u;
    // 7F45C700: sth     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F45C704u;
    // 7F45C704: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F45C708u;
    // 7F45C708: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F45C70Cu;
    // 7F45C70C: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F45C710u;
    // 7F45C710: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F45C714u;
    // 7F45C714: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F45C718u;
    // 7F45C718: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F45C71Cu;
    // 7F45C71C: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F45C720u;
    // 7F45C720: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F45C724u;
    // 7F45C724: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    // 7F45C728: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

    // 7F45C72C: bc    16, 0, 0x7F45C700
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C700u;
                return;
            }
            goto label_7F45C700;
        }
    }

    ctx->pc = 0x7F45C730u;
}

void func_7F45C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F45C0ECu: goto label_7F45C0EC;
    case 0x7F45C0F0u: goto label_7F45C0F0;
    case 0x7F45C0F4u: goto label_7F45C0F4;
    case 0x7F45C0F8u: goto label_7F45C0F8;
    case 0x7F45C0FCu: goto label_7F45C0FC;
    case 0x7F45C100u: goto label_7F45C100;
    case 0x7F45C104u: goto label_7F45C104;
    case 0x7F45C108u: goto label_7F45C108;
    case 0x7F45C10Cu: goto label_7F45C10C;
    case 0x7F45C110u: goto label_7F45C110;
    case 0x7F45C114u: goto label_7F45C114;
    case 0x7F45C118u: goto label_7F45C118;
    case 0x7F45C11Cu: goto label_7F45C11C;
    case 0x7F45C120u: goto label_7F45C120;
    case 0x7F45C124u: goto label_7F45C124;
    case 0x7F45C128u: goto label_7F45C128;
    case 0x7F45C12Cu: goto label_7F45C12C;
    case 0x7F45C130u: goto label_7F45C130;
    case 0x7F45C134u: goto label_7F45C134;
    case 0x7F45C138u: goto label_7F45C138;
    case 0x7F45C13Cu: goto label_7F45C13C;
    case 0x7F45C140u: goto label_7F45C140;
    case 0x7F45C144u: goto label_7F45C144;
    case 0x7F45C148u: goto label_7F45C148;
    case 0x7F45C14Cu: goto label_7F45C14C;
    case 0x7F45C150u: goto label_7F45C150;
    case 0x7F45C154u: goto label_7F45C154;
    case 0x7F45C158u: goto label_7F45C158;
    case 0x7F45C15Cu: goto label_7F45C15C;
    case 0x7F45C160u: goto label_7F45C160;
    case 0x7F45C164u: goto label_7F45C164;
    case 0x7F45C168u: goto label_7F45C168;
    case 0x7F45C16Cu: goto label_7F45C16C;
    case 0x7F45C170u: goto label_7F45C170;
    case 0x7F45C174u: goto label_7F45C174;
    case 0x7F45C178u: goto label_7F45C178;
    case 0x7F45C17Cu: goto label_7F45C17C;
    case 0x7F45C180u: goto label_7F45C180;
    case 0x7F45C184u: goto label_7F45C184;
    case 0x7F45C188u: goto label_7F45C188;
    case 0x7F45C18Cu: goto label_7F45C18C;
    case 0x7F45C190u: goto label_7F45C190;
    case 0x7F45C194u: goto label_7F45C194;
    case 0x7F45C198u: goto label_7F45C198;
    case 0x7F45C19Cu: goto label_7F45C19C;
    case 0x7F45C1A0u: goto label_7F45C1A0;
    case 0x7F45C1A4u: goto label_7F45C1A4;
    case 0x7F45C1A8u: goto label_7F45C1A8;
    case 0x7F45C1ACu: goto label_7F45C1AC;
    case 0x7F45C1B0u: goto label_7F45C1B0;
    case 0x7F45C1B4u: goto label_7F45C1B4;
    case 0x7F45C1B8u: goto label_7F45C1B8;
    case 0x7F45C1BCu: goto label_7F45C1BC;
    case 0x7F45C1C0u: goto label_7F45C1C0;
    case 0x7F45C1C4u: goto label_7F45C1C4;
    case 0x7F45C1C8u: goto label_7F45C1C8;
    case 0x7F45C1CCu: goto label_7F45C1CC;
    case 0x7F45C1D0u: goto label_7F45C1D0;
    case 0x7F45C1D4u: goto label_7F45C1D4;
    case 0x7F45C1D8u: goto label_7F45C1D8;
    case 0x7F45C1DCu: goto label_7F45C1DC;
    case 0x7F45C1E0u: goto label_7F45C1E0;
    case 0x7F45C1E4u: goto label_7F45C1E4;
    case 0x7F45C1E8u: goto label_7F45C1E8;
    case 0x7F45C1ECu: goto label_7F45C1EC;
    case 0x7F45C1F0u: goto label_7F45C1F0;
    case 0x7F45C1F4u: goto label_7F45C1F4;
    case 0x7F45C1F8u: goto label_7F45C1F8;
    case 0x7F45C1FCu: goto label_7F45C1FC;
    case 0x7F45C200u: goto label_7F45C200;
    case 0x7F45C204u: goto label_7F45C204;
    case 0x7F45C208u: goto label_7F45C208;
    case 0x7F45C20Cu: goto label_7F45C20C;
    case 0x7F45C210u: goto label_7F45C210;
    case 0x7F45C214u: goto label_7F45C214;
    case 0x7F45C218u: goto label_7F45C218;
    case 0x7F45C21Cu: goto label_7F45C21C;
    case 0x7F45C220u: goto label_7F45C220;
    case 0x7F45C224u: goto label_7F45C224;
    case 0x7F45C228u: goto label_7F45C228;
    case 0x7F45C22Cu: goto label_7F45C22C;
    case 0x7F45C230u: goto label_7F45C230;
    case 0x7F45C234u: goto label_7F45C234;
    case 0x7F45C238u: goto label_7F45C238;
    case 0x7F45C23Cu: goto label_7F45C23C;
    case 0x7F45C240u: goto label_7F45C240;
    case 0x7F45C244u: goto label_7F45C244;
    case 0x7F45C248u: goto label_7F45C248;
    case 0x7F45C24Cu: goto label_7F45C24C;
    case 0x7F45C250u: goto label_7F45C250;
    case 0x7F45C254u: goto label_7F45C254;
    case 0x7F45C258u: goto label_7F45C258;
    case 0x7F45C25Cu: goto label_7F45C25C;
    case 0x7F45C260u: goto label_7F45C260;
    case 0x7F45C264u: goto label_7F45C264;
    case 0x7F45C268u: goto label_7F45C268;
    case 0x7F45C26Cu: goto label_7F45C26C;
    case 0x7F45C270u: goto label_7F45C270;
    case 0x7F45C274u: goto label_7F45C274;
    case 0x7F45C278u: goto label_7F45C278;
    case 0x7F45C27Cu: goto label_7F45C27C;
    case 0x7F45C280u: goto label_7F45C280;
    case 0x7F45C284u: goto label_7F45C284;
    case 0x7F45C288u: goto label_7F45C288;
    case 0x7F45C28Cu: goto label_7F45C28C;
    case 0x7F45C290u: goto label_7F45C290;
    case 0x7F45C294u: goto label_7F45C294;
    case 0x7F45C298u: goto label_7F45C298;
    case 0x7F45C29Cu: goto label_7F45C29C;
    case 0x7F45C2A0u: goto label_7F45C2A0;
    case 0x7F45C2A4u: goto label_7F45C2A4;
    case 0x7F45C2A8u: goto label_7F45C2A8;
    case 0x7F45C2ACu: goto label_7F45C2AC;
    case 0x7F45C2B0u: goto label_7F45C2B0;
    case 0x7F45C2B4u: goto label_7F45C2B4;
    case 0x7F45C2B8u: goto label_7F45C2B8;
    case 0x7F45C2BCu: goto label_7F45C2BC;
    case 0x7F45C2C0u: goto label_7F45C2C0;
    case 0x7F45C2C4u: goto label_7F45C2C4;
    case 0x7F45C2C8u: goto label_7F45C2C8;
    case 0x7F45C2CCu: goto label_7F45C2CC;
    case 0x7F45C2D0u: goto label_7F45C2D0;
    case 0x7F45C2D4u: goto label_7F45C2D4;
    case 0x7F45C2D8u: goto label_7F45C2D8;
    case 0x7F45C2DCu: goto label_7F45C2DC;
    case 0x7F45C2E0u: goto label_7F45C2E0;
    case 0x7F45C2E4u: goto label_7F45C2E4;
    case 0x7F45C2E8u: goto label_7F45C2E8;
    case 0x7F45C2ECu: goto label_7F45C2EC;
    case 0x7F45C2F0u: goto label_7F45C2F0;
    case 0x7F45C2F4u: goto label_7F45C2F4;
    case 0x7F45C2F8u: goto label_7F45C2F8;
    case 0x7F45C2FCu: goto label_7F45C2FC;
    case 0x7F45C300u: goto label_7F45C300;
    case 0x7F45C304u: goto label_7F45C304;
    case 0x7F45C308u: goto label_7F45C308;
    case 0x7F45C30Cu: goto label_7F45C30C;
    case 0x7F45C310u: goto label_7F45C310;
    case 0x7F45C314u: goto label_7F45C314;
    case 0x7F45C318u: goto label_7F45C318;
    case 0x7F45C31Cu: goto label_7F45C31C;
    case 0x7F45C320u: goto label_7F45C320;
    case 0x7F45C324u: goto label_7F45C324;
    case 0x7F45C328u: goto label_7F45C328;
    case 0x7F45C32Cu: goto label_7F45C32C;
    case 0x7F45C330u: goto label_7F45C330;
    case 0x7F45C334u: goto label_7F45C334;
    case 0x7F45C338u: goto label_7F45C338;
    case 0x7F45C33Cu: goto label_7F45C33C;
    case 0x7F45C340u: goto label_7F45C340;
    case 0x7F45C344u: goto label_7F45C344;
    case 0x7F45C348u: goto label_7F45C348;
    case 0x7F45C34Cu: goto label_7F45C34C;
    case 0x7F45C350u: goto label_7F45C350;
    case 0x7F45C354u: goto label_7F45C354;
    case 0x7F45C358u: goto label_7F45C358;
    case 0x7F45C35Cu: goto label_7F45C35C;
    case 0x7F45C360u: goto label_7F45C360;
    case 0x7F45C364u: goto label_7F45C364;
    case 0x7F45C368u: goto label_7F45C368;
    case 0x7F45C36Cu: goto label_7F45C36C;
    case 0x7F45C370u: goto label_7F45C370;
    case 0x7F45C374u: goto label_7F45C374;
    case 0x7F45C378u: goto label_7F45C378;
    case 0x7F45C37Cu: goto label_7F45C37C;
    case 0x7F45C380u: goto label_7F45C380;
    case 0x7F45C384u: goto label_7F45C384;
    case 0x7F45C388u: goto label_7F45C388;
    case 0x7F45C38Cu: goto label_7F45C38C;
    case 0x7F45C390u: goto label_7F45C390;
    case 0x7F45C394u: goto label_7F45C394;
    case 0x7F45C398u: goto label_7F45C398;
    case 0x7F45C39Cu: goto label_7F45C39C;
    case 0x7F45C3A0u: goto label_7F45C3A0;
    case 0x7F45C3A4u: goto label_7F45C3A4;
    case 0x7F45C3A8u: goto label_7F45C3A8;
    case 0x7F45C3ACu: goto label_7F45C3AC;
    case 0x7F45C3B0u: goto label_7F45C3B0;
    case 0x7F45C3B4u: goto label_7F45C3B4;
    case 0x7F45C3B8u: goto label_7F45C3B8;
    case 0x7F45C3BCu: goto label_7F45C3BC;
    case 0x7F45C3C0u: goto label_7F45C3C0;
    case 0x7F45C3C4u: goto label_7F45C3C4;
    case 0x7F45C3C8u: goto label_7F45C3C8;
    case 0x7F45C3CCu: goto label_7F45C3CC;
    case 0x7F45C3D0u: goto label_7F45C3D0;
    case 0x7F45C3D4u: goto label_7F45C3D4;
    case 0x7F45C3D8u: goto label_7F45C3D8;
    case 0x7F45C3DCu: goto label_7F45C3DC;
    case 0x7F45C3E0u: goto label_7F45C3E0;
    case 0x7F45C3E4u: goto label_7F45C3E4;
    case 0x7F45C3E8u: goto label_7F45C3E8;
    case 0x7F45C3ECu: goto label_7F45C3EC;
    case 0x7F45C3F0u: goto label_7F45C3F0;
    case 0x7F45C3F4u: goto label_7F45C3F4;
    case 0x7F45C3F8u: goto label_7F45C3F8;
    case 0x7F45C3FCu: goto label_7F45C3FC;
    case 0x7F45C400u: goto label_7F45C400;
    case 0x7F45C404u: goto label_7F45C404;
    case 0x7F45C408u: goto label_7F45C408;
    case 0x7F45C40Cu: goto label_7F45C40C;
    case 0x7F45C410u: goto label_7F45C410;
    case 0x7F45C414u: goto label_7F45C414;
    case 0x7F45C418u: goto label_7F45C418;
    case 0x7F45C41Cu: goto label_7F45C41C;
    case 0x7F45C420u: goto label_7F45C420;
    case 0x7F45C424u: goto label_7F45C424;
    case 0x7F45C428u: goto label_7F45C428;
    case 0x7F45C42Cu: goto label_7F45C42C;
    case 0x7F45C430u: goto label_7F45C430;
    case 0x7F45C434u: goto label_7F45C434;
    case 0x7F45C438u: goto label_7F45C438;
    case 0x7F45C43Cu: goto label_7F45C43C;
    case 0x7F45C440u: goto label_7F45C440;
    case 0x7F45C444u: goto label_7F45C444;
    case 0x7F45C448u: goto label_7F45C448;
    case 0x7F45C44Cu: goto label_7F45C44C;
    case 0x7F45C450u: goto label_7F45C450;
    case 0x7F45C454u: goto label_7F45C454;
    case 0x7F45C458u: goto label_7F45C458;
    case 0x7F45C45Cu: goto label_7F45C45C;
    case 0x7F45C460u: goto label_7F45C460;
    case 0x7F45C464u: goto label_7F45C464;
    case 0x7F45C468u: goto label_7F45C468;
    case 0x7F45C46Cu: goto label_7F45C46C;
    case 0x7F45C470u: goto label_7F45C470;
    case 0x7F45C474u: goto label_7F45C474;
    case 0x7F45C478u: goto label_7F45C478;
    case 0x7F45C47Cu: goto label_7F45C47C;
    case 0x7F45C480u: goto label_7F45C480;
    case 0x7F45C484u: goto label_7F45C484;
    case 0x7F45C488u: goto label_7F45C488;
    case 0x7F45C48Cu: goto label_7F45C48C;
    case 0x7F45C490u: goto label_7F45C490;
    case 0x7F45C494u: goto label_7F45C494;
    case 0x7F45C498u: goto label_7F45C498;
    case 0x7F45C49Cu: goto label_7F45C49C;
    case 0x7F45C4A0u: goto label_7F45C4A0;
    case 0x7F45C4A4u: goto label_7F45C4A4;
    case 0x7F45C4A8u: goto label_7F45C4A8;
    case 0x7F45C4ACu: goto label_7F45C4AC;
    case 0x7F45C4B0u: goto label_7F45C4B0;
    case 0x7F45C4B4u: goto label_7F45C4B4;
    case 0x7F45C4B8u: goto label_7F45C4B8;
    case 0x7F45C4BCu: goto label_7F45C4BC;
    case 0x7F45C4C0u: goto label_7F45C4C0;
    case 0x7F45C4C4u: goto label_7F45C4C4;
    case 0x7F45C4C8u: goto label_7F45C4C8;
    case 0x7F45C4CCu: goto label_7F45C4CC;
    case 0x7F45C4D0u: goto label_7F45C4D0;
    case 0x7F45C4D4u: goto label_7F45C4D4;
    case 0x7F45C4D8u: goto label_7F45C4D8;
    case 0x7F45C4DCu: goto label_7F45C4DC;
    case 0x7F45C4E0u: goto label_7F45C4E0;
    case 0x7F45C4E4u: goto label_7F45C4E4;
    case 0x7F45C4E8u: goto label_7F45C4E8;
    case 0x7F45C4ECu: goto label_7F45C4EC;
    case 0x7F45C4F0u: goto label_7F45C4F0;
    case 0x7F45C4F4u: goto label_7F45C4F4;
    case 0x7F45C4F8u: goto label_7F45C4F8;
    case 0x7F45C4FCu: goto label_7F45C4FC;
    case 0x7F45C500u: goto label_7F45C500;
    case 0x7F45C504u: goto label_7F45C504;
    case 0x7F45C508u: goto label_7F45C508;
    case 0x7F45C50Cu: goto label_7F45C50C;
    case 0x7F45C510u: goto label_7F45C510;
    case 0x7F45C514u: goto label_7F45C514;
    case 0x7F45C518u: goto label_7F45C518;
    case 0x7F45C51Cu: goto label_7F45C51C;
    case 0x7F45C520u: goto label_7F45C520;
    case 0x7F45C524u: goto label_7F45C524;
    case 0x7F45C528u: goto label_7F45C528;
    case 0x7F45C52Cu: goto label_7F45C52C;
    case 0x7F45C530u: goto label_7F45C530;
    case 0x7F45C534u: goto label_7F45C534;
    case 0x7F45C538u: goto label_7F45C538;
    case 0x7F45C53Cu: goto label_7F45C53C;
    case 0x7F45C540u: goto label_7F45C540;
    case 0x7F45C544u: goto label_7F45C544;
    case 0x7F45C548u: goto label_7F45C548;
    case 0x7F45C54Cu: goto label_7F45C54C;
    case 0x7F45C550u: goto label_7F45C550;
    case 0x7F45C554u: goto label_7F45C554;
    case 0x7F45C558u: goto label_7F45C558;
    case 0x7F45C55Cu: goto label_7F45C55C;
    case 0x7F45C560u: goto label_7F45C560;
    case 0x7F45C564u: goto label_7F45C564;
    case 0x7F45C568u: goto label_7F45C568;
    case 0x7F45C56Cu: goto label_7F45C56C;
    case 0x7F45C570u: goto label_7F45C570;
    case 0x7F45C574u: goto label_7F45C574;
    case 0x7F45C578u: goto label_7F45C578;
    case 0x7F45C57Cu: goto label_7F45C57C;
    case 0x7F45C580u: goto label_7F45C580;
    case 0x7F45C584u: goto label_7F45C584;
    case 0x7F45C588u: goto label_7F45C588;
    case 0x7F45C58Cu: goto label_7F45C58C;
    case 0x7F45C590u: goto label_7F45C590;
    case 0x7F45C594u: goto label_7F45C594;
    case 0x7F45C598u: goto label_7F45C598;
    case 0x7F45C59Cu: goto label_7F45C59C;
    case 0x7F45C5A0u: goto label_7F45C5A0;
    case 0x7F45C5A4u: goto label_7F45C5A4;
    case 0x7F45C5A8u: goto label_7F45C5A8;
    case 0x7F45C5ACu: goto label_7F45C5AC;
    case 0x7F45C5B0u: goto label_7F45C5B0;
    case 0x7F45C5B4u: goto label_7F45C5B4;
    case 0x7F45C5B8u: goto label_7F45C5B8;
    case 0x7F45C5BCu: goto label_7F45C5BC;
    case 0x7F45C5C0u: goto label_7F45C5C0;
    case 0x7F45C5C4u: goto label_7F45C5C4;
    case 0x7F45C5C8u: goto label_7F45C5C8;
    case 0x7F45C5CCu: goto label_7F45C5CC;
    case 0x7F45C5D0u: goto label_7F45C5D0;
    case 0x7F45C5D4u: goto label_7F45C5D4;
    case 0x7F45C5D8u: goto label_7F45C5D8;
    case 0x7F45C5DCu: goto label_7F45C5DC;
    case 0x7F45C5E0u: goto label_7F45C5E0;
    case 0x7F45C5E4u: goto label_7F45C5E4;
    case 0x7F45C5E8u: goto label_7F45C5E8;
    case 0x7F45C5ECu: goto label_7F45C5EC;
    case 0x7F45C5F0u: goto label_7F45C5F0;
    case 0x7F45C5F4u: goto label_7F45C5F4;
    case 0x7F45C5F8u: goto label_7F45C5F8;
    case 0x7F45C5FCu: goto label_7F45C5FC;
    case 0x7F45C600u: goto label_7F45C600;
    case 0x7F45C604u: goto label_7F45C604;
    case 0x7F45C608u: goto label_7F45C608;
    case 0x7F45C60Cu: goto label_7F45C60C;
    case 0x7F45C610u: goto label_7F45C610;
    case 0x7F45C614u: goto label_7F45C614;
    case 0x7F45C618u: goto label_7F45C618;
    case 0x7F45C61Cu: goto label_7F45C61C;
    case 0x7F45C620u: goto label_7F45C620;
    case 0x7F45C624u: goto label_7F45C624;
    case 0x7F45C628u: goto label_7F45C628;
    case 0x7F45C62Cu: goto label_7F45C62C;
    case 0x7F45C630u: goto label_7F45C630;
    case 0x7F45C634u: goto label_7F45C634;
    case 0x7F45C638u: goto label_7F45C638;
    case 0x7F45C63Cu: goto label_7F45C63C;
    case 0x7F45C640u: goto label_7F45C640;
    case 0x7F45C644u: goto label_7F45C644;
    case 0x7F45C648u: goto label_7F45C648;
    case 0x7F45C64Cu: goto label_7F45C64C;
    case 0x7F45C650u: goto label_7F45C650;
    case 0x7F45C654u: goto label_7F45C654;
    case 0x7F45C658u: goto label_7F45C658;
    case 0x7F45C65Cu: goto label_7F45C65C;
    case 0x7F45C660u: goto label_7F45C660;
    case 0x7F45C664u: goto label_7F45C664;
    case 0x7F45C668u: goto label_7F45C668;
    case 0x7F45C66Cu: goto label_7F45C66C;
    case 0x7F45C670u: goto label_7F45C670;
    case 0x7F45C674u: goto label_7F45C674;
    case 0x7F45C678u: goto label_7F45C678;
    case 0x7F45C67Cu: goto label_7F45C67C;
    case 0x7F45C680u: goto label_7F45C680;
    case 0x7F45C684u: goto label_7F45C684;
    case 0x7F45C688u: goto label_7F45C688;
    case 0x7F45C68Cu: goto label_7F45C68C;
    case 0x7F45C690u: goto label_7F45C690;
    case 0x7F45C694u: goto label_7F45C694;
    case 0x7F45C698u: goto label_7F45C698;
    case 0x7F45C69Cu: goto label_7F45C69C;
    case 0x7F45C6A0u: goto label_7F45C6A0;
    case 0x7F45C6A4u: goto label_7F45C6A4;
    case 0x7F45C6A8u: goto label_7F45C6A8;
    case 0x7F45C6ACu: goto label_7F45C6AC;
    case 0x7F45C6B0u: goto label_7F45C6B0;
    case 0x7F45C6B4u: goto label_7F45C6B4;
    case 0x7F45C6B8u: goto label_7F45C6B8;
    case 0x7F45C6BCu: goto label_7F45C6BC;
    case 0x7F45C6C0u: goto label_7F45C6C0;
    case 0x7F45C6C4u: goto label_7F45C6C4;
    case 0x7F45C6C8u: goto label_7F45C6C8;
    case 0x7F45C6CCu: goto label_7F45C6CC;
    case 0x7F45C6D0u: goto label_7F45C6D0;
    case 0x7F45C6D4u: goto label_7F45C6D4;
    case 0x7F45C6D8u: goto label_7F45C6D8;
    case 0x7F45C6DCu: goto label_7F45C6DC;
    case 0x7F45C6E0u: goto label_7F45C6E0;
    case 0x7F45C6E4u: goto label_7F45C6E4;
    case 0x7F45C6E8u: goto label_7F45C6E8;
    case 0x7F45C6ECu: goto label_7F45C6EC;
    case 0x7F45C6F0u: goto label_7F45C6F0;
    case 0x7F45C6F4u: goto label_7F45C6F4;
    case 0x7F45C6F8u: goto label_7F45C6F8;
    case 0x7F45C6FCu: goto label_7F45C6FC;
    case 0x7F45C700u: goto label_7F45C700;
    case 0x7F45C704u: goto label_7F45C704;
    case 0x7F45C708u: goto label_7F45C708;
    case 0x7F45C70Cu: goto label_7F45C70C;
    case 0x7F45C710u: goto label_7F45C710;
    case 0x7F45C714u: goto label_7F45C714;
    case 0x7F45C718u: goto label_7F45C718;
    case 0x7F45C71Cu: goto label_7F45C71C;
    case 0x7F45C720u: goto label_7F45C720;
    case 0x7F45C724u: goto label_7F45C724;
    case 0x7F45C728u: goto label_7F45C728;
    case 0x7F45C72Cu: goto label_7F45C72C;
    case 0x7F45C730u: goto label_7F45C730;
    case 0x7F45C734u: goto label_7F45C734;
    case 0x7F45C738u: goto label_7F45C738;
    case 0x7F45C73Cu: goto label_7F45C73C;
    case 0x7F45C740u: goto label_7F45C740;
    case 0x7F45C744u: goto label_7F45C744;
    case 0x7F45C748u: goto label_7F45C748;
    case 0x7F45C74Cu: goto label_7F45C74C;
    case 0x7F45C750u: goto label_7F45C750;
    case 0x7F45C754u: goto label_7F45C754;
    case 0x7F45C758u: goto label_7F45C758;
    case 0x7F45C75Cu: goto label_7F45C75C;
    case 0x7F45C760u: goto label_7F45C760;
    case 0x7F45C764u: goto label_7F45C764;
    case 0x7F45C768u: goto label_7F45C768;
    case 0x7F45C76Cu: goto label_7F45C76C;
    case 0x7F45C770u: goto label_7F45C770;
    case 0x7F45C774u: goto label_7F45C774;
    case 0x7F45C778u: goto label_7F45C778;
    case 0x7F45C77Cu: goto label_7F45C77C;
    case 0x7F45C780u: goto label_7F45C780;
    case 0x7F45C784u: goto label_7F45C784;
    case 0x7F45C788u: goto label_7F45C788;
    case 0x7F45C78Cu: goto label_7F45C78C;
    case 0x7F45C790u: goto label_7F45C790;
    case 0x7F45C794u: goto label_7F45C794;
    case 0x7F45C798u: goto label_7F45C798;
    case 0x7F45C79Cu: goto label_7F45C79C;
    case 0x7F45C7A0u: goto label_7F45C7A0;
    case 0x7F45C7A4u: goto label_7F45C7A4;
    case 0x7F45C7A8u: goto label_7F45C7A8;
    case 0x7F45C7ACu: goto label_7F45C7AC;
    case 0x7F45C7B0u: goto label_7F45C7B0;
    case 0x7F45C7B4u: goto label_7F45C7B4;
    case 0x7F45C7B8u: goto label_7F45C7B8;
    case 0x7F45C7BCu: goto label_7F45C7BC;
    case 0x7F45C7C0u: goto label_7F45C7C0;
    case 0x7F45C7C4u: goto label_7F45C7C4;
    case 0x7F45C7C8u: goto label_7F45C7C8;
    case 0x7F45C7CCu: goto label_7F45C7CC;
    case 0x7F45C7D0u: goto label_7F45C7D0;
    case 0x7F45C7D4u: goto label_7F45C7D4;
    case 0x7F45C7D8u: goto label_7F45C7D8;
    case 0x7F45C7DCu: goto label_7F45C7DC;
    case 0x7F45C7E0u: goto label_7F45C7E0;
    case 0x7F45C7E4u: goto label_7F45C7E4;
    case 0x7F45C7E8u: goto label_7F45C7E8;
    case 0x7F45C7ECu: goto label_7F45C7EC;
    case 0x7F45C7F0u: goto label_7F45C7F0;
    case 0x7F45C7F4u: goto label_7F45C7F4;
    case 0x7F45C7F8u: goto label_7F45C7F8;
    case 0x7F45C7FCu: goto label_7F45C7FC;
    case 0x7F45C800u: goto label_7F45C800;
    case 0x7F45C804u: goto label_7F45C804;
    case 0x7F45C808u: goto label_7F45C808;
    case 0x7F45C80Cu: goto label_7F45C80C;
    case 0x7F45C810u: goto label_7F45C810;
    case 0x7F45C814u: goto label_7F45C814;
    case 0x7F45C818u: goto label_7F45C818;
    case 0x7F45C81Cu: goto label_7F45C81C;
    case 0x7F45C820u: goto label_7F45C820;
    case 0x7F45C824u: goto label_7F45C824;
    case 0x7F45C828u: goto label_7F45C828;
    case 0x7F45C82Cu: goto label_7F45C82C;
    case 0x7F45C830u: goto label_7F45C830;
    case 0x7F45C834u: goto label_7F45C834;
    case 0x7F45C838u: goto label_7F45C838;
    case 0x7F45C83Cu: goto label_7F45C83C;
    case 0x7F45C840u: goto label_7F45C840;
    case 0x7F45C844u: goto label_7F45C844;
    case 0x7F45C848u: goto label_7F45C848;
    case 0x7F45C84Cu: goto label_7F45C84C;
    case 0x7F45C850u: goto label_7F45C850;
    case 0x7F45C854u: goto label_7F45C854;
    case 0x7F45C858u: goto label_7F45C858;
    case 0x7F45C85Cu: goto label_7F45C85C;
    case 0x7F45C860u: goto label_7F45C860;
    case 0x7F45C864u: goto label_7F45C864;
    case 0x7F45C868u: goto label_7F45C868;
    case 0x7F45C86Cu: goto label_7F45C86C;
    case 0x7F45C870u: goto label_7F45C870;
    case 0x7F45C874u: goto label_7F45C874;
    case 0x7F45C878u: goto label_7F45C878;
    case 0x7F45C87Cu: goto label_7F45C87C;
    case 0x7F45C880u: goto label_7F45C880;
    case 0x7F45C884u: goto label_7F45C884;
    case 0x7F45C888u: goto label_7F45C888;
    case 0x7F45C88Cu: goto label_7F45C88C;
    case 0x7F45C890u: goto label_7F45C890;
    case 0x7F45C894u: goto label_7F45C894;
    case 0x7F45C898u: goto label_7F45C898;
    case 0x7F45C89Cu: goto label_7F45C89C;
    case 0x7F45C8A0u: goto label_7F45C8A0;
    case 0x7F45C8A4u: goto label_7F45C8A4;
    case 0x7F45C8A8u: goto label_7F45C8A8;
    case 0x7F45C8ACu: goto label_7F45C8AC;
    case 0x7F45C8B0u: goto label_7F45C8B0;
    case 0x7F45C8B4u: goto label_7F45C8B4;
    case 0x7F45C8B8u: goto label_7F45C8B8;
    case 0x7F45C8BCu: goto label_7F45C8BC;
    case 0x7F45C8C0u: goto label_7F45C8C0;
    case 0x7F45C8C4u: goto label_7F45C8C4;
    case 0x7F45C8C8u: goto label_7F45C8C8;
    case 0x7F45C8CCu: goto label_7F45C8CC;
    case 0x7F45C8D0u: goto label_7F45C8D0;
    case 0x7F45C8D4u: goto label_7F45C8D4;
    case 0x7F45C8D8u: goto label_7F45C8D8;
    case 0x7F45C8DCu: goto label_7F45C8DC;
    case 0x7F45C8E0u: goto label_7F45C8E0;
    case 0x7F45C8E4u: goto label_7F45C8E4;
    case 0x7F45C8E8u: goto label_7F45C8E8;
    case 0x7F45C8ECu: goto label_7F45C8EC;
    case 0x7F45C8F0u: goto label_7F45C8F0;
    case 0x7F45C8F4u: goto label_7F45C8F4;
    case 0x7F45C8F8u: goto label_7F45C8F8;
    case 0x7F45C8FCu: goto label_7F45C8FC;
    case 0x7F45C900u: goto label_7F45C900;
    case 0x7F45C904u: goto label_7F45C904;
    case 0x7F45C908u: goto label_7F45C908;
    case 0x7F45C90Cu: goto label_7F45C90C;
    case 0x7F45C910u: goto label_7F45C910;
    case 0x7F45C914u: goto label_7F45C914;
    case 0x7F45C918u: goto label_7F45C918;
    case 0x7F45C91Cu: goto label_7F45C91C;
    case 0x7F45C920u: goto label_7F45C920;
    case 0x7F45C924u: goto label_7F45C924;
    case 0x7F45C928u: goto label_7F45C928;
    case 0x7F45C92Cu: goto label_7F45C92C;
    case 0x7F45C930u: goto label_7F45C930;
    case 0x7F45C934u: goto label_7F45C934;
    case 0x7F45C938u: goto label_7F45C938;
    case 0x7F45C93Cu: goto label_7F45C93C;
    case 0x7F45C940u: goto label_7F45C940;
    case 0x7F45C944u: goto label_7F45C944;
    case 0x7F45C948u: goto label_7F45C948;
    case 0x7F45C94Cu: goto label_7F45C94C;
    case 0x7F45C950u: goto label_7F45C950;
    case 0x7F45C954u: goto label_7F45C954;
    case 0x7F45C958u: goto label_7F45C958;
    case 0x7F45C95Cu: goto label_7F45C95C;
    case 0x7F45C960u: goto label_7F45C960;
    case 0x7F45C964u: goto label_7F45C964;
    case 0x7F45C968u: goto label_7F45C968;
    case 0x7F45C96Cu: goto label_7F45C96C;
    case 0x7F45C970u: goto label_7F45C970;
    case 0x7F45C974u: goto label_7F45C974;
    case 0x7F45C978u: goto label_7F45C978;
    case 0x7F45C97Cu: goto label_7F45C97C;
    case 0x7F45C980u: goto label_7F45C980;
    case 0x7F45C984u: goto label_7F45C984;
    case 0x7F45C988u: goto label_7F45C988;
    case 0x7F45C98Cu: goto label_7F45C98C;
    case 0x7F45C990u: goto label_7F45C990;
    case 0x7F45C994u: goto label_7F45C994;
    case 0x7F45C998u: goto label_7F45C998;
    case 0x7F45C99Cu: goto label_7F45C99C;
    case 0x7F45C9A0u: goto label_7F45C9A0;
    case 0x7F45C9A4u: goto label_7F45C9A4;
    case 0x7F45C9A8u: goto label_7F45C9A8;
    case 0x7F45C9ACu: goto label_7F45C9AC;
    case 0x7F45C9B0u: goto label_7F45C9B0;
    case 0x7F45C9B4u: goto label_7F45C9B4;
    case 0x7F45C9B8u: goto label_7F45C9B8;
    case 0x7F45C9BCu: goto label_7F45C9BC;
    case 0x7F45C9C0u: goto label_7F45C9C0;
    case 0x7F45C9C4u: goto label_7F45C9C4;
    case 0x7F45C9C8u: goto label_7F45C9C8;
    case 0x7F45C9CCu: goto label_7F45C9CC;
    case 0x7F45C9D0u: goto label_7F45C9D0;
    case 0x7F45C9D4u: goto label_7F45C9D4;
    case 0x7F45C9D8u: goto label_7F45C9D8;
    case 0x7F45C9DCu: goto label_7F45C9DC;
    case 0x7F45C9E0u: goto label_7F45C9E0;
    case 0x7F45C9E4u: goto label_7F45C9E4;
    case 0x7F45C9E8u: goto label_7F45C9E8;
    case 0x7F45C9ECu: goto label_7F45C9EC;
    case 0x7F45C9F0u: goto label_7F45C9F0;
    case 0x7F45C9F4u: goto label_7F45C9F4;
    case 0x7F45C9F8u: goto label_7F45C9F8;
    case 0x7F45C9FCu: goto label_7F45C9FC;
    case 0x7F45CA00u: goto label_7F45CA00;
    case 0x7F45CA04u: goto label_7F45CA04;
    case 0x7F45CA08u: goto label_7F45CA08;
    case 0x7F45CA0Cu: goto label_7F45CA0C;
    case 0x7F45CA10u: goto label_7F45CA10;
    case 0x7F45CA14u: goto label_7F45CA14;
    case 0x7F45CA18u: goto label_7F45CA18;
    case 0x7F45CA1Cu: goto label_7F45CA1C;
    case 0x7F45CA20u: goto label_7F45CA20;
    case 0x7F45CA24u: goto label_7F45CA24;
    case 0x7F45CA28u: goto label_7F45CA28;
    case 0x7F45CA2Cu: goto label_7F45CA2C;
    case 0x7F45CA30u: goto label_7F45CA30;
    case 0x7F45CA34u: goto label_7F45CA34;
    case 0x7F45CA38u: goto label_7F45CA38;
    case 0x7F45CA3Cu: goto label_7F45CA3C;
    case 0x7F45CA40u: goto label_7F45CA40;
    default: return;
    }
label_7F45C0EC:
    ctx->pc = 0x7F45C0ECu;
    ctx->downcount -= 4;
    // 7F45C0EC: stb     r6, 1(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45C0F0:
    ctx->pc = 0x7F45C0F0u;
    // 7F45C0F0: stb     r5, 2(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F45C0F4:
    ctx->pc = 0x7F45C0F4u;
    // 7F45C0F4: stb     r0, 3(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45C0F8:
    ctx->pc = 0x7F45C0F8u;
    // 7F45C0F8: bl      0x7F4555B0
    {
            ctx->lr = 0x7F45C0FCu;
            ctx->pc = 0x7F4555B0u;
            return;
    }

label_7F45C0FC:
    ctx->pc = 0x7F45C0FCu;
    ctx->downcount -= 2;
    // 7F45C0FC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C100:
    ctx->pc = 0x7F45C100u;
    // 7F45C100: bl      0x7F22F6C4
    {
            ctx->lr = 0x7F45C104u;
            ctx->pc = 0x7F22F6C4u;
            return;
    }

label_7F45C104:
    ctx->pc = 0x7F45C104u;
    ctx->downcount -= 7;
    // 7F45C104: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45C104u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F45C108:
    ctx->pc = 0x7F45C108u;
    // 7F45C108: addi    r3, r26, 1024
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(1024);

label_7F45C10C:
    ctx->pc = 0x7F45C10Cu;
    // 7F45C10C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C10Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F45C110:
    ctx->pc = 0x7F45C110u;
    // 7F45C110: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45C114:
    ctx->pc = 0x7F45C114u;
    // 7F45C114: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C118:
    ctx->pc = 0x7F45C118u;
    // 7F45C118: sth     r0, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C11C:
    ctx->pc = 0x7F45C11Cu;
    // 7F45C11C: bl      0x7F22F6C4
    {
            ctx->lr = 0x7F45C120u;
            ctx->pc = 0x7F22F6C4u;
            return;
    }

label_7F45C120:
    ctx->pc = 0x7F45C120u;
    ctx->downcount -= 11;
    // 7F45C120: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45C120u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F45C124:
    ctx->pc = 0x7F45C124u;
    // 7F45C124: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F45C128:
    ctx->pc = 0x7F45C128u;
    // 7F45C128: cmpwi   r25, 32
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F45C12C:
    ctx->pc = 0x7F45C12Cu;
    // 7F45C12C: addi    r18, r18, 2
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(2);

label_7F45C130:
    ctx->pc = 0x7F45C130u;
    // 7F45C130: addi    r17, r17, 4
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(4);

label_7F45C134:
    ctx->pc = 0x7F45C134u;
    // 7F45C134: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C134u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F45C138:
    ctx->pc = 0x7F45C138u;
    // 7F45C138: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45C13C:
    ctx->pc = 0x7F45C13Cu;
    // 7F45C13C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C140:
    ctx->pc = 0x7F45C140u;
    // 7F45C140: sth     r0, 10(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C144:
    ctx->pc = 0x7F45C144u;
    // 7F45C144: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F45C148:
    ctx->pc = 0x7F45C148u;
    // 7F45C148: bc    12, 0, 0x7F45BEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F45BEB8u;
            return;
        }
    }

label_7F45C14C:
    ctx->pc = 0x7F45C14Cu;
    ctx->downcount -= 4;
    // 7F45C14C: lwz     r3, 188(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C150:
    ctx->pc = 0x7F45C150u;
    // 7F45C150: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F45C154:
    ctx->pc = 0x7F45C154u;
    // 7F45C154: lwz     r4, 184(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C158:
    ctx->pc = 0x7F45C158u;
    // 7F45C158: bl      0x8000519C
    {
            ctx->lr = 0x7F45C15Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F45C15C:
    ctx->pc = 0x7F45C15Cu;
    ctx->downcount -= 4;
    // 7F45C15C: lwz     r3, 196(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C160:
    ctx->pc = 0x7F45C160u;
    // 7F45C160: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F45C164:
    ctx->pc = 0x7F45C164u;
    // 7F45C164: lwz     r4, 192(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C168:
    ctx->pc = 0x7F45C168u;
    // 7F45C168: bl      0x8000519C
    {
            ctx->lr = 0x7F45C16Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F45C16C:
    ctx->pc = 0x7F45C16Cu;
    ctx->downcount -= 4;
    // 7F45C16C: lwz     r3, 188(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C170:
    ctx->pc = 0x7F45C170u;
    // 7F45C170: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F45C174:
    ctx->pc = 0x7F45C174u;
    // 7F45C174: lwz     r4, 184(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C178:
    ctx->pc = 0x7F45C178u;
    // 7F45C178: bl      0x8000519C
    {
            ctx->lr = 0x7F45C17Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F45C17C:
    ctx->pc = 0x7F45C17Cu;
    ctx->downcount -= 4;
    // 7F45C17C: lwz     r3, 196(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C180:
    ctx->pc = 0x7F45C180u;
    // 7F45C180: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F45C184:
    ctx->pc = 0x7F45C184u;
    // 7F45C184: lwz     r4, 192(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C188:
    ctx->pc = 0x7F45C188u;
    // 7F45C188: bl      0x8000519C
    {
            ctx->lr = 0x7F45C18Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F45C18C:
    ctx->pc = 0x7F45C18Cu;
    ctx->downcount -= 12;
    // 7F45C18C: lwz     r5, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C190:
    ctx->pc = 0x7F45C190u;
    // 7F45C190: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F45C194:
    ctx->pc = 0x7F45C194u;
    // 7F45C194: addi    r4, r3, -18128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-18128);

label_7F45C198:
    ctx->pc = 0x7F45C198u;
    // 7F45C198: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C19C:
    ctx->pc = 0x7F45C19Cu;
    // 7F45C19C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C1A0:
    ctx->pc = 0x7F45C1A0u;
    // 7F45C1A0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F45C1A4:
    ctx->pc = 0x7F45C1A4u;
    // 7F45C1A4: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C1A8:
    ctx->pc = 0x7F45C1A8u;
    // 7F45C1A8: lwz     r5, 824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C1AC:
    ctx->pc = 0x7F45C1ACu;
    // 7F45C1AC: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C1B0:
    ctx->pc = 0x7F45C1B0u;
    // 7F45C1B0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F45C1B4:
    ctx->pc = 0x7F45C1B4u;
    // 7F45C1B4: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C1B8:
    ctx->pc = 0x7F45C1B8u;
    // 7F45C1B8: bl      0x7F3C8990
    {
            ctx->lr = 0x7F45C1BCu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F45C1BC:
    ctx->pc = 0x7F45C1BCu;
    ctx->downcount -= 19;
    // 7F45C1BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F45C1C0:
    ctx->pc = 0x7F45C1C0u;
    // 7F45C1C0: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45C1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F45C1C0u);
        if (ctx->exception) return;
    }

label_7F45C1C4:
    ctx->pc = 0x7F45C1C4u;
    // 7F45C1C4: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C1C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C1C8:
    ctx->pc = 0x7F45C1C8u;
    // 7F45C1C8: lmw     r16, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45C1CC:
    ctx->pc = 0x7F45C1CCu;
    // 7F45C1CC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C1D0:
    ctx->pc = 0x7F45C1D0u;
    // 7F45C1D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C1D4:
    ctx->pc = 0x7F45C1D4u;
    // 7F45C1D4: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F45C1D8:
    ctx->pc = 0x7F45C1D8u;
    // 7F45C1D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C1DC:
    ctx->pc = 0x7F45C1DCu;
    ctx->downcount -= 20;
    // 7F45C1DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C1E0:
    ctx->pc = 0x7F45C1E0u;
    // 7F45C1E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C1E4:
    ctx->pc = 0x7F45C1E4u;
    // 7F45C1E4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F45C1E8:
    ctx->pc = 0x7F45C1E8u;
    // 7F45C1E8: li      r5, 844
    ctx->gpr[5] = (u32)(s32)(844);

label_7F45C1EC:
    ctx->pc = 0x7F45C1ECu;
    // 7F45C1EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C1F0:
    ctx->pc = 0x7F45C1F0u;
    // 7F45C1F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45C1F4:
    ctx->pc = 0x7F45C1F4u;
    // 7F45C1F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45C1F8:
    ctx->pc = 0x7F45C1F8u;
    // 7F45C1F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C1FC:
    ctx->pc = 0x7F45C1FCu;
    // 7F45C1FC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F45C200:
    ctx->pc = 0x7F45C200u;
    // 7F45C200: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F45C204u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F45C204:
    ctx->pc = 0x7F45C204u;
    ctx->downcount -= 2;
    // 7F45C204: or.   r31, r3, r3
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

label_7F45C208:
    ctx->pc = 0x7F45C208u;
    // 7F45C208: bc    12, 2, 0x7F45C26C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45C26C;
        }
    }

label_7F45C20C:
    ctx->pc = 0x7F45C20Cu;
    ctx->downcount -= 5;
    // 7F45C20C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F45C210:
    ctx->pc = 0x7F45C210u;
    // 7F45C210: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F45C214:
    ctx->pc = 0x7F45C214u;
    // 7F45C214: addi    r4, r4, -20000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20000);

label_7F45C218:
    ctx->pc = 0x7F45C218u;
    // 7F45C218: addi    r5, r5, -18184
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18184);

label_7F45C21C:
    ctx->pc = 0x7F45C21Cu;
    // 7F45C21C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F45C220u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F45C220:
    ctx->pc = 0x7F45C220u;
    ctx->downcount -= 13;
    // 7F45C220: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C224:
    ctx->pc = 0x7F45C224u;
    // 7F45C224: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F45C228:
    ctx->pc = 0x7F45C228u;
    // 7F45C228: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F45C22C:
    ctx->pc = 0x7F45C22Cu;
    // 7F45C22C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C230:
    ctx->pc = 0x7F45C230u;
    // 7F45C230: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F45C234:
    ctx->pc = 0x7F45C234u;
    // 7F45C234: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F45C238:
    ctx->pc = 0x7F45C238u;
    // 7F45C238: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F45C23C:
    ctx->pc = 0x7F45C23Cu;
    // 7F45C23C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F45C240:
    ctx->pc = 0x7F45C240u;
    // 7F45C240: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C244:
    ctx->pc = 0x7F45C244u;
    // 7F45C244: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C248:
    ctx->pc = 0x7F45C248u;
    // 7F45C248: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C24C:
    ctx->pc = 0x7F45C24Cu;
    // 7F45C24C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C250:
    ctx->pc = 0x7F45C250u;
    // 7F45C250: bl      0x7F45BC50
    {
            ctx->lr = 0x7F45C254u;
            ctx->pc = 0x7F45BC50u;
            return;
    }

label_7F45C254:
    ctx->pc = 0x7F45C254u;
    ctx->downcount -= 2;
    // 7F45C254: cmpwi   r3, 0
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

label_7F45C258:
    ctx->pc = 0x7F45C258u;
    // 7F45C258: bc    4, 0, 0x7F45C26C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C26C;
        }
    }

label_7F45C25C:
    ctx->pc = 0x7F45C25Cu;
    ctx->downcount -= 2;
    // 7F45C25C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C260:
    ctx->pc = 0x7F45C260u;
    // 7F45C260: bl      0x7F3C8210
    {
            ctx->lr = 0x7F45C264u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F45C264:
    ctx->pc = 0x7F45C264u;
    ctx->downcount -= 2;
    // 7F45C264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45C268:
    ctx->pc = 0x7F45C268u;
    // 7F45C268: b       0x7F45C270
    {
            goto label_7F45C270;
    }

label_7F45C26C:
    ctx->pc = 0x7F45C26Cu;
    ctx->downcount -= 1;
    // 7F45C26C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C270:
    ctx->pc = 0x7F45C270u;
    ctx->downcount -= 16;
    // 7F45C270: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45C274:
    ctx->pc = 0x7F45C274u;
    // 7F45C274: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C278:
    ctx->pc = 0x7F45C278u;
    // 7F45C278: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C27C:
    ctx->pc = 0x7F45C27Cu;
    // 7F45C27C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45C280:
    ctx->pc = 0x7F45C280u;
    // 7F45C280: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C284:
    ctx->pc = 0x7F45C284u;
    ctx->downcount -= 20;
    // 7F45C284: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C288:
    ctx->pc = 0x7F45C288u;
    // 7F45C288: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C28C:
    ctx->pc = 0x7F45C28Cu;
    // 7F45C28C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C290:
    ctx->pc = 0x7F45C290u;
    // 7F45C290: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F45C294:
    ctx->pc = 0x7F45C294u;
    // 7F45C294: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45C294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F45C294u);
        if (ctx->exception) return;
    }

label_7F45C298:
    ctx->pc = 0x7F45C298u;
    // 7F45C298: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45C29C:
    ctx->pc = 0x7F45C29Cu;
    // 7F45C29C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C2A0:
    ctx->pc = 0x7F45C2A0u;
    // 7F45C2A0: lwz     r4, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C2A4:
    ctx->pc = 0x7F45C2A4u;
    // 7F45C2A4: cmpwi   r4, -1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F45C2A8:
    ctx->pc = 0x7F45C2A8u;
    // 7F45C2A8: bc    12, 2, 0x7F45C2C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45C2C0;
        }
    }

label_7F45C2AC:
    ctx->pc = 0x7F45C2ACu;
    ctx->downcount -= 3;
    // 7F45C2AC: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_7F45C2B0:
    ctx->pc = 0x7F45C2B0u;
    // 7F45C2B0: stw     r0, 220(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C2B4:
    ctx->pc = 0x7F45C2B4u;
    // 7F45C2B4: bc    12, 1, 0x7F45C2C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45C2C0;
        }
    }

label_7F45C2B8:
    ctx->pc = 0x7F45C2B8u;
    ctx->downcount -= 1;
    // 7F45C2B8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F45C2BCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F45C2BC:
    ctx->pc = 0x7F45C2BCu;
    ctx->downcount -= 1;
    // 7F45C2BC: b       0x7F45C554
    {
            goto label_7F45C554;
    }

label_7F45C2C0:
    ctx->pc = 0x7F45C2C0u;
    ctx->downcount -= 5;
    // 7F45C2C0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F45C2C4:
    ctx->pc = 0x7F45C2C4u;
    // 7F45C2C4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C2C8:
    ctx->pc = 0x7F45C2C8u;
    // 7F45C2C8: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F45C2CC:
    ctx->pc = 0x7F45C2CCu;
    // 7F45C2CC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C2D0:
    ctx->pc = 0x7F45C2D0u;
    // 7F45C2D0: bl      0x7F45C610
    {
            ctx->lr = 0x7F45C2D4u;
            goto label_7F45C610;
    }

label_7F45C2D4:
    ctx->pc = 0x7F45C2D4u;
    ctx->downcount -= 4;
    // 7F45C2D4: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C2D8:
    ctx->pc = 0x7F45C2D8u;
    // 7F45C2D8: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F45C2DC:
    ctx->pc = 0x7F45C2DCu;
    // 7F45C2DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F45C2E0:
    ctx->pc = 0x7F45C2E0u;
    // 7F45C2E0: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F45C2E4u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F45C2E4:
    ctx->pc = 0x7F45C2E4u;
    ctx->downcount -= 18;
    // 7F45C2E4: lha     r5, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F45C2E8:
    ctx->pc = 0x7F45C2E8u;
    // 7F45C2E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C2EC:
    ctx->pc = 0x7F45C2ECu;
    // 7F45C2EC: addi    r6, r3, -6672
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6672);

label_7F45C2F0:
    ctx->pc = 0x7F45C2F0u;
    // 7F45C2F0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45C2F4:
    ctx->pc = 0x7F45C2F4u;
    // 7F45C2F4: addi    r0, r5, 32
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32);

label_7F45C2F8:
    ctx->pc = 0x7F45C2F8u;
    // 7F45C2F8: addi    r3, r30, 204
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(204);

label_7F45C2FC:
    ctx->pc = 0x7F45C2FCu;
    // 7F45C2FC: sth     r0, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C300:
    ctx->pc = 0x7F45C300u;
    // 7F45C300: addi    r5, r4, -6668
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6668);

label_7F45C304:
    ctx->pc = 0x7F45C304u;
    // 7F45C304: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F45C304u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C308:
    ctx->pc = 0x7F45C308u;
    // 7F45C308: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C30C:
    ctx->pc = 0x7F45C30Cu;
    // 7F45C30C: lha     r6, 198(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(198);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F45C310:
    ctx->pc = 0x7F45C310u;
    // 7F45C310: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F45C310u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C314:
    ctx->pc = 0x7F45C314u;
    // 7F45C314: addi    r0, r6, 16
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(16);

label_7F45C318:
    ctx->pc = 0x7F45C318u;
    // 7F45C318: sth     r0, 198(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(198);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C31C:
    ctx->pc = 0x7F45C31Cu;
    // 7F45C31C: lfs     f2, 208(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C31Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F45C320:
    ctx->pc = 0x7F45C320u;
    // 7F45C320: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C320u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F45C324:
    ctx->pc = 0x7F45C324u;
    // 7F45C324: stfs     f0, 208(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C324u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45C328:
    ctx->pc = 0x7F45C328u;
    // 7F45C328: bl      0x800261FC
    {
            ctx->lr = 0x7F45C32Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F45C32C:
    ctx->pc = 0x7F45C32Cu;
    ctx->downcount -= 4;
    // 7F45C32C: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C330:
    ctx->pc = 0x7F45C330u;
    // 7F45C330: addi    r4, r30, 204
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(204);

label_7F45C334:
    ctx->pc = 0x7F45C334u;
    // 7F45C334: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C338:
    ctx->pc = 0x7F45C338u;
    // 7F45C338: bl      0x800261B4
    {
            ctx->lr = 0x7F45C33Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F45C33C:
    ctx->pc = 0x7F45C33Cu;
    ctx->downcount -= 3;
    // 7F45C33C: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C340:
    ctx->pc = 0x7F45C340u;
    // 7F45C340: addi    r4, r30, 196
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(196);

label_7F45C344:
    ctx->pc = 0x7F45C344u;
    // 7F45C344: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F45C348u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F45C348:
    ctx->pc = 0x7F45C348u;
    ctx->downcount -= 2;
    // 7F45C348: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C34C:
    ctx->pc = 0x7F45C34Cu;
    // 7F45C34C: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F45C350u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F45C350:
    ctx->pc = 0x7F45C350u;
    ctx->downcount -= 9;
    // 7F45C350: lwz     r5, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C354:
    ctx->pc = 0x7F45C354u;
    // 7F45C354: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F45C358:
    ctx->pc = 0x7F45C358u;
    // 7F45C358: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F45C35C:
    ctx->pc = 0x7F45C35Cu;
    // 7F45C35C: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C360:
    ctx->pc = 0x7F45C360u;
    // 7F45C360: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F45C364:
    ctx->pc = 0x7F45C364u;
    // 7F45C364: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C368:
    ctx->pc = 0x7F45C368u;
    // 7F45C368: lwz     r3, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C36C:
    ctx->pc = 0x7F45C36Cu;
    // 7F45C36C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C370:
    ctx->pc = 0x7F45C370u;
    // 7F45C370: bl      0x7F45C5DC
    {
            ctx->lr = 0x7F45C374u;
            goto label_7F45C5DC;
    }

label_7F45C374:
    ctx->pc = 0x7F45C374u;
    ctx->downcount -= 9;
    // 7F45C374: lwz     r5, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C378:
    ctx->pc = 0x7F45C378u;
    // 7F45C378: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C37C:
    ctx->pc = 0x7F45C37Cu;
    // 7F45C37C: addi    r4, r30, 196
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(196);

label_7F45C380:
    ctx->pc = 0x7F45C380u;
    // 7F45C380: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C384:
    ctx->pc = 0x7F45C384u;
    // 7F45C384: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F45C388:
    ctx->pc = 0x7F45C388u;
    // 7F45C388: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C38C:
    ctx->pc = 0x7F45C38Cu;
    // 7F45C38C: lwz     r5, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C390:
    ctx->pc = 0x7F45C390u;
    // 7F45C390: lwz     r31, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45C394:
    ctx->pc = 0x7F45C394u;
    // 7F45C394: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F45C398u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F45C398:
    ctx->pc = 0x7F45C398u;
    ctx->downcount -= 8;
    // 7F45C398: lwz     r0, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C39C:
    ctx->pc = 0x7F45C39Cu;
    // 7F45C39C: rlwinm r31, r31, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F45C3A0:
    ctx->pc = 0x7F45C3A0u;
    // 7F45C3A0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F45C3A4:
    ctx->pc = 0x7F45C3A4u;
    // 7F45C3A4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F45C3A8:
    ctx->pc = 0x7F45C3A8u;
    // 7F45C3A8: add   r4, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F45C3AC:
    ctx->pc = 0x7F45C3ACu;
    // 7F45C3AC: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C3B0:
    ctx->pc = 0x7F45C3B0u;
    // 7F45C3B0: addi    r3, r3, -240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-240);

label_7F45C3B4:
    ctx->pc = 0x7F45C3B4u;
    // 7F45C3B4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F45C3B8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F45C3B8:
    ctx->pc = 0x7F45C3B8u;
    ctx->downcount -= 14;
    // 7F45C3B8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C3BC:
    ctx->pc = 0x7F45C3BCu;
    // 7F45C3BC: lwz     r0, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C3C0:
    ctx->pc = 0x7F45C3C0u;
    // 7F45C3C0: addi    r4, r3, -6664
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6664);

label_7F45C3C4:
    ctx->pc = 0x7F45C3C4u;
    // 7F45C3C4: lfs     f1, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C3C8:
    ctx->pc = 0x7F45C3C8u;
    // 7F45C3C8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C3CC:
    ctx->pc = 0x7F45C3CCu;
    // 7F45C3CC: add   r5, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F45C3D0:
    ctx->pc = 0x7F45C3D0u;
    // 7F45C3D0: lwz     r31, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45C3D4:
    ctx->pc = 0x7F45C3D4u;
    // 7F45C3D4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C3D8:
    ctx->pc = 0x7F45C3D8u;
    // 7F45C3D8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C3D8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F45C3DC:
    ctx->pc = 0x7F45C3DCu;
    // 7F45C3DC: lfs     f0, -6688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C3E0:
    ctx->pc = 0x7F45C3E0u;
    // 7F45C3E0: stfs     f1, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3E0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F45C3E4:
    ctx->pc = 0x7F45C3E4u;
    // 7F45C3E4: lfs     f1, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C3E8:
    ctx->pc = 0x7F45C3E8u;
    // 7F45C3E8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C3E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F45C3EC:
    ctx->pc = 0x7F45C3ECu;
    // 7F45C3EC: bc    4, 1, 0x7F45C3F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C3F4;
        }
    }

label_7F45C3F0:
    ctx->pc = 0x7F45C3F0u;
    ctx->downcount -= 1;
    // 7F45C3F0: b       0x7F45C3F8
    {
            goto label_7F45C3F8;
    }

label_7F45C3F4:
    ctx->pc = 0x7F45C3F4u;
    ctx->downcount -= 1;
    // 7F45C3F4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C3F4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F45C3F8:
    ctx->pc = 0x7F45C3F8u;
    ctx->downcount -= 3;
    // 7F45C3F8: stfs     f1, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3F8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F45C3FC:
    ctx->pc = 0x7F45C3FCu;
    // 7F45C3FC: lfs     f31, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C3FCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F45C400:
    ctx->pc = 0x7F45C400u;
    // 7F45C400: bl      0x7F45C570
    {
            ctx->lr = 0x7F45C404u;
            goto label_7F45C570;
    }

label_7F45C404:
    ctx->pc = 0x7F45C404u;
    ctx->downcount -= 10;
    // 7F45C404: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C408:
    ctx->pc = 0x7F45C408u;
    // 7F45C408: fmadds f1, f31, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F45C408u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F45C40C:
    ctx->pc = 0x7F45C40Cu;
    // 7F45C40C: lfs     f0, -6660(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45C40Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C410:
    ctx->pc = 0x7F45C410u;
    // 7F45C410: lwz     r0, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C414:
    ctx->pc = 0x7F45C414u;
    // 7F45C414: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45C414u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F45C418:
    ctx->pc = 0x7F45C418u;
    // 7F45C418: cmpwi   r0, 8
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

label_7F45C41C:
    ctx->pc = 0x7F45C41Cu;
    // 7F45C41C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C41Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F45C420:
    ctx->pc = 0x7F45C420u;
    // 7F45C420: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C420u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F45C424:
    ctx->pc = 0x7F45C424u;
    // 7F45C424: lwz     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F45C428:
    ctx->pc = 0x7F45C428u;
    // 7F45C428: bc    4, 0, 0x7F45C47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C47C;
        }
    }

label_7F45C42C:
    ctx->pc = 0x7F45C42Cu;
    ctx->downcount -= 5;
    // 7F45C42C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F45C430:
    ctx->pc = 0x7F45C430u;
    // 7F45C430: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45C434:
    ctx->pc = 0x7F45C434u;
    // 7F45C434: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45C438:
    ctx->pc = 0x7F45C438u;
    // 7F45C438: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F45C43C:
    loop_7F45C43C(ctx);
    if (ctx->pc == 0x7F45C478u) goto label_7F45C478;
    return;
label_7F45C440:
    // 7F45C440: mullw   r0, r7, r6
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F45C444:
    // 7F45C444: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F45C448:
    // 7F45C448: subfic  r4, r4, 8
    {
        u64 res = (u64)(u32)(s32)(8) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F45C44C:
    // 7F45C44C: mullw   r5, r4, r3
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[5] = (u32)product;
    }

label_7F45C450:
    // 7F45C450: addi    r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3);

label_7F45C454:
    // 7F45C454: srawi r0, r0, 5
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

label_7F45C458:
    // 7F45C458: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F45C45C:
    // 7F45C45C: addi    r5, r5, 30
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30);

label_7F45C460:
    // 7F45C460: addi    r0, r4, 2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2);

label_7F45C464:
    ctx->pc = 0x7F45C464u;
    // 7F45C464: sth     r5, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45C468:
    ctx->pc = 0x7F45C468u;
    // 7F45C468: sth     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45C46C:
    ctx->pc = 0x7F45C46Cu;
    // 7F45C46C: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45C470:
    // 7F45C470: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F45C474:
    // 7F45C474: bc    16, 0, 0x7F45C43C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C43Cu;
                return;
            }
            goto label_7F45C43C;
        }
    }

label_7F45C478:
    ctx->pc = 0x7F45C478u;
    ctx->downcount -= 1;
    // 7F45C478: b       0x7F45C4BC
    {
            goto label_7F45C4BC;
    }

label_7F45C47C:
    ctx->pc = 0x7F45C47Cu;
    ctx->downcount -= 5;
    // 7F45C47C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F45C480:
    ctx->pc = 0x7F45C480u;
    // 7F45C480: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F45C484:
    ctx->pc = 0x7F45C484u;
    // 7F45C484: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45C488:
    ctx->pc = 0x7F45C488u;
    // 7F45C488: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F45C48C:
    loop_7F45C48C(ctx);
    if (ctx->pc == 0x7F45C4BCu) goto label_7F45C4BC;
    return;
label_7F45C490:
    // 7F45C490: addi    r4, r3, 30
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(30);

label_7F45C494:
    ctx->pc = 0x7F45C494u;
    // 7F45C494: sth     r4, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F45C498:
    // 7F45C498: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F45C49C:
    // 7F45C49C: addi    r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3);

label_7F45C4A0:
    ctx->pc = 0x7F45C4A0u;
    // 7F45C4A0: sth     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F45C4A4:
    // 7F45C4A4: srawi r0, r0, 5
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

label_7F45C4A8:
    // 7F45C4A8: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F45C4AC:
    // 7F45C4AC: addi    r0, r4, 2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2);

label_7F45C4B0:
    ctx->pc = 0x7F45C4B0u;
    // 7F45C4B0: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45C4B4:
    // 7F45C4B4: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F45C4B8:
    // 7F45C4B8: bc    16, 0, 0x7F45C48C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C48Cu;
                return;
            }
            goto label_7F45C48C;
        }
    }

label_7F45C4BC:
    ctx->pc = 0x7F45C4BCu;
    ctx->downcount -= 3;
    // 7F45C4BC: lwz     r0, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C4C0:
    ctx->pc = 0x7F45C4C0u;
    // 7F45C4C0: cmpwi   r0, 0
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

label_7F45C4C4:
    ctx->pc = 0x7F45C4C4u;
    // 7F45C4C4: bc    4, 2, 0x7F45C524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C524;
        }
    }

label_7F45C4C8:
    ctx->pc = 0x7F45C4C8u;
    ctx->downcount -= 15;
    // 7F45C4C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C4CC:
    ctx->pc = 0x7F45C4CCu;
    // 7F45C4CC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45C4D0:
    ctx->pc = 0x7F45C4D0u;
    // 7F45C4D0: addi    r5, r3, -6688
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6688);

label_7F45C4D4:
    ctx->pc = 0x7F45C4D4u;
    // 7F45C4D4: lfs     f0, -6656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C4D8:
    ctx->pc = 0x7F45C4D8u;
    // 7F45C4D8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F45C4DC:
    ctx->pc = 0x7F45C4DCu;
    // 7F45C4DC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C4E0:
    ctx->pc = 0x7F45C4E0u;
    // 7F45C4E0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45C4E4:
    ctx->pc = 0x7F45C4E4u;
    // 7F45C4E4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F45C4E8:
    ctx->pc = 0x7F45C4E8u;
    // 7F45C4E8: lfs     f1, -6652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C4EC:
    ctx->pc = 0x7F45C4ECu;
    // 7F45C4EC: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F45C4F0:
    ctx->pc = 0x7F45C4F0u;
    // 7F45C4F0: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F45C4F4:
    ctx->pc = 0x7F45C4F4u;
    // 7F45C4F4: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C4F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F45C4F8:
    ctx->pc = 0x7F45C4F8u;
    // 7F45C4F8: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C4FC:
    ctx->pc = 0x7F45C4FCu;
    // 7F45C4FC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F45C500:
    ctx->pc = 0x7F45C500u;
    // 7F45C500: bl      0x7F26C10C
    {
            ctx->lr = 0x7F45C504u;
            ctx->pc = 0x7F26C10Cu;
            return;
    }

label_7F45C504:
    ctx->pc = 0x7F45C504u;
    ctx->downcount -= 3;
    // 7F45C504: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C508:
    ctx->pc = 0x7F45C508u;
    // 7F45C508: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F45C50C:
    ctx->pc = 0x7F45C50Cu;
    // 7F45C50C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F45C510u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F45C510:
    ctx->pc = 0x7F45C510u;
    ctx->downcount -= 5;
    // 7F45C510: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C514:
    ctx->pc = 0x7F45C514u;
    // 7F45C514: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C518:
    ctx->pc = 0x7F45C518u;
    // 7F45C518: lfs     f1, -6648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45C518u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C51C:
    ctx->pc = 0x7F45C51Cu;
    // 7F45C51C: addi    r3, r4, 4
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4);

label_7F45C520:
    ctx->pc = 0x7F45C520u;
    // 7F45C520: bl      0x7F25A968
    {
            ctx->lr = 0x7F45C524u;
            ctx->pc = 0x7F25A968u;
            return;
    }

label_7F45C524:
    ctx->pc = 0x7F45C524u;
    ctx->downcount -= 9;
    // 7F45C524: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C528:
    ctx->pc = 0x7F45C528u;
    // 7F45C528: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45C52C:
    ctx->pc = 0x7F45C52Cu;
    // 7F45C52C: addi    r5, r3, -6656
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6656);

label_7F45C530:
    ctx->pc = 0x7F45C530u;
    // 7F45C530: lfs     f2, -6688(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C530u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F45C534:
    ctx->pc = 0x7F45C534u;
    // 7F45C534: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F45C534u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C538:
    ctx->pc = 0x7F45C538u;
    // 7F45C538: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C53C:
    ctx->pc = 0x7F45C53Cu;
    // 7F45C53C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F45C540:
    ctx->pc = 0x7F45C540u;
    // 7F45C540: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F45C544:
    ctx->pc = 0x7F45C544u;
    // 7F45C544: bl      0x7F4554D8
    {
            ctx->lr = 0x7F45C548u;
            ctx->pc = 0x7F4554D8u;
            return;
    }

label_7F45C548:
    ctx->pc = 0x7F45C548u;
    ctx->downcount -= 3;
    // 7F45C548: lwz     r3, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C54C:
    ctx->pc = 0x7F45C54Cu;
    // 7F45C54C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F45C550:
    ctx->pc = 0x7F45C550u;
    // 7F45C550: stw     r0, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C554:
    ctx->pc = 0x7F45C554u;
    ctx->downcount -= 18;
    // 7F45C554: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F45C554u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F45C554u);
        if (ctx->exception) return;
    }

label_7F45C558:
    ctx->pc = 0x7F45C558u;
    // 7F45C558: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C55C:
    ctx->pc = 0x7F45C55Cu;
    // 7F45C55C: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45C560:
    ctx->pc = 0x7F45C560u;
    // 7F45C560: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C564:
    ctx->pc = 0x7F45C564u;
    // 7F45C564: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C568:
    ctx->pc = 0x7F45C568u;
    // 7F45C568: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F45C56C:
    ctx->pc = 0x7F45C56Cu;
    // 7F45C56C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C570:
    ctx->pc = 0x7F45C570u;
    ctx->downcount -= 4;
    // 7F45C570: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C574:
    ctx->pc = 0x7F45C574u;
    // 7F45C574: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C578:
    ctx->pc = 0x7F45C578u;
    // 7F45C578: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C57C:
    ctx->pc = 0x7F45C57Cu;
    // 7F45C57C: bl      0x7F45C5B8
    {
            ctx->lr = 0x7F45C580u;
            goto label_7F45C5B8;
    }

label_7F45C580:
    ctx->pc = 0x7F45C580u;
    ctx->downcount -= 31;
    // 7F45C580: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F45C584:
    ctx->pc = 0x7F45C584u;
    // 7F45C584: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C588:
    ctx->pc = 0x7F45C588u;
    // 7F45C588: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45C58C:
    ctx->pc = 0x7F45C58Cu;
    // 7F45C58C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C590:
    ctx->pc = 0x7F45C590u;
    // 7F45C590: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C594:
    ctx->pc = 0x7F45C594u;
    // 7F45C594: lfd     f2, -6640(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C594u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6640);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C598:
    ctx->pc = 0x7F45C598u;
    // 7F45C598: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C59C:
    ctx->pc = 0x7F45C59Cu;
    // 7F45C59C: lfs     f0, -6644(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F45C59Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C5A0:
    ctx->pc = 0x7F45C5A0u;
    // 7F45C5A0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F45C5A0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F45C5A4:
    ctx->pc = 0x7F45C5A4u;
    // 7F45C5A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C5A8:
    ctx->pc = 0x7F45C5A8u;
    // 7F45C5A8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C5A8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F45C5AC:
    ctx->pc = 0x7F45C5ACu;
    // 7F45C5AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C5B0:
    ctx->pc = 0x7F45C5B0u;
    // 7F45C5B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45C5B4:
    ctx->pc = 0x7F45C5B4u;
    // 7F45C5B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C5B8:
    ctx->pc = 0x7F45C5B8u;
    ctx->downcount -= 13;
    // 7F45C5B8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F45C5BC:
    ctx->pc = 0x7F45C5BCu;
    // 7F45C5BC: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F45C5C0:
    ctx->pc = 0x7F45C5C0u;
    // 7F45C5C0: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F45C5C4:
    ctx->pc = 0x7F45C5C4u;
    // 7F45C5C4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F45C5C8:
    ctx->pc = 0x7F45C5C8u;
    // 7F45C5C8: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F45C5CC:
    ctx->pc = 0x7F45C5CCu;
    // 7F45C5CC: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F45C5D0:
    ctx->pc = 0x7F45C5D0u;
    // 7F45C5D0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F45C5D4:
    ctx->pc = 0x7F45C5D4u;
    // 7F45C5D4: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C5D8:
    ctx->pc = 0x7F45C5D8u;
    // 7F45C5D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C5DC:
    ctx->pc = 0x7F45C5DCu;
    ctx->downcount -= 7;
    // 7F45C5DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C5E0:
    ctx->pc = 0x7F45C5E0u;
    // 7F45C5E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C5E4:
    ctx->pc = 0x7F45C5E4u;
    // 7F45C5E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C5E8:
    ctx->pc = 0x7F45C5E8u;
    // 7F45C5E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F45C5EC:
    ctx->pc = 0x7F45C5ECu;
    // 7F45C5EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C5F0:
    ctx->pc = 0x7F45C5F0u;
    // 7F45C5F0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45C5F4:
    ctx->pc = 0x7F45C5F4u;
    // 7F45C5F4: bl      0x7F01B234
    {
            ctx->lr = 0x7F45C5F8u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F45C5F8:
    ctx->pc = 0x7F45C5F8u;
    ctx->downcount -= 7;
    // 7F45C5F8: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C5FC:
    ctx->pc = 0x7F45C5FCu;
    // 7F45C5FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C600:
    ctx->pc = 0x7F45C600u;
    // 7F45C600: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45C604:
    ctx->pc = 0x7F45C604u;
    // 7F45C604: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C608:
    ctx->pc = 0x7F45C608u;
    // 7F45C608: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45C60C:
    ctx->pc = 0x7F45C60Cu;
    // 7F45C60C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C610:
    ctx->pc = 0x7F45C610u;
    ctx->downcount -= 7;
    // 7F45C610: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C614:
    ctx->pc = 0x7F45C614u;
    // 7F45C614: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C618:
    ctx->pc = 0x7F45C618u;
    // 7F45C618: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C61C:
    ctx->pc = 0x7F45C61Cu;
    // 7F45C61C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F45C620:
    ctx->pc = 0x7F45C620u;
    // 7F45C620: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C624:
    ctx->pc = 0x7F45C624u;
    // 7F45C624: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45C628:
    ctx->pc = 0x7F45C628u;
    // 7F45C628: bl      0x7F01B234
    {
            ctx->lr = 0x7F45C62Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F45C62C:
    ctx->pc = 0x7F45C62Cu;
    ctx->downcount -= 7;
    // 7F45C62C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C630:
    ctx->pc = 0x7F45C630u;
    // 7F45C630: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C634:
    ctx->pc = 0x7F45C634u;
    // 7F45C634: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45C638:
    ctx->pc = 0x7F45C638u;
    // 7F45C638: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C63C:
    ctx->pc = 0x7F45C63Cu;
    // 7F45C63C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45C640:
    ctx->pc = 0x7F45C640u;
    // 7F45C640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C644:
    ctx->pc = 0x7F45C644u;
    ctx->downcount -= 8;
    // 7F45C644: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C648:
    ctx->pc = 0x7F45C648u;
    // 7F45C648: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C64C:
    ctx->pc = 0x7F45C64Cu;
    // 7F45C64C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C650:
    ctx->pc = 0x7F45C650u;
    // 7F45C650: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F45C654:
    ctx->pc = 0x7F45C654u;
    // 7F45C654: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C658:
    ctx->pc = 0x7F45C658u;
    // 7F45C658: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C65C:
    ctx->pc = 0x7F45C65Cu;
    // 7F45C65C: cmplwi  r3, 0x0000
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

label_7F45C660:
    ctx->pc = 0x7F45C660u;
    // 7F45C660: bc    12, 2, 0x7F45C670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45C670;
        }
    }

label_7F45C664:
    ctx->pc = 0x7F45C664u;
    ctx->downcount -= 1;
    // 7F45C664: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F45C668u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F45C668:
    ctx->pc = 0x7F45C668u;
    ctx->downcount -= 2;
    // 7F45C668: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C66C:
    ctx->pc = 0x7F45C66Cu;
    // 7F45C66C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F45C670u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F45C670:
    ctx->pc = 0x7F45C670u;
    ctx->downcount -= 2;
    // 7F45C670: lwz     r3, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C674:
    ctx->pc = 0x7F45C674u;
    // 7F45C674: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F45C678u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F45C678:
    ctx->pc = 0x7F45C678u;
    ctx->downcount -= 7;
    // 7F45C678: stw     r3, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C67C:
    ctx->pc = 0x7F45C67Cu;
    // 7F45C67C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C680:
    ctx->pc = 0x7F45C680u;
    // 7F45C680: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F45C684:
    ctx->pc = 0x7F45C684u;
    // 7F45C684: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C688:
    ctx->pc = 0x7F45C688u;
    // 7F45C688: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F45C68C:
    ctx->pc = 0x7F45C68Cu;
    // 7F45C68C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C690:
    ctx->pc = 0x7F45C690u;
    ctx->downcount -= 20;
    // 7F45C690: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C694:
    ctx->pc = 0x7F45C694u;
    // 7F45C694: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C698:
    ctx->pc = 0x7F45C698u;
    // 7F45C698: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C69C:
    ctx->pc = 0x7F45C69Cu;
    // 7F45C69C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45C6A0:
    ctx->pc = 0x7F45C6A0u;
    // 7F45C6A0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45C6A4:
    ctx->pc = 0x7F45C6A4u;
    // 7F45C6A4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F45C6A8:
    ctx->pc = 0x7F45C6A8u;
    // 7F45C6A8: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F45C6AC:
    ctx->pc = 0x7F45C6ACu;
    // 7F45C6AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F45C6B0:
    ctx->pc = 0x7F45C6B0u;
    // 7F45C6B0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F45C6B4:
    ctx->pc = 0x7F45C6B4u;
    // 7F45C6B4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F45C6B8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F45C6B8:
    ctx->pc = 0x7F45C6B8u;
    ctx->downcount -= 6;
    // 7F45C6B8: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F45C6BC:
    ctx->pc = 0x7F45C6BCu;
    // 7F45C6BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F45C6C0:
    ctx->pc = 0x7F45C6C0u;
    // 7F45C6C0: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C6C4:
    ctx->pc = 0x7F45C6C4u;
    // 7F45C6C4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F45C6C8:
    ctx->pc = 0x7F45C6C8u;
    // 7F45C6C8: stw     r7, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45C6CC:
    ctx->pc = 0x7F45C6CCu;
    // 7F45C6CC: stw     r7, 304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45C6D0:
    ctx->downcount -= 4;
    // 7F45C6D0: addi    r0, r7, 192
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(192);

label_7F45C6D4:
    // 7F45C6D4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F45C6D8:
    ctx->pc = 0x7F45C6D8u;
    // 7F45C6D8: lwzx    r8, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F45C6DC:
    // 7F45C6DC: b       0x7F45C734
    {
            goto label_7F45C734;
    }

label_7F45C6E0:
    ctx->downcount -= 9;
    // 7F45C6E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45C6E4:
    // 7F45C6E4: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F45C6E8:
    // 7F45C6E8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F45C6EC:
    // 7F45C6EC: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_7F45C6F0:
    // 7F45C6F0: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F45C6F4:
    ctx->pc = 0x7F45C6F4u;
    // 7F45C6F4: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_7F45C6F8:
    // 7F45C6F8: cmpwi   r31, 0
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

label_7F45C6FC:
    // 7F45C6FC: bc    4, 1, 0x7F45C730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C730;
        }
    }

label_7F45C700:
    loop_7F45C700(ctx);
    if (ctx->pc == 0x7F45C730u) goto label_7F45C730;
    return;
label_7F45C704:
    ctx->pc = 0x7F45C704u;
    // 7F45C704: sth     r6, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F45C708:
    ctx->pc = 0x7F45C708u;
    // 7F45C708: sth     r5, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45C70C:
    ctx->pc = 0x7F45C70Cu;
    // 7F45C70C: sth     r5, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F45C710:
    ctx->pc = 0x7F45C710u;
    // 7F45C710: sth     r6, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F45C714:
    ctx->pc = 0x7F45C714u;
    // 7F45C714: sth     r6, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F45C718:
    ctx->pc = 0x7F45C718u;
    // 7F45C718: stb     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F45C71C:
    ctx->pc = 0x7F45C71Cu;
    // 7F45C71C: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F45C720:
    ctx->pc = 0x7F45C720u;
    // 7F45C720: stb     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F45C724:
    ctx->pc = 0x7F45C724u;
    // 7F45C724: stb     r6, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F45C728:
    // 7F45C728: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F45C72C:
    // 7F45C72C: bc    16, 0, 0x7F45C700
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C700u;
                return;
            }
            goto label_7F45C700;
        }
    }

label_7F45C730:
    ctx->downcount -= 1;
    // 7F45C730: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F45C734:
    ctx->downcount -= 2;
    // 7F45C734: cmpw    r10, r30
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

label_7F45C738:
    // 7F45C738: bc    12, 0, 0x7F45C6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C6E0u;
                return;
            }
            goto label_7F45C6E0;
        }
    }

label_7F45C73C:
    ctx->downcount -= 4;
    // 7F45C73C: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F45C740:
    // 7F45C740: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F45C744:
    // 7F45C744: cmpwi   r9, 2
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

label_7F45C748:
    // 7F45C748: bc    12, 0, 0x7F45C6D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C6D0u;
                return;
            }
            goto label_7F45C6D0;
        }
    }

label_7F45C74C:
    ctx->pc = 0x7F45C74Cu;
    ctx->downcount -= 3;
    // 7F45C74C: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C750:
    ctx->pc = 0x7F45C750u;
    // 7F45C750: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F45C754:
    ctx->pc = 0x7F45C754u;
    // 7F45C754: bl      0x7F3C9120
    {
            ctx->lr = 0x7F45C758u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F45C758:
    ctx->pc = 0x7F45C758u;
    ctx->downcount -= 3;
    // 7F45C758: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C75C:
    ctx->pc = 0x7F45C75Cu;
    // 7F45C75C: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F45C760:
    ctx->pc = 0x7F45C760u;
    // 7F45C760: bl      0x7F3C9120
    {
            ctx->lr = 0x7F45C764u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F45C764:
    ctx->pc = 0x7F45C764u;
    ctx->downcount -= 16;
    // 7F45C764: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45C768:
    ctx->pc = 0x7F45C768u;
    // 7F45C768: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C76C:
    ctx->pc = 0x7F45C76Cu;
    // 7F45C76C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C770:
    ctx->pc = 0x7F45C770u;
    // 7F45C770: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F45C774:
    ctx->pc = 0x7F45C774u;
    // 7F45C774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C778:
    ctx->pc = 0x7F45C778u;
    ctx->downcount -= 19;
    // 7F45C778: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C77C:
    ctx->pc = 0x7F45C77Cu;
    // 7F45C77C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C780:
    ctx->pc = 0x7F45C780u;
    // 7F45C780: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C784:
    ctx->pc = 0x7F45C784u;
    // 7F45C784: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45C788:
    ctx->pc = 0x7F45C788u;
    // 7F45C788: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C78C:
    ctx->pc = 0x7F45C78Cu;
    // 7F45C78C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45C790:
    ctx->pc = 0x7F45C790u;
    // 7F45C790: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F45C794:
    ctx->pc = 0x7F45C794u;
    // 7F45C794: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F45C798:
    ctx->pc = 0x7F45C798u;
    // 7F45C798: bl      0x7F45C5B8
    {
            ctx->lr = 0x7F45C79Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C5B8u;
                return;
            }
            goto label_7F45C5B8;
    }

label_7F45C79C:
    ctx->pc = 0x7F45C79Cu;
    ctx->downcount -= 5;
    // 7F45C79C: lha     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F45C7A0:
    ctx->pc = 0x7F45C7A0u;
    // 7F45C7A0: rlwinm r3, r3, 0, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F45C7A4:
    ctx->pc = 0x7F45C7A4u;
    // 7F45C7A4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F45C7A8:
    ctx->pc = 0x7F45C7A8u;
    // 7F45C7A8: sth     r0, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C7AC:
    ctx->pc = 0x7F45C7ACu;
    // 7F45C7AC: bl      0x7F45C5B8
    {
            ctx->lr = 0x7F45C7B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C5B8u;
                return;
            }
            goto label_7F45C5B8;
    }

label_7F45C7B0:
    ctx->pc = 0x7F45C7B0u;
    ctx->downcount -= 5;
    // 7F45C7B0: lha     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F45C7B4:
    ctx->pc = 0x7F45C7B4u;
    // 7F45C7B4: rlwinm r3, r3, 0, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F45C7B8:
    ctx->pc = 0x7F45C7B8u;
    // 7F45C7B8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F45C7BC:
    ctx->pc = 0x7F45C7BCu;
    // 7F45C7BC: sth     r0, 198(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(198);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C7C0:
    ctx->pc = 0x7F45C7C0u;
    // 7F45C7C0: bl      0x7F45C5B8
    {
            ctx->lr = 0x7F45C7C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C5B8u;
                return;
            }
            goto label_7F45C5B8;
    }

label_7F45C7C4:
    ctx->pc = 0x7F45C7C4u;
    ctx->downcount -= 7;
    // 7F45C7C4: lha     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F45C7C8:
    ctx->pc = 0x7F45C7C8u;
    // 7F45C7C8: rlwinm r5, r3, 0, 28, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F45C7CC:
    ctx->pc = 0x7F45C7CCu;
    // 7F45C7CC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F45C7D0:
    ctx->pc = 0x7F45C7D0u;
    // 7F45C7D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F45C7D4:
    ctx->pc = 0x7F45C7D4u;
    // 7F45C7D4: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F45C7D8:
    ctx->pc = 0x7F45C7D8u;
    // 7F45C7D8: sth     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F45C7DC:
    ctx->pc = 0x7F45C7DCu;
    // 7F45C7DC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F45C7E0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F45C7E0:
    ctx->pc = 0x7F45C7E0u;
    ctx->downcount -= 5;
    // 7F45C7E0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F45C7E4:
    ctx->pc = 0x7F45C7E4u;
    // 7F45C7E4: addi    r4, r30, 180
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C7E8:
    ctx->pc = 0x7F45C7E8u;
    // 7F45C7E8: addi    r3, r3, 32736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32736);

label_7F45C7EC:
    ctx->pc = 0x7F45C7ECu;
    // 7F45C7EC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F45C7F0:
    ctx->pc = 0x7F45C7F0u;
    // 7F45C7F0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F45C7F4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F45C7F4:
    ctx->pc = 0x7F45C7F4u;
    ctx->downcount -= 14;
    // 7F45C7F4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F45C7F8:
    ctx->pc = 0x7F45C7F8u;
    // 7F45C7F8: lis     r3, 44
    ctx->gpr[3] = ((u32)(s32)(44) << 16);

label_7F45C7FC:
    ctx->pc = 0x7F45C7FCu;
    // 7F45C7FC: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C800:
    ctx->pc = 0x7F45C800u;
    // 7F45C800: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F45C804:
    ctx->pc = 0x7F45C804u;
    // 7F45C804: addi    r3, r3, 3974
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3974);

label_7F45C808:
    ctx->pc = 0x7F45C808u;
    // 7F45C808: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F45C80C:
    ctx->pc = 0x7F45C80Cu;
    // 7F45C80C: stw     r6, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F45C810:
    ctx->pc = 0x7F45C810u;
    // 7F45C810: stw     r5, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C814:
    ctx->pc = 0x7F45C814u;
    // 7F45C814: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F45C818:
    ctx->pc = 0x7F45C818u;
    // 7F45C818: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C81C:
    ctx->pc = 0x7F45C81Cu;
    // 7F45C81C: stw     r6, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F45C820:
    ctx->pc = 0x7F45C820u;
    // 7F45C820: stw     r5, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C824:
    ctx->pc = 0x7F45C824u;
    // 7F45C824: stw     r0, 220(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C828:
    ctx->pc = 0x7F45C828u;
    // 7F45C828: bl      0x7F3C8470
    {
            ctx->lr = 0x7F45C82Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F45C82C:
    ctx->pc = 0x7F45C82Cu;
    ctx->downcount -= 1;
    // 7F45C82C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F45C830u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F45C830:
    ctx->pc = 0x7F45C830u;
    ctx->downcount -= 3;
    // 7F45C830: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_7F45C834:
    ctx->pc = 0x7F45C834u;
    // 7F45C834: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F45C838:
    ctx->pc = 0x7F45C838u;
    // 7F45C838: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F45C83Cu;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F45C83C:
    ctx->pc = 0x7F45C83Cu;
    ctx->downcount -= 4;
    // 7F45C83C: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C840:
    ctx->pc = 0x7F45C840u;
    // 7F45C840: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C844:
    ctx->pc = 0x7F45C844u;
    // 7F45C844: cmplwi  r3, 0x0000
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

label_7F45C848:
    ctx->pc = 0x7F45C848u;
    // 7F45C848: bc    4, 2, 0x7F45C854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C854;
        }
    }

label_7F45C84C:
    ctx->pc = 0x7F45C84Cu;
    ctx->downcount -= 2;
    // 7F45C84C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F45C850:
    ctx->pc = 0x7F45C850u;
    // 7F45C850: b       0x7F45C978
    {
            goto label_7F45C978;
    }

label_7F45C854:
    ctx->pc = 0x7F45C854u;
    ctx->downcount -= 1;
    // 7F45C854: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F45C858u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F45C858:
    ctx->pc = 0x7F45C858u;
    ctx->downcount -= 5;
    // 7F45C858: lwz     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F45C85C:
    ctx->pc = 0x7F45C85Cu;
    // 7F45C85C: addi    r3, r30, 180
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(180);

label_7F45C860:
    ctx->pc = 0x7F45C860u;
    // 7F45C860: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F45C864:
    ctx->pc = 0x7F45C864u;
    // 7F45C864: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F45C868:
    ctx->pc = 0x7F45C868u;
    // 7F45C868: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F45C86Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F45C86C:
    ctx->pc = 0x7F45C86Cu;
    ctx->downcount -= 3;
    // 7F45C86C: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F45C870:
    ctx->pc = 0x7F45C870u;
    // 7F45C870: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_7F45C874:
    ctx->pc = 0x7F45C874u;
    // 7F45C874: bl      0x7F3BC518
    {
            ctx->lr = 0x7F45C878u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F45C878:
    ctx->pc = 0x7F45C878u;
    ctx->downcount -= 3;
    // 7F45C878: lis     r3, 168
    ctx->gpr[3] = ((u32)(s32)(168) << 16);

label_7F45C87C:
    ctx->pc = 0x7F45C87Cu;
    // 7F45C87C: addi    r3, r3, -25234
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25234);

label_7F45C880:
    ctx->pc = 0x7F45C880u;
    // 7F45C880: bl      0x7F3B6420
    {
            ctx->lr = 0x7F45C884u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F45C884:
    ctx->pc = 0x7F45C884u;
    ctx->downcount -= 7;
    // 7F45C884: lis     r5, 10
    ctx->gpr[5] = ((u32)(s32)(10) << 16);

label_7F45C888:
    ctx->pc = 0x7F45C888u;
    // 7F45C888: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C88C:
    ctx->pc = 0x7F45C88Cu;
    // 7F45C88C: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F45C890:
    ctx->pc = 0x7F45C890u;
    // 7F45C890: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F45C894:
    ctx->pc = 0x7F45C894u;
    // 7F45C894: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F45C898:
    ctx->pc = 0x7F45C898u;
    // 7F45C898: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45C89C:
    ctx->pc = 0x7F45C89Cu;
    // 7F45C89C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F45C8A0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F45C8A0:
    ctx->pc = 0x7F45C8A0u;
    ctx->downcount -= 3;
    // 7F45C8A0: or.   r4, r3, r3
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

label_7F45C8A4:
    ctx->pc = 0x7F45C8A4u;
    // 7F45C8A4: stw     r3, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F45C8A8:
    ctx->pc = 0x7F45C8A8u;
    // 7F45C8A8: bc    4, 2, 0x7F45C8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45C8B4;
        }
    }

label_7F45C8AC:
    ctx->pc = 0x7F45C8ACu;
    ctx->downcount -= 2;
    // 7F45C8AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F45C8B0:
    ctx->pc = 0x7F45C8B0u;
    // 7F45C8B0: b       0x7F45C978
    {
            goto label_7F45C978;
    }

label_7F45C8B4:
    ctx->pc = 0x7F45C8B4u;
    ctx->downcount -= 5;
    // 7F45C8B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F45C8B8:
    ctx->pc = 0x7F45C8B8u;
    // 7F45C8B8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C8BC:
    ctx->pc = 0x7F45C8BCu;
    // 7F45C8BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F45C8C0:
    ctx->pc = 0x7F45C8C0u;
    // 7F45C8C0: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F45C8C4:
    ctx->pc = 0x7F45C8C4u;
    // 7F45C8C4: bl      0x7F45C690
    {
            ctx->lr = 0x7F45C8C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C690u;
                return;
            }
            goto label_7F45C690;
    }

label_7F45C8C8:
    ctx->pc = 0x7F45C8C8u;
    ctx->downcount -= 23;
    // 7F45C8C8: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F45C8CC:
    ctx->pc = 0x7F45C8CCu;
    // 7F45C8CC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F45C8D0:
    ctx->pc = 0x7F45C8D0u;
    // 7F45C8D0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F45C8D4:
    ctx->pc = 0x7F45C8D4u;
    // 7F45C8D4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F45C8D8:
    ctx->pc = 0x7F45C8D8u;
    // 7F45C8D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C8DC:
    ctx->pc = 0x7F45C8DCu;
    // 7F45C8DC: addi    r9, r7, -6688
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-6688);

label_7F45C8E0:
    ctx->pc = 0x7F45C8E0u;
    // 7F45C8E0: addi    r7, r6, -6656
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-6656);

label_7F45C8E4:
    ctx->pc = 0x7F45C8E4u;
    // 7F45C8E4: addi    r6, r5, -6632
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-6632);

label_7F45C8E8:
    ctx->pc = 0x7F45C8E8u;
    // 7F45C8E8: addi    r5, r4, -6680
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6680);

label_7F45C8EC:
    ctx->pc = 0x7F45C8ECu;
    // 7F45C8EC: addi    r4, r3, -6628
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6628);

label_7F45C8F0:
    ctx->pc = 0x7F45C8F0u;
    // 7F45C8F0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F45C8F4:
    ctx->pc = 0x7F45C8F4u;
    // 7F45C8F4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F45C8F8:
    ctx->pc = 0x7F45C8F8u;
    // 7F45C8F8: addi    r8, r3, -240
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-240);

label_7F45C8FC:
    ctx->pc = 0x7F45C8FCu;
    // 7F45C8FC: lfs     f5, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F45C8FCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F45C900:
    ctx->pc = 0x7F45C900u;
    // 7F45C900: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F45C900u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F45C904:
    ctx->pc = 0x7F45C904u;
    // 7F45C904: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F45C908:
    ctx->pc = 0x7F45C908u;
    // 7F45C908: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F45C908u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F45C90C:
    ctx->pc = 0x7F45C90Cu;
    // 7F45C90C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45C910:
    ctx->pc = 0x7F45C910u;
    // 7F45C910: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F45C910u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C914:
    ctx->pc = 0x7F45C914u;
    // 7F45C914: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F45C918:
    ctx->pc = 0x7F45C918u;
    // 7F45C918: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C918u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F45C91C:
    ctx->pc = 0x7F45C91Cu;
    // 7F45C91C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F45C920:
    ctx->downcount -= 31;
    // 7F45C920: xoris   r0, r7, 0x8000
    ctx->gpr[0] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F45C924:
    // 7F45C924: add   r4, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F45C928:
    ctx->pc = 0x7F45C928u;
    // 7F45C928: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C92C:
    // 7F45C92C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F45C930:
    // 7F45C930: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F45C934:
    ctx->pc = 0x7F45C934u;
    // 7F45C934: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C938:
    ctx->pc = 0x7F45C938u;
    // 7F45C938: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F45C938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F45C93C:
    ctx->pc = 0x7F45C93Cu;
    // 7F45C93C: stfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C93Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F45C940:
    ctx->pc = 0x7F45C940u;
    // 7F45C940: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F45C940u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F45C944:
    ctx->pc = 0x7F45C944u;
    // 7F45C944: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C944u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F45C948:
    ctx->pc = 0x7F45C948u;
    // 7F45C948: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F45C948u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F45C94C:
    ctx->pc = 0x7F45C94Cu;
    // 7F45C94C: fadds   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F45C94Cu)) return;
    ppc_fadds(ctx, 0, 4, 0);

label_7F45C950:
    ctx->pc = 0x7F45C950u;
    // 7F45C950: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C950u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45C954:
    ctx->pc = 0x7F45C954u;
    // 7F45C954: stfs     f5, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C954u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F45C958:
    // 7F45C958: bc    16, 0, 0x7F45C920
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C920u;
                return;
            }
            goto label_7F45C920;
        }
    }

label_7F45C95C:
    ctx->pc = 0x7F45C95Cu;
    ctx->downcount -= 7;
    // 7F45C95C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F45C960:
    ctx->pc = 0x7F45C960u;
    // 7F45C960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F45C964:
    ctx->pc = 0x7F45C964u;
    // 7F45C964: addi    r4, r3, -6624
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6624);

label_7F45C968:
    ctx->pc = 0x7F45C968u;
    // 7F45C968: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45C96C:
    ctx->pc = 0x7F45C96Cu;
    // 7F45C96C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F45C96Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F45C970:
    ctx->pc = 0x7F45C970u;
    // 7F45C970: stfs     f0, 232(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F45C970u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F45C974:
    ctx->pc = 0x7F45C974u;
    // 7F45C974: stw     r0, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C978:
    ctx->pc = 0x7F45C978u;
    ctx->downcount -= 16;
    // 7F45C978: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45C97C:
    ctx->pc = 0x7F45C97Cu;
    // 7F45C97C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C980:
    ctx->pc = 0x7F45C980u;
    // 7F45C980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45C984:
    ctx->pc = 0x7F45C984u;
    // 7F45C984: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F45C988:
    ctx->pc = 0x7F45C988u;
    // 7F45C988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

label_7F45C98C:
    ctx->pc = 0x7F45C98Cu;
    ctx->downcount -= 22;
    // 7F45C98C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F45C990:
    ctx->pc = 0x7F45C990u;
    // 7F45C990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F45C994:
    ctx->pc = 0x7F45C994u;
    // 7F45C994: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F45C998:
    ctx->pc = 0x7F45C998u;
    // 7F45C998: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45C99C:
    ctx->pc = 0x7F45C99Cu;
    // 7F45C99C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F45C9A0:
    ctx->pc = 0x7F45C9A0u;
    // 7F45C9A0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F45C9A4:
    ctx->pc = 0x7F45C9A4u;
    // 7F45C9A4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F45C9A8:
    ctx->pc = 0x7F45C9A8u;
    // 7F45C9A8: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F45C9AC:
    ctx->pc = 0x7F45C9ACu;
    // 7F45C9AC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F45C9B0:
    ctx->pc = 0x7F45C9B0u;
    // 7F45C9B0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F45C9B4:
    ctx->pc = 0x7F45C9B4u;
    // 7F45C9B4: li      r5, 236
    ctx->gpr[5] = (u32)(s32)(236);

label_7F45C9B8:
    ctx->pc = 0x7F45C9B8u;
    // 7F45C9B8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F45C9BCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F45C9BC:
    ctx->pc = 0x7F45C9BCu;
    ctx->downcount -= 2;
    // 7F45C9BC: or.   r31, r3, r3
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

label_7F45C9C0:
    ctx->pc = 0x7F45C9C0u;
    // 7F45C9C0: bc    12, 2, 0x7F45CA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F45CA2C;
        }
    }

label_7F45C9C4:
    ctx->pc = 0x7F45C9C4u;
    ctx->downcount -= 5;
    // 7F45C9C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F45C9C8:
    ctx->pc = 0x7F45C9C8u;
    // 7F45C9C8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F45C9CC:
    ctx->pc = 0x7F45C9CCu;
    // 7F45C9CC: addi    r4, r4, -15740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15740);

label_7F45C9D0:
    ctx->pc = 0x7F45C9D0u;
    // 7F45C9D0: addi    r5, r5, -14780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14780);

label_7F45C9D4:
    ctx->pc = 0x7F45C9D4u;
    // 7F45C9D4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F45C9D8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F45C9D8:
    ctx->pc = 0x7F45C9D8u;
    ctx->downcount -= 15;
    // 7F45C9D8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45C9DC:
    ctx->pc = 0x7F45C9DCu;
    // 7F45C9DC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F45C9E0:
    ctx->pc = 0x7F45C9E0u;
    // 7F45C9E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F45C9E4:
    ctx->pc = 0x7F45C9E4u;
    // 7F45C9E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45C9E8:
    ctx->pc = 0x7F45C9E8u;
    // 7F45C9E8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F45C9EC:
    ctx->pc = 0x7F45C9ECu;
    // 7F45C9EC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F45C9F0:
    ctx->pc = 0x7F45C9F0u;
    // 7F45C9F0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F45C9F4:
    ctx->pc = 0x7F45C9F4u;
    // 7F45C9F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F45C9F8:
    ctx->pc = 0x7F45C9F8u;
    // 7F45C9F8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F45C9FC:
    ctx->pc = 0x7F45C9FCu;
    // 7F45C9FC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F45CA00:
    ctx->pc = 0x7F45CA00u;
    // 7F45CA00: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45CA04:
    ctx->pc = 0x7F45CA04u;
    // 7F45CA04: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45CA08:
    ctx->pc = 0x7F45CA08u;
    // 7F45CA08: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F45CA0C:
    ctx->pc = 0x7F45CA0Cu;
    // 7F45CA0C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F45CA10:
    ctx->pc = 0x7F45CA10u;
    // 7F45CA10: bl      0x7F45C778
    {
            ctx->lr = 0x7F45CA14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F45C778u;
                return;
            }
            goto label_7F45C778;
    }

label_7F45CA14:
    ctx->pc = 0x7F45CA14u;
    ctx->downcount -= 2;
    // 7F45CA14: cmpwi   r3, 0
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

label_7F45CA18:
    ctx->pc = 0x7F45CA18u;
    // 7F45CA18: bc    4, 0, 0x7F45CA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F45CA2C;
        }
    }

label_7F45CA1C:
    ctx->pc = 0x7F45CA1Cu;
    ctx->downcount -= 2;
    // 7F45CA1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45CA20:
    ctx->pc = 0x7F45CA20u;
    // 7F45CA20: bl      0x7F3C8210
    {
            ctx->lr = 0x7F45CA24u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F45CA24:
    ctx->pc = 0x7F45CA24u;
    ctx->downcount -= 2;
    // 7F45CA24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F45CA28:
    ctx->pc = 0x7F45CA28u;
    // 7F45CA28: b       0x7F45CA30
    {
            goto label_7F45CA30;
    }

label_7F45CA2C:
    ctx->pc = 0x7F45CA2Cu;
    ctx->downcount -= 1;
    // 7F45CA2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F45CA30:
    ctx->pc = 0x7F45CA30u;
    ctx->downcount -= 16;
    // 7F45CA30: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F45CA34:
    ctx->pc = 0x7F45CA34u;
    // 7F45CA34: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F45CA38:
    ctx->pc = 0x7F45CA38u;
    // 7F45CA38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F45CA3C:
    ctx->pc = 0x7F45CA3Cu;
    // 7F45CA3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F45CA40:
    ctx->pc = 0x7F45CA40u;
    // 7F45CA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F45C0EC;
        }
    }

    ctx->pc = 0x7F45CA44u;
    return;
return_dispatch_7F45C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F45C0FCu: goto label_7F45C0FC;
    case 0x7F45C104u: goto label_7F45C104;
    case 0x7F45C120u: goto label_7F45C120;
    case 0x7F45C15Cu: goto label_7F45C15C;
    case 0x7F45C16Cu: goto label_7F45C16C;
    case 0x7F45C17Cu: goto label_7F45C17C;
    case 0x7F45C18Cu: goto label_7F45C18C;
    case 0x7F45C1BCu: goto label_7F45C1BC;
    case 0x7F45C204u: goto label_7F45C204;
    case 0x7F45C220u: goto label_7F45C220;
    case 0x7F45C254u: goto label_7F45C254;
    case 0x7F45C264u: goto label_7F45C264;
    case 0x7F45C2BCu: goto label_7F45C2BC;
    case 0x7F45C2D4u: goto label_7F45C2D4;
    case 0x7F45C2E4u: goto label_7F45C2E4;
    case 0x7F45C32Cu: goto label_7F45C32C;
    case 0x7F45C33Cu: goto label_7F45C33C;
    case 0x7F45C348u: goto label_7F45C348;
    case 0x7F45C350u: goto label_7F45C350;
    case 0x7F45C374u: goto label_7F45C374;
    case 0x7F45C398u: goto label_7F45C398;
    case 0x7F45C3B8u: goto label_7F45C3B8;
    case 0x7F45C404u: goto label_7F45C404;
    case 0x7F45C504u: goto label_7F45C504;
    case 0x7F45C510u: goto label_7F45C510;
    case 0x7F45C524u: goto label_7F45C524;
    case 0x7F45C548u: goto label_7F45C548;
    case 0x7F45C580u: goto label_7F45C580;
    case 0x7F45C5F8u: goto label_7F45C5F8;
    case 0x7F45C62Cu: goto label_7F45C62C;
    case 0x7F45C668u: goto label_7F45C668;
    case 0x7F45C670u: goto label_7F45C670;
    case 0x7F45C678u: goto label_7F45C678;
    case 0x7F45C6B8u: goto label_7F45C6B8;
    case 0x7F45C758u: goto label_7F45C758;
    case 0x7F45C764u: goto label_7F45C764;
    case 0x7F45C79Cu: goto label_7F45C79C;
    case 0x7F45C7B0u: goto label_7F45C7B0;
    case 0x7F45C7C4u: goto label_7F45C7C4;
    case 0x7F45C7E0u: goto label_7F45C7E0;
    case 0x7F45C7F4u: goto label_7F45C7F4;
    case 0x7F45C82Cu: goto label_7F45C82C;
    case 0x7F45C830u: goto label_7F45C830;
    case 0x7F45C83Cu: goto label_7F45C83C;
    case 0x7F45C858u: goto label_7F45C858;
    case 0x7F45C86Cu: goto label_7F45C86C;
    case 0x7F45C878u: goto label_7F45C878;
    case 0x7F45C884u: goto label_7F45C884;
    case 0x7F45C8A0u: goto label_7F45C8A0;
    case 0x7F45C8C8u: goto label_7F45C8C8;
    case 0x7F45C9BCu: goto label_7F45C9BC;
    case 0x7F45C9D8u: goto label_7F45C9D8;
    case 0x7F45CA14u: goto label_7F45CA14;
    case 0x7F45CA24u: goto label_7F45CA24;
    default: return;
    }
}

