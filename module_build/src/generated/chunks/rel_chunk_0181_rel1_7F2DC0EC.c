// DolRecomp output
#include "../generated.h"

static void loop_7F2DD8E8(CPUState* ctx) {
label_7F2DD8E8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2DD8E8u;
    // 7F2DD8E8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2DD8ECu;
    // 7F2DD8EC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2DD8F0u;
    // 7F2DD8F0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2DD8F4u;
    // 7F2DD8F4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2DD8F8: bc    16, 0, 0x7F2DD8E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD8E8u;
                return;
            }
            goto label_7F2DD8E8;
        }
    }

    ctx->pc = 0x7F2DD8FCu;
}

static void loop_7F2DE8C4(CPUState* ctx) {
label_7F2DE8C4:
    ctx->downcount -= 11;
    // 7F2DE8C4: add   r6, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 7F2DE8C8: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

    ctx->pc = 0x7F2DE8CCu;
    // 7F2DE8CC: lwz     r4, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2DE8D0u;
    // 7F2DE8D0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2DE8D4: rlwinm r4, r4, 18, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x00000001u;
    }

    // 7F2DE8D8: xori    r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] ^ 0x0001u;

    // 7F2DE8DC: or   r9, r9, r0
    {
        ctx->gpr[9] = ctx->gpr[9] | ctx->gpr[0];
    }

    // 7F2DE8E0: slw   r0, r4, r7
    {
        u32 sh = ctx->gpr[7] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

    // 7F2DE8E4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    // 7F2DE8E8: or   r8, r8, r0
    {
        ctx->gpr[8] = ctx->gpr[8] | ctx->gpr[0];
    }

    // 7F2DE8EC: bc    16, 0, 0x7F2DE8C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE8C4u;
                return;
            }
            goto label_7F2DE8C4;
        }
    }

    ctx->pc = 0x7F2DE8F0u;
}

void func_7F2DC0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2DC0ECu: goto label_7F2DC0EC;
    case 0x7F2DC0F0u: goto label_7F2DC0F0;
    case 0x7F2DC0F4u: goto label_7F2DC0F4;
    case 0x7F2DC0F8u: goto label_7F2DC0F8;
    case 0x7F2DC0FCu: goto label_7F2DC0FC;
    case 0x7F2DC100u: goto label_7F2DC100;
    case 0x7F2DC104u: goto label_7F2DC104;
    case 0x7F2DC108u: goto label_7F2DC108;
    case 0x7F2DC10Cu: goto label_7F2DC10C;
    case 0x7F2DC110u: goto label_7F2DC110;
    case 0x7F2DC114u: goto label_7F2DC114;
    case 0x7F2DC118u: goto label_7F2DC118;
    case 0x7F2DC11Cu: goto label_7F2DC11C;
    case 0x7F2DC120u: goto label_7F2DC120;
    case 0x7F2DC124u: goto label_7F2DC124;
    case 0x7F2DC128u: goto label_7F2DC128;
    case 0x7F2DC12Cu: goto label_7F2DC12C;
    case 0x7F2DC130u: goto label_7F2DC130;
    case 0x7F2DC134u: goto label_7F2DC134;
    case 0x7F2DC138u: goto label_7F2DC138;
    case 0x7F2DC13Cu: goto label_7F2DC13C;
    case 0x7F2DC140u: goto label_7F2DC140;
    case 0x7F2DC144u: goto label_7F2DC144;
    case 0x7F2DC148u: goto label_7F2DC148;
    case 0x7F2DC14Cu: goto label_7F2DC14C;
    case 0x7F2DC150u: goto label_7F2DC150;
    case 0x7F2DC154u: goto label_7F2DC154;
    case 0x7F2DC158u: goto label_7F2DC158;
    case 0x7F2DC15Cu: goto label_7F2DC15C;
    case 0x7F2DC160u: goto label_7F2DC160;
    case 0x7F2DC164u: goto label_7F2DC164;
    case 0x7F2DC168u: goto label_7F2DC168;
    case 0x7F2DC16Cu: goto label_7F2DC16C;
    case 0x7F2DC170u: goto label_7F2DC170;
    case 0x7F2DC174u: goto label_7F2DC174;
    case 0x7F2DC178u: goto label_7F2DC178;
    case 0x7F2DC17Cu: goto label_7F2DC17C;
    case 0x7F2DC180u: goto label_7F2DC180;
    case 0x7F2DC184u: goto label_7F2DC184;
    case 0x7F2DC188u: goto label_7F2DC188;
    case 0x7F2DC18Cu: goto label_7F2DC18C;
    case 0x7F2DC190u: goto label_7F2DC190;
    case 0x7F2DC194u: goto label_7F2DC194;
    case 0x7F2DC198u: goto label_7F2DC198;
    case 0x7F2DC19Cu: goto label_7F2DC19C;
    case 0x7F2DC1A0u: goto label_7F2DC1A0;
    case 0x7F2DC1A4u: goto label_7F2DC1A4;
    case 0x7F2DC1A8u: goto label_7F2DC1A8;
    case 0x7F2DC1ACu: goto label_7F2DC1AC;
    case 0x7F2DC1B0u: goto label_7F2DC1B0;
    case 0x7F2DC1B4u: goto label_7F2DC1B4;
    case 0x7F2DC1B8u: goto label_7F2DC1B8;
    case 0x7F2DC1BCu: goto label_7F2DC1BC;
    case 0x7F2DC1C0u: goto label_7F2DC1C0;
    case 0x7F2DC1C4u: goto label_7F2DC1C4;
    case 0x7F2DC1C8u: goto label_7F2DC1C8;
    case 0x7F2DC1CCu: goto label_7F2DC1CC;
    case 0x7F2DC1D0u: goto label_7F2DC1D0;
    case 0x7F2DC1D4u: goto label_7F2DC1D4;
    case 0x7F2DC1D8u: goto label_7F2DC1D8;
    case 0x7F2DC1DCu: goto label_7F2DC1DC;
    case 0x7F2DC1E0u: goto label_7F2DC1E0;
    case 0x7F2DC1E4u: goto label_7F2DC1E4;
    case 0x7F2DC1E8u: goto label_7F2DC1E8;
    case 0x7F2DC1ECu: goto label_7F2DC1EC;
    case 0x7F2DC1F0u: goto label_7F2DC1F0;
    case 0x7F2DC1F4u: goto label_7F2DC1F4;
    case 0x7F2DC1F8u: goto label_7F2DC1F8;
    case 0x7F2DC1FCu: goto label_7F2DC1FC;
    case 0x7F2DC200u: goto label_7F2DC200;
    case 0x7F2DC204u: goto label_7F2DC204;
    case 0x7F2DC208u: goto label_7F2DC208;
    case 0x7F2DC20Cu: goto label_7F2DC20C;
    case 0x7F2DC210u: goto label_7F2DC210;
    case 0x7F2DC214u: goto label_7F2DC214;
    case 0x7F2DC218u: goto label_7F2DC218;
    case 0x7F2DC21Cu: goto label_7F2DC21C;
    case 0x7F2DC220u: goto label_7F2DC220;
    case 0x7F2DC224u: goto label_7F2DC224;
    case 0x7F2DC228u: goto label_7F2DC228;
    case 0x7F2DC22Cu: goto label_7F2DC22C;
    case 0x7F2DC230u: goto label_7F2DC230;
    case 0x7F2DC234u: goto label_7F2DC234;
    case 0x7F2DC238u: goto label_7F2DC238;
    case 0x7F2DC23Cu: goto label_7F2DC23C;
    case 0x7F2DC240u: goto label_7F2DC240;
    case 0x7F2DC244u: goto label_7F2DC244;
    case 0x7F2DC248u: goto label_7F2DC248;
    case 0x7F2DC24Cu: goto label_7F2DC24C;
    case 0x7F2DC250u: goto label_7F2DC250;
    case 0x7F2DC254u: goto label_7F2DC254;
    case 0x7F2DC258u: goto label_7F2DC258;
    case 0x7F2DC25Cu: goto label_7F2DC25C;
    case 0x7F2DC260u: goto label_7F2DC260;
    case 0x7F2DC264u: goto label_7F2DC264;
    case 0x7F2DC268u: goto label_7F2DC268;
    case 0x7F2DC26Cu: goto label_7F2DC26C;
    case 0x7F2DC270u: goto label_7F2DC270;
    case 0x7F2DC274u: goto label_7F2DC274;
    case 0x7F2DC278u: goto label_7F2DC278;
    case 0x7F2DC27Cu: goto label_7F2DC27C;
    case 0x7F2DC280u: goto label_7F2DC280;
    case 0x7F2DC284u: goto label_7F2DC284;
    case 0x7F2DC288u: goto label_7F2DC288;
    case 0x7F2DC28Cu: goto label_7F2DC28C;
    case 0x7F2DC290u: goto label_7F2DC290;
    case 0x7F2DC294u: goto label_7F2DC294;
    case 0x7F2DC298u: goto label_7F2DC298;
    case 0x7F2DC29Cu: goto label_7F2DC29C;
    case 0x7F2DC2A0u: goto label_7F2DC2A0;
    case 0x7F2DC2A4u: goto label_7F2DC2A4;
    case 0x7F2DC2A8u: goto label_7F2DC2A8;
    case 0x7F2DC2ACu: goto label_7F2DC2AC;
    case 0x7F2DC2B0u: goto label_7F2DC2B0;
    case 0x7F2DC2B4u: goto label_7F2DC2B4;
    case 0x7F2DC2B8u: goto label_7F2DC2B8;
    case 0x7F2DC2BCu: goto label_7F2DC2BC;
    case 0x7F2DC2C0u: goto label_7F2DC2C0;
    case 0x7F2DC2C4u: goto label_7F2DC2C4;
    case 0x7F2DC2C8u: goto label_7F2DC2C8;
    case 0x7F2DC2CCu: goto label_7F2DC2CC;
    case 0x7F2DC2D0u: goto label_7F2DC2D0;
    case 0x7F2DC2D4u: goto label_7F2DC2D4;
    case 0x7F2DC2D8u: goto label_7F2DC2D8;
    case 0x7F2DC2DCu: goto label_7F2DC2DC;
    case 0x7F2DC2E0u: goto label_7F2DC2E0;
    case 0x7F2DC2E4u: goto label_7F2DC2E4;
    case 0x7F2DC2E8u: goto label_7F2DC2E8;
    case 0x7F2DC2ECu: goto label_7F2DC2EC;
    case 0x7F2DC2F0u: goto label_7F2DC2F0;
    case 0x7F2DC2F4u: goto label_7F2DC2F4;
    case 0x7F2DC2F8u: goto label_7F2DC2F8;
    case 0x7F2DC2FCu: goto label_7F2DC2FC;
    case 0x7F2DC300u: goto label_7F2DC300;
    case 0x7F2DC304u: goto label_7F2DC304;
    case 0x7F2DC308u: goto label_7F2DC308;
    case 0x7F2DC30Cu: goto label_7F2DC30C;
    case 0x7F2DC310u: goto label_7F2DC310;
    case 0x7F2DC314u: goto label_7F2DC314;
    case 0x7F2DC318u: goto label_7F2DC318;
    case 0x7F2DC31Cu: goto label_7F2DC31C;
    case 0x7F2DC320u: goto label_7F2DC320;
    case 0x7F2DC324u: goto label_7F2DC324;
    case 0x7F2DC328u: goto label_7F2DC328;
    case 0x7F2DC32Cu: goto label_7F2DC32C;
    case 0x7F2DC330u: goto label_7F2DC330;
    case 0x7F2DC334u: goto label_7F2DC334;
    case 0x7F2DC338u: goto label_7F2DC338;
    case 0x7F2DC33Cu: goto label_7F2DC33C;
    case 0x7F2DC340u: goto label_7F2DC340;
    case 0x7F2DC344u: goto label_7F2DC344;
    case 0x7F2DC348u: goto label_7F2DC348;
    case 0x7F2DC34Cu: goto label_7F2DC34C;
    case 0x7F2DC350u: goto label_7F2DC350;
    case 0x7F2DC354u: goto label_7F2DC354;
    case 0x7F2DC358u: goto label_7F2DC358;
    case 0x7F2DC35Cu: goto label_7F2DC35C;
    case 0x7F2DC360u: goto label_7F2DC360;
    case 0x7F2DC364u: goto label_7F2DC364;
    case 0x7F2DC368u: goto label_7F2DC368;
    case 0x7F2DC36Cu: goto label_7F2DC36C;
    case 0x7F2DC370u: goto label_7F2DC370;
    case 0x7F2DC374u: goto label_7F2DC374;
    case 0x7F2DC378u: goto label_7F2DC378;
    case 0x7F2DC37Cu: goto label_7F2DC37C;
    case 0x7F2DC380u: goto label_7F2DC380;
    case 0x7F2DC384u: goto label_7F2DC384;
    case 0x7F2DC388u: goto label_7F2DC388;
    case 0x7F2DC38Cu: goto label_7F2DC38C;
    case 0x7F2DC390u: goto label_7F2DC390;
    case 0x7F2DC394u: goto label_7F2DC394;
    case 0x7F2DC398u: goto label_7F2DC398;
    case 0x7F2DC39Cu: goto label_7F2DC39C;
    case 0x7F2DC3A0u: goto label_7F2DC3A0;
    case 0x7F2DC3A4u: goto label_7F2DC3A4;
    case 0x7F2DC3A8u: goto label_7F2DC3A8;
    case 0x7F2DC3ACu: goto label_7F2DC3AC;
    case 0x7F2DC3B0u: goto label_7F2DC3B0;
    case 0x7F2DC3B4u: goto label_7F2DC3B4;
    case 0x7F2DC3B8u: goto label_7F2DC3B8;
    case 0x7F2DC3BCu: goto label_7F2DC3BC;
    case 0x7F2DC3C0u: goto label_7F2DC3C0;
    case 0x7F2DC3C4u: goto label_7F2DC3C4;
    case 0x7F2DC3C8u: goto label_7F2DC3C8;
    case 0x7F2DC3CCu: goto label_7F2DC3CC;
    case 0x7F2DC3D0u: goto label_7F2DC3D0;
    case 0x7F2DC3D4u: goto label_7F2DC3D4;
    case 0x7F2DC3D8u: goto label_7F2DC3D8;
    case 0x7F2DC3DCu: goto label_7F2DC3DC;
    case 0x7F2DC3E0u: goto label_7F2DC3E0;
    case 0x7F2DC3E4u: goto label_7F2DC3E4;
    case 0x7F2DC3E8u: goto label_7F2DC3E8;
    case 0x7F2DC3ECu: goto label_7F2DC3EC;
    case 0x7F2DC3F0u: goto label_7F2DC3F0;
    case 0x7F2DC3F4u: goto label_7F2DC3F4;
    case 0x7F2DC3F8u: goto label_7F2DC3F8;
    case 0x7F2DC3FCu: goto label_7F2DC3FC;
    case 0x7F2DC400u: goto label_7F2DC400;
    case 0x7F2DC404u: goto label_7F2DC404;
    case 0x7F2DC408u: goto label_7F2DC408;
    case 0x7F2DC40Cu: goto label_7F2DC40C;
    case 0x7F2DC410u: goto label_7F2DC410;
    case 0x7F2DC414u: goto label_7F2DC414;
    case 0x7F2DC418u: goto label_7F2DC418;
    case 0x7F2DC41Cu: goto label_7F2DC41C;
    case 0x7F2DC420u: goto label_7F2DC420;
    case 0x7F2DC424u: goto label_7F2DC424;
    case 0x7F2DC428u: goto label_7F2DC428;
    case 0x7F2DC42Cu: goto label_7F2DC42C;
    case 0x7F2DC430u: goto label_7F2DC430;
    case 0x7F2DC434u: goto label_7F2DC434;
    case 0x7F2DC438u: goto label_7F2DC438;
    case 0x7F2DC43Cu: goto label_7F2DC43C;
    case 0x7F2DC440u: goto label_7F2DC440;
    case 0x7F2DC444u: goto label_7F2DC444;
    case 0x7F2DC448u: goto label_7F2DC448;
    case 0x7F2DC44Cu: goto label_7F2DC44C;
    case 0x7F2DC450u: goto label_7F2DC450;
    case 0x7F2DC454u: goto label_7F2DC454;
    case 0x7F2DC458u: goto label_7F2DC458;
    case 0x7F2DC45Cu: goto label_7F2DC45C;
    case 0x7F2DC460u: goto label_7F2DC460;
    case 0x7F2DC464u: goto label_7F2DC464;
    case 0x7F2DC468u: goto label_7F2DC468;
    case 0x7F2DC46Cu: goto label_7F2DC46C;
    case 0x7F2DC470u: goto label_7F2DC470;
    case 0x7F2DC474u: goto label_7F2DC474;
    case 0x7F2DC478u: goto label_7F2DC478;
    case 0x7F2DC47Cu: goto label_7F2DC47C;
    case 0x7F2DC480u: goto label_7F2DC480;
    case 0x7F2DC484u: goto label_7F2DC484;
    case 0x7F2DC488u: goto label_7F2DC488;
    case 0x7F2DC48Cu: goto label_7F2DC48C;
    case 0x7F2DC490u: goto label_7F2DC490;
    case 0x7F2DC494u: goto label_7F2DC494;
    case 0x7F2DC498u: goto label_7F2DC498;
    case 0x7F2DC49Cu: goto label_7F2DC49C;
    case 0x7F2DC4A0u: goto label_7F2DC4A0;
    case 0x7F2DC4A4u: goto label_7F2DC4A4;
    case 0x7F2DC4A8u: goto label_7F2DC4A8;
    case 0x7F2DC4ACu: goto label_7F2DC4AC;
    case 0x7F2DC4B0u: goto label_7F2DC4B0;
    case 0x7F2DC4B4u: goto label_7F2DC4B4;
    case 0x7F2DC4B8u: goto label_7F2DC4B8;
    case 0x7F2DC4BCu: goto label_7F2DC4BC;
    case 0x7F2DC4C0u: goto label_7F2DC4C0;
    case 0x7F2DC4C4u: goto label_7F2DC4C4;
    case 0x7F2DC4C8u: goto label_7F2DC4C8;
    case 0x7F2DC4CCu: goto label_7F2DC4CC;
    case 0x7F2DC4D0u: goto label_7F2DC4D0;
    case 0x7F2DC4D4u: goto label_7F2DC4D4;
    case 0x7F2DC4D8u: goto label_7F2DC4D8;
    case 0x7F2DC4DCu: goto label_7F2DC4DC;
    case 0x7F2DC4E0u: goto label_7F2DC4E0;
    case 0x7F2DC4E4u: goto label_7F2DC4E4;
    case 0x7F2DC4E8u: goto label_7F2DC4E8;
    case 0x7F2DC4ECu: goto label_7F2DC4EC;
    case 0x7F2DC4F0u: goto label_7F2DC4F0;
    case 0x7F2DC4F4u: goto label_7F2DC4F4;
    case 0x7F2DC4F8u: goto label_7F2DC4F8;
    case 0x7F2DC4FCu: goto label_7F2DC4FC;
    case 0x7F2DC500u: goto label_7F2DC500;
    case 0x7F2DC504u: goto label_7F2DC504;
    case 0x7F2DC508u: goto label_7F2DC508;
    case 0x7F2DC50Cu: goto label_7F2DC50C;
    case 0x7F2DC510u: goto label_7F2DC510;
    case 0x7F2DC514u: goto label_7F2DC514;
    case 0x7F2DC518u: goto label_7F2DC518;
    case 0x7F2DC51Cu: goto label_7F2DC51C;
    case 0x7F2DC520u: goto label_7F2DC520;
    case 0x7F2DC524u: goto label_7F2DC524;
    case 0x7F2DC528u: goto label_7F2DC528;
    case 0x7F2DC52Cu: goto label_7F2DC52C;
    case 0x7F2DC530u: goto label_7F2DC530;
    case 0x7F2DC534u: goto label_7F2DC534;
    case 0x7F2DC538u: goto label_7F2DC538;
    case 0x7F2DC53Cu: goto label_7F2DC53C;
    case 0x7F2DC540u: goto label_7F2DC540;
    case 0x7F2DC544u: goto label_7F2DC544;
    case 0x7F2DC548u: goto label_7F2DC548;
    case 0x7F2DC54Cu: goto label_7F2DC54C;
    case 0x7F2DC550u: goto label_7F2DC550;
    case 0x7F2DC554u: goto label_7F2DC554;
    case 0x7F2DC558u: goto label_7F2DC558;
    case 0x7F2DC55Cu: goto label_7F2DC55C;
    case 0x7F2DC560u: goto label_7F2DC560;
    case 0x7F2DC564u: goto label_7F2DC564;
    case 0x7F2DC568u: goto label_7F2DC568;
    case 0x7F2DC56Cu: goto label_7F2DC56C;
    case 0x7F2DC570u: goto label_7F2DC570;
    case 0x7F2DC574u: goto label_7F2DC574;
    case 0x7F2DC578u: goto label_7F2DC578;
    case 0x7F2DC57Cu: goto label_7F2DC57C;
    case 0x7F2DC580u: goto label_7F2DC580;
    case 0x7F2DC584u: goto label_7F2DC584;
    case 0x7F2DC588u: goto label_7F2DC588;
    case 0x7F2DC58Cu: goto label_7F2DC58C;
    case 0x7F2DC590u: goto label_7F2DC590;
    case 0x7F2DC594u: goto label_7F2DC594;
    case 0x7F2DC598u: goto label_7F2DC598;
    case 0x7F2DC59Cu: goto label_7F2DC59C;
    case 0x7F2DC5A0u: goto label_7F2DC5A0;
    case 0x7F2DC5A4u: goto label_7F2DC5A4;
    case 0x7F2DC5A8u: goto label_7F2DC5A8;
    case 0x7F2DC5ACu: goto label_7F2DC5AC;
    case 0x7F2DC5B0u: goto label_7F2DC5B0;
    case 0x7F2DC5B4u: goto label_7F2DC5B4;
    case 0x7F2DC5B8u: goto label_7F2DC5B8;
    case 0x7F2DC5BCu: goto label_7F2DC5BC;
    case 0x7F2DC5C0u: goto label_7F2DC5C0;
    case 0x7F2DC5C4u: goto label_7F2DC5C4;
    case 0x7F2DC5C8u: goto label_7F2DC5C8;
    case 0x7F2DC5CCu: goto label_7F2DC5CC;
    case 0x7F2DC5D0u: goto label_7F2DC5D0;
    case 0x7F2DC5D4u: goto label_7F2DC5D4;
    case 0x7F2DC5D8u: goto label_7F2DC5D8;
    case 0x7F2DC5DCu: goto label_7F2DC5DC;
    case 0x7F2DC5E0u: goto label_7F2DC5E0;
    case 0x7F2DC5E4u: goto label_7F2DC5E4;
    case 0x7F2DC5E8u: goto label_7F2DC5E8;
    case 0x7F2DC5ECu: goto label_7F2DC5EC;
    case 0x7F2DC5F0u: goto label_7F2DC5F0;
    case 0x7F2DC5F4u: goto label_7F2DC5F4;
    case 0x7F2DC5F8u: goto label_7F2DC5F8;
    case 0x7F2DC5FCu: goto label_7F2DC5FC;
    case 0x7F2DC600u: goto label_7F2DC600;
    case 0x7F2DC604u: goto label_7F2DC604;
    case 0x7F2DC608u: goto label_7F2DC608;
    case 0x7F2DC60Cu: goto label_7F2DC60C;
    case 0x7F2DC610u: goto label_7F2DC610;
    case 0x7F2DC614u: goto label_7F2DC614;
    case 0x7F2DC618u: goto label_7F2DC618;
    case 0x7F2DC61Cu: goto label_7F2DC61C;
    case 0x7F2DC620u: goto label_7F2DC620;
    case 0x7F2DC624u: goto label_7F2DC624;
    case 0x7F2DC628u: goto label_7F2DC628;
    case 0x7F2DC62Cu: goto label_7F2DC62C;
    case 0x7F2DC630u: goto label_7F2DC630;
    case 0x7F2DC634u: goto label_7F2DC634;
    case 0x7F2DC638u: goto label_7F2DC638;
    case 0x7F2DC63Cu: goto label_7F2DC63C;
    case 0x7F2DC640u: goto label_7F2DC640;
    case 0x7F2DC644u: goto label_7F2DC644;
    case 0x7F2DC648u: goto label_7F2DC648;
    case 0x7F2DC64Cu: goto label_7F2DC64C;
    case 0x7F2DC650u: goto label_7F2DC650;
    case 0x7F2DC654u: goto label_7F2DC654;
    case 0x7F2DC658u: goto label_7F2DC658;
    case 0x7F2DC65Cu: goto label_7F2DC65C;
    case 0x7F2DC660u: goto label_7F2DC660;
    case 0x7F2DC664u: goto label_7F2DC664;
    case 0x7F2DC668u: goto label_7F2DC668;
    case 0x7F2DC66Cu: goto label_7F2DC66C;
    case 0x7F2DC670u: goto label_7F2DC670;
    case 0x7F2DC674u: goto label_7F2DC674;
    case 0x7F2DC678u: goto label_7F2DC678;
    case 0x7F2DC67Cu: goto label_7F2DC67C;
    case 0x7F2DC680u: goto label_7F2DC680;
    case 0x7F2DC684u: goto label_7F2DC684;
    case 0x7F2DC688u: goto label_7F2DC688;
    case 0x7F2DC68Cu: goto label_7F2DC68C;
    case 0x7F2DC690u: goto label_7F2DC690;
    case 0x7F2DC694u: goto label_7F2DC694;
    case 0x7F2DC698u: goto label_7F2DC698;
    case 0x7F2DC69Cu: goto label_7F2DC69C;
    case 0x7F2DC6A0u: goto label_7F2DC6A0;
    case 0x7F2DC6A4u: goto label_7F2DC6A4;
    case 0x7F2DC6A8u: goto label_7F2DC6A8;
    case 0x7F2DC6ACu: goto label_7F2DC6AC;
    case 0x7F2DC6B0u: goto label_7F2DC6B0;
    case 0x7F2DC6B4u: goto label_7F2DC6B4;
    case 0x7F2DC6B8u: goto label_7F2DC6B8;
    case 0x7F2DC6BCu: goto label_7F2DC6BC;
    case 0x7F2DC6C0u: goto label_7F2DC6C0;
    case 0x7F2DC6C4u: goto label_7F2DC6C4;
    case 0x7F2DC6C8u: goto label_7F2DC6C8;
    case 0x7F2DC6CCu: goto label_7F2DC6CC;
    case 0x7F2DC6D0u: goto label_7F2DC6D0;
    case 0x7F2DC6D4u: goto label_7F2DC6D4;
    case 0x7F2DC6D8u: goto label_7F2DC6D8;
    case 0x7F2DC6DCu: goto label_7F2DC6DC;
    case 0x7F2DC6E0u: goto label_7F2DC6E0;
    case 0x7F2DC6E4u: goto label_7F2DC6E4;
    case 0x7F2DC6E8u: goto label_7F2DC6E8;
    case 0x7F2DC6ECu: goto label_7F2DC6EC;
    case 0x7F2DC6F0u: goto label_7F2DC6F0;
    case 0x7F2DC6F4u: goto label_7F2DC6F4;
    case 0x7F2DC6F8u: goto label_7F2DC6F8;
    case 0x7F2DC6FCu: goto label_7F2DC6FC;
    case 0x7F2DC700u: goto label_7F2DC700;
    case 0x7F2DC704u: goto label_7F2DC704;
    case 0x7F2DC708u: goto label_7F2DC708;
    case 0x7F2DC70Cu: goto label_7F2DC70C;
    case 0x7F2DC710u: goto label_7F2DC710;
    case 0x7F2DC714u: goto label_7F2DC714;
    case 0x7F2DC718u: goto label_7F2DC718;
    case 0x7F2DC71Cu: goto label_7F2DC71C;
    case 0x7F2DC720u: goto label_7F2DC720;
    case 0x7F2DC724u: goto label_7F2DC724;
    case 0x7F2DC728u: goto label_7F2DC728;
    case 0x7F2DC72Cu: goto label_7F2DC72C;
    case 0x7F2DC730u: goto label_7F2DC730;
    case 0x7F2DC734u: goto label_7F2DC734;
    case 0x7F2DC738u: goto label_7F2DC738;
    case 0x7F2DC73Cu: goto label_7F2DC73C;
    case 0x7F2DC740u: goto label_7F2DC740;
    case 0x7F2DC744u: goto label_7F2DC744;
    case 0x7F2DC748u: goto label_7F2DC748;
    case 0x7F2DC74Cu: goto label_7F2DC74C;
    case 0x7F2DC750u: goto label_7F2DC750;
    case 0x7F2DC754u: goto label_7F2DC754;
    case 0x7F2DC758u: goto label_7F2DC758;
    case 0x7F2DC75Cu: goto label_7F2DC75C;
    case 0x7F2DC760u: goto label_7F2DC760;
    case 0x7F2DC764u: goto label_7F2DC764;
    case 0x7F2DC768u: goto label_7F2DC768;
    case 0x7F2DC76Cu: goto label_7F2DC76C;
    case 0x7F2DC770u: goto label_7F2DC770;
    case 0x7F2DC774u: goto label_7F2DC774;
    case 0x7F2DC778u: goto label_7F2DC778;
    case 0x7F2DC77Cu: goto label_7F2DC77C;
    case 0x7F2DC780u: goto label_7F2DC780;
    case 0x7F2DC784u: goto label_7F2DC784;
    case 0x7F2DC788u: goto label_7F2DC788;
    case 0x7F2DC78Cu: goto label_7F2DC78C;
    case 0x7F2DC790u: goto label_7F2DC790;
    case 0x7F2DC794u: goto label_7F2DC794;
    case 0x7F2DC798u: goto label_7F2DC798;
    case 0x7F2DC79Cu: goto label_7F2DC79C;
    case 0x7F2DC7A0u: goto label_7F2DC7A0;
    case 0x7F2DC7A4u: goto label_7F2DC7A4;
    case 0x7F2DC7A8u: goto label_7F2DC7A8;
    case 0x7F2DC7ACu: goto label_7F2DC7AC;
    case 0x7F2DC7B0u: goto label_7F2DC7B0;
    case 0x7F2DC7B4u: goto label_7F2DC7B4;
    case 0x7F2DC7B8u: goto label_7F2DC7B8;
    case 0x7F2DC7BCu: goto label_7F2DC7BC;
    case 0x7F2DC7C0u: goto label_7F2DC7C0;
    case 0x7F2DC7C4u: goto label_7F2DC7C4;
    case 0x7F2DC7C8u: goto label_7F2DC7C8;
    case 0x7F2DC7CCu: goto label_7F2DC7CC;
    case 0x7F2DC7D0u: goto label_7F2DC7D0;
    case 0x7F2DC7D4u: goto label_7F2DC7D4;
    case 0x7F2DC7D8u: goto label_7F2DC7D8;
    case 0x7F2DC7DCu: goto label_7F2DC7DC;
    case 0x7F2DC7E0u: goto label_7F2DC7E0;
    case 0x7F2DC7E4u: goto label_7F2DC7E4;
    case 0x7F2DC7E8u: goto label_7F2DC7E8;
    case 0x7F2DC7ECu: goto label_7F2DC7EC;
    case 0x7F2DC7F0u: goto label_7F2DC7F0;
    case 0x7F2DC7F4u: goto label_7F2DC7F4;
    case 0x7F2DC7F8u: goto label_7F2DC7F8;
    case 0x7F2DC7FCu: goto label_7F2DC7FC;
    case 0x7F2DC800u: goto label_7F2DC800;
    case 0x7F2DC804u: goto label_7F2DC804;
    case 0x7F2DC808u: goto label_7F2DC808;
    case 0x7F2DC80Cu: goto label_7F2DC80C;
    case 0x7F2DC810u: goto label_7F2DC810;
    case 0x7F2DC814u: goto label_7F2DC814;
    case 0x7F2DC818u: goto label_7F2DC818;
    case 0x7F2DC81Cu: goto label_7F2DC81C;
    case 0x7F2DC820u: goto label_7F2DC820;
    case 0x7F2DC824u: goto label_7F2DC824;
    case 0x7F2DC828u: goto label_7F2DC828;
    case 0x7F2DC82Cu: goto label_7F2DC82C;
    case 0x7F2DC830u: goto label_7F2DC830;
    case 0x7F2DC834u: goto label_7F2DC834;
    case 0x7F2DC838u: goto label_7F2DC838;
    case 0x7F2DC83Cu: goto label_7F2DC83C;
    case 0x7F2DC840u: goto label_7F2DC840;
    case 0x7F2DC844u: goto label_7F2DC844;
    case 0x7F2DC848u: goto label_7F2DC848;
    case 0x7F2DC84Cu: goto label_7F2DC84C;
    case 0x7F2DC850u: goto label_7F2DC850;
    case 0x7F2DC854u: goto label_7F2DC854;
    case 0x7F2DC858u: goto label_7F2DC858;
    case 0x7F2DC85Cu: goto label_7F2DC85C;
    case 0x7F2DC860u: goto label_7F2DC860;
    case 0x7F2DC864u: goto label_7F2DC864;
    case 0x7F2DC868u: goto label_7F2DC868;
    case 0x7F2DC86Cu: goto label_7F2DC86C;
    case 0x7F2DC870u: goto label_7F2DC870;
    case 0x7F2DC874u: goto label_7F2DC874;
    case 0x7F2DC878u: goto label_7F2DC878;
    case 0x7F2DC87Cu: goto label_7F2DC87C;
    case 0x7F2DC880u: goto label_7F2DC880;
    case 0x7F2DC884u: goto label_7F2DC884;
    case 0x7F2DC888u: goto label_7F2DC888;
    case 0x7F2DC88Cu: goto label_7F2DC88C;
    case 0x7F2DC890u: goto label_7F2DC890;
    case 0x7F2DC894u: goto label_7F2DC894;
    case 0x7F2DC898u: goto label_7F2DC898;
    case 0x7F2DC89Cu: goto label_7F2DC89C;
    case 0x7F2DC8A0u: goto label_7F2DC8A0;
    case 0x7F2DC8A4u: goto label_7F2DC8A4;
    case 0x7F2DC8A8u: goto label_7F2DC8A8;
    case 0x7F2DC8ACu: goto label_7F2DC8AC;
    case 0x7F2DC8B0u: goto label_7F2DC8B0;
    case 0x7F2DC8B4u: goto label_7F2DC8B4;
    case 0x7F2DC8B8u: goto label_7F2DC8B8;
    case 0x7F2DC8BCu: goto label_7F2DC8BC;
    case 0x7F2DC8C0u: goto label_7F2DC8C0;
    case 0x7F2DC8C4u: goto label_7F2DC8C4;
    case 0x7F2DC8C8u: goto label_7F2DC8C8;
    case 0x7F2DC8CCu: goto label_7F2DC8CC;
    case 0x7F2DC8D0u: goto label_7F2DC8D0;
    case 0x7F2DC8D4u: goto label_7F2DC8D4;
    case 0x7F2DC8D8u: goto label_7F2DC8D8;
    case 0x7F2DC8DCu: goto label_7F2DC8DC;
    case 0x7F2DC8E0u: goto label_7F2DC8E0;
    case 0x7F2DC8E4u: goto label_7F2DC8E4;
    case 0x7F2DC8E8u: goto label_7F2DC8E8;
    case 0x7F2DC8ECu: goto label_7F2DC8EC;
    case 0x7F2DC8F0u: goto label_7F2DC8F0;
    case 0x7F2DC8F4u: goto label_7F2DC8F4;
    case 0x7F2DC8F8u: goto label_7F2DC8F8;
    case 0x7F2DC8FCu: goto label_7F2DC8FC;
    case 0x7F2DC900u: goto label_7F2DC900;
    case 0x7F2DC904u: goto label_7F2DC904;
    case 0x7F2DC908u: goto label_7F2DC908;
    case 0x7F2DC90Cu: goto label_7F2DC90C;
    case 0x7F2DC910u: goto label_7F2DC910;
    case 0x7F2DC914u: goto label_7F2DC914;
    case 0x7F2DC918u: goto label_7F2DC918;
    case 0x7F2DC91Cu: goto label_7F2DC91C;
    case 0x7F2DC920u: goto label_7F2DC920;
    case 0x7F2DC924u: goto label_7F2DC924;
    case 0x7F2DC928u: goto label_7F2DC928;
    case 0x7F2DC92Cu: goto label_7F2DC92C;
    case 0x7F2DC930u: goto label_7F2DC930;
    case 0x7F2DC934u: goto label_7F2DC934;
    case 0x7F2DC938u: goto label_7F2DC938;
    case 0x7F2DC93Cu: goto label_7F2DC93C;
    case 0x7F2DC940u: goto label_7F2DC940;
    case 0x7F2DC944u: goto label_7F2DC944;
    case 0x7F2DC948u: goto label_7F2DC948;
    case 0x7F2DC94Cu: goto label_7F2DC94C;
    case 0x7F2DC950u: goto label_7F2DC950;
    case 0x7F2DC954u: goto label_7F2DC954;
    case 0x7F2DC958u: goto label_7F2DC958;
    case 0x7F2DC95Cu: goto label_7F2DC95C;
    case 0x7F2DC960u: goto label_7F2DC960;
    case 0x7F2DC964u: goto label_7F2DC964;
    case 0x7F2DC968u: goto label_7F2DC968;
    case 0x7F2DC96Cu: goto label_7F2DC96C;
    case 0x7F2DC970u: goto label_7F2DC970;
    case 0x7F2DC974u: goto label_7F2DC974;
    case 0x7F2DC978u: goto label_7F2DC978;
    case 0x7F2DC97Cu: goto label_7F2DC97C;
    case 0x7F2DC980u: goto label_7F2DC980;
    case 0x7F2DC984u: goto label_7F2DC984;
    case 0x7F2DC988u: goto label_7F2DC988;
    case 0x7F2DC98Cu: goto label_7F2DC98C;
    case 0x7F2DC990u: goto label_7F2DC990;
    case 0x7F2DC994u: goto label_7F2DC994;
    case 0x7F2DC998u: goto label_7F2DC998;
    case 0x7F2DC99Cu: goto label_7F2DC99C;
    case 0x7F2DC9A0u: goto label_7F2DC9A0;
    case 0x7F2DC9A4u: goto label_7F2DC9A4;
    case 0x7F2DC9A8u: goto label_7F2DC9A8;
    case 0x7F2DC9ACu: goto label_7F2DC9AC;
    case 0x7F2DC9B0u: goto label_7F2DC9B0;
    case 0x7F2DC9B4u: goto label_7F2DC9B4;
    case 0x7F2DC9B8u: goto label_7F2DC9B8;
    case 0x7F2DC9BCu: goto label_7F2DC9BC;
    case 0x7F2DC9C0u: goto label_7F2DC9C0;
    case 0x7F2DC9C4u: goto label_7F2DC9C4;
    case 0x7F2DC9C8u: goto label_7F2DC9C8;
    case 0x7F2DC9CCu: goto label_7F2DC9CC;
    case 0x7F2DC9D0u: goto label_7F2DC9D0;
    case 0x7F2DC9D4u: goto label_7F2DC9D4;
    case 0x7F2DC9D8u: goto label_7F2DC9D8;
    case 0x7F2DC9DCu: goto label_7F2DC9DC;
    case 0x7F2DC9E0u: goto label_7F2DC9E0;
    case 0x7F2DC9E4u: goto label_7F2DC9E4;
    case 0x7F2DC9E8u: goto label_7F2DC9E8;
    case 0x7F2DC9ECu: goto label_7F2DC9EC;
    case 0x7F2DC9F0u: goto label_7F2DC9F0;
    case 0x7F2DC9F4u: goto label_7F2DC9F4;
    case 0x7F2DC9F8u: goto label_7F2DC9F8;
    case 0x7F2DC9FCu: goto label_7F2DC9FC;
    case 0x7F2DCA00u: goto label_7F2DCA00;
    case 0x7F2DCA04u: goto label_7F2DCA04;
    case 0x7F2DCA08u: goto label_7F2DCA08;
    case 0x7F2DCA0Cu: goto label_7F2DCA0C;
    case 0x7F2DCA10u: goto label_7F2DCA10;
    case 0x7F2DCA14u: goto label_7F2DCA14;
    case 0x7F2DCA18u: goto label_7F2DCA18;
    case 0x7F2DCA1Cu: goto label_7F2DCA1C;
    case 0x7F2DCA20u: goto label_7F2DCA20;
    case 0x7F2DCA24u: goto label_7F2DCA24;
    case 0x7F2DCA28u: goto label_7F2DCA28;
    case 0x7F2DCA2Cu: goto label_7F2DCA2C;
    case 0x7F2DCA30u: goto label_7F2DCA30;
    case 0x7F2DCA34u: goto label_7F2DCA34;
    case 0x7F2DCA38u: goto label_7F2DCA38;
    case 0x7F2DCA3Cu: goto label_7F2DCA3C;
    case 0x7F2DCA40u: goto label_7F2DCA40;
    case 0x7F2DCA44u: goto label_7F2DCA44;
    case 0x7F2DCA48u: goto label_7F2DCA48;
    case 0x7F2DCA4Cu: goto label_7F2DCA4C;
    case 0x7F2DCA50u: goto label_7F2DCA50;
    case 0x7F2DCA54u: goto label_7F2DCA54;
    case 0x7F2DCA58u: goto label_7F2DCA58;
    case 0x7F2DCA5Cu: goto label_7F2DCA5C;
    case 0x7F2DCA60u: goto label_7F2DCA60;
    case 0x7F2DCA64u: goto label_7F2DCA64;
    case 0x7F2DCA68u: goto label_7F2DCA68;
    case 0x7F2DCA6Cu: goto label_7F2DCA6C;
    case 0x7F2DCA70u: goto label_7F2DCA70;
    case 0x7F2DCA74u: goto label_7F2DCA74;
    case 0x7F2DCA78u: goto label_7F2DCA78;
    case 0x7F2DCA7Cu: goto label_7F2DCA7C;
    case 0x7F2DCA80u: goto label_7F2DCA80;
    case 0x7F2DCA84u: goto label_7F2DCA84;
    case 0x7F2DCA88u: goto label_7F2DCA88;
    case 0x7F2DCA8Cu: goto label_7F2DCA8C;
    case 0x7F2DCA90u: goto label_7F2DCA90;
    case 0x7F2DCA94u: goto label_7F2DCA94;
    case 0x7F2DCA98u: goto label_7F2DCA98;
    case 0x7F2DCA9Cu: goto label_7F2DCA9C;
    case 0x7F2DCAA0u: goto label_7F2DCAA0;
    case 0x7F2DCAA4u: goto label_7F2DCAA4;
    case 0x7F2DCAA8u: goto label_7F2DCAA8;
    case 0x7F2DCAACu: goto label_7F2DCAAC;
    case 0x7F2DCAB0u: goto label_7F2DCAB0;
    case 0x7F2DCAB4u: goto label_7F2DCAB4;
    case 0x7F2DCAB8u: goto label_7F2DCAB8;
    case 0x7F2DCABCu: goto label_7F2DCABC;
    case 0x7F2DCAC0u: goto label_7F2DCAC0;
    case 0x7F2DCAC4u: goto label_7F2DCAC4;
    case 0x7F2DCAC8u: goto label_7F2DCAC8;
    case 0x7F2DCACCu: goto label_7F2DCACC;
    case 0x7F2DCAD0u: goto label_7F2DCAD0;
    case 0x7F2DCAD4u: goto label_7F2DCAD4;
    case 0x7F2DCAD8u: goto label_7F2DCAD8;
    case 0x7F2DCADCu: goto label_7F2DCADC;
    case 0x7F2DCAE0u: goto label_7F2DCAE0;
    case 0x7F2DCAE4u: goto label_7F2DCAE4;
    case 0x7F2DCAE8u: goto label_7F2DCAE8;
    case 0x7F2DCAECu: goto label_7F2DCAEC;
    case 0x7F2DCAF0u: goto label_7F2DCAF0;
    case 0x7F2DCAF4u: goto label_7F2DCAF4;
    case 0x7F2DCAF8u: goto label_7F2DCAF8;
    case 0x7F2DCAFCu: goto label_7F2DCAFC;
    case 0x7F2DCB00u: goto label_7F2DCB00;
    case 0x7F2DCB04u: goto label_7F2DCB04;
    case 0x7F2DCB08u: goto label_7F2DCB08;
    case 0x7F2DCB0Cu: goto label_7F2DCB0C;
    case 0x7F2DCB10u: goto label_7F2DCB10;
    case 0x7F2DCB14u: goto label_7F2DCB14;
    case 0x7F2DCB18u: goto label_7F2DCB18;
    case 0x7F2DCB1Cu: goto label_7F2DCB1C;
    case 0x7F2DCB20u: goto label_7F2DCB20;
    case 0x7F2DCB24u: goto label_7F2DCB24;
    case 0x7F2DCB28u: goto label_7F2DCB28;
    case 0x7F2DCB2Cu: goto label_7F2DCB2C;
    case 0x7F2DCB30u: goto label_7F2DCB30;
    case 0x7F2DCB34u: goto label_7F2DCB34;
    case 0x7F2DCB38u: goto label_7F2DCB38;
    case 0x7F2DCB3Cu: goto label_7F2DCB3C;
    case 0x7F2DCB40u: goto label_7F2DCB40;
    case 0x7F2DCB44u: goto label_7F2DCB44;
    case 0x7F2DCB48u: goto label_7F2DCB48;
    case 0x7F2DCB4Cu: goto label_7F2DCB4C;
    case 0x7F2DCB50u: goto label_7F2DCB50;
    case 0x7F2DCB54u: goto label_7F2DCB54;
    case 0x7F2DCB58u: goto label_7F2DCB58;
    case 0x7F2DCB5Cu: goto label_7F2DCB5C;
    case 0x7F2DCB60u: goto label_7F2DCB60;
    case 0x7F2DCB64u: goto label_7F2DCB64;
    case 0x7F2DCB68u: goto label_7F2DCB68;
    case 0x7F2DCB6Cu: goto label_7F2DCB6C;
    case 0x7F2DCB70u: goto label_7F2DCB70;
    case 0x7F2DCB74u: goto label_7F2DCB74;
    case 0x7F2DCB78u: goto label_7F2DCB78;
    case 0x7F2DCB7Cu: goto label_7F2DCB7C;
    case 0x7F2DCB80u: goto label_7F2DCB80;
    case 0x7F2DCB84u: goto label_7F2DCB84;
    case 0x7F2DCB88u: goto label_7F2DCB88;
    case 0x7F2DCB8Cu: goto label_7F2DCB8C;
    case 0x7F2DCB90u: goto label_7F2DCB90;
    case 0x7F2DCB94u: goto label_7F2DCB94;
    case 0x7F2DCB98u: goto label_7F2DCB98;
    case 0x7F2DCB9Cu: goto label_7F2DCB9C;
    case 0x7F2DCBA0u: goto label_7F2DCBA0;
    case 0x7F2DCBA4u: goto label_7F2DCBA4;
    case 0x7F2DCBA8u: goto label_7F2DCBA8;
    case 0x7F2DCBACu: goto label_7F2DCBAC;
    case 0x7F2DCBB0u: goto label_7F2DCBB0;
    case 0x7F2DCBB4u: goto label_7F2DCBB4;
    case 0x7F2DCBB8u: goto label_7F2DCBB8;
    case 0x7F2DCBBCu: goto label_7F2DCBBC;
    case 0x7F2DCBC0u: goto label_7F2DCBC0;
    case 0x7F2DCBC4u: goto label_7F2DCBC4;
    case 0x7F2DCBC8u: goto label_7F2DCBC8;
    case 0x7F2DCBCCu: goto label_7F2DCBCC;
    case 0x7F2DCBD0u: goto label_7F2DCBD0;
    case 0x7F2DCBD4u: goto label_7F2DCBD4;
    case 0x7F2DCBD8u: goto label_7F2DCBD8;
    case 0x7F2DCBDCu: goto label_7F2DCBDC;
    case 0x7F2DCBE0u: goto label_7F2DCBE0;
    case 0x7F2DCBE4u: goto label_7F2DCBE4;
    case 0x7F2DCBE8u: goto label_7F2DCBE8;
    case 0x7F2DCBECu: goto label_7F2DCBEC;
    case 0x7F2DCBF0u: goto label_7F2DCBF0;
    case 0x7F2DCBF4u: goto label_7F2DCBF4;
    case 0x7F2DCBF8u: goto label_7F2DCBF8;
    case 0x7F2DCBFCu: goto label_7F2DCBFC;
    case 0x7F2DCC00u: goto label_7F2DCC00;
    case 0x7F2DCC04u: goto label_7F2DCC04;
    case 0x7F2DCC08u: goto label_7F2DCC08;
    case 0x7F2DCC0Cu: goto label_7F2DCC0C;
    case 0x7F2DCC10u: goto label_7F2DCC10;
    case 0x7F2DCC14u: goto label_7F2DCC14;
    case 0x7F2DCC18u: goto label_7F2DCC18;
    case 0x7F2DCC1Cu: goto label_7F2DCC1C;
    case 0x7F2DCC20u: goto label_7F2DCC20;
    case 0x7F2DCC24u: goto label_7F2DCC24;
    case 0x7F2DCC28u: goto label_7F2DCC28;
    case 0x7F2DCC2Cu: goto label_7F2DCC2C;
    case 0x7F2DCC30u: goto label_7F2DCC30;
    case 0x7F2DCC34u: goto label_7F2DCC34;
    case 0x7F2DCC38u: goto label_7F2DCC38;
    case 0x7F2DCC3Cu: goto label_7F2DCC3C;
    case 0x7F2DCC40u: goto label_7F2DCC40;
    case 0x7F2DCC44u: goto label_7F2DCC44;
    case 0x7F2DCC48u: goto label_7F2DCC48;
    case 0x7F2DCC4Cu: goto label_7F2DCC4C;
    case 0x7F2DCC50u: goto label_7F2DCC50;
    case 0x7F2DCC54u: goto label_7F2DCC54;
    case 0x7F2DCC58u: goto label_7F2DCC58;
    case 0x7F2DCC5Cu: goto label_7F2DCC5C;
    case 0x7F2DCC60u: goto label_7F2DCC60;
    case 0x7F2DCC64u: goto label_7F2DCC64;
    case 0x7F2DCC68u: goto label_7F2DCC68;
    case 0x7F2DCC6Cu: goto label_7F2DCC6C;
    case 0x7F2DCC70u: goto label_7F2DCC70;
    case 0x7F2DCC74u: goto label_7F2DCC74;
    case 0x7F2DCC78u: goto label_7F2DCC78;
    case 0x7F2DCC7Cu: goto label_7F2DCC7C;
    case 0x7F2DCC80u: goto label_7F2DCC80;
    case 0x7F2DCC84u: goto label_7F2DCC84;
    case 0x7F2DCC88u: goto label_7F2DCC88;
    case 0x7F2DCC8Cu: goto label_7F2DCC8C;
    case 0x7F2DCC90u: goto label_7F2DCC90;
    case 0x7F2DCC94u: goto label_7F2DCC94;
    case 0x7F2DCC98u: goto label_7F2DCC98;
    case 0x7F2DCC9Cu: goto label_7F2DCC9C;
    case 0x7F2DCCA0u: goto label_7F2DCCA0;
    case 0x7F2DCCA4u: goto label_7F2DCCA4;
    case 0x7F2DCCA8u: goto label_7F2DCCA8;
    case 0x7F2DCCACu: goto label_7F2DCCAC;
    case 0x7F2DCCB0u: goto label_7F2DCCB0;
    case 0x7F2DCCB4u: goto label_7F2DCCB4;
    case 0x7F2DCCB8u: goto label_7F2DCCB8;
    case 0x7F2DCCBCu: goto label_7F2DCCBC;
    case 0x7F2DCCC0u: goto label_7F2DCCC0;
    case 0x7F2DCCC4u: goto label_7F2DCCC4;
    case 0x7F2DCCC8u: goto label_7F2DCCC8;
    case 0x7F2DCCCCu: goto label_7F2DCCCC;
    case 0x7F2DCCD0u: goto label_7F2DCCD0;
    case 0x7F2DCCD4u: goto label_7F2DCCD4;
    case 0x7F2DCCD8u: goto label_7F2DCCD8;
    case 0x7F2DCCDCu: goto label_7F2DCCDC;
    case 0x7F2DCCE0u: goto label_7F2DCCE0;
    case 0x7F2DCCE4u: goto label_7F2DCCE4;
    case 0x7F2DCCE8u: goto label_7F2DCCE8;
    case 0x7F2DCCECu: goto label_7F2DCCEC;
    case 0x7F2DCCF0u: goto label_7F2DCCF0;
    case 0x7F2DCCF4u: goto label_7F2DCCF4;
    case 0x7F2DCCF8u: goto label_7F2DCCF8;
    case 0x7F2DCCFCu: goto label_7F2DCCFC;
    case 0x7F2DCD00u: goto label_7F2DCD00;
    case 0x7F2DCD04u: goto label_7F2DCD04;
    case 0x7F2DCD08u: goto label_7F2DCD08;
    case 0x7F2DCD0Cu: goto label_7F2DCD0C;
    case 0x7F2DCD10u: goto label_7F2DCD10;
    case 0x7F2DCD14u: goto label_7F2DCD14;
    case 0x7F2DCD18u: goto label_7F2DCD18;
    case 0x7F2DCD1Cu: goto label_7F2DCD1C;
    case 0x7F2DCD20u: goto label_7F2DCD20;
    case 0x7F2DCD24u: goto label_7F2DCD24;
    case 0x7F2DCD28u: goto label_7F2DCD28;
    case 0x7F2DCD2Cu: goto label_7F2DCD2C;
    case 0x7F2DCD30u: goto label_7F2DCD30;
    case 0x7F2DCD34u: goto label_7F2DCD34;
    case 0x7F2DCD38u: goto label_7F2DCD38;
    case 0x7F2DCD3Cu: goto label_7F2DCD3C;
    case 0x7F2DCD40u: goto label_7F2DCD40;
    case 0x7F2DCD44u: goto label_7F2DCD44;
    case 0x7F2DCD48u: goto label_7F2DCD48;
    case 0x7F2DCD4Cu: goto label_7F2DCD4C;
    case 0x7F2DCD50u: goto label_7F2DCD50;
    case 0x7F2DCD54u: goto label_7F2DCD54;
    case 0x7F2DCD58u: goto label_7F2DCD58;
    case 0x7F2DCD5Cu: goto label_7F2DCD5C;
    case 0x7F2DCD60u: goto label_7F2DCD60;
    case 0x7F2DCD64u: goto label_7F2DCD64;
    case 0x7F2DCD68u: goto label_7F2DCD68;
    case 0x7F2DCD6Cu: goto label_7F2DCD6C;
    case 0x7F2DCD70u: goto label_7F2DCD70;
    case 0x7F2DCD74u: goto label_7F2DCD74;
    case 0x7F2DCD78u: goto label_7F2DCD78;
    case 0x7F2DCD7Cu: goto label_7F2DCD7C;
    case 0x7F2DCD80u: goto label_7F2DCD80;
    case 0x7F2DCD84u: goto label_7F2DCD84;
    case 0x7F2DCD88u: goto label_7F2DCD88;
    case 0x7F2DCD8Cu: goto label_7F2DCD8C;
    case 0x7F2DCD90u: goto label_7F2DCD90;
    case 0x7F2DCD94u: goto label_7F2DCD94;
    case 0x7F2DCD98u: goto label_7F2DCD98;
    case 0x7F2DCD9Cu: goto label_7F2DCD9C;
    case 0x7F2DCDA0u: goto label_7F2DCDA0;
    case 0x7F2DCDA4u: goto label_7F2DCDA4;
    case 0x7F2DCDA8u: goto label_7F2DCDA8;
    case 0x7F2DCDACu: goto label_7F2DCDAC;
    case 0x7F2DCDB0u: goto label_7F2DCDB0;
    case 0x7F2DCDB4u: goto label_7F2DCDB4;
    case 0x7F2DCDB8u: goto label_7F2DCDB8;
    case 0x7F2DCDBCu: goto label_7F2DCDBC;
    case 0x7F2DCDC0u: goto label_7F2DCDC0;
    case 0x7F2DCDC4u: goto label_7F2DCDC4;
    case 0x7F2DCDC8u: goto label_7F2DCDC8;
    case 0x7F2DCDCCu: goto label_7F2DCDCC;
    case 0x7F2DCDD0u: goto label_7F2DCDD0;
    case 0x7F2DCDD4u: goto label_7F2DCDD4;
    case 0x7F2DCDD8u: goto label_7F2DCDD8;
    case 0x7F2DCDDCu: goto label_7F2DCDDC;
    case 0x7F2DCDE0u: goto label_7F2DCDE0;
    case 0x7F2DCDE4u: goto label_7F2DCDE4;
    case 0x7F2DCDE8u: goto label_7F2DCDE8;
    case 0x7F2DCDECu: goto label_7F2DCDEC;
    case 0x7F2DCDF0u: goto label_7F2DCDF0;
    case 0x7F2DCDF4u: goto label_7F2DCDF4;
    case 0x7F2DCDF8u: goto label_7F2DCDF8;
    case 0x7F2DCDFCu: goto label_7F2DCDFC;
    case 0x7F2DCE00u: goto label_7F2DCE00;
    case 0x7F2DCE04u: goto label_7F2DCE04;
    case 0x7F2DCE08u: goto label_7F2DCE08;
    case 0x7F2DCE0Cu: goto label_7F2DCE0C;
    case 0x7F2DCE10u: goto label_7F2DCE10;
    case 0x7F2DCE14u: goto label_7F2DCE14;
    case 0x7F2DCE18u: goto label_7F2DCE18;
    case 0x7F2DCE1Cu: goto label_7F2DCE1C;
    case 0x7F2DCE20u: goto label_7F2DCE20;
    case 0x7F2DCE24u: goto label_7F2DCE24;
    case 0x7F2DCE28u: goto label_7F2DCE28;
    case 0x7F2DCE2Cu: goto label_7F2DCE2C;
    case 0x7F2DCE30u: goto label_7F2DCE30;
    case 0x7F2DCE34u: goto label_7F2DCE34;
    case 0x7F2DCE38u: goto label_7F2DCE38;
    case 0x7F2DCE3Cu: goto label_7F2DCE3C;
    case 0x7F2DCE40u: goto label_7F2DCE40;
    case 0x7F2DCE44u: goto label_7F2DCE44;
    case 0x7F2DCE48u: goto label_7F2DCE48;
    case 0x7F2DCE4Cu: goto label_7F2DCE4C;
    case 0x7F2DCE50u: goto label_7F2DCE50;
    case 0x7F2DCE54u: goto label_7F2DCE54;
    case 0x7F2DCE58u: goto label_7F2DCE58;
    case 0x7F2DCE5Cu: goto label_7F2DCE5C;
    case 0x7F2DCE60u: goto label_7F2DCE60;
    case 0x7F2DCE64u: goto label_7F2DCE64;
    case 0x7F2DCE68u: goto label_7F2DCE68;
    case 0x7F2DCE6Cu: goto label_7F2DCE6C;
    case 0x7F2DCE70u: goto label_7F2DCE70;
    case 0x7F2DCE74u: goto label_7F2DCE74;
    case 0x7F2DCE78u: goto label_7F2DCE78;
    case 0x7F2DCE7Cu: goto label_7F2DCE7C;
    case 0x7F2DCE80u: goto label_7F2DCE80;
    case 0x7F2DCE84u: goto label_7F2DCE84;
    case 0x7F2DCE88u: goto label_7F2DCE88;
    case 0x7F2DCE8Cu: goto label_7F2DCE8C;
    case 0x7F2DCE90u: goto label_7F2DCE90;
    case 0x7F2DCE94u: goto label_7F2DCE94;
    case 0x7F2DCE98u: goto label_7F2DCE98;
    case 0x7F2DCE9Cu: goto label_7F2DCE9C;
    case 0x7F2DCEA0u: goto label_7F2DCEA0;
    case 0x7F2DCEA4u: goto label_7F2DCEA4;
    case 0x7F2DCEA8u: goto label_7F2DCEA8;
    case 0x7F2DCEACu: goto label_7F2DCEAC;
    case 0x7F2DCEB0u: goto label_7F2DCEB0;
    case 0x7F2DCEB4u: goto label_7F2DCEB4;
    case 0x7F2DCEB8u: goto label_7F2DCEB8;
    case 0x7F2DCEBCu: goto label_7F2DCEBC;
    case 0x7F2DCEC0u: goto label_7F2DCEC0;
    case 0x7F2DCEC4u: goto label_7F2DCEC4;
    case 0x7F2DCEC8u: goto label_7F2DCEC8;
    case 0x7F2DCECCu: goto label_7F2DCECC;
    case 0x7F2DCED0u: goto label_7F2DCED0;
    case 0x7F2DCED4u: goto label_7F2DCED4;
    case 0x7F2DCED8u: goto label_7F2DCED8;
    case 0x7F2DCEDCu: goto label_7F2DCEDC;
    case 0x7F2DCEE0u: goto label_7F2DCEE0;
    case 0x7F2DCEE4u: goto label_7F2DCEE4;
    case 0x7F2DCEE8u: goto label_7F2DCEE8;
    case 0x7F2DCEECu: goto label_7F2DCEEC;
    case 0x7F2DCEF0u: goto label_7F2DCEF0;
    case 0x7F2DCEF4u: goto label_7F2DCEF4;
    case 0x7F2DCEF8u: goto label_7F2DCEF8;
    case 0x7F2DCEFCu: goto label_7F2DCEFC;
    case 0x7F2DCF00u: goto label_7F2DCF00;
    case 0x7F2DCF04u: goto label_7F2DCF04;
    case 0x7F2DCF08u: goto label_7F2DCF08;
    case 0x7F2DCF0Cu: goto label_7F2DCF0C;
    case 0x7F2DCF10u: goto label_7F2DCF10;
    case 0x7F2DCF14u: goto label_7F2DCF14;
    case 0x7F2DCF18u: goto label_7F2DCF18;
    case 0x7F2DCF1Cu: goto label_7F2DCF1C;
    case 0x7F2DCF20u: goto label_7F2DCF20;
    case 0x7F2DCF24u: goto label_7F2DCF24;
    case 0x7F2DCF28u: goto label_7F2DCF28;
    case 0x7F2DCF2Cu: goto label_7F2DCF2C;
    case 0x7F2DCF30u: goto label_7F2DCF30;
    case 0x7F2DCF34u: goto label_7F2DCF34;
    case 0x7F2DCF38u: goto label_7F2DCF38;
    case 0x7F2DCF3Cu: goto label_7F2DCF3C;
    case 0x7F2DCF40u: goto label_7F2DCF40;
    case 0x7F2DCF44u: goto label_7F2DCF44;
    case 0x7F2DCF48u: goto label_7F2DCF48;
    case 0x7F2DCF4Cu: goto label_7F2DCF4C;
    case 0x7F2DCF50u: goto label_7F2DCF50;
    case 0x7F2DCF54u: goto label_7F2DCF54;
    case 0x7F2DCF58u: goto label_7F2DCF58;
    case 0x7F2DCF5Cu: goto label_7F2DCF5C;
    case 0x7F2DCF60u: goto label_7F2DCF60;
    case 0x7F2DCF64u: goto label_7F2DCF64;
    case 0x7F2DCF68u: goto label_7F2DCF68;
    case 0x7F2DCF6Cu: goto label_7F2DCF6C;
    case 0x7F2DCF70u: goto label_7F2DCF70;
    case 0x7F2DCF74u: goto label_7F2DCF74;
    case 0x7F2DCF78u: goto label_7F2DCF78;
    case 0x7F2DCF7Cu: goto label_7F2DCF7C;
    case 0x7F2DCF80u: goto label_7F2DCF80;
    case 0x7F2DCF84u: goto label_7F2DCF84;
    case 0x7F2DCF88u: goto label_7F2DCF88;
    case 0x7F2DCF8Cu: goto label_7F2DCF8C;
    case 0x7F2DCF90u: goto label_7F2DCF90;
    case 0x7F2DCF94u: goto label_7F2DCF94;
    case 0x7F2DCF98u: goto label_7F2DCF98;
    case 0x7F2DCF9Cu: goto label_7F2DCF9C;
    case 0x7F2DCFA0u: goto label_7F2DCFA0;
    case 0x7F2DCFA4u: goto label_7F2DCFA4;
    case 0x7F2DCFA8u: goto label_7F2DCFA8;
    case 0x7F2DCFACu: goto label_7F2DCFAC;
    case 0x7F2DCFB0u: goto label_7F2DCFB0;
    case 0x7F2DCFB4u: goto label_7F2DCFB4;
    case 0x7F2DCFB8u: goto label_7F2DCFB8;
    case 0x7F2DCFBCu: goto label_7F2DCFBC;
    case 0x7F2DCFC0u: goto label_7F2DCFC0;
    case 0x7F2DCFC4u: goto label_7F2DCFC4;
    case 0x7F2DCFC8u: goto label_7F2DCFC8;
    case 0x7F2DCFCCu: goto label_7F2DCFCC;
    case 0x7F2DCFD0u: goto label_7F2DCFD0;
    case 0x7F2DCFD4u: goto label_7F2DCFD4;
    case 0x7F2DCFD8u: goto label_7F2DCFD8;
    case 0x7F2DCFDCu: goto label_7F2DCFDC;
    case 0x7F2DCFE0u: goto label_7F2DCFE0;
    case 0x7F2DCFE4u: goto label_7F2DCFE4;
    case 0x7F2DCFE8u: goto label_7F2DCFE8;
    case 0x7F2DCFECu: goto label_7F2DCFEC;
    case 0x7F2DCFF0u: goto label_7F2DCFF0;
    case 0x7F2DCFF4u: goto label_7F2DCFF4;
    case 0x7F2DCFF8u: goto label_7F2DCFF8;
    case 0x7F2DCFFCu: goto label_7F2DCFFC;
    case 0x7F2DD000u: goto label_7F2DD000;
    case 0x7F2DD004u: goto label_7F2DD004;
    case 0x7F2DD008u: goto label_7F2DD008;
    case 0x7F2DD00Cu: goto label_7F2DD00C;
    case 0x7F2DD010u: goto label_7F2DD010;
    case 0x7F2DD014u: goto label_7F2DD014;
    case 0x7F2DD018u: goto label_7F2DD018;
    case 0x7F2DD01Cu: goto label_7F2DD01C;
    case 0x7F2DD020u: goto label_7F2DD020;
    case 0x7F2DD024u: goto label_7F2DD024;
    case 0x7F2DD028u: goto label_7F2DD028;
    case 0x7F2DD02Cu: goto label_7F2DD02C;
    case 0x7F2DD030u: goto label_7F2DD030;
    case 0x7F2DD034u: goto label_7F2DD034;
    case 0x7F2DD038u: goto label_7F2DD038;
    case 0x7F2DD03Cu: goto label_7F2DD03C;
    case 0x7F2DD040u: goto label_7F2DD040;
    case 0x7F2DD044u: goto label_7F2DD044;
    case 0x7F2DD048u: goto label_7F2DD048;
    case 0x7F2DD04Cu: goto label_7F2DD04C;
    case 0x7F2DD050u: goto label_7F2DD050;
    case 0x7F2DD054u: goto label_7F2DD054;
    case 0x7F2DD058u: goto label_7F2DD058;
    case 0x7F2DD05Cu: goto label_7F2DD05C;
    case 0x7F2DD060u: goto label_7F2DD060;
    case 0x7F2DD064u: goto label_7F2DD064;
    case 0x7F2DD068u: goto label_7F2DD068;
    case 0x7F2DD06Cu: goto label_7F2DD06C;
    case 0x7F2DD070u: goto label_7F2DD070;
    case 0x7F2DD074u: goto label_7F2DD074;
    case 0x7F2DD078u: goto label_7F2DD078;
    case 0x7F2DD07Cu: goto label_7F2DD07C;
    case 0x7F2DD080u: goto label_7F2DD080;
    case 0x7F2DD084u: goto label_7F2DD084;
    case 0x7F2DD088u: goto label_7F2DD088;
    case 0x7F2DD08Cu: goto label_7F2DD08C;
    case 0x7F2DD090u: goto label_7F2DD090;
    case 0x7F2DD094u: goto label_7F2DD094;
    case 0x7F2DD098u: goto label_7F2DD098;
    case 0x7F2DD09Cu: goto label_7F2DD09C;
    case 0x7F2DD0A0u: goto label_7F2DD0A0;
    case 0x7F2DD0A4u: goto label_7F2DD0A4;
    case 0x7F2DD0A8u: goto label_7F2DD0A8;
    case 0x7F2DD0ACu: goto label_7F2DD0AC;
    case 0x7F2DD0B0u: goto label_7F2DD0B0;
    case 0x7F2DD0B4u: goto label_7F2DD0B4;
    case 0x7F2DD0B8u: goto label_7F2DD0B8;
    case 0x7F2DD0BCu: goto label_7F2DD0BC;
    case 0x7F2DD0C0u: goto label_7F2DD0C0;
    case 0x7F2DD0C4u: goto label_7F2DD0C4;
    case 0x7F2DD0C8u: goto label_7F2DD0C8;
    case 0x7F2DD0CCu: goto label_7F2DD0CC;
    case 0x7F2DD0D0u: goto label_7F2DD0D0;
    case 0x7F2DD0D4u: goto label_7F2DD0D4;
    case 0x7F2DD0D8u: goto label_7F2DD0D8;
    case 0x7F2DD0DCu: goto label_7F2DD0DC;
    case 0x7F2DD0E0u: goto label_7F2DD0E0;
    case 0x7F2DD0E4u: goto label_7F2DD0E4;
    case 0x7F2DD0E8u: goto label_7F2DD0E8;
    case 0x7F2DD0ECu: goto label_7F2DD0EC;
    case 0x7F2DD0F0u: goto label_7F2DD0F0;
    case 0x7F2DD0F4u: goto label_7F2DD0F4;
    case 0x7F2DD0F8u: goto label_7F2DD0F8;
    case 0x7F2DD0FCu: goto label_7F2DD0FC;
    case 0x7F2DD100u: goto label_7F2DD100;
    case 0x7F2DD104u: goto label_7F2DD104;
    case 0x7F2DD108u: goto label_7F2DD108;
    case 0x7F2DD10Cu: goto label_7F2DD10C;
    case 0x7F2DD110u: goto label_7F2DD110;
    case 0x7F2DD114u: goto label_7F2DD114;
    case 0x7F2DD118u: goto label_7F2DD118;
    case 0x7F2DD11Cu: goto label_7F2DD11C;
    case 0x7F2DD120u: goto label_7F2DD120;
    case 0x7F2DD124u: goto label_7F2DD124;
    case 0x7F2DD128u: goto label_7F2DD128;
    case 0x7F2DD12Cu: goto label_7F2DD12C;
    case 0x7F2DD130u: goto label_7F2DD130;
    case 0x7F2DD134u: goto label_7F2DD134;
    case 0x7F2DD138u: goto label_7F2DD138;
    case 0x7F2DD13Cu: goto label_7F2DD13C;
    case 0x7F2DD140u: goto label_7F2DD140;
    case 0x7F2DD144u: goto label_7F2DD144;
    case 0x7F2DD148u: goto label_7F2DD148;
    case 0x7F2DD14Cu: goto label_7F2DD14C;
    case 0x7F2DD150u: goto label_7F2DD150;
    case 0x7F2DD154u: goto label_7F2DD154;
    case 0x7F2DD158u: goto label_7F2DD158;
    case 0x7F2DD15Cu: goto label_7F2DD15C;
    case 0x7F2DD160u: goto label_7F2DD160;
    case 0x7F2DD164u: goto label_7F2DD164;
    case 0x7F2DD168u: goto label_7F2DD168;
    case 0x7F2DD16Cu: goto label_7F2DD16C;
    case 0x7F2DD170u: goto label_7F2DD170;
    case 0x7F2DD174u: goto label_7F2DD174;
    case 0x7F2DD178u: goto label_7F2DD178;
    case 0x7F2DD17Cu: goto label_7F2DD17C;
    case 0x7F2DD180u: goto label_7F2DD180;
    case 0x7F2DD184u: goto label_7F2DD184;
    case 0x7F2DD188u: goto label_7F2DD188;
    case 0x7F2DD18Cu: goto label_7F2DD18C;
    case 0x7F2DD190u: goto label_7F2DD190;
    case 0x7F2DD194u: goto label_7F2DD194;
    case 0x7F2DD198u: goto label_7F2DD198;
    case 0x7F2DD19Cu: goto label_7F2DD19C;
    case 0x7F2DD1A0u: goto label_7F2DD1A0;
    case 0x7F2DD1A4u: goto label_7F2DD1A4;
    case 0x7F2DD1A8u: goto label_7F2DD1A8;
    case 0x7F2DD1ACu: goto label_7F2DD1AC;
    case 0x7F2DD1B0u: goto label_7F2DD1B0;
    case 0x7F2DD1B4u: goto label_7F2DD1B4;
    case 0x7F2DD1B8u: goto label_7F2DD1B8;
    case 0x7F2DD1BCu: goto label_7F2DD1BC;
    case 0x7F2DD1C0u: goto label_7F2DD1C0;
    case 0x7F2DD1C4u: goto label_7F2DD1C4;
    case 0x7F2DD1C8u: goto label_7F2DD1C8;
    case 0x7F2DD1CCu: goto label_7F2DD1CC;
    case 0x7F2DD1D0u: goto label_7F2DD1D0;
    case 0x7F2DD1D4u: goto label_7F2DD1D4;
    case 0x7F2DD1D8u: goto label_7F2DD1D8;
    case 0x7F2DD1DCu: goto label_7F2DD1DC;
    case 0x7F2DD1E0u: goto label_7F2DD1E0;
    case 0x7F2DD1E4u: goto label_7F2DD1E4;
    case 0x7F2DD1E8u: goto label_7F2DD1E8;
    case 0x7F2DD1ECu: goto label_7F2DD1EC;
    case 0x7F2DD1F0u: goto label_7F2DD1F0;
    case 0x7F2DD1F4u: goto label_7F2DD1F4;
    case 0x7F2DD1F8u: goto label_7F2DD1F8;
    case 0x7F2DD1FCu: goto label_7F2DD1FC;
    case 0x7F2DD200u: goto label_7F2DD200;
    case 0x7F2DD204u: goto label_7F2DD204;
    case 0x7F2DD208u: goto label_7F2DD208;
    case 0x7F2DD20Cu: goto label_7F2DD20C;
    case 0x7F2DD210u: goto label_7F2DD210;
    case 0x7F2DD214u: goto label_7F2DD214;
    case 0x7F2DD218u: goto label_7F2DD218;
    case 0x7F2DD21Cu: goto label_7F2DD21C;
    case 0x7F2DD220u: goto label_7F2DD220;
    case 0x7F2DD224u: goto label_7F2DD224;
    case 0x7F2DD228u: goto label_7F2DD228;
    case 0x7F2DD22Cu: goto label_7F2DD22C;
    case 0x7F2DD230u: goto label_7F2DD230;
    case 0x7F2DD234u: goto label_7F2DD234;
    case 0x7F2DD238u: goto label_7F2DD238;
    case 0x7F2DD23Cu: goto label_7F2DD23C;
    case 0x7F2DD240u: goto label_7F2DD240;
    case 0x7F2DD244u: goto label_7F2DD244;
    case 0x7F2DD248u: goto label_7F2DD248;
    case 0x7F2DD24Cu: goto label_7F2DD24C;
    case 0x7F2DD250u: goto label_7F2DD250;
    case 0x7F2DD254u: goto label_7F2DD254;
    case 0x7F2DD258u: goto label_7F2DD258;
    case 0x7F2DD25Cu: goto label_7F2DD25C;
    case 0x7F2DD260u: goto label_7F2DD260;
    case 0x7F2DD264u: goto label_7F2DD264;
    case 0x7F2DD268u: goto label_7F2DD268;
    case 0x7F2DD26Cu: goto label_7F2DD26C;
    case 0x7F2DD270u: goto label_7F2DD270;
    case 0x7F2DD274u: goto label_7F2DD274;
    case 0x7F2DD278u: goto label_7F2DD278;
    case 0x7F2DD27Cu: goto label_7F2DD27C;
    case 0x7F2DD280u: goto label_7F2DD280;
    case 0x7F2DD284u: goto label_7F2DD284;
    case 0x7F2DD288u: goto label_7F2DD288;
    case 0x7F2DD28Cu: goto label_7F2DD28C;
    case 0x7F2DD290u: goto label_7F2DD290;
    case 0x7F2DD294u: goto label_7F2DD294;
    case 0x7F2DD298u: goto label_7F2DD298;
    case 0x7F2DD29Cu: goto label_7F2DD29C;
    case 0x7F2DD2A0u: goto label_7F2DD2A0;
    case 0x7F2DD2A4u: goto label_7F2DD2A4;
    case 0x7F2DD2A8u: goto label_7F2DD2A8;
    case 0x7F2DD2ACu: goto label_7F2DD2AC;
    case 0x7F2DD2B0u: goto label_7F2DD2B0;
    case 0x7F2DD2B4u: goto label_7F2DD2B4;
    case 0x7F2DD2B8u: goto label_7F2DD2B8;
    case 0x7F2DD2BCu: goto label_7F2DD2BC;
    case 0x7F2DD2C0u: goto label_7F2DD2C0;
    case 0x7F2DD2C4u: goto label_7F2DD2C4;
    case 0x7F2DD2C8u: goto label_7F2DD2C8;
    case 0x7F2DD2CCu: goto label_7F2DD2CC;
    case 0x7F2DD2D0u: goto label_7F2DD2D0;
    case 0x7F2DD2D4u: goto label_7F2DD2D4;
    case 0x7F2DD2D8u: goto label_7F2DD2D8;
    case 0x7F2DD2DCu: goto label_7F2DD2DC;
    case 0x7F2DD2E0u: goto label_7F2DD2E0;
    case 0x7F2DD2E4u: goto label_7F2DD2E4;
    case 0x7F2DD2E8u: goto label_7F2DD2E8;
    case 0x7F2DD2ECu: goto label_7F2DD2EC;
    case 0x7F2DD2F0u: goto label_7F2DD2F0;
    case 0x7F2DD2F4u: goto label_7F2DD2F4;
    case 0x7F2DD2F8u: goto label_7F2DD2F8;
    case 0x7F2DD2FCu: goto label_7F2DD2FC;
    case 0x7F2DD300u: goto label_7F2DD300;
    case 0x7F2DD304u: goto label_7F2DD304;
    case 0x7F2DD308u: goto label_7F2DD308;
    case 0x7F2DD30Cu: goto label_7F2DD30C;
    case 0x7F2DD310u: goto label_7F2DD310;
    case 0x7F2DD314u: goto label_7F2DD314;
    case 0x7F2DD318u: goto label_7F2DD318;
    case 0x7F2DD31Cu: goto label_7F2DD31C;
    case 0x7F2DD320u: goto label_7F2DD320;
    case 0x7F2DD324u: goto label_7F2DD324;
    case 0x7F2DD328u: goto label_7F2DD328;
    case 0x7F2DD32Cu: goto label_7F2DD32C;
    case 0x7F2DD330u: goto label_7F2DD330;
    case 0x7F2DD334u: goto label_7F2DD334;
    case 0x7F2DD338u: goto label_7F2DD338;
    case 0x7F2DD33Cu: goto label_7F2DD33C;
    case 0x7F2DD340u: goto label_7F2DD340;
    case 0x7F2DD344u: goto label_7F2DD344;
    case 0x7F2DD348u: goto label_7F2DD348;
    case 0x7F2DD34Cu: goto label_7F2DD34C;
    case 0x7F2DD350u: goto label_7F2DD350;
    case 0x7F2DD354u: goto label_7F2DD354;
    case 0x7F2DD358u: goto label_7F2DD358;
    case 0x7F2DD35Cu: goto label_7F2DD35C;
    case 0x7F2DD360u: goto label_7F2DD360;
    case 0x7F2DD364u: goto label_7F2DD364;
    case 0x7F2DD368u: goto label_7F2DD368;
    case 0x7F2DD36Cu: goto label_7F2DD36C;
    case 0x7F2DD370u: goto label_7F2DD370;
    case 0x7F2DD374u: goto label_7F2DD374;
    case 0x7F2DD378u: goto label_7F2DD378;
    case 0x7F2DD37Cu: goto label_7F2DD37C;
    case 0x7F2DD380u: goto label_7F2DD380;
    case 0x7F2DD384u: goto label_7F2DD384;
    case 0x7F2DD388u: goto label_7F2DD388;
    case 0x7F2DD38Cu: goto label_7F2DD38C;
    case 0x7F2DD390u: goto label_7F2DD390;
    case 0x7F2DD394u: goto label_7F2DD394;
    case 0x7F2DD398u: goto label_7F2DD398;
    case 0x7F2DD39Cu: goto label_7F2DD39C;
    case 0x7F2DD3A0u: goto label_7F2DD3A0;
    case 0x7F2DD3A4u: goto label_7F2DD3A4;
    case 0x7F2DD3A8u: goto label_7F2DD3A8;
    case 0x7F2DD3ACu: goto label_7F2DD3AC;
    case 0x7F2DD3B0u: goto label_7F2DD3B0;
    case 0x7F2DD3B4u: goto label_7F2DD3B4;
    case 0x7F2DD3B8u: goto label_7F2DD3B8;
    case 0x7F2DD3BCu: goto label_7F2DD3BC;
    case 0x7F2DD3C0u: goto label_7F2DD3C0;
    case 0x7F2DD3C4u: goto label_7F2DD3C4;
    case 0x7F2DD3C8u: goto label_7F2DD3C8;
    case 0x7F2DD3CCu: goto label_7F2DD3CC;
    case 0x7F2DD3D0u: goto label_7F2DD3D0;
    case 0x7F2DD3D4u: goto label_7F2DD3D4;
    case 0x7F2DD3D8u: goto label_7F2DD3D8;
    case 0x7F2DD3DCu: goto label_7F2DD3DC;
    case 0x7F2DD3E0u: goto label_7F2DD3E0;
    case 0x7F2DD3E4u: goto label_7F2DD3E4;
    case 0x7F2DD3E8u: goto label_7F2DD3E8;
    case 0x7F2DD3ECu: goto label_7F2DD3EC;
    case 0x7F2DD3F0u: goto label_7F2DD3F0;
    case 0x7F2DD3F4u: goto label_7F2DD3F4;
    case 0x7F2DD3F8u: goto label_7F2DD3F8;
    case 0x7F2DD3FCu: goto label_7F2DD3FC;
    case 0x7F2DD400u: goto label_7F2DD400;
    case 0x7F2DD404u: goto label_7F2DD404;
    case 0x7F2DD408u: goto label_7F2DD408;
    case 0x7F2DD40Cu: goto label_7F2DD40C;
    case 0x7F2DD410u: goto label_7F2DD410;
    case 0x7F2DD414u: goto label_7F2DD414;
    case 0x7F2DD418u: goto label_7F2DD418;
    case 0x7F2DD41Cu: goto label_7F2DD41C;
    case 0x7F2DD420u: goto label_7F2DD420;
    case 0x7F2DD424u: goto label_7F2DD424;
    case 0x7F2DD428u: goto label_7F2DD428;
    case 0x7F2DD42Cu: goto label_7F2DD42C;
    case 0x7F2DD430u: goto label_7F2DD430;
    case 0x7F2DD434u: goto label_7F2DD434;
    case 0x7F2DD438u: goto label_7F2DD438;
    case 0x7F2DD43Cu: goto label_7F2DD43C;
    case 0x7F2DD440u: goto label_7F2DD440;
    case 0x7F2DD444u: goto label_7F2DD444;
    case 0x7F2DD448u: goto label_7F2DD448;
    case 0x7F2DD44Cu: goto label_7F2DD44C;
    case 0x7F2DD450u: goto label_7F2DD450;
    case 0x7F2DD454u: goto label_7F2DD454;
    case 0x7F2DD458u: goto label_7F2DD458;
    case 0x7F2DD45Cu: goto label_7F2DD45C;
    case 0x7F2DD460u: goto label_7F2DD460;
    case 0x7F2DD464u: goto label_7F2DD464;
    case 0x7F2DD468u: goto label_7F2DD468;
    case 0x7F2DD46Cu: goto label_7F2DD46C;
    case 0x7F2DD470u: goto label_7F2DD470;
    case 0x7F2DD474u: goto label_7F2DD474;
    case 0x7F2DD478u: goto label_7F2DD478;
    case 0x7F2DD47Cu: goto label_7F2DD47C;
    case 0x7F2DD480u: goto label_7F2DD480;
    case 0x7F2DD484u: goto label_7F2DD484;
    case 0x7F2DD488u: goto label_7F2DD488;
    case 0x7F2DD48Cu: goto label_7F2DD48C;
    case 0x7F2DD490u: goto label_7F2DD490;
    case 0x7F2DD494u: goto label_7F2DD494;
    case 0x7F2DD498u: goto label_7F2DD498;
    case 0x7F2DD49Cu: goto label_7F2DD49C;
    case 0x7F2DD4A0u: goto label_7F2DD4A0;
    case 0x7F2DD4A4u: goto label_7F2DD4A4;
    case 0x7F2DD4A8u: goto label_7F2DD4A8;
    case 0x7F2DD4ACu: goto label_7F2DD4AC;
    case 0x7F2DD4B0u: goto label_7F2DD4B0;
    case 0x7F2DD4B4u: goto label_7F2DD4B4;
    case 0x7F2DD4B8u: goto label_7F2DD4B8;
    case 0x7F2DD4BCu: goto label_7F2DD4BC;
    case 0x7F2DD4C0u: goto label_7F2DD4C0;
    case 0x7F2DD4C4u: goto label_7F2DD4C4;
    case 0x7F2DD4C8u: goto label_7F2DD4C8;
    case 0x7F2DD4CCu: goto label_7F2DD4CC;
    case 0x7F2DD4D0u: goto label_7F2DD4D0;
    case 0x7F2DD4D4u: goto label_7F2DD4D4;
    case 0x7F2DD4D8u: goto label_7F2DD4D8;
    case 0x7F2DD4DCu: goto label_7F2DD4DC;
    case 0x7F2DD4E0u: goto label_7F2DD4E0;
    case 0x7F2DD4E4u: goto label_7F2DD4E4;
    case 0x7F2DD4E8u: goto label_7F2DD4E8;
    case 0x7F2DD4ECu: goto label_7F2DD4EC;
    case 0x7F2DD4F0u: goto label_7F2DD4F0;
    case 0x7F2DD4F4u: goto label_7F2DD4F4;
    case 0x7F2DD4F8u: goto label_7F2DD4F8;
    case 0x7F2DD4FCu: goto label_7F2DD4FC;
    case 0x7F2DD500u: goto label_7F2DD500;
    case 0x7F2DD504u: goto label_7F2DD504;
    case 0x7F2DD508u: goto label_7F2DD508;
    case 0x7F2DD50Cu: goto label_7F2DD50C;
    case 0x7F2DD510u: goto label_7F2DD510;
    case 0x7F2DD514u: goto label_7F2DD514;
    case 0x7F2DD518u: goto label_7F2DD518;
    case 0x7F2DD51Cu: goto label_7F2DD51C;
    case 0x7F2DD520u: goto label_7F2DD520;
    case 0x7F2DD524u: goto label_7F2DD524;
    case 0x7F2DD528u: goto label_7F2DD528;
    case 0x7F2DD52Cu: goto label_7F2DD52C;
    case 0x7F2DD530u: goto label_7F2DD530;
    case 0x7F2DD534u: goto label_7F2DD534;
    case 0x7F2DD538u: goto label_7F2DD538;
    case 0x7F2DD53Cu: goto label_7F2DD53C;
    case 0x7F2DD540u: goto label_7F2DD540;
    case 0x7F2DD544u: goto label_7F2DD544;
    case 0x7F2DD548u: goto label_7F2DD548;
    case 0x7F2DD54Cu: goto label_7F2DD54C;
    case 0x7F2DD550u: goto label_7F2DD550;
    case 0x7F2DD554u: goto label_7F2DD554;
    case 0x7F2DD558u: goto label_7F2DD558;
    case 0x7F2DD55Cu: goto label_7F2DD55C;
    case 0x7F2DD560u: goto label_7F2DD560;
    case 0x7F2DD564u: goto label_7F2DD564;
    case 0x7F2DD568u: goto label_7F2DD568;
    case 0x7F2DD56Cu: goto label_7F2DD56C;
    case 0x7F2DD570u: goto label_7F2DD570;
    case 0x7F2DD574u: goto label_7F2DD574;
    case 0x7F2DD578u: goto label_7F2DD578;
    case 0x7F2DD57Cu: goto label_7F2DD57C;
    case 0x7F2DD580u: goto label_7F2DD580;
    case 0x7F2DD584u: goto label_7F2DD584;
    case 0x7F2DD588u: goto label_7F2DD588;
    case 0x7F2DD58Cu: goto label_7F2DD58C;
    case 0x7F2DD590u: goto label_7F2DD590;
    case 0x7F2DD594u: goto label_7F2DD594;
    case 0x7F2DD598u: goto label_7F2DD598;
    case 0x7F2DD59Cu: goto label_7F2DD59C;
    case 0x7F2DD5A0u: goto label_7F2DD5A0;
    case 0x7F2DD5A4u: goto label_7F2DD5A4;
    case 0x7F2DD5A8u: goto label_7F2DD5A8;
    case 0x7F2DD5ACu: goto label_7F2DD5AC;
    case 0x7F2DD5B0u: goto label_7F2DD5B0;
    case 0x7F2DD5B4u: goto label_7F2DD5B4;
    case 0x7F2DD5B8u: goto label_7F2DD5B8;
    case 0x7F2DD5BCu: goto label_7F2DD5BC;
    case 0x7F2DD5C0u: goto label_7F2DD5C0;
    case 0x7F2DD5C4u: goto label_7F2DD5C4;
    case 0x7F2DD5C8u: goto label_7F2DD5C8;
    case 0x7F2DD5CCu: goto label_7F2DD5CC;
    case 0x7F2DD5D0u: goto label_7F2DD5D0;
    case 0x7F2DD5D4u: goto label_7F2DD5D4;
    case 0x7F2DD5D8u: goto label_7F2DD5D8;
    case 0x7F2DD5DCu: goto label_7F2DD5DC;
    case 0x7F2DD5E0u: goto label_7F2DD5E0;
    case 0x7F2DD5E4u: goto label_7F2DD5E4;
    case 0x7F2DD5E8u: goto label_7F2DD5E8;
    case 0x7F2DD5ECu: goto label_7F2DD5EC;
    case 0x7F2DD5F0u: goto label_7F2DD5F0;
    case 0x7F2DD5F4u: goto label_7F2DD5F4;
    case 0x7F2DD5F8u: goto label_7F2DD5F8;
    case 0x7F2DD5FCu: goto label_7F2DD5FC;
    case 0x7F2DD600u: goto label_7F2DD600;
    case 0x7F2DD604u: goto label_7F2DD604;
    case 0x7F2DD608u: goto label_7F2DD608;
    case 0x7F2DD60Cu: goto label_7F2DD60C;
    case 0x7F2DD610u: goto label_7F2DD610;
    case 0x7F2DD614u: goto label_7F2DD614;
    case 0x7F2DD618u: goto label_7F2DD618;
    case 0x7F2DD61Cu: goto label_7F2DD61C;
    case 0x7F2DD620u: goto label_7F2DD620;
    case 0x7F2DD624u: goto label_7F2DD624;
    case 0x7F2DD628u: goto label_7F2DD628;
    case 0x7F2DD62Cu: goto label_7F2DD62C;
    case 0x7F2DD630u: goto label_7F2DD630;
    case 0x7F2DD634u: goto label_7F2DD634;
    case 0x7F2DD638u: goto label_7F2DD638;
    case 0x7F2DD63Cu: goto label_7F2DD63C;
    case 0x7F2DD640u: goto label_7F2DD640;
    case 0x7F2DD644u: goto label_7F2DD644;
    case 0x7F2DD648u: goto label_7F2DD648;
    case 0x7F2DD64Cu: goto label_7F2DD64C;
    case 0x7F2DD650u: goto label_7F2DD650;
    case 0x7F2DD654u: goto label_7F2DD654;
    case 0x7F2DD658u: goto label_7F2DD658;
    case 0x7F2DD65Cu: goto label_7F2DD65C;
    case 0x7F2DD660u: goto label_7F2DD660;
    case 0x7F2DD664u: goto label_7F2DD664;
    case 0x7F2DD668u: goto label_7F2DD668;
    case 0x7F2DD66Cu: goto label_7F2DD66C;
    case 0x7F2DD670u: goto label_7F2DD670;
    case 0x7F2DD674u: goto label_7F2DD674;
    case 0x7F2DD678u: goto label_7F2DD678;
    case 0x7F2DD67Cu: goto label_7F2DD67C;
    case 0x7F2DD680u: goto label_7F2DD680;
    case 0x7F2DD684u: goto label_7F2DD684;
    case 0x7F2DD688u: goto label_7F2DD688;
    case 0x7F2DD68Cu: goto label_7F2DD68C;
    case 0x7F2DD690u: goto label_7F2DD690;
    case 0x7F2DD694u: goto label_7F2DD694;
    case 0x7F2DD698u: goto label_7F2DD698;
    case 0x7F2DD69Cu: goto label_7F2DD69C;
    case 0x7F2DD6A0u: goto label_7F2DD6A0;
    case 0x7F2DD6A4u: goto label_7F2DD6A4;
    case 0x7F2DD6A8u: goto label_7F2DD6A8;
    case 0x7F2DD6ACu: goto label_7F2DD6AC;
    case 0x7F2DD6B0u: goto label_7F2DD6B0;
    case 0x7F2DD6B4u: goto label_7F2DD6B4;
    case 0x7F2DD6B8u: goto label_7F2DD6B8;
    case 0x7F2DD6BCu: goto label_7F2DD6BC;
    case 0x7F2DD6C0u: goto label_7F2DD6C0;
    case 0x7F2DD6C4u: goto label_7F2DD6C4;
    case 0x7F2DD6C8u: goto label_7F2DD6C8;
    case 0x7F2DD6CCu: goto label_7F2DD6CC;
    case 0x7F2DD6D0u: goto label_7F2DD6D0;
    case 0x7F2DD6D4u: goto label_7F2DD6D4;
    case 0x7F2DD6D8u: goto label_7F2DD6D8;
    case 0x7F2DD6DCu: goto label_7F2DD6DC;
    case 0x7F2DD6E0u: goto label_7F2DD6E0;
    case 0x7F2DD6E4u: goto label_7F2DD6E4;
    case 0x7F2DD6E8u: goto label_7F2DD6E8;
    case 0x7F2DD6ECu: goto label_7F2DD6EC;
    case 0x7F2DD6F0u: goto label_7F2DD6F0;
    case 0x7F2DD6F4u: goto label_7F2DD6F4;
    case 0x7F2DD6F8u: goto label_7F2DD6F8;
    case 0x7F2DD6FCu: goto label_7F2DD6FC;
    case 0x7F2DD700u: goto label_7F2DD700;
    case 0x7F2DD704u: goto label_7F2DD704;
    case 0x7F2DD708u: goto label_7F2DD708;
    case 0x7F2DD70Cu: goto label_7F2DD70C;
    case 0x7F2DD710u: goto label_7F2DD710;
    case 0x7F2DD714u: goto label_7F2DD714;
    case 0x7F2DD718u: goto label_7F2DD718;
    case 0x7F2DD71Cu: goto label_7F2DD71C;
    case 0x7F2DD720u: goto label_7F2DD720;
    case 0x7F2DD724u: goto label_7F2DD724;
    case 0x7F2DD728u: goto label_7F2DD728;
    case 0x7F2DD72Cu: goto label_7F2DD72C;
    case 0x7F2DD730u: goto label_7F2DD730;
    case 0x7F2DD734u: goto label_7F2DD734;
    case 0x7F2DD738u: goto label_7F2DD738;
    case 0x7F2DD73Cu: goto label_7F2DD73C;
    case 0x7F2DD740u: goto label_7F2DD740;
    case 0x7F2DD744u: goto label_7F2DD744;
    case 0x7F2DD748u: goto label_7F2DD748;
    case 0x7F2DD74Cu: goto label_7F2DD74C;
    case 0x7F2DD750u: goto label_7F2DD750;
    case 0x7F2DD754u: goto label_7F2DD754;
    case 0x7F2DD758u: goto label_7F2DD758;
    case 0x7F2DD75Cu: goto label_7F2DD75C;
    case 0x7F2DD760u: goto label_7F2DD760;
    case 0x7F2DD764u: goto label_7F2DD764;
    case 0x7F2DD768u: goto label_7F2DD768;
    case 0x7F2DD76Cu: goto label_7F2DD76C;
    case 0x7F2DD770u: goto label_7F2DD770;
    case 0x7F2DD774u: goto label_7F2DD774;
    case 0x7F2DD778u: goto label_7F2DD778;
    case 0x7F2DD77Cu: goto label_7F2DD77C;
    case 0x7F2DD780u: goto label_7F2DD780;
    case 0x7F2DD784u: goto label_7F2DD784;
    case 0x7F2DD788u: goto label_7F2DD788;
    case 0x7F2DD78Cu: goto label_7F2DD78C;
    case 0x7F2DD790u: goto label_7F2DD790;
    case 0x7F2DD794u: goto label_7F2DD794;
    case 0x7F2DD798u: goto label_7F2DD798;
    case 0x7F2DD79Cu: goto label_7F2DD79C;
    case 0x7F2DD7A0u: goto label_7F2DD7A0;
    case 0x7F2DD7A4u: goto label_7F2DD7A4;
    case 0x7F2DD7A8u: goto label_7F2DD7A8;
    case 0x7F2DD7ACu: goto label_7F2DD7AC;
    case 0x7F2DD7B0u: goto label_7F2DD7B0;
    case 0x7F2DD7B4u: goto label_7F2DD7B4;
    case 0x7F2DD7B8u: goto label_7F2DD7B8;
    case 0x7F2DD7BCu: goto label_7F2DD7BC;
    case 0x7F2DD7C0u: goto label_7F2DD7C0;
    case 0x7F2DD7C4u: goto label_7F2DD7C4;
    case 0x7F2DD7C8u: goto label_7F2DD7C8;
    case 0x7F2DD7CCu: goto label_7F2DD7CC;
    case 0x7F2DD7D0u: goto label_7F2DD7D0;
    case 0x7F2DD7D4u: goto label_7F2DD7D4;
    case 0x7F2DD7D8u: goto label_7F2DD7D8;
    case 0x7F2DD7DCu: goto label_7F2DD7DC;
    case 0x7F2DD7E0u: goto label_7F2DD7E0;
    case 0x7F2DD7E4u: goto label_7F2DD7E4;
    case 0x7F2DD7E8u: goto label_7F2DD7E8;
    case 0x7F2DD7ECu: goto label_7F2DD7EC;
    case 0x7F2DD7F0u: goto label_7F2DD7F0;
    case 0x7F2DD7F4u: goto label_7F2DD7F4;
    case 0x7F2DD7F8u: goto label_7F2DD7F8;
    case 0x7F2DD7FCu: goto label_7F2DD7FC;
    case 0x7F2DD800u: goto label_7F2DD800;
    case 0x7F2DD804u: goto label_7F2DD804;
    case 0x7F2DD808u: goto label_7F2DD808;
    case 0x7F2DD80Cu: goto label_7F2DD80C;
    case 0x7F2DD810u: goto label_7F2DD810;
    case 0x7F2DD814u: goto label_7F2DD814;
    case 0x7F2DD818u: goto label_7F2DD818;
    case 0x7F2DD81Cu: goto label_7F2DD81C;
    case 0x7F2DD820u: goto label_7F2DD820;
    case 0x7F2DD824u: goto label_7F2DD824;
    case 0x7F2DD828u: goto label_7F2DD828;
    case 0x7F2DD82Cu: goto label_7F2DD82C;
    case 0x7F2DD830u: goto label_7F2DD830;
    case 0x7F2DD834u: goto label_7F2DD834;
    case 0x7F2DD838u: goto label_7F2DD838;
    case 0x7F2DD83Cu: goto label_7F2DD83C;
    case 0x7F2DD840u: goto label_7F2DD840;
    case 0x7F2DD844u: goto label_7F2DD844;
    case 0x7F2DD848u: goto label_7F2DD848;
    case 0x7F2DD84Cu: goto label_7F2DD84C;
    case 0x7F2DD850u: goto label_7F2DD850;
    case 0x7F2DD854u: goto label_7F2DD854;
    case 0x7F2DD858u: goto label_7F2DD858;
    case 0x7F2DD85Cu: goto label_7F2DD85C;
    case 0x7F2DD860u: goto label_7F2DD860;
    case 0x7F2DD864u: goto label_7F2DD864;
    case 0x7F2DD868u: goto label_7F2DD868;
    case 0x7F2DD86Cu: goto label_7F2DD86C;
    case 0x7F2DD870u: goto label_7F2DD870;
    case 0x7F2DD874u: goto label_7F2DD874;
    case 0x7F2DD878u: goto label_7F2DD878;
    case 0x7F2DD87Cu: goto label_7F2DD87C;
    case 0x7F2DD880u: goto label_7F2DD880;
    case 0x7F2DD884u: goto label_7F2DD884;
    case 0x7F2DD888u: goto label_7F2DD888;
    case 0x7F2DD88Cu: goto label_7F2DD88C;
    case 0x7F2DD890u: goto label_7F2DD890;
    case 0x7F2DD894u: goto label_7F2DD894;
    case 0x7F2DD898u: goto label_7F2DD898;
    case 0x7F2DD89Cu: goto label_7F2DD89C;
    case 0x7F2DD8A0u: goto label_7F2DD8A0;
    case 0x7F2DD8A4u: goto label_7F2DD8A4;
    case 0x7F2DD8A8u: goto label_7F2DD8A8;
    case 0x7F2DD8ACu: goto label_7F2DD8AC;
    case 0x7F2DD8B0u: goto label_7F2DD8B0;
    case 0x7F2DD8B4u: goto label_7F2DD8B4;
    case 0x7F2DD8B8u: goto label_7F2DD8B8;
    case 0x7F2DD8BCu: goto label_7F2DD8BC;
    case 0x7F2DD8C0u: goto label_7F2DD8C0;
    case 0x7F2DD8C4u: goto label_7F2DD8C4;
    case 0x7F2DD8C8u: goto label_7F2DD8C8;
    case 0x7F2DD8CCu: goto label_7F2DD8CC;
    case 0x7F2DD8D0u: goto label_7F2DD8D0;
    case 0x7F2DD8D4u: goto label_7F2DD8D4;
    case 0x7F2DD8D8u: goto label_7F2DD8D8;
    case 0x7F2DD8DCu: goto label_7F2DD8DC;
    case 0x7F2DD8E0u: goto label_7F2DD8E0;
    case 0x7F2DD8E4u: goto label_7F2DD8E4;
    case 0x7F2DD8E8u: goto label_7F2DD8E8;
    case 0x7F2DD8ECu: goto label_7F2DD8EC;
    case 0x7F2DD8F0u: goto label_7F2DD8F0;
    case 0x7F2DD8F4u: goto label_7F2DD8F4;
    case 0x7F2DD8F8u: goto label_7F2DD8F8;
    case 0x7F2DD8FCu: goto label_7F2DD8FC;
    case 0x7F2DD900u: goto label_7F2DD900;
    case 0x7F2DD904u: goto label_7F2DD904;
    case 0x7F2DD908u: goto label_7F2DD908;
    case 0x7F2DD90Cu: goto label_7F2DD90C;
    case 0x7F2DD910u: goto label_7F2DD910;
    case 0x7F2DD914u: goto label_7F2DD914;
    case 0x7F2DD918u: goto label_7F2DD918;
    case 0x7F2DD91Cu: goto label_7F2DD91C;
    case 0x7F2DD920u: goto label_7F2DD920;
    case 0x7F2DD924u: goto label_7F2DD924;
    case 0x7F2DD928u: goto label_7F2DD928;
    case 0x7F2DD92Cu: goto label_7F2DD92C;
    case 0x7F2DD930u: goto label_7F2DD930;
    case 0x7F2DD934u: goto label_7F2DD934;
    case 0x7F2DD938u: goto label_7F2DD938;
    case 0x7F2DD93Cu: goto label_7F2DD93C;
    case 0x7F2DD940u: goto label_7F2DD940;
    case 0x7F2DD944u: goto label_7F2DD944;
    case 0x7F2DD948u: goto label_7F2DD948;
    case 0x7F2DD94Cu: goto label_7F2DD94C;
    case 0x7F2DD950u: goto label_7F2DD950;
    case 0x7F2DD954u: goto label_7F2DD954;
    case 0x7F2DD958u: goto label_7F2DD958;
    case 0x7F2DD95Cu: goto label_7F2DD95C;
    case 0x7F2DD960u: goto label_7F2DD960;
    case 0x7F2DD964u: goto label_7F2DD964;
    case 0x7F2DD968u: goto label_7F2DD968;
    case 0x7F2DD96Cu: goto label_7F2DD96C;
    case 0x7F2DD970u: goto label_7F2DD970;
    case 0x7F2DD974u: goto label_7F2DD974;
    case 0x7F2DD978u: goto label_7F2DD978;
    case 0x7F2DD97Cu: goto label_7F2DD97C;
    case 0x7F2DD980u: goto label_7F2DD980;
    case 0x7F2DD984u: goto label_7F2DD984;
    case 0x7F2DD988u: goto label_7F2DD988;
    case 0x7F2DD98Cu: goto label_7F2DD98C;
    case 0x7F2DD990u: goto label_7F2DD990;
    case 0x7F2DD994u: goto label_7F2DD994;
    case 0x7F2DD998u: goto label_7F2DD998;
    case 0x7F2DD99Cu: goto label_7F2DD99C;
    case 0x7F2DD9A0u: goto label_7F2DD9A0;
    case 0x7F2DD9A4u: goto label_7F2DD9A4;
    case 0x7F2DD9A8u: goto label_7F2DD9A8;
    case 0x7F2DD9ACu: goto label_7F2DD9AC;
    case 0x7F2DD9B0u: goto label_7F2DD9B0;
    case 0x7F2DD9B4u: goto label_7F2DD9B4;
    case 0x7F2DD9B8u: goto label_7F2DD9B8;
    case 0x7F2DD9BCu: goto label_7F2DD9BC;
    case 0x7F2DD9C0u: goto label_7F2DD9C0;
    case 0x7F2DD9C4u: goto label_7F2DD9C4;
    case 0x7F2DD9C8u: goto label_7F2DD9C8;
    case 0x7F2DD9CCu: goto label_7F2DD9CC;
    case 0x7F2DD9D0u: goto label_7F2DD9D0;
    case 0x7F2DD9D4u: goto label_7F2DD9D4;
    case 0x7F2DD9D8u: goto label_7F2DD9D8;
    case 0x7F2DD9DCu: goto label_7F2DD9DC;
    case 0x7F2DD9E0u: goto label_7F2DD9E0;
    case 0x7F2DD9E4u: goto label_7F2DD9E4;
    case 0x7F2DD9E8u: goto label_7F2DD9E8;
    case 0x7F2DD9ECu: goto label_7F2DD9EC;
    case 0x7F2DD9F0u: goto label_7F2DD9F0;
    case 0x7F2DD9F4u: goto label_7F2DD9F4;
    case 0x7F2DD9F8u: goto label_7F2DD9F8;
    case 0x7F2DD9FCu: goto label_7F2DD9FC;
    case 0x7F2DDA00u: goto label_7F2DDA00;
    case 0x7F2DDA04u: goto label_7F2DDA04;
    case 0x7F2DDA08u: goto label_7F2DDA08;
    case 0x7F2DDA0Cu: goto label_7F2DDA0C;
    case 0x7F2DDA10u: goto label_7F2DDA10;
    case 0x7F2DDA14u: goto label_7F2DDA14;
    case 0x7F2DDA18u: goto label_7F2DDA18;
    case 0x7F2DDA1Cu: goto label_7F2DDA1C;
    case 0x7F2DDA20u: goto label_7F2DDA20;
    case 0x7F2DDA24u: goto label_7F2DDA24;
    case 0x7F2DDA28u: goto label_7F2DDA28;
    case 0x7F2DDA2Cu: goto label_7F2DDA2C;
    case 0x7F2DDA30u: goto label_7F2DDA30;
    case 0x7F2DDA34u: goto label_7F2DDA34;
    case 0x7F2DDA38u: goto label_7F2DDA38;
    case 0x7F2DDA3Cu: goto label_7F2DDA3C;
    case 0x7F2DDA40u: goto label_7F2DDA40;
    case 0x7F2DDA44u: goto label_7F2DDA44;
    case 0x7F2DDA48u: goto label_7F2DDA48;
    case 0x7F2DDA4Cu: goto label_7F2DDA4C;
    case 0x7F2DDA50u: goto label_7F2DDA50;
    case 0x7F2DDA54u: goto label_7F2DDA54;
    case 0x7F2DDA58u: goto label_7F2DDA58;
    case 0x7F2DDA5Cu: goto label_7F2DDA5C;
    case 0x7F2DDA60u: goto label_7F2DDA60;
    case 0x7F2DDA64u: goto label_7F2DDA64;
    case 0x7F2DDA68u: goto label_7F2DDA68;
    case 0x7F2DDA6Cu: goto label_7F2DDA6C;
    case 0x7F2DDA70u: goto label_7F2DDA70;
    case 0x7F2DDA74u: goto label_7F2DDA74;
    case 0x7F2DDA78u: goto label_7F2DDA78;
    case 0x7F2DDA7Cu: goto label_7F2DDA7C;
    case 0x7F2DDA80u: goto label_7F2DDA80;
    case 0x7F2DDA84u: goto label_7F2DDA84;
    case 0x7F2DDA88u: goto label_7F2DDA88;
    case 0x7F2DDA8Cu: goto label_7F2DDA8C;
    case 0x7F2DDA90u: goto label_7F2DDA90;
    case 0x7F2DDA94u: goto label_7F2DDA94;
    case 0x7F2DDA98u: goto label_7F2DDA98;
    case 0x7F2DDA9Cu: goto label_7F2DDA9C;
    case 0x7F2DDAA0u: goto label_7F2DDAA0;
    case 0x7F2DDAA4u: goto label_7F2DDAA4;
    case 0x7F2DDAA8u: goto label_7F2DDAA8;
    case 0x7F2DDAACu: goto label_7F2DDAAC;
    case 0x7F2DDAB0u: goto label_7F2DDAB0;
    case 0x7F2DDAB4u: goto label_7F2DDAB4;
    case 0x7F2DDAB8u: goto label_7F2DDAB8;
    case 0x7F2DDABCu: goto label_7F2DDABC;
    case 0x7F2DDAC0u: goto label_7F2DDAC0;
    case 0x7F2DDAC4u: goto label_7F2DDAC4;
    case 0x7F2DDAC8u: goto label_7F2DDAC8;
    case 0x7F2DDACCu: goto label_7F2DDACC;
    case 0x7F2DDAD0u: goto label_7F2DDAD0;
    case 0x7F2DDAD4u: goto label_7F2DDAD4;
    case 0x7F2DDAD8u: goto label_7F2DDAD8;
    case 0x7F2DDADCu: goto label_7F2DDADC;
    case 0x7F2DDAE0u: goto label_7F2DDAE0;
    case 0x7F2DDAE4u: goto label_7F2DDAE4;
    case 0x7F2DDAE8u: goto label_7F2DDAE8;
    case 0x7F2DDAECu: goto label_7F2DDAEC;
    case 0x7F2DDAF0u: goto label_7F2DDAF0;
    case 0x7F2DDAF4u: goto label_7F2DDAF4;
    case 0x7F2DDAF8u: goto label_7F2DDAF8;
    case 0x7F2DDAFCu: goto label_7F2DDAFC;
    case 0x7F2DDB00u: goto label_7F2DDB00;
    case 0x7F2DDB04u: goto label_7F2DDB04;
    case 0x7F2DDB08u: goto label_7F2DDB08;
    case 0x7F2DDB0Cu: goto label_7F2DDB0C;
    case 0x7F2DDB10u: goto label_7F2DDB10;
    case 0x7F2DDB14u: goto label_7F2DDB14;
    case 0x7F2DDB18u: goto label_7F2DDB18;
    case 0x7F2DDB1Cu: goto label_7F2DDB1C;
    case 0x7F2DDB20u: goto label_7F2DDB20;
    case 0x7F2DDB24u: goto label_7F2DDB24;
    case 0x7F2DDB28u: goto label_7F2DDB28;
    case 0x7F2DDB2Cu: goto label_7F2DDB2C;
    case 0x7F2DDB30u: goto label_7F2DDB30;
    case 0x7F2DDB34u: goto label_7F2DDB34;
    case 0x7F2DDB38u: goto label_7F2DDB38;
    case 0x7F2DDB3Cu: goto label_7F2DDB3C;
    case 0x7F2DDB40u: goto label_7F2DDB40;
    case 0x7F2DDB44u: goto label_7F2DDB44;
    case 0x7F2DDB48u: goto label_7F2DDB48;
    case 0x7F2DDB4Cu: goto label_7F2DDB4C;
    case 0x7F2DDB50u: goto label_7F2DDB50;
    case 0x7F2DDB54u: goto label_7F2DDB54;
    case 0x7F2DDB58u: goto label_7F2DDB58;
    case 0x7F2DDB5Cu: goto label_7F2DDB5C;
    case 0x7F2DDB60u: goto label_7F2DDB60;
    case 0x7F2DDB64u: goto label_7F2DDB64;
    case 0x7F2DDB68u: goto label_7F2DDB68;
    case 0x7F2DDB6Cu: goto label_7F2DDB6C;
    case 0x7F2DDB70u: goto label_7F2DDB70;
    case 0x7F2DDB74u: goto label_7F2DDB74;
    case 0x7F2DDB78u: goto label_7F2DDB78;
    case 0x7F2DDB7Cu: goto label_7F2DDB7C;
    case 0x7F2DDB80u: goto label_7F2DDB80;
    case 0x7F2DDB84u: goto label_7F2DDB84;
    case 0x7F2DDB88u: goto label_7F2DDB88;
    case 0x7F2DDB8Cu: goto label_7F2DDB8C;
    case 0x7F2DDB90u: goto label_7F2DDB90;
    case 0x7F2DDB94u: goto label_7F2DDB94;
    case 0x7F2DDB98u: goto label_7F2DDB98;
    case 0x7F2DDB9Cu: goto label_7F2DDB9C;
    case 0x7F2DDBA0u: goto label_7F2DDBA0;
    case 0x7F2DDBA4u: goto label_7F2DDBA4;
    case 0x7F2DDBA8u: goto label_7F2DDBA8;
    case 0x7F2DDBACu: goto label_7F2DDBAC;
    case 0x7F2DDBB0u: goto label_7F2DDBB0;
    case 0x7F2DDBB4u: goto label_7F2DDBB4;
    case 0x7F2DDBB8u: goto label_7F2DDBB8;
    case 0x7F2DDBBCu: goto label_7F2DDBBC;
    case 0x7F2DDBC0u: goto label_7F2DDBC0;
    case 0x7F2DDBC4u: goto label_7F2DDBC4;
    case 0x7F2DDBC8u: goto label_7F2DDBC8;
    case 0x7F2DDBCCu: goto label_7F2DDBCC;
    case 0x7F2DDBD0u: goto label_7F2DDBD0;
    case 0x7F2DDBD4u: goto label_7F2DDBD4;
    case 0x7F2DDBD8u: goto label_7F2DDBD8;
    case 0x7F2DDBDCu: goto label_7F2DDBDC;
    case 0x7F2DDBE0u: goto label_7F2DDBE0;
    case 0x7F2DDBE4u: goto label_7F2DDBE4;
    case 0x7F2DDBE8u: goto label_7F2DDBE8;
    case 0x7F2DDBECu: goto label_7F2DDBEC;
    case 0x7F2DDBF0u: goto label_7F2DDBF0;
    case 0x7F2DDBF4u: goto label_7F2DDBF4;
    case 0x7F2DDBF8u: goto label_7F2DDBF8;
    case 0x7F2DDBFCu: goto label_7F2DDBFC;
    case 0x7F2DDC00u: goto label_7F2DDC00;
    case 0x7F2DDC04u: goto label_7F2DDC04;
    case 0x7F2DDC08u: goto label_7F2DDC08;
    case 0x7F2DDC0Cu: goto label_7F2DDC0C;
    case 0x7F2DDC10u: goto label_7F2DDC10;
    case 0x7F2DDC14u: goto label_7F2DDC14;
    case 0x7F2DDC18u: goto label_7F2DDC18;
    case 0x7F2DDC1Cu: goto label_7F2DDC1C;
    case 0x7F2DDC20u: goto label_7F2DDC20;
    case 0x7F2DDC24u: goto label_7F2DDC24;
    case 0x7F2DDC28u: goto label_7F2DDC28;
    case 0x7F2DDC2Cu: goto label_7F2DDC2C;
    case 0x7F2DDC30u: goto label_7F2DDC30;
    case 0x7F2DDC34u: goto label_7F2DDC34;
    case 0x7F2DDC38u: goto label_7F2DDC38;
    case 0x7F2DDC3Cu: goto label_7F2DDC3C;
    case 0x7F2DDC40u: goto label_7F2DDC40;
    case 0x7F2DDC44u: goto label_7F2DDC44;
    case 0x7F2DDC48u: goto label_7F2DDC48;
    case 0x7F2DDC4Cu: goto label_7F2DDC4C;
    case 0x7F2DDC50u: goto label_7F2DDC50;
    case 0x7F2DDC54u: goto label_7F2DDC54;
    case 0x7F2DDC58u: goto label_7F2DDC58;
    case 0x7F2DDC5Cu: goto label_7F2DDC5C;
    case 0x7F2DDC60u: goto label_7F2DDC60;
    case 0x7F2DDC64u: goto label_7F2DDC64;
    case 0x7F2DDC68u: goto label_7F2DDC68;
    case 0x7F2DDC6Cu: goto label_7F2DDC6C;
    case 0x7F2DDC70u: goto label_7F2DDC70;
    case 0x7F2DDC74u: goto label_7F2DDC74;
    case 0x7F2DDC78u: goto label_7F2DDC78;
    case 0x7F2DDC7Cu: goto label_7F2DDC7C;
    case 0x7F2DDC80u: goto label_7F2DDC80;
    case 0x7F2DDC84u: goto label_7F2DDC84;
    case 0x7F2DDC88u: goto label_7F2DDC88;
    case 0x7F2DDC8Cu: goto label_7F2DDC8C;
    case 0x7F2DDC90u: goto label_7F2DDC90;
    case 0x7F2DDC94u: goto label_7F2DDC94;
    case 0x7F2DDC98u: goto label_7F2DDC98;
    case 0x7F2DDC9Cu: goto label_7F2DDC9C;
    case 0x7F2DDCA0u: goto label_7F2DDCA0;
    case 0x7F2DDCA4u: goto label_7F2DDCA4;
    case 0x7F2DDCA8u: goto label_7F2DDCA8;
    case 0x7F2DDCACu: goto label_7F2DDCAC;
    case 0x7F2DDCB0u: goto label_7F2DDCB0;
    case 0x7F2DDCB4u: goto label_7F2DDCB4;
    case 0x7F2DDCB8u: goto label_7F2DDCB8;
    case 0x7F2DDCBCu: goto label_7F2DDCBC;
    case 0x7F2DDCC0u: goto label_7F2DDCC0;
    case 0x7F2DDCC4u: goto label_7F2DDCC4;
    case 0x7F2DDCC8u: goto label_7F2DDCC8;
    case 0x7F2DDCCCu: goto label_7F2DDCCC;
    case 0x7F2DDCD0u: goto label_7F2DDCD0;
    case 0x7F2DDCD4u: goto label_7F2DDCD4;
    case 0x7F2DDCD8u: goto label_7F2DDCD8;
    case 0x7F2DDCDCu: goto label_7F2DDCDC;
    case 0x7F2DDCE0u: goto label_7F2DDCE0;
    case 0x7F2DDCE4u: goto label_7F2DDCE4;
    case 0x7F2DDCE8u: goto label_7F2DDCE8;
    case 0x7F2DDCECu: goto label_7F2DDCEC;
    case 0x7F2DDCF0u: goto label_7F2DDCF0;
    case 0x7F2DDCF4u: goto label_7F2DDCF4;
    case 0x7F2DDCF8u: goto label_7F2DDCF8;
    case 0x7F2DDCFCu: goto label_7F2DDCFC;
    case 0x7F2DDD00u: goto label_7F2DDD00;
    case 0x7F2DDD04u: goto label_7F2DDD04;
    case 0x7F2DDD08u: goto label_7F2DDD08;
    case 0x7F2DDD0Cu: goto label_7F2DDD0C;
    case 0x7F2DDD10u: goto label_7F2DDD10;
    case 0x7F2DDD14u: goto label_7F2DDD14;
    case 0x7F2DDD18u: goto label_7F2DDD18;
    case 0x7F2DDD1Cu: goto label_7F2DDD1C;
    case 0x7F2DDD20u: goto label_7F2DDD20;
    case 0x7F2DDD24u: goto label_7F2DDD24;
    case 0x7F2DDD28u: goto label_7F2DDD28;
    case 0x7F2DDD2Cu: goto label_7F2DDD2C;
    case 0x7F2DDD30u: goto label_7F2DDD30;
    case 0x7F2DDD34u: goto label_7F2DDD34;
    case 0x7F2DDD38u: goto label_7F2DDD38;
    case 0x7F2DDD3Cu: goto label_7F2DDD3C;
    case 0x7F2DDD40u: goto label_7F2DDD40;
    case 0x7F2DDD44u: goto label_7F2DDD44;
    case 0x7F2DDD48u: goto label_7F2DDD48;
    case 0x7F2DDD4Cu: goto label_7F2DDD4C;
    case 0x7F2DDD50u: goto label_7F2DDD50;
    case 0x7F2DDD54u: goto label_7F2DDD54;
    case 0x7F2DDD58u: goto label_7F2DDD58;
    case 0x7F2DDD5Cu: goto label_7F2DDD5C;
    case 0x7F2DDD60u: goto label_7F2DDD60;
    case 0x7F2DDD64u: goto label_7F2DDD64;
    case 0x7F2DDD68u: goto label_7F2DDD68;
    case 0x7F2DDD6Cu: goto label_7F2DDD6C;
    case 0x7F2DDD70u: goto label_7F2DDD70;
    case 0x7F2DDD74u: goto label_7F2DDD74;
    case 0x7F2DDD78u: goto label_7F2DDD78;
    case 0x7F2DDD7Cu: goto label_7F2DDD7C;
    case 0x7F2DDD80u: goto label_7F2DDD80;
    case 0x7F2DDD84u: goto label_7F2DDD84;
    case 0x7F2DDD88u: goto label_7F2DDD88;
    case 0x7F2DDD8Cu: goto label_7F2DDD8C;
    case 0x7F2DDD90u: goto label_7F2DDD90;
    case 0x7F2DDD94u: goto label_7F2DDD94;
    case 0x7F2DDD98u: goto label_7F2DDD98;
    case 0x7F2DDD9Cu: goto label_7F2DDD9C;
    case 0x7F2DDDA0u: goto label_7F2DDDA0;
    case 0x7F2DDDA4u: goto label_7F2DDDA4;
    case 0x7F2DDDA8u: goto label_7F2DDDA8;
    case 0x7F2DDDACu: goto label_7F2DDDAC;
    case 0x7F2DDDB0u: goto label_7F2DDDB0;
    case 0x7F2DDDB4u: goto label_7F2DDDB4;
    case 0x7F2DDDB8u: goto label_7F2DDDB8;
    case 0x7F2DDDBCu: goto label_7F2DDDBC;
    case 0x7F2DDDC0u: goto label_7F2DDDC0;
    case 0x7F2DDDC4u: goto label_7F2DDDC4;
    case 0x7F2DDDC8u: goto label_7F2DDDC8;
    case 0x7F2DDDCCu: goto label_7F2DDDCC;
    case 0x7F2DDDD0u: goto label_7F2DDDD0;
    case 0x7F2DDDD4u: goto label_7F2DDDD4;
    case 0x7F2DDDD8u: goto label_7F2DDDD8;
    case 0x7F2DDDDCu: goto label_7F2DDDDC;
    case 0x7F2DDDE0u: goto label_7F2DDDE0;
    case 0x7F2DDDE4u: goto label_7F2DDDE4;
    case 0x7F2DDDE8u: goto label_7F2DDDE8;
    case 0x7F2DDDECu: goto label_7F2DDDEC;
    case 0x7F2DDDF0u: goto label_7F2DDDF0;
    case 0x7F2DDDF4u: goto label_7F2DDDF4;
    case 0x7F2DDDF8u: goto label_7F2DDDF8;
    case 0x7F2DDDFCu: goto label_7F2DDDFC;
    case 0x7F2DDE00u: goto label_7F2DDE00;
    case 0x7F2DDE04u: goto label_7F2DDE04;
    case 0x7F2DDE08u: goto label_7F2DDE08;
    case 0x7F2DDE0Cu: goto label_7F2DDE0C;
    case 0x7F2DDE10u: goto label_7F2DDE10;
    case 0x7F2DDE14u: goto label_7F2DDE14;
    case 0x7F2DDE18u: goto label_7F2DDE18;
    case 0x7F2DDE1Cu: goto label_7F2DDE1C;
    case 0x7F2DDE20u: goto label_7F2DDE20;
    case 0x7F2DDE24u: goto label_7F2DDE24;
    case 0x7F2DDE28u: goto label_7F2DDE28;
    case 0x7F2DDE2Cu: goto label_7F2DDE2C;
    case 0x7F2DDE30u: goto label_7F2DDE30;
    case 0x7F2DDE34u: goto label_7F2DDE34;
    case 0x7F2DDE38u: goto label_7F2DDE38;
    case 0x7F2DDE3Cu: goto label_7F2DDE3C;
    case 0x7F2DDE40u: goto label_7F2DDE40;
    case 0x7F2DDE44u: goto label_7F2DDE44;
    case 0x7F2DDE48u: goto label_7F2DDE48;
    case 0x7F2DDE4Cu: goto label_7F2DDE4C;
    case 0x7F2DDE50u: goto label_7F2DDE50;
    case 0x7F2DDE54u: goto label_7F2DDE54;
    case 0x7F2DDE58u: goto label_7F2DDE58;
    case 0x7F2DDE5Cu: goto label_7F2DDE5C;
    case 0x7F2DDE60u: goto label_7F2DDE60;
    case 0x7F2DDE64u: goto label_7F2DDE64;
    case 0x7F2DDE68u: goto label_7F2DDE68;
    case 0x7F2DDE6Cu: goto label_7F2DDE6C;
    case 0x7F2DDE70u: goto label_7F2DDE70;
    case 0x7F2DDE74u: goto label_7F2DDE74;
    case 0x7F2DDE78u: goto label_7F2DDE78;
    case 0x7F2DDE7Cu: goto label_7F2DDE7C;
    case 0x7F2DDE80u: goto label_7F2DDE80;
    case 0x7F2DDE84u: goto label_7F2DDE84;
    case 0x7F2DDE88u: goto label_7F2DDE88;
    case 0x7F2DDE8Cu: goto label_7F2DDE8C;
    case 0x7F2DDE90u: goto label_7F2DDE90;
    case 0x7F2DDE94u: goto label_7F2DDE94;
    case 0x7F2DDE98u: goto label_7F2DDE98;
    case 0x7F2DDE9Cu: goto label_7F2DDE9C;
    case 0x7F2DDEA0u: goto label_7F2DDEA0;
    case 0x7F2DDEA4u: goto label_7F2DDEA4;
    case 0x7F2DDEA8u: goto label_7F2DDEA8;
    case 0x7F2DDEACu: goto label_7F2DDEAC;
    case 0x7F2DDEB0u: goto label_7F2DDEB0;
    case 0x7F2DDEB4u: goto label_7F2DDEB4;
    case 0x7F2DDEB8u: goto label_7F2DDEB8;
    case 0x7F2DDEBCu: goto label_7F2DDEBC;
    case 0x7F2DDEC0u: goto label_7F2DDEC0;
    case 0x7F2DDEC4u: goto label_7F2DDEC4;
    case 0x7F2DDEC8u: goto label_7F2DDEC8;
    case 0x7F2DDECCu: goto label_7F2DDECC;
    case 0x7F2DDED0u: goto label_7F2DDED0;
    case 0x7F2DDED4u: goto label_7F2DDED4;
    case 0x7F2DDED8u: goto label_7F2DDED8;
    case 0x7F2DDEDCu: goto label_7F2DDEDC;
    case 0x7F2DDEE0u: goto label_7F2DDEE0;
    case 0x7F2DDEE4u: goto label_7F2DDEE4;
    case 0x7F2DDEE8u: goto label_7F2DDEE8;
    case 0x7F2DDEECu: goto label_7F2DDEEC;
    case 0x7F2DDEF0u: goto label_7F2DDEF0;
    case 0x7F2DDEF4u: goto label_7F2DDEF4;
    case 0x7F2DDEF8u: goto label_7F2DDEF8;
    case 0x7F2DDEFCu: goto label_7F2DDEFC;
    case 0x7F2DDF00u: goto label_7F2DDF00;
    case 0x7F2DDF04u: goto label_7F2DDF04;
    case 0x7F2DDF08u: goto label_7F2DDF08;
    case 0x7F2DDF0Cu: goto label_7F2DDF0C;
    case 0x7F2DDF10u: goto label_7F2DDF10;
    case 0x7F2DDF14u: goto label_7F2DDF14;
    case 0x7F2DDF18u: goto label_7F2DDF18;
    case 0x7F2DDF1Cu: goto label_7F2DDF1C;
    case 0x7F2DDF20u: goto label_7F2DDF20;
    case 0x7F2DDF24u: goto label_7F2DDF24;
    case 0x7F2DDF28u: goto label_7F2DDF28;
    case 0x7F2DDF2Cu: goto label_7F2DDF2C;
    case 0x7F2DDF30u: goto label_7F2DDF30;
    case 0x7F2DDF34u: goto label_7F2DDF34;
    case 0x7F2DDF38u: goto label_7F2DDF38;
    case 0x7F2DDF3Cu: goto label_7F2DDF3C;
    case 0x7F2DDF40u: goto label_7F2DDF40;
    case 0x7F2DDF44u: goto label_7F2DDF44;
    case 0x7F2DDF48u: goto label_7F2DDF48;
    case 0x7F2DDF4Cu: goto label_7F2DDF4C;
    case 0x7F2DDF50u: goto label_7F2DDF50;
    case 0x7F2DDF54u: goto label_7F2DDF54;
    case 0x7F2DDF58u: goto label_7F2DDF58;
    case 0x7F2DDF5Cu: goto label_7F2DDF5C;
    case 0x7F2DDF60u: goto label_7F2DDF60;
    case 0x7F2DDF64u: goto label_7F2DDF64;
    case 0x7F2DDF68u: goto label_7F2DDF68;
    case 0x7F2DDF6Cu: goto label_7F2DDF6C;
    case 0x7F2DDF70u: goto label_7F2DDF70;
    case 0x7F2DDF74u: goto label_7F2DDF74;
    case 0x7F2DDF78u: goto label_7F2DDF78;
    case 0x7F2DDF7Cu: goto label_7F2DDF7C;
    case 0x7F2DDF80u: goto label_7F2DDF80;
    case 0x7F2DDF84u: goto label_7F2DDF84;
    case 0x7F2DDF88u: goto label_7F2DDF88;
    case 0x7F2DDF8Cu: goto label_7F2DDF8C;
    case 0x7F2DDF90u: goto label_7F2DDF90;
    case 0x7F2DDF94u: goto label_7F2DDF94;
    case 0x7F2DDF98u: goto label_7F2DDF98;
    case 0x7F2DDF9Cu: goto label_7F2DDF9C;
    case 0x7F2DDFA0u: goto label_7F2DDFA0;
    case 0x7F2DDFA4u: goto label_7F2DDFA4;
    case 0x7F2DDFA8u: goto label_7F2DDFA8;
    case 0x7F2DDFACu: goto label_7F2DDFAC;
    case 0x7F2DDFB0u: goto label_7F2DDFB0;
    case 0x7F2DDFB4u: goto label_7F2DDFB4;
    case 0x7F2DDFB8u: goto label_7F2DDFB8;
    case 0x7F2DDFBCu: goto label_7F2DDFBC;
    case 0x7F2DDFC0u: goto label_7F2DDFC0;
    case 0x7F2DDFC4u: goto label_7F2DDFC4;
    case 0x7F2DDFC8u: goto label_7F2DDFC8;
    case 0x7F2DDFCCu: goto label_7F2DDFCC;
    case 0x7F2DDFD0u: goto label_7F2DDFD0;
    case 0x7F2DDFD4u: goto label_7F2DDFD4;
    case 0x7F2DDFD8u: goto label_7F2DDFD8;
    case 0x7F2DDFDCu: goto label_7F2DDFDC;
    case 0x7F2DDFE0u: goto label_7F2DDFE0;
    case 0x7F2DDFE4u: goto label_7F2DDFE4;
    case 0x7F2DDFE8u: goto label_7F2DDFE8;
    case 0x7F2DDFECu: goto label_7F2DDFEC;
    case 0x7F2DDFF0u: goto label_7F2DDFF0;
    case 0x7F2DDFF4u: goto label_7F2DDFF4;
    case 0x7F2DDFF8u: goto label_7F2DDFF8;
    case 0x7F2DDFFCu: goto label_7F2DDFFC;
    case 0x7F2DE000u: goto label_7F2DE000;
    case 0x7F2DE004u: goto label_7F2DE004;
    case 0x7F2DE008u: goto label_7F2DE008;
    case 0x7F2DE00Cu: goto label_7F2DE00C;
    case 0x7F2DE010u: goto label_7F2DE010;
    case 0x7F2DE014u: goto label_7F2DE014;
    case 0x7F2DE018u: goto label_7F2DE018;
    case 0x7F2DE01Cu: goto label_7F2DE01C;
    case 0x7F2DE020u: goto label_7F2DE020;
    case 0x7F2DE024u: goto label_7F2DE024;
    case 0x7F2DE028u: goto label_7F2DE028;
    case 0x7F2DE02Cu: goto label_7F2DE02C;
    case 0x7F2DE030u: goto label_7F2DE030;
    case 0x7F2DE034u: goto label_7F2DE034;
    case 0x7F2DE038u: goto label_7F2DE038;
    case 0x7F2DE03Cu: goto label_7F2DE03C;
    case 0x7F2DE040u: goto label_7F2DE040;
    case 0x7F2DE044u: goto label_7F2DE044;
    case 0x7F2DE048u: goto label_7F2DE048;
    case 0x7F2DE04Cu: goto label_7F2DE04C;
    case 0x7F2DE050u: goto label_7F2DE050;
    case 0x7F2DE054u: goto label_7F2DE054;
    case 0x7F2DE058u: goto label_7F2DE058;
    case 0x7F2DE05Cu: goto label_7F2DE05C;
    case 0x7F2DE060u: goto label_7F2DE060;
    case 0x7F2DE064u: goto label_7F2DE064;
    case 0x7F2DE068u: goto label_7F2DE068;
    case 0x7F2DE06Cu: goto label_7F2DE06C;
    case 0x7F2DE070u: goto label_7F2DE070;
    case 0x7F2DE074u: goto label_7F2DE074;
    case 0x7F2DE078u: goto label_7F2DE078;
    case 0x7F2DE07Cu: goto label_7F2DE07C;
    case 0x7F2DE080u: goto label_7F2DE080;
    case 0x7F2DE084u: goto label_7F2DE084;
    case 0x7F2DE088u: goto label_7F2DE088;
    case 0x7F2DE08Cu: goto label_7F2DE08C;
    case 0x7F2DE090u: goto label_7F2DE090;
    case 0x7F2DE094u: goto label_7F2DE094;
    case 0x7F2DE098u: goto label_7F2DE098;
    case 0x7F2DE09Cu: goto label_7F2DE09C;
    case 0x7F2DE0A0u: goto label_7F2DE0A0;
    case 0x7F2DE0A4u: goto label_7F2DE0A4;
    case 0x7F2DE0A8u: goto label_7F2DE0A8;
    case 0x7F2DE0ACu: goto label_7F2DE0AC;
    case 0x7F2DE0B0u: goto label_7F2DE0B0;
    case 0x7F2DE0B4u: goto label_7F2DE0B4;
    case 0x7F2DE0B8u: goto label_7F2DE0B8;
    case 0x7F2DE0BCu: goto label_7F2DE0BC;
    case 0x7F2DE0C0u: goto label_7F2DE0C0;
    case 0x7F2DE0C4u: goto label_7F2DE0C4;
    case 0x7F2DE0C8u: goto label_7F2DE0C8;
    case 0x7F2DE0CCu: goto label_7F2DE0CC;
    case 0x7F2DE0D0u: goto label_7F2DE0D0;
    case 0x7F2DE0D4u: goto label_7F2DE0D4;
    case 0x7F2DE0D8u: goto label_7F2DE0D8;
    case 0x7F2DE0DCu: goto label_7F2DE0DC;
    case 0x7F2DE0E0u: goto label_7F2DE0E0;
    case 0x7F2DE0E4u: goto label_7F2DE0E4;
    case 0x7F2DE0E8u: goto label_7F2DE0E8;
    case 0x7F2DE0ECu: goto label_7F2DE0EC;
    case 0x7F2DE0F0u: goto label_7F2DE0F0;
    case 0x7F2DE0F4u: goto label_7F2DE0F4;
    case 0x7F2DE0F8u: goto label_7F2DE0F8;
    case 0x7F2DE0FCu: goto label_7F2DE0FC;
    case 0x7F2DE100u: goto label_7F2DE100;
    case 0x7F2DE104u: goto label_7F2DE104;
    case 0x7F2DE108u: goto label_7F2DE108;
    case 0x7F2DE10Cu: goto label_7F2DE10C;
    case 0x7F2DE110u: goto label_7F2DE110;
    case 0x7F2DE114u: goto label_7F2DE114;
    case 0x7F2DE118u: goto label_7F2DE118;
    case 0x7F2DE11Cu: goto label_7F2DE11C;
    case 0x7F2DE120u: goto label_7F2DE120;
    case 0x7F2DE124u: goto label_7F2DE124;
    case 0x7F2DE128u: goto label_7F2DE128;
    case 0x7F2DE12Cu: goto label_7F2DE12C;
    case 0x7F2DE130u: goto label_7F2DE130;
    case 0x7F2DE134u: goto label_7F2DE134;
    case 0x7F2DE138u: goto label_7F2DE138;
    case 0x7F2DE13Cu: goto label_7F2DE13C;
    case 0x7F2DE140u: goto label_7F2DE140;
    case 0x7F2DE144u: goto label_7F2DE144;
    case 0x7F2DE148u: goto label_7F2DE148;
    case 0x7F2DE14Cu: goto label_7F2DE14C;
    case 0x7F2DE150u: goto label_7F2DE150;
    case 0x7F2DE154u: goto label_7F2DE154;
    case 0x7F2DE158u: goto label_7F2DE158;
    case 0x7F2DE15Cu: goto label_7F2DE15C;
    case 0x7F2DE160u: goto label_7F2DE160;
    case 0x7F2DE164u: goto label_7F2DE164;
    case 0x7F2DE168u: goto label_7F2DE168;
    case 0x7F2DE16Cu: goto label_7F2DE16C;
    case 0x7F2DE170u: goto label_7F2DE170;
    case 0x7F2DE174u: goto label_7F2DE174;
    case 0x7F2DE178u: goto label_7F2DE178;
    case 0x7F2DE17Cu: goto label_7F2DE17C;
    case 0x7F2DE180u: goto label_7F2DE180;
    case 0x7F2DE184u: goto label_7F2DE184;
    case 0x7F2DE188u: goto label_7F2DE188;
    case 0x7F2DE18Cu: goto label_7F2DE18C;
    case 0x7F2DE190u: goto label_7F2DE190;
    case 0x7F2DE194u: goto label_7F2DE194;
    case 0x7F2DE198u: goto label_7F2DE198;
    case 0x7F2DE19Cu: goto label_7F2DE19C;
    case 0x7F2DE1A0u: goto label_7F2DE1A0;
    case 0x7F2DE1A4u: goto label_7F2DE1A4;
    case 0x7F2DE1A8u: goto label_7F2DE1A8;
    case 0x7F2DE1ACu: goto label_7F2DE1AC;
    case 0x7F2DE1B0u: goto label_7F2DE1B0;
    case 0x7F2DE1B4u: goto label_7F2DE1B4;
    case 0x7F2DE1B8u: goto label_7F2DE1B8;
    case 0x7F2DE1BCu: goto label_7F2DE1BC;
    case 0x7F2DE1C0u: goto label_7F2DE1C0;
    case 0x7F2DE1C4u: goto label_7F2DE1C4;
    case 0x7F2DE1C8u: goto label_7F2DE1C8;
    case 0x7F2DE1CCu: goto label_7F2DE1CC;
    case 0x7F2DE1D0u: goto label_7F2DE1D0;
    case 0x7F2DE1D4u: goto label_7F2DE1D4;
    case 0x7F2DE1D8u: goto label_7F2DE1D8;
    case 0x7F2DE1DCu: goto label_7F2DE1DC;
    case 0x7F2DE1E0u: goto label_7F2DE1E0;
    case 0x7F2DE1E4u: goto label_7F2DE1E4;
    case 0x7F2DE1E8u: goto label_7F2DE1E8;
    case 0x7F2DE1ECu: goto label_7F2DE1EC;
    case 0x7F2DE1F0u: goto label_7F2DE1F0;
    case 0x7F2DE1F4u: goto label_7F2DE1F4;
    case 0x7F2DE1F8u: goto label_7F2DE1F8;
    case 0x7F2DE1FCu: goto label_7F2DE1FC;
    case 0x7F2DE200u: goto label_7F2DE200;
    case 0x7F2DE204u: goto label_7F2DE204;
    case 0x7F2DE208u: goto label_7F2DE208;
    case 0x7F2DE20Cu: goto label_7F2DE20C;
    case 0x7F2DE210u: goto label_7F2DE210;
    case 0x7F2DE214u: goto label_7F2DE214;
    case 0x7F2DE218u: goto label_7F2DE218;
    case 0x7F2DE21Cu: goto label_7F2DE21C;
    case 0x7F2DE220u: goto label_7F2DE220;
    case 0x7F2DE224u: goto label_7F2DE224;
    case 0x7F2DE228u: goto label_7F2DE228;
    case 0x7F2DE22Cu: goto label_7F2DE22C;
    case 0x7F2DE230u: goto label_7F2DE230;
    case 0x7F2DE234u: goto label_7F2DE234;
    case 0x7F2DE238u: goto label_7F2DE238;
    case 0x7F2DE23Cu: goto label_7F2DE23C;
    case 0x7F2DE240u: goto label_7F2DE240;
    case 0x7F2DE244u: goto label_7F2DE244;
    case 0x7F2DE248u: goto label_7F2DE248;
    case 0x7F2DE24Cu: goto label_7F2DE24C;
    case 0x7F2DE250u: goto label_7F2DE250;
    case 0x7F2DE254u: goto label_7F2DE254;
    case 0x7F2DE258u: goto label_7F2DE258;
    case 0x7F2DE25Cu: goto label_7F2DE25C;
    case 0x7F2DE260u: goto label_7F2DE260;
    case 0x7F2DE264u: goto label_7F2DE264;
    case 0x7F2DE268u: goto label_7F2DE268;
    case 0x7F2DE26Cu: goto label_7F2DE26C;
    case 0x7F2DE270u: goto label_7F2DE270;
    case 0x7F2DE274u: goto label_7F2DE274;
    case 0x7F2DE278u: goto label_7F2DE278;
    case 0x7F2DE27Cu: goto label_7F2DE27C;
    case 0x7F2DE280u: goto label_7F2DE280;
    case 0x7F2DE284u: goto label_7F2DE284;
    case 0x7F2DE288u: goto label_7F2DE288;
    case 0x7F2DE28Cu: goto label_7F2DE28C;
    case 0x7F2DE290u: goto label_7F2DE290;
    case 0x7F2DE294u: goto label_7F2DE294;
    case 0x7F2DE298u: goto label_7F2DE298;
    case 0x7F2DE29Cu: goto label_7F2DE29C;
    case 0x7F2DE2A0u: goto label_7F2DE2A0;
    case 0x7F2DE2A4u: goto label_7F2DE2A4;
    case 0x7F2DE2A8u: goto label_7F2DE2A8;
    case 0x7F2DE2ACu: goto label_7F2DE2AC;
    case 0x7F2DE2B0u: goto label_7F2DE2B0;
    case 0x7F2DE2B4u: goto label_7F2DE2B4;
    case 0x7F2DE2B8u: goto label_7F2DE2B8;
    case 0x7F2DE2BCu: goto label_7F2DE2BC;
    case 0x7F2DE2C0u: goto label_7F2DE2C0;
    case 0x7F2DE2C4u: goto label_7F2DE2C4;
    case 0x7F2DE2C8u: goto label_7F2DE2C8;
    case 0x7F2DE2CCu: goto label_7F2DE2CC;
    case 0x7F2DE2D0u: goto label_7F2DE2D0;
    case 0x7F2DE2D4u: goto label_7F2DE2D4;
    case 0x7F2DE2D8u: goto label_7F2DE2D8;
    case 0x7F2DE2DCu: goto label_7F2DE2DC;
    case 0x7F2DE2E0u: goto label_7F2DE2E0;
    case 0x7F2DE2E4u: goto label_7F2DE2E4;
    case 0x7F2DE2E8u: goto label_7F2DE2E8;
    case 0x7F2DE2ECu: goto label_7F2DE2EC;
    case 0x7F2DE2F0u: goto label_7F2DE2F0;
    case 0x7F2DE2F4u: goto label_7F2DE2F4;
    case 0x7F2DE2F8u: goto label_7F2DE2F8;
    case 0x7F2DE2FCu: goto label_7F2DE2FC;
    case 0x7F2DE300u: goto label_7F2DE300;
    case 0x7F2DE304u: goto label_7F2DE304;
    case 0x7F2DE308u: goto label_7F2DE308;
    case 0x7F2DE30Cu: goto label_7F2DE30C;
    case 0x7F2DE310u: goto label_7F2DE310;
    case 0x7F2DE314u: goto label_7F2DE314;
    case 0x7F2DE318u: goto label_7F2DE318;
    case 0x7F2DE31Cu: goto label_7F2DE31C;
    case 0x7F2DE320u: goto label_7F2DE320;
    case 0x7F2DE324u: goto label_7F2DE324;
    case 0x7F2DE328u: goto label_7F2DE328;
    case 0x7F2DE32Cu: goto label_7F2DE32C;
    case 0x7F2DE330u: goto label_7F2DE330;
    case 0x7F2DE334u: goto label_7F2DE334;
    case 0x7F2DE338u: goto label_7F2DE338;
    case 0x7F2DE33Cu: goto label_7F2DE33C;
    case 0x7F2DE340u: goto label_7F2DE340;
    case 0x7F2DE344u: goto label_7F2DE344;
    case 0x7F2DE348u: goto label_7F2DE348;
    case 0x7F2DE34Cu: goto label_7F2DE34C;
    case 0x7F2DE350u: goto label_7F2DE350;
    case 0x7F2DE354u: goto label_7F2DE354;
    case 0x7F2DE358u: goto label_7F2DE358;
    case 0x7F2DE35Cu: goto label_7F2DE35C;
    case 0x7F2DE360u: goto label_7F2DE360;
    case 0x7F2DE364u: goto label_7F2DE364;
    case 0x7F2DE368u: goto label_7F2DE368;
    case 0x7F2DE36Cu: goto label_7F2DE36C;
    case 0x7F2DE370u: goto label_7F2DE370;
    case 0x7F2DE374u: goto label_7F2DE374;
    case 0x7F2DE378u: goto label_7F2DE378;
    case 0x7F2DE37Cu: goto label_7F2DE37C;
    case 0x7F2DE380u: goto label_7F2DE380;
    case 0x7F2DE384u: goto label_7F2DE384;
    case 0x7F2DE388u: goto label_7F2DE388;
    case 0x7F2DE38Cu: goto label_7F2DE38C;
    case 0x7F2DE390u: goto label_7F2DE390;
    case 0x7F2DE394u: goto label_7F2DE394;
    case 0x7F2DE398u: goto label_7F2DE398;
    case 0x7F2DE39Cu: goto label_7F2DE39C;
    case 0x7F2DE3A0u: goto label_7F2DE3A0;
    case 0x7F2DE3A4u: goto label_7F2DE3A4;
    case 0x7F2DE3A8u: goto label_7F2DE3A8;
    case 0x7F2DE3ACu: goto label_7F2DE3AC;
    case 0x7F2DE3B0u: goto label_7F2DE3B0;
    case 0x7F2DE3B4u: goto label_7F2DE3B4;
    case 0x7F2DE3B8u: goto label_7F2DE3B8;
    case 0x7F2DE3BCu: goto label_7F2DE3BC;
    case 0x7F2DE3C0u: goto label_7F2DE3C0;
    case 0x7F2DE3C4u: goto label_7F2DE3C4;
    case 0x7F2DE3C8u: goto label_7F2DE3C8;
    case 0x7F2DE3CCu: goto label_7F2DE3CC;
    case 0x7F2DE3D0u: goto label_7F2DE3D0;
    case 0x7F2DE3D4u: goto label_7F2DE3D4;
    case 0x7F2DE3D8u: goto label_7F2DE3D8;
    case 0x7F2DE3DCu: goto label_7F2DE3DC;
    case 0x7F2DE3E0u: goto label_7F2DE3E0;
    case 0x7F2DE3E4u: goto label_7F2DE3E4;
    case 0x7F2DE3E8u: goto label_7F2DE3E8;
    case 0x7F2DE3ECu: goto label_7F2DE3EC;
    case 0x7F2DE3F0u: goto label_7F2DE3F0;
    case 0x7F2DE3F4u: goto label_7F2DE3F4;
    case 0x7F2DE3F8u: goto label_7F2DE3F8;
    case 0x7F2DE3FCu: goto label_7F2DE3FC;
    case 0x7F2DE400u: goto label_7F2DE400;
    case 0x7F2DE404u: goto label_7F2DE404;
    case 0x7F2DE408u: goto label_7F2DE408;
    case 0x7F2DE40Cu: goto label_7F2DE40C;
    case 0x7F2DE410u: goto label_7F2DE410;
    case 0x7F2DE414u: goto label_7F2DE414;
    case 0x7F2DE418u: goto label_7F2DE418;
    case 0x7F2DE41Cu: goto label_7F2DE41C;
    case 0x7F2DE420u: goto label_7F2DE420;
    case 0x7F2DE424u: goto label_7F2DE424;
    case 0x7F2DE428u: goto label_7F2DE428;
    case 0x7F2DE42Cu: goto label_7F2DE42C;
    case 0x7F2DE430u: goto label_7F2DE430;
    case 0x7F2DE434u: goto label_7F2DE434;
    case 0x7F2DE438u: goto label_7F2DE438;
    case 0x7F2DE43Cu: goto label_7F2DE43C;
    case 0x7F2DE440u: goto label_7F2DE440;
    case 0x7F2DE444u: goto label_7F2DE444;
    case 0x7F2DE448u: goto label_7F2DE448;
    case 0x7F2DE44Cu: goto label_7F2DE44C;
    case 0x7F2DE450u: goto label_7F2DE450;
    case 0x7F2DE454u: goto label_7F2DE454;
    case 0x7F2DE458u: goto label_7F2DE458;
    case 0x7F2DE45Cu: goto label_7F2DE45C;
    case 0x7F2DE460u: goto label_7F2DE460;
    case 0x7F2DE464u: goto label_7F2DE464;
    case 0x7F2DE468u: goto label_7F2DE468;
    case 0x7F2DE46Cu: goto label_7F2DE46C;
    case 0x7F2DE470u: goto label_7F2DE470;
    case 0x7F2DE474u: goto label_7F2DE474;
    case 0x7F2DE478u: goto label_7F2DE478;
    case 0x7F2DE47Cu: goto label_7F2DE47C;
    case 0x7F2DE480u: goto label_7F2DE480;
    case 0x7F2DE484u: goto label_7F2DE484;
    case 0x7F2DE488u: goto label_7F2DE488;
    case 0x7F2DE48Cu: goto label_7F2DE48C;
    case 0x7F2DE490u: goto label_7F2DE490;
    case 0x7F2DE494u: goto label_7F2DE494;
    case 0x7F2DE498u: goto label_7F2DE498;
    case 0x7F2DE49Cu: goto label_7F2DE49C;
    case 0x7F2DE4A0u: goto label_7F2DE4A0;
    case 0x7F2DE4A4u: goto label_7F2DE4A4;
    case 0x7F2DE4A8u: goto label_7F2DE4A8;
    case 0x7F2DE4ACu: goto label_7F2DE4AC;
    case 0x7F2DE4B0u: goto label_7F2DE4B0;
    case 0x7F2DE4B4u: goto label_7F2DE4B4;
    case 0x7F2DE4B8u: goto label_7F2DE4B8;
    case 0x7F2DE4BCu: goto label_7F2DE4BC;
    case 0x7F2DE4C0u: goto label_7F2DE4C0;
    case 0x7F2DE4C4u: goto label_7F2DE4C4;
    case 0x7F2DE4C8u: goto label_7F2DE4C8;
    case 0x7F2DE4CCu: goto label_7F2DE4CC;
    case 0x7F2DE4D0u: goto label_7F2DE4D0;
    case 0x7F2DE4D4u: goto label_7F2DE4D4;
    case 0x7F2DE4D8u: goto label_7F2DE4D8;
    case 0x7F2DE4DCu: goto label_7F2DE4DC;
    case 0x7F2DE4E0u: goto label_7F2DE4E0;
    case 0x7F2DE4E4u: goto label_7F2DE4E4;
    case 0x7F2DE4E8u: goto label_7F2DE4E8;
    case 0x7F2DE4ECu: goto label_7F2DE4EC;
    case 0x7F2DE4F0u: goto label_7F2DE4F0;
    case 0x7F2DE4F4u: goto label_7F2DE4F4;
    case 0x7F2DE4F8u: goto label_7F2DE4F8;
    case 0x7F2DE4FCu: goto label_7F2DE4FC;
    case 0x7F2DE500u: goto label_7F2DE500;
    case 0x7F2DE504u: goto label_7F2DE504;
    case 0x7F2DE508u: goto label_7F2DE508;
    case 0x7F2DE50Cu: goto label_7F2DE50C;
    case 0x7F2DE510u: goto label_7F2DE510;
    case 0x7F2DE514u: goto label_7F2DE514;
    case 0x7F2DE518u: goto label_7F2DE518;
    case 0x7F2DE51Cu: goto label_7F2DE51C;
    case 0x7F2DE520u: goto label_7F2DE520;
    case 0x7F2DE524u: goto label_7F2DE524;
    case 0x7F2DE528u: goto label_7F2DE528;
    case 0x7F2DE52Cu: goto label_7F2DE52C;
    case 0x7F2DE530u: goto label_7F2DE530;
    case 0x7F2DE534u: goto label_7F2DE534;
    case 0x7F2DE538u: goto label_7F2DE538;
    case 0x7F2DE53Cu: goto label_7F2DE53C;
    case 0x7F2DE540u: goto label_7F2DE540;
    case 0x7F2DE544u: goto label_7F2DE544;
    case 0x7F2DE548u: goto label_7F2DE548;
    case 0x7F2DE54Cu: goto label_7F2DE54C;
    case 0x7F2DE550u: goto label_7F2DE550;
    case 0x7F2DE554u: goto label_7F2DE554;
    case 0x7F2DE558u: goto label_7F2DE558;
    case 0x7F2DE55Cu: goto label_7F2DE55C;
    case 0x7F2DE560u: goto label_7F2DE560;
    case 0x7F2DE564u: goto label_7F2DE564;
    case 0x7F2DE568u: goto label_7F2DE568;
    case 0x7F2DE56Cu: goto label_7F2DE56C;
    case 0x7F2DE570u: goto label_7F2DE570;
    case 0x7F2DE574u: goto label_7F2DE574;
    case 0x7F2DE578u: goto label_7F2DE578;
    case 0x7F2DE57Cu: goto label_7F2DE57C;
    case 0x7F2DE580u: goto label_7F2DE580;
    case 0x7F2DE584u: goto label_7F2DE584;
    case 0x7F2DE588u: goto label_7F2DE588;
    case 0x7F2DE58Cu: goto label_7F2DE58C;
    case 0x7F2DE590u: goto label_7F2DE590;
    case 0x7F2DE594u: goto label_7F2DE594;
    case 0x7F2DE598u: goto label_7F2DE598;
    case 0x7F2DE59Cu: goto label_7F2DE59C;
    case 0x7F2DE5A0u: goto label_7F2DE5A0;
    case 0x7F2DE5A4u: goto label_7F2DE5A4;
    case 0x7F2DE5A8u: goto label_7F2DE5A8;
    case 0x7F2DE5ACu: goto label_7F2DE5AC;
    case 0x7F2DE5B0u: goto label_7F2DE5B0;
    case 0x7F2DE5B4u: goto label_7F2DE5B4;
    case 0x7F2DE5B8u: goto label_7F2DE5B8;
    case 0x7F2DE5BCu: goto label_7F2DE5BC;
    case 0x7F2DE5C0u: goto label_7F2DE5C0;
    case 0x7F2DE5C4u: goto label_7F2DE5C4;
    case 0x7F2DE5C8u: goto label_7F2DE5C8;
    case 0x7F2DE5CCu: goto label_7F2DE5CC;
    case 0x7F2DE5D0u: goto label_7F2DE5D0;
    case 0x7F2DE5D4u: goto label_7F2DE5D4;
    case 0x7F2DE5D8u: goto label_7F2DE5D8;
    case 0x7F2DE5DCu: goto label_7F2DE5DC;
    case 0x7F2DE5E0u: goto label_7F2DE5E0;
    case 0x7F2DE5E4u: goto label_7F2DE5E4;
    case 0x7F2DE5E8u: goto label_7F2DE5E8;
    case 0x7F2DE5ECu: goto label_7F2DE5EC;
    case 0x7F2DE5F0u: goto label_7F2DE5F0;
    case 0x7F2DE5F4u: goto label_7F2DE5F4;
    case 0x7F2DE5F8u: goto label_7F2DE5F8;
    case 0x7F2DE5FCu: goto label_7F2DE5FC;
    case 0x7F2DE600u: goto label_7F2DE600;
    case 0x7F2DE604u: goto label_7F2DE604;
    case 0x7F2DE608u: goto label_7F2DE608;
    case 0x7F2DE60Cu: goto label_7F2DE60C;
    case 0x7F2DE610u: goto label_7F2DE610;
    case 0x7F2DE614u: goto label_7F2DE614;
    case 0x7F2DE618u: goto label_7F2DE618;
    case 0x7F2DE61Cu: goto label_7F2DE61C;
    case 0x7F2DE620u: goto label_7F2DE620;
    case 0x7F2DE624u: goto label_7F2DE624;
    case 0x7F2DE628u: goto label_7F2DE628;
    case 0x7F2DE62Cu: goto label_7F2DE62C;
    case 0x7F2DE630u: goto label_7F2DE630;
    case 0x7F2DE634u: goto label_7F2DE634;
    case 0x7F2DE638u: goto label_7F2DE638;
    case 0x7F2DE63Cu: goto label_7F2DE63C;
    case 0x7F2DE640u: goto label_7F2DE640;
    case 0x7F2DE644u: goto label_7F2DE644;
    case 0x7F2DE648u: goto label_7F2DE648;
    case 0x7F2DE64Cu: goto label_7F2DE64C;
    case 0x7F2DE650u: goto label_7F2DE650;
    case 0x7F2DE654u: goto label_7F2DE654;
    case 0x7F2DE658u: goto label_7F2DE658;
    case 0x7F2DE65Cu: goto label_7F2DE65C;
    case 0x7F2DE660u: goto label_7F2DE660;
    case 0x7F2DE664u: goto label_7F2DE664;
    case 0x7F2DE668u: goto label_7F2DE668;
    case 0x7F2DE66Cu: goto label_7F2DE66C;
    case 0x7F2DE670u: goto label_7F2DE670;
    case 0x7F2DE674u: goto label_7F2DE674;
    case 0x7F2DE678u: goto label_7F2DE678;
    case 0x7F2DE67Cu: goto label_7F2DE67C;
    case 0x7F2DE680u: goto label_7F2DE680;
    case 0x7F2DE684u: goto label_7F2DE684;
    case 0x7F2DE688u: goto label_7F2DE688;
    case 0x7F2DE68Cu: goto label_7F2DE68C;
    case 0x7F2DE690u: goto label_7F2DE690;
    case 0x7F2DE694u: goto label_7F2DE694;
    case 0x7F2DE698u: goto label_7F2DE698;
    case 0x7F2DE69Cu: goto label_7F2DE69C;
    case 0x7F2DE6A0u: goto label_7F2DE6A0;
    case 0x7F2DE6A4u: goto label_7F2DE6A4;
    case 0x7F2DE6A8u: goto label_7F2DE6A8;
    case 0x7F2DE6ACu: goto label_7F2DE6AC;
    case 0x7F2DE6B0u: goto label_7F2DE6B0;
    case 0x7F2DE6B4u: goto label_7F2DE6B4;
    case 0x7F2DE6B8u: goto label_7F2DE6B8;
    case 0x7F2DE6BCu: goto label_7F2DE6BC;
    case 0x7F2DE6C0u: goto label_7F2DE6C0;
    case 0x7F2DE6C4u: goto label_7F2DE6C4;
    case 0x7F2DE6C8u: goto label_7F2DE6C8;
    case 0x7F2DE6CCu: goto label_7F2DE6CC;
    case 0x7F2DE6D0u: goto label_7F2DE6D0;
    case 0x7F2DE6D4u: goto label_7F2DE6D4;
    case 0x7F2DE6D8u: goto label_7F2DE6D8;
    case 0x7F2DE6DCu: goto label_7F2DE6DC;
    case 0x7F2DE6E0u: goto label_7F2DE6E0;
    case 0x7F2DE6E4u: goto label_7F2DE6E4;
    case 0x7F2DE6E8u: goto label_7F2DE6E8;
    case 0x7F2DE6ECu: goto label_7F2DE6EC;
    case 0x7F2DE6F0u: goto label_7F2DE6F0;
    case 0x7F2DE6F4u: goto label_7F2DE6F4;
    case 0x7F2DE6F8u: goto label_7F2DE6F8;
    case 0x7F2DE6FCu: goto label_7F2DE6FC;
    case 0x7F2DE700u: goto label_7F2DE700;
    case 0x7F2DE704u: goto label_7F2DE704;
    case 0x7F2DE708u: goto label_7F2DE708;
    case 0x7F2DE70Cu: goto label_7F2DE70C;
    case 0x7F2DE710u: goto label_7F2DE710;
    case 0x7F2DE714u: goto label_7F2DE714;
    case 0x7F2DE718u: goto label_7F2DE718;
    case 0x7F2DE71Cu: goto label_7F2DE71C;
    case 0x7F2DE720u: goto label_7F2DE720;
    case 0x7F2DE724u: goto label_7F2DE724;
    case 0x7F2DE728u: goto label_7F2DE728;
    case 0x7F2DE72Cu: goto label_7F2DE72C;
    case 0x7F2DE730u: goto label_7F2DE730;
    case 0x7F2DE734u: goto label_7F2DE734;
    case 0x7F2DE738u: goto label_7F2DE738;
    case 0x7F2DE73Cu: goto label_7F2DE73C;
    case 0x7F2DE740u: goto label_7F2DE740;
    case 0x7F2DE744u: goto label_7F2DE744;
    case 0x7F2DE748u: goto label_7F2DE748;
    case 0x7F2DE74Cu: goto label_7F2DE74C;
    case 0x7F2DE750u: goto label_7F2DE750;
    case 0x7F2DE754u: goto label_7F2DE754;
    case 0x7F2DE758u: goto label_7F2DE758;
    case 0x7F2DE75Cu: goto label_7F2DE75C;
    case 0x7F2DE760u: goto label_7F2DE760;
    case 0x7F2DE764u: goto label_7F2DE764;
    case 0x7F2DE768u: goto label_7F2DE768;
    case 0x7F2DE76Cu: goto label_7F2DE76C;
    case 0x7F2DE770u: goto label_7F2DE770;
    case 0x7F2DE774u: goto label_7F2DE774;
    case 0x7F2DE778u: goto label_7F2DE778;
    case 0x7F2DE77Cu: goto label_7F2DE77C;
    case 0x7F2DE780u: goto label_7F2DE780;
    case 0x7F2DE784u: goto label_7F2DE784;
    case 0x7F2DE788u: goto label_7F2DE788;
    case 0x7F2DE78Cu: goto label_7F2DE78C;
    case 0x7F2DE790u: goto label_7F2DE790;
    case 0x7F2DE794u: goto label_7F2DE794;
    case 0x7F2DE798u: goto label_7F2DE798;
    case 0x7F2DE79Cu: goto label_7F2DE79C;
    case 0x7F2DE7A0u: goto label_7F2DE7A0;
    case 0x7F2DE7A4u: goto label_7F2DE7A4;
    case 0x7F2DE7A8u: goto label_7F2DE7A8;
    case 0x7F2DE7ACu: goto label_7F2DE7AC;
    case 0x7F2DE7B0u: goto label_7F2DE7B0;
    case 0x7F2DE7B4u: goto label_7F2DE7B4;
    case 0x7F2DE7B8u: goto label_7F2DE7B8;
    case 0x7F2DE7BCu: goto label_7F2DE7BC;
    case 0x7F2DE7C0u: goto label_7F2DE7C0;
    case 0x7F2DE7C4u: goto label_7F2DE7C4;
    case 0x7F2DE7C8u: goto label_7F2DE7C8;
    case 0x7F2DE7CCu: goto label_7F2DE7CC;
    case 0x7F2DE7D0u: goto label_7F2DE7D0;
    case 0x7F2DE7D4u: goto label_7F2DE7D4;
    case 0x7F2DE7D8u: goto label_7F2DE7D8;
    case 0x7F2DE7DCu: goto label_7F2DE7DC;
    case 0x7F2DE7E0u: goto label_7F2DE7E0;
    case 0x7F2DE7E4u: goto label_7F2DE7E4;
    case 0x7F2DE7E8u: goto label_7F2DE7E8;
    case 0x7F2DE7ECu: goto label_7F2DE7EC;
    case 0x7F2DE7F0u: goto label_7F2DE7F0;
    case 0x7F2DE7F4u: goto label_7F2DE7F4;
    case 0x7F2DE7F8u: goto label_7F2DE7F8;
    case 0x7F2DE7FCu: goto label_7F2DE7FC;
    case 0x7F2DE800u: goto label_7F2DE800;
    case 0x7F2DE804u: goto label_7F2DE804;
    case 0x7F2DE808u: goto label_7F2DE808;
    case 0x7F2DE80Cu: goto label_7F2DE80C;
    case 0x7F2DE810u: goto label_7F2DE810;
    case 0x7F2DE814u: goto label_7F2DE814;
    case 0x7F2DE818u: goto label_7F2DE818;
    case 0x7F2DE81Cu: goto label_7F2DE81C;
    case 0x7F2DE820u: goto label_7F2DE820;
    case 0x7F2DE824u: goto label_7F2DE824;
    case 0x7F2DE828u: goto label_7F2DE828;
    case 0x7F2DE82Cu: goto label_7F2DE82C;
    case 0x7F2DE830u: goto label_7F2DE830;
    case 0x7F2DE834u: goto label_7F2DE834;
    case 0x7F2DE838u: goto label_7F2DE838;
    case 0x7F2DE83Cu: goto label_7F2DE83C;
    case 0x7F2DE840u: goto label_7F2DE840;
    case 0x7F2DE844u: goto label_7F2DE844;
    case 0x7F2DE848u: goto label_7F2DE848;
    case 0x7F2DE84Cu: goto label_7F2DE84C;
    case 0x7F2DE850u: goto label_7F2DE850;
    case 0x7F2DE854u: goto label_7F2DE854;
    case 0x7F2DE858u: goto label_7F2DE858;
    case 0x7F2DE85Cu: goto label_7F2DE85C;
    case 0x7F2DE860u: goto label_7F2DE860;
    case 0x7F2DE864u: goto label_7F2DE864;
    case 0x7F2DE868u: goto label_7F2DE868;
    case 0x7F2DE86Cu: goto label_7F2DE86C;
    case 0x7F2DE870u: goto label_7F2DE870;
    case 0x7F2DE874u: goto label_7F2DE874;
    case 0x7F2DE878u: goto label_7F2DE878;
    case 0x7F2DE87Cu: goto label_7F2DE87C;
    case 0x7F2DE880u: goto label_7F2DE880;
    case 0x7F2DE884u: goto label_7F2DE884;
    case 0x7F2DE888u: goto label_7F2DE888;
    case 0x7F2DE88Cu: goto label_7F2DE88C;
    case 0x7F2DE890u: goto label_7F2DE890;
    case 0x7F2DE894u: goto label_7F2DE894;
    case 0x7F2DE898u: goto label_7F2DE898;
    case 0x7F2DE89Cu: goto label_7F2DE89C;
    case 0x7F2DE8A0u: goto label_7F2DE8A0;
    case 0x7F2DE8A4u: goto label_7F2DE8A4;
    case 0x7F2DE8A8u: goto label_7F2DE8A8;
    case 0x7F2DE8ACu: goto label_7F2DE8AC;
    case 0x7F2DE8B0u: goto label_7F2DE8B0;
    case 0x7F2DE8B4u: goto label_7F2DE8B4;
    case 0x7F2DE8B8u: goto label_7F2DE8B8;
    case 0x7F2DE8BCu: goto label_7F2DE8BC;
    case 0x7F2DE8C0u: goto label_7F2DE8C0;
    case 0x7F2DE8C4u: goto label_7F2DE8C4;
    case 0x7F2DE8C8u: goto label_7F2DE8C8;
    case 0x7F2DE8CCu: goto label_7F2DE8CC;
    case 0x7F2DE8D0u: goto label_7F2DE8D0;
    case 0x7F2DE8D4u: goto label_7F2DE8D4;
    case 0x7F2DE8D8u: goto label_7F2DE8D8;
    case 0x7F2DE8DCu: goto label_7F2DE8DC;
    case 0x7F2DE8E0u: goto label_7F2DE8E0;
    case 0x7F2DE8E4u: goto label_7F2DE8E4;
    case 0x7F2DE8E8u: goto label_7F2DE8E8;
    case 0x7F2DE8ECu: goto label_7F2DE8EC;
    case 0x7F2DE8F0u: goto label_7F2DE8F0;
    case 0x7F2DE8F4u: goto label_7F2DE8F4;
    case 0x7F2DE8F8u: goto label_7F2DE8F8;
    case 0x7F2DE8FCu: goto label_7F2DE8FC;
    case 0x7F2DE900u: goto label_7F2DE900;
    case 0x7F2DE904u: goto label_7F2DE904;
    case 0x7F2DE908u: goto label_7F2DE908;
    case 0x7F2DE90Cu: goto label_7F2DE90C;
    case 0x7F2DE910u: goto label_7F2DE910;
    case 0x7F2DE914u: goto label_7F2DE914;
    case 0x7F2DE918u: goto label_7F2DE918;
    case 0x7F2DE91Cu: goto label_7F2DE91C;
    case 0x7F2DE920u: goto label_7F2DE920;
    case 0x7F2DE924u: goto label_7F2DE924;
    case 0x7F2DE928u: goto label_7F2DE928;
    case 0x7F2DE92Cu: goto label_7F2DE92C;
    case 0x7F2DE930u: goto label_7F2DE930;
    case 0x7F2DE934u: goto label_7F2DE934;
    case 0x7F2DE938u: goto label_7F2DE938;
    case 0x7F2DE93Cu: goto label_7F2DE93C;
    case 0x7F2DE940u: goto label_7F2DE940;
    case 0x7F2DE944u: goto label_7F2DE944;
    case 0x7F2DE948u: goto label_7F2DE948;
    case 0x7F2DE94Cu: goto label_7F2DE94C;
    case 0x7F2DE950u: goto label_7F2DE950;
    case 0x7F2DE954u: goto label_7F2DE954;
    case 0x7F2DE958u: goto label_7F2DE958;
    case 0x7F2DE95Cu: goto label_7F2DE95C;
    case 0x7F2DE960u: goto label_7F2DE960;
    case 0x7F2DE964u: goto label_7F2DE964;
    case 0x7F2DE968u: goto label_7F2DE968;
    case 0x7F2DE96Cu: goto label_7F2DE96C;
    case 0x7F2DE970u: goto label_7F2DE970;
    case 0x7F2DE974u: goto label_7F2DE974;
    case 0x7F2DE978u: goto label_7F2DE978;
    case 0x7F2DE97Cu: goto label_7F2DE97C;
    case 0x7F2DE980u: goto label_7F2DE980;
    case 0x7F2DE984u: goto label_7F2DE984;
    case 0x7F2DE988u: goto label_7F2DE988;
    case 0x7F2DE98Cu: goto label_7F2DE98C;
    case 0x7F2DE990u: goto label_7F2DE990;
    case 0x7F2DE994u: goto label_7F2DE994;
    case 0x7F2DE998u: goto label_7F2DE998;
    case 0x7F2DE99Cu: goto label_7F2DE99C;
    case 0x7F2DE9A0u: goto label_7F2DE9A0;
    case 0x7F2DE9A4u: goto label_7F2DE9A4;
    case 0x7F2DE9A8u: goto label_7F2DE9A8;
    case 0x7F2DE9ACu: goto label_7F2DE9AC;
    case 0x7F2DE9B0u: goto label_7F2DE9B0;
    case 0x7F2DE9B4u: goto label_7F2DE9B4;
    case 0x7F2DE9B8u: goto label_7F2DE9B8;
    case 0x7F2DE9BCu: goto label_7F2DE9BC;
    case 0x7F2DE9C0u: goto label_7F2DE9C0;
    case 0x7F2DE9C4u: goto label_7F2DE9C4;
    case 0x7F2DE9C8u: goto label_7F2DE9C8;
    case 0x7F2DE9CCu: goto label_7F2DE9CC;
    case 0x7F2DE9D0u: goto label_7F2DE9D0;
    case 0x7F2DE9D4u: goto label_7F2DE9D4;
    case 0x7F2DE9D8u: goto label_7F2DE9D8;
    case 0x7F2DE9DCu: goto label_7F2DE9DC;
    case 0x7F2DE9E0u: goto label_7F2DE9E0;
    case 0x7F2DE9E4u: goto label_7F2DE9E4;
    case 0x7F2DE9E8u: goto label_7F2DE9E8;
    case 0x7F2DE9ECu: goto label_7F2DE9EC;
    case 0x7F2DE9F0u: goto label_7F2DE9F0;
    case 0x7F2DE9F4u: goto label_7F2DE9F4;
    case 0x7F2DE9F8u: goto label_7F2DE9F8;
    case 0x7F2DE9FCu: goto label_7F2DE9FC;
    case 0x7F2DEA00u: goto label_7F2DEA00;
    case 0x7F2DEA04u: goto label_7F2DEA04;
    case 0x7F2DEA08u: goto label_7F2DEA08;
    case 0x7F2DEA0Cu: goto label_7F2DEA0C;
    case 0x7F2DEA10u: goto label_7F2DEA10;
    case 0x7F2DEA14u: goto label_7F2DEA14;
    case 0x7F2DEA18u: goto label_7F2DEA18;
    case 0x7F2DEA1Cu: goto label_7F2DEA1C;
    case 0x7F2DEA20u: goto label_7F2DEA20;
    case 0x7F2DEA24u: goto label_7F2DEA24;
    case 0x7F2DEA28u: goto label_7F2DEA28;
    case 0x7F2DEA2Cu: goto label_7F2DEA2C;
    case 0x7F2DEA30u: goto label_7F2DEA30;
    case 0x7F2DEA34u: goto label_7F2DEA34;
    case 0x7F2DEA38u: goto label_7F2DEA38;
    case 0x7F2DEA3Cu: goto label_7F2DEA3C;
    case 0x7F2DEA40u: goto label_7F2DEA40;
    case 0x7F2DEA44u: goto label_7F2DEA44;
    case 0x7F2DEA48u: goto label_7F2DEA48;
    case 0x7F2DEA4Cu: goto label_7F2DEA4C;
    case 0x7F2DEA50u: goto label_7F2DEA50;
    case 0x7F2DEA54u: goto label_7F2DEA54;
    case 0x7F2DEA58u: goto label_7F2DEA58;
    case 0x7F2DEA5Cu: goto label_7F2DEA5C;
    case 0x7F2DEA60u: goto label_7F2DEA60;
    case 0x7F2DEA64u: goto label_7F2DEA64;
    case 0x7F2DEA68u: goto label_7F2DEA68;
    case 0x7F2DEA6Cu: goto label_7F2DEA6C;
    case 0x7F2DEA70u: goto label_7F2DEA70;
    case 0x7F2DEA74u: goto label_7F2DEA74;
    case 0x7F2DEA78u: goto label_7F2DEA78;
    case 0x7F2DEA7Cu: goto label_7F2DEA7C;
    case 0x7F2DEA80u: goto label_7F2DEA80;
    case 0x7F2DEA84u: goto label_7F2DEA84;
    case 0x7F2DEA88u: goto label_7F2DEA88;
    case 0x7F2DEA8Cu: goto label_7F2DEA8C;
    case 0x7F2DEA90u: goto label_7F2DEA90;
    case 0x7F2DEA94u: goto label_7F2DEA94;
    case 0x7F2DEA98u: goto label_7F2DEA98;
    case 0x7F2DEA9Cu: goto label_7F2DEA9C;
    case 0x7F2DEAA0u: goto label_7F2DEAA0;
    case 0x7F2DEAA4u: goto label_7F2DEAA4;
    case 0x7F2DEAA8u: goto label_7F2DEAA8;
    case 0x7F2DEAACu: goto label_7F2DEAAC;
    case 0x7F2DEAB0u: goto label_7F2DEAB0;
    case 0x7F2DEAB4u: goto label_7F2DEAB4;
    case 0x7F2DEAB8u: goto label_7F2DEAB8;
    case 0x7F2DEABCu: goto label_7F2DEABC;
    case 0x7F2DEAC0u: goto label_7F2DEAC0;
    case 0x7F2DEAC4u: goto label_7F2DEAC4;
    case 0x7F2DEAC8u: goto label_7F2DEAC8;
    case 0x7F2DEACCu: goto label_7F2DEACC;
    case 0x7F2DEAD0u: goto label_7F2DEAD0;
    case 0x7F2DEAD4u: goto label_7F2DEAD4;
    case 0x7F2DEAD8u: goto label_7F2DEAD8;
    case 0x7F2DEADCu: goto label_7F2DEADC;
    case 0x7F2DEAE0u: goto label_7F2DEAE0;
    case 0x7F2DEAE4u: goto label_7F2DEAE4;
    case 0x7F2DEAE8u: goto label_7F2DEAE8;
    case 0x7F2DEAECu: goto label_7F2DEAEC;
    case 0x7F2DEAF0u: goto label_7F2DEAF0;
    case 0x7F2DEAF4u: goto label_7F2DEAF4;
    case 0x7F2DEAF8u: goto label_7F2DEAF8;
    case 0x7F2DEAFCu: goto label_7F2DEAFC;
    case 0x7F2DEB00u: goto label_7F2DEB00;
    case 0x7F2DEB04u: goto label_7F2DEB04;
    case 0x7F2DEB08u: goto label_7F2DEB08;
    case 0x7F2DEB0Cu: goto label_7F2DEB0C;
    case 0x7F2DEB10u: goto label_7F2DEB10;
    case 0x7F2DEB14u: goto label_7F2DEB14;
    case 0x7F2DEB18u: goto label_7F2DEB18;
    case 0x7F2DEB1Cu: goto label_7F2DEB1C;
    case 0x7F2DEB20u: goto label_7F2DEB20;
    case 0x7F2DEB24u: goto label_7F2DEB24;
    case 0x7F2DEB28u: goto label_7F2DEB28;
    case 0x7F2DEB2Cu: goto label_7F2DEB2C;
    case 0x7F2DEB30u: goto label_7F2DEB30;
    case 0x7F2DEB34u: goto label_7F2DEB34;
    case 0x7F2DEB38u: goto label_7F2DEB38;
    case 0x7F2DEB3Cu: goto label_7F2DEB3C;
    case 0x7F2DEB40u: goto label_7F2DEB40;
    case 0x7F2DEB44u: goto label_7F2DEB44;
    case 0x7F2DEB48u: goto label_7F2DEB48;
    case 0x7F2DEB4Cu: goto label_7F2DEB4C;
    case 0x7F2DEB50u: goto label_7F2DEB50;
    case 0x7F2DEB54u: goto label_7F2DEB54;
    case 0x7F2DEB58u: goto label_7F2DEB58;
    case 0x7F2DEB5Cu: goto label_7F2DEB5C;
    case 0x7F2DEB60u: goto label_7F2DEB60;
    case 0x7F2DEB64u: goto label_7F2DEB64;
    case 0x7F2DEB68u: goto label_7F2DEB68;
    case 0x7F2DEB6Cu: goto label_7F2DEB6C;
    case 0x7F2DEB70u: goto label_7F2DEB70;
    case 0x7F2DEB74u: goto label_7F2DEB74;
    case 0x7F2DEB78u: goto label_7F2DEB78;
    case 0x7F2DEB7Cu: goto label_7F2DEB7C;
    case 0x7F2DEB80u: goto label_7F2DEB80;
    case 0x7F2DEB84u: goto label_7F2DEB84;
    case 0x7F2DEB88u: goto label_7F2DEB88;
    case 0x7F2DEB8Cu: goto label_7F2DEB8C;
    case 0x7F2DEB90u: goto label_7F2DEB90;
    case 0x7F2DEB94u: goto label_7F2DEB94;
    case 0x7F2DEB98u: goto label_7F2DEB98;
    case 0x7F2DEB9Cu: goto label_7F2DEB9C;
    case 0x7F2DEBA0u: goto label_7F2DEBA0;
    case 0x7F2DEBA4u: goto label_7F2DEBA4;
    case 0x7F2DEBA8u: goto label_7F2DEBA8;
    case 0x7F2DEBACu: goto label_7F2DEBAC;
    case 0x7F2DEBB0u: goto label_7F2DEBB0;
    case 0x7F2DEBB4u: goto label_7F2DEBB4;
    case 0x7F2DEBB8u: goto label_7F2DEBB8;
    case 0x7F2DEBBCu: goto label_7F2DEBBC;
    case 0x7F2DEBC0u: goto label_7F2DEBC0;
    case 0x7F2DEBC4u: goto label_7F2DEBC4;
    case 0x7F2DEBC8u: goto label_7F2DEBC8;
    case 0x7F2DEBCCu: goto label_7F2DEBCC;
    case 0x7F2DEBD0u: goto label_7F2DEBD0;
    case 0x7F2DEBD4u: goto label_7F2DEBD4;
    case 0x7F2DEBD8u: goto label_7F2DEBD8;
    case 0x7F2DEBDCu: goto label_7F2DEBDC;
    case 0x7F2DEBE0u: goto label_7F2DEBE0;
    case 0x7F2DEBE4u: goto label_7F2DEBE4;
    case 0x7F2DEBE8u: goto label_7F2DEBE8;
    case 0x7F2DEBECu: goto label_7F2DEBEC;
    case 0x7F2DEBF0u: goto label_7F2DEBF0;
    case 0x7F2DEBF4u: goto label_7F2DEBF4;
    case 0x7F2DEBF8u: goto label_7F2DEBF8;
    case 0x7F2DEBFCu: goto label_7F2DEBFC;
    case 0x7F2DEC00u: goto label_7F2DEC00;
    case 0x7F2DEC04u: goto label_7F2DEC04;
    case 0x7F2DEC08u: goto label_7F2DEC08;
    case 0x7F2DEC0Cu: goto label_7F2DEC0C;
    case 0x7F2DEC10u: goto label_7F2DEC10;
    case 0x7F2DEC14u: goto label_7F2DEC14;
    case 0x7F2DEC18u: goto label_7F2DEC18;
    case 0x7F2DEC1Cu: goto label_7F2DEC1C;
    case 0x7F2DEC20u: goto label_7F2DEC20;
    case 0x7F2DEC24u: goto label_7F2DEC24;
    case 0x7F2DEC28u: goto label_7F2DEC28;
    case 0x7F2DEC2Cu: goto label_7F2DEC2C;
    case 0x7F2DEC30u: goto label_7F2DEC30;
    case 0x7F2DEC34u: goto label_7F2DEC34;
    case 0x7F2DEC38u: goto label_7F2DEC38;
    case 0x7F2DEC3Cu: goto label_7F2DEC3C;
    case 0x7F2DEC40u: goto label_7F2DEC40;
    case 0x7F2DEC44u: goto label_7F2DEC44;
    case 0x7F2DEC48u: goto label_7F2DEC48;
    case 0x7F2DEC4Cu: goto label_7F2DEC4C;
    case 0x7F2DEC50u: goto label_7F2DEC50;
    case 0x7F2DEC54u: goto label_7F2DEC54;
    case 0x7F2DEC58u: goto label_7F2DEC58;
    case 0x7F2DEC5Cu: goto label_7F2DEC5C;
    case 0x7F2DEC60u: goto label_7F2DEC60;
    case 0x7F2DEC64u: goto label_7F2DEC64;
    case 0x7F2DEC68u: goto label_7F2DEC68;
    case 0x7F2DEC6Cu: goto label_7F2DEC6C;
    case 0x7F2DEC70u: goto label_7F2DEC70;
    case 0x7F2DEC74u: goto label_7F2DEC74;
    case 0x7F2DEC78u: goto label_7F2DEC78;
    case 0x7F2DEC7Cu: goto label_7F2DEC7C;
    case 0x7F2DEC80u: goto label_7F2DEC80;
    case 0x7F2DEC84u: goto label_7F2DEC84;
    case 0x7F2DEC88u: goto label_7F2DEC88;
    case 0x7F2DEC8Cu: goto label_7F2DEC8C;
    case 0x7F2DEC90u: goto label_7F2DEC90;
    case 0x7F2DEC94u: goto label_7F2DEC94;
    case 0x7F2DEC98u: goto label_7F2DEC98;
    case 0x7F2DEC9Cu: goto label_7F2DEC9C;
    case 0x7F2DECA0u: goto label_7F2DECA0;
    case 0x7F2DECA4u: goto label_7F2DECA4;
    case 0x7F2DECA8u: goto label_7F2DECA8;
    case 0x7F2DECACu: goto label_7F2DECAC;
    case 0x7F2DECB0u: goto label_7F2DECB0;
    case 0x7F2DECB4u: goto label_7F2DECB4;
    case 0x7F2DECB8u: goto label_7F2DECB8;
    case 0x7F2DECBCu: goto label_7F2DECBC;
    case 0x7F2DECC0u: goto label_7F2DECC0;
    case 0x7F2DECC4u: goto label_7F2DECC4;
    case 0x7F2DECC8u: goto label_7F2DECC8;
    case 0x7F2DECCCu: goto label_7F2DECCC;
    case 0x7F2DECD0u: goto label_7F2DECD0;
    case 0x7F2DECD4u: goto label_7F2DECD4;
    case 0x7F2DECD8u: goto label_7F2DECD8;
    case 0x7F2DECDCu: goto label_7F2DECDC;
    case 0x7F2DECE0u: goto label_7F2DECE0;
    case 0x7F2DECE4u: goto label_7F2DECE4;
    case 0x7F2DECE8u: goto label_7F2DECE8;
    case 0x7F2DECECu: goto label_7F2DECEC;
    case 0x7F2DECF0u: goto label_7F2DECF0;
    case 0x7F2DECF4u: goto label_7F2DECF4;
    case 0x7F2DECF8u: goto label_7F2DECF8;
    case 0x7F2DECFCu: goto label_7F2DECFC;
    case 0x7F2DED00u: goto label_7F2DED00;
    case 0x7F2DED04u: goto label_7F2DED04;
    case 0x7F2DED08u: goto label_7F2DED08;
    case 0x7F2DED0Cu: goto label_7F2DED0C;
    case 0x7F2DED10u: goto label_7F2DED10;
    case 0x7F2DED14u: goto label_7F2DED14;
    case 0x7F2DED18u: goto label_7F2DED18;
    case 0x7F2DED1Cu: goto label_7F2DED1C;
    case 0x7F2DED20u: goto label_7F2DED20;
    case 0x7F2DED24u: goto label_7F2DED24;
    case 0x7F2DED28u: goto label_7F2DED28;
    case 0x7F2DED2Cu: goto label_7F2DED2C;
    case 0x7F2DED30u: goto label_7F2DED30;
    case 0x7F2DED34u: goto label_7F2DED34;
    case 0x7F2DED38u: goto label_7F2DED38;
    case 0x7F2DED3Cu: goto label_7F2DED3C;
    case 0x7F2DED40u: goto label_7F2DED40;
    case 0x7F2DED44u: goto label_7F2DED44;
    case 0x7F2DED48u: goto label_7F2DED48;
    case 0x7F2DED4Cu: goto label_7F2DED4C;
    case 0x7F2DED50u: goto label_7F2DED50;
    case 0x7F2DED54u: goto label_7F2DED54;
    case 0x7F2DED58u: goto label_7F2DED58;
    case 0x7F2DED5Cu: goto label_7F2DED5C;
    case 0x7F2DED60u: goto label_7F2DED60;
    case 0x7F2DED64u: goto label_7F2DED64;
    case 0x7F2DED68u: goto label_7F2DED68;
    case 0x7F2DED6Cu: goto label_7F2DED6C;
    case 0x7F2DED70u: goto label_7F2DED70;
    case 0x7F2DED74u: goto label_7F2DED74;
    case 0x7F2DED78u: goto label_7F2DED78;
    case 0x7F2DED7Cu: goto label_7F2DED7C;
    case 0x7F2DED80u: goto label_7F2DED80;
    case 0x7F2DED84u: goto label_7F2DED84;
    case 0x7F2DED88u: goto label_7F2DED88;
    case 0x7F2DED8Cu: goto label_7F2DED8C;
    case 0x7F2DED90u: goto label_7F2DED90;
    case 0x7F2DED94u: goto label_7F2DED94;
    case 0x7F2DED98u: goto label_7F2DED98;
    case 0x7F2DED9Cu: goto label_7F2DED9C;
    case 0x7F2DEDA0u: goto label_7F2DEDA0;
    case 0x7F2DEDA4u: goto label_7F2DEDA4;
    case 0x7F2DEDA8u: goto label_7F2DEDA8;
    case 0x7F2DEDACu: goto label_7F2DEDAC;
    case 0x7F2DEDB0u: goto label_7F2DEDB0;
    case 0x7F2DEDB4u: goto label_7F2DEDB4;
    case 0x7F2DEDB8u: goto label_7F2DEDB8;
    case 0x7F2DEDBCu: goto label_7F2DEDBC;
    case 0x7F2DEDC0u: goto label_7F2DEDC0;
    case 0x7F2DEDC4u: goto label_7F2DEDC4;
    case 0x7F2DEDC8u: goto label_7F2DEDC8;
    case 0x7F2DEDCCu: goto label_7F2DEDCC;
    case 0x7F2DEDD0u: goto label_7F2DEDD0;
    case 0x7F2DEDD4u: goto label_7F2DEDD4;
    case 0x7F2DEDD8u: goto label_7F2DEDD8;
    case 0x7F2DEDDCu: goto label_7F2DEDDC;
    case 0x7F2DEDE0u: goto label_7F2DEDE0;
    case 0x7F2DEDE4u: goto label_7F2DEDE4;
    case 0x7F2DEDE8u: goto label_7F2DEDE8;
    case 0x7F2DEDECu: goto label_7F2DEDEC;
    case 0x7F2DEDF0u: goto label_7F2DEDF0;
    case 0x7F2DEDF4u: goto label_7F2DEDF4;
    case 0x7F2DEDF8u: goto label_7F2DEDF8;
    case 0x7F2DEDFCu: goto label_7F2DEDFC;
    case 0x7F2DEE00u: goto label_7F2DEE00;
    case 0x7F2DEE04u: goto label_7F2DEE04;
    case 0x7F2DEE08u: goto label_7F2DEE08;
    case 0x7F2DEE0Cu: goto label_7F2DEE0C;
    case 0x7F2DEE10u: goto label_7F2DEE10;
    case 0x7F2DEE14u: goto label_7F2DEE14;
    case 0x7F2DEE18u: goto label_7F2DEE18;
    case 0x7F2DEE1Cu: goto label_7F2DEE1C;
    case 0x7F2DEE20u: goto label_7F2DEE20;
    case 0x7F2DEE24u: goto label_7F2DEE24;
    case 0x7F2DEE28u: goto label_7F2DEE28;
    case 0x7F2DEE2Cu: goto label_7F2DEE2C;
    case 0x7F2DEE30u: goto label_7F2DEE30;
    case 0x7F2DEE34u: goto label_7F2DEE34;
    case 0x7F2DEE38u: goto label_7F2DEE38;
    case 0x7F2DEE3Cu: goto label_7F2DEE3C;
    case 0x7F2DEE40u: goto label_7F2DEE40;
    case 0x7F2DEE44u: goto label_7F2DEE44;
    case 0x7F2DEE48u: goto label_7F2DEE48;
    case 0x7F2DEE4Cu: goto label_7F2DEE4C;
    case 0x7F2DEE50u: goto label_7F2DEE50;
    case 0x7F2DEE54u: goto label_7F2DEE54;
    case 0x7F2DEE58u: goto label_7F2DEE58;
    case 0x7F2DEE5Cu: goto label_7F2DEE5C;
    case 0x7F2DEE60u: goto label_7F2DEE60;
    case 0x7F2DEE64u: goto label_7F2DEE64;
    case 0x7F2DEE68u: goto label_7F2DEE68;
    case 0x7F2DEE6Cu: goto label_7F2DEE6C;
    case 0x7F2DEE70u: goto label_7F2DEE70;
    case 0x7F2DEE74u: goto label_7F2DEE74;
    case 0x7F2DEE78u: goto label_7F2DEE78;
    case 0x7F2DEE7Cu: goto label_7F2DEE7C;
    case 0x7F2DEE80u: goto label_7F2DEE80;
    case 0x7F2DEE84u: goto label_7F2DEE84;
    case 0x7F2DEE88u: goto label_7F2DEE88;
    case 0x7F2DEE8Cu: goto label_7F2DEE8C;
    case 0x7F2DEE90u: goto label_7F2DEE90;
    case 0x7F2DEE94u: goto label_7F2DEE94;
    case 0x7F2DEE98u: goto label_7F2DEE98;
    case 0x7F2DEE9Cu: goto label_7F2DEE9C;
    case 0x7F2DEEA0u: goto label_7F2DEEA0;
    case 0x7F2DEEA4u: goto label_7F2DEEA4;
    case 0x7F2DEEA8u: goto label_7F2DEEA8;
    case 0x7F2DEEACu: goto label_7F2DEEAC;
    case 0x7F2DEEB0u: goto label_7F2DEEB0;
    case 0x7F2DEEB4u: goto label_7F2DEEB4;
    case 0x7F2DEEB8u: goto label_7F2DEEB8;
    case 0x7F2DEEBCu: goto label_7F2DEEBC;
    case 0x7F2DEEC0u: goto label_7F2DEEC0;
    case 0x7F2DEEC4u: goto label_7F2DEEC4;
    case 0x7F2DEEC8u: goto label_7F2DEEC8;
    case 0x7F2DEECCu: goto label_7F2DEECC;
    case 0x7F2DEED0u: goto label_7F2DEED0;
    case 0x7F2DEED4u: goto label_7F2DEED4;
    case 0x7F2DEED8u: goto label_7F2DEED8;
    case 0x7F2DEEDCu: goto label_7F2DEEDC;
    case 0x7F2DEEE0u: goto label_7F2DEEE0;
    case 0x7F2DEEE4u: goto label_7F2DEEE4;
    case 0x7F2DEEE8u: goto label_7F2DEEE8;
    case 0x7F2DEEECu: goto label_7F2DEEEC;
    case 0x7F2DEEF0u: goto label_7F2DEEF0;
    case 0x7F2DEEF4u: goto label_7F2DEEF4;
    case 0x7F2DEEF8u: goto label_7F2DEEF8;
    case 0x7F2DEEFCu: goto label_7F2DEEFC;
    case 0x7F2DEF00u: goto label_7F2DEF00;
    case 0x7F2DEF04u: goto label_7F2DEF04;
    case 0x7F2DEF08u: goto label_7F2DEF08;
    case 0x7F2DEF0Cu: goto label_7F2DEF0C;
    case 0x7F2DEF10u: goto label_7F2DEF10;
    case 0x7F2DEF14u: goto label_7F2DEF14;
    case 0x7F2DEF18u: goto label_7F2DEF18;
    case 0x7F2DEF1Cu: goto label_7F2DEF1C;
    case 0x7F2DEF20u: goto label_7F2DEF20;
    case 0x7F2DEF24u: goto label_7F2DEF24;
    case 0x7F2DEF28u: goto label_7F2DEF28;
    case 0x7F2DEF2Cu: goto label_7F2DEF2C;
    case 0x7F2DEF30u: goto label_7F2DEF30;
    case 0x7F2DEF34u: goto label_7F2DEF34;
    case 0x7F2DEF38u: goto label_7F2DEF38;
    case 0x7F2DEF3Cu: goto label_7F2DEF3C;
    case 0x7F2DEF40u: goto label_7F2DEF40;
    case 0x7F2DEF44u: goto label_7F2DEF44;
    case 0x7F2DEF48u: goto label_7F2DEF48;
    case 0x7F2DEF4Cu: goto label_7F2DEF4C;
    case 0x7F2DEF50u: goto label_7F2DEF50;
    case 0x7F2DEF54u: goto label_7F2DEF54;
    case 0x7F2DEF58u: goto label_7F2DEF58;
    case 0x7F2DEF5Cu: goto label_7F2DEF5C;
    case 0x7F2DEF60u: goto label_7F2DEF60;
    case 0x7F2DEF64u: goto label_7F2DEF64;
    case 0x7F2DEF68u: goto label_7F2DEF68;
    case 0x7F2DEF6Cu: goto label_7F2DEF6C;
    case 0x7F2DEF70u: goto label_7F2DEF70;
    case 0x7F2DEF74u: goto label_7F2DEF74;
    case 0x7F2DEF78u: goto label_7F2DEF78;
    case 0x7F2DEF7Cu: goto label_7F2DEF7C;
    case 0x7F2DEF80u: goto label_7F2DEF80;
    case 0x7F2DEF84u: goto label_7F2DEF84;
    case 0x7F2DEF88u: goto label_7F2DEF88;
    case 0x7F2DEF8Cu: goto label_7F2DEF8C;
    case 0x7F2DEF90u: goto label_7F2DEF90;
    case 0x7F2DEF94u: goto label_7F2DEF94;
    case 0x7F2DEF98u: goto label_7F2DEF98;
    case 0x7F2DEF9Cu: goto label_7F2DEF9C;
    case 0x7F2DEFA0u: goto label_7F2DEFA0;
    case 0x7F2DEFA4u: goto label_7F2DEFA4;
    case 0x7F2DEFA8u: goto label_7F2DEFA8;
    case 0x7F2DEFACu: goto label_7F2DEFAC;
    case 0x7F2DEFB0u: goto label_7F2DEFB0;
    case 0x7F2DEFB4u: goto label_7F2DEFB4;
    case 0x7F2DEFB8u: goto label_7F2DEFB8;
    case 0x7F2DEFBCu: goto label_7F2DEFBC;
    case 0x7F2DEFC0u: goto label_7F2DEFC0;
    case 0x7F2DEFC4u: goto label_7F2DEFC4;
    case 0x7F2DEFC8u: goto label_7F2DEFC8;
    case 0x7F2DEFCCu: goto label_7F2DEFCC;
    case 0x7F2DEFD0u: goto label_7F2DEFD0;
    case 0x7F2DEFD4u: goto label_7F2DEFD4;
    case 0x7F2DEFD8u: goto label_7F2DEFD8;
    case 0x7F2DEFDCu: goto label_7F2DEFDC;
    case 0x7F2DEFE0u: goto label_7F2DEFE0;
    case 0x7F2DEFE4u: goto label_7F2DEFE4;
    case 0x7F2DEFE8u: goto label_7F2DEFE8;
    case 0x7F2DEFECu: goto label_7F2DEFEC;
    case 0x7F2DEFF0u: goto label_7F2DEFF0;
    case 0x7F2DEFF4u: goto label_7F2DEFF4;
    case 0x7F2DEFF8u: goto label_7F2DEFF8;
    case 0x7F2DEFFCu: goto label_7F2DEFFC;
    case 0x7F2DF000u: goto label_7F2DF000;
    case 0x7F2DF004u: goto label_7F2DF004;
    case 0x7F2DF008u: goto label_7F2DF008;
    case 0x7F2DF00Cu: goto label_7F2DF00C;
    case 0x7F2DF010u: goto label_7F2DF010;
    case 0x7F2DF014u: goto label_7F2DF014;
    case 0x7F2DF018u: goto label_7F2DF018;
    case 0x7F2DF01Cu: goto label_7F2DF01C;
    case 0x7F2DF020u: goto label_7F2DF020;
    case 0x7F2DF024u: goto label_7F2DF024;
    case 0x7F2DF028u: goto label_7F2DF028;
    case 0x7F2DF02Cu: goto label_7F2DF02C;
    case 0x7F2DF030u: goto label_7F2DF030;
    case 0x7F2DF034u: goto label_7F2DF034;
    case 0x7F2DF038u: goto label_7F2DF038;
    case 0x7F2DF03Cu: goto label_7F2DF03C;
    case 0x7F2DF040u: goto label_7F2DF040;
    case 0x7F2DF044u: goto label_7F2DF044;
    case 0x7F2DF048u: goto label_7F2DF048;
    case 0x7F2DF04Cu: goto label_7F2DF04C;
    case 0x7F2DF050u: goto label_7F2DF050;
    case 0x7F2DF054u: goto label_7F2DF054;
    case 0x7F2DF058u: goto label_7F2DF058;
    case 0x7F2DF05Cu: goto label_7F2DF05C;
    case 0x7F2DF060u: goto label_7F2DF060;
    case 0x7F2DF064u: goto label_7F2DF064;
    case 0x7F2DF068u: goto label_7F2DF068;
    case 0x7F2DF06Cu: goto label_7F2DF06C;
    case 0x7F2DF070u: goto label_7F2DF070;
    case 0x7F2DF074u: goto label_7F2DF074;
    case 0x7F2DF078u: goto label_7F2DF078;
    case 0x7F2DF07Cu: goto label_7F2DF07C;
    case 0x7F2DF080u: goto label_7F2DF080;
    case 0x7F2DF084u: goto label_7F2DF084;
    case 0x7F2DF088u: goto label_7F2DF088;
    case 0x7F2DF08Cu: goto label_7F2DF08C;
    case 0x7F2DF090u: goto label_7F2DF090;
    case 0x7F2DF094u: goto label_7F2DF094;
    case 0x7F2DF098u: goto label_7F2DF098;
    case 0x7F2DF09Cu: goto label_7F2DF09C;
    case 0x7F2DF0A0u: goto label_7F2DF0A0;
    case 0x7F2DF0A4u: goto label_7F2DF0A4;
    case 0x7F2DF0A8u: goto label_7F2DF0A8;
    case 0x7F2DF0ACu: goto label_7F2DF0AC;
    case 0x7F2DF0B0u: goto label_7F2DF0B0;
    case 0x7F2DF0B4u: goto label_7F2DF0B4;
    case 0x7F2DF0B8u: goto label_7F2DF0B8;
    case 0x7F2DF0BCu: goto label_7F2DF0BC;
    case 0x7F2DF0C0u: goto label_7F2DF0C0;
    case 0x7F2DF0C4u: goto label_7F2DF0C4;
    case 0x7F2DF0C8u: goto label_7F2DF0C8;
    case 0x7F2DF0CCu: goto label_7F2DF0CC;
    case 0x7F2DF0D0u: goto label_7F2DF0D0;
    case 0x7F2DF0D4u: goto label_7F2DF0D4;
    case 0x7F2DF0D8u: goto label_7F2DF0D8;
    case 0x7F2DF0DCu: goto label_7F2DF0DC;
    case 0x7F2DF0E0u: goto label_7F2DF0E0;
    case 0x7F2DF0E4u: goto label_7F2DF0E4;
    case 0x7F2DF0E8u: goto label_7F2DF0E8;
    case 0x7F2DF0ECu: goto label_7F2DF0EC;
    case 0x7F2DF0F0u: goto label_7F2DF0F0;
    case 0x7F2DF0F4u: goto label_7F2DF0F4;
    case 0x7F2DF0F8u: goto label_7F2DF0F8;
    case 0x7F2DF0FCu: goto label_7F2DF0FC;
    case 0x7F2DF100u: goto label_7F2DF100;
    case 0x7F2DF104u: goto label_7F2DF104;
    case 0x7F2DF108u: goto label_7F2DF108;
    case 0x7F2DF10Cu: goto label_7F2DF10C;
    case 0x7F2DF110u: goto label_7F2DF110;
    case 0x7F2DF114u: goto label_7F2DF114;
    case 0x7F2DF118u: goto label_7F2DF118;
    case 0x7F2DF11Cu: goto label_7F2DF11C;
    case 0x7F2DF120u: goto label_7F2DF120;
    case 0x7F2DF124u: goto label_7F2DF124;
    case 0x7F2DF128u: goto label_7F2DF128;
    case 0x7F2DF12Cu: goto label_7F2DF12C;
    case 0x7F2DF130u: goto label_7F2DF130;
    case 0x7F2DF134u: goto label_7F2DF134;
    case 0x7F2DF138u: goto label_7F2DF138;
    case 0x7F2DF13Cu: goto label_7F2DF13C;
    case 0x7F2DF140u: goto label_7F2DF140;
    case 0x7F2DF144u: goto label_7F2DF144;
    case 0x7F2DF148u: goto label_7F2DF148;
    case 0x7F2DF14Cu: goto label_7F2DF14C;
    case 0x7F2DF150u: goto label_7F2DF150;
    case 0x7F2DF154u: goto label_7F2DF154;
    case 0x7F2DF158u: goto label_7F2DF158;
    case 0x7F2DF15Cu: goto label_7F2DF15C;
    case 0x7F2DF160u: goto label_7F2DF160;
    case 0x7F2DF164u: goto label_7F2DF164;
    case 0x7F2DF168u: goto label_7F2DF168;
    case 0x7F2DF16Cu: goto label_7F2DF16C;
    case 0x7F2DF170u: goto label_7F2DF170;
    case 0x7F2DF174u: goto label_7F2DF174;
    case 0x7F2DF178u: goto label_7F2DF178;
    case 0x7F2DF17Cu: goto label_7F2DF17C;
    case 0x7F2DF180u: goto label_7F2DF180;
    case 0x7F2DF184u: goto label_7F2DF184;
    case 0x7F2DF188u: goto label_7F2DF188;
    case 0x7F2DF18Cu: goto label_7F2DF18C;
    case 0x7F2DF190u: goto label_7F2DF190;
    case 0x7F2DF194u: goto label_7F2DF194;
    case 0x7F2DF198u: goto label_7F2DF198;
    case 0x7F2DF19Cu: goto label_7F2DF19C;
    case 0x7F2DF1A0u: goto label_7F2DF1A0;
    case 0x7F2DF1A4u: goto label_7F2DF1A4;
    case 0x7F2DF1A8u: goto label_7F2DF1A8;
    case 0x7F2DF1ACu: goto label_7F2DF1AC;
    case 0x7F2DF1B0u: goto label_7F2DF1B0;
    case 0x7F2DF1B4u: goto label_7F2DF1B4;
    case 0x7F2DF1B8u: goto label_7F2DF1B8;
    case 0x7F2DF1BCu: goto label_7F2DF1BC;
    case 0x7F2DF1C0u: goto label_7F2DF1C0;
    case 0x7F2DF1C4u: goto label_7F2DF1C4;
    case 0x7F2DF1C8u: goto label_7F2DF1C8;
    case 0x7F2DF1CCu: goto label_7F2DF1CC;
    case 0x7F2DF1D0u: goto label_7F2DF1D0;
    case 0x7F2DF1D4u: goto label_7F2DF1D4;
    case 0x7F2DF1D8u: goto label_7F2DF1D8;
    case 0x7F2DF1DCu: goto label_7F2DF1DC;
    case 0x7F2DF1E0u: goto label_7F2DF1E0;
    case 0x7F2DF1E4u: goto label_7F2DF1E4;
    case 0x7F2DF1E8u: goto label_7F2DF1E8;
    case 0x7F2DF1ECu: goto label_7F2DF1EC;
    case 0x7F2DF1F0u: goto label_7F2DF1F0;
    case 0x7F2DF1F4u: goto label_7F2DF1F4;
    case 0x7F2DF1F8u: goto label_7F2DF1F8;
    case 0x7F2DF1FCu: goto label_7F2DF1FC;
    case 0x7F2DF200u: goto label_7F2DF200;
    case 0x7F2DF204u: goto label_7F2DF204;
    case 0x7F2DF208u: goto label_7F2DF208;
    case 0x7F2DF20Cu: goto label_7F2DF20C;
    case 0x7F2DF210u: goto label_7F2DF210;
    case 0x7F2DF214u: goto label_7F2DF214;
    case 0x7F2DF218u: goto label_7F2DF218;
    case 0x7F2DF21Cu: goto label_7F2DF21C;
    case 0x7F2DF220u: goto label_7F2DF220;
    case 0x7F2DF224u: goto label_7F2DF224;
    case 0x7F2DF228u: goto label_7F2DF228;
    case 0x7F2DF22Cu: goto label_7F2DF22C;
    case 0x7F2DF230u: goto label_7F2DF230;
    case 0x7F2DF234u: goto label_7F2DF234;
    case 0x7F2DF238u: goto label_7F2DF238;
    case 0x7F2DF23Cu: goto label_7F2DF23C;
    case 0x7F2DF240u: goto label_7F2DF240;
    case 0x7F2DF244u: goto label_7F2DF244;
    case 0x7F2DF248u: goto label_7F2DF248;
    case 0x7F2DF24Cu: goto label_7F2DF24C;
    case 0x7F2DF250u: goto label_7F2DF250;
    case 0x7F2DF254u: goto label_7F2DF254;
    case 0x7F2DF258u: goto label_7F2DF258;
    case 0x7F2DF25Cu: goto label_7F2DF25C;
    case 0x7F2DF260u: goto label_7F2DF260;
    case 0x7F2DF264u: goto label_7F2DF264;
    case 0x7F2DF268u: goto label_7F2DF268;
    case 0x7F2DF26Cu: goto label_7F2DF26C;
    case 0x7F2DF270u: goto label_7F2DF270;
    case 0x7F2DF274u: goto label_7F2DF274;
    case 0x7F2DF278u: goto label_7F2DF278;
    case 0x7F2DF27Cu: goto label_7F2DF27C;
    case 0x7F2DF280u: goto label_7F2DF280;
    case 0x7F2DF284u: goto label_7F2DF284;
    case 0x7F2DF288u: goto label_7F2DF288;
    case 0x7F2DF28Cu: goto label_7F2DF28C;
    case 0x7F2DF290u: goto label_7F2DF290;
    case 0x7F2DF294u: goto label_7F2DF294;
    case 0x7F2DF298u: goto label_7F2DF298;
    case 0x7F2DF29Cu: goto label_7F2DF29C;
    case 0x7F2DF2A0u: goto label_7F2DF2A0;
    case 0x7F2DF2A4u: goto label_7F2DF2A4;
    case 0x7F2DF2A8u: goto label_7F2DF2A8;
    case 0x7F2DF2ACu: goto label_7F2DF2AC;
    case 0x7F2DF2B0u: goto label_7F2DF2B0;
    case 0x7F2DF2B4u: goto label_7F2DF2B4;
    case 0x7F2DF2B8u: goto label_7F2DF2B8;
    case 0x7F2DF2BCu: goto label_7F2DF2BC;
    case 0x7F2DF2C0u: goto label_7F2DF2C0;
    case 0x7F2DF2C4u: goto label_7F2DF2C4;
    case 0x7F2DF2C8u: goto label_7F2DF2C8;
    case 0x7F2DF2CCu: goto label_7F2DF2CC;
    case 0x7F2DF2D0u: goto label_7F2DF2D0;
    case 0x7F2DF2D4u: goto label_7F2DF2D4;
    case 0x7F2DF2D8u: goto label_7F2DF2D8;
    case 0x7F2DF2DCu: goto label_7F2DF2DC;
    case 0x7F2DF2E0u: goto label_7F2DF2E0;
    case 0x7F2DF2E4u: goto label_7F2DF2E4;
    case 0x7F2DF2E8u: goto label_7F2DF2E8;
    case 0x7F2DF2ECu: goto label_7F2DF2EC;
    case 0x7F2DF2F0u: goto label_7F2DF2F0;
    case 0x7F2DF2F4u: goto label_7F2DF2F4;
    case 0x7F2DF2F8u: goto label_7F2DF2F8;
    case 0x7F2DF2FCu: goto label_7F2DF2FC;
    case 0x7F2DF300u: goto label_7F2DF300;
    case 0x7F2DF304u: goto label_7F2DF304;
    case 0x7F2DF308u: goto label_7F2DF308;
    case 0x7F2DF30Cu: goto label_7F2DF30C;
    case 0x7F2DF310u: goto label_7F2DF310;
    case 0x7F2DF314u: goto label_7F2DF314;
    case 0x7F2DF318u: goto label_7F2DF318;
    case 0x7F2DF31Cu: goto label_7F2DF31C;
    case 0x7F2DF320u: goto label_7F2DF320;
    case 0x7F2DF324u: goto label_7F2DF324;
    case 0x7F2DF328u: goto label_7F2DF328;
    case 0x7F2DF32Cu: goto label_7F2DF32C;
    case 0x7F2DF330u: goto label_7F2DF330;
    case 0x7F2DF334u: goto label_7F2DF334;
    case 0x7F2DF338u: goto label_7F2DF338;
    case 0x7F2DF33Cu: goto label_7F2DF33C;
    case 0x7F2DF340u: goto label_7F2DF340;
    case 0x7F2DF344u: goto label_7F2DF344;
    case 0x7F2DF348u: goto label_7F2DF348;
    case 0x7F2DF34Cu: goto label_7F2DF34C;
    case 0x7F2DF350u: goto label_7F2DF350;
    case 0x7F2DF354u: goto label_7F2DF354;
    case 0x7F2DF358u: goto label_7F2DF358;
    case 0x7F2DF35Cu: goto label_7F2DF35C;
    case 0x7F2DF360u: goto label_7F2DF360;
    case 0x7F2DF364u: goto label_7F2DF364;
    case 0x7F2DF368u: goto label_7F2DF368;
    case 0x7F2DF36Cu: goto label_7F2DF36C;
    case 0x7F2DF370u: goto label_7F2DF370;
    case 0x7F2DF374u: goto label_7F2DF374;
    case 0x7F2DF378u: goto label_7F2DF378;
    case 0x7F2DF37Cu: goto label_7F2DF37C;
    case 0x7F2DF380u: goto label_7F2DF380;
    case 0x7F2DF384u: goto label_7F2DF384;
    case 0x7F2DF388u: goto label_7F2DF388;
    case 0x7F2DF38Cu: goto label_7F2DF38C;
    case 0x7F2DF390u: goto label_7F2DF390;
    case 0x7F2DF394u: goto label_7F2DF394;
    case 0x7F2DF398u: goto label_7F2DF398;
    case 0x7F2DF39Cu: goto label_7F2DF39C;
    case 0x7F2DF3A0u: goto label_7F2DF3A0;
    case 0x7F2DF3A4u: goto label_7F2DF3A4;
    case 0x7F2DF3A8u: goto label_7F2DF3A8;
    case 0x7F2DF3ACu: goto label_7F2DF3AC;
    case 0x7F2DF3B0u: goto label_7F2DF3B0;
    case 0x7F2DF3B4u: goto label_7F2DF3B4;
    case 0x7F2DF3B8u: goto label_7F2DF3B8;
    case 0x7F2DF3BCu: goto label_7F2DF3BC;
    case 0x7F2DF3C0u: goto label_7F2DF3C0;
    case 0x7F2DF3C4u: goto label_7F2DF3C4;
    case 0x7F2DF3C8u: goto label_7F2DF3C8;
    case 0x7F2DF3CCu: goto label_7F2DF3CC;
    case 0x7F2DF3D0u: goto label_7F2DF3D0;
    case 0x7F2DF3D4u: goto label_7F2DF3D4;
    case 0x7F2DF3D8u: goto label_7F2DF3D8;
    case 0x7F2DF3DCu: goto label_7F2DF3DC;
    case 0x7F2DF3E0u: goto label_7F2DF3E0;
    case 0x7F2DF3E4u: goto label_7F2DF3E4;
    case 0x7F2DF3E8u: goto label_7F2DF3E8;
    case 0x7F2DF3ECu: goto label_7F2DF3EC;
    case 0x7F2DF3F0u: goto label_7F2DF3F0;
    case 0x7F2DF3F4u: goto label_7F2DF3F4;
    case 0x7F2DF3F8u: goto label_7F2DF3F8;
    case 0x7F2DF3FCu: goto label_7F2DF3FC;
    case 0x7F2DF400u: goto label_7F2DF400;
    case 0x7F2DF404u: goto label_7F2DF404;
    case 0x7F2DF408u: goto label_7F2DF408;
    case 0x7F2DF40Cu: goto label_7F2DF40C;
    case 0x7F2DF410u: goto label_7F2DF410;
    case 0x7F2DF414u: goto label_7F2DF414;
    case 0x7F2DF418u: goto label_7F2DF418;
    case 0x7F2DF41Cu: goto label_7F2DF41C;
    case 0x7F2DF420u: goto label_7F2DF420;
    case 0x7F2DF424u: goto label_7F2DF424;
    case 0x7F2DF428u: goto label_7F2DF428;
    case 0x7F2DF42Cu: goto label_7F2DF42C;
    case 0x7F2DF430u: goto label_7F2DF430;
    case 0x7F2DF434u: goto label_7F2DF434;
    case 0x7F2DF438u: goto label_7F2DF438;
    case 0x7F2DF43Cu: goto label_7F2DF43C;
    case 0x7F2DF440u: goto label_7F2DF440;
    case 0x7F2DF444u: goto label_7F2DF444;
    case 0x7F2DF448u: goto label_7F2DF448;
    case 0x7F2DF44Cu: goto label_7F2DF44C;
    case 0x7F2DF450u: goto label_7F2DF450;
    case 0x7F2DF454u: goto label_7F2DF454;
    case 0x7F2DF458u: goto label_7F2DF458;
    case 0x7F2DF45Cu: goto label_7F2DF45C;
    case 0x7F2DF460u: goto label_7F2DF460;
    case 0x7F2DF464u: goto label_7F2DF464;
    case 0x7F2DF468u: goto label_7F2DF468;
    case 0x7F2DF46Cu: goto label_7F2DF46C;
    case 0x7F2DF470u: goto label_7F2DF470;
    case 0x7F2DF474u: goto label_7F2DF474;
    case 0x7F2DF478u: goto label_7F2DF478;
    case 0x7F2DF47Cu: goto label_7F2DF47C;
    case 0x7F2DF480u: goto label_7F2DF480;
    case 0x7F2DF484u: goto label_7F2DF484;
    case 0x7F2DF488u: goto label_7F2DF488;
    case 0x7F2DF48Cu: goto label_7F2DF48C;
    case 0x7F2DF490u: goto label_7F2DF490;
    case 0x7F2DF494u: goto label_7F2DF494;
    case 0x7F2DF498u: goto label_7F2DF498;
    case 0x7F2DF49Cu: goto label_7F2DF49C;
    case 0x7F2DF4A0u: goto label_7F2DF4A0;
    case 0x7F2DF4A4u: goto label_7F2DF4A4;
    case 0x7F2DF4A8u: goto label_7F2DF4A8;
    case 0x7F2DF4ACu: goto label_7F2DF4AC;
    case 0x7F2DF4B0u: goto label_7F2DF4B0;
    case 0x7F2DF4B4u: goto label_7F2DF4B4;
    case 0x7F2DF4B8u: goto label_7F2DF4B8;
    case 0x7F2DF4BCu: goto label_7F2DF4BC;
    case 0x7F2DF4C0u: goto label_7F2DF4C0;
    case 0x7F2DF4C4u: goto label_7F2DF4C4;
    case 0x7F2DF4C8u: goto label_7F2DF4C8;
    case 0x7F2DF4CCu: goto label_7F2DF4CC;
    case 0x7F2DF4D0u: goto label_7F2DF4D0;
    case 0x7F2DF4D4u: goto label_7F2DF4D4;
    case 0x7F2DF4D8u: goto label_7F2DF4D8;
    case 0x7F2DF4DCu: goto label_7F2DF4DC;
    case 0x7F2DF4E0u: goto label_7F2DF4E0;
    case 0x7F2DF4E4u: goto label_7F2DF4E4;
    case 0x7F2DF4E8u: goto label_7F2DF4E8;
    case 0x7F2DF4ECu: goto label_7F2DF4EC;
    case 0x7F2DF4F0u: goto label_7F2DF4F0;
    case 0x7F2DF4F4u: goto label_7F2DF4F4;
    case 0x7F2DF4F8u: goto label_7F2DF4F8;
    case 0x7F2DF4FCu: goto label_7F2DF4FC;
    case 0x7F2DF500u: goto label_7F2DF500;
    case 0x7F2DF504u: goto label_7F2DF504;
    case 0x7F2DF508u: goto label_7F2DF508;
    case 0x7F2DF50Cu: goto label_7F2DF50C;
    case 0x7F2DF510u: goto label_7F2DF510;
    case 0x7F2DF514u: goto label_7F2DF514;
    case 0x7F2DF518u: goto label_7F2DF518;
    case 0x7F2DF51Cu: goto label_7F2DF51C;
    case 0x7F2DF520u: goto label_7F2DF520;
    case 0x7F2DF524u: goto label_7F2DF524;
    case 0x7F2DF528u: goto label_7F2DF528;
    case 0x7F2DF52Cu: goto label_7F2DF52C;
    case 0x7F2DF530u: goto label_7F2DF530;
    case 0x7F2DF534u: goto label_7F2DF534;
    case 0x7F2DF538u: goto label_7F2DF538;
    case 0x7F2DF53Cu: goto label_7F2DF53C;
    case 0x7F2DF540u: goto label_7F2DF540;
    case 0x7F2DF544u: goto label_7F2DF544;
    case 0x7F2DF548u: goto label_7F2DF548;
    case 0x7F2DF54Cu: goto label_7F2DF54C;
    case 0x7F2DF550u: goto label_7F2DF550;
    case 0x7F2DF554u: goto label_7F2DF554;
    case 0x7F2DF558u: goto label_7F2DF558;
    case 0x7F2DF55Cu: goto label_7F2DF55C;
    case 0x7F2DF560u: goto label_7F2DF560;
    case 0x7F2DF564u: goto label_7F2DF564;
    case 0x7F2DF568u: goto label_7F2DF568;
    case 0x7F2DF56Cu: goto label_7F2DF56C;
    case 0x7F2DF570u: goto label_7F2DF570;
    case 0x7F2DF574u: goto label_7F2DF574;
    case 0x7F2DF578u: goto label_7F2DF578;
    case 0x7F2DF57Cu: goto label_7F2DF57C;
    case 0x7F2DF580u: goto label_7F2DF580;
    case 0x7F2DF584u: goto label_7F2DF584;
    case 0x7F2DF588u: goto label_7F2DF588;
    case 0x7F2DF58Cu: goto label_7F2DF58C;
    case 0x7F2DF590u: goto label_7F2DF590;
    case 0x7F2DF594u: goto label_7F2DF594;
    case 0x7F2DF598u: goto label_7F2DF598;
    case 0x7F2DF59Cu: goto label_7F2DF59C;
    case 0x7F2DF5A0u: goto label_7F2DF5A0;
    case 0x7F2DF5A4u: goto label_7F2DF5A4;
    case 0x7F2DF5A8u: goto label_7F2DF5A8;
    case 0x7F2DF5ACu: goto label_7F2DF5AC;
    case 0x7F2DF5B0u: goto label_7F2DF5B0;
    case 0x7F2DF5B4u: goto label_7F2DF5B4;
    case 0x7F2DF5B8u: goto label_7F2DF5B8;
    case 0x7F2DF5BCu: goto label_7F2DF5BC;
    case 0x7F2DF5C0u: goto label_7F2DF5C0;
    case 0x7F2DF5C4u: goto label_7F2DF5C4;
    case 0x7F2DF5C8u: goto label_7F2DF5C8;
    case 0x7F2DF5CCu: goto label_7F2DF5CC;
    case 0x7F2DF5D0u: goto label_7F2DF5D0;
    case 0x7F2DF5D4u: goto label_7F2DF5D4;
    case 0x7F2DF5D8u: goto label_7F2DF5D8;
    case 0x7F2DF5DCu: goto label_7F2DF5DC;
    case 0x7F2DF5E0u: goto label_7F2DF5E0;
    case 0x7F2DF5E4u: goto label_7F2DF5E4;
    case 0x7F2DF5E8u: goto label_7F2DF5E8;
    case 0x7F2DF5ECu: goto label_7F2DF5EC;
    case 0x7F2DF5F0u: goto label_7F2DF5F0;
    case 0x7F2DF5F4u: goto label_7F2DF5F4;
    case 0x7F2DF5F8u: goto label_7F2DF5F8;
    case 0x7F2DF5FCu: goto label_7F2DF5FC;
    case 0x7F2DF600u: goto label_7F2DF600;
    case 0x7F2DF604u: goto label_7F2DF604;
    case 0x7F2DF608u: goto label_7F2DF608;
    case 0x7F2DF60Cu: goto label_7F2DF60C;
    case 0x7F2DF610u: goto label_7F2DF610;
    case 0x7F2DF614u: goto label_7F2DF614;
    case 0x7F2DF618u: goto label_7F2DF618;
    case 0x7F2DF61Cu: goto label_7F2DF61C;
    case 0x7F2DF620u: goto label_7F2DF620;
    case 0x7F2DF624u: goto label_7F2DF624;
    case 0x7F2DF628u: goto label_7F2DF628;
    case 0x7F2DF62Cu: goto label_7F2DF62C;
    case 0x7F2DF630u: goto label_7F2DF630;
    case 0x7F2DF634u: goto label_7F2DF634;
    case 0x7F2DF638u: goto label_7F2DF638;
    case 0x7F2DF63Cu: goto label_7F2DF63C;
    case 0x7F2DF640u: goto label_7F2DF640;
    case 0x7F2DF644u: goto label_7F2DF644;
    case 0x7F2DF648u: goto label_7F2DF648;
    case 0x7F2DF64Cu: goto label_7F2DF64C;
    case 0x7F2DF650u: goto label_7F2DF650;
    case 0x7F2DF654u: goto label_7F2DF654;
    case 0x7F2DF658u: goto label_7F2DF658;
    case 0x7F2DF65Cu: goto label_7F2DF65C;
    case 0x7F2DF660u: goto label_7F2DF660;
    case 0x7F2DF664u: goto label_7F2DF664;
    case 0x7F2DF668u: goto label_7F2DF668;
    case 0x7F2DF66Cu: goto label_7F2DF66C;
    case 0x7F2DF670u: goto label_7F2DF670;
    case 0x7F2DF674u: goto label_7F2DF674;
    case 0x7F2DF678u: goto label_7F2DF678;
    case 0x7F2DF67Cu: goto label_7F2DF67C;
    case 0x7F2DF680u: goto label_7F2DF680;
    case 0x7F2DF684u: goto label_7F2DF684;
    case 0x7F2DF688u: goto label_7F2DF688;
    case 0x7F2DF68Cu: goto label_7F2DF68C;
    case 0x7F2DF690u: goto label_7F2DF690;
    case 0x7F2DF694u: goto label_7F2DF694;
    case 0x7F2DF698u: goto label_7F2DF698;
    case 0x7F2DF69Cu: goto label_7F2DF69C;
    case 0x7F2DF6A0u: goto label_7F2DF6A0;
    case 0x7F2DF6A4u: goto label_7F2DF6A4;
    case 0x7F2DF6A8u: goto label_7F2DF6A8;
    case 0x7F2DF6ACu: goto label_7F2DF6AC;
    case 0x7F2DF6B0u: goto label_7F2DF6B0;
    case 0x7F2DF6B4u: goto label_7F2DF6B4;
    case 0x7F2DF6B8u: goto label_7F2DF6B8;
    case 0x7F2DF6BCu: goto label_7F2DF6BC;
    case 0x7F2DF6C0u: goto label_7F2DF6C0;
    case 0x7F2DF6C4u: goto label_7F2DF6C4;
    case 0x7F2DF6C8u: goto label_7F2DF6C8;
    case 0x7F2DF6CCu: goto label_7F2DF6CC;
    case 0x7F2DF6D0u: goto label_7F2DF6D0;
    case 0x7F2DF6D4u: goto label_7F2DF6D4;
    case 0x7F2DF6D8u: goto label_7F2DF6D8;
    case 0x7F2DF6DCu: goto label_7F2DF6DC;
    case 0x7F2DF6E0u: goto label_7F2DF6E0;
    case 0x7F2DF6E4u: goto label_7F2DF6E4;
    case 0x7F2DF6E8u: goto label_7F2DF6E8;
    case 0x7F2DF6ECu: goto label_7F2DF6EC;
    case 0x7F2DF6F0u: goto label_7F2DF6F0;
    case 0x7F2DF6F4u: goto label_7F2DF6F4;
    case 0x7F2DF6F8u: goto label_7F2DF6F8;
    case 0x7F2DF6FCu: goto label_7F2DF6FC;
    case 0x7F2DF700u: goto label_7F2DF700;
    case 0x7F2DF704u: goto label_7F2DF704;
    case 0x7F2DF708u: goto label_7F2DF708;
    case 0x7F2DF70Cu: goto label_7F2DF70C;
    case 0x7F2DF710u: goto label_7F2DF710;
    case 0x7F2DF714u: goto label_7F2DF714;
    case 0x7F2DF718u: goto label_7F2DF718;
    case 0x7F2DF71Cu: goto label_7F2DF71C;
    case 0x7F2DF720u: goto label_7F2DF720;
    case 0x7F2DF724u: goto label_7F2DF724;
    case 0x7F2DF728u: goto label_7F2DF728;
    case 0x7F2DF72Cu: goto label_7F2DF72C;
    case 0x7F2DF730u: goto label_7F2DF730;
    case 0x7F2DF734u: goto label_7F2DF734;
    case 0x7F2DF738u: goto label_7F2DF738;
    case 0x7F2DF73Cu: goto label_7F2DF73C;
    case 0x7F2DF740u: goto label_7F2DF740;
    case 0x7F2DF744u: goto label_7F2DF744;
    case 0x7F2DF748u: goto label_7F2DF748;
    case 0x7F2DF74Cu: goto label_7F2DF74C;
    case 0x7F2DF750u: goto label_7F2DF750;
    case 0x7F2DF754u: goto label_7F2DF754;
    case 0x7F2DF758u: goto label_7F2DF758;
    case 0x7F2DF75Cu: goto label_7F2DF75C;
    case 0x7F2DF760u: goto label_7F2DF760;
    case 0x7F2DF764u: goto label_7F2DF764;
    case 0x7F2DF768u: goto label_7F2DF768;
    case 0x7F2DF76Cu: goto label_7F2DF76C;
    case 0x7F2DF770u: goto label_7F2DF770;
    case 0x7F2DF774u: goto label_7F2DF774;
    case 0x7F2DF778u: goto label_7F2DF778;
    case 0x7F2DF77Cu: goto label_7F2DF77C;
    case 0x7F2DF780u: goto label_7F2DF780;
    case 0x7F2DF784u: goto label_7F2DF784;
    case 0x7F2DF788u: goto label_7F2DF788;
    case 0x7F2DF78Cu: goto label_7F2DF78C;
    case 0x7F2DF790u: goto label_7F2DF790;
    case 0x7F2DF794u: goto label_7F2DF794;
    case 0x7F2DF798u: goto label_7F2DF798;
    case 0x7F2DF79Cu: goto label_7F2DF79C;
    case 0x7F2DF7A0u: goto label_7F2DF7A0;
    case 0x7F2DF7A4u: goto label_7F2DF7A4;
    case 0x7F2DF7A8u: goto label_7F2DF7A8;
    case 0x7F2DF7ACu: goto label_7F2DF7AC;
    case 0x7F2DF7B0u: goto label_7F2DF7B0;
    case 0x7F2DF7B4u: goto label_7F2DF7B4;
    case 0x7F2DF7B8u: goto label_7F2DF7B8;
    case 0x7F2DF7BCu: goto label_7F2DF7BC;
    case 0x7F2DF7C0u: goto label_7F2DF7C0;
    case 0x7F2DF7C4u: goto label_7F2DF7C4;
    case 0x7F2DF7C8u: goto label_7F2DF7C8;
    case 0x7F2DF7CCu: goto label_7F2DF7CC;
    case 0x7F2DF7D0u: goto label_7F2DF7D0;
    case 0x7F2DF7D4u: goto label_7F2DF7D4;
    case 0x7F2DF7D8u: goto label_7F2DF7D8;
    case 0x7F2DF7DCu: goto label_7F2DF7DC;
    case 0x7F2DF7E0u: goto label_7F2DF7E0;
    case 0x7F2DF7E4u: goto label_7F2DF7E4;
    case 0x7F2DF7E8u: goto label_7F2DF7E8;
    case 0x7F2DF7ECu: goto label_7F2DF7EC;
    case 0x7F2DF7F0u: goto label_7F2DF7F0;
    case 0x7F2DF7F4u: goto label_7F2DF7F4;
    case 0x7F2DF7F8u: goto label_7F2DF7F8;
    case 0x7F2DF7FCu: goto label_7F2DF7FC;
    case 0x7F2DF800u: goto label_7F2DF800;
    case 0x7F2DF804u: goto label_7F2DF804;
    case 0x7F2DF808u: goto label_7F2DF808;
    case 0x7F2DF80Cu: goto label_7F2DF80C;
    case 0x7F2DF810u: goto label_7F2DF810;
    case 0x7F2DF814u: goto label_7F2DF814;
    case 0x7F2DF818u: goto label_7F2DF818;
    case 0x7F2DF81Cu: goto label_7F2DF81C;
    case 0x7F2DF820u: goto label_7F2DF820;
    case 0x7F2DF824u: goto label_7F2DF824;
    case 0x7F2DF828u: goto label_7F2DF828;
    case 0x7F2DF82Cu: goto label_7F2DF82C;
    case 0x7F2DF830u: goto label_7F2DF830;
    case 0x7F2DF834u: goto label_7F2DF834;
    case 0x7F2DF838u: goto label_7F2DF838;
    case 0x7F2DF83Cu: goto label_7F2DF83C;
    case 0x7F2DF840u: goto label_7F2DF840;
    case 0x7F2DF844u: goto label_7F2DF844;
    case 0x7F2DF848u: goto label_7F2DF848;
    case 0x7F2DF84Cu: goto label_7F2DF84C;
    case 0x7F2DF850u: goto label_7F2DF850;
    case 0x7F2DF854u: goto label_7F2DF854;
    case 0x7F2DF858u: goto label_7F2DF858;
    case 0x7F2DF85Cu: goto label_7F2DF85C;
    case 0x7F2DF860u: goto label_7F2DF860;
    case 0x7F2DF864u: goto label_7F2DF864;
    case 0x7F2DF868u: goto label_7F2DF868;
    case 0x7F2DF86Cu: goto label_7F2DF86C;
    case 0x7F2DF870u: goto label_7F2DF870;
    case 0x7F2DF874u: goto label_7F2DF874;
    case 0x7F2DF878u: goto label_7F2DF878;
    case 0x7F2DF87Cu: goto label_7F2DF87C;
    case 0x7F2DF880u: goto label_7F2DF880;
    case 0x7F2DF884u: goto label_7F2DF884;
    case 0x7F2DF888u: goto label_7F2DF888;
    case 0x7F2DF88Cu: goto label_7F2DF88C;
    case 0x7F2DF890u: goto label_7F2DF890;
    case 0x7F2DF894u: goto label_7F2DF894;
    case 0x7F2DF898u: goto label_7F2DF898;
    case 0x7F2DF89Cu: goto label_7F2DF89C;
    case 0x7F2DF8A0u: goto label_7F2DF8A0;
    case 0x7F2DF8A4u: goto label_7F2DF8A4;
    case 0x7F2DF8A8u: goto label_7F2DF8A8;
    case 0x7F2DF8ACu: goto label_7F2DF8AC;
    case 0x7F2DF8B0u: goto label_7F2DF8B0;
    case 0x7F2DF8B4u: goto label_7F2DF8B4;
    case 0x7F2DF8B8u: goto label_7F2DF8B8;
    case 0x7F2DF8BCu: goto label_7F2DF8BC;
    case 0x7F2DF8C0u: goto label_7F2DF8C0;
    case 0x7F2DF8C4u: goto label_7F2DF8C4;
    case 0x7F2DF8C8u: goto label_7F2DF8C8;
    case 0x7F2DF8CCu: goto label_7F2DF8CC;
    case 0x7F2DF8D0u: goto label_7F2DF8D0;
    case 0x7F2DF8D4u: goto label_7F2DF8D4;
    case 0x7F2DF8D8u: goto label_7F2DF8D8;
    case 0x7F2DF8DCu: goto label_7F2DF8DC;
    case 0x7F2DF8E0u: goto label_7F2DF8E0;
    case 0x7F2DF8E4u: goto label_7F2DF8E4;
    case 0x7F2DF8E8u: goto label_7F2DF8E8;
    case 0x7F2DF8ECu: goto label_7F2DF8EC;
    case 0x7F2DF8F0u: goto label_7F2DF8F0;
    case 0x7F2DF8F4u: goto label_7F2DF8F4;
    case 0x7F2DF8F8u: goto label_7F2DF8F8;
    case 0x7F2DF8FCu: goto label_7F2DF8FC;
    case 0x7F2DF900u: goto label_7F2DF900;
    case 0x7F2DF904u: goto label_7F2DF904;
    case 0x7F2DF908u: goto label_7F2DF908;
    case 0x7F2DF90Cu: goto label_7F2DF90C;
    case 0x7F2DF910u: goto label_7F2DF910;
    case 0x7F2DF914u: goto label_7F2DF914;
    case 0x7F2DF918u: goto label_7F2DF918;
    case 0x7F2DF91Cu: goto label_7F2DF91C;
    case 0x7F2DF920u: goto label_7F2DF920;
    case 0x7F2DF924u: goto label_7F2DF924;
    case 0x7F2DF928u: goto label_7F2DF928;
    case 0x7F2DF92Cu: goto label_7F2DF92C;
    case 0x7F2DF930u: goto label_7F2DF930;
    case 0x7F2DF934u: goto label_7F2DF934;
    case 0x7F2DF938u: goto label_7F2DF938;
    case 0x7F2DF93Cu: goto label_7F2DF93C;
    case 0x7F2DF940u: goto label_7F2DF940;
    case 0x7F2DF944u: goto label_7F2DF944;
    case 0x7F2DF948u: goto label_7F2DF948;
    case 0x7F2DF94Cu: goto label_7F2DF94C;
    case 0x7F2DF950u: goto label_7F2DF950;
    case 0x7F2DF954u: goto label_7F2DF954;
    case 0x7F2DF958u: goto label_7F2DF958;
    case 0x7F2DF95Cu: goto label_7F2DF95C;
    case 0x7F2DF960u: goto label_7F2DF960;
    case 0x7F2DF964u: goto label_7F2DF964;
    case 0x7F2DF968u: goto label_7F2DF968;
    case 0x7F2DF96Cu: goto label_7F2DF96C;
    case 0x7F2DF970u: goto label_7F2DF970;
    case 0x7F2DF974u: goto label_7F2DF974;
    case 0x7F2DF978u: goto label_7F2DF978;
    case 0x7F2DF97Cu: goto label_7F2DF97C;
    case 0x7F2DF980u: goto label_7F2DF980;
    case 0x7F2DF984u: goto label_7F2DF984;
    case 0x7F2DF988u: goto label_7F2DF988;
    case 0x7F2DF98Cu: goto label_7F2DF98C;
    case 0x7F2DF990u: goto label_7F2DF990;
    case 0x7F2DF994u: goto label_7F2DF994;
    case 0x7F2DF998u: goto label_7F2DF998;
    case 0x7F2DF99Cu: goto label_7F2DF99C;
    case 0x7F2DF9A0u: goto label_7F2DF9A0;
    case 0x7F2DF9A4u: goto label_7F2DF9A4;
    case 0x7F2DF9A8u: goto label_7F2DF9A8;
    case 0x7F2DF9ACu: goto label_7F2DF9AC;
    case 0x7F2DF9B0u: goto label_7F2DF9B0;
    case 0x7F2DF9B4u: goto label_7F2DF9B4;
    case 0x7F2DF9B8u: goto label_7F2DF9B8;
    case 0x7F2DF9BCu: goto label_7F2DF9BC;
    case 0x7F2DF9C0u: goto label_7F2DF9C0;
    case 0x7F2DF9C4u: goto label_7F2DF9C4;
    case 0x7F2DF9C8u: goto label_7F2DF9C8;
    case 0x7F2DF9CCu: goto label_7F2DF9CC;
    case 0x7F2DF9D0u: goto label_7F2DF9D0;
    case 0x7F2DF9D4u: goto label_7F2DF9D4;
    case 0x7F2DF9D8u: goto label_7F2DF9D8;
    case 0x7F2DF9DCu: goto label_7F2DF9DC;
    case 0x7F2DF9E0u: goto label_7F2DF9E0;
    case 0x7F2DF9E4u: goto label_7F2DF9E4;
    case 0x7F2DF9E8u: goto label_7F2DF9E8;
    case 0x7F2DF9ECu: goto label_7F2DF9EC;
    case 0x7F2DF9F0u: goto label_7F2DF9F0;
    case 0x7F2DF9F4u: goto label_7F2DF9F4;
    case 0x7F2DF9F8u: goto label_7F2DF9F8;
    case 0x7F2DF9FCu: goto label_7F2DF9FC;
    case 0x7F2DFA00u: goto label_7F2DFA00;
    case 0x7F2DFA04u: goto label_7F2DFA04;
    case 0x7F2DFA08u: goto label_7F2DFA08;
    case 0x7F2DFA0Cu: goto label_7F2DFA0C;
    case 0x7F2DFA10u: goto label_7F2DFA10;
    case 0x7F2DFA14u: goto label_7F2DFA14;
    case 0x7F2DFA18u: goto label_7F2DFA18;
    case 0x7F2DFA1Cu: goto label_7F2DFA1C;
    case 0x7F2DFA20u: goto label_7F2DFA20;
    case 0x7F2DFA24u: goto label_7F2DFA24;
    case 0x7F2DFA28u: goto label_7F2DFA28;
    case 0x7F2DFA2Cu: goto label_7F2DFA2C;
    case 0x7F2DFA30u: goto label_7F2DFA30;
    case 0x7F2DFA34u: goto label_7F2DFA34;
    case 0x7F2DFA38u: goto label_7F2DFA38;
    case 0x7F2DFA3Cu: goto label_7F2DFA3C;
    case 0x7F2DFA40u: goto label_7F2DFA40;
    case 0x7F2DFA44u: goto label_7F2DFA44;
    case 0x7F2DFA48u: goto label_7F2DFA48;
    case 0x7F2DFA4Cu: goto label_7F2DFA4C;
    case 0x7F2DFA50u: goto label_7F2DFA50;
    case 0x7F2DFA54u: goto label_7F2DFA54;
    case 0x7F2DFA58u: goto label_7F2DFA58;
    case 0x7F2DFA5Cu: goto label_7F2DFA5C;
    case 0x7F2DFA60u: goto label_7F2DFA60;
    case 0x7F2DFA64u: goto label_7F2DFA64;
    case 0x7F2DFA68u: goto label_7F2DFA68;
    case 0x7F2DFA6Cu: goto label_7F2DFA6C;
    case 0x7F2DFA70u: goto label_7F2DFA70;
    case 0x7F2DFA74u: goto label_7F2DFA74;
    case 0x7F2DFA78u: goto label_7F2DFA78;
    case 0x7F2DFA7Cu: goto label_7F2DFA7C;
    case 0x7F2DFA80u: goto label_7F2DFA80;
    case 0x7F2DFA84u: goto label_7F2DFA84;
    case 0x7F2DFA88u: goto label_7F2DFA88;
    case 0x7F2DFA8Cu: goto label_7F2DFA8C;
    case 0x7F2DFA90u: goto label_7F2DFA90;
    case 0x7F2DFA94u: goto label_7F2DFA94;
    case 0x7F2DFA98u: goto label_7F2DFA98;
    case 0x7F2DFA9Cu: goto label_7F2DFA9C;
    case 0x7F2DFAA0u: goto label_7F2DFAA0;
    case 0x7F2DFAA4u: goto label_7F2DFAA4;
    case 0x7F2DFAA8u: goto label_7F2DFAA8;
    case 0x7F2DFAACu: goto label_7F2DFAAC;
    case 0x7F2DFAB0u: goto label_7F2DFAB0;
    case 0x7F2DFAB4u: goto label_7F2DFAB4;
    case 0x7F2DFAB8u: goto label_7F2DFAB8;
    case 0x7F2DFABCu: goto label_7F2DFABC;
    case 0x7F2DFAC0u: goto label_7F2DFAC0;
    case 0x7F2DFAC4u: goto label_7F2DFAC4;
    case 0x7F2DFAC8u: goto label_7F2DFAC8;
    case 0x7F2DFACCu: goto label_7F2DFACC;
    case 0x7F2DFAD0u: goto label_7F2DFAD0;
    case 0x7F2DFAD4u: goto label_7F2DFAD4;
    case 0x7F2DFAD8u: goto label_7F2DFAD8;
    case 0x7F2DFADCu: goto label_7F2DFADC;
    case 0x7F2DFAE0u: goto label_7F2DFAE0;
    case 0x7F2DFAE4u: goto label_7F2DFAE4;
    case 0x7F2DFAE8u: goto label_7F2DFAE8;
    case 0x7F2DFAECu: goto label_7F2DFAEC;
    case 0x7F2DFAF0u: goto label_7F2DFAF0;
    case 0x7F2DFAF4u: goto label_7F2DFAF4;
    case 0x7F2DFAF8u: goto label_7F2DFAF8;
    case 0x7F2DFAFCu: goto label_7F2DFAFC;
    case 0x7F2DFB00u: goto label_7F2DFB00;
    case 0x7F2DFB04u: goto label_7F2DFB04;
    case 0x7F2DFB08u: goto label_7F2DFB08;
    case 0x7F2DFB0Cu: goto label_7F2DFB0C;
    case 0x7F2DFB10u: goto label_7F2DFB10;
    case 0x7F2DFB14u: goto label_7F2DFB14;
    case 0x7F2DFB18u: goto label_7F2DFB18;
    case 0x7F2DFB1Cu: goto label_7F2DFB1C;
    case 0x7F2DFB20u: goto label_7F2DFB20;
    case 0x7F2DFB24u: goto label_7F2DFB24;
    case 0x7F2DFB28u: goto label_7F2DFB28;
    case 0x7F2DFB2Cu: goto label_7F2DFB2C;
    case 0x7F2DFB30u: goto label_7F2DFB30;
    case 0x7F2DFB34u: goto label_7F2DFB34;
    case 0x7F2DFB38u: goto label_7F2DFB38;
    case 0x7F2DFB3Cu: goto label_7F2DFB3C;
    case 0x7F2DFB40u: goto label_7F2DFB40;
    case 0x7F2DFB44u: goto label_7F2DFB44;
    case 0x7F2DFB48u: goto label_7F2DFB48;
    case 0x7F2DFB4Cu: goto label_7F2DFB4C;
    case 0x7F2DFB50u: goto label_7F2DFB50;
    case 0x7F2DFB54u: goto label_7F2DFB54;
    case 0x7F2DFB58u: goto label_7F2DFB58;
    case 0x7F2DFB5Cu: goto label_7F2DFB5C;
    case 0x7F2DFB60u: goto label_7F2DFB60;
    case 0x7F2DFB64u: goto label_7F2DFB64;
    case 0x7F2DFB68u: goto label_7F2DFB68;
    case 0x7F2DFB6Cu: goto label_7F2DFB6C;
    case 0x7F2DFB70u: goto label_7F2DFB70;
    case 0x7F2DFB74u: goto label_7F2DFB74;
    case 0x7F2DFB78u: goto label_7F2DFB78;
    case 0x7F2DFB7Cu: goto label_7F2DFB7C;
    case 0x7F2DFB80u: goto label_7F2DFB80;
    case 0x7F2DFB84u: goto label_7F2DFB84;
    case 0x7F2DFB88u: goto label_7F2DFB88;
    case 0x7F2DFB8Cu: goto label_7F2DFB8C;
    case 0x7F2DFB90u: goto label_7F2DFB90;
    case 0x7F2DFB94u: goto label_7F2DFB94;
    case 0x7F2DFB98u: goto label_7F2DFB98;
    case 0x7F2DFB9Cu: goto label_7F2DFB9C;
    case 0x7F2DFBA0u: goto label_7F2DFBA0;
    case 0x7F2DFBA4u: goto label_7F2DFBA4;
    case 0x7F2DFBA8u: goto label_7F2DFBA8;
    case 0x7F2DFBACu: goto label_7F2DFBAC;
    case 0x7F2DFBB0u: goto label_7F2DFBB0;
    case 0x7F2DFBB4u: goto label_7F2DFBB4;
    case 0x7F2DFBB8u: goto label_7F2DFBB8;
    case 0x7F2DFBBCu: goto label_7F2DFBBC;
    case 0x7F2DFBC0u: goto label_7F2DFBC0;
    case 0x7F2DFBC4u: goto label_7F2DFBC4;
    case 0x7F2DFBC8u: goto label_7F2DFBC8;
    case 0x7F2DFBCCu: goto label_7F2DFBCC;
    case 0x7F2DFBD0u: goto label_7F2DFBD0;
    case 0x7F2DFBD4u: goto label_7F2DFBD4;
    case 0x7F2DFBD8u: goto label_7F2DFBD8;
    case 0x7F2DFBDCu: goto label_7F2DFBDC;
    case 0x7F2DFBE0u: goto label_7F2DFBE0;
    case 0x7F2DFBE4u: goto label_7F2DFBE4;
    case 0x7F2DFBE8u: goto label_7F2DFBE8;
    case 0x7F2DFBECu: goto label_7F2DFBEC;
    case 0x7F2DFBF0u: goto label_7F2DFBF0;
    case 0x7F2DFBF4u: goto label_7F2DFBF4;
    case 0x7F2DFBF8u: goto label_7F2DFBF8;
    case 0x7F2DFBFCu: goto label_7F2DFBFC;
    case 0x7F2DFC00u: goto label_7F2DFC00;
    case 0x7F2DFC04u: goto label_7F2DFC04;
    case 0x7F2DFC08u: goto label_7F2DFC08;
    case 0x7F2DFC0Cu: goto label_7F2DFC0C;
    case 0x7F2DFC10u: goto label_7F2DFC10;
    case 0x7F2DFC14u: goto label_7F2DFC14;
    case 0x7F2DFC18u: goto label_7F2DFC18;
    case 0x7F2DFC1Cu: goto label_7F2DFC1C;
    case 0x7F2DFC20u: goto label_7F2DFC20;
    case 0x7F2DFC24u: goto label_7F2DFC24;
    case 0x7F2DFC28u: goto label_7F2DFC28;
    case 0x7F2DFC2Cu: goto label_7F2DFC2C;
    case 0x7F2DFC30u: goto label_7F2DFC30;
    case 0x7F2DFC34u: goto label_7F2DFC34;
    case 0x7F2DFC38u: goto label_7F2DFC38;
    case 0x7F2DFC3Cu: goto label_7F2DFC3C;
    case 0x7F2DFC40u: goto label_7F2DFC40;
    case 0x7F2DFC44u: goto label_7F2DFC44;
    case 0x7F2DFC48u: goto label_7F2DFC48;
    case 0x7F2DFC4Cu: goto label_7F2DFC4C;
    case 0x7F2DFC50u: goto label_7F2DFC50;
    case 0x7F2DFC54u: goto label_7F2DFC54;
    case 0x7F2DFC58u: goto label_7F2DFC58;
    case 0x7F2DFC5Cu: goto label_7F2DFC5C;
    case 0x7F2DFC60u: goto label_7F2DFC60;
    case 0x7F2DFC64u: goto label_7F2DFC64;
    case 0x7F2DFC68u: goto label_7F2DFC68;
    case 0x7F2DFC6Cu: goto label_7F2DFC6C;
    case 0x7F2DFC70u: goto label_7F2DFC70;
    case 0x7F2DFC74u: goto label_7F2DFC74;
    case 0x7F2DFC78u: goto label_7F2DFC78;
    case 0x7F2DFC7Cu: goto label_7F2DFC7C;
    case 0x7F2DFC80u: goto label_7F2DFC80;
    case 0x7F2DFC84u: goto label_7F2DFC84;
    case 0x7F2DFC88u: goto label_7F2DFC88;
    case 0x7F2DFC8Cu: goto label_7F2DFC8C;
    case 0x7F2DFC90u: goto label_7F2DFC90;
    case 0x7F2DFC94u: goto label_7F2DFC94;
    case 0x7F2DFC98u: goto label_7F2DFC98;
    case 0x7F2DFC9Cu: goto label_7F2DFC9C;
    case 0x7F2DFCA0u: goto label_7F2DFCA0;
    case 0x7F2DFCA4u: goto label_7F2DFCA4;
    case 0x7F2DFCA8u: goto label_7F2DFCA8;
    case 0x7F2DFCACu: goto label_7F2DFCAC;
    case 0x7F2DFCB0u: goto label_7F2DFCB0;
    case 0x7F2DFCB4u: goto label_7F2DFCB4;
    case 0x7F2DFCB8u: goto label_7F2DFCB8;
    case 0x7F2DFCBCu: goto label_7F2DFCBC;
    case 0x7F2DFCC0u: goto label_7F2DFCC0;
    case 0x7F2DFCC4u: goto label_7F2DFCC4;
    case 0x7F2DFCC8u: goto label_7F2DFCC8;
    case 0x7F2DFCCCu: goto label_7F2DFCCC;
    case 0x7F2DFCD0u: goto label_7F2DFCD0;
    case 0x7F2DFCD4u: goto label_7F2DFCD4;
    case 0x7F2DFCD8u: goto label_7F2DFCD8;
    case 0x7F2DFCDCu: goto label_7F2DFCDC;
    case 0x7F2DFCE0u: goto label_7F2DFCE0;
    case 0x7F2DFCE4u: goto label_7F2DFCE4;
    case 0x7F2DFCE8u: goto label_7F2DFCE8;
    case 0x7F2DFCECu: goto label_7F2DFCEC;
    case 0x7F2DFCF0u: goto label_7F2DFCF0;
    case 0x7F2DFCF4u: goto label_7F2DFCF4;
    case 0x7F2DFCF8u: goto label_7F2DFCF8;
    case 0x7F2DFCFCu: goto label_7F2DFCFC;
    case 0x7F2DFD00u: goto label_7F2DFD00;
    case 0x7F2DFD04u: goto label_7F2DFD04;
    case 0x7F2DFD08u: goto label_7F2DFD08;
    case 0x7F2DFD0Cu: goto label_7F2DFD0C;
    case 0x7F2DFD10u: goto label_7F2DFD10;
    case 0x7F2DFD14u: goto label_7F2DFD14;
    case 0x7F2DFD18u: goto label_7F2DFD18;
    case 0x7F2DFD1Cu: goto label_7F2DFD1C;
    case 0x7F2DFD20u: goto label_7F2DFD20;
    case 0x7F2DFD24u: goto label_7F2DFD24;
    case 0x7F2DFD28u: goto label_7F2DFD28;
    case 0x7F2DFD2Cu: goto label_7F2DFD2C;
    case 0x7F2DFD30u: goto label_7F2DFD30;
    case 0x7F2DFD34u: goto label_7F2DFD34;
    case 0x7F2DFD38u: goto label_7F2DFD38;
    case 0x7F2DFD3Cu: goto label_7F2DFD3C;
    case 0x7F2DFD40u: goto label_7F2DFD40;
    case 0x7F2DFD44u: goto label_7F2DFD44;
    case 0x7F2DFD48u: goto label_7F2DFD48;
    case 0x7F2DFD4Cu: goto label_7F2DFD4C;
    case 0x7F2DFD50u: goto label_7F2DFD50;
    case 0x7F2DFD54u: goto label_7F2DFD54;
    case 0x7F2DFD58u: goto label_7F2DFD58;
    case 0x7F2DFD5Cu: goto label_7F2DFD5C;
    case 0x7F2DFD60u: goto label_7F2DFD60;
    case 0x7F2DFD64u: goto label_7F2DFD64;
    case 0x7F2DFD68u: goto label_7F2DFD68;
    case 0x7F2DFD6Cu: goto label_7F2DFD6C;
    case 0x7F2DFD70u: goto label_7F2DFD70;
    case 0x7F2DFD74u: goto label_7F2DFD74;
    case 0x7F2DFD78u: goto label_7F2DFD78;
    case 0x7F2DFD7Cu: goto label_7F2DFD7C;
    case 0x7F2DFD80u: goto label_7F2DFD80;
    case 0x7F2DFD84u: goto label_7F2DFD84;
    case 0x7F2DFD88u: goto label_7F2DFD88;
    case 0x7F2DFD8Cu: goto label_7F2DFD8C;
    case 0x7F2DFD90u: goto label_7F2DFD90;
    case 0x7F2DFD94u: goto label_7F2DFD94;
    case 0x7F2DFD98u: goto label_7F2DFD98;
    case 0x7F2DFD9Cu: goto label_7F2DFD9C;
    case 0x7F2DFDA0u: goto label_7F2DFDA0;
    case 0x7F2DFDA4u: goto label_7F2DFDA4;
    case 0x7F2DFDA8u: goto label_7F2DFDA8;
    case 0x7F2DFDACu: goto label_7F2DFDAC;
    case 0x7F2DFDB0u: goto label_7F2DFDB0;
    case 0x7F2DFDB4u: goto label_7F2DFDB4;
    case 0x7F2DFDB8u: goto label_7F2DFDB8;
    case 0x7F2DFDBCu: goto label_7F2DFDBC;
    case 0x7F2DFDC0u: goto label_7F2DFDC0;
    case 0x7F2DFDC4u: goto label_7F2DFDC4;
    case 0x7F2DFDC8u: goto label_7F2DFDC8;
    case 0x7F2DFDCCu: goto label_7F2DFDCC;
    case 0x7F2DFDD0u: goto label_7F2DFDD0;
    case 0x7F2DFDD4u: goto label_7F2DFDD4;
    case 0x7F2DFDD8u: goto label_7F2DFDD8;
    case 0x7F2DFDDCu: goto label_7F2DFDDC;
    case 0x7F2DFDE0u: goto label_7F2DFDE0;
    case 0x7F2DFDE4u: goto label_7F2DFDE4;
    case 0x7F2DFDE8u: goto label_7F2DFDE8;
    case 0x7F2DFDECu: goto label_7F2DFDEC;
    case 0x7F2DFDF0u: goto label_7F2DFDF0;
    case 0x7F2DFDF4u: goto label_7F2DFDF4;
    case 0x7F2DFDF8u: goto label_7F2DFDF8;
    case 0x7F2DFDFCu: goto label_7F2DFDFC;
    case 0x7F2DFE00u: goto label_7F2DFE00;
    case 0x7F2DFE04u: goto label_7F2DFE04;
    case 0x7F2DFE08u: goto label_7F2DFE08;
    case 0x7F2DFE0Cu: goto label_7F2DFE0C;
    case 0x7F2DFE10u: goto label_7F2DFE10;
    case 0x7F2DFE14u: goto label_7F2DFE14;
    case 0x7F2DFE18u: goto label_7F2DFE18;
    case 0x7F2DFE1Cu: goto label_7F2DFE1C;
    case 0x7F2DFE20u: goto label_7F2DFE20;
    case 0x7F2DFE24u: goto label_7F2DFE24;
    case 0x7F2DFE28u: goto label_7F2DFE28;
    case 0x7F2DFE2Cu: goto label_7F2DFE2C;
    case 0x7F2DFE30u: goto label_7F2DFE30;
    case 0x7F2DFE34u: goto label_7F2DFE34;
    case 0x7F2DFE38u: goto label_7F2DFE38;
    case 0x7F2DFE3Cu: goto label_7F2DFE3C;
    case 0x7F2DFE40u: goto label_7F2DFE40;
    case 0x7F2DFE44u: goto label_7F2DFE44;
    case 0x7F2DFE48u: goto label_7F2DFE48;
    case 0x7F2DFE4Cu: goto label_7F2DFE4C;
    case 0x7F2DFE50u: goto label_7F2DFE50;
    case 0x7F2DFE54u: goto label_7F2DFE54;
    case 0x7F2DFE58u: goto label_7F2DFE58;
    case 0x7F2DFE5Cu: goto label_7F2DFE5C;
    case 0x7F2DFE60u: goto label_7F2DFE60;
    case 0x7F2DFE64u: goto label_7F2DFE64;
    case 0x7F2DFE68u: goto label_7F2DFE68;
    case 0x7F2DFE6Cu: goto label_7F2DFE6C;
    case 0x7F2DFE70u: goto label_7F2DFE70;
    case 0x7F2DFE74u: goto label_7F2DFE74;
    case 0x7F2DFE78u: goto label_7F2DFE78;
    case 0x7F2DFE7Cu: goto label_7F2DFE7C;
    case 0x7F2DFE80u: goto label_7F2DFE80;
    case 0x7F2DFE84u: goto label_7F2DFE84;
    case 0x7F2DFE88u: goto label_7F2DFE88;
    case 0x7F2DFE8Cu: goto label_7F2DFE8C;
    case 0x7F2DFE90u: goto label_7F2DFE90;
    case 0x7F2DFE94u: goto label_7F2DFE94;
    case 0x7F2DFE98u: goto label_7F2DFE98;
    case 0x7F2DFE9Cu: goto label_7F2DFE9C;
    case 0x7F2DFEA0u: goto label_7F2DFEA0;
    case 0x7F2DFEA4u: goto label_7F2DFEA4;
    case 0x7F2DFEA8u: goto label_7F2DFEA8;
    case 0x7F2DFEACu: goto label_7F2DFEAC;
    case 0x7F2DFEB0u: goto label_7F2DFEB0;
    case 0x7F2DFEB4u: goto label_7F2DFEB4;
    case 0x7F2DFEB8u: goto label_7F2DFEB8;
    case 0x7F2DFEBCu: goto label_7F2DFEBC;
    case 0x7F2DFEC0u: goto label_7F2DFEC0;
    case 0x7F2DFEC4u: goto label_7F2DFEC4;
    case 0x7F2DFEC8u: goto label_7F2DFEC8;
    case 0x7F2DFECCu: goto label_7F2DFECC;
    case 0x7F2DFED0u: goto label_7F2DFED0;
    case 0x7F2DFED4u: goto label_7F2DFED4;
    case 0x7F2DFED8u: goto label_7F2DFED8;
    case 0x7F2DFEDCu: goto label_7F2DFEDC;
    case 0x7F2DFEE0u: goto label_7F2DFEE0;
    case 0x7F2DFEE4u: goto label_7F2DFEE4;
    case 0x7F2DFEE8u: goto label_7F2DFEE8;
    case 0x7F2DFEECu: goto label_7F2DFEEC;
    case 0x7F2DFEF0u: goto label_7F2DFEF0;
    case 0x7F2DFEF4u: goto label_7F2DFEF4;
    case 0x7F2DFEF8u: goto label_7F2DFEF8;
    case 0x7F2DFEFCu: goto label_7F2DFEFC;
    case 0x7F2DFF00u: goto label_7F2DFF00;
    case 0x7F2DFF04u: goto label_7F2DFF04;
    case 0x7F2DFF08u: goto label_7F2DFF08;
    case 0x7F2DFF0Cu: goto label_7F2DFF0C;
    case 0x7F2DFF10u: goto label_7F2DFF10;
    case 0x7F2DFF14u: goto label_7F2DFF14;
    case 0x7F2DFF18u: goto label_7F2DFF18;
    case 0x7F2DFF1Cu: goto label_7F2DFF1C;
    case 0x7F2DFF20u: goto label_7F2DFF20;
    case 0x7F2DFF24u: goto label_7F2DFF24;
    case 0x7F2DFF28u: goto label_7F2DFF28;
    case 0x7F2DFF2Cu: goto label_7F2DFF2C;
    case 0x7F2DFF30u: goto label_7F2DFF30;
    case 0x7F2DFF34u: goto label_7F2DFF34;
    case 0x7F2DFF38u: goto label_7F2DFF38;
    case 0x7F2DFF3Cu: goto label_7F2DFF3C;
    case 0x7F2DFF40u: goto label_7F2DFF40;
    case 0x7F2DFF44u: goto label_7F2DFF44;
    case 0x7F2DFF48u: goto label_7F2DFF48;
    case 0x7F2DFF4Cu: goto label_7F2DFF4C;
    case 0x7F2DFF50u: goto label_7F2DFF50;
    case 0x7F2DFF54u: goto label_7F2DFF54;
    case 0x7F2DFF58u: goto label_7F2DFF58;
    case 0x7F2DFF5Cu: goto label_7F2DFF5C;
    case 0x7F2DFF60u: goto label_7F2DFF60;
    case 0x7F2DFF64u: goto label_7F2DFF64;
    case 0x7F2DFF68u: goto label_7F2DFF68;
    case 0x7F2DFF6Cu: goto label_7F2DFF6C;
    case 0x7F2DFF70u: goto label_7F2DFF70;
    case 0x7F2DFF74u: goto label_7F2DFF74;
    case 0x7F2DFF78u: goto label_7F2DFF78;
    case 0x7F2DFF7Cu: goto label_7F2DFF7C;
    case 0x7F2DFF80u: goto label_7F2DFF80;
    case 0x7F2DFF84u: goto label_7F2DFF84;
    case 0x7F2DFF88u: goto label_7F2DFF88;
    case 0x7F2DFF8Cu: goto label_7F2DFF8C;
    case 0x7F2DFF90u: goto label_7F2DFF90;
    case 0x7F2DFF94u: goto label_7F2DFF94;
    case 0x7F2DFF98u: goto label_7F2DFF98;
    case 0x7F2DFF9Cu: goto label_7F2DFF9C;
    case 0x7F2DFFA0u: goto label_7F2DFFA0;
    case 0x7F2DFFA4u: goto label_7F2DFFA4;
    case 0x7F2DFFA8u: goto label_7F2DFFA8;
    case 0x7F2DFFACu: goto label_7F2DFFAC;
    case 0x7F2DFFB0u: goto label_7F2DFFB0;
    case 0x7F2DFFB4u: goto label_7F2DFFB4;
    case 0x7F2DFFB8u: goto label_7F2DFFB8;
    case 0x7F2DFFBCu: goto label_7F2DFFBC;
    case 0x7F2DFFC0u: goto label_7F2DFFC0;
    case 0x7F2DFFC4u: goto label_7F2DFFC4;
    case 0x7F2DFFC8u: goto label_7F2DFFC8;
    case 0x7F2DFFCCu: goto label_7F2DFFCC;
    case 0x7F2DFFD0u: goto label_7F2DFFD0;
    case 0x7F2DFFD4u: goto label_7F2DFFD4;
    case 0x7F2DFFD8u: goto label_7F2DFFD8;
    case 0x7F2DFFDCu: goto label_7F2DFFDC;
    case 0x7F2DFFE0u: goto label_7F2DFFE0;
    case 0x7F2DFFE4u: goto label_7F2DFFE4;
    case 0x7F2DFFE8u: goto label_7F2DFFE8;
    case 0x7F2DFFECu: goto label_7F2DFFEC;
    case 0x7F2DFFF0u: goto label_7F2DFFF0;
    case 0x7F2DFFF4u: goto label_7F2DFFF4;
    case 0x7F2DFFF8u: goto label_7F2DFFF8;
    case 0x7F2DFFFCu: goto label_7F2DFFFC;
    case 0x7F2E0000u: goto label_7F2E0000;
    case 0x7F2E0004u: goto label_7F2E0004;
    case 0x7F2E0008u: goto label_7F2E0008;
    case 0x7F2E000Cu: goto label_7F2E000C;
    case 0x7F2E0010u: goto label_7F2E0010;
    case 0x7F2E0014u: goto label_7F2E0014;
    case 0x7F2E0018u: goto label_7F2E0018;
    case 0x7F2E001Cu: goto label_7F2E001C;
    case 0x7F2E0020u: goto label_7F2E0020;
    case 0x7F2E0024u: goto label_7F2E0024;
    case 0x7F2E0028u: goto label_7F2E0028;
    case 0x7F2E002Cu: goto label_7F2E002C;
    case 0x7F2E0030u: goto label_7F2E0030;
    case 0x7F2E0034u: goto label_7F2E0034;
    case 0x7F2E0038u: goto label_7F2E0038;
    case 0x7F2E003Cu: goto label_7F2E003C;
    case 0x7F2E0040u: goto label_7F2E0040;
    case 0x7F2E0044u: goto label_7F2E0044;
    case 0x7F2E0048u: goto label_7F2E0048;
    case 0x7F2E004Cu: goto label_7F2E004C;
    case 0x7F2E0050u: goto label_7F2E0050;
    case 0x7F2E0054u: goto label_7F2E0054;
    case 0x7F2E0058u: goto label_7F2E0058;
    case 0x7F2E005Cu: goto label_7F2E005C;
    case 0x7F2E0060u: goto label_7F2E0060;
    case 0x7F2E0064u: goto label_7F2E0064;
    case 0x7F2E0068u: goto label_7F2E0068;
    case 0x7F2E006Cu: goto label_7F2E006C;
    case 0x7F2E0070u: goto label_7F2E0070;
    case 0x7F2E0074u: goto label_7F2E0074;
    case 0x7F2E0078u: goto label_7F2E0078;
    case 0x7F2E007Cu: goto label_7F2E007C;
    case 0x7F2E0080u: goto label_7F2E0080;
    case 0x7F2E0084u: goto label_7F2E0084;
    case 0x7F2E0088u: goto label_7F2E0088;
    case 0x7F2E008Cu: goto label_7F2E008C;
    case 0x7F2E0090u: goto label_7F2E0090;
    case 0x7F2E0094u: goto label_7F2E0094;
    case 0x7F2E0098u: goto label_7F2E0098;
    case 0x7F2E009Cu: goto label_7F2E009C;
    case 0x7F2E00A0u: goto label_7F2E00A0;
    case 0x7F2E00A4u: goto label_7F2E00A4;
    case 0x7F2E00A8u: goto label_7F2E00A8;
    case 0x7F2E00ACu: goto label_7F2E00AC;
    case 0x7F2E00B0u: goto label_7F2E00B0;
    case 0x7F2E00B4u: goto label_7F2E00B4;
    case 0x7F2E00B8u: goto label_7F2E00B8;
    case 0x7F2E00BCu: goto label_7F2E00BC;
    case 0x7F2E00C0u: goto label_7F2E00C0;
    case 0x7F2E00C4u: goto label_7F2E00C4;
    case 0x7F2E00C8u: goto label_7F2E00C8;
    case 0x7F2E00CCu: goto label_7F2E00CC;
    case 0x7F2E00D0u: goto label_7F2E00D0;
    case 0x7F2E00D4u: goto label_7F2E00D4;
    case 0x7F2E00D8u: goto label_7F2E00D8;
    case 0x7F2E00DCu: goto label_7F2E00DC;
    case 0x7F2E00E0u: goto label_7F2E00E0;
    case 0x7F2E00E4u: goto label_7F2E00E4;
    case 0x7F2E00E8u: goto label_7F2E00E8;
    default: return;
    }
label_7F2DC0EC:
    ctx->pc = 0x7F2DC0ECu;
    ctx->downcount -= 10;
    // 7F2DC0EC: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC0F0:
    ctx->pc = 0x7F2DC0F0u;
    // 7F2DC0F0: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC0F4:
    ctx->pc = 0x7F2DC0F4u;
    // 7F2DC0F4: lwz     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC0F8:
    ctx->pc = 0x7F2DC0F8u;
    // 7F2DC0F8: stw     r5, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC0FC:
    ctx->pc = 0x7F2DC0FCu;
    // 7F2DC0FC: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC100:
    ctx->pc = 0x7F2DC100u;
    // 7F2DC100: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC104:
    ctx->pc = 0x7F2DC104u;
    // 7F2DC104: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC108:
    ctx->pc = 0x7F2DC108u;
    // 7F2DC108: stw     r5, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC10C:
    ctx->pc = 0x7F2DC10Cu;
    // 7F2DC10C: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC110:
    ctx->pc = 0x7F2DC110u;
    // 7F2DC110: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC114u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC114:
    ctx->pc = 0x7F2DC114u;
    ctx->downcount -= 3;
    // 7F2DC114: stw     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC118:
    ctx->pc = 0x7F2DC118u;
    // 7F2DC118: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F2DC11C:
    ctx->pc = 0x7F2DC11Cu;
    // 7F2DC11C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC120u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC120:
    ctx->pc = 0x7F2DC120u;
    ctx->downcount -= 2;
    // 7F2DC120: cmplwi  r3, 0x0000
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

label_7F2DC124:
    ctx->pc = 0x7F2DC124u;
    // 7F2DC124: bc    12, 2, 0x7F2DC20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC20C;
        }
    }

label_7F2DC128:
    ctx->pc = 0x7F2DC128u;
    ctx->downcount -= 1;
    // 7F2DC128: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DC12Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DC12C:
    ctx->pc = 0x7F2DC12Cu;
    ctx->downcount -= 2;
    // 7F2DC12C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2DC130:
    ctx->pc = 0x7F2DC130u;
    // 7F2DC130: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2DC134u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2DC134:
    ctx->pc = 0x7F2DC134u;
    ctx->downcount -= 25;
    // 7F2DC134: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC138:
    ctx->pc = 0x7F2DC138u;
    // 7F2DC138: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DC13C:
    ctx->pc = 0x7F2DC13Cu;
    // 7F2DC13C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC140:
    ctx->pc = 0x7F2DC140u;
    // 7F2DC140: stw     r0, 408(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC144:
    ctx->pc = 0x7F2DC144u;
    // 7F2DC144: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2DC148:
    ctx->pc = 0x7F2DC148u;
    // 7F2DC148: lfd     f1, 29336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC148u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29336);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC14C:
    ctx->pc = 0x7F2DC14Cu;
    // 7F2DC14C: stw     r3, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC150:
    ctx->pc = 0x7F2DC150u;
    // 7F2DC150: lfd     f0, 408(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC154:
    ctx->pc = 0x7F2DC154u;
    // 7F2DC154: stw     r0, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC158:
    ctx->pc = 0x7F2DC158u;
    // 7F2DC158: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC158u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC15C:
    ctx->pc = 0x7F2DC15Cu;
    // 7F2DC15C: stw     r0, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC160:
    ctx->pc = 0x7F2DC160u;
    // 7F2DC160: stfs     f0, 292(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC160u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC164:
    ctx->pc = 0x7F2DC164u;
    // 7F2DC164: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC168:
    ctx->pc = 0x7F2DC168u;
    // 7F2DC168: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC16C:
    ctx->pc = 0x7F2DC16Cu;
    // 7F2DC16C: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC170:
    ctx->pc = 0x7F2DC170u;
    // 7F2DC170: lfd     f0, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC174:
    ctx->pc = 0x7F2DC174u;
    // 7F2DC174: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC174u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC178:
    ctx->pc = 0x7F2DC178u;
    // 7F2DC178: stfs     f0, 296(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC178u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC17C:
    ctx->pc = 0x7F2DC17Cu;
    // 7F2DC17C: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC180:
    ctx->pc = 0x7F2DC180u;
    // 7F2DC180: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC184:
    ctx->pc = 0x7F2DC184u;
    // 7F2DC184: stw     r0, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC188:
    ctx->pc = 0x7F2DC188u;
    // 7F2DC188: lfd     f0, 392(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC18C:
    ctx->pc = 0x7F2DC18Cu;
    // 7F2DC18C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC18Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC190:
    ctx->pc = 0x7F2DC190u;
    // 7F2DC190: stfs     f0, 300(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC190u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC194:
    ctx->pc = 0x7F2DC194u;
    // 7F2DC194: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DC198u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DC198:
    ctx->pc = 0x7F2DC198u;
    ctx->downcount -= 2;
    // 7F2DC198: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2DC19C:
    ctx->pc = 0x7F2DC19Cu;
    // 7F2DC19C: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2DC1A0u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2DC1A0:
    ctx->pc = 0x7F2DC1A0u;
    ctx->downcount -= 27;
    // 7F2DC1A0: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC1A4:
    ctx->pc = 0x7F2DC1A4u;
    // 7F2DC1A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DC1A8:
    ctx->pc = 0x7F2DC1A8u;
    // 7F2DC1A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC1AC:
    ctx->pc = 0x7F2DC1ACu;
    // 7F2DC1AC: stw     r0, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC1B0:
    ctx->pc = 0x7F2DC1B0u;
    // 7F2DC1B0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2DC1B4:
    ctx->pc = 0x7F2DC1B4u;
    // 7F2DC1B4: lfd     f1, 29336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29336);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC1B8:
    ctx->pc = 0x7F2DC1B8u;
    // 7F2DC1B8: stw     r3, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC1BC:
    ctx->pc = 0x7F2DC1BCu;
    // 7F2DC1BC: lfd     f0, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC1C0:
    ctx->pc = 0x7F2DC1C0u;
    // 7F2DC1C0: stw     r0, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC1C4:
    ctx->pc = 0x7F2DC1C4u;
    // 7F2DC1C4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1C4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC1C8:
    ctx->pc = 0x7F2DC1C8u;
    // 7F2DC1C8: stw     r0, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC1CC:
    ctx->pc = 0x7F2DC1CCu;
    // 7F2DC1CC: stfs     f0, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC1D0:
    ctx->pc = 0x7F2DC1D0u;
    // 7F2DC1D0: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC1D4:
    ctx->pc = 0x7F2DC1D4u;
    // 7F2DC1D4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC1D8:
    ctx->pc = 0x7F2DC1D8u;
    // 7F2DC1D8: stw     r0, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC1DC:
    ctx->pc = 0x7F2DC1DCu;
    // 7F2DC1DC: lfd     f0, 424(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC1E0:
    ctx->pc = 0x7F2DC1E0u;
    // 7F2DC1E0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1E0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC1E4:
    ctx->pc = 0x7F2DC1E4u;
    // 7F2DC1E4: stfs     f0, 312(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC1E8:
    ctx->pc = 0x7F2DC1E8u;
    // 7F2DC1E8: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC1EC:
    ctx->pc = 0x7F2DC1ECu;
    // 7F2DC1EC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC1F0:
    ctx->pc = 0x7F2DC1F0u;
    // 7F2DC1F0: stw     r0, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC1F4:
    ctx->pc = 0x7F2DC1F4u;
    // 7F2DC1F4: lfd     f0, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC1F8:
    ctx->pc = 0x7F2DC1F8u;
    // 7F2DC1F8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1F8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC1FC:
    ctx->pc = 0x7F2DC1FCu;
    // 7F2DC1FC: stfs     f0, 316(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC1FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC200:
    ctx->pc = 0x7F2DC200u;
    // 7F2DC200: lwz     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC204:
    ctx->pc = 0x7F2DC204u;
    // 7F2DC204: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_7F2DC208:
    ctx->pc = 0x7F2DC208u;
    // 7F2DC208: stw     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC20C:
    ctx->pc = 0x7F2DC20Cu;
    ctx->downcount -= 2;
    // 7F2DC20C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DC210:
    ctx->pc = 0x7F2DC210u;
    // 7F2DC210: bl      0x7F2DAD00
    {
            ctx->lr = 0x7F2DC214u;
            ctx->pc = 0x7F2DAD00u;
            return;
    }

label_7F2DC214:
    ctx->pc = 0x7F2DC214u;
    ctx->downcount -= 3;
    // 7F2DC214: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F2DC218:
    ctx->pc = 0x7F2DC218u;
    // 7F2DC218: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DC21C:
    ctx->pc = 0x7F2DC21Cu;
    // 7F2DC21C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC220u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC220:
    ctx->pc = 0x7F2DC220u;
    ctx->downcount -= 4;
    // 7F2DC220: stw     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC224:
    ctx->pc = 0x7F2DC224u;
    // 7F2DC224: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F2DC228:
    ctx->pc = 0x7F2DC228u;
    // 7F2DC228: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F2DC22C:
    ctx->pc = 0x7F2DC22Cu;
    // 7F2DC22C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC230u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC230:
    ctx->pc = 0x7F2DC230u;
    ctx->downcount -= 4;
    // 7F2DC230: stw     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC234:
    ctx->pc = 0x7F2DC234u;
    // 7F2DC234: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2DC238:
    ctx->pc = 0x7F2DC238u;
    // 7F2DC238: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F2DC23C:
    ctx->pc = 0x7F2DC23Cu;
    // 7F2DC23C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC240u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC240:
    ctx->pc = 0x7F2DC240u;
    ctx->downcount -= 4;
    // 7F2DC240: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC244:
    ctx->pc = 0x7F2DC244u;
    // 7F2DC244: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F2DC248:
    ctx->pc = 0x7F2DC248u;
    // 7F2DC248: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F2DC24C:
    ctx->pc = 0x7F2DC24Cu;
    // 7F2DC24C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC250u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC250:
    ctx->pc = 0x7F2DC250u;
    ctx->downcount -= 4;
    // 7F2DC250: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC254:
    ctx->pc = 0x7F2DC254u;
    // 7F2DC254: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F2DC258:
    ctx->pc = 0x7F2DC258u;
    // 7F2DC258: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DC25C:
    ctx->pc = 0x7F2DC25Cu;
    // 7F2DC25C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC260u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC260:
    ctx->pc = 0x7F2DC260u;
    ctx->downcount -= 59;
    // 7F2DC260: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F2DC264:
    ctx->pc = 0x7F2DC264u;
    // 7F2DC264: xoris   r5, r17, 0x8000
    ctx->gpr[5] = ctx->gpr[17] ^ (0x8000u << 16);

label_7F2DC268:
    ctx->pc = 0x7F2DC268u;
    // 7F2DC268: stw     r5, 428(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC26C:
    ctx->pc = 0x7F2DC26Cu;
    // 7F2DC26C: xoris   r0, r16, 0x8000
    ctx->gpr[0] = ctx->gpr[16] ^ (0x8000u << 16);

label_7F2DC270:
    ctx->pc = 0x7F2DC270u;
    // 7F2DC270: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC274:
    ctx->pc = 0x7F2DC274u;
    // 7F2DC274: stw     r6, 424(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC278:
    ctx->pc = 0x7F2DC278u;
    // 7F2DC278: lfd     f3, 29336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC278u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29336);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC27C:
    ctx->pc = 0x7F2DC27Cu;
    // 7F2DC27C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DC280:
    ctx->pc = 0x7F2DC280u;
    // 7F2DC280: lfd     f0, 424(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC284:
    ctx->pc = 0x7F2DC284u;
    // 7F2DC284: stw     r0, 420(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC288:
    ctx->pc = 0x7F2DC288u;
    // 7F2DC288: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC288u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F2DC28C:
    ctx->pc = 0x7F2DC28Cu;
    // 7F2DC28C: stw     r6, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC290:
    ctx->pc = 0x7F2DC290u;
    // 7F2DC290: lfd     f0, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC294:
    ctx->pc = 0x7F2DC294u;
    // 7F2DC294: stw     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC298:
    ctx->pc = 0x7F2DC298u;
    // 7F2DC298: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F2DC29C:
    ctx->pc = 0x7F2DC29Cu;
    // 7F2DC29C: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC29Cu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2DC2A0:
    ctx->pc = 0x7F2DC2A0u;
    // 7F2DC2A0: lwz     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC2A4:
    ctx->pc = 0x7F2DC2A4u;
    // 7F2DC2A4: stw     r6, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC2A8:
    ctx->pc = 0x7F2DC2A8u;
    // 7F2DC2A8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2A8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2DC2AC:
    ctx->pc = 0x7F2DC2ACu;
    // 7F2DC2AC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC2B0:
    ctx->pc = 0x7F2DC2B0u;
    // 7F2DC2B0: stw     r0, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC2B4:
    ctx->pc = 0x7F2DC2B4u;
    // 7F2DC2B4: lfd     f0, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC2B8:
    ctx->pc = 0x7F2DC2B8u;
    // 7F2DC2B8: stw     r5, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC2BC:
    ctx->pc = 0x7F2DC2BCu;
    // 7F2DC2BC: stw     r6, 408(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC2C0:
    ctx->pc = 0x7F2DC2C0u;
    // 7F2DC2C0: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2C0u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F2DC2C4:
    ctx->pc = 0x7F2DC2C4u;
    // 7F2DC2C4: stw     r6, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC2C8:
    ctx->pc = 0x7F2DC2C8u;
    // 7F2DC2C8: lfd     f0, 408(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC2CC:
    ctx->pc = 0x7F2DC2CCu;
    // 7F2DC2CC: stw     r5, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC2D0:
    ctx->pc = 0x7F2DC2D0u;
    // 7F2DC2D0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2D0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F2DC2D4:
    ctx->pc = 0x7F2DC2D4u;
    // 7F2DC2D4: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2D4u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F2DC2D8:
    ctx->pc = 0x7F2DC2D8u;
    // 7F2DC2D8: stw     r6, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC2DC:
    ctx->pc = 0x7F2DC2DCu;
    // 7F2DC2DC: stfs     f1, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DC2E0:
    ctx->pc = 0x7F2DC2E0u;
    // 7F2DC2E0: lfd     f0, 392(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC2E4:
    ctx->pc = 0x7F2DC2E4u;
    // 7F2DC2E4: lwz     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC2E8:
    ctx->pc = 0x7F2DC2E8u;
    // 7F2DC2E8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2E8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2DC2EC:
    ctx->pc = 0x7F2DC2ECu;
    // 7F2DC2EC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DC2F0:
    ctx->pc = 0x7F2DC2F0u;
    // 7F2DC2F0: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC2F4:
    ctx->pc = 0x7F2DC2F4u;
    // 7F2DC2F4: lfd     f1, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC2F8:
    ctx->pc = 0x7F2DC2F8u;
    // 7F2DC2F8: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2F8u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2DC2FC:
    ctx->pc = 0x7F2DC2FCu;
    // 7F2DC2FC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC2FCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F2DC300:
    ctx->pc = 0x7F2DC300u;
    // 7F2DC300: stfs     f1, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC300u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DC304:
    ctx->pc = 0x7F2DC304u;
    // 7F2DC304: stfs     f0, 224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC304u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC308:
    ctx->pc = 0x7F2DC308u;
    // 7F2DC308: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC30Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC30C:
    ctx->pc = 0x7F2DC30Cu;
    ctx->downcount -= 10;
    // 7F2DC30C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC310:
    ctx->pc = 0x7F2DC310u;
    // 7F2DC310: stw     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC314:
    ctx->pc = 0x7F2DC314u;
    // 7F2DC314: lfs     f0, 29332(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC314u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC318:
    ctx->pc = 0x7F2DC318u;
    // 7F2DC318: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DC31C:
    ctx->pc = 0x7F2DC31Cu;
    // 7F2DC31C: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F2DC320:
    ctx->pc = 0x7F2DC320u;
    // 7F2DC320: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DC324:
    ctx->pc = 0x7F2DC324u;
    // 7F2DC324: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC328:
    ctx->pc = 0x7F2DC328u;
    // 7F2DC328: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC32C:
    ctx->pc = 0x7F2DC32Cu;
    // 7F2DC32C: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC330:
    ctx->pc = 0x7F2DC330u;
    // 7F2DC330: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2DC334u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2DC334:
    ctx->pc = 0x7F2DC334u;
    ctx->downcount -= 2;
    // 7F2DC334: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC338:
    ctx->pc = 0x7F2DC338u;
    // 7F2DC338: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F2DC33Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F2DC33C:
    ctx->pc = 0x7F2DC33Cu;
    ctx->downcount -= 25;
    // 7F2DC33C: lwz     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DC340:
    ctx->pc = 0x7F2DC340u;
    // 7F2DC340: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2DC344:
    ctx->pc = 0x7F2DC344u;
    // 7F2DC344: lwz     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DC348:
    ctx->pc = 0x7F2DC348u;
    // 7F2DC348: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DC34C:
    ctx->pc = 0x7F2DC34Cu;
    // 7F2DC34C: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC350:
    ctx->pc = 0x7F2DC350u;
    // 7F2DC350: lwz     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC354:
    ctx->pc = 0x7F2DC354u;
    // 7F2DC354: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DC358:
    ctx->pc = 0x7F2DC358u;
    // 7F2DC358: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DC35C:
    ctx->pc = 0x7F2DC35Cu;
    // 7F2DC35C: lfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DC360:
    ctx->pc = 0x7F2DC360u;
    // 7F2DC360: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DC364:
    ctx->pc = 0x7F2DC364u;
    // 7F2DC364: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DC368:
    ctx->pc = 0x7F2DC368u;
    // 7F2DC368: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC36C:
    ctx->pc = 0x7F2DC36Cu;
    // 7F2DC36C: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC36Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DC370:
    ctx->pc = 0x7F2DC370u;
    // 7F2DC370: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC374:
    ctx->pc = 0x7F2DC374u;
    // 7F2DC374: lwz     r5, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC378:
    ctx->pc = 0x7F2DC378u;
    // 7F2DC378: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC378u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC37C:
    ctx->pc = 0x7F2DC37Cu;
    // 7F2DC37C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DC37Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2DC380:
    ctx->pc = 0x7F2DC380u;
    // 7F2DC380: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC380u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC384:
    ctx->pc = 0x7F2DC384u;
    // 7F2DC384: lfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC384u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC388:
    ctx->pc = 0x7F2DC388u;
    // 7F2DC388: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DC388u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2DC38C:
    ctx->pc = 0x7F2DC38Cu;
    // 7F2DC38C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC38Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC390:
    ctx->pc = 0x7F2DC390u;
    // 7F2DC390: lfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC390u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC394:
    ctx->pc = 0x7F2DC394u;
    // 7F2DC394: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DC394u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2DC398:
    ctx->pc = 0x7F2DC398u;
    // 7F2DC398: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC39C:
    ctx->pc = 0x7F2DC39Cu;
    // 7F2DC39C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2DC3A0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2DC3A0:
    ctx->pc = 0x7F2DC3A0u;
    ctx->downcount -= 3;
    // 7F2DC3A0: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F2DC3A4:
    ctx->pc = 0x7F2DC3A4u;
    // 7F2DC3A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DC3A8:
    ctx->pc = 0x7F2DC3A8u;
    // 7F2DC3A8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DC3ACu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DC3AC:
    ctx->pc = 0x7F2DC3ACu;
    ctx->downcount -= 2;
    // 7F2DC3AC: cmpwi   r3, 0
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

label_7F2DC3B0:
    ctx->pc = 0x7F2DC3B0u;
    // 7F2DC3B0: bc    12, 2, 0x7F2DC3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC3C0;
        }
    }

label_7F2DC3B4:
    ctx->pc = 0x7F2DC3B4u;
    ctx->downcount -= 3;
    // 7F2DC3B4: lwz     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC3B8:
    ctx->pc = 0x7F2DC3B8u;
    // 7F2DC3B8: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F2DC3BC:
    ctx->pc = 0x7F2DC3BCu;
    // 7F2DC3BC: stw     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC3C0:
    ctx->pc = 0x7F2DC3C0u;
    ctx->downcount -= 22;
    // 7F2DC3C0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DC3C4:
    ctx->pc = 0x7F2DC3C4u;
    // 7F2DC3C4: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F2DC3C8:
    ctx->pc = 0x7F2DC3C8u;
    // 7F2DC3C8: lwz     r4, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DC3CC:
    ctx->pc = 0x7F2DC3CCu;
    // 7F2DC3CC: lfs     f4, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2DC3D0:
    ctx->pc = 0x7F2DC3D0u;
    // 7F2DC3D0: stfs     f4, 196(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F2DC3D4:
    ctx->pc = 0x7F2DC3D4u;
    // 7F2DC3D4: lfs     f3, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DC3D8:
    ctx->pc = 0x7F2DC3D8u;
    // 7F2DC3D8: stfs     f3, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2DC3DC:
    ctx->pc = 0x7F2DC3DCu;
    // 7F2DC3DC: lfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC3E0:
    ctx->pc = 0x7F2DC3E0u;
    // 7F2DC3E0: stfs     f0, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC3E4:
    ctx->pc = 0x7F2DC3E4u;
    // 7F2DC3E4: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DC3E8:
    ctx->pc = 0x7F2DC3E8u;
    // 7F2DC3E8: stfs     f2, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DC3EC:
    ctx->pc = 0x7F2DC3ECu;
    // 7F2DC3EC: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DC3F0:
    ctx->pc = 0x7F2DC3F0u;
    // 7F2DC3F0: stfs     f1, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DC3F4:
    ctx->pc = 0x7F2DC3F4u;
    // 7F2DC3F4: stfs     f0, 220(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC3F8:
    ctx->pc = 0x7F2DC3F8u;
    // 7F2DC3F8: stfs     f4, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F2DC3FC:
    ctx->pc = 0x7F2DC3FCu;
    // 7F2DC3FC: stfs     f3, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2DC400:
    ctx->pc = 0x7F2DC400u;
    // 7F2DC400: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC400u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC404:
    ctx->pc = 0x7F2DC404u;
    // 7F2DC404: stfs     f0, 236(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC408:
    ctx->pc = 0x7F2DC408u;
    // 7F2DC408: stfs     f2, 244(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DC40C:
    ctx->pc = 0x7F2DC40Cu;
    // 7F2DC40C: stfs     f1, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC40Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DC410:
    ctx->pc = 0x7F2DC410u;
    // 7F2DC410: stfs     f0, 252(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC414:
    ctx->pc = 0x7F2DC414u;
    // 7F2DC414: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC418u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC418:
    ctx->pc = 0x7F2DC418u;
    ctx->downcount -= 2;
    // 7F2DC418: cmplwi  r3, 0x0000
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

label_7F2DC41C:
    ctx->pc = 0x7F2DC41Cu;
    // 7F2DC41C: bc    12, 2, 0x7F2DC460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC460;
        }
    }

label_7F2DC420:
    ctx->pc = 0x7F2DC420u;
    ctx->downcount -= 5;
    // 7F2DC420: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DC424:
    ctx->pc = 0x7F2DC424u;
    // 7F2DC424: lfs     f0, 29332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC428:
    ctx->pc = 0x7F2DC428u;
    // 7F2DC428: stfs     f0, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC428u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC42C:
    ctx->pc = 0x7F2DC42Cu;
    // 7F2DC42C: stfs     f0, 196(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC42Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC430:
    ctx->pc = 0x7F2DC430u;
    // 7F2DC430: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC434u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC434:
    ctx->pc = 0x7F2DC434u;
    ctx->downcount -= 11;
    // 7F2DC434: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2DC438:
    ctx->pc = 0x7F2DC438u;
    // 7F2DC438: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DC43C:
    ctx->pc = 0x7F2DC43Cu;
    // 7F2DC43C: stw     r3, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC440:
    ctx->pc = 0x7F2DC440u;
    // 7F2DC440: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC444:
    ctx->pc = 0x7F2DC444u;
    // 7F2DC444: lfd     f1, 29336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC444u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29336);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC448:
    ctx->pc = 0x7F2DC448u;
    // 7F2DC448: stw     r0, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC44C:
    ctx->pc = 0x7F2DC44Cu;
    // 7F2DC44C: lfd     f0, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC450:
    ctx->pc = 0x7F2DC450u;
    // 7F2DC450: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC450u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC454:
    ctx->pc = 0x7F2DC454u;
    // 7F2DC454: stfs     f0, 244(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC458:
    ctx->pc = 0x7F2DC458u;
    // 7F2DC458: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC458u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC45C:
    ctx->pc = 0x7F2DC45Cu;
    // 7F2DC45C: stfs     f0, 224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC45Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC460:
    ctx->pc = 0x7F2DC460u;
    ctx->downcount -= 4;
    // 7F2DC460: addi    r3, r1, 196
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(196);

label_7F2DC464:
    ctx->pc = 0x7F2DC464u;
    // 7F2DC464: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DC468:
    ctx->pc = 0x7F2DC468u;
    // 7F2DC468: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC46C:
    ctx->pc = 0x7F2DC46Cu;
    // 7F2DC46C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2DC470u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2DC470:
    ctx->pc = 0x7F2DC470u;
    ctx->downcount -= 4;
    // 7F2DC470: addi    r3, r1, 196
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(196);

label_7F2DC474:
    ctx->pc = 0x7F2DC474u;
    // 7F2DC474: addi    r4, r1, 260
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(260);

label_7F2DC478:
    ctx->pc = 0x7F2DC478u;
    // 7F2DC478: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F2DC47C:
    ctx->pc = 0x7F2DC47Cu;
    // 7F2DC47C: bl      0x7F3CC3E0
    {
            ctx->lr = 0x7F2DC480u;
            ctx->pc = 0x7F3CC3E0u;
            return;
    }

label_7F2DC480:
    ctx->pc = 0x7F2DC480u;
    ctx->downcount -= 12;
    // 7F2DC480: lwz     r3, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC484:
    ctx->pc = 0x7F2DC484u;
    // 7F2DC484: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2DC488:
    ctx->pc = 0x7F2DC488u;
    // 7F2DC488: lwz     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC48C:
    ctx->pc = 0x7F2DC48Cu;
    // 7F2DC48C: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2DC490:
    ctx->pc = 0x7F2DC490u;
    // 7F2DC490: stw     r3, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC494:
    ctx->pc = 0x7F2DC494u;
    // 7F2DC494: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2DC498:
    ctx->pc = 0x7F2DC498u;
    // 7F2DC498: stw     r0, 320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC49C:
    ctx->pc = 0x7F2DC49Cu;
    // 7F2DC49C: stw     r0, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC4A0:
    ctx->pc = 0x7F2DC4A0u;
    // 7F2DC4A0: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC4A4:
    ctx->pc = 0x7F2DC4A4u;
    // 7F2DC4A4: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC4A8:
    ctx->pc = 0x7F2DC4A8u;
    // 7F2DC4A8: stw     r3, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4AC:
    ctx->pc = 0x7F2DC4ACu;
    // 7F2DC4AC: stw     r3, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4B0:
    ctx->downcount -= 4;
    // 7F2DC4B0: addi    r16, r1, 260
    ctx->gpr[16] = ctx->gpr[1] + (u32)(s32)(260);

label_7F2DC4B4:
    // 7F2DC4B4: add   r16, r16, r21
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[16] = res;
    }

label_7F2DC4B8:
    ctx->pc = 0x7F2DC4B8u;
    // 7F2DC4B8: lwz     r3, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC4BC:
    // 7F2DC4BC: bl      0x7F2DCC74
    {
            ctx->lr = 0x7F2DC4C0u;
            goto label_7F2DCC74;
    }

label_7F2DC4C0:
    ctx->pc = 0x7F2DC4C0u;
    ctx->downcount -= 3;
    // 7F2DC4C0: stw     r3, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4C4:
    ctx->pc = 0x7F2DC4C4u;
    // 7F2DC4C4: lwz     r3, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC4C8:
    // 7F2DC4C8: bl      0x7F2DCC74
    {
            ctx->lr = 0x7F2DC4CCu;
            goto label_7F2DCC74;
    }

label_7F2DC4CC:
    ctx->pc = 0x7F2DC4CCu;
    ctx->downcount -= 3;
    // 7F2DC4CC: stw     r3, 4(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4D0:
    ctx->pc = 0x7F2DC4D0u;
    // 7F2DC4D0: lwz     r3, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC4D4:
    // 7F2DC4D4: bl      0x7F2DCC74
    {
            ctx->lr = 0x7F2DC4D8u;
            goto label_7F2DCC74;
    }

label_7F2DC4D8:
    ctx->pc = 0x7F2DC4D8u;
    ctx->downcount -= 3;
    // 7F2DC4D8: stw     r3, 8(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4DC:
    ctx->pc = 0x7F2DC4DCu;
    // 7F2DC4DC: lwz     r3, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC4E0:
    // 7F2DC4E0: bl      0x7F2DCC74
    {
            ctx->lr = 0x7F2DC4E4u;
            goto label_7F2DCC74;
    }

label_7F2DC4E4:
    ctx->downcount -= 5;
    // 7F2DC4E4: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F2DC4E8:
    ctx->pc = 0x7F2DC4E8u;
    // 7F2DC4E8: stw     r3, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC4EC:
    // 7F2DC4EC: cmpwi   r17, 4
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

label_7F2DC4F0:
    // 7F2DC4F0: addi    r21, r21, 16
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(16);

label_7F2DC4F4:
    // 7F2DC4F4: bc    12, 0, 0x7F2DC4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DC4B0u;
                return;
            }
            goto label_7F2DC4B0;
        }
    }

label_7F2DC4F8:
    ctx->pc = 0x7F2DC4F8u;
    ctx->downcount -= 4;
    // 7F2DC4F8: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2DC4FC:
    ctx->pc = 0x7F2DC4FCu;
    // 7F2DC4FC: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2DC500:
    ctx->pc = 0x7F2DC500u;
    // 7F2DC500: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F2DC504:
    ctx->pc = 0x7F2DC504u;
    // 7F2DC504: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC508u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC508:
    ctx->pc = 0x7F2DC508u;
    ctx->downcount -= 2;
    // 7F2DC508: cmplwi  r3, 0x0000
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

label_7F2DC50C:
    ctx->pc = 0x7F2DC50Cu;
    // 7F2DC50C: bc    12, 2, 0x7F2DC554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC554;
        }
    }

label_7F2DC510:
    ctx->pc = 0x7F2DC510u;
    ctx->downcount -= 1;
    // 7F2DC510: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC514u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC514:
    ctx->pc = 0x7F2DC514u;
    ctx->downcount -= 1;
    // 7F2DC514: bl      0x7F01B788
    {
            ctx->lr = 0x7F2DC518u;
            ctx->pc = 0x7F01B788u;
            return;
    }

label_7F2DC518:
    ctx->pc = 0x7F2DC518u;
    ctx->downcount -= 2;
    // 7F2DC518: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC51C:
    ctx->pc = 0x7F2DC51Cu;
    // 7F2DC51C: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F2DC520u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F2DC520:
    ctx->pc = 0x7F2DC520u;
    ctx->downcount -= 2;
    // 7F2DC520: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC524:
    ctx->pc = 0x7F2DC524u;
    // 7F2DC524: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC528u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC528:
    ctx->pc = 0x7F2DC528u;
    ctx->downcount -= 1;
    // 7F2DC528: bl      0x7F01B788
    {
            ctx->lr = 0x7F2DC52Cu;
            ctx->pc = 0x7F01B788u;
            return;
    }

label_7F2DC52C:
    ctx->pc = 0x7F2DC52Cu;
    ctx->downcount -= 2;
    // 7F2DC52C: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC530:
    ctx->pc = 0x7F2DC530u;
    // 7F2DC530: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F2DC534u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F2DC534:
    ctx->pc = 0x7F2DC534u;
    ctx->downcount -= 6;
    // 7F2DC534: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC538:
    ctx->pc = 0x7F2DC538u;
    // 7F2DC538: or   r16, r17, r16
    {
        ctx->gpr[16] = ctx->gpr[17] | ctx->gpr[16];
    }

label_7F2DC53C:
    ctx->pc = 0x7F2DC53Cu;
    // 7F2DC53C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC540:
    ctx->pc = 0x7F2DC540u;
    // 7F2DC540: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2DC544:
    ctx->pc = 0x7F2DC544u;
    // 7F2DC544: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC548:
    ctx->pc = 0x7F2DC548u;
    // 7F2DC548: bl      0x7F2DCC40
    {
            ctx->lr = 0x7F2DC54Cu;
            goto label_7F2DCC40;
    }

label_7F2DC54C:
    ctx->pc = 0x7F2DC54Cu;
    ctx->downcount -= 2;
    // 7F2DC54C: stw     r16, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2DC550:
    ctx->pc = 0x7F2DC550u;
    // 7F2DC550: b       0x7F2DC5D0
    {
            goto label_7F2DC5D0;
    }

label_7F2DC554:
    ctx->pc = 0x7F2DC554u;
    ctx->downcount -= 2;
    // 7F2DC554: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DC558:
    ctx->pc = 0x7F2DC558u;
    // 7F2DC558: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F2DC55Cu;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F2DC55C:
    ctx->pc = 0x7F2DC55Cu;
    ctx->downcount -= 6;
    // 7F2DC55C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DC560:
    ctx->pc = 0x7F2DC560u;
    // 7F2DC560: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC564:
    ctx->pc = 0x7F2DC564u;
    // 7F2DC564: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC568:
    ctx->pc = 0x7F2DC568u;
    // 7F2DC568: addi    r16, r1, 8
    ctx->gpr[16] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DC56C:
    ctx->pc = 0x7F2DC56Cu;
    // 7F2DC56C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC570:
    ctx->pc = 0x7F2DC570u;
    // 7F2DC570: b       0x7F2DC594
    {
            goto label_7F2DC594;
    }

label_7F2DC574:
    ctx->downcount -= 2;
    // 7F2DC574: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F2DC578:
    // 7F2DC578: bl      0x7F01A1F0
    {
            ctx->lr = 0x7F2DC57Cu;
            ctx->pc = 0x7F01A1F0u;
            return;
    }

label_7F2DC57C:
    ctx->downcount -= 1;
    // 7F2DC57C: bl      0x7F01C018
    {
            ctx->lr = 0x7F2DC580u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F2DC580:
    ctx->pc = 0x7F2DC580u;
    ctx->downcount -= 5;
    // 7F2DC580: stwx    r3, r16, r21
    {
        u32 ea = ctx->gpr[16] + ctx->gpr[21];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC584:
    // 7F2DC584: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F2DC588:
    ctx->pc = 0x7F2DC588u;
    // 7F2DC588: lwzx    r0, r16, r21
    {
        u32 ea = ctx->gpr[16] + ctx->gpr[21];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC58C:
    // 7F2DC58C: addi    r21, r21, 4
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(4);

label_7F2DC590:
    // 7F2DC590: andc   r17, r17, r0
    {
        ctx->gpr[17] = ctx->gpr[17] & ~ctx->gpr[0];
    }

label_7F2DC594:
    ctx->downcount -= 2;
    // 7F2DC594: cmplwi  r17, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[17]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DC598:
    // 7F2DC598: bc    12, 2, 0x7F2DC5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC5A4;
        }
    }

label_7F2DC59C:
    ctx->downcount -= 2;
    // 7F2DC59C: cmpwi   r18, 2
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DC5A0:
    // 7F2DC5A0: bc    12, 0, 0x7F2DC574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DC574u;
                return;
            }
            goto label_7F2DC574;
        }
    }

label_7F2DC5A4:
    ctx->pc = 0x7F2DC5A4u;
    ctx->downcount -= 5;
    // 7F2DC5A4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC5A8:
    ctx->pc = 0x7F2DC5A8u;
    // 7F2DC5A8: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DC5AC:
    ctx->pc = 0x7F2DC5ACu;
    // 7F2DC5AC: cmplwi  r0, 0x0000
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

label_7F2DC5B0:
    ctx->pc = 0x7F2DC5B0u;
    // 7F2DC5B0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DC5B4:
    ctx->pc = 0x7F2DC5B4u;
    // 7F2DC5B4: bc    12, 2, 0x7F2DC5BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC5BC;
        }
    }

label_7F2DC5B8:
    ctx->pc = 0x7F2DC5B8u;
    ctx->downcount -= 1;
    // 7F2DC5B8: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2DC5BC:
    ctx->pc = 0x7F2DC5BCu;
    ctx->downcount -= 4;
    // 7F2DC5BC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC5C0:
    ctx->pc = 0x7F2DC5C0u;
    // 7F2DC5C0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DC5C4:
    ctx->pc = 0x7F2DC5C4u;
    // 7F2DC5C4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DC5C8:
    ctx->pc = 0x7F2DC5C8u;
    // 7F2DC5C8: bl      0x7F2DCC40
    {
            ctx->lr = 0x7F2DC5CCu;
            goto label_7F2DCC40;
    }

label_7F2DC5CC:
    ctx->pc = 0x7F2DC5CCu;
    ctx->downcount -= 1;
    // 7F2DC5CC: stw     r29, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DC5D0:
    ctx->pc = 0x7F2DC5D0u;
    ctx->downcount -= 3;
    // 7F2DC5D0: lwz     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC5D4:
    ctx->pc = 0x7F2DC5D4u;
    // 7F2DC5D4: cmpwi   r0, 0
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

label_7F2DC5D8:
    ctx->pc = 0x7F2DC5D8u;
    // 7F2DC5D8: bc    4, 2, 0x7F2DC66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC66C;
        }
    }

label_7F2DC5DC:
    ctx->pc = 0x7F2DC5DCu;
    ctx->downcount -= 7;
    // 7F2DC5DC: oris    r16, r20, 0x0210
    ctx->gpr[16] = ctx->gpr[20] | (0x0210u << 16);

label_7F2DC5E0:
    ctx->pc = 0x7F2DC5E0u;
    // 7F2DC5E0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC5E4:
    ctx->pc = 0x7F2DC5E4u;
    // 7F2DC5E4: ori     r16, r16, 0x3100
    ctx->gpr[16] = ctx->gpr[16] | 0x3100u;

label_7F2DC5E8:
    ctx->pc = 0x7F2DC5E8u;
    // 7F2DC5E8: addi    r4, r1, 260
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(260);

label_7F2DC5EC:
    ctx->pc = 0x7F2DC5ECu;
    // 7F2DC5EC: or   r6, r16, r16
    {
        ctx->gpr[6] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC5F0:
    ctx->pc = 0x7F2DC5F0u;
    // 7F2DC5F0: addi    r5, r1, 276
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(276);

label_7F2DC5F4:
    ctx->pc = 0x7F2DC5F4u;
    // 7F2DC5F4: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC5F8u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC5F8:
    ctx->pc = 0x7F2DC5F8u;
    ctx->downcount -= 5;
    // 7F2DC5F8: stw     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC5FC:
    ctx->pc = 0x7F2DC5FCu;
    // 7F2DC5FC: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC600:
    ctx->pc = 0x7F2DC600u;
    // 7F2DC600: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC604:
    ctx->pc = 0x7F2DC604u;
    // 7F2DC604: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC608:
    ctx->pc = 0x7F2DC608u;
    // 7F2DC608: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC60Cu;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC60C:
    ctx->pc = 0x7F2DC60Cu;
    ctx->downcount -= 2;
    // 7F2DC60C: cmplw   r28, r27
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DC610:
    ctx->pc = 0x7F2DC610u;
    // 7F2DC610: bc    12, 2, 0x7F2DC640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC640;
        }
    }

label_7F2DC614:
    ctx->pc = 0x7F2DC614u;
    ctx->downcount -= 5;
    // 7F2DC614: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2DC618:
    ctx->pc = 0x7F2DC618u;
    // 7F2DC618: or   r6, r16, r16
    {
        ctx->gpr[6] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC61C:
    ctx->pc = 0x7F2DC61Cu;
    // 7F2DC61C: addi    r4, r1, 292
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(292);

label_7F2DC620:
    ctx->pc = 0x7F2DC620u;
    // 7F2DC620: addi    r5, r1, 308
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(308);

label_7F2DC624:
    ctx->pc = 0x7F2DC624u;
    // 7F2DC624: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC628u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC628:
    ctx->pc = 0x7F2DC628u;
    ctx->downcount -= 5;
    // 7F2DC628: stw     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC62C:
    ctx->pc = 0x7F2DC62Cu;
    // 7F2DC62C: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC630:
    ctx->pc = 0x7F2DC630u;
    // 7F2DC630: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC634:
    ctx->pc = 0x7F2DC634u;
    // 7F2DC634: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC638:
    ctx->pc = 0x7F2DC638u;
    // 7F2DC638: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC63Cu;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC63C:
    ctx->pc = 0x7F2DC63Cu;
    ctx->downcount -= 1;
    // 7F2DC63C: b       0x7F2DC7E4
    {
            goto label_7F2DC7E4;
    }

label_7F2DC640:
    ctx->pc = 0x7F2DC640u;
    ctx->downcount -= 5;
    // 7F2DC640: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC644:
    ctx->pc = 0x7F2DC644u;
    // 7F2DC644: or   r6, r16, r16
    {
        ctx->gpr[6] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC648:
    ctx->pc = 0x7F2DC648u;
    // 7F2DC648: addi    r4, r1, 292
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(292);

label_7F2DC64C:
    ctx->pc = 0x7F2DC64Cu;
    // 7F2DC64C: addi    r5, r1, 308
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(308);

label_7F2DC650:
    ctx->pc = 0x7F2DC650u;
    // 7F2DC650: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC654u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC654:
    ctx->pc = 0x7F2DC654u;
    ctx->downcount -= 5;
    // 7F2DC654: stw     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC658:
    ctx->pc = 0x7F2DC658u;
    // 7F2DC658: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC65C:
    ctx->pc = 0x7F2DC65Cu;
    // 7F2DC65C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC660:
    ctx->pc = 0x7F2DC660u;
    // 7F2DC660: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC664:
    ctx->pc = 0x7F2DC664u;
    // 7F2DC664: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC668u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC668:
    ctx->pc = 0x7F2DC668u;
    ctx->downcount -= 1;
    // 7F2DC668: b       0x7F2DC7E4
    {
            goto label_7F2DC7E4;
    }

label_7F2DC66C:
    ctx->pc = 0x7F2DC66Cu;
    ctx->downcount -= 2;
    // 7F2DC66C: cmpwi   r0, 1
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

label_7F2DC670:
    ctx->pc = 0x7F2DC670u;
    // 7F2DC670: bc    4, 2, 0x7F2DC7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC7E4;
        }
    }

label_7F2DC674:
    ctx->pc = 0x7F2DC674u;
    ctx->downcount -= 57;
    // 7F2DC674: lwz     r4, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DC678:
    ctx->pc = 0x7F2DC678u;
    // 7F2DC678: li      r12, 4000
    ctx->gpr[12] = (u32)(s32)(4000);

label_7F2DC67C:
    ctx->pc = 0x7F2DC67Cu;
    // 7F2DC67C: lwz     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC680:
    ctx->pc = 0x7F2DC680u;
    // 7F2DC680: oris    r25, r20, 0x0210
    ctx->gpr[25] = ctx->gpr[20] | (0x0210u << 16);

label_7F2DC684:
    ctx->pc = 0x7F2DC684u;
    // 7F2DC684: stw     r4, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DC688:
    ctx->pc = 0x7F2DC688u;
    // 7F2DC688: li      r10, 200
    ctx->gpr[10] = (u32)(s32)(200);

label_7F2DC68C:
    ctx->pc = 0x7F2DC68Cu;
    // 7F2DC68C: lwz     r7, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DC690:
    ctx->pc = 0x7F2DC690u;
    // 7F2DC690: li      r8, 800
    ctx->gpr[8] = (u32)(s32)(800);

label_7F2DC694:
    ctx->pc = 0x7F2DC694u;
    // 7F2DC694: lwz     r17, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F2DC698:
    ctx->pc = 0x7F2DC698u;
    // 7F2DC698: ori     r25, r25, 0x3100
    ctx->gpr[25] = ctx->gpr[25] | 0x3100u;

label_7F2DC69C:
    ctx->pc = 0x7F2DC69Cu;
    // 7F2DC69C: lwz     r19, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F2DC6A0:
    ctx->pc = 0x7F2DC6A0u;
    // 7F2DC6A0: addi    r16, r7, 500
    ctx->gpr[16] = ctx->gpr[7] + (u32)(s32)(500);

label_7F2DC6A4:
    ctx->pc = 0x7F2DC6A4u;
    // 7F2DC6A4: stw     r4, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DC6A8:
    ctx->pc = 0x7F2DC6A8u;
    // 7F2DC6A8: addi    r18, r17, -500
    ctx->gpr[18] = ctx->gpr[17] + (u32)(s32)(-500);

label_7F2DC6AC:
    ctx->pc = 0x7F2DC6ACu;
    // 7F2DC6AC: addi    r11, r19, 4000
    ctx->gpr[11] = ctx->gpr[19] + (u32)(s32)(4000);

label_7F2DC6B0:
    ctx->pc = 0x7F2DC6B0u;
    // 7F2DC6B0: addi    r9, r19, 4200
    ctx->gpr[9] = ctx->gpr[19] + (u32)(s32)(4200);

label_7F2DC6B4:
    ctx->pc = 0x7F2DC6B4u;
    // 7F2DC6B4: stw     r4, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DC6B8:
    ctx->pc = 0x7F2DC6B8u;
    // 7F2DC6B8: addi    r5, r1, 292
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(292);

label_7F2DC6BC:
    ctx->pc = 0x7F2DC6BCu;
    // 7F2DC6BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC6C0:
    ctx->pc = 0x7F2DC6C0u;
    // 7F2DC6C0: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2DC6C4:
    ctx->pc = 0x7F2DC6C4u;
    // 7F2DC6C4: stw     r4, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DC6C8:
    ctx->pc = 0x7F2DC6C8u;
    // 7F2DC6C8: addi    r23, r1, 324
    ctx->gpr[23] = ctx->gpr[1] + (u32)(s32)(324);

label_7F2DC6CC:
    ctx->pc = 0x7F2DC6CCu;
    // 7F2DC6CC: addi    r20, r1, 308
    ctx->gpr[20] = ctx->gpr[1] + (u32)(s32)(308);

label_7F2DC6D0:
    ctx->pc = 0x7F2DC6D0u;
    // 7F2DC6D0: addi    r24, r1, 340
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(340);

label_7F2DC6D4:
    ctx->pc = 0x7F2DC6D4u;
    // 7F2DC6D4: stw     r10, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DC6D8:
    ctx->pc = 0x7F2DC6D8u;
    // 7F2DC6D8: addi    r26, r1, 276
    ctx->gpr[26] = ctx->gpr[1] + (u32)(s32)(276);

label_7F2DC6DC:
    ctx->pc = 0x7F2DC6DCu;
    // 7F2DC6DC: addi    r22, r1, 372
    ctx->gpr[22] = ctx->gpr[1] + (u32)(s32)(372);

label_7F2DC6E0:
    ctx->pc = 0x7F2DC6E0u;
    // 7F2DC6E0: addi    r21, r1, 356
    ctx->gpr[21] = ctx->gpr[1] + (u32)(s32)(356);

label_7F2DC6E4:
    ctx->pc = 0x7F2DC6E4u;
    // 7F2DC6E4: stw     r0, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC6E8:
    ctx->pc = 0x7F2DC6E8u;
    // 7F2DC6E8: addi    r4, r1, 260
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(260);

label_7F2DC6EC:
    ctx->pc = 0x7F2DC6ECu;
    // 7F2DC6EC: stw     r0, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC6F0:
    ctx->pc = 0x7F2DC6F0u;
    // 7F2DC6F0: stw     r0, 348(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC6F4:
    ctx->pc = 0x7F2DC6F4u;
    // 7F2DC6F4: stw     r0, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC6F8:
    ctx->pc = 0x7F2DC6F8u;
    // 7F2DC6F8: stw     r0, 316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC6FC:
    ctx->pc = 0x7F2DC6FCu;
    // 7F2DC6FC: stw     r0, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC700:
    ctx->pc = 0x7F2DC700u;
    // 7F2DC700: stw     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC704:
    ctx->pc = 0x7F2DC704u;
    // 7F2DC704: stw     r7, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DC708:
    ctx->pc = 0x7F2DC708u;
    // 7F2DC708: stw     r7, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DC70C:
    ctx->pc = 0x7F2DC70Cu;
    // 7F2DC70C: stw     r16, 340(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2DC710:
    ctx->pc = 0x7F2DC710u;
    // 7F2DC710: stw     r17, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F2DC714:
    ctx->pc = 0x7F2DC714u;
    // 7F2DC714: stw     r17, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F2DC718:
    ctx->pc = 0x7F2DC718u;
    // 7F2DC718: stw     r18, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F2DC71C:
    ctx->pc = 0x7F2DC71Cu;
    // 7F2DC71C: stw     r19, 296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F2DC720:
    ctx->pc = 0x7F2DC720u;
    // 7F2DC720: stw     r12, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DC724:
    ctx->pc = 0x7F2DC724u;
    // 7F2DC724: stw     r12, 304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DC728:
    ctx->pc = 0x7F2DC728u;
    // 7F2DC728: stw     r11, 376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DC72C:
    ctx->pc = 0x7F2DC72Cu;
    // 7F2DC72C: stw     r11, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DC730:
    ctx->pc = 0x7F2DC730u;
    // 7F2DC730: stw     r11, 344(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DC734:
    ctx->pc = 0x7F2DC734u;
    // 7F2DC734: stw     r11, 328(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DC738:
    ctx->pc = 0x7F2DC738u;
    // 7F2DC738: stw     r10, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DC73C:
    ctx->pc = 0x7F2DC73Cu;
    // 7F2DC73C: stw     r10, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DC740:
    ctx->pc = 0x7F2DC740u;
    // 7F2DC740: stw     r10, 352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DC744:
    ctx->pc = 0x7F2DC744u;
    // 7F2DC744: stw     r9, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DC748:
    ctx->pc = 0x7F2DC748u;
    // 7F2DC748: stw     r9, 312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DC74C:
    ctx->pc = 0x7F2DC74Cu;
    // 7F2DC74C: stw     r8, 336(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DC750:
    ctx->pc = 0x7F2DC750u;
    // 7F2DC750: stw     r8, 320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DC754:
    ctx->pc = 0x7F2DC754u;
    // 7F2DC754: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC758u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC758:
    ctx->pc = 0x7F2DC758u;
    ctx->downcount -= 5;
    // 7F2DC758: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC75C:
    ctx->pc = 0x7F2DC75Cu;
    // 7F2DC75C: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC760:
    ctx->pc = 0x7F2DC760u;
    // 7F2DC760: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC764:
    ctx->pc = 0x7F2DC764u;
    // 7F2DC764: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC768:
    ctx->pc = 0x7F2DC768u;
    // 7F2DC768: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC76Cu;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC76C:
    ctx->pc = 0x7F2DC76Cu;
    ctx->downcount -= 5;
    // 7F2DC76C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC770:
    ctx->pc = 0x7F2DC770u;
    // 7F2DC770: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2DC774:
    ctx->pc = 0x7F2DC774u;
    // 7F2DC774: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2DC778:
    ctx->pc = 0x7F2DC778u;
    // 7F2DC778: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2DC77C:
    ctx->pc = 0x7F2DC77Cu;
    // 7F2DC77C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC780u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC780:
    ctx->pc = 0x7F2DC780u;
    ctx->downcount -= 5;
    // 7F2DC780: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC784:
    ctx->pc = 0x7F2DC784u;
    // 7F2DC784: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC788:
    ctx->pc = 0x7F2DC788u;
    // 7F2DC788: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC78C:
    ctx->pc = 0x7F2DC78Cu;
    // 7F2DC78C: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC790:
    ctx->pc = 0x7F2DC790u;
    // 7F2DC790: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC794u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC794:
    ctx->pc = 0x7F2DC794u;
    ctx->downcount -= 5;
    // 7F2DC794: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC798:
    ctx->pc = 0x7F2DC798u;
    // 7F2DC798: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2DC79C:
    ctx->pc = 0x7F2DC79Cu;
    // 7F2DC79C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2DC7A0:
    ctx->pc = 0x7F2DC7A0u;
    // 7F2DC7A0: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2DC7A4:
    ctx->pc = 0x7F2DC7A4u;
    // 7F2DC7A4: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC7A8u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC7A8:
    ctx->pc = 0x7F2DC7A8u;
    ctx->downcount -= 5;
    // 7F2DC7A8: stw     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC7AC:
    ctx->pc = 0x7F2DC7ACu;
    // 7F2DC7AC: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC7B0:
    ctx->pc = 0x7F2DC7B0u;
    // 7F2DC7B0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC7B4:
    ctx->pc = 0x7F2DC7B4u;
    // 7F2DC7B4: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC7B8:
    ctx->pc = 0x7F2DC7B8u;
    // 7F2DC7B8: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC7BCu;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC7BC:
    ctx->pc = 0x7F2DC7BCu;
    ctx->downcount -= 5;
    // 7F2DC7BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC7C0:
    ctx->pc = 0x7F2DC7C0u;
    // 7F2DC7C0: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2DC7C4:
    ctx->pc = 0x7F2DC7C4u;
    // 7F2DC7C4: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2DC7C8:
    ctx->pc = 0x7F2DC7C8u;
    // 7F2DC7C8: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2DC7CC:
    ctx->pc = 0x7F2DC7CCu;
    // 7F2DC7CC: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DC7D0u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DC7D0:
    ctx->pc = 0x7F2DC7D0u;
    ctx->downcount -= 5;
    // 7F2DC7D0: stw     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC7D4:
    ctx->pc = 0x7F2DC7D4u;
    // 7F2DC7D4: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC7D8:
    ctx->pc = 0x7F2DC7D8u;
    // 7F2DC7D8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC7DC:
    ctx->pc = 0x7F2DC7DCu;
    // 7F2DC7DC: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DC7E0:
    ctx->pc = 0x7F2DC7E0u;
    // 7F2DC7E0: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC7E4u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC7E4:
    ctx->pc = 0x7F2DC7E4u;
    ctx->downcount -= 3;
    // 7F2DC7E4: lwz     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC7E8:
    ctx->pc = 0x7F2DC7E8u;
    // 7F2DC7E8: rlwinm. r0, r0, 0, 30, 30
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

label_7F2DC7EC:
    ctx->pc = 0x7F2DC7ECu;
    // 7F2DC7EC: bc    12, 2, 0x7F2DC810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC810;
        }
    }

label_7F2DC7F0:
    ctx->pc = 0x7F2DC7F0u;
    ctx->downcount -= 5;
    // 7F2DC7F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DC7F4:
    ctx->pc = 0x7F2DC7F4u;
    // 7F2DC7F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DC7F8:
    ctx->pc = 0x7F2DC7F8u;
    // 7F2DC7F8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2DC7FC:
    ctx->pc = 0x7F2DC7FCu;
    // 7F2DC7FC: addi    r6, r1, 260
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(260);

label_7F2DC800:
    ctx->pc = 0x7F2DC800u;
    // 7F2DC800: bl      0x7F2DCEB8
    {
            ctx->lr = 0x7F2DC804u;
            goto label_7F2DCEB8;
    }

label_7F2DC804:
    ctx->pc = 0x7F2DC804u;
    ctx->downcount -= 3;
    // 7F2DC804: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC808:
    ctx->pc = 0x7F2DC808u;
    // 7F2DC808: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DC80C:
    ctx->pc = 0x7F2DC80Cu;
    // 7F2DC80C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2DC810u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2DC810:
    ctx->pc = 0x7F2DC810u;
    ctx->downcount -= 2;
    // 7F2DC810: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_7F2DC814:
    ctx->pc = 0x7F2DC814u;
    // 7F2DC814: bl      0x7F01ED70
    {
            ctx->lr = 0x7F2DC818u;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F2DC818:
    ctx->pc = 0x7F2DC818u;
    ctx->downcount -= 3;
    // 7F2DC818: lwz     r0, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC81C:
    ctx->pc = 0x7F2DC81Cu;
    // 7F2DC81C: cmpw    r0, r3
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

label_7F2DC820:
    ctx->pc = 0x7F2DC820u;
    // 7F2DC820: bc    4, 1, 0x7F2DC844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC844;
        }
    }

label_7F2DC824:
    ctx->pc = 0x7F2DC824u;
    ctx->downcount -= 4;
    // 7F2DC824: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC828:
    ctx->pc = 0x7F2DC828u;
    // 7F2DC828: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC82C:
    ctx->pc = 0x7F2DC82Cu;
    // 7F2DC82C: rlwinm r4, r0, 0, 12, 10
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFEFFFFFu;
    }

label_7F2DC830:
    ctx->pc = 0x7F2DC830u;
    // 7F2DC830: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC834u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC834:
    ctx->pc = 0x7F2DC834u;
    ctx->downcount -= 4;
    // 7F2DC834: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC838:
    ctx->pc = 0x7F2DC838u;
    // 7F2DC838: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC83C:
    ctx->pc = 0x7F2DC83Cu;
    // 7F2DC83C: rlwinm r4, r0, 0, 12, 10
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFEFFFFFu;
    }

label_7F2DC840:
    ctx->pc = 0x7F2DC840u;
    // 7F2DC840: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC844u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC844:
    ctx->pc = 0x7F2DC844u;
    ctx->downcount -= 2;
    // 7F2DC844: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F2DC848:
    ctx->pc = 0x7F2DC848u;
    // 7F2DC848: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC84Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC84C:
    ctx->pc = 0x7F2DC84Cu;
    ctx->downcount -= 2;
    // 7F2DC84C: cmplwi  r3, 0x0000
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

label_7F2DC850:
    ctx->pc = 0x7F2DC850u;
    // 7F2DC850: bc    12, 2, 0x7F2DC8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC8A4;
        }
    }

label_7F2DC854:
    ctx->pc = 0x7F2DC854u;
    ctx->downcount -= 1;
    // 7F2DC854: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC858u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC858:
    ctx->pc = 0x7F2DC858u;
    ctx->downcount -= 2;
    // 7F2DC858: or.   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[20];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DC85C:
    ctx->pc = 0x7F2DC85Cu;
    // 7F2DC85C: bc    12, 2, 0x7F2DC8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC8A4;
        }
    }

label_7F2DC860:
    ctx->pc = 0x7F2DC860u;
    ctx->downcount -= 2;
    // 7F2DC860: li      r3, 44
    ctx->gpr[3] = (u32)(s32)(44);

label_7F2DC864:
    ctx->pc = 0x7F2DC864u;
    // 7F2DC864: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2DC868u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2DC868:
    ctx->pc = 0x7F2DC868u;
    ctx->downcount -= 4;
    // 7F2DC868: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC86C:
    ctx->pc = 0x7F2DC86Cu;
    // 7F2DC86C: li      r4, 44
    ctx->gpr[4] = (u32)(s32)(44);

label_7F2DC870:
    ctx->pc = 0x7F2DC870u;
    // 7F2DC870: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC874:
    ctx->pc = 0x7F2DC874u;
    // 7F2DC874: bl      0x7F3C9120
    {
            ctx->lr = 0x7F2DC878u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F2DC878:
    ctx->pc = 0x7F2DC878u;
    ctx->downcount -= 5;
    // 7F2DC878: lis     r5, 512
    ctx->gpr[5] = ((u32)(s32)(512) << 16);

label_7F2DC87C:
    ctx->pc = 0x7F2DC87Cu;
    // 7F2DC87C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC880:
    ctx->pc = 0x7F2DC880u;
    // 7F2DC880: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DC884:
    ctx->pc = 0x7F2DC884u;
    // 7F2DC884: addi    r5, r5, 144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(144);

label_7F2DC888:
    ctx->pc = 0x7F2DC888u;
    // 7F2DC888: bl      0x7F04272C
    {
            ctx->lr = 0x7F2DC88Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2DC88C:
    ctx->pc = 0x7F2DC88Cu;
    ctx->downcount -= 4;
    // 7F2DC88C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC890:
    ctx->pc = 0x7F2DC890u;
    // 7F2DC890: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2DC894:
    ctx->pc = 0x7F2DC894u;
    // 7F2DC894: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DC898:
    ctx->pc = 0x7F2DC898u;
    // 7F2DC898: bl      0x7F042B74
    {
            ctx->lr = 0x7F2DC89Cu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2DC89C:
    ctx->pc = 0x7F2DC89Cu;
    ctx->downcount -= 2;
    // 7F2DC89C: lwz     r3, 0(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC8A0:
    ctx->pc = 0x7F2DC8A0u;
    // 7F2DC8A0: stw     r20, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F2DC8A4:
    ctx->pc = 0x7F2DC8A4u;
    ctx->downcount -= 2;
    // 7F2DC8A4: li      r3, 65
    ctx->gpr[3] = (u32)(s32)(65);

label_7F2DC8A8:
    ctx->pc = 0x7F2DC8A8u;
    // 7F2DC8A8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC8ACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC8AC:
    ctx->pc = 0x7F2DC8ACu;
    ctx->downcount -= 2;
    // 7F2DC8AC: cmplwi  r3, 0x0000
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

label_7F2DC8B0:
    ctx->pc = 0x7F2DC8B0u;
    // 7F2DC8B0: bc    12, 2, 0x7F2DC8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC8F4;
        }
    }

label_7F2DC8B4:
    ctx->pc = 0x7F2DC8B4u;
    ctx->downcount -= 3;
    // 7F2DC8B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DC8B8:
    ctx->pc = 0x7F2DC8B8u;
    // 7F2DC8B8: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC8BC:
    ctx->pc = 0x7F2DC8BCu;
    // 7F2DC8BC: b       0x7F2DC8E8
    {
            goto label_7F2DC8E8;
    }

label_7F2DC8C0:
    ctx->downcount -= 1;
    // 7F2DC8C0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC8C4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC8C4:
    ctx->pc = 0x7F2DC8C4u;
    ctx->downcount -= 9;
    // 7F2DC8C4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC8C8:
    // 7F2DC8C8: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2DC8CC:
    // 7F2DC8CC: addi    r0, r4, 184
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(184);

label_7F2DC8D0:
    ctx->pc = 0x7F2DC8D0u;
    // 7F2DC8D0: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC8D4:
    ctx->pc = 0x7F2DC8D4u;
    // 7F2DC8D4: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC8D8:
    // 7F2DC8D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DC8DC:
    // 7F2DC8DC: cmpwi   r0, 4
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

label_7F2DC8E0:
    ctx->pc = 0x7F2DC8E0u;
    // 7F2DC8E0: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC8E4:
    // 7F2DC8E4: bc    4, 0, 0x7F2DC8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DC8F4;
        }
    }

label_7F2DC8E8:
    ctx->downcount -= 1;
    // 7F2DC8E8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DC8ECu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DC8EC:
    ctx->downcount -= 2;
    // 7F2DC8EC: cmplwi  r3, 0x0000
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

label_7F2DC8F0:
    // 7F2DC8F0: bc    4, 2, 0x7F2DC8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DC8C0u;
                return;
            }
            goto label_7F2DC8C0;
        }
    }

label_7F2DC8F4:
    ctx->pc = 0x7F2DC8F4u;
    ctx->downcount -= 2;
    // 7F2DC8F4: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F2DC8F8:
    ctx->pc = 0x7F2DC8F8u;
    // 7F2DC8F8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DC8FCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DC8FC:
    ctx->pc = 0x7F2DC8FCu;
    ctx->downcount -= 2;
    // 7F2DC8FC: cmplwi  r3, 0x0000
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

label_7F2DC900:
    ctx->pc = 0x7F2DC900u;
    // 7F2DC900: bc    12, 2, 0x7F2DCC24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCC24;
        }
    }

label_7F2DC904:
    ctx->pc = 0x7F2DC904u;
    ctx->downcount -= 4;
    // 7F2DC904: lwz     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC908:
    ctx->pc = 0x7F2DC908u;
    // 7F2DC908: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F2DC90C:
    ctx->pc = 0x7F2DC90Cu;
    // 7F2DC90C: stw     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC910:
    ctx->pc = 0x7F2DC910u;
    // 7F2DC910: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC914u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC914:
    ctx->pc = 0x7F2DC914u;
    ctx->downcount -= 2;
    // 7F2DC914: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC918:
    ctx->pc = 0x7F2DC918u;
    // 7F2DC918: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DC91Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DC91C:
    ctx->pc = 0x7F2DC91Cu;
    ctx->downcount -= 3;
    // 7F2DC91C: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC920:
    ctx->pc = 0x7F2DC920u;
    // 7F2DC920: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F2DC924:
    ctx->pc = 0x7F2DC924u;
    // 7F2DC924: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2DC928u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2DC928:
    ctx->pc = 0x7F2DC928u;
    ctx->downcount -= 4;
    // 7F2DC928: stw     r3, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC92C:
    ctx->pc = 0x7F2DC92Cu;
    // 7F2DC92C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F2DC930:
    ctx->pc = 0x7F2DC930u;
    // 7F2DC930: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DC934:
    ctx->pc = 0x7F2DC934u;
    // 7F2DC934: bl      0x7F3C9120
    {
            ctx->lr = 0x7F2DC938u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F2DC938:
    ctx->pc = 0x7F2DC938u;
    ctx->downcount -= 4;
    // 7F2DC938: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2DC93C:
    ctx->pc = 0x7F2DC93Cu;
    // 7F2DC93C: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F2DC940:
    ctx->pc = 0x7F2DC940u;
    // 7F2DC940: li      r5, 25
    ctx->gpr[5] = (u32)(s32)(25);

label_7F2DC944:
    ctx->pc = 0x7F2DC944u;
    // 7F2DC944: bl      0x7F04272C
    {
            ctx->lr = 0x7F2DC948u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2DC948:
    ctx->pc = 0x7F2DC948u;
    ctx->downcount -= 5;
    // 7F2DC948: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC94C:
    ctx->pc = 0x7F2DC94Cu;
    // 7F2DC94C: stw     r0, 40(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC950:
    ctx->pc = 0x7F2DC950u;
    // 7F2DC950: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC954:
    ctx->pc = 0x7F2DC954u;
    // 7F2DC954: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DC958:
    ctx->pc = 0x7F2DC958u;
    // 7F2DC958: bl      0x7F2DCC40
    {
            ctx->lr = 0x7F2DC95Cu;
            goto label_7F2DCC40;
    }

label_7F2DC95C:
    ctx->pc = 0x7F2DC95Cu;
    ctx->downcount -= 13;
    // 7F2DC95C: xoris   r3, r20, 0x8000
    ctx->gpr[3] = ctx->gpr[20] ^ (0x8000u << 16);

label_7F2DC960:
    ctx->pc = 0x7F2DC960u;
    // 7F2DC960: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DC964:
    ctx->pc = 0x7F2DC964u;
    // 7F2DC964: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DC968:
    ctx->pc = 0x7F2DC968u;
    // 7F2DC968: stw     r3, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DC96C:
    ctx->pc = 0x7F2DC96Cu;
    // 7F2DC96C: addi    r5, r4, 29336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29336);

label_7F2DC970:
    ctx->pc = 0x7F2DC970u;
    // 7F2DC970: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F2DC974:
    ctx->pc = 0x7F2DC974u;
    // 7F2DC974: stw     r0, 432(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DC978:
    ctx->pc = 0x7F2DC978u;
    // 7F2DC978: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DC97C:
    ctx->pc = 0x7F2DC97Cu;
    // 7F2DC97C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC97Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC980:
    ctx->pc = 0x7F2DC980u;
    // 7F2DC980: lfd     f0, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DC984:
    ctx->pc = 0x7F2DC984u;
    // 7F2DC984: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DC984u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DC988:
    ctx->pc = 0x7F2DC988u;
    // 7F2DC988: stfs     f0, 44(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC988u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC98C:
    ctx->pc = 0x7F2DC98Cu;
    // 7F2DC98C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2DC990u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2DC990:
    ctx->pc = 0x7F2DC990u;
    ctx->downcount -= 2;
    // 7F2DC990: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC994:
    ctx->pc = 0x7F2DC994u;
    // 7F2DC994: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F2DC998u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F2DC998:
    ctx->pc = 0x7F2DC998u;
    ctx->downcount -= 4;
    // 7F2DC998: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC99C:
    ctx->pc = 0x7F2DC99Cu;
    // 7F2DC99C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC9A0:
    ctx->pc = 0x7F2DC9A0u;
    // 7F2DC9A0: ori     r4, r0, 0x0800
    ctx->gpr[4] = ctx->gpr[0] | 0x0800u;

label_7F2DC9A4:
    ctx->pc = 0x7F2DC9A4u;
    // 7F2DC9A4: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC9A8u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC9A8:
    ctx->pc = 0x7F2DC9A8u;
    ctx->downcount -= 4;
    // 7F2DC9A8: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC9AC:
    ctx->pc = 0x7F2DC9ACu;
    // 7F2DC9AC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC9B0:
    ctx->pc = 0x7F2DC9B0u;
    // 7F2DC9B0: ori     r4, r0, 0x0800
    ctx->gpr[4] = ctx->gpr[0] | 0x0800u;

label_7F2DC9B4:
    ctx->pc = 0x7F2DC9B4u;
    // 7F2DC9B4: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DC9B8u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DC9B8:
    ctx->pc = 0x7F2DC9B8u;
    ctx->downcount -= 33;
    // 7F2DC9B8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DC9BC:
    ctx->pc = 0x7F2DC9BCu;
    // 7F2DC9BC: lwz     r7, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DC9C0:
    ctx->pc = 0x7F2DC9C0u;
    // 7F2DC9C0: lwz     r11, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DC9C4:
    ctx->pc = 0x7F2DC9C4u;
    // 7F2DC9C4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2DC9C8:
    ctx->pc = 0x7F2DC9C8u;
    // 7F2DC9C8: lwz     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DC9CC:
    ctx->pc = 0x7F2DC9CCu;
    // 7F2DC9CC: lfs     f0, 24(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9CCu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC9D0:
    ctx->pc = 0x7F2DC9D0u;
    // 7F2DC9D0: stfs     f0, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC9D4:
    ctx->pc = 0x7F2DC9D4u;
    // 7F2DC9D4: lfs     f0, 36(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9D4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC9D8:
    ctx->pc = 0x7F2DC9D8u;
    // 7F2DC9D8: lwz     r10, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DC9DC:
    ctx->pc = 0x7F2DC9DCu;
    // 7F2DC9DC: stfs     f0, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC9E0:
    ctx->pc = 0x7F2DC9E0u;
    // 7F2DC9E0: lfs     f0, 28(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9E0u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC9E4:
    ctx->pc = 0x7F2DC9E4u;
    // 7F2DC9E4: lwz     r6, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DC9E8:
    ctx->pc = 0x7F2DC9E8u;
    // 7F2DC9E8: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC9EC:
    ctx->pc = 0x7F2DC9ECu;
    // 7F2DC9EC: stfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DC9F0:
    ctx->pc = 0x7F2DC9F0u;
    // 7F2DC9F0: lwz     r9, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DC9F4:
    ctx->pc = 0x7F2DC9F4u;
    // 7F2DC9F4: lfs     f0, 44(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9F4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DC9F8:
    ctx->pc = 0x7F2DC9F8u;
    // 7F2DC9F8: lwz     r5, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DC9FC:
    ctx->pc = 0x7F2DC9FCu;
    // 7F2DC9FC: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DC9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA00:
    ctx->pc = 0x7F2DCA00u;
    // 7F2DCA00: stfs     f0, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA04:
    ctx->pc = 0x7F2DCA04u;
    // 7F2DCA04: lwz     r8, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DCA08:
    ctx->pc = 0x7F2DCA08u;
    // 7F2DCA08: lwz     r4, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DCA0C:
    ctx->pc = 0x7F2DCA0Cu;
    // 7F2DCA0C: stw     r10, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DCA10:
    ctx->pc = 0x7F2DCA10u;
    // 7F2DCA10: stw     r9, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DCA14:
    ctx->pc = 0x7F2DCA14u;
    // 7F2DCA14: stw     r8, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DCA18:
    ctx->pc = 0x7F2DCA18u;
    // 7F2DCA18: stw     r7, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DCA1C:
    ctx->pc = 0x7F2DCA1Cu;
    // 7F2DCA1C: stw     r6, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DCA20:
    ctx->pc = 0x7F2DCA20u;
    // 7F2DCA20: stw     r5, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DCA24:
    ctx->pc = 0x7F2DCA24u;
    // 7F2DCA24: stw     r4, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DCA28:
    ctx->pc = 0x7F2DCA28u;
    // 7F2DCA28: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCA2C:
    ctx->pc = 0x7F2DCA2Cu;
    // 7F2DCA2C: lfs     f0, 32(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA2Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCA30:
    ctx->pc = 0x7F2DCA30u;
    // 7F2DCA30: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA34:
    ctx->pc = 0x7F2DCA34u;
    // 7F2DCA34: stfs     f0, 172(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA38:
    ctx->pc = 0x7F2DCA38u;
    // 7F2DCA38: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2DCA3Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2DCA3C:
    ctx->pc = 0x7F2DCA3Cu;
    ctx->downcount -= 4;
    // 7F2DCA3C: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2DCA40:
    ctx->pc = 0x7F2DCA40u;
    // 7F2DCA40: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DCA44:
    ctx->pc = 0x7F2DCA44u;
    // 7F2DCA44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCA48:
    ctx->pc = 0x7F2DCA48u;
    // 7F2DCA48: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2DCA4Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2DCA4C:
    ctx->pc = 0x7F2DCA4Cu;
    ctx->downcount -= 13;
    // 7F2DCA4C: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DCA50:
    ctx->pc = 0x7F2DCA50u;
    // 7F2DCA50: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2DCA54:
    ctx->pc = 0x7F2DCA54u;
    // 7F2DCA54: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F2DCA58:
    ctx->pc = 0x7F2DCA58u;
    // 7F2DCA58: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F2DCA5C:
    ctx->pc = 0x7F2DCA5Cu;
    // 7F2DCA5C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DCA60:
    ctx->pc = 0x7F2DCA60u;
    // 7F2DCA60: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA60u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DCA64:
    ctx->pc = 0x7F2DCA64u;
    // 7F2DCA64: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA64u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCA68:
    ctx->pc = 0x7F2DCA68u;
    // 7F2DCA68: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA68u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2DCA6C:
    ctx->pc = 0x7F2DCA6Cu;
    // 7F2DCA6C: stfs     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA70:
    ctx->pc = 0x7F2DCA70u;
    // 7F2DCA70: stfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA74:
    ctx->pc = 0x7F2DCA74u;
    // 7F2DCA74: stfs     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA78:
    ctx->pc = 0x7F2DCA78u;
    // 7F2DCA78: stfs     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCA78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCA7C:
    ctx->pc = 0x7F2DCA7Cu;
    // 7F2DCA7C: bl      0x7F3CC3E0
    {
            ctx->lr = 0x7F2DCA80u;
            ctx->pc = 0x7F3CC3E0u;
            return;
    }

label_7F2DCA80:
    ctx->pc = 0x7F2DCA80u;
    ctx->downcount -= 3;
    // 7F2DCA80: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCA84:
    ctx->pc = 0x7F2DCA84u;
    // 7F2DCA84: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCA88:
    ctx->pc = 0x7F2DCA88u;
    // 7F2DCA88: bl      0x7F01C018
    {
            ctx->lr = 0x7F2DCA8Cu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F2DCA8C:
    ctx->pc = 0x7F2DCA8Cu;
    ctx->downcount -= 6;
    // 7F2DCA8C: addi    r20, r1, 84
    ctx->gpr[20] = ctx->gpr[1] + (u32)(s32)(84);

label_7F2DCA90:
    ctx->pc = 0x7F2DCA90u;
    // 7F2DCA90: lis     r6, 756
    ctx->gpr[6] = ((u32)(s32)(756) << 16);

label_7F2DCA94:
    ctx->pc = 0x7F2DCA94u;
    // 7F2DCA94: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2DCA98:
    ctx->pc = 0x7F2DCA98u;
    // 7F2DCA98: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F2DCA9C:
    ctx->pc = 0x7F2DCA9Cu;
    // 7F2DCA9C: addi    r6, r6, -16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16);

label_7F2DCAA0:
    ctx->pc = 0x7F2DCAA0u;
    // 7F2DCAA0: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCAA4u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCAA4:
    ctx->pc = 0x7F2DCAA4u;
    ctx->downcount -= 5;
    // 7F2DCAA4: stw     r3, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCAA8:
    ctx->pc = 0x7F2DCAA8u;
    // 7F2DCAA8: lwz     r3, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCAAC:
    ctx->pc = 0x7F2DCAACu;
    // 7F2DCAAC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCAB0:
    ctx->pc = 0x7F2DCAB0u;
    // 7F2DCAB0: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DCAB4:
    ctx->pc = 0x7F2DCAB4u;
    // 7F2DCAB4: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCAB8u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCAB8:
    ctx->pc = 0x7F2DCAB8u;
    ctx->downcount -= 3;
    // 7F2DCAB8: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCABC:
    ctx->pc = 0x7F2DCABCu;
    // 7F2DCABC: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCAC0:
    ctx->pc = 0x7F2DCAC0u;
    // 7F2DCAC0: bl      0x7F01C018
    {
            ctx->lr = 0x7F2DCAC4u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F2DCAC4:
    ctx->pc = 0x7F2DCAC4u;
    ctx->downcount -= 7;
    // 7F2DCAC4: addi    r22, r1, 100
    ctx->gpr[22] = ctx->gpr[1] + (u32)(s32)(100);

label_7F2DCAC8:
    ctx->pc = 0x7F2DCAC8u;
    // 7F2DCAC8: addi    r21, r1, 116
    ctx->gpr[21] = ctx->gpr[1] + (u32)(s32)(116);

label_7F2DCACC:
    ctx->pc = 0x7F2DCACCu;
    // 7F2DCACC: lis     r6, 756
    ctx->gpr[6] = ((u32)(s32)(756) << 16);

label_7F2DCAD0:
    ctx->pc = 0x7F2DCAD0u;
    // 7F2DCAD0: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2DCAD4:
    ctx->pc = 0x7F2DCAD4u;
    // 7F2DCAD4: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2DCAD8:
    ctx->pc = 0x7F2DCAD8u;
    // 7F2DCAD8: addi    r6, r6, -16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16);

label_7F2DCADC:
    ctx->pc = 0x7F2DCADCu;
    // 7F2DCADC: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCAE0u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCAE0:
    ctx->pc = 0x7F2DCAE0u;
    ctx->downcount -= 5;
    // 7F2DCAE0: stw     r3, 52(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCAE4:
    ctx->pc = 0x7F2DCAE4u;
    // 7F2DCAE4: lwz     r3, 52(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCAE8:
    ctx->pc = 0x7F2DCAE8u;
    // 7F2DCAE8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCAEC:
    ctx->pc = 0x7F2DCAECu;
    // 7F2DCAEC: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DCAF0:
    ctx->pc = 0x7F2DCAF0u;
    // 7F2DCAF0: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCAF4u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCAF4:
    ctx->pc = 0x7F2DCAF4u;
    ctx->downcount -= 33;
    // 7F2DCAF4: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCAF8:
    ctx->pc = 0x7F2DCAF8u;
    // 7F2DCAF8: lwz     r7, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DCAFC:
    ctx->pc = 0x7F2DCAFCu;
    // 7F2DCAFC: lwz     r11, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DCB00:
    ctx->pc = 0x7F2DCB00u;
    // 7F2DCB00: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2DCB04:
    ctx->pc = 0x7F2DCB04u;
    // 7F2DCB04: lwz     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCB08:
    ctx->pc = 0x7F2DCB08u;
    // 7F2DCB08: lfs     f0, 24(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB08u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCB0C:
    ctx->pc = 0x7F2DCB0Cu;
    // 7F2DCB0C: stfs     f0, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB10:
    ctx->pc = 0x7F2DCB10u;
    // 7F2DCB10: lfs     f0, 36(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB10u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCB14:
    ctx->pc = 0x7F2DCB14u;
    // 7F2DCB14: lwz     r10, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DCB18:
    ctx->pc = 0x7F2DCB18u;
    // 7F2DCB18: stfs     f0, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB1C:
    ctx->pc = 0x7F2DCB1Cu;
    // 7F2DCB1C: lfs     f0, 28(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB1Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCB20:
    ctx->pc = 0x7F2DCB20u;
    // 7F2DCB20: lwz     r6, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DCB24:
    ctx->pc = 0x7F2DCB24u;
    // 7F2DCB24: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB28:
    ctx->pc = 0x7F2DCB28u;
    // 7F2DCB28: stfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB2C:
    ctx->pc = 0x7F2DCB2Cu;
    // 7F2DCB2C: lwz     r9, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DCB30:
    ctx->pc = 0x7F2DCB30u;
    // 7F2DCB30: lfs     f0, 44(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB30u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCB34:
    ctx->pc = 0x7F2DCB34u;
    // 7F2DCB34: lwz     r5, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DCB38:
    ctx->pc = 0x7F2DCB38u;
    // 7F2DCB38: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB3C:
    ctx->pc = 0x7F2DCB3Cu;
    // 7F2DCB3C: stfs     f0, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB40:
    ctx->pc = 0x7F2DCB40u;
    // 7F2DCB40: lwz     r8, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DCB44:
    ctx->pc = 0x7F2DCB44u;
    // 7F2DCB44: lwz     r4, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DCB48:
    ctx->pc = 0x7F2DCB48u;
    // 7F2DCB48: stw     r10, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DCB4C:
    ctx->pc = 0x7F2DCB4Cu;
    // 7F2DCB4C: stw     r9, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DCB50:
    ctx->pc = 0x7F2DCB50u;
    // 7F2DCB50: stw     r8, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DCB54:
    ctx->pc = 0x7F2DCB54u;
    // 7F2DCB54: stw     r7, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DCB58:
    ctx->pc = 0x7F2DCB58u;
    // 7F2DCB58: stw     r6, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DCB5C:
    ctx->pc = 0x7F2DCB5Cu;
    // 7F2DCB5C: stw     r5, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DCB60:
    ctx->pc = 0x7F2DCB60u;
    // 7F2DCB60: stw     r4, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DCB64:
    ctx->pc = 0x7F2DCB64u;
    // 7F2DCB64: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCB68:
    ctx->pc = 0x7F2DCB68u;
    // 7F2DCB68: lfs     f0, 32(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB68u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCB6C:
    ctx->pc = 0x7F2DCB6Cu;
    // 7F2DCB6C: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB70:
    ctx->pc = 0x7F2DCB70u;
    // 7F2DCB70: stfs     f0, 172(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCB74:
    ctx->pc = 0x7F2DCB74u;
    // 7F2DCB74: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2DCB78u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2DCB78:
    ctx->pc = 0x7F2DCB78u;
    ctx->downcount -= 4;
    // 7F2DCB78: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2DCB7C:
    ctx->pc = 0x7F2DCB7Cu;
    // 7F2DCB7C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DCB80:
    ctx->pc = 0x7F2DCB80u;
    // 7F2DCB80: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCB84:
    ctx->pc = 0x7F2DCB84u;
    // 7F2DCB84: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2DCB88u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2DCB88:
    ctx->pc = 0x7F2DCB88u;
    ctx->downcount -= 13;
    // 7F2DCB88: lwz     r6, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DCB8C:
    ctx->pc = 0x7F2DCB8Cu;
    // 7F2DCB8C: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F2DCB90:
    ctx->pc = 0x7F2DCB90u;
    // 7F2DCB90: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F2DCB94:
    ctx->pc = 0x7F2DCB94u;
    // 7F2DCB94: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F2DCB98:
    ctx->pc = 0x7F2DCB98u;
    // 7F2DCB98: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DCB9C:
    ctx->pc = 0x7F2DCB9Cu;
    // 7F2DCB9C: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCB9Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DCBA0:
    ctx->pc = 0x7F2DCBA0u;
    // 7F2DCBA0: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBA0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DCBA4:
    ctx->pc = 0x7F2DCBA4u;
    // 7F2DCBA4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBA4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2DCBA8:
    ctx->pc = 0x7F2DCBA8u;
    // 7F2DCBA8: stfs     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCBAC:
    ctx->pc = 0x7F2DCBACu;
    // 7F2DCBAC: stfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCBB0:
    ctx->pc = 0x7F2DCBB0u;
    // 7F2DCBB0: stfs     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCBB4:
    ctx->pc = 0x7F2DCBB4u;
    // 7F2DCBB4: stfs     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DCBB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DCBB8:
    ctx->pc = 0x7F2DCBB8u;
    // 7F2DCBB8: bl      0x7F3CC3E0
    {
            ctx->lr = 0x7F2DCBBCu;
            ctx->pc = 0x7F3CC3E0u;
            return;
    }

label_7F2DCBBC:
    ctx->pc = 0x7F2DCBBCu;
    ctx->downcount -= 3;
    // 7F2DCBBC: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCBC0:
    ctx->pc = 0x7F2DCBC0u;
    // 7F2DCBC0: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCBC4:
    ctx->pc = 0x7F2DCBC4u;
    // 7F2DCBC4: bl      0x7F01C018
    {
            ctx->lr = 0x7F2DCBC8u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F2DCBC8:
    ctx->pc = 0x7F2DCBC8u;
    ctx->downcount -= 5;
    // 7F2DCBC8: lis     r6, 756
    ctx->gpr[6] = ((u32)(s32)(756) << 16);

label_7F2DCBCC:
    ctx->pc = 0x7F2DCBCCu;
    // 7F2DCBCC: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2DCBD0:
    ctx->pc = 0x7F2DCBD0u;
    // 7F2DCBD0: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F2DCBD4:
    ctx->pc = 0x7F2DCBD4u;
    // 7F2DCBD4: addi    r6, r6, -16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16);

label_7F2DCBD8:
    ctx->pc = 0x7F2DCBD8u;
    // 7F2DCBD8: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCBDCu;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCBDC:
    ctx->pc = 0x7F2DCBDCu;
    ctx->downcount -= 5;
    // 7F2DCBDC: stw     r3, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCBE0:
    ctx->pc = 0x7F2DCBE0u;
    // 7F2DCBE0: lwz     r3, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCBE4:
    ctx->pc = 0x7F2DCBE4u;
    // 7F2DCBE4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCBE8:
    ctx->pc = 0x7F2DCBE8u;
    // 7F2DCBE8: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DCBEC:
    ctx->pc = 0x7F2DCBECu;
    // 7F2DCBEC: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCBF0u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCBF0:
    ctx->pc = 0x7F2DCBF0u;
    ctx->downcount -= 3;
    // 7F2DCBF0: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCBF4:
    ctx->pc = 0x7F2DCBF4u;
    // 7F2DCBF4: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCBF8:
    ctx->pc = 0x7F2DCBF8u;
    // 7F2DCBF8: bl      0x7F01C018
    {
            ctx->lr = 0x7F2DCBFCu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F2DCBFC:
    ctx->pc = 0x7F2DCBFCu;
    ctx->downcount -= 5;
    // 7F2DCBFC: lis     r6, 756
    ctx->gpr[6] = ((u32)(s32)(756) << 16);

label_7F2DCC00:
    ctx->pc = 0x7F2DCC00u;
    // 7F2DCC00: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2DCC04:
    ctx->pc = 0x7F2DCC04u;
    // 7F2DCC04: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2DCC08:
    ctx->pc = 0x7F2DCC08u;
    // 7F2DCC08: addi    r6, r6, -16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16);

label_7F2DCC0C:
    ctx->pc = 0x7F2DCC0Cu;
    // 7F2DCC0C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCC10u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCC10:
    ctx->pc = 0x7F2DCC10u;
    ctx->downcount -= 5;
    // 7F2DCC10: stw     r3, 60(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCC14:
    ctx->pc = 0x7F2DCC14u;
    // 7F2DCC14: lwz     r3, 60(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCC18:
    ctx->pc = 0x7F2DCC18u;
    // 7F2DCC18: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCC1C:
    ctx->pc = 0x7F2DCC1Cu;
    // 7F2DCC1C: rlwinm r4, r0, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF7FFu;
    }

label_7F2DCC20:
    ctx->pc = 0x7F2DCC20u;
    // 7F2DCC20: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCC24u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCC24:
    ctx->pc = 0x7F2DCC24u;
    ctx->downcount -= 18;
    // 7F2DCC24: stw     r29, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DCC28:
    ctx->pc = 0x7F2DCC28u;
    // 7F2DCC28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DCC2C:
    ctx->pc = 0x7F2DCC2Cu;
    // 7F2DCC2C: lmw     r16, 448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DCC30:
    ctx->pc = 0x7F2DCC30u;
    // 7F2DCC30: lwz     r0, 516(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCC34:
    ctx->pc = 0x7F2DCC34u;
    // 7F2DCC34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCC38:
    ctx->pc = 0x7F2DCC38u;
    // 7F2DCC38: addi    r1, r1, 512
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(512);

label_7F2DCC3C:
    ctx->pc = 0x7F2DCC3Cu;
    // 7F2DCC3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCC40:
    ctx->pc = 0x7F2DCC40u;
    ctx->downcount -= 7;
    // 7F2DCC40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCC44:
    ctx->pc = 0x7F2DCC44u;
    // 7F2DCC44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCC48:
    ctx->pc = 0x7F2DCC48u;
    // 7F2DCC48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCC4C:
    ctx->pc = 0x7F2DCC4Cu;
    // 7F2DCC4C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DCC50:
    ctx->pc = 0x7F2DCC50u;
    // 7F2DCC50: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCC54:
    ctx->pc = 0x7F2DCC54u;
    // 7F2DCC54: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DCC58:
    ctx->pc = 0x7F2DCC58u;
    // 7F2DCC58: bl      0x7F01B234
    {
            ctx->lr = 0x7F2DCC5Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F2DCC5C:
    ctx->pc = 0x7F2DCC5Cu;
    ctx->downcount -= 7;
    // 7F2DCC5C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCC60:
    ctx->pc = 0x7F2DCC60u;
    // 7F2DCC60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCC64:
    ctx->pc = 0x7F2DCC64u;
    // 7F2DCC64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DCC68:
    ctx->pc = 0x7F2DCC68u;
    // 7F2DCC68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCC6C:
    ctx->pc = 0x7F2DCC6Cu;
    // 7F2DCC6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DCC70:
    ctx->pc = 0x7F2DCC70u;
    // 7F2DCC70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCC74:
    ctx->pc = 0x7F2DCC74u;
    ctx->downcount -= 3;
    // 7F2DCC74: cmpwi   r3, 0
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

label_7F2DCC78:
    ctx->pc = 0x7F2DCC78u;
    // 7F2DCC78: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DCC7C:
    ctx->pc = 0x7F2DCC7Cu;
    // 7F2DCC7C: bc    4, 0, 0x7F2DCC84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCC84;
        }
    }

label_7F2DCC80:
    ctx->pc = 0x7F2DCC80u;
    ctx->downcount -= 1;
    // 7F2DCC80: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F2DCC84:
    ctx->pc = 0x7F2DCC84u;
    ctx->downcount -= 46;
    // 7F2DCC84: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DCC88:
    ctx->pc = 0x7F2DCC88u;
    // 7F2DCC88: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F2DCC8C:
    ctx->pc = 0x7F2DCC8Cu;
    // 7F2DCC8C: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DCC90:
    ctx->pc = 0x7F2DCC90u;
    // 7F2DCC90: mulli   r3, r0, 5
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F2DCC94:
    ctx->pc = 0x7F2DCC94u;
    // 7F2DCC94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCC98:
    ctx->pc = 0x7F2DCC98u;
    ctx->downcount -= 21;
    // 7F2DCC98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCC9C:
    ctx->pc = 0x7F2DCC9Cu;
    // 7F2DCC9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCCA0:
    ctx->pc = 0x7F2DCCA0u;
    // 7F2DCCA0: li      r5, 336
    ctx->gpr[5] = (u32)(s32)(336);

label_7F2DCCA4:
    ctx->pc = 0x7F2DCCA4u;
    // 7F2DCCA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DCCA8:
    ctx->pc = 0x7F2DCCA8u;
    // 7F2DCCA8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCCAC:
    ctx->pc = 0x7F2DCCACu;
    // 7F2DCCAC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DCCB0:
    ctx->pc = 0x7F2DCCB0u;
    // 7F2DCCB0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCCB4:
    ctx->pc = 0x7F2DCCB4u;
    // 7F2DCCB4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DCCB8:
    ctx->pc = 0x7F2DCCB8u;
    // 7F2DCCB8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2DCCBC:
    ctx->pc = 0x7F2DCCBCu;
    // 7F2DCCBC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2DCCC0:
    ctx->pc = 0x7F2DCCC0u;
    // 7F2DCCC0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2DCCC4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2DCCC4:
    ctx->pc = 0x7F2DCCC4u;
    ctx->downcount -= 2;
    // 7F2DCCC4: or.   r31, r3, r3
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

label_7F2DCCC8:
    ctx->pc = 0x7F2DCCC8u;
    // 7F2DCCC8: bc    12, 2, 0x7F2DCD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCD30;
        }
    }

label_7F2DCCCC:
    ctx->pc = 0x7F2DCCCCu;
    ctx->downcount -= 5;
    // 7F2DCCCC: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DCCD0:
    ctx->pc = 0x7F2DCCD0u;
    // 7F2DCCD0: lis     r5, 32558
    ctx->gpr[5] = ((u32)(s32)(32558) << 16);

label_7F2DCCD4:
    ctx->pc = 0x7F2DCCD4u;
    // 7F2DCCD4: addi    r4, r4, -19248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19248);

label_7F2DCCD8:
    ctx->pc = 0x7F2DCCD8u;
    // 7F2DCCD8: addi    r5, r5, -16768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16768);

label_7F2DCCDC:
    ctx->pc = 0x7F2DCCDCu;
    // 7F2DCCDC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2DCCE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2DCCE0:
    ctx->pc = 0x7F2DCCE0u;
    ctx->downcount -= 14;
    // 7F2DCCE0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCCE4:
    ctx->pc = 0x7F2DCCE4u;
    // 7F2DCCE4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2DCCE8:
    ctx->pc = 0x7F2DCCE8u;
    // 7F2DCCE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DCCEC:
    ctx->pc = 0x7F2DCCECu;
    // 7F2DCCEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DCCF0:
    ctx->pc = 0x7F2DCCF0u;
    // 7F2DCCF0: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2DCCF4:
    ctx->pc = 0x7F2DCCF4u;
    // 7F2DCCF4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2DCCF8:
    ctx->pc = 0x7F2DCCF8u;
    // 7F2DCCF8: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DCCFC:
    ctx->pc = 0x7F2DCCFCu;
    // 7F2DCCFC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DCD00:
    ctx->pc = 0x7F2DCD00u;
    // 7F2DCD00: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DCD04:
    ctx->pc = 0x7F2DCD04u;
    // 7F2DCD04: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DCD08:
    ctx->pc = 0x7F2DCD08u;
    // 7F2DCD08: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DCD0C:
    ctx->pc = 0x7F2DCD0Cu;
    // 7F2DCD0C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DCD10:
    ctx->pc = 0x7F2DCD10u;
    // 7F2DCD10: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCD14:
    ctx->pc = 0x7F2DCD14u;
    // 7F2DCD14: bl      0x7F2DBF90
    {
            ctx->lr = 0x7F2DCD18u;
            ctx->pc = 0x7F2DBF90u;
            return;
    }

label_7F2DCD18:
    ctx->pc = 0x7F2DCD18u;
    ctx->downcount -= 2;
    // 7F2DCD18: cmpwi   r3, 0
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

label_7F2DCD1C:
    ctx->pc = 0x7F2DCD1Cu;
    // 7F2DCD1C: bc    4, 0, 0x7F2DCD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCD30;
        }
    }

label_7F2DCD20:
    ctx->pc = 0x7F2DCD20u;
    ctx->downcount -= 2;
    // 7F2DCD20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DCD24:
    ctx->pc = 0x7F2DCD24u;
    // 7F2DCD24: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DCD28u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DCD28:
    ctx->pc = 0x7F2DCD28u;
    ctx->downcount -= 2;
    // 7F2DCD28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DCD2C:
    ctx->pc = 0x7F2DCD2Cu;
    // 7F2DCD2C: b       0x7F2DCD34
    {
            goto label_7F2DCD34;
    }

label_7F2DCD30:
    ctx->pc = 0x7F2DCD30u;
    ctx->downcount -= 1;
    // 7F2DCD30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DCD34:
    ctx->pc = 0x7F2DCD34u;
    ctx->downcount -= 16;
    // 7F2DCD34: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DCD38:
    ctx->pc = 0x7F2DCD38u;
    // 7F2DCD38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCD3C:
    ctx->pc = 0x7F2DCD3Cu;
    // 7F2DCD3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCD40:
    ctx->pc = 0x7F2DCD40u;
    // 7F2DCD40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DCD44:
    ctx->pc = 0x7F2DCD44u;
    // 7F2DCD44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCD48:
    ctx->pc = 0x7F2DCD48u;
    ctx->downcount -= 11;
    // 7F2DCD48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCD4C:
    ctx->pc = 0x7F2DCD4Cu;
    // 7F2DCD4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCD50:
    ctx->pc = 0x7F2DCD50u;
    // 7F2DCD50: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2DCD54:
    ctx->pc = 0x7F2DCD54u;
    // 7F2DCD54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCD58:
    ctx->pc = 0x7F2DCD58u;
    // 7F2DCD58: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DCD5C:
    ctx->pc = 0x7F2DCD5Cu;
    // 7F2DCD5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCD60:
    ctx->pc = 0x7F2DCD60u;
    // 7F2DCD60: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F2DCD64:
    ctx->pc = 0x7F2DCD64u;
    // 7F2DCD64: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCD68:
    ctx->pc = 0x7F2DCD68u;
    // 7F2DCD68: lha     r0, 318(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(318);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DCD6C:
    ctx->pc = 0x7F2DCD6Cu;
    // 7F2DCD6C: cmpwi   r0, 1
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

label_7F2DCD70:
    ctx->pc = 0x7F2DCD70u;
    // 7F2DCD70: bc    4, 2, 0x7F2DCDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCDC0;
        }
    }

label_7F2DCD74:
    ctx->pc = 0x7F2DCD74u;
    ctx->downcount -= 3;
    // 7F2DCD74: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCD78:
    ctx->pc = 0x7F2DCD78u;
    // 7F2DCD78: cmpwi   r0, 0
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

label_7F2DCD7C:
    ctx->pc = 0x7F2DCD7Cu;
    // 7F2DCD7C: bc    4, 2, 0x7F2DCDE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCDE4;
        }
    }

label_7F2DCD80:
    ctx->pc = 0x7F2DCD80u;
    ctx->downcount -= 4;
    // 7F2DCD80: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCD84:
    ctx->pc = 0x7F2DCD84u;
    // 7F2DCD84: lwz     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCD88:
    ctx->pc = 0x7F2DCD88u;
    // 7F2DCD88: rlwinm. r0, r0, 0, 29, 29
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

label_7F2DCD8C:
    ctx->pc = 0x7F2DCD8Cu;
    // 7F2DCD8C: bc    12, 2, 0x7F2DCDA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCDA4;
        }
    }

label_7F2DCD90:
    ctx->pc = 0x7F2DCD90u;
    ctx->downcount -= 2;
    // 7F2DCD90: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCD94:
    ctx->pc = 0x7F2DCD94u;
    // 7F2DCD94: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCD98u;
            goto label_7F2DCE6C;
    }

label_7F2DCD98:
    ctx->pc = 0x7F2DCD98u;
    ctx->downcount -= 2;
    // 7F2DCD98: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCD9C:
    ctx->pc = 0x7F2DCD9Cu;
    // 7F2DCD9C: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCDA0u;
            goto label_7F2DCE6C;
    }

label_7F2DCDA0:
    ctx->pc = 0x7F2DCDA0u;
    ctx->downcount -= 1;
    // 7F2DCDA0: b       0x7F2DCDE4
    {
            goto label_7F2DCDE4;
    }

label_7F2DCDA4:
    ctx->pc = 0x7F2DCDA4u;
    ctx->downcount -= 2;
    // 7F2DCDA4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCDA8:
    ctx->pc = 0x7F2DCDA8u;
    // 7F2DCDA8: bl      0x7F2DCE58
    {
            ctx->lr = 0x7F2DCDACu;
            goto label_7F2DCE58;
    }

label_7F2DCDAC:
    ctx->pc = 0x7F2DCDACu;
    ctx->downcount -= 2;
    // 7F2DCDAC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCDB0:
    ctx->pc = 0x7F2DCDB0u;
    // 7F2DCDB0: bl      0x7F2DCE58
    {
            ctx->lr = 0x7F2DCDB4u;
            goto label_7F2DCE58;
    }

label_7F2DCDB4:
    ctx->pc = 0x7F2DCDB4u;
    ctx->downcount -= 3;
    // 7F2DCDB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DCDB8:
    ctx->pc = 0x7F2DCDB8u;
    // 7F2DCDB8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCDBC:
    ctx->pc = 0x7F2DCDBCu;
    // 7F2DCDBC: b       0x7F2DCDE4
    {
            goto label_7F2DCDE4;
    }

label_7F2DCDC0:
    ctx->pc = 0x7F2DCDC0u;
    ctx->downcount -= 3;
    // 7F2DCDC0: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCDC4:
    ctx->pc = 0x7F2DCDC4u;
    // 7F2DCDC4: cmpwi   r0, 1
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

label_7F2DCDC8:
    ctx->pc = 0x7F2DCDC8u;
    // 7F2DCDC8: bc    4, 2, 0x7F2DCDE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCDE4;
        }
    }

label_7F2DCDCC:
    ctx->pc = 0x7F2DCDCCu;
    ctx->downcount -= 2;
    // 7F2DCDCC: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCDD0:
    ctx->pc = 0x7F2DCDD0u;
    // 7F2DCDD0: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCDD4u;
            goto label_7F2DCE6C;
    }

label_7F2DCDD4:
    ctx->pc = 0x7F2DCDD4u;
    ctx->downcount -= 2;
    // 7F2DCDD4: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCDD8:
    ctx->pc = 0x7F2DCDD8u;
    // 7F2DCDD8: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCDDCu;
            goto label_7F2DCE6C;
    }

label_7F2DCDDC:
    ctx->pc = 0x7F2DCDDCu;
    ctx->downcount -= 2;
    // 7F2DCDDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DCDE0:
    ctx->pc = 0x7F2DCDE0u;
    // 7F2DCDE0: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCDE4:
    ctx->pc = 0x7F2DCDE4u;
    ctx->downcount -= 3;
    // 7F2DCDE4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCDE8:
    ctx->pc = 0x7F2DCDE8u;
    // 7F2DCDE8: cmpwi   r0, 1
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

label_7F2DCDEC:
    ctx->pc = 0x7F2DCDECu;
    // 7F2DCDEC: bc    4, 2, 0x7F2DCE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCE44;
        }
    }

label_7F2DCDF0:
    ctx->pc = 0x7F2DCDF0u;
    ctx->downcount -= 4;
    // 7F2DCDF0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCDF4:
    ctx->pc = 0x7F2DCDF4u;
    // 7F2DCDF4: lwz     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCDF8:
    ctx->pc = 0x7F2DCDF8u;
    // 7F2DCDF8: cmpwi   r0, 0
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

label_7F2DCDFC:
    ctx->pc = 0x7F2DCDFCu;
    // 7F2DCDFC: bc    4, 2, 0x7F2DCE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DCE24;
        }
    }

label_7F2DCE00:
    ctx->pc = 0x7F2DCE00u;
    ctx->downcount -= 4;
    // 7F2DCE00: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCE04:
    ctx->pc = 0x7F2DCE04u;
    // 7F2DCE04: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE08:
    ctx->pc = 0x7F2DCE08u;
    // 7F2DCE08: rlwinm r4, r0, 0, 22, 20
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFBFFu;
    }

label_7F2DCE0C:
    ctx->pc = 0x7F2DCE0Cu;
    // 7F2DCE0C: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCE10u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCE10:
    ctx->pc = 0x7F2DCE10u;
    ctx->downcount -= 4;
    // 7F2DCE10: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCE14:
    ctx->pc = 0x7F2DCE14u;
    // 7F2DCE14: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE18:
    ctx->pc = 0x7F2DCE18u;
    // 7F2DCE18: rlwinm r4, r0, 0, 22, 20
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFBFFu;
    }

label_7F2DCE1C:
    ctx->pc = 0x7F2DCE1Cu;
    // 7F2DCE1C: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCE20u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCE20:
    ctx->pc = 0x7F2DCE20u;
    ctx->downcount -= 1;
    // 7F2DCE20: b       0x7F2DCE44
    {
            goto label_7F2DCE44;
    }

label_7F2DCE24:
    ctx->pc = 0x7F2DCE24u;
    ctx->downcount -= 4;
    // 7F2DCE24: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCE28:
    ctx->pc = 0x7F2DCE28u;
    // 7F2DCE28: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE2C:
    ctx->pc = 0x7F2DCE2Cu;
    // 7F2DCE2C: ori     r4, r0, 0x0400
    ctx->gpr[4] = ctx->gpr[0] | 0x0400u;

label_7F2DCE30:
    ctx->pc = 0x7F2DCE30u;
    // 7F2DCE30: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCE34u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCE34:
    ctx->pc = 0x7F2DCE34u;
    ctx->downcount -= 4;
    // 7F2DCE34: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCE38:
    ctx->pc = 0x7F2DCE38u;
    // 7F2DCE38: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE3C:
    ctx->pc = 0x7F2DCE3Cu;
    // 7F2DCE3C: ori     r4, r0, 0x0400
    ctx->gpr[4] = ctx->gpr[0] | 0x0400u;

label_7F2DCE40:
    ctx->pc = 0x7F2DCE40u;
    // 7F2DCE40: bl      0x7F2DB16C
    {
            ctx->lr = 0x7F2DCE44u;
            ctx->pc = 0x7F2DB16Cu;
            return;
    }

label_7F2DCE44:
    ctx->pc = 0x7F2DCE44u;
    ctx->downcount -= 6;
    // 7F2DCE44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE48:
    ctx->pc = 0x7F2DCE48u;
    // 7F2DCE48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DCE4C:
    ctx->pc = 0x7F2DCE4Cu;
    // 7F2DCE4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCE50:
    ctx->pc = 0x7F2DCE50u;
    // 7F2DCE50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DCE54:
    ctx->pc = 0x7F2DCE54u;
    // 7F2DCE54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCE58:
    ctx->pc = 0x7F2DCE58u;
    ctx->downcount -= 5;
    // 7F2DCE58: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE5C:
    ctx->pc = 0x7F2DCE5Cu;
    // 7F2DCE5C: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_7F2DCE60:
    ctx->pc = 0x7F2DCE60u;
    // 7F2DCE60: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCE64:
    ctx->pc = 0x7F2DCE64u;
    // 7F2DCE64: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCE68:
    ctx->pc = 0x7F2DCE68u;
    // 7F2DCE68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCE6C:
    ctx->pc = 0x7F2DCE6Cu;
    ctx->downcount -= 5;
    // 7F2DCE6C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCE70:
    ctx->pc = 0x7F2DCE70u;
    // 7F2DCE70: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F2DCE74:
    ctx->pc = 0x7F2DCE74u;
    // 7F2DCE74: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCE78:
    ctx->pc = 0x7F2DCE78u;
    // 7F2DCE78: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCE7C:
    ctx->pc = 0x7F2DCE7Cu;
    // 7F2DCE7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCE80:
    ctx->pc = 0x7F2DCE80u;
    ctx->downcount -= 7;
    // 7F2DCE80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCE84:
    ctx->pc = 0x7F2DCE84u;
    // 7F2DCE84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCE88:
    ctx->pc = 0x7F2DCE88u;
    // 7F2DCE88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCE8C:
    ctx->pc = 0x7F2DCE8Cu;
    // 7F2DCE8C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DCE90:
    ctx->pc = 0x7F2DCE90u;
    // 7F2DCE90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCE94:
    ctx->pc = 0x7F2DCE94u;
    // 7F2DCE94: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCE98:
    ctx->pc = 0x7F2DCE98u;
    // 7F2DCE98: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F2DCE9Cu;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F2DCE9C:
    ctx->pc = 0x7F2DCE9Cu;
    ctx->downcount -= 2;
    // 7F2DCE9C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCEA0:
    ctx->pc = 0x7F2DCEA0u;
    // 7F2DCEA0: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F2DCEA4u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F2DCEA4:
    ctx->pc = 0x7F2DCEA4u;
    ctx->downcount -= 6;
    // 7F2DCEA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCEA8:
    ctx->pc = 0x7F2DCEA8u;
    // 7F2DCEA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DCEAC:
    ctx->pc = 0x7F2DCEACu;
    // 7F2DCEAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCEB0:
    ctx->pc = 0x7F2DCEB0u;
    // 7F2DCEB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DCEB4:
    ctx->pc = 0x7F2DCEB4u;
    // 7F2DCEB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCEB8:
    ctx->pc = 0x7F2DCEB8u;
    ctx->downcount -= 22;
    // 7F2DCEB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCEBC:
    ctx->pc = 0x7F2DCEBCu;
    // 7F2DCEBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCEC0:
    ctx->pc = 0x7F2DCEC0u;
    // 7F2DCEC0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F2DCEC4:
    ctx->pc = 0x7F2DCEC4u;
    // 7F2DCEC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCEC8:
    ctx->pc = 0x7F2DCEC8u;
    // 7F2DCEC8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DCECC:
    ctx->pc = 0x7F2DCECCu;
    // 7F2DCECC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCED0:
    ctx->pc = 0x7F2DCED0u;
    // 7F2DCED0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DCED4:
    ctx->pc = 0x7F2DCED4u;
    // 7F2DCED4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2DCED8:
    ctx->pc = 0x7F2DCED8u;
    // 7F2DCED8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2DCEDC:
    ctx->pc = 0x7F2DCEDCu;
    // 7F2DCEDC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2DCEE0:
    ctx->pc = 0x7F2DCEE0u;
    // 7F2DCEE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DCEE4:
    ctx->pc = 0x7F2DCEE4u;
    // 7F2DCEE4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2DCEE8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2DCEE8:
    ctx->pc = 0x7F2DCEE8u;
    ctx->downcount -= 6;
    // 7F2DCEE8: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DCEEC:
    ctx->pc = 0x7F2DCEECu;
    // 7F2DCEEC: lis     r5, 32558
    ctx->gpr[5] = ((u32)(s32)(32558) << 16);

label_7F2DCEF0:
    ctx->pc = 0x7F2DCEF0u;
    // 7F2DCEF0: addi    r4, r4, -12984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12984);

label_7F2DCEF4:
    ctx->pc = 0x7F2DCEF4u;
    // 7F2DCEF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCEF8:
    ctx->pc = 0x7F2DCEF8u;
    // 7F2DCEF8: addi    r5, r5, -12672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12672);

label_7F2DCEFC:
    ctx->pc = 0x7F2DCEFCu;
    // 7F2DCEFC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2DCF00u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2DCF00:
    ctx->pc = 0x7F2DCF00u;
    ctx->downcount -= 16;
    // 7F2DCF00: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCF04:
    ctx->pc = 0x7F2DCF04u;
    // 7F2DCF04: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F2DCF08:
    ctx->pc = 0x7F2DCF08u;
    // 7F2DCF08: lis     r6, 244
    ctx->gpr[6] = ((u32)(s32)(244) << 16);

label_7F2DCF0C:
    ctx->pc = 0x7F2DCF0Cu;
    // 7F2DCF0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DCF10:
    ctx->pc = 0x7F2DCF10u;
    // 7F2DCF10: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F2DCF14:
    ctx->pc = 0x7F2DCF14u;
    // 7F2DCF14: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F2DCF18:
    ctx->pc = 0x7F2DCF18u;
    // 7F2DCF18: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DCF1C:
    ctx->pc = 0x7F2DCF1Cu;
    // 7F2DCF1C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DCF20:
    ctx->pc = 0x7F2DCF20u;
    // 7F2DCF20: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DCF24:
    ctx->pc = 0x7F2DCF24u;
    // 7F2DCF24: addi    r5, r30, 16
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16);

label_7F2DCF28:
    ctx->pc = 0x7F2DCF28u;
    // 7F2DCF28: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DCF2C:
    ctx->pc = 0x7F2DCF2Cu;
    // 7F2DCF2C: addi    r6, r6, -32
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32);

label_7F2DCF30:
    ctx->pc = 0x7F2DCF30u;
    // 7F2DCF30: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DCF34:
    ctx->pc = 0x7F2DCF34u;
    // 7F2DCF34: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DCF38:
    ctx->pc = 0x7F2DCF38u;
    // 7F2DCF38: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCF3C:
    ctx->pc = 0x7F2DCF3Cu;
    // 7F2DCF3C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCF40u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCF40:
    ctx->pc = 0x7F2DCF40u;
    ctx->downcount -= 7;
    // 7F2DCF40: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCF44:
    ctx->pc = 0x7F2DCF44u;
    // 7F2DCF44: lis     r6, 244
    ctx->gpr[6] = ((u32)(s32)(244) << 16);

label_7F2DCF48:
    ctx->pc = 0x7F2DCF48u;
    // 7F2DCF48: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DCF4C:
    ctx->pc = 0x7F2DCF4Cu;
    // 7F2DCF4C: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2DCF50:
    ctx->pc = 0x7F2DCF50u;
    // 7F2DCF50: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F2DCF54:
    ctx->pc = 0x7F2DCF54u;
    // 7F2DCF54: addi    r6, r6, -32
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32);

label_7F2DCF58:
    ctx->pc = 0x7F2DCF58u;
    // 7F2DCF58: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F2DCF5Cu;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F2DCF5C:
    ctx->pc = 0x7F2DCF5Cu;
    ctx->downcount -= 3;
    // 7F2DCF5C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DCF60:
    ctx->pc = 0x7F2DCF60u;
    // 7F2DCF60: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCF64:
    ctx->pc = 0x7F2DCF64u;
    // 7F2DCF64: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCF68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DCE6Cu;
                return;
            }
            goto label_7F2DCE6C;
    }

label_7F2DCF68:
    ctx->pc = 0x7F2DCF68u;
    ctx->downcount -= 2;
    // 7F2DCF68: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DCF6C:
    ctx->pc = 0x7F2DCF6Cu;
    // 7F2DCF6C: bl      0x7F2DCE6C
    {
            ctx->lr = 0x7F2DCF70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DCE6Cu;
                return;
            }
            goto label_7F2DCE6C;
    }

label_7F2DCF70:
    ctx->pc = 0x7F2DCF70u;
    ctx->downcount -= 20;
    // 7F2DCF70: stw     r28, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2DCF74:
    ctx->pc = 0x7F2DCF74u;
    // 7F2DCF74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DCF78:
    ctx->pc = 0x7F2DCF78u;
    // 7F2DCF78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DCF7C:
    ctx->pc = 0x7F2DCF7Cu;
    // 7F2DCF7C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCF80:
    ctx->pc = 0x7F2DCF80u;
    // 7F2DCF80: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DCF84:
    ctx->pc = 0x7F2DCF84u;
    // 7F2DCF84: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCF88:
    ctx->pc = 0x7F2DCF88u;
    // 7F2DCF88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCF8C:
    ctx->pc = 0x7F2DCF8Cu;
    // 7F2DCF8C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DCF90:
    ctx->pc = 0x7F2DCF90u;
    // 7F2DCF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCF94:
    ctx->pc = 0x7F2DCF94u;
    ctx->downcount -= 5;
    // 7F2DCF94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCF98:
    ctx->pc = 0x7F2DCF98u;
    // 7F2DCF98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCF9C:
    ctx->pc = 0x7F2DCF9Cu;
    // 7F2DCF9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCFA0:
    ctx->pc = 0x7F2DCFA0u;
    // 7F2DCFA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DCFA4:
    ctx->pc = 0x7F2DCFA4u;
    // 7F2DCFA4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DCFA8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DCFA8:
    ctx->pc = 0x7F2DCFA8u;
    ctx->downcount -= 2;
    // 7F2DCFA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCFAC:
    ctx->pc = 0x7F2DCFACu;
    // 7F2DCFAC: bl      0x800147F8
    {
            ctx->lr = 0x7F2DCFB0u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F2DCFB0:
    ctx->pc = 0x7F2DCFB0u;
    ctx->downcount -= 53;
    // 7F2DCFB0: srawi r3, r3, 8
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

label_7F2DCFB4:
    ctx->pc = 0x7F2DCFB4u;
    // 7F2DCFB4: divw   r0, r3, r31
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DCFB8:
    ctx->pc = 0x7F2DCFB8u;
    // 7F2DCFB8: mullw   r0, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_7F2DCFBC:
    ctx->pc = 0x7F2DCFBCu;
    // 7F2DCFBC: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F2DCFC0:
    ctx->pc = 0x7F2DCFC0u;
    // 7F2DCFC0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DCFC4:
    ctx->pc = 0x7F2DCFC4u;
    // 7F2DCFC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCFC8:
    ctx->pc = 0x7F2DCFC8u;
    // 7F2DCFC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DCFCC:
    ctx->pc = 0x7F2DCFCCu;
    // 7F2DCFCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DCFD0:
    ctx->pc = 0x7F2DCFD0u;
    // 7F2DCFD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DCFD4:
    ctx->pc = 0x7F2DCFD4u;
    ctx->downcount -= 19;
    // 7F2DCFD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DCFD8:
    ctx->pc = 0x7F2DCFD8u;
    // 7F2DCFD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DCFDC:
    ctx->pc = 0x7F2DCFDCu;
    // 7F2DCFDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DCFE0:
    ctx->pc = 0x7F2DCFE0u;
    // 7F2DCFE0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DCFE4:
    ctx->pc = 0x7F2DCFE4u;
    // 7F2DCFE4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DCFE8:
    ctx->pc = 0x7F2DCFE8u;
    // 7F2DCFE8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DCFEC:
    ctx->pc = 0x7F2DCFECu;
    // 7F2DCFEC: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DCFF0:
    ctx->pc = 0x7F2DCFF0u;
    // 7F2DCFF0: rlwinm. r0, r0, 0, 31, 31
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

label_7F2DCFF4:
    ctx->pc = 0x7F2DCFF4u;
    // 7F2DCFF4: bc    12, 2, 0x7F2DD000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD000;
        }
    }

label_7F2DCFF8:
    ctx->pc = 0x7F2DCFF8u;
    ctx->downcount -= 2;
    // 7F2DCFF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DCFFC:
    ctx->pc = 0x7F2DCFFCu;
    // 7F2DCFFC: b       0x7F2DD088
    {
            goto label_7F2DD088;
    }

label_7F2DD000:
    ctx->pc = 0x7F2DD000u;
    ctx->downcount -= 1;
    // 7F2DD000: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DD004:
    ctx->pc = 0x7F2DD004u;
    ctx->downcount -= 4;
    // 7F2DD004: lwz     r3, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD008:
    ctx->pc = 0x7F2DD008u;
    // 7F2DD008: lwz     r4, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DD00C:
    ctx->pc = 0x7F2DD00Cu;
    // 7F2DD00C: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD010:
    // 7F2DD010: bl      0x7F0FEA64
    {
            ctx->lr = 0x7F2DD014u;
            ctx->pc = 0x7F0FEA64u;
            return;
    }

label_7F2DD014:
    ctx->downcount -= 2;
    // 7F2DD014: or.   r31, r3, r3
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

label_7F2DD018:
    // 7F2DD018: bc    4, 2, 0x7F2DD024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD024;
        }
    }

label_7F2DD01C:
    ctx->downcount -= 2;
    // 7F2DD01C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DD020:
    // 7F2DD020: b       0x7F2DD088
    {
            goto label_7F2DD088;
    }

label_7F2DD024:
    ctx->pc = 0x7F2DD024u;
    ctx->downcount -= 6;
    // 7F2DD024: lwz     r5, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DD028:
    ctx->pc = 0x7F2DD028u;
    // 7F2DD028: lwz     r4, -8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DD02C:
    ctx->pc = 0x7F2DD02Cu;
    // 7F2DD02C: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD030:
    // 7F2DD030: addi    r0, r3, 5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5);

label_7F2DD034:
    // 7F2DD034: cmpw    r4, r0
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

label_7F2DD038:
    // 7F2DD038: bc    4, 1, 0x7F2DD058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD058;
        }
    }

label_7F2DD03C:
    ctx->downcount -= 2;
    // 7F2DD03C: cmpwi   r29, 0
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

label_7F2DD040:
    // 7F2DD040: bc    12, 2, 0x7F2DD058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD058;
        }
    }

label_7F2DD044:
    ctx->pc = 0x7F2DD044u;
    ctx->downcount -= 3;
    // 7F2DD044: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD048:
    // 7F2DD048: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DD04C:
    // 7F2DD04C: bl      0x7F0FEB80
    {
            ctx->lr = 0x7F2DD050u;
            ctx->pc = 0x7F0FEB80u;
            return;
    }

label_7F2DD050:
    ctx->downcount -= 2;
    // 7F2DD050: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DD054:
    // 7F2DD054: b       0x7F2DD088
    {
            goto label_7F2DD088;
    }

label_7F2DD058:
    ctx->pc = 0x7F2DD058u;
    ctx->downcount -= 3;
    // 7F2DD058: lwz     r0, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD05C:
    // 7F2DD05C: rlwinm. r0, r0, 0, 29, 30
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

label_7F2DD060:
    // 7F2DD060: bc    12, 2, 0x7F2DD06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD06C;
        }
    }

label_7F2DD064:
    ctx->downcount -= 2;
    // 7F2DD064: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DD068:
    // 7F2DD068: b       0x7F2DD088
    {
            goto label_7F2DD088;
    }

label_7F2DD06C:
    ctx->downcount -= 2;
    // 7F2DD06C: cmplwi  r30, 0x0000
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

label_7F2DD070:
    // 7F2DD070: bc    12, 2, 0x7F2DD080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD080;
        }
    }

label_7F2DD074:
    ctx->pc = 0x7F2DD074u;
    ctx->downcount -= 3;
    // 7F2DD074: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD078:
    // 7F2DD078: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DD07C:
    // 7F2DD07C: bl      0x7F0FEBD4
    {
            ctx->lr = 0x7F2DD080u;
            ctx->pc = 0x7F0FEBD4u;
            return;
    }

label_7F2DD080:
    ctx->downcount -= 2;
    // 7F2DD080: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DD084:
    // 7F2DD084: b       0x7F2DD004
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD004u;
                return;
            }
            goto label_7F2DD004;
    }

label_7F2DD088:
    ctx->pc = 0x7F2DD088u;
    ctx->downcount -= 16;
    // 7F2DD088: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DD08C:
    ctx->pc = 0x7F2DD08Cu;
    // 7F2DD08C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD090:
    ctx->pc = 0x7F2DD090u;
    // 7F2DD090: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD094:
    ctx->pc = 0x7F2DD094u;
    // 7F2DD094: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DD098:
    ctx->pc = 0x7F2DD098u;
    // 7F2DD098: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD09C:
    ctx->pc = 0x7F2DD09Cu;
    ctx->downcount -= 6;
    // 7F2DD09C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD0A0:
    ctx->pc = 0x7F2DD0A0u;
    // 7F2DD0A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD0A4:
    ctx->pc = 0x7F2DD0A4u;
    // 7F2DD0A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD0A8:
    ctx->pc = 0x7F2DD0A8u;
    // 7F2DD0A8: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD0AC:
    ctx->pc = 0x7F2DD0ACu;
    // 7F2DD0AC: rlwinm. r0, r0, 0, 31, 31
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

label_7F2DD0B0:
    ctx->pc = 0x7F2DD0B0u;
    // 7F2DD0B0: bc    4, 2, 0x7F2DD0C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD0C0;
        }
    }

label_7F2DD0B4:
    ctx->pc = 0x7F2DD0B4u;
    ctx->downcount -= 3;
    // 7F2DD0B4: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD0B8:
    ctx->pc = 0x7F2DD0B8u;
    // 7F2DD0B8: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD0BC:
    ctx->pc = 0x7F2DD0BCu;
    // 7F2DD0BC: bl      0x7F0FEBD4
    {
            ctx->lr = 0x7F2DD0C0u;
            ctx->pc = 0x7F0FEBD4u;
            return;
    }

label_7F2DD0C0:
    ctx->pc = 0x7F2DD0C0u;
    ctx->downcount -= 5;
    // 7F2DD0C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD0C4:
    ctx->pc = 0x7F2DD0C4u;
    // 7F2DD0C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD0C8:
    ctx->pc = 0x7F2DD0C8u;
    // 7F2DD0C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DD0CC:
    ctx->pc = 0x7F2DD0CCu;
    // 7F2DD0CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD0D0:
    ctx->pc = 0x7F2DD0D0u;
    ctx->downcount -= 25;
    // 7F2DD0D0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD0D4:
    ctx->pc = 0x7F2DD0D4u;
    // 7F2DD0D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD0D8:
    ctx->pc = 0x7F2DD0D8u;
    // 7F2DD0D8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD0DC:
    ctx->pc = 0x7F2DD0DCu;
    // 7F2DD0DC: mulli   r0, r3, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F2DD0E0:
    ctx->pc = 0x7F2DD0E0u;
    // 7F2DD0E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD0E4:
    ctx->pc = 0x7F2DD0E4u;
    // 7F2DD0E4: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DD0E8:
    ctx->pc = 0x7F2DD0E8u;
    // 7F2DD0E8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DD0EC:
    ctx->pc = 0x7F2DD0ECu;
    // 7F2DD0EC: addi    r3, r3, -4820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4820);

label_7F2DD0F0:
    ctx->pc = 0x7F2DD0F0u;
    // 7F2DD0F0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2DD0F4:
    ctx->pc = 0x7F2DD0F4u;
    // 7F2DD0F4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DD0F8:
    ctx->pc = 0x7F2DD0F8u;
    // 7F2DD0F8: lwz     r29, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2DD0FC:
    ctx->pc = 0x7F2DD0FCu;
    // 7F2DD0FC: lwz     r31, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DD100:
    ctx->pc = 0x7F2DD100u;
    // 7F2DD100: b       0x7F2DD1C0
    {
            goto label_7F2DD1C0;
    }

label_7F2DD104:
    ctx->pc = 0x7F2DD104u;
    ctx->downcount -= 5;
    // 7F2DD104: lwz     r0, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD108:
    // 7F2DD108: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F2DD10C:
    // 7F2DD10C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2DD110:
    // 7F2DD110: add   r28, r0, r27
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F2DD114:
    // 7F2DD114: b       0x7F2DD140
    {
            goto label_7F2DD140;
    }

label_7F2DD118:
    ctx->pc = 0x7F2DD118u;
    ctx->downcount -= 10;
    // 7F2DD118: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DD11C:
    // 7F2DD11C: mulli   r4, r24, 3
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[24] * (s64)(s32)3);

label_7F2DD120:
    ctx->pc = 0x7F2DD120u;
    // 7F2DD120: lwz     r5, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DD124:
    ctx->pc = 0x7F2DD124u;
    // 7F2DD124: lhax    r0, r3, r25
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[25];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD128:
    // 7F2DD128: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F2DD12C:
    ctx->pc = 0x7F2DD12Cu;
    // 7F2DD12C: lhax    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD130:
    // 7F2DD130: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F2DD134:
    // 7F2DD134: bl      0x80046A80
    {
            ctx->lr = 0x7F2DD138u;
            ctx->pc = 0x80046A80u;
            return;
    }

label_7F2DD138:
    ctx->downcount -= 2;
    // 7F2DD138: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F2DD13C:
    // 7F2DD13C: addi    r25, r25, 2
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(2);

label_7F2DD140:
    ctx->pc = 0x7F2DD140u;
    ctx->downcount -= 3;
    // 7F2DD140: lhz     r5, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F2DD144:
    // 7F2DD144: cmpw    r24, r5
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DD148:
    // 7F2DD148: bc    12, 0, 0x7F2DD118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD118u;
                return;
            }
            goto label_7F2DD118;
        }
    }

label_7F2DD14C:
    ctx->downcount -= 3;
    // 7F2DD14C: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F2DD150:
    // 7F2DD150: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DD154:
    // 7F2DD154: bl      0x80042E0C
    {
            ctx->lr = 0x7F2DD158u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F2DD158:
    ctx->downcount -= 4;
    // 7F2DD158: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F2DD15C:
    // 7F2DD15C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2DD160:
    // 7F2DD160: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2DD164:
    // 7F2DD164: b       0x7F2DD1A8
    {
            goto label_7F2DD1A8;
    }

label_7F2DD168:
    ctx->pc = 0x7F2DD168u;
    ctx->downcount -= 9;
    // 7F2DD168: lwz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DD16C:
    // 7F2DD16C: rlwinm r3, r26, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x000000FFu;
    }

label_7F2DD170:
    ctx->pc = 0x7F2DD170u;
    // 7F2DD170: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DD174:
    ctx->pc = 0x7F2DD174u;
    // 7F2DD174: lhzx    r0, r4, r25
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[25];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2DD178:
    ctx->pc = 0x7F2DD178u;
    // 7F2DD178: lhzx    r4, r5, r25
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[25];
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F2DD17C:
    // 7F2DD17C: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F2DD180:
    ctx->pc = 0x7F2DD180u;
    // 7F2DD180: lhax    r22, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[22] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD184:
    // 7F2DD184: extsh r23, r4
    {
        ctx->gpr[23] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F2DD188:
    // 7F2DD188: bl      0x7F2DD1FC
    {
            ctx->lr = 0x7F2DD18Cu;
            goto label_7F2DD1FC;
    }

label_7F2DD18C:
    ctx->downcount -= 2;
    // 7F2DD18C: rlwinm r3, r23, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[23], 0u) & 0x0000FFFFu;
    }

label_7F2DD190:
    // 7F2DD190: bl      0x7F2DD1F0
    {
            ctx->lr = 0x7F2DD194u;
            goto label_7F2DD1F0;
    }

label_7F2DD194:
    ctx->downcount -= 2;
    // 7F2DD194: rlwinm r3, r22, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x0000FFFFu;
    }

label_7F2DD198:
    // 7F2DD198: bl      0x7F2DD1E4
    {
            ctx->lr = 0x7F2DD19Cu;
            goto label_7F2DD1E4;
    }

label_7F2DD19C:
    ctx->downcount -= 3;
    // 7F2DD19C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F2DD1A0:
    // 7F2DD1A0: addi    r26, r26, 3
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(3);

label_7F2DD1A4:
    // 7F2DD1A4: addi    r25, r25, 2
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(2);

label_7F2DD1A8:
    ctx->pc = 0x7F2DD1A8u;
    ctx->downcount -= 3;
    // 7F2DD1A8: lhz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2DD1AC:
    // 7F2DD1AC: cmpw    r24, r0
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

label_7F2DD1B0:
    // 7F2DD1B0: bc    12, 0, 0x7F2DD168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD168u;
                return;
            }
            goto label_7F2DD168;
        }
    }

label_7F2DD1B4:
    ctx->downcount -= 1;
    // 7F2DD1B4: bl      0x7F2DD1E0
    {
            ctx->lr = 0x7F2DD1B8u;
            goto label_7F2DD1E0;
    }

label_7F2DD1B8:
    ctx->downcount -= 2;
    // 7F2DD1B8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2DD1BC:
    // 7F2DD1BC: addi    r27, r27, 32
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(32);

label_7F2DD1C0:
    ctx->pc = 0x7F2DD1C0u;
    ctx->downcount -= 3;
    // 7F2DD1C0: lhz     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2DD1C4:
    // 7F2DD1C4: cmpw    r30, r0
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

label_7F2DD1C8:
    // 7F2DD1C8: bc    12, 0, 0x7F2DD104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD104u;
                return;
            }
            goto label_7F2DD104;
        }
    }

label_7F2DD1CC:
    ctx->pc = 0x7F2DD1CCu;
    ctx->downcount -= 16;
    // 7F2DD1CC: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DD1D0:
    ctx->pc = 0x7F2DD1D0u;
    // 7F2DD1D0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD1D4:
    ctx->pc = 0x7F2DD1D4u;
    // 7F2DD1D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD1D8:
    ctx->pc = 0x7F2DD1D8u;
    // 7F2DD1D8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2DD1DC:
    ctx->pc = 0x7F2DD1DCu;
    // 7F2DD1DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD1E0:
    ctx->pc = 0x7F2DD1E0u;
    ctx->downcount -= 1;
    // 7F2DD1E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD1E4:
    ctx->pc = 0x7F2DD1E4u;
    ctx->downcount -= 3;
    // 7F2DD1E4: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F2DD1E8:
    ctx->pc = 0x7F2DD1E8u;
    // 7F2DD1E8: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DD1EC:
    ctx->pc = 0x7F2DD1ECu;
    // 7F2DD1EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD1F0:
    ctx->pc = 0x7F2DD1F0u;
    ctx->downcount -= 3;
    // 7F2DD1F0: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F2DD1F4:
    ctx->pc = 0x7F2DD1F4u;
    // 7F2DD1F4: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DD1F8:
    ctx->pc = 0x7F2DD1F8u;
    // 7F2DD1F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD1FC:
    ctx->pc = 0x7F2DD1FCu;
    ctx->downcount -= 3;
    // 7F2DD1FC: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F2DD200:
    ctx->pc = 0x7F2DD200u;
    // 7F2DD200: stb     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2DD204:
    ctx->pc = 0x7F2DD204u;
    // 7F2DD204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD208:
    ctx->pc = 0x7F2DD208u;
    ctx->downcount -= 21;
    // 7F2DD208: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD20C:
    ctx->pc = 0x7F2DD20Cu;
    // 7F2DD20C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD210:
    ctx->pc = 0x7F2DD210u;
    // 7F2DD210: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F2DD214:
    ctx->pc = 0x7F2DD214u;
    // 7F2DD214: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F2DD218:
    ctx->pc = 0x7F2DD218u;
    // 7F2DD218: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD21C:
    ctx->pc = 0x7F2DD21Cu;
    // 7F2DD21C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F2DD220:
    ctx->pc = 0x7F2DD220u;
    // 7F2DD220: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F2DD224:
    ctx->pc = 0x7F2DD224u;
    // 7F2DD224: stmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DD228:
    ctx->pc = 0x7F2DD228u;
    // 7F2DD228: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DD22C:
    ctx->pc = 0x7F2DD22Cu;
    // 7F2DD22C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD230:
    ctx->pc = 0x7F2DD230u;
    // 7F2DD230: bl      0x8004585C
    {
            ctx->lr = 0x7F2DD234u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F2DD234:
    ctx->pc = 0x7F2DD234u;
    ctx->downcount -= 7;
    // 7F2DD234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD238:
    ctx->pc = 0x7F2DD238u;
    // 7F2DD238: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD23C:
    ctx->pc = 0x7F2DD23Cu;
    // 7F2DD23C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD240:
    ctx->pc = 0x7F2DD240u;
    // 7F2DD240: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD244:
    ctx->pc = 0x7F2DD244u;
    // 7F2DD244: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DD248:
    ctx->pc = 0x7F2DD248u;
    // 7F2DD248: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD24C:
    ctx->pc = 0x7F2DD24Cu;
    // 7F2DD24C: bl      0x80045908
    {
            ctx->lr = 0x7F2DD250u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F2DD250:
    ctx->pc = 0x7F2DD250u;
    ctx->downcount -= 6;
    // 7F2DD250: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD254:
    ctx->pc = 0x7F2DD254u;
    // 7F2DD254: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F2DD258:
    ctx->pc = 0x7F2DD258u;
    // 7F2DD258: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F2DD25C:
    ctx->pc = 0x7F2DD25Cu;
    // 7F2DD25C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F2DD260:
    ctx->pc = 0x7F2DD260u;
    // 7F2DD260: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F2DD264:
    ctx->pc = 0x7F2DD264u;
    // 7F2DD264: bl      0x8004585C
    {
            ctx->lr = 0x7F2DD268u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F2DD268:
    ctx->pc = 0x7F2DD268u;
    ctx->downcount -= 7;
    // 7F2DD268: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD26C:
    ctx->pc = 0x7F2DD26Cu;
    // 7F2DD26C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD270:
    ctx->pc = 0x7F2DD270u;
    // 7F2DD270: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD274:
    ctx->pc = 0x7F2DD274u;
    // 7F2DD274: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD278:
    ctx->pc = 0x7F2DD278u;
    // 7F2DD278: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DD27C:
    ctx->pc = 0x7F2DD27Cu;
    // 7F2DD27C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD280:
    ctx->pc = 0x7F2DD280u;
    // 7F2DD280: bl      0x80045908
    {
            ctx->lr = 0x7F2DD284u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F2DD284:
    ctx->pc = 0x7F2DD284u;
    ctx->downcount -= 6;
    // 7F2DD284: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD288:
    ctx->pc = 0x7F2DD288u;
    // 7F2DD288: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F2DD28C:
    ctx->pc = 0x7F2DD28Cu;
    // 7F2DD28C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F2DD290:
    ctx->pc = 0x7F2DD290u;
    // 7F2DD290: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F2DD294:
    ctx->pc = 0x7F2DD294u;
    // 7F2DD294: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F2DD298:
    ctx->pc = 0x7F2DD298u;
    // 7F2DD298: bl      0x8004585C
    {
            ctx->lr = 0x7F2DD29Cu;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F2DD29C:
    ctx->pc = 0x7F2DD29Cu;
    ctx->downcount -= 7;
    // 7F2DD29C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD2A0:
    ctx->pc = 0x7F2DD2A0u;
    // 7F2DD2A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD2A4:
    ctx->pc = 0x7F2DD2A4u;
    // 7F2DD2A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD2A8:
    ctx->pc = 0x7F2DD2A8u;
    // 7F2DD2A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD2AC:
    ctx->pc = 0x7F2DD2ACu;
    // 7F2DD2AC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DD2B0:
    ctx->pc = 0x7F2DD2B0u;
    // 7F2DD2B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD2B4:
    ctx->pc = 0x7F2DD2B4u;
    // 7F2DD2B4: bl      0x80045908
    {
            ctx->lr = 0x7F2DD2B8u;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F2DD2B8:
    ctx->pc = 0x7F2DD2B8u;
    ctx->downcount -= 5;
    // 7F2DD2B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD2BC:
    ctx->pc = 0x7F2DD2BCu;
    // 7F2DD2BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD2C0:
    ctx->pc = 0x7F2DD2C0u;
    // 7F2DD2C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DD2C4:
    ctx->pc = 0x7F2DD2C4u;
    // 7F2DD2C4: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F2DD2C8:
    ctx->pc = 0x7F2DD2C8u;
    // 7F2DD2C8: bl      0x7F2DD74C
    {
            ctx->lr = 0x7F2DD2CCu;
            goto label_7F2DD74C;
    }

label_7F2DD2CC:
    ctx->pc = 0x7F2DD2CCu;
    ctx->downcount -= 5;
    // 7F2DD2CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD2D0:
    ctx->pc = 0x7F2DD2D0u;
    // 7F2DD2D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD2D4:
    ctx->pc = 0x7F2DD2D4u;
    // 7F2DD2D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD2D8:
    ctx->pc = 0x7F2DD2D8u;
    // 7F2DD2D8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F2DD2DC:
    ctx->pc = 0x7F2DD2DCu;
    // 7F2DD2DC: bl      0x80045D2C
    {
            ctx->lr = 0x7F2DD2E0u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F2DD2E0:
    ctx->pc = 0x7F2DD2E0u;
    ctx->downcount -= 5;
    // 7F2DD2E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD2E4:
    ctx->pc = 0x7F2DD2E4u;
    // 7F2DD2E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD2E8:
    ctx->pc = 0x7F2DD2E8u;
    // 7F2DD2E8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DD2EC:
    ctx->pc = 0x7F2DD2ECu;
    // 7F2DD2EC: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F2DD2F0:
    ctx->pc = 0x7F2DD2F0u;
    // 7F2DD2F0: bl      0x7F2DD74C
    {
            ctx->lr = 0x7F2DD2F4u;
            goto label_7F2DD74C;
    }

label_7F2DD2F4:
    ctx->pc = 0x7F2DD2F4u;
    ctx->downcount -= 5;
    // 7F2DD2F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD2F8:
    ctx->pc = 0x7F2DD2F8u;
    // 7F2DD2F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD2FC:
    ctx->pc = 0x7F2DD2FCu;
    // 7F2DD2FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DD300:
    ctx->pc = 0x7F2DD300u;
    // 7F2DD300: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F2DD304:
    ctx->pc = 0x7F2DD304u;
    // 7F2DD304: bl      0x80045D2C
    {
            ctx->lr = 0x7F2DD308u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F2DD308:
    ctx->pc = 0x7F2DD308u;
    ctx->downcount -= 5;
    // 7F2DD308: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD30C:
    ctx->pc = 0x7F2DD30Cu;
    // 7F2DD30C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD310:
    ctx->pc = 0x7F2DD310u;
    // 7F2DD310: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DD314:
    ctx->pc = 0x7F2DD314u;
    // 7F2DD314: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F2DD318:
    ctx->pc = 0x7F2DD318u;
    // 7F2DD318: bl      0x7F2DD74C
    {
            ctx->lr = 0x7F2DD31Cu;
            goto label_7F2DD74C;
    }

label_7F2DD31C:
    ctx->pc = 0x7F2DD31Cu;
    ctx->downcount -= 5;
    // 7F2DD31C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD320:
    ctx->pc = 0x7F2DD320u;
    // 7F2DD320: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2DD324:
    ctx->pc = 0x7F2DD324u;
    // 7F2DD324: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2DD328:
    ctx->pc = 0x7F2DD328u;
    // 7F2DD328: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F2DD32C:
    ctx->pc = 0x7F2DD32Cu;
    // 7F2DD32C: bl      0x80045D2C
    {
            ctx->lr = 0x7F2DD330u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F2DD330:
    ctx->pc = 0x7F2DD330u;
    ctx->downcount -= 2;
    // 7F2DD330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD334:
    ctx->pc = 0x7F2DD334u;
    // 7F2DD334: bl      0x800455E0
    {
            ctx->lr = 0x7F2DD338u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F2DD338:
    ctx->pc = 0x7F2DD338u;
    ctx->downcount -= 2;
    // 7F2DD338: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD33C:
    ctx->pc = 0x7F2DD33Cu;
    // 7F2DD33C: bl      0x800455E0
    {
            ctx->lr = 0x7F2DD340u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F2DD340:
    ctx->pc = 0x7F2DD340u;
    ctx->downcount -= 2;
    // 7F2DD340: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD344:
    ctx->pc = 0x7F2DD344u;
    // 7F2DD344: bl      0x800455E0
    {
            ctx->lr = 0x7F2DD348u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_7F2DD348:
    ctx->pc = 0x7F2DD348u;
    ctx->downcount -= 3;
    // 7F2DD348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD34C:
    ctx->pc = 0x7F2DD34Cu;
    // 7F2DD34C: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_7F2DD350:
    ctx->pc = 0x7F2DD350u;
    // 7F2DD350: bl      0x80045ADC
    {
            ctx->lr = 0x7F2DD354u;
            ctx->pc = 0x80045ADCu;
            return;
    }

label_7F2DD354:
    ctx->pc = 0x7F2DD354u;
    ctx->downcount -= 3;
    // 7F2DD354: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD358:
    ctx->pc = 0x7F2DD358u;
    // 7F2DD358: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_7F2DD35C:
    ctx->pc = 0x7F2DD35Cu;
    // 7F2DD35C: bl      0x80045ADC
    {
            ctx->lr = 0x7F2DD360u;
            ctx->pc = 0x80045ADCu;
            return;
    }

label_7F2DD360:
    ctx->pc = 0x7F2DD360u;
    ctx->downcount -= 3;
    // 7F2DD360: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD364:
    ctx->pc = 0x7F2DD364u;
    // 7F2DD364: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F2DD368:
    ctx->pc = 0x7F2DD368u;
    // 7F2DD368: bl      0x80045ADC
    {
            ctx->lr = 0x7F2DD36Cu;
            ctx->pc = 0x80045ADCu;
            return;
    }

label_7F2DD36C:
    ctx->pc = 0x7F2DD36Cu;
    ctx->downcount -= 8;
    // 7F2DD36C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2DD370:
    ctx->pc = 0x7F2DD370u;
    // 7F2DD370: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD374:
    ctx->pc = 0x7F2DD374u;
    // 7F2DD374: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD378:
    ctx->pc = 0x7F2DD378u;
    // 7F2DD378: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD37C:
    ctx->pc = 0x7F2DD37Cu;
    // 7F2DD37C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD380:
    ctx->pc = 0x7F2DD380u;
    // 7F2DD380: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F2DD384:
    ctx->pc = 0x7F2DD384u;
    // 7F2DD384: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F2DD388:
    ctx->pc = 0x7F2DD388u;
    // 7F2DD388: bl      0x800440C0
    {
            ctx->lr = 0x7F2DD38Cu;
            ctx->pc = 0x800440C0u;
            return;
    }

label_7F2DD38C:
    ctx->pc = 0x7F2DD38Cu;
    ctx->downcount -= 7;
    // 7F2DD38C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD390:
    ctx->pc = 0x7F2DD390u;
    // 7F2DD390: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DD394:
    ctx->pc = 0x7F2DD394u;
    // 7F2DD394: addi    r5, r3, 29344
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29344);

label_7F2DD398:
    ctx->pc = 0x7F2DD398u;
    // 7F2DD398: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2DD39C:
    ctx->pc = 0x7F2DD39Cu;
    // 7F2DD39C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD3A0:
    ctx->pc = 0x7F2DD3A0u;
    // 7F2DD3A0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD3A4:
    ctx->pc = 0x7F2DD3A4u;
    // 7F2DD3A4: bl      0x80043EA4
    {
            ctx->lr = 0x7F2DD3A8u;
            ctx->pc = 0x80043EA4u;
            return;
    }

label_7F2DD3A8:
    ctx->pc = 0x7F2DD3A8u;
    ctx->downcount -= 2;
    // 7F2DD3A8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DD3AC:
    ctx->pc = 0x7F2DD3ACu;
    // 7F2DD3AC: bl      0x800424A0
    {
            ctx->lr = 0x7F2DD3B0u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_7F2DD3B0:
    ctx->pc = 0x7F2DD3B0u;
    ctx->downcount -= 2;
    // 7F2DD3B0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DD3B4:
    ctx->pc = 0x7F2DD3B4u;
    // 7F2DD3B4: bl      0x80045EC8
    {
            ctx->lr = 0x7F2DD3B8u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F2DD3B8:
    ctx->pc = 0x7F2DD3B8u;
    ctx->downcount -= 2;
    // 7F2DD3B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD3BC:
    ctx->pc = 0x7F2DD3BCu;
    // 7F2DD3BC: bl      0x800455BC
    {
            ctx->lr = 0x7F2DD3C0u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_7F2DD3C0:
    ctx->pc = 0x7F2DD3C0u;
    ctx->downcount -= 2;
    // 7F2DD3C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD3C4:
    ctx->pc = 0x7F2DD3C4u;
    // 7F2DD3C4: bl      0x80044084
    {
            ctx->lr = 0x7F2DD3C8u;
            ctx->pc = 0x80044084u;
            return;
    }

label_7F2DD3C8:
    ctx->pc = 0x7F2DD3C8u;
    ctx->downcount -= 2;
    // 7F2DD3C8: cmpwi   r31, -1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DD3CC:
    ctx->pc = 0x7F2DD3CCu;
    // 7F2DD3CC: bc    4, 2, 0x7F2DD3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD3E8;
        }
    }

label_7F2DD3D0:
    ctx->pc = 0x7F2DD3D0u;
    ctx->downcount -= 5;
    // 7F2DD3D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD3D4:
    ctx->pc = 0x7F2DD3D4u;
    // 7F2DD3D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD3D8:
    ctx->pc = 0x7F2DD3D8u;
    // 7F2DD3D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD3DC:
    ctx->pc = 0x7F2DD3DCu;
    // 7F2DD3DC: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2DD3E0:
    ctx->pc = 0x7F2DD3E0u;
    // 7F2DD3E0: bl      0x80046238
    {
            ctx->lr = 0x7F2DD3E4u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2DD3E4:
    ctx->pc = 0x7F2DD3E4u;
    ctx->downcount -= 1;
    // 7F2DD3E4: b       0x7F2DD3FC
    {
            goto label_7F2DD3FC;
    }

label_7F2DD3E8:
    ctx->pc = 0x7F2DD3E8u;
    ctx->downcount -= 5;
    // 7F2DD3E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD3EC:
    ctx->pc = 0x7F2DD3ECu;
    // 7F2DD3EC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2DD3F0:
    ctx->pc = 0x7F2DD3F0u;
    // 7F2DD3F0: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F2DD3F4:
    ctx->pc = 0x7F2DD3F4u;
    // 7F2DD3F4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2DD3F8:
    ctx->pc = 0x7F2DD3F8u;
    // 7F2DD3F8: bl      0x80046238
    {
            ctx->lr = 0x7F2DD3FCu;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2DD3FC:
    ctx->pc = 0x7F2DD3FCu;
    ctx->downcount -= 20;
    // 7F2DD3FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD400:
    ctx->pc = 0x7F2DD400u;
    // 7F2DD400: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2DD404:
    ctx->pc = 0x7F2DD404u;
    // 7F2DD404: addi    r6, r3, 29360
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(29360);

label_7F2DD408:
    ctx->pc = 0x7F2DD408u;
    // 7F2DD408: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F2DD40C:
    ctx->pc = 0x7F2DD40Cu;
    // 7F2DD40C: addi    r3, r5, 29352
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(29352);

label_7F2DD410:
    ctx->pc = 0x7F2DD410u;
    // 7F2DD410: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DD414:
    ctx->pc = 0x7F2DD414u;
    // 7F2DD414: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DD418:
    ctx->pc = 0x7F2DD418u;
    // 7F2DD418: addi    r5, r4, 29356
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29356);

label_7F2DD41C:
    ctx->pc = 0x7F2DD41Cu;
    // 7F2DD41C: lwz     r9, 29348(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(29348);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DD420:
    ctx->pc = 0x7F2DD420u;
    // 7F2DD420: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F2DD424:
    ctx->pc = 0x7F2DD424u;
    // 7F2DD424: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DD428:
    ctx->pc = 0x7F2DD428u;
    // 7F2DD428: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD42C:
    ctx->pc = 0x7F2DD42Cu;
    // 7F2DD42C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DD430:
    ctx->pc = 0x7F2DD430u;
    // 7F2DD430: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD434:
    ctx->pc = 0x7F2DD434u;
    // 7F2DD434: stw     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DD438:
    ctx->pc = 0x7F2DD438u;
    // 7F2DD438: stw     r8, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DD43C:
    ctx->pc = 0x7F2DD43Cu;
    // 7F2DD43C: stw     r7, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DD440:
    ctx->pc = 0x7F2DD440u;
    // 7F2DD440: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DD444:
    ctx->pc = 0x7F2DD444u;
    // 7F2DD444: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD448:
    ctx->pc = 0x7F2DD448u;
    // 7F2DD448: bl      0x800459EC
    {
            ctx->lr = 0x7F2DD44Cu;
            ctx->pc = 0x800459ECu;
            return;
    }

label_7F2DD44C:
    ctx->pc = 0x7F2DD44Cu;
    ctx->downcount -= 5;
    // 7F2DD44C: lwz     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD450:
    ctx->pc = 0x7F2DD450u;
    // 7F2DD450: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F2DD454:
    ctx->pc = 0x7F2DD454u;
    // 7F2DD454: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD458:
    ctx->pc = 0x7F2DD458u;
    // 7F2DD458: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD45C:
    ctx->pc = 0x7F2DD45Cu;
    // 7F2DD45C: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD460u;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD460:
    ctx->pc = 0x7F2DD460u;
    ctx->downcount -= 5;
    // 7F2DD460: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD464:
    ctx->pc = 0x7F2DD464u;
    // 7F2DD464: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2DD468:
    ctx->pc = 0x7F2DD468u;
    // 7F2DD468: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD46C:
    ctx->pc = 0x7F2DD46Cu;
    // 7F2DD46C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD470:
    ctx->pc = 0x7F2DD470u;
    // 7F2DD470: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD474u;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD474:
    ctx->pc = 0x7F2DD474u;
    ctx->downcount -= 5;
    // 7F2DD474: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD478:
    ctx->pc = 0x7F2DD478u;
    // 7F2DD478: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_7F2DD47C:
    ctx->pc = 0x7F2DD47Cu;
    // 7F2DD47C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DD480:
    ctx->pc = 0x7F2DD480u;
    // 7F2DD480: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD484:
    ctx->pc = 0x7F2DD484u;
    // 7F2DD484: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD488u;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD488:
    ctx->pc = 0x7F2DD488u;
    ctx->downcount -= 6;
    // 7F2DD488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD48C:
    ctx->pc = 0x7F2DD48Cu;
    // 7F2DD48C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F2DD490:
    ctx->pc = 0x7F2DD490u;
    // 7F2DD490: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2DD494:
    ctx->pc = 0x7F2DD494u;
    // 7F2DD494: li      r6, 14
    ctx->gpr[6] = (u32)(s32)(14);

label_7F2DD498:
    ctx->pc = 0x7F2DD498u;
    // 7F2DD498: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F2DD49C:
    ctx->pc = 0x7F2DD49Cu;
    // 7F2DD49C: bl      0x80045818
    {
            ctx->lr = 0x7F2DD4A0u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F2DD4A0:
    ctx->pc = 0x7F2DD4A0u;
    ctx->downcount -= 7;
    // 7F2DD4A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD4A4:
    ctx->pc = 0x7F2DD4A4u;
    // 7F2DD4A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD4A8:
    ctx->pc = 0x7F2DD4A8u;
    // 7F2DD4A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD4AC:
    ctx->pc = 0x7F2DD4ACu;
    // 7F2DD4AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD4B0:
    ctx->pc = 0x7F2DD4B0u;
    // 7F2DD4B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD4B4:
    ctx->pc = 0x7F2DD4B4u;
    // 7F2DD4B4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD4B8:
    ctx->pc = 0x7F2DD4B8u;
    // 7F2DD4B8: bl      0x800458A0
    {
            ctx->lr = 0x7F2DD4BCu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F2DD4BC:
    ctx->pc = 0x7F2DD4BCu;
    ctx->downcount -= 6;
    // 7F2DD4BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD4C0:
    ctx->pc = 0x7F2DD4C0u;
    // 7F2DD4C0: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F2DD4C4:
    ctx->pc = 0x7F2DD4C4u;
    // 7F2DD4C4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2DD4C8:
    ctx->pc = 0x7F2DD4C8u;
    // 7F2DD4C8: li      r6, 14
    ctx->gpr[6] = (u32)(s32)(14);

label_7F2DD4CC:
    ctx->pc = 0x7F2DD4CCu;
    // 7F2DD4CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD4D0:
    ctx->pc = 0x7F2DD4D0u;
    // 7F2DD4D0: bl      0x80045818
    {
            ctx->lr = 0x7F2DD4D4u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F2DD4D4:
    ctx->pc = 0x7F2DD4D4u;
    ctx->downcount -= 7;
    // 7F2DD4D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD4D8:
    ctx->pc = 0x7F2DD4D8u;
    // 7F2DD4D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD4DC:
    ctx->pc = 0x7F2DD4DCu;
    // 7F2DD4DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD4E0:
    ctx->pc = 0x7F2DD4E0u;
    // 7F2DD4E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD4E4:
    ctx->pc = 0x7F2DD4E4u;
    // 7F2DD4E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD4E8:
    ctx->pc = 0x7F2DD4E8u;
    // 7F2DD4E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD4EC:
    ctx->pc = 0x7F2DD4ECu;
    // 7F2DD4EC: bl      0x800458A0
    {
            ctx->lr = 0x7F2DD4F0u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F2DD4F0:
    ctx->pc = 0x7F2DD4F0u;
    ctx->downcount -= 6;
    // 7F2DD4F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD4F4:
    ctx->pc = 0x7F2DD4F4u;
    // 7F2DD4F4: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F2DD4F8:
    ctx->pc = 0x7F2DD4F8u;
    // 7F2DD4F8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2DD4FC:
    ctx->pc = 0x7F2DD4FCu;
    // 7F2DD4FC: li      r6, 14
    ctx->gpr[6] = (u32)(s32)(14);

label_7F2DD500:
    ctx->pc = 0x7F2DD500u;
    // 7F2DD500: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD504:
    ctx->pc = 0x7F2DD504u;
    // 7F2DD504: bl      0x80045818
    {
            ctx->lr = 0x7F2DD508u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F2DD508:
    ctx->pc = 0x7F2DD508u;
    ctx->downcount -= 7;
    // 7F2DD508: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD50C:
    ctx->pc = 0x7F2DD50Cu;
    // 7F2DD50C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD510:
    ctx->pc = 0x7F2DD510u;
    // 7F2DD510: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD514:
    ctx->pc = 0x7F2DD514u;
    // 7F2DD514: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2DD518:
    ctx->pc = 0x7F2DD518u;
    // 7F2DD518: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DD51C:
    ctx->pc = 0x7F2DD51Cu;
    // 7F2DD51C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD520:
    ctx->pc = 0x7F2DD520u;
    // 7F2DD520: bl      0x800458A0
    {
            ctx->lr = 0x7F2DD524u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F2DD524:
    ctx->pc = 0x7F2DD524u;
    ctx->downcount -= 2;
    // 7F2DD524: cmpwi   r31, -1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DD528:
    ctx->pc = 0x7F2DD528u;
    // 7F2DD528: bc    4, 2, 0x7F2DD598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD598;
        }
    }

label_7F2DD52C:
    ctx->pc = 0x7F2DD52Cu;
    ctx->downcount -= 4;
    // 7F2DD52C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F2DD530:
    ctx->pc = 0x7F2DD530u;
    // 7F2DD530: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F2DD534:
    ctx->pc = 0x7F2DD534u;
    // 7F2DD534: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DD538:
    ctx->pc = 0x7F2DD538u;
    // 7F2DD538: bl      0x80042E0C
    {
            ctx->lr = 0x7F2DD53Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F2DD53C:
    ctx->pc = 0x7F2DD53Cu;
    ctx->downcount -= 7;
    // 7F2DD53C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DD540:
    ctx->pc = 0x7F2DD540u;
    // 7F2DD540: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD544:
    ctx->pc = 0x7F2DD544u;
    // 7F2DD544: addi    r27, r4, -4224
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-4224);

label_7F2DD548:
    ctx->pc = 0x7F2DD548u;
    // 7F2DD548: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2DD54C:
    ctx->pc = 0x7F2DD54Cu;
    // 7F2DD54C: addi    r28, r3, -4256
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-4256);

label_7F2DD550:
    ctx->pc = 0x7F2DD550u;
    // 7F2DD550: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DD554:
    ctx->pc = 0x7F2DD554u;
    // 7F2DD554: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2DD558:
    ctx->downcount -= 5;
    // 7F2DD558: add   r5, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2DD55C:
    ctx->pc = 0x7F2DD55Cu;
    // 7F2DD55C: lha     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD560:
    ctx->pc = 0x7F2DD560u;
    // 7F2DD560: lha     r4, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD564:
    ctx->pc = 0x7F2DD564u;
    // 7F2DD564: lha     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD568:
    // 7F2DD568: bl      0x7F2DD738
    {
            ctx->lr = 0x7F2DD56Cu;
            goto label_7F2DD738;
    }

label_7F2DD56C:
    ctx->downcount -= 4;
    // 7F2DD56C: add   r3, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DD570:
    ctx->pc = 0x7F2DD570u;
    // 7F2DD570: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD570u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DD574:
    ctx->pc = 0x7F2DD574u;
    // 7F2DD574: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DD578:
    // 7F2DD578: bl      0x7F2DD728
    {
            ctx->lr = 0x7F2DD57Cu;
            goto label_7F2DD728;
    }

label_7F2DD57C:
    ctx->downcount -= 5;
    // 7F2DD57C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F2DD580:
    // 7F2DD580: addi    r29, r29, 6
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(6);

label_7F2DD584:
    // 7F2DD584: cmpwi   r26, 4
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

label_7F2DD588:
    // 7F2DD588: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_7F2DD58C:
    // 7F2DD58C: bc    12, 0, 0x7F2DD558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD558u;
                return;
            }
            goto label_7F2DD558;
        }
    }

label_7F2DD590:
    ctx->pc = 0x7F2DD590u;
    ctx->downcount -= 1;
    // 7F2DD590: bl      0x7F2DD1E0
    {
            ctx->lr = 0x7F2DD594u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD1E0u;
                return;
            }
            goto label_7F2DD1E0;
    }

label_7F2DD594:
    ctx->pc = 0x7F2DD594u;
    ctx->downcount -= 1;
    // 7F2DD594: b       0x7F2DD5A0
    {
            goto label_7F2DD5A0;
    }

label_7F2DD598:
    ctx->pc = 0x7F2DD598u;
    ctx->downcount -= 2;
    // 7F2DD598: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DD59C:
    ctx->pc = 0x7F2DD59Cu;
    // 7F2DD59C: bl      0x7F2DD0D0
    {
            ctx->lr = 0x7F2DD5A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD0D0u;
                return;
            }
            goto label_7F2DD0D0;
    }

label_7F2DD5A0:
    ctx->pc = 0x7F2DD5A0u;
    ctx->downcount -= 2;
    // 7F2DD5A0: cmpwi   r31, -1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DD5A4:
    ctx->pc = 0x7F2DD5A4u;
    // 7F2DD5A4: bc    4, 2, 0x7F2DD5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD5C0;
        }
    }

label_7F2DD5A8:
    ctx->pc = 0x7F2DD5A8u;
    ctx->downcount -= 5;
    // 7F2DD5A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD5AC:
    ctx->pc = 0x7F2DD5ACu;
    // 7F2DD5AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD5B0:
    ctx->pc = 0x7F2DD5B0u;
    // 7F2DD5B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DD5B4:
    ctx->pc = 0x7F2DD5B4u;
    // 7F2DD5B4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2DD5B8:
    ctx->pc = 0x7F2DD5B8u;
    // 7F2DD5B8: bl      0x80046238
    {
            ctx->lr = 0x7F2DD5BCu;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2DD5BC:
    ctx->pc = 0x7F2DD5BCu;
    ctx->downcount -= 1;
    // 7F2DD5BC: b       0x7F2DD5D4
    {
            goto label_7F2DD5D4;
    }

label_7F2DD5C0:
    ctx->pc = 0x7F2DD5C0u;
    ctx->downcount -= 5;
    // 7F2DD5C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD5C4:
    ctx->pc = 0x7F2DD5C4u;
    // 7F2DD5C4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2DD5C8:
    ctx->pc = 0x7F2DD5C8u;
    // 7F2DD5C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DD5CC:
    ctx->pc = 0x7F2DD5CCu;
    // 7F2DD5CC: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F2DD5D0:
    ctx->pc = 0x7F2DD5D0u;
    // 7F2DD5D0: bl      0x80046238
    {
            ctx->lr = 0x7F2DD5D4u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2DD5D4:
    ctx->pc = 0x7F2DD5D4u;
    ctx->downcount -= 20;
    // 7F2DD5D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD5D8:
    ctx->pc = 0x7F2DD5D8u;
    // 7F2DD5D8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2DD5DC:
    ctx->pc = 0x7F2DD5DCu;
    // 7F2DD5DC: addi    r6, r3, 29380
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(29380);

label_7F2DD5E0:
    ctx->pc = 0x7F2DD5E0u;
    // 7F2DD5E0: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F2DD5E4:
    ctx->pc = 0x7F2DD5E4u;
    // 7F2DD5E4: addi    r3, r5, 29372
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(29372);

label_7F2DD5E8:
    ctx->pc = 0x7F2DD5E8u;
    // 7F2DD5E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DD5EC:
    ctx->pc = 0x7F2DD5ECu;
    // 7F2DD5EC: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DD5F0:
    ctx->pc = 0x7F2DD5F0u;
    // 7F2DD5F0: addi    r5, r4, 29376
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29376);

label_7F2DD5F4:
    ctx->pc = 0x7F2DD5F4u;
    // 7F2DD5F4: lwz     r9, 29368(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(29368);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DD5F8:
    ctx->pc = 0x7F2DD5F8u;
    // 7F2DD5F8: addi    r4, r1, 60
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(60);

label_7F2DD5FC:
    ctx->pc = 0x7F2DD5FCu;
    // 7F2DD5FC: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2DD600:
    ctx->pc = 0x7F2DD600u;
    // 7F2DD600: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD604:
    ctx->pc = 0x7F2DD604u;
    // 7F2DD604: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DD608:
    ctx->pc = 0x7F2DD608u;
    // 7F2DD608: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD60C:
    ctx->pc = 0x7F2DD60Cu;
    // 7F2DD60C: stw     r9, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DD610:
    ctx->pc = 0x7F2DD610u;
    // 7F2DD610: stw     r8, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DD614:
    ctx->pc = 0x7F2DD614u;
    // 7F2DD614: stw     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DD618:
    ctx->pc = 0x7F2DD618u;
    // 7F2DD618: stw     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DD61C:
    ctx->pc = 0x7F2DD61Cu;
    // 7F2DD61C: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD620:
    ctx->pc = 0x7F2DD620u;
    // 7F2DD620: bl      0x800459EC
    {
            ctx->lr = 0x7F2DD624u;
            ctx->pc = 0x800459ECu;
            return;
    }

label_7F2DD624:
    ctx->pc = 0x7F2DD624u;
    ctx->downcount -= 5;
    // 7F2DD624: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD628:
    ctx->pc = 0x7F2DD628u;
    // 7F2DD628: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DD62C:
    ctx->pc = 0x7F2DD62Cu;
    // 7F2DD62C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD630:
    ctx->pc = 0x7F2DD630u;
    // 7F2DD630: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD634:
    ctx->pc = 0x7F2DD634u;
    // 7F2DD634: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD638u;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD638:
    ctx->pc = 0x7F2DD638u;
    ctx->downcount -= 5;
    // 7F2DD638: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD63C:
    ctx->pc = 0x7F2DD63Cu;
    // 7F2DD63C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2DD640:
    ctx->pc = 0x7F2DD640u;
    // 7F2DD640: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD644:
    ctx->pc = 0x7F2DD644u;
    // 7F2DD644: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD648:
    ctx->pc = 0x7F2DD648u;
    // 7F2DD648: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD64Cu;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD64C:
    ctx->pc = 0x7F2DD64Cu;
    ctx->downcount -= 5;
    // 7F2DD64C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD650:
    ctx->pc = 0x7F2DD650u;
    // 7F2DD650: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD654:
    ctx->pc = 0x7F2DD654u;
    // 7F2DD654: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DD658:
    ctx->pc = 0x7F2DD658u;
    // 7F2DD658: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD65C:
    ctx->pc = 0x7F2DD65Cu;
    // 7F2DD65C: bl      0x80045A68
    {
            ctx->lr = 0x7F2DD660u;
            ctx->pc = 0x80045A68u;
            return;
    }

label_7F2DD660:
    ctx->pc = 0x7F2DD660u;
    ctx->downcount -= 7;
    // 7F2DD660: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD664:
    ctx->pc = 0x7F2DD664u;
    // 7F2DD664: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD668:
    ctx->pc = 0x7F2DD668u;
    // 7F2DD668: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD66C:
    ctx->pc = 0x7F2DD66Cu;
    // 7F2DD66C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DD670:
    ctx->pc = 0x7F2DD670u;
    // 7F2DD670: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD674:
    ctx->pc = 0x7F2DD674u;
    // 7F2DD674: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD678:
    ctx->pc = 0x7F2DD678u;
    // 7F2DD678: bl      0x800458A0
    {
            ctx->lr = 0x7F2DD67Cu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F2DD67C:
    ctx->pc = 0x7F2DD67Cu;
    ctx->downcount -= 7;
    // 7F2DD67C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD680:
    ctx->pc = 0x7F2DD680u;
    // 7F2DD680: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD684:
    ctx->pc = 0x7F2DD684u;
    // 7F2DD684: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD688:
    ctx->pc = 0x7F2DD688u;
    // 7F2DD688: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2DD68C:
    ctx->pc = 0x7F2DD68Cu;
    // 7F2DD68C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DD690:
    ctx->pc = 0x7F2DD690u;
    // 7F2DD690: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DD694:
    ctx->pc = 0x7F2DD694u;
    // 7F2DD694: bl      0x800458A0
    {
            ctx->lr = 0x7F2DD698u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F2DD698:
    ctx->pc = 0x7F2DD698u;
    ctx->downcount -= 2;
    // 7F2DD698: cmpwi   r31, -1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DD69C:
    ctx->pc = 0x7F2DD69Cu;
    // 7F2DD69C: bc    4, 2, 0x7F2DD70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD70C;
        }
    }

label_7F2DD6A0:
    ctx->pc = 0x7F2DD6A0u;
    ctx->downcount -= 4;
    // 7F2DD6A0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F2DD6A4:
    ctx->pc = 0x7F2DD6A4u;
    // 7F2DD6A4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F2DD6A8:
    ctx->pc = 0x7F2DD6A8u;
    // 7F2DD6A8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DD6AC:
    ctx->pc = 0x7F2DD6ACu;
    // 7F2DD6AC: bl      0x80042E0C
    {
            ctx->lr = 0x7F2DD6B0u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F2DD6B0:
    ctx->pc = 0x7F2DD6B0u;
    ctx->downcount -= 7;
    // 7F2DD6B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DD6B4:
    ctx->pc = 0x7F2DD6B4u;
    // 7F2DD6B4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD6B8:
    ctx->pc = 0x7F2DD6B8u;
    // 7F2DD6B8: addi    r28, r4, -4224
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-4224);

label_7F2DD6BC:
    ctx->pc = 0x7F2DD6BCu;
    // 7F2DD6BC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2DD6C0:
    ctx->pc = 0x7F2DD6C0u;
    // 7F2DD6C0: addi    r29, r3, -4256
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-4256);

label_7F2DD6C4:
    ctx->pc = 0x7F2DD6C4u;
    // 7F2DD6C4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2DD6C8:
    ctx->pc = 0x7F2DD6C8u;
    // 7F2DD6C8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DD6CC:
    ctx->downcount -= 5;
    // 7F2DD6CC: add   r5, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2DD6D0:
    ctx->pc = 0x7F2DD6D0u;
    // 7F2DD6D0: lha     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD6D4:
    ctx->pc = 0x7F2DD6D4u;
    // 7F2DD6D4: lha     r4, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD6D8:
    ctx->pc = 0x7F2DD6D8u;
    // 7F2DD6D8: lha     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DD6DC:
    // 7F2DD6DC: bl      0x7F2DD738
    {
            ctx->lr = 0x7F2DD6E0u;
            goto label_7F2DD738;
    }

label_7F2DD6E0:
    ctx->downcount -= 4;
    // 7F2DD6E0: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DD6E4:
    ctx->pc = 0x7F2DD6E4u;
    // 7F2DD6E4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD6E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DD6E8:
    ctx->pc = 0x7F2DD6E8u;
    // 7F2DD6E8: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD6E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DD6EC:
    // 7F2DD6EC: bl      0x7F2DD728
    {
            ctx->lr = 0x7F2DD6F0u;
            goto label_7F2DD728;
    }

label_7F2DD6F0:
    ctx->downcount -= 5;
    // 7F2DD6F0: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2DD6F4:
    // 7F2DD6F4: addi    r30, r30, 6
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(6);

label_7F2DD6F8:
    // 7F2DD6F8: cmpwi   r27, 4
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

label_7F2DD6FC:
    // 7F2DD6FC: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F2DD700:
    // 7F2DD700: bc    12, 0, 0x7F2DD6CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD6CCu;
                return;
            }
            goto label_7F2DD6CC;
        }
    }

label_7F2DD704:
    ctx->pc = 0x7F2DD704u;
    ctx->downcount -= 1;
    // 7F2DD704: bl      0x7F2DD1E0
    {
            ctx->lr = 0x7F2DD708u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD1E0u;
                return;
            }
            goto label_7F2DD1E0;
    }

label_7F2DD708:
    ctx->pc = 0x7F2DD708u;
    ctx->downcount -= 1;
    // 7F2DD708: b       0x7F2DD714
    {
            goto label_7F2DD714;
    }

label_7F2DD70C:
    ctx->pc = 0x7F2DD70Cu;
    ctx->downcount -= 2;
    // 7F2DD70C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DD710:
    ctx->pc = 0x7F2DD710u;
    // 7F2DD710: bl      0x7F2DD0D0
    {
            ctx->lr = 0x7F2DD714u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD0D0u;
                return;
            }
            goto label_7F2DD0D0;
    }

label_7F2DD714:
    ctx->pc = 0x7F2DD714u;
    ctx->downcount -= 16;
    // 7F2DD714: lmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DD718:
    ctx->pc = 0x7F2DD718u;
    // 7F2DD718: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD71C:
    ctx->pc = 0x7F2DD71Cu;
    // 7F2DD71C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD720:
    ctx->pc = 0x7F2DD720u;
    // 7F2DD720: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2DD724:
    ctx->pc = 0x7F2DD724u;
    // 7F2DD724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD728:
    ctx->pc = 0x7F2DD728u;
    ctx->downcount -= 4;
    // 7F2DD728: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_7F2DD72C:
    ctx->pc = 0x7F2DD72Cu;
    // 7F2DD72C: stfs     f1, -32768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD72Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DD730:
    ctx->pc = 0x7F2DD730u;
    // 7F2DD730: stfs     f2, -32768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD730u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DD734:
    ctx->pc = 0x7F2DD734u;
    // 7F2DD734: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD738:
    ctx->pc = 0x7F2DD738u;
    ctx->downcount -= 5;
    // 7F2DD738: lis     r6, -13311
    ctx->gpr[6] = ((u32)(s32)(-13311) << 16);

label_7F2DD73C:
    ctx->pc = 0x7F2DD73Cu;
    // 7F2DD73C: sth     r3, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DD740:
    ctx->pc = 0x7F2DD740u;
    // 7F2DD740: sth     r4, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2DD744:
    ctx->pc = 0x7F2DD744u;
    // 7F2DD744: sth     r5, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2DD748:
    ctx->pc = 0x7F2DD748u;
    // 7F2DD748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD74C:
    ctx->pc = 0x7F2DD74Cu;
    ctx->downcount -= 6;
    // 7F2DD74C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD750:
    ctx->pc = 0x7F2DD750u;
    // 7F2DD750: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD754:
    ctx->pc = 0x7F2DD754u;
    // 7F2DD754: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DD758:
    ctx->pc = 0x7F2DD758u;
    // 7F2DD758: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_7F2DD75C:
    ctx->pc = 0x7F2DD75Cu;
    // 7F2DD75C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD760:
    ctx->pc = 0x7F2DD760u;
    // 7F2DD760: bl      0x80042220
    {
            ctx->lr = 0x7F2DD764u;
            ctx->pc = 0x80042220u;
            return;
    }

label_7F2DD764:
    ctx->pc = 0x7F2DD764u;
    ctx->downcount -= 5;
    // 7F2DD764: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD768:
    ctx->pc = 0x7F2DD768u;
    // 7F2DD768: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD76C:
    ctx->pc = 0x7F2DD76Cu;
    // 7F2DD76C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DD770:
    ctx->pc = 0x7F2DD770u;
    // 7F2DD770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD774:
    ctx->pc = 0x7F2DD774u;
    ctx->downcount -= 4;
    // 7F2DD774: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD778:
    ctx->pc = 0x7F2DD778u;
    // 7F2DD778: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD77C:
    ctx->pc = 0x7F2DD77Cu;
    // 7F2DD77C: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD780:
    ctx->pc = 0x7F2DD780u;
    // 7F2DD780: bl      0x80041BD4
    {
            ctx->lr = 0x7F2DD784u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F2DD784:
    ctx->pc = 0x7F2DD784u;
    ctx->downcount -= 3;
    // 7F2DD784: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F2DD788:
    ctx->pc = 0x7F2DD788u;
    // 7F2DD788: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD78C:
    ctx->pc = 0x7F2DD78Cu;
    // 7F2DD78C: bl      0x80041500
    {
            ctx->lr = 0x7F2DD790u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F2DD790:
    ctx->pc = 0x7F2DD790u;
    ctx->downcount -= 3;
    // 7F2DD790: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F2DD794:
    ctx->pc = 0x7F2DD794u;
    // 7F2DD794: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD798:
    ctx->pc = 0x7F2DD798u;
    // 7F2DD798: bl      0x80041500
    {
            ctx->lr = 0x7F2DD79Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F2DD79C:
    ctx->pc = 0x7F2DD79Cu;
    ctx->downcount -= 4;
    // 7F2DD79C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD7A0:
    ctx->pc = 0x7F2DD7A0u;
    // 7F2DD7A0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DD7A4:
    ctx->pc = 0x7F2DD7A4u;
    // 7F2DD7A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DD7A8:
    ctx->pc = 0x7F2DD7A8u;
    // 7F2DD7A8: bl      0x800462E4
    {
            ctx->lr = 0x7F2DD7ACu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F2DD7AC:
    ctx->pc = 0x7F2DD7ACu;
    ctx->downcount -= 4;
    // 7F2DD7AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD7B0:
    ctx->pc = 0x7F2DD7B0u;
    // 7F2DD7B0: lwz     r0, -4820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD7B4:
    ctx->pc = 0x7F2DD7B4u;
    // 7F2DD7B4: cmpwi   r0, 0
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

label_7F2DD7B8:
    ctx->pc = 0x7F2DD7B8u;
    // 7F2DD7B8: bc    4, 2, 0x7F2DD810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DD810;
        }
    }

label_7F2DD7BC:
    ctx->pc = 0x7F2DD7BCu;
    ctx->downcount -= 15;
    // 7F2DD7BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD7C0:
    ctx->pc = 0x7F2DD7C0u;
    // 7F2DD7C0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2DD7C4:
    ctx->pc = 0x7F2DD7C4u;
    // 7F2DD7C4: lfs     f1, 29388(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DD7C8:
    ctx->pc = 0x7F2DD7C8u;
    // 7F2DD7C8: addi    r6, r5, 29392
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(29392);

label_7F2DD7CC:
    ctx->pc = 0x7F2DD7CCu;
    // 7F2DD7CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DD7D0:
    ctx->pc = 0x7F2DD7D0u;
    // 7F2DD7D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD7D4:
    ctx->pc = 0x7F2DD7D4u;
    // 7F2DD7D4: addi    r5, r4, 29396
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29396);

label_7F2DD7D8:
    ctx->pc = 0x7F2DD7D8u;
    // 7F2DD7D8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7D8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F2DD7DC:
    ctx->pc = 0x7F2DD7DCu;
    // 7F2DD7DC: addi    r4, r3, 29400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29400);

label_7F2DD7E0:
    ctx->pc = 0x7F2DD7E0u;
    // 7F2DD7E0: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7E0u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_7F2DD7E4:
    ctx->pc = 0x7F2DD7E4u;
    // 7F2DD7E4: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DD7E8:
    ctx->pc = 0x7F2DD7E8u;
    // 7F2DD7E8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD7EC:
    ctx->pc = 0x7F2DD7ECu;
    // 7F2DD7EC: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2DD7F0:
    ctx->pc = 0x7F2DD7F0u;
    // 7F2DD7F0: lfs     f6, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD7F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F2DD7F4:
    ctx->pc = 0x7F2DD7F4u;
    // 7F2DD7F4: bl      0x80025970
    {
            ctx->lr = 0x7F2DD7F8u;
            ctx->pc = 0x80025970u;
            return;
    }

label_7F2DD7F8:
    ctx->pc = 0x7F2DD7F8u;
    ctx->downcount -= 3;
    // 7F2DD7F8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD7FC:
    ctx->pc = 0x7F2DD7FCu;
    // 7F2DD7FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD800:
    ctx->pc = 0x7F2DD800u;
    // 7F2DD800: bl      0x800468B8
    {
            ctx->lr = 0x7F2DD804u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F2DD804:
    ctx->pc = 0x7F2DD804u;
    ctx->downcount -= 2;
    // 7F2DD804: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD808:
    ctx->pc = 0x7F2DD808u;
    // 7F2DD808: bl      0x80025030
    {
            ctx->lr = 0x7F2DD80Cu;
            ctx->pc = 0x80025030u;
            return;
    }

label_7F2DD80C:
    ctx->pc = 0x7F2DD80Cu;
    ctx->downcount -= 1;
    // 7F2DD80C: b       0x7F2DD844
    {
            goto label_7F2DD844;
    }

label_7F2DD810:
    ctx->pc = 0x7F2DD810u;
    ctx->downcount -= 5;
    // 7F2DD810: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DD814:
    ctx->pc = 0x7F2DD814u;
    // 7F2DD814: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD818:
    ctx->pc = 0x7F2DD818u;
    // 7F2DD818: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DD81C:
    ctx->pc = 0x7F2DD81Cu;
    // 7F2DD81C: addi    r3, r3, 192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(192);

label_7F2DD820:
    ctx->pc = 0x7F2DD820u;
    // 7F2DD820: bl      0x80025B84
    {
            ctx->lr = 0x7F2DD824u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F2DD824:
    ctx->pc = 0x7F2DD824u;
    ctx->downcount -= 3;
    // 7F2DD824: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD828:
    ctx->pc = 0x7F2DD828u;
    // 7F2DD828: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD82C:
    ctx->pc = 0x7F2DD82Cu;
    // 7F2DD82C: bl      0x800468B8
    {
            ctx->lr = 0x7F2DD830u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F2DD830:
    ctx->pc = 0x7F2DD830u;
    ctx->downcount -= 5;
    // 7F2DD830: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DD834:
    ctx->pc = 0x7F2DD834u;
    // 7F2DD834: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD838:
    ctx->pc = 0x7F2DD838u;
    // 7F2DD838: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DD83C:
    ctx->pc = 0x7F2DD83Cu;
    // 7F2DD83C: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2DD840:
    ctx->pc = 0x7F2DD840u;
    // 7F2DD840: bl      0x7F114E28
    {
            ctx->lr = 0x7F2DD844u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F2DD844:
    ctx->pc = 0x7F2DD844u;
    ctx->downcount -= 3;
    // 7F2DD844: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD848:
    ctx->pc = 0x7F2DD848u;
    // 7F2DD848: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD84C:
    ctx->pc = 0x7F2DD84Cu;
    // 7F2DD84C: bl      0x80046A30
    {
            ctx->lr = 0x7F2DD850u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_7F2DD850:
    ctx->pc = 0x7F2DD850u;
    ctx->downcount -= 2;
    // 7F2DD850: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD854:
    ctx->pc = 0x7F2DD854u;
    // 7F2DD854: bl      0x80046B34
    {
            ctx->lr = 0x7F2DD858u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_7F2DD858:
    ctx->pc = 0x7F2DD858u;
    ctx->downcount -= 3;
    // 7F2DD858: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD85C:
    ctx->pc = 0x7F2DD85Cu;
    // 7F2DD85C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD860:
    ctx->pc = 0x7F2DD860u;
    // 7F2DD860: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F2DD864u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F2DD864:
    ctx->pc = 0x7F2DD864u;
    ctx->downcount -= 1;
    // 7F2DD864: bl      0x80044BC8
    {
            ctx->lr = 0x7F2DD868u;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_7F2DD868:
    ctx->pc = 0x7F2DD868u;
    ctx->downcount -= 4;
    // 7F2DD868: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD86C:
    ctx->pc = 0x7F2DD86Cu;
    // 7F2DD86C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD870:
    ctx->pc = 0x7F2DD870u;
    // 7F2DD870: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD874:
    ctx->pc = 0x7F2DD874u;
    // 7F2DD874: bl      0x80044978
    {
            ctx->lr = 0x7F2DD878u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD878:
    ctx->pc = 0x7F2DD878u;
    ctx->downcount -= 5;
    // 7F2DD878: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD87C:
    ctx->pc = 0x7F2DD87Cu;
    // 7F2DD87C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD880:
    ctx->pc = 0x7F2DD880u;
    // 7F2DD880: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD884:
    ctx->pc = 0x7F2DD884u;
    // 7F2DD884: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F2DD888:
    ctx->pc = 0x7F2DD888u;
    // 7F2DD888: bl      0x80044978
    {
            ctx->lr = 0x7F2DD88Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD88C:
    ctx->pc = 0x7F2DD88Cu;
    ctx->downcount -= 5;
    // 7F2DD88C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD890:
    ctx->pc = 0x7F2DD890u;
    // 7F2DD890: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2DD894:
    ctx->pc = 0x7F2DD894u;
    // 7F2DD894: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD898:
    ctx->pc = 0x7F2DD898u;
    // 7F2DD898: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2DD89C:
    ctx->pc = 0x7F2DD89Cu;
    // 7F2DD89C: bl      0x80044978
    {
            ctx->lr = 0x7F2DD8A0u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD8A0:
    ctx->pc = 0x7F2DD8A0u;
    ctx->downcount -= 5;
    // 7F2DD8A0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD8A4:
    ctx->pc = 0x7F2DD8A4u;
    // 7F2DD8A4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F2DD8A8:
    ctx->pc = 0x7F2DD8A8u;
    // 7F2DD8A8: addi    r3, r3, -3788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3788);

label_7F2DD8AC:
    ctx->pc = 0x7F2DD8ACu;
    // 7F2DD8AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD8B0:
    ctx->pc = 0x7F2DD8B0u;
    // 7F2DD8B0: bl      0x80046B68
    {
            ctx->lr = 0x7F2DD8B4u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F2DD8B4:
    ctx->pc = 0x7F2DD8B4u;
    ctx->downcount -= 5;
    // 7F2DD8B4: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD8B8:
    ctx->pc = 0x7F2DD8B8u;
    // 7F2DD8B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD8BC:
    ctx->pc = 0x7F2DD8BCu;
    // 7F2DD8BC: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F2DD8C0:
    ctx->pc = 0x7F2DD8C0u;
    // 7F2DD8C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD8C4:
    ctx->pc = 0x7F2DD8C4u;
    ctx->downcount -= 10;
    // 7F2DD8C4: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD8C8:
    ctx->pc = 0x7F2DD8C8u;
    // 7F2DD8C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD8CC:
    ctx->pc = 0x7F2DD8CCu;
    // 7F2DD8CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DD8D0:
    ctx->pc = 0x7F2DD8D0u;
    // 7F2DD8D0: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD8D4:
    ctx->pc = 0x7F2DD8D4u;
    // 7F2DD8D4: addi    r3, r3, 29404
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29404);

label_7F2DD8D8:
    ctx->pc = 0x7F2DD8D8u;
    // 7F2DD8D8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F2DD8DC:
    ctx->pc = 0x7F2DD8DCu;
    // 7F2DD8DC: addi    r5, r1, 116
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(116);

label_7F2DD8E0:
    ctx->pc = 0x7F2DD8E0u;
    // 7F2DD8E0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2DD8E4:
    ctx->pc = 0x7F2DD8E4u;
    // 7F2DD8E4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2DD8E8:
    loop_7F2DD8E8(ctx);
    if (ctx->pc == 0x7F2DD8FCu) goto label_7F2DD8FC;
    return;
label_7F2DD8EC:
    ctx->pc = 0x7F2DD8ECu;
    // 7F2DD8EC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2DD8F0:
    ctx->pc = 0x7F2DD8F0u;
    // 7F2DD8F0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DD8F4:
    ctx->pc = 0x7F2DD8F4u;
    // 7F2DD8F4: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2DD8F8:
    // 7F2DD8F8: bc    16, 0, 0x7F2DD8E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD8E8u;
                return;
            }
            goto label_7F2DD8E8;
        }
    }

label_7F2DD8FC:
    ctx->pc = 0x7F2DD8FCu;
    ctx->downcount -= 1;
    // 7F2DD8FC: bl      0x80041BD4
    {
            ctx->lr = 0x7F2DD900u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F2DD900:
    ctx->pc = 0x7F2DD900u;
    ctx->downcount -= 3;
    // 7F2DD900: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD904:
    ctx->pc = 0x7F2DD904u;
    // 7F2DD904: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD908:
    ctx->pc = 0x7F2DD908u;
    // 7F2DD908: bl      0x80041500
    {
            ctx->lr = 0x7F2DD90Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F2DD90C:
    ctx->pc = 0x7F2DD90Cu;
    ctx->downcount -= 3;
    // 7F2DD90C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F2DD910:
    ctx->pc = 0x7F2DD910u;
    // 7F2DD910: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DD914:
    ctx->pc = 0x7F2DD914u;
    // 7F2DD914: bl      0x80041500
    {
            ctx->lr = 0x7F2DD918u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F2DD918:
    ctx->pc = 0x7F2DD918u;
    ctx->downcount -= 3;
    // 7F2DD918: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F2DD91C:
    ctx->pc = 0x7F2DD91Cu;
    // 7F2DD91C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DD920:
    ctx->pc = 0x7F2DD920u;
    // 7F2DD920: bl      0x80041500
    {
            ctx->lr = 0x7F2DD924u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F2DD924:
    ctx->pc = 0x7F2DD924u;
    ctx->downcount -= 4;
    // 7F2DD924: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DD928:
    ctx->pc = 0x7F2DD928u;
    // 7F2DD928: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DD92C:
    ctx->pc = 0x7F2DD92Cu;
    // 7F2DD92C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DD930:
    ctx->pc = 0x7F2DD930u;
    // 7F2DD930: bl      0x800462E4
    {
            ctx->lr = 0x7F2DD934u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F2DD934:
    ctx->pc = 0x7F2DD934u;
    ctx->downcount -= 5;
    // 7F2DD934: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DD938:
    ctx->pc = 0x7F2DD938u;
    // 7F2DD938: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD93C:
    ctx->pc = 0x7F2DD93Cu;
    // 7F2DD93C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DD940:
    ctx->pc = 0x7F2DD940u;
    // 7F2DD940: addi    r3, r3, 192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(192);

label_7F2DD944:
    ctx->pc = 0x7F2DD944u;
    // 7F2DD944: bl      0x80025B84
    {
            ctx->lr = 0x7F2DD948u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F2DD948:
    ctx->pc = 0x7F2DD948u;
    ctx->downcount -= 3;
    // 7F2DD948: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DD94C:
    ctx->pc = 0x7F2DD94Cu;
    // 7F2DD94C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD950:
    ctx->pc = 0x7F2DD950u;
    // 7F2DD950: bl      0x800468B8
    {
            ctx->lr = 0x7F2DD954u;
            ctx->pc = 0x800468B8u;
            return;
    }

label_7F2DD954:
    ctx->pc = 0x7F2DD954u;
    ctx->downcount -= 5;
    // 7F2DD954: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DD958:
    ctx->pc = 0x7F2DD958u;
    // 7F2DD958: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD95C:
    ctx->pc = 0x7F2DD95Cu;
    // 7F2DD95C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DD960:
    ctx->pc = 0x7F2DD960u;
    // 7F2DD960: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2DD964:
    ctx->pc = 0x7F2DD964u;
    // 7F2DD964: bl      0x7F114E28
    {
            ctx->lr = 0x7F2DD968u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F2DD968:
    ctx->pc = 0x7F2DD968u;
    ctx->downcount -= 3;
    // 7F2DD968: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DD96C:
    ctx->pc = 0x7F2DD96Cu;
    // 7F2DD96C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD970:
    ctx->pc = 0x7F2DD970u;
    // 7F2DD970: bl      0x80046A30
    {
            ctx->lr = 0x7F2DD974u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_7F2DD974:
    ctx->pc = 0x7F2DD974u;
    ctx->downcount -= 2;
    // 7F2DD974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DD978:
    ctx->pc = 0x7F2DD978u;
    // 7F2DD978: bl      0x80046B34
    {
            ctx->lr = 0x7F2DD97Cu;
            ctx->pc = 0x80046B34u;
            return;
    }

label_7F2DD97C:
    ctx->pc = 0x7F2DD97Cu;
    ctx->downcount -= 3;
    // 7F2DD97C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F2DD980:
    ctx->pc = 0x7F2DD980u;
    // 7F2DD980: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD984:
    ctx->pc = 0x7F2DD984u;
    // 7F2DD984: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F2DD988u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F2DD988:
    ctx->pc = 0x7F2DD988u;
    ctx->downcount -= 1;
    // 7F2DD988: bl      0x80044BC8
    {
            ctx->lr = 0x7F2DD98Cu;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_7F2DD98C:
    ctx->pc = 0x7F2DD98Cu;
    ctx->downcount -= 4;
    // 7F2DD98C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD990:
    ctx->pc = 0x7F2DD990u;
    // 7F2DD990: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DD994:
    ctx->pc = 0x7F2DD994u;
    // 7F2DD994: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD998:
    ctx->pc = 0x7F2DD998u;
    // 7F2DD998: bl      0x80044978
    {
            ctx->lr = 0x7F2DD99Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD99C:
    ctx->pc = 0x7F2DD99Cu;
    ctx->downcount -= 5;
    // 7F2DD99C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD9A0:
    ctx->pc = 0x7F2DD9A0u;
    // 7F2DD9A0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DD9A4:
    ctx->pc = 0x7F2DD9A4u;
    // 7F2DD9A4: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD9A8:
    ctx->pc = 0x7F2DD9A8u;
    // 7F2DD9A8: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F2DD9AC:
    ctx->pc = 0x7F2DD9ACu;
    // 7F2DD9AC: bl      0x80044978
    {
            ctx->lr = 0x7F2DD9B0u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD9B0:
    ctx->pc = 0x7F2DD9B0u;
    ctx->downcount -= 5;
    // 7F2DD9B0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DD9B4:
    ctx->pc = 0x7F2DD9B4u;
    // 7F2DD9B4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2DD9B8:
    ctx->pc = 0x7F2DD9B8u;
    // 7F2DD9B8: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DD9BC:
    ctx->pc = 0x7F2DD9BCu;
    // 7F2DD9BC: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2DD9C0:
    ctx->pc = 0x7F2DD9C0u;
    // 7F2DD9C0: bl      0x80044978
    {
            ctx->lr = 0x7F2DD9C4u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F2DD9C4:
    ctx->pc = 0x7F2DD9C4u;
    ctx->downcount -= 4;
    // 7F2DD9C4: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F2DD9C8:
    ctx->pc = 0x7F2DD9C8u;
    // 7F2DD9C8: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F2DD9CC:
    ctx->pc = 0x7F2DD9CCu;
    // 7F2DD9CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DD9D0:
    ctx->pc = 0x7F2DD9D0u;
    // 7F2DD9D0: bl      0x80046B68
    {
            ctx->lr = 0x7F2DD9D4u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F2DD9D4:
    ctx->pc = 0x7F2DD9D4u;
    ctx->downcount -= 5;
    // 7F2DD9D4: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DD9D8:
    ctx->pc = 0x7F2DD9D8u;
    // 7F2DD9D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DD9DC:
    ctx->pc = 0x7F2DD9DCu;
    // 7F2DD9DC: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F2DD9E0:
    ctx->pc = 0x7F2DD9E0u;
    // 7F2DD9E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DD9E4:
    ctx->pc = 0x7F2DD9E4u;
    ctx->downcount -= 78;
    // 7F2DD9E4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DD9E8:
    ctx->pc = 0x7F2DD9E8u;
    // 7F2DD9E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DD9EC:
    ctx->pc = 0x7F2DD9ECu;
    // 7F2DD9EC: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DD9F0:
    ctx->pc = 0x7F2DD9F0u;
    // 7F2DD9F0: stfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD9F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2DD9F4:
    ctx->pc = 0x7F2DD9F4u;
    // 7F2DD9F4: psq_st   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DD9F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2DD9F4u);
        if (ctx->exception) return;
    }

label_7F2DD9F8:
    ctx->pc = 0x7F2DD9F8u;
    // 7F2DD9F8: stfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DD9F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2DD9FC:
    ctx->pc = 0x7F2DD9FCu;
    // 7F2DD9FC: psq_st   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DD9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2DD9FCu);
        if (ctx->exception) return;
    }

label_7F2DDA00:
    ctx->pc = 0x7F2DDA00u;
    // 7F2DDA00: stfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F2DDA04:
    ctx->pc = 0x7F2DDA04u;
    // 7F2DDA04: psq_st   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F2DDA04u);
        if (ctx->exception) return;
    }

label_7F2DDA08:
    ctx->pc = 0x7F2DDA08u;
    // 7F2DDA08: stfd     f28, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F2DDA0C:
    ctx->pc = 0x7F2DDA0Cu;
    // 7F2DDA0C: psq_st   f28, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F2DDA0Cu);
        if (ctx->exception) return;
    }

label_7F2DDA10:
    ctx->pc = 0x7F2DDA10u;
    // 7F2DDA10: stmw     r20, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DDA14:
    ctx->pc = 0x7F2DDA14u;
    // 7F2DDA14: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DDA18:
    ctx->pc = 0x7F2DDA18u;
    // 7F2DDA18: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F2DDA1C:
    ctx->pc = 0x7F2DDA1Cu;
    // 7F2DDA1C: addi    r27, r4, -4820
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-4820);

label_7F2DDA20:
    ctx->pc = 0x7F2DDA20u;
    // 7F2DDA20: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2DDA24:
    ctx->pc = 0x7F2DDA24u;
    // 7F2DDA24: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDA28:
    ctx->pc = 0x7F2DDA28u;
    // 7F2DDA28: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DDA2C:
    ctx->pc = 0x7F2DDA2Cu;
    // 7F2DDA2C: addi    r5, r4, 29456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29456);

label_7F2DDA30:
    ctx->pc = 0x7F2DDA30u;
    // 7F2DDA30: lwz     r4, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDA34:
    ctx->pc = 0x7F2DDA34u;
    // 7F2DDA34: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DDA38:
    ctx->pc = 0x7F2DDA38u;
    // 7F2DDA38: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDA3C:
    ctx->pc = 0x7F2DDA3Cu;
    // 7F2DDA3C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2DDA40:
    ctx->pc = 0x7F2DDA40u;
    // 7F2DDA40: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDA44:
    ctx->pc = 0x7F2DDA44u;
    // 7F2DDA44: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDA48:
    ctx->pc = 0x7F2DDA48u;
    // 7F2DDA48: lfs     f3, 29452(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(29452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DDA4C:
    ctx->pc = 0x7F2DDA4Cu;
    // 7F2DDA4C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDA50:
    ctx->pc = 0x7F2DDA50u;
    // 7F2DDA50: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DDA54:
    ctx->pc = 0x7F2DDA54u;
    // 7F2DDA54: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA54u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2DDA58:
    ctx->pc = 0x7F2DDA58u;
    // 7F2DDA58: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDA5C:
    ctx->pc = 0x7F2DDA5Cu;
    // 7F2DDA5C: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDA60:
    ctx->pc = 0x7F2DDA60u;
    // 7F2DDA60: fdivs   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA60u)) return;
    ppc_fdivs(ctx, 0, 3, 0);

label_7F2DDA64:
    ctx->pc = 0x7F2DDA64u;
    // 7F2DDA64: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA64u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2DDA68:
    ctx->pc = 0x7F2DDA68u;
    // 7F2DDA68: fsubs   f28, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA68u)) return;
    ppc_fsubs(ctx, 28, 3, 0);

label_7F2DDA6C:
    ctx->pc = 0x7F2DDA6Cu;
    // 7F2DDA6C: fdivs   f29, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA6Cu)) return;
    ppc_fdivs(ctx, 29, 3, 1);

label_7F2DDA70:
    ctx->pc = 0x7F2DDA70u;
    // 7F2DDA70: bl      0x7F2DD774
    {
            ctx->lr = 0x7F2DDA74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD774u;
                return;
            }
            goto label_7F2DD774;
    }

label_7F2DDA74:
    ctx->pc = 0x7F2DDA74u;
    ctx->downcount -= 14;
    // 7F2DDA74: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DDA78:
    ctx->pc = 0x7F2DDA78u;
    // 7F2DDA78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DDA7C:
    ctx->pc = 0x7F2DDA7Cu;
    // 7F2DDA7C: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2DDA80:
    ctx->pc = 0x7F2DDA80u;
    // 7F2DDA80: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2DDA84:
    ctx->pc = 0x7F2DDA84u;
    // 7F2DDA84: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2DDA88:
    ctx->pc = 0x7F2DDA88u;
    // 7F2DDA88: lfd     f30, 29456(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29456);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDA8C:
    ctx->pc = 0x7F2DDA8Cu;
    // 7F2DDA8C: lfs     f31, 29452(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDA8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2DDA90:
    ctx->pc = 0x7F2DDA90u;
    // 7F2DDA90: addi    r28, r7, -4224
    ctx->gpr[28] = ctx->gpr[7] + (u32)(s32)(-4224);

label_7F2DDA94:
    ctx->pc = 0x7F2DDA94u;
    // 7F2DDA94: addi    r29, r6, -4256
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(-4256);

label_7F2DDA98:
    ctx->pc = 0x7F2DDA98u;
    // 7F2DDA98: addi    r30, r5, -4820
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-4820);

label_7F2DDA9C:
    ctx->pc = 0x7F2DDA9Cu;
    // 7F2DDA9C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2DDAA0:
    ctx->pc = 0x7F2DDAA0u;
    // 7F2DDAA0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2DDAA4:
    ctx->pc = 0x7F2DDAA4u;
    // 7F2DDAA4: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F2DDAA8:
    ctx->pc = 0x7F2DDAA8u;
    // 7F2DDAA8: b       0x7F2DDBC0
    {
            goto label_7F2DDBC0;
    }

label_7F2DDAAC:
    ctx->pc = 0x7F2DDAACu;
    ctx->downcount -= 183;
    // 7F2DDAAC: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDAB0:
    // 7F2DDAB0: add   r20, r30, r25
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F2DDAB4:
    ctx->pc = 0x7F2DDAB4u;
    // 7F2DDAB4: lha     r8, 16(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(16);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDAB8:
    // 7F2DDAB8: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2DDABC:
    // 7F2DDABC: divw   r22, r26, r0
    {
        s32 dividend = (s32)ctx->gpr[26];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[22] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DDAC0:
    ctx->pc = 0x7F2DDAC0u;
    // 7F2DDAC0: lwz     r21, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F2DDAC4:
    ctx->pc = 0x7F2DDAC4u;
    // 7F2DDAC4: lha     r10, 20(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(20);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDAC8:
    // 7F2DDAC8: xoris   r24, r0, 0x8000
    ctx->gpr[24] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DDACC:
    ctx->pc = 0x7F2DDACCu;
    // 7F2DDACC: lha     r7, 24(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(24);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDAD0:
    // 7F2DDAD0: xoris   r11, r21, 0x8000
    ctx->gpr[11] = ctx->gpr[21] ^ (0x8000u << 16);

label_7F2DDAD4:
    // 7F2DDAD4: divw   r12, r22, r21
    {
        s32 dividend = (s32)ctx->gpr[22];
        s32 divisor = (s32)ctx->gpr[21];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[12] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DDAD8:
    ctx->pc = 0x7F2DDAD8u;
    // 7F2DDAD8: lha     r6, 26(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(26);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDADC:
    ctx->pc = 0x7F2DDADCu;
    // 7F2DDADC: lha     r5, 18(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(18);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDAE0:
    // 7F2DDAE0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2DDAE4:
    ctx->pc = 0x7F2DDAE4u;
    // 7F2DDAE4: lha     r9, 28(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(28);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DDAE8:
    ctx->pc = 0x7F2DDAE8u;
    // 7F2DDAE8: stw     r24, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2DDAEC:
    // 7F2DDAEC: mullw   r23, r22, r0
    {
        s64 product = (s64)(s32)ctx->gpr[22] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[23] = (u32)product;
    }

label_7F2DDAF0:
    ctx->pc = 0x7F2DDAF0u;
    // 7F2DDAF0: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DDAF4:
    ctx->pc = 0x7F2DDAF4u;
    // 7F2DDAF4: lwz     r0, 32(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDAF8:
    ctx->pc = 0x7F2DDAF8u;
    // 7F2DDAF8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDAF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDAFC:
    ctx->pc = 0x7F2DDAFCu;
    // 7F2DDAFC: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DDB00:
    ctx->pc = 0x7F2DDB00u;
    // 7F2DDB00: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB00u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F2DDB04:
    // 7F2DDB04: mullw   r12, r12, r21
    {
        s64 product = (s64)(s32)ctx->gpr[12] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[12] = (u32)product;
    }

label_7F2DDB08:
    // 7F2DDB08: subf   r24, r23, r26
    {
        u32 a = ~ctx->gpr[23];
        u32 b = ctx->gpr[26];
        u32 res = a + b + 1u;
        ctx->gpr[24] = res;
    }

label_7F2DDB0C:
    ctx->pc = 0x7F2DDB0Cu;
    // 7F2DDB0C: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DDB10:
    // 7F2DDB10: xoris   r24, r24, 0x8000
    ctx->gpr[24] = ctx->gpr[24] ^ (0x8000u << 16);

label_7F2DDB14:
    ctx->pc = 0x7F2DDB14u;
    // 7F2DDB14: stw     r24, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2DDB18:
    ctx->pc = 0x7F2DDB18u;
    // 7F2DDB18: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDB1C:
    // 7F2DDB1C: subf   r12, r12, r22
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[22];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_7F2DDB20:
    ctx->pc = 0x7F2DDB20u;
    // 7F2DDB20: stw     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DDB24:
    // 7F2DDB24: xoris   r12, r12, 0x8000
    ctx->gpr[12] = ctx->gpr[12] ^ (0x8000u << 16);

label_7F2DDB28:
    ctx->pc = 0x7F2DDB28u;
    // 7F2DDB28: fsubs   f2, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB28u)) return;
    ppc_fsubs(ctx, 2, 1, 30);

label_7F2DDB2C:
    ctx->pc = 0x7F2DDB2Cu;
    // 7F2DDB2C: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DDB30:
    ctx->pc = 0x7F2DDB30u;
    // 7F2DDB30: fdivs   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB30u)) return;
    ppc_fdivs(ctx, 3, 2, 0);

label_7F2DDB34:
    ctx->pc = 0x7F2DDB34u;
    // 7F2DDB34: stw     r31, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DDB38:
    ctx->pc = 0x7F2DDB38u;
    // 7F2DDB38: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDB3C:
    ctx->pc = 0x7F2DDB3Cu;
    // 7F2DDB3C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDB40:
    ctx->pc = 0x7F2DDB40u;
    // 7F2DDB40: sth     r10, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2DDB44:
    ctx->pc = 0x7F2DDB44u;
    // 7F2DDB44: sth     r10, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2DDB48:
    ctx->pc = 0x7F2DDB48u;
    // 7F2DDB48: fadds   f2, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB48u)) return;
    ppc_fadds(ctx, 2, 3, 29);

label_7F2DDB4C:
    ctx->pc = 0x7F2DDB4Cu;
    // 7F2DDB4C: sth     r9, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F2DDB50:
    ctx->pc = 0x7F2DDB50u;
    // 7F2DDB50: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB50u)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F2DDB54:
    ctx->pc = 0x7F2DDB54u;
    // 7F2DDB54: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB54u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F2DDB58:
    ctx->pc = 0x7F2DDB58u;
    // 7F2DDB58: sth     r9, 22(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F2DDB5C:
    ctx->pc = 0x7F2DDB5Cu;
    // 7F2DDB5C: sth     r8, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F2DDB60:
    ctx->pc = 0x7F2DDB60u;
    // 7F2DDB60: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB60u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2DDB64:
    ctx->pc = 0x7F2DDB64u;
    // 7F2DDB64: sth     r8, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F2DDB68:
    ctx->pc = 0x7F2DDB68u;
    // 7F2DDB68: sth     r7, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2DDB6C:
    ctx->pc = 0x7F2DDB6Cu;
    // 7F2DDB6C: sth     r7, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2DDB70:
    ctx->pc = 0x7F2DDB70u;
    // 7F2DDB70: sth     r6, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2DDB74:
    ctx->pc = 0x7F2DDB74u;
    // 7F2DDB74: sth     r6, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2DDB78:
    ctx->pc = 0x7F2DDB78u;
    // 7F2DDB78: fsubs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB78u)) return;
    ppc_fsubs(ctx, 0, 31, 1);

label_7F2DDB7C:
    ctx->pc = 0x7F2DDB7Cu;
    // 7F2DDB7C: sth     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2DDB80:
    ctx->pc = 0x7F2DDB80u;
    // 7F2DDB80: fsubs   f1, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB80u)) return;
    ppc_fsubs(ctx, 1, 28, 1);

label_7F2DDB84:
    ctx->pc = 0x7F2DDB84u;
    // 7F2DDB84: sth     r5, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2DDB88:
    ctx->pc = 0x7F2DDB88u;
    // 7F2DDB88: stfs     f3, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB88u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2DDB8C:
    ctx->pc = 0x7F2DDB8Cu;
    // 7F2DDB8C: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB8Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DDB90:
    ctx->pc = 0x7F2DDB90u;
    // 7F2DDB90: stfs     f2, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB90u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DDB94:
    ctx->pc = 0x7F2DDB94u;
    // 7F2DDB94: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB94u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DDB98:
    ctx->pc = 0x7F2DDB98u;
    // 7F2DDB98: stfs     f2, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB98u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DDB9C:
    ctx->pc = 0x7F2DDB9Cu;
    // 7F2DDB9C: stfs     f1, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDB9Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DDBA0:
    ctx->pc = 0x7F2DDBA0u;
    // 7F2DDBA0: stfs     f3, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDBA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2DDBA4:
    ctx->pc = 0x7F2DDBA4u;
    // 7F2DDBA4: stfs     f1, 28(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDBA4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DDBA8:
    ctx->pc = 0x7F2DDBA8u;
    // 7F2DDBA8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDBAC:
    // 7F2DDBAC: bl      0x80043F94
    {
            ctx->lr = 0x7F2DDBB0u;
            ctx->pc = 0x80043F94u;
            return;
    }

label_7F2DDBB0:
    ctx->downcount -= 2;
    // 7F2DDBB0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2DDBB4:
    // 7F2DDBB4: bl      0x7F2DD208
    {
            ctx->lr = 0x7F2DDBB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD208u;
                return;
            }
            goto label_7F2DD208;
    }

label_7F2DDBB8:
    ctx->downcount -= 2;
    // 7F2DDBB8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F2DDBBC:
    // 7F2DDBBC: addi    r25, r25, 20
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(20);

label_7F2DDBC0:
    ctx->pc = 0x7F2DDBC0u;
    ctx->downcount -= 4;
    // 7F2DDBC0: lbz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DDBC4:
    // 7F2DDBC4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F2DDBC8:
    // 7F2DDBC8: cmpw    r26, r0
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

label_7F2DDBCC:
    // 7F2DDBCC: bc    12, 0, 0x7F2DDAAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDAACu;
                return;
            }
            goto label_7F2DDAAC;
        }
    }

label_7F2DDBD0:
    ctx->pc = 0x7F2DDBD0u;
    ctx->downcount -= 1;
    // 7F2DDBD0: bl      0x7F2DD8C4
    {
            ctx->lr = 0x7F2DDBD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD8C4u;
                return;
            }
            goto label_7F2DD8C4;
    }

label_7F2DDBD4:
    ctx->pc = 0x7F2DDBD4u;
    ctx->downcount -= 10;
    // 7F2DDBD4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DDBD8:
    ctx->pc = 0x7F2DDBD8u;
    // 7F2DDBD8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DDBDC:
    ctx->pc = 0x7F2DDBDCu;
    // 7F2DDBDC: addi    r5, r3, 28636
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DDBE0:
    ctx->pc = 0x7F2DDBE0u;
    // 7F2DDBE0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F2DDBE4:
    ctx->pc = 0x7F2DDBE4u;
    // 7F2DDBE4: addi    r22, r5, 640
    ctx->gpr[22] = ctx->gpr[5] + (u32)(s32)(640);

label_7F2DDBE8:
    ctx->pc = 0x7F2DDBE8u;
    // 7F2DDBE8: addi    r27, r4, -4820
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-4820);

label_7F2DDBEC:
    ctx->pc = 0x7F2DDBECu;
    // 7F2DDBEC: addi    r25, r3, -12088
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-12088);

label_7F2DDBF0:
    ctx->pc = 0x7F2DDBF0u;
    // 7F2DDBF0: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2DDBF4:
    ctx->pc = 0x7F2DDBF4u;
    // 7F2DDBF4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2DDBF8:
    ctx->pc = 0x7F2DDBF8u;
    // 7F2DDBF8: b       0x7F2DDC80
    {
            goto label_7F2DDC80;
    }

label_7F2DDBFC:
    ctx->downcount -= 6;
    // 7F2DDBFC: add   r20, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F2DDC00:
    ctx->pc = 0x7F2DDC00u;
    // 7F2DDC00: lwz     r23, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2DDC04:
    ctx->pc = 0x7F2DDC04u;
    // 7F2DDC04: lwz     r4, 224(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDC08:
    // 7F2DDC08: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F2DDC0C:
    // 7F2DDC0C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2DDC10:
    // 7F2DDC10: bl      0x80042184
    {
            ctx->lr = 0x7F2DDC14u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F2DDC14:
    ctx->pc = 0x7F2DDC14u;
    ctx->downcount -= 4;
    // 7F2DDC14: lwz     r4, 228(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDC18:
    // 7F2DDC18: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F2DDC1C:
    // 7F2DDC1C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2DDC20:
    // 7F2DDC20: bl      0x80042184
    {
            ctx->lr = 0x7F2DDC24u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F2DDC24:
    ctx->pc = 0x7F2DDC24u;
    ctx->downcount -= 6;
    // 7F2DDC24: lwz     r4, 232(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDC28:
    // 7F2DDC28: rlwinm r0, r23, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 2u) & 0xFFFFFFFCu;
    }

label_7F2DDC2C:
    // 7F2DDC2C: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_7F2DDC30:
    // 7F2DDC30: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F2DDC34:
    ctx->pc = 0x7F2DDC34u;
    // 7F2DDC34: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDC38:
    // 7F2DDC38: bl      0x80042184
    {
            ctx->lr = 0x7F2DDC3Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F2DDC3C:
    ctx->pc = 0x7F2DDC3Cu;
    ctx->downcount -= 5;
    // 7F2DDC3C: lwz     r0, 236(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDC40:
    // 7F2DDC40: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DDC44:
    // 7F2DDC44: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2DDC48:
    ctx->pc = 0x7F2DDC48u;
    // 7F2DDC48: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDC4C:
    // 7F2DDC4C: bl      0x80043F94
    {
            ctx->lr = 0x7F2DDC50u;
            ctx->pc = 0x80043F94u;
            return;
    }

label_7F2DDC50:
    ctx->pc = 0x7F2DDC50u;
    ctx->downcount -= 3;
    // 7F2DDC50: lwzu     r3, 216(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[20] = ea;
    }

label_7F2DDC54:
    // 7F2DDC54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DDC58:
    // 7F2DDC58: bl      0x7F3ABF74
    {
            ctx->lr = 0x7F2DDC5Cu;
            ctx->pc = 0x7F3ABF74u;
            return;
    }

label_7F2DDC5C:
    ctx->pc = 0x7F2DDC5Cu;
    ctx->downcount -= 5;
    // 7F2DDC5C: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDC60:
    // 7F2DDC60: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F2DDC64:
    // 7F2DDC64: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2DDC68:
    // 7F2DDC68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DDC6C:
    // 7F2DDC6C: bl      0x7F3AC188
    {
            ctx->lr = 0x7F2DDC70u;
            ctx->pc = 0x7F3AC188u;
            return;
    }

label_7F2DDC70:
    ctx->downcount -= 2;
    // 7F2DDC70: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2DDC74:
    // 7F2DDC74: bl      0x7F2DD208
    {
            ctx->lr = 0x7F2DDC78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD208u;
                return;
            }
            goto label_7F2DD208;
    }

label_7F2DDC78:
    ctx->downcount -= 2;
    // 7F2DDC78: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F2DDC7C:
    // 7F2DDC7C: addi    r26, r26, 24
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(24);

label_7F2DDC80:
    ctx->pc = 0x7F2DDC80u;
    ctx->downcount -= 4;
    // 7F2DDC80: lbz     r0, 5(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DDC84:
    // 7F2DDC84: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F2DDC88:
    // 7F2DDC88: cmpw    r21, r0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DDC8C:
    // 7F2DDC8C: bc    12, 0, 0x7F2DDBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDBFCu;
                return;
            }
            goto label_7F2DDBFC;
        }
    }

label_7F2DDC90:
    ctx->pc = 0x7F2DDC90u;
    ctx->downcount -= 24;
    // 7F2DDC90: psq_l   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDC90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2DDC90u);
        if (ctx->exception) return;
    }

label_7F2DDC94:
    ctx->pc = 0x7F2DDC94u;
    // 7F2DDC94: lfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDC94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDC98:
    ctx->pc = 0x7F2DDC98u;
    // 7F2DDC98: psq_l   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDC98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2DDC98u);
        if (ctx->exception) return;
    }

label_7F2DDC9C:
    ctx->pc = 0x7F2DDC9Cu;
    // 7F2DDC9C: lfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDC9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDCA0:
    ctx->pc = 0x7F2DDCA0u;
    // 7F2DDCA0: psq_l   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDCA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2DDCA0u);
        if (ctx->exception) return;
    }

label_7F2DDCA4:
    ctx->pc = 0x7F2DDCA4u;
    // 7F2DDCA4: lfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDCA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDCA8:
    ctx->pc = 0x7F2DDCA8u;
    // 7F2DDCA8: psq_l   f28, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2DDCA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F2DDCA8u);
        if (ctx->exception) return;
    }

label_7F2DDCAC:
    ctx->pc = 0x7F2DDCACu;
    // 7F2DDCAC: lfd     f28, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DDCACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DDCB0:
    ctx->pc = 0x7F2DDCB0u;
    // 7F2DDCB0: lmw     r20, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DDCB4:
    ctx->pc = 0x7F2DDCB4u;
    // 7F2DDCB4: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDCB8:
    ctx->pc = 0x7F2DDCB8u;
    // 7F2DDCB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DDCBC:
    ctx->pc = 0x7F2DDCBCu;
    // 7F2DDCBC: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F2DDCC0:
    ctx->pc = 0x7F2DDCC0u;
    // 7F2DDCC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DDCC4:
    ctx->pc = 0x7F2DDCC4u;
    ctx->downcount -= 5;
    // 7F2DDCC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DDCC8:
    ctx->pc = 0x7F2DDCC8u;
    // 7F2DDCC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DDCCC:
    ctx->pc = 0x7F2DDCCCu;
    // 7F2DDCCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDCD0:
    ctx->pc = 0x7F2DDCD0u;
    // 7F2DDCD0: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDCD4:
    ctx->pc = 0x7F2DDCD4u;
    // 7F2DDCD4: bl      0x7F024A44
    {
            ctx->lr = 0x7F2DDCD8u;
            ctx->pc = 0x7F024A44u;
            return;
    }

label_7F2DDCD8:
    ctx->pc = 0x7F2DDCD8u;
    ctx->downcount -= 5;
    // 7F2DDCD8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDCDC:
    ctx->pc = 0x7F2DDCDCu;
    // 7F2DDCDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DDCE0:
    ctx->pc = 0x7F2DDCE0u;
    // 7F2DDCE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DDCE4:
    ctx->pc = 0x7F2DDCE4u;
    // 7F2DDCE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DDCE8:
    ctx->pc = 0x7F2DDCE8u;
    ctx->downcount -= 7;
    // 7F2DDCE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDCEC:
    ctx->pc = 0x7F2DDCECu;
    // 7F2DDCEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DDCF0:
    ctx->pc = 0x7F2DDCF0u;
    // 7F2DDCF0: addi    r4, r3, -4828
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDCF4:
    ctx->pc = 0x7F2DDCF4u;
    // 7F2DDCF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DDCF8:
    ctx->pc = 0x7F2DDCF8u;
    // 7F2DDCF8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDCFC:
    ctx->pc = 0x7F2DDCFCu;
    // 7F2DDCFC: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDD00:
    ctx->pc = 0x7F2DDD00u;
    // 7F2DDD00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DDD04:
    ctx->pc = 0x7F2DDD04u;
    ctx->downcount -= 7;
    // 7F2DDD04: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDD08:
    ctx->pc = 0x7F2DDD08u;
    // 7F2DDD08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DDD0C:
    ctx->pc = 0x7F2DDD0Cu;
    // 7F2DDD0C: addi    r4, r3, -4828
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDD10:
    ctx->pc = 0x7F2DDD10u;
    // 7F2DDD10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DDD14:
    ctx->pc = 0x7F2DDD14u;
    // 7F2DDD14: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDD18:
    ctx->pc = 0x7F2DDD18u;
    // 7F2DDD18: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDD1C:
    ctx->pc = 0x7F2DDD1Cu;
    // 7F2DDD1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DDD20:
    ctx->pc = 0x7F2DDD20u;
    ctx->downcount -= 8;
    // 7F2DDD20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DDD24:
    ctx->pc = 0x7F2DDD24u;
    // 7F2DDD24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DDD28:
    ctx->pc = 0x7F2DDD28u;
    // 7F2DDD28: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDD2C:
    ctx->pc = 0x7F2DDD2Cu;
    // 7F2DDD2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDD30:
    ctx->pc = 0x7F2DDD30u;
    // 7F2DDD30: lwzu     r4, -4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4828);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F2DDD34:
    ctx->pc = 0x7F2DDD34u;
    // 7F2DDD34: lwz     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDD38:
    ctx->pc = 0x7F2DDD38u;
    // 7F2DDD38: cmpwi   r0, -1
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

label_7F2DDD3C:
    ctx->pc = 0x7F2DDD3Cu;
    // 7F2DDD3C: bc    12, 2, 0x7F2DDD50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDD50;
        }
    }

label_7F2DDD40:
    ctx->pc = 0x7F2DDD40u;
    ctx->downcount -= 4;
    // 7F2DDD40: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDD44:
    ctx->pc = 0x7F2DDD44u;
    // 7F2DDD44: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DDD48:
    ctx->pc = 0x7F2DDD48u;
    // 7F2DDD48: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDD4C:
    ctx->pc = 0x7F2DDD4Cu;
    // 7F2DDD4C: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDD50:
    ctx->pc = 0x7F2DDD50u;
    ctx->downcount -= 6;
    // 7F2DDD50: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDD54:
    ctx->pc = 0x7F2DDD54u;
    // 7F2DDD54: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DDD58:
    ctx->pc = 0x7F2DDD58u;
    // 7F2DDD58: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDD5C:
    ctx->pc = 0x7F2DDD5Cu;
    // 7F2DDD5C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDD60:
    ctx->pc = 0x7F2DDD60u;
    // 7F2DDD60: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDD64:
    ctx->pc = 0x7F2DDD64u;
    // 7F2DDD64: bl      0x7F3C9624
    {
            ctx->lr = 0x7F2DDD68u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F2DDD68:
    ctx->pc = 0x7F2DDD68u;
    ctx->downcount -= 4;
    // 7F2DDD68: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F2DDD6C:
    ctx->pc = 0x7F2DDD6Cu;
    // 7F2DDD6C: cmpwi   r3, 0
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

label_7F2DDD70:
    ctx->pc = 0x7F2DDD70u;
    // 7F2DDD70: bc    4, 1, 0x7F2DDDF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDDF0;
        }
    }

label_7F2DDD74:
    ctx->pc = 0x7F2DDD74u;
    ctx->downcount -= 5;
    // 7F2DDD74: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDD78:
    ctx->pc = 0x7F2DDD78u;
    // 7F2DDD78: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDD7C:
    ctx->pc = 0x7F2DDD7Cu;
    // 7F2DDD7C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDD80:
    // 7F2DDD80: cmpwi   r0, 1
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

label_7F2DDD84:
    // 7F2DDD84: bc    12, 2, 0x7F2DDDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDDCC;
        }
    }

label_7F2DDD88:
    ctx->downcount -= 1;
    // 7F2DDD88: bc    4, 0, 0x7F2DDDE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDDE0;
        }
    }

label_7F2DDD8C:
    ctx->downcount -= 2;
    // 7F2DDD8C: cmpwi   r0, 0
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

label_7F2DDD90:
    // 7F2DDD90: bc    4, 0, 0x7F2DDD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDD98;
        }
    }

label_7F2DDD94:
    ctx->downcount -= 1;
    // 7F2DDD94: b       0x7F2DDDE0
    {
            goto label_7F2DDDE0;
    }

label_7F2DDD98:
    ctx->downcount -= 5;
    // 7F2DDD98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDD9C:
    // 7F2DDD9C: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2DDDA0:
    ctx->pc = 0x7F2DDDA0u;
    // 7F2DDDA0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDDA4:
    // 7F2DDDA4: cmplwi  r3, 0x0000
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

label_7F2DDDA8:
    // 7F2DDDA8: bc    12, 2, 0x7F2DDDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDDB4;
        }
    }

label_7F2DDDAC:
    ctx->downcount -= 2;
    // 7F2DDDAC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DDDB0:
    ctx->pc = 0x7F2DDDB0u;
    // 7F2DDDB0: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDDB4:
    ctx->downcount -= 6;
    // 7F2DDDB4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDDB8:
    // 7F2DDDB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DDDBC:
    // 7F2DDDBC: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDDC0:
    ctx->pc = 0x7F2DDDC0u;
    // 7F2DDDC0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDDC4:
    ctx->pc = 0x7F2DDDC4u;
    // 7F2DDDC4: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDDC8:
    // 7F2DDDC8: b       0x7F2DDDE0
    {
            goto label_7F2DDDE0;
    }

label_7F2DDDCC:
    ctx->downcount -= 5;
    // 7F2DDDCC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDDD0:
    // 7F2DDDD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DDDD4:
    // 7F2DDDD4: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDDD8:
    ctx->pc = 0x7F2DDDD8u;
    // 7F2DDDD8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDDDC:
    ctx->pc = 0x7F2DDDDCu;
    // 7F2DDDDC: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDDE0:
    ctx->pc = 0x7F2DDDE0u;
    ctx->downcount -= 4;
    // 7F2DDDE0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDDE4:
    // 7F2DDDE4: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2DDDE8:
    ctx->pc = 0x7F2DDDE8u;
    // 7F2DDDE8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDDEC:
    // 7F2DDDEC: bc    16, 0, 0x7F2DDD74
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDD74u;
                return;
            }
            goto label_7F2DDD74;
        }
    }

label_7F2DDDF0:
    ctx->pc = 0x7F2DDDF0u;
    ctx->downcount -= 5;
    // 7F2DDDF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDDF4:
    ctx->pc = 0x7F2DDDF4u;
    // 7F2DDDF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DDDF8:
    ctx->pc = 0x7F2DDDF8u;
    // 7F2DDDF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DDDFC:
    ctx->pc = 0x7F2DDDFCu;
    // 7F2DDDFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DDE00:
    ctx->pc = 0x7F2DDE00u;
    ctx->downcount -= 18;
    // 7F2DDE00: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DDE04:
    ctx->pc = 0x7F2DDE04u;
    // 7F2DDE04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DDE08:
    ctx->pc = 0x7F2DDE08u;
    // 7F2DDE08: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDE0C:
    ctx->pc = 0x7F2DDE0Cu;
    // 7F2DDE0C: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DDE10:
    ctx->pc = 0x7F2DDE10u;
    // 7F2DDE10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DDE14:
    ctx->pc = 0x7F2DDE14u;
    // 7F2DDE14: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDE18:
    ctx->pc = 0x7F2DDE18u;
    // 7F2DDE18: cmpwi   r0, 2
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

label_7F2DDE1C:
    ctx->pc = 0x7F2DDE1Cu;
    // 7F2DDE1C: bc    12, 2, 0x7F2DE18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE18C;
        }
    }

label_7F2DDE20:
    ctx->pc = 0x7F2DDE20u;
    ctx->downcount -= 1;
    // 7F2DDE20: bc    4, 0, 0x7F2DDE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDE34;
        }
    }

label_7F2DDE24:
    ctx->pc = 0x7F2DDE24u;
    ctx->downcount -= 2;
    // 7F2DDE24: cmpwi   r0, 0
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

label_7F2DDE28:
    ctx->pc = 0x7F2DDE28u;
    // 7F2DDE28: bc    12, 2, 0x7F2DDE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDE40;
        }
    }

label_7F2DDE2C:
    ctx->pc = 0x7F2DDE2Cu;
    ctx->downcount -= 1;
    // 7F2DDE2C: bc    4, 0, 0x7F2DE0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE0E0;
        }
    }

label_7F2DDE30:
    ctx->pc = 0x7F2DDE30u;
    ctx->downcount -= 1;
    // 7F2DDE30: b       0x7F2DE3B8
    {
            goto label_7F2DE3B8;
    }

label_7F2DDE34:
    ctx->pc = 0x7F2DDE34u;
    ctx->downcount -= 2;
    // 7F2DDE34: cmpwi   r0, 4
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

label_7F2DDE38:
    ctx->pc = 0x7F2DDE38u;
    // 7F2DDE38: bc    4, 0, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DDE3C:
    ctx->pc = 0x7F2DDE3Cu;
    ctx->downcount -= 1;
    // 7F2DDE3C: b       0x7F2DE3A4
    {
            goto label_7F2DE3A4;
    }

label_7F2DDE40:
    ctx->pc = 0x7F2DDE40u;
    ctx->downcount -= 3;
    // 7F2DDE40: lwz     r3, 712(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(712);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDE44:
    ctx->pc = 0x7F2DDE44u;
    // 7F2DDE44: cmplwi  r3, 0x0000
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

label_7F2DDE48:
    ctx->pc = 0x7F2DDE48u;
    // 7F2DDE48: bc    12, 2, 0x7F2DDE58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDE58;
        }
    }

label_7F2DDE4C:
    ctx->pc = 0x7F2DDE4Cu;
    ctx->downcount -= 1;
    // 7F2DDE4C: bl      0x80051AA0
    {
            ctx->lr = 0x7F2DDE50u;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F2DDE50:
    ctx->pc = 0x7F2DDE50u;
    ctx->downcount -= 2;
    // 7F2DDE50: cmpwi   r3, 0
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

label_7F2DDE54:
    ctx->pc = 0x7F2DDE54u;
    // 7F2DDE54: bc    12, 2, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DDE58:
    ctx->pc = 0x7F2DDE58u;
    ctx->downcount -= 6;
    // 7F2DDE58: lwz     r5, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DDE5C:
    ctx->pc = 0x7F2DDE5Cu;
    // 7F2DDE5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DDE60:
    ctx->pc = 0x7F2DDE60u;
    // 7F2DDE60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DDE64:
    ctx->pc = 0x7F2DDE64u;
    // 7F2DDE64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DDE68:
    ctx->pc = 0x7F2DDE68u;
    // 7F2DDE68: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDE6C:
    ctx->pc = 0x7F2DDE6Cu;
    // 7F2DDE6C: bl      0x7F2DCFD4
    {
            ctx->lr = 0x7F2DDE70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DCFD4u;
                return;
            }
            goto label_7F2DCFD4;
    }

label_7F2DDE70:
    ctx->pc = 0x7F2DDE70u;
    ctx->downcount -= 2;
    // 7F2DDE70: or.   r31, r3, r3
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

label_7F2DDE74:
    ctx->pc = 0x7F2DDE74u;
    // 7F2DDE74: bc    12, 2, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DDE78:
    ctx->pc = 0x7F2DDE78u;
    ctx->downcount -= 4;
    // 7F2DDE78: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDE7C:
    ctx->pc = 0x7F2DDE7Cu;
    // 7F2DDE7C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDE80:
    ctx->pc = 0x7F2DDE80u;
    // 7F2DDE80: cmpwi   r0, 0
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

label_7F2DDE84:
    ctx->pc = 0x7F2DDE84u;
    // 7F2DDE84: bc    4, 2, 0x7F2DE0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE0CC;
        }
    }

label_7F2DDE88:
    ctx->pc = 0x7F2DDE88u;
    ctx->downcount -= 3;
    // 7F2DDE88: lwz     r3, 712(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(712);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDE8C:
    ctx->pc = 0x7F2DDE8Cu;
    // 7F2DDE8C: cmplwi  r3, 0x0000
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

label_7F2DDE90:
    ctx->pc = 0x7F2DDE90u;
    // 7F2DDE90: bc    12, 2, 0x7F2DDEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDEA4;
        }
    }

label_7F2DDE94:
    ctx->pc = 0x7F2DDE94u;
    ctx->downcount -= 1;
    // 7F2DDE94: bl      0x80051A5C
    {
            ctx->lr = 0x7F2DDE98u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F2DDE98:
    ctx->pc = 0x7F2DDE98u;
    ctx->downcount -= 3;
    // 7F2DDE98: addi    r3, r30, 716
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(716);

label_7F2DDE9C:
    ctx->pc = 0x7F2DDE9Cu;
    // 7F2DDE9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DDEA0:
    ctx->pc = 0x7F2DDEA0u;
    // 7F2DDEA0: bl      0x7F39AD54
    {
            ctx->lr = 0x7F2DDEA4u;
            ctx->pc = 0x7F39AD54u;
            return;
    }

label_7F2DDEA4:
    ctx->pc = 0x7F2DDEA4u;
    ctx->downcount -= 40;
    // 7F2DDEA4: lwz     r0, -8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEA8:
    ctx->pc = 0x7F2DDEA8u;
    // 7F2DDEA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DDEAC:
    ctx->pc = 0x7F2DDEACu;
    // 7F2DDEAC: addi    r5, r3, -4828
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DDEB0:
    ctx->pc = 0x7F2DDEB0u;
    // 7F2DDEB0: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEB4:
    ctx->pc = 0x7F2DDEB4u;
    // 7F2DDEB4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEB8:
    ctx->pc = 0x7F2DDEB8u;
    // 7F2DDEB8: stw     r0, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEBC:
    ctx->pc = 0x7F2DDEBCu;
    // 7F2DDEBC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEC0:
    ctx->pc = 0x7F2DDEC0u;
    // 7F2DDEC0: stw     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEC4:
    ctx->pc = 0x7F2DDEC4u;
    // 7F2DDEC4: lwz     r0, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEC8:
    ctx->pc = 0x7F2DDEC8u;
    // 7F2DDEC8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDECC:
    ctx->pc = 0x7F2DDECCu;
    // 7F2DDECC: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDED0:
    ctx->pc = 0x7F2DDED0u;
    // 7F2DDED0: lwz     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDED4:
    ctx->pc = 0x7F2DDED4u;
    // 7F2DDED4: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDED8:
    ctx->pc = 0x7F2DDED8u;
    // 7F2DDED8: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEDC:
    ctx->pc = 0x7F2DDEDCu;
    // 7F2DDEDC: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEE0:
    ctx->pc = 0x7F2DDEE0u;
    // 7F2DDEE0: stw     r0, 108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEE4:
    ctx->pc = 0x7F2DDEE4u;
    // 7F2DDEE4: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEE8:
    ctx->pc = 0x7F2DDEE8u;
    // 7F2DDEE8: stw     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEEC:
    ctx->pc = 0x7F2DDEECu;
    // 7F2DDEEC: lwz     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEF0:
    ctx->pc = 0x7F2DDEF0u;
    // 7F2DDEF0: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEF4:
    ctx->pc = 0x7F2DDEF4u;
    // 7F2DDEF4: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDEF8:
    ctx->pc = 0x7F2DDEF8u;
    // 7F2DDEF8: stw     r0, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDEFC:
    ctx->pc = 0x7F2DDEFCu;
    // 7F2DDEFC: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDF00:
    ctx->pc = 0x7F2DDF00u;
    // 7F2DDF00: stw     r0, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDF04:
    ctx->pc = 0x7F2DDF04u;
    // 7F2DDF04: lwz     r4, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDF08:
    ctx->pc = 0x7F2DDF08u;
    // 7F2DDF08: lwz     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDF0C:
    ctx->pc = 0x7F2DDF0Cu;
    // 7F2DDF0C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDF10:
    ctx->pc = 0x7F2DDF10u;
    // 7F2DDF10: mullw   r4, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_7F2DDF14:
    ctx->pc = 0x7F2DDF14u;
    // 7F2DDF14: lwz     r0, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DDF18:
    ctx->pc = 0x7F2DDF18u;
    // 7F2DDF18: cmplwi  r0, 0x0000
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

label_7F2DDF1C:
    ctx->pc = 0x7F2DDF1Cu;
    // 7F2DDF1C: mulli   r0, r4, 3
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)3);

label_7F2DDF20:
    ctx->pc = 0x7F2DDF20u;
    // 7F2DDF20: srawi r0, r0, 1
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

label_7F2DDF24:
    ctx->pc = 0x7F2DDF24u;
    // 7F2DDF24: addze  r26, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[26] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2DDF28:
    ctx->pc = 0x7F2DDF28u;
    // 7F2DDF28: bc    4, 2, 0x7F2DDF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDF68;
        }
    }

label_7F2DDF2C:
    ctx->pc = 0x7F2DDF2Cu;
    ctx->downcount -= 2;
    // 7F2DDF2C: rlwinm r3, r26, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[26], 1u) & 0xFFFFFFFEu;
    }

label_7F2DDF30:
    ctx->pc = 0x7F2DDF30u;
    // 7F2DDF30: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2DDF34u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2DDF34:
    ctx->pc = 0x7F2DDF34u;
    ctx->downcount -= 13;
    // 7F2DDF34: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DDF38:
    ctx->pc = 0x7F2DDF38u;
    // 7F2DDF38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DDF3C:
    ctx->pc = 0x7F2DDF3Cu;
    // 7F2DDF3C: addi    r5, r4, -4828
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4828);

label_7F2DDF40:
    ctx->pc = 0x7F2DDF40u;
    // 7F2DDF40: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDF44:
    ctx->pc = 0x7F2DDF44u;
    // 7F2DDF44: stw     r3, 344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDF48:
    ctx->pc = 0x7F2DDF48u;
    // 7F2DDF48: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDF4C:
    ctx->pc = 0x7F2DDF4Cu;
    // 7F2DDF4C: lwz     r3, 344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDF50:
    ctx->pc = 0x7F2DDF50u;
    // 7F2DDF50: add   r3, r3, r26
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DDF54:
    ctx->pc = 0x7F2DDF54u;
    // 7F2DDF54: stw     r3, 348(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDF58:
    ctx->pc = 0x7F2DDF58u;
    // 7F2DDF58: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDF5C:
    ctx->pc = 0x7F2DDF5Cu;
    // 7F2DDF5C: stb     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2DDF60:
    ctx->pc = 0x7F2DDF60u;
    // 7F2DDF60: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDF64:
    ctx->pc = 0x7F2DDF64u;
    // 7F2DDF64: stb     r0, 353(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(353);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2DDF68:
    ctx->pc = 0x7F2DDF68u;
    ctx->downcount -= 18;
    // 7F2DDF68: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F2DDF6C:
    ctx->pc = 0x7F2DDF6Cu;
    // 7F2DDF6C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DDF70:
    ctx->pc = 0x7F2DDF70u;
    // 7F2DDF70: addi    r5, r3, -12088
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-12088);

label_7F2DDF74:
    ctx->pc = 0x7F2DDF74u;
    // 7F2DDF74: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2DDF78:
    ctx->pc = 0x7F2DDF78u;
    // 7F2DDF78: addi    r4, r4, -4828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4828);

label_7F2DDF7C:
    ctx->pc = 0x7F2DDF7Cu;
    // 7F2DDF7C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DDF80:
    ctx->pc = 0x7F2DDF80u;
    // 7F2DDF80: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDF84:
    ctx->pc = 0x7F2DDF84u;
    // 7F2DDF84: addi    r0, r3, 11264
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11264);

label_7F2DDF88:
    ctx->pc = 0x7F2DDF88u;
    // 7F2DDF88: stw     r5, 356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DDF8C:
    ctx->pc = 0x7F2DDF8Cu;
    // 7F2DDF8C: lwz     r4, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DDF90:
    ctx->pc = 0x7F2DDF90u;
    // 7F2DDF90: lwz     r3, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DDF94:
    ctx->pc = 0x7F2DDF94u;
    // 7F2DDF94: mullw   r4, r4, r3
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[4] = (u32)product;
    }

label_7F2DDF98:
    ctx->pc = 0x7F2DDF98u;
    // 7F2DDF98: cmpw    r4, r0
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

label_7F2DDF9C:
    ctx->pc = 0x7F2DDF9Cu;
    // 7F2DDF9C: bc    12, 1, 0x7F2DDFB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDFB8;
        }
    }

label_7F2DDFA0:
    ctx->pc = 0x7F2DDFA0u;
    ctx->downcount -= 6;
    // 7F2DDFA0: lis     r3, 14
    ctx->gpr[3] = ((u32)(s32)(14) << 16);

label_7F2DDFA4:
    ctx->pc = 0x7F2DDFA4u;
    // 7F2DDFA4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F2DDFA8:
    ctx->pc = 0x7F2DDFA8u;
    // 7F2DDFA8: addi    r3, r3, -6048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6048);

label_7F2DDFAC:
    ctx->pc = 0x7F2DDFACu;
    // 7F2DDFAC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDFB0:
    ctx->pc = 0x7F2DDFB0u;
    // 7F2DDFB0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDFB4:
    ctx->pc = 0x7F2DDFB4u;
    // 7F2DDFB4: b       0x7F2DE028
    {
            goto label_7F2DE028;
    }

label_7F2DDFB8:
    ctx->pc = 0x7F2DDFB8u;
    ctx->downcount -= 3;
    // 7F2DDFB8: lis     r0, 3
    ctx->gpr[0] = ((u32)(s32)(3) << 16);

label_7F2DDFBC:
    ctx->pc = 0x7F2DDFBCu;
    // 7F2DDFBC: cmpw    r4, r0
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

label_7F2DDFC0:
    ctx->pc = 0x7F2DDFC0u;
    // 7F2DDFC0: bc    12, 1, 0x7F2DDFDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DDFDC;
        }
    }

label_7F2DDFC4:
    ctx->pc = 0x7F2DDFC4u;
    ctx->downcount -= 6;
    // 7F2DDFC4: lis     r3, 30
    ctx->gpr[3] = ((u32)(s32)(30) << 16);

label_7F2DDFC8:
    ctx->pc = 0x7F2DDFC8u;
    // 7F2DDFC8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F2DDFCC:
    ctx->pc = 0x7F2DDFCCu;
    // 7F2DDFCC: addi    r3, r3, 28384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28384);

label_7F2DDFD0:
    ctx->pc = 0x7F2DDFD0u;
    // 7F2DDFD0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDFD4:
    ctx->pc = 0x7F2DDFD4u;
    // 7F2DDFD4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DDFD8:
    ctx->pc = 0x7F2DDFD8u;
    // 7F2DDFD8: b       0x7F2DE028
    {
            goto label_7F2DE028;
    }

label_7F2DDFDC:
    ctx->pc = 0x7F2DDFDCu;
    ctx->downcount -= 4;
    // 7F2DDFDC: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F2DDFE0:
    ctx->pc = 0x7F2DDFE0u;
    // 7F2DDFE0: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F2DDFE4:
    ctx->pc = 0x7F2DDFE4u;
    // 7F2DDFE4: cmpw    r4, r0
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

label_7F2DDFE8:
    ctx->pc = 0x7F2DDFE8u;
    // 7F2DDFE8: bc    12, 1, 0x7F2DE004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE004;
        }
    }

label_7F2DDFEC:
    ctx->pc = 0x7F2DDFECu;
    ctx->downcount -= 6;
    // 7F2DDFEC: lis     r3, 35
    ctx->gpr[3] = ((u32)(s32)(35) << 16);

label_7F2DDFF0:
    ctx->pc = 0x7F2DDFF0u;
    // 7F2DDFF0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F2DDFF4:
    ctx->pc = 0x7F2DDFF4u;
    // 7F2DDFF4: addi    r3, r3, -7008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7008);

label_7F2DDFF8:
    ctx->pc = 0x7F2DDFF8u;
    // 7F2DDFF8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DDFFC:
    ctx->pc = 0x7F2DDFFCu;
    // 7F2DDFFC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE000:
    ctx->pc = 0x7F2DE000u;
    // 7F2DE000: b       0x7F2DE028
    {
            goto label_7F2DE028;
    }

label_7F2DE004:
    ctx->pc = 0x7F2DE004u;
    ctx->downcount -= 4;
    // 7F2DE004: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F2DE008:
    ctx->pc = 0x7F2DE008u;
    // 7F2DE008: addi    r0, r3, -20480
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20480);

label_7F2DE00C:
    ctx->pc = 0x7F2DE00Cu;
    // 7F2DE00C: cmpw    r4, r0
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

label_7F2DE010:
    ctx->pc = 0x7F2DE010u;
    // 7F2DE010: bc    12, 1, 0x7F2DE028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE028;
        }
    }

label_7F2DE014:
    ctx->pc = 0x7F2DE014u;
    ctx->downcount -= 5;
    // 7F2DE014: lis     r3, 46
    ctx->gpr[3] = ((u32)(s32)(46) << 16);

label_7F2DE018:
    ctx->pc = 0x7F2DE018u;
    // 7F2DE018: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F2DE01C:
    ctx->pc = 0x7F2DE01Cu;
    // 7F2DE01C: addi    r3, r3, -31840
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31840);

label_7F2DE020:
    ctx->pc = 0x7F2DE020u;
    // 7F2DE020: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE024:
    ctx->pc = 0x7F2DE024u;
    // 7F2DE024: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE028:
    ctx->pc = 0x7F2DE028u;
    ctx->downcount -= 2;
    // 7F2DE028: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE02C:
    ctx->pc = 0x7F2DE02Cu;
    // 7F2DE02C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2DE030u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2DE030:
    ctx->pc = 0x7F2DE030u;
    ctx->downcount -= 4;
    // 7F2DE030: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DE034:
    ctx->pc = 0x7F2DE034u;
    // 7F2DE034: stw     r3, -4268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE038:
    ctx->pc = 0x7F2DE038u;
    // 7F2DE038: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE03C:
    ctx->pc = 0x7F2DE03Cu;
    // 7F2DE03C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F2DE040u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F2DE040:
    ctx->pc = 0x7F2DE040u;
    ctx->downcount -= 7;
    // 7F2DE040: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2DE044:
    ctx->pc = 0x7F2DE044u;
    // 7F2DE044: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DE048:
    ctx->pc = 0x7F2DE048u;
    // 7F2DE048: addi    r6, r5, -4268
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4268);

label_7F2DE04C:
    ctx->pc = 0x7F2DE04Cu;
    // 7F2DE04C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2DE050:
    ctx->pc = 0x7F2DE050u;
    // 7F2DE050: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE054:
    ctx->pc = 0x7F2DE054u;
    // 7F2DE054: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2DE058:
    ctx->pc = 0x7F2DE058u;
    // 7F2DE058: bl      0x7F41C348
    {
            ctx->lr = 0x7F2DE05Cu;
            ctx->pc = 0x7F41C348u;
            return;
    }

label_7F2DE05C:
    ctx->pc = 0x7F2DE05Cu;
    ctx->downcount -= 3;
    // 7F2DE05C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2DE060:
    ctx->pc = 0x7F2DE060u;
    // 7F2DE060: addi    r3, r3, 26856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26856);

label_7F2DE064:
    ctx->pc = 0x7F2DE064u;
    // 7F2DE064: bl      0x7F41BEF8
    {
            ctx->lr = 0x7F2DE068u;
            ctx->pc = 0x7F41BEF8u;
            return;
    }

label_7F2DE068:
    ctx->pc = 0x7F2DE068u;
    ctx->downcount -= 2;
    // 7F2DE068: lwz     r3, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE06C:
    ctx->pc = 0x7F2DE06Cu;
    // 7F2DE06C: bl      0x7F41C05C
    {
            ctx->lr = 0x7F2DE070u;
            ctx->pc = 0x7F41C05Cu;
            return;
    }

label_7F2DE070:
    ctx->pc = 0x7F2DE070u;
    ctx->downcount -= 2;
    // 7F2DE070: or.   r26, r3, r3
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

label_7F2DE074:
    ctx->pc = 0x7F2DE074u;
    // 7F2DE074: bc    4, 2, 0x7F2DE094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE094;
        }
    }

label_7F2DE078:
    ctx->pc = 0x7F2DE078u;
    ctx->downcount -= 7;
    // 7F2DE078: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2DE07C:
    ctx->pc = 0x7F2DE07Cu;
    // 7F2DE07C: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2DE080:
    ctx->pc = 0x7F2DE080u;
    // 7F2DE080: addi    r3, r3, 25876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25876);

label_7F2DE084:
    ctx->pc = 0x7F2DE084u;
    // 7F2DE084: li      r4, 905
    ctx->gpr[4] = (u32)(s32)(905);

label_7F2DE088:
    ctx->pc = 0x7F2DE088u;
    // 7F2DE088: addi    r5, r5, 25888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25888);

label_7F2DE08C:
    ctx->pc = 0x7F2DE08Cu;
    // 7F2DE08C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DE090:
    ctx->pc = 0x7F2DE090u;
    // 7F2DE090: bl      0x8001E978
    {
            ctx->lr = 0x7F2DE094u;
            ctx->pc = 0x8001E978u;
            return;
    }

label_7F2DE094:
    ctx->pc = 0x7F2DE094u;
    ctx->downcount -= 3;
    // 7F2DE094: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2DE098:
    ctx->pc = 0x7F2DE098u;
    // 7F2DE098: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F2DE09C:
    ctx->pc = 0x7F2DE09Cu;
    // 7F2DE09C: bl      0x7F41BF28
    {
            ctx->lr = 0x7F2DE0A0u;
            ctx->pc = 0x7F41BF28u;
            return;
    }

label_7F2DE0A0:
    ctx->pc = 0x7F2DE0A0u;
    ctx->downcount -= 2;
    // 7F2DE0A0: cmpwi   r3, 0
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

label_7F2DE0A4:
    ctx->pc = 0x7F2DE0A4u;
    // 7F2DE0A4: bc    4, 0, 0x7F2DE0C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE0C4;
        }
    }

label_7F2DE0A8:
    ctx->pc = 0x7F2DE0A8u;
    ctx->downcount -= 7;
    // 7F2DE0A8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2DE0AC:
    ctx->pc = 0x7F2DE0ACu;
    // 7F2DE0AC: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2DE0B0:
    ctx->pc = 0x7F2DE0B0u;
    // 7F2DE0B0: addi    r3, r3, 25876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25876);

label_7F2DE0B4:
    ctx->pc = 0x7F2DE0B4u;
    // 7F2DE0B4: li      r4, 910
    ctx->gpr[4] = (u32)(s32)(910);

label_7F2DE0B8:
    ctx->pc = 0x7F2DE0B8u;
    // 7F2DE0B8: addi    r5, r5, 25888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25888);

label_7F2DE0BC:
    ctx->pc = 0x7F2DE0BCu;
    // 7F2DE0BC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DE0C0:
    ctx->pc = 0x7F2DE0C0u;
    // 7F2DE0C0: bl      0x8001E978
    {
            ctx->lr = 0x7F2DE0C4u;
            ctx->pc = 0x8001E978u;
            return;
    }

label_7F2DE0C4:
    ctx->pc = 0x7F2DE0C4u;
    ctx->downcount -= 2;
    // 7F2DE0C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DE0C8:
    ctx->pc = 0x7F2DE0C8u;
    // 7F2DE0C8: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE0CC:
    ctx->pc = 0x7F2DE0CCu;
    ctx->downcount -= 3;
    // 7F2DE0CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE0D0:
    ctx->pc = 0x7F2DE0D0u;
    // 7F2DE0D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DE0D4:
    ctx->pc = 0x7F2DE0D4u;
    // 7F2DE0D4: bl      0x7F2DD09C
    {
            ctx->lr = 0x7F2DE0D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD09Cu;
                return;
            }
            goto label_7F2DD09C;
    }

label_7F2DE0D8:
    ctx->pc = 0x7F2DE0D8u;
    ctx->downcount -= 2;
    // 7F2DE0D8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DE0DC:
    ctx->pc = 0x7F2DE0DCu;
    // 7F2DE0DC: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE0E0:
    ctx->pc = 0x7F2DE0E0u;
    ctx->downcount -= 5;
    // 7F2DE0E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE0E4:
    ctx->pc = 0x7F2DE0E4u;
    // 7F2DE0E4: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DE0E8:
    ctx->pc = 0x7F2DE0E8u;
    // 7F2DE0E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE0EC:
    ctx->pc = 0x7F2DE0ECu;
    // 7F2DE0EC: lwz     r26, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F2DE0F0:
    ctx->pc = 0x7F2DE0F0u;
    // 7F2DE0F0: bl      0x7F2DDD20
    {
            ctx->lr = 0x7F2DE0F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDD20u;
                return;
            }
            goto label_7F2DDD20;
    }

label_7F2DE0F4:
    ctx->pc = 0x7F2DE0F4u;
    ctx->downcount -= 2;
    // 7F2DE0F4: cmpwi   r26, 0
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

label_7F2DE0F8:
    ctx->pc = 0x7F2DE0F8u;
    // 7F2DE0F8: bc    4, 2, 0x7F2DE114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE114;
        }
    }

label_7F2DE0FC:
    ctx->pc = 0x7F2DE0FCu;
    ctx->downcount -= 6;
    // 7F2DE0FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE100:
    ctx->pc = 0x7F2DE100u;
    // 7F2DE100: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DE104:
    ctx->pc = 0x7F2DE104u;
    // 7F2DE104: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE108:
    ctx->pc = 0x7F2DE108u;
    // 7F2DE108: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE10C:
    ctx->pc = 0x7F2DE10Cu;
    // 7F2DE10C: cmpwi   r0, 0
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

label_7F2DE110:
    ctx->pc = 0x7F2DE110u;
    // 7F2DE110: bc    12, 2, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DE114:
    ctx->pc = 0x7F2DE114u;
    ctx->downcount -= 3;
    // 7F2DE114: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DE118:
    ctx->pc = 0x7F2DE118u;
    // 7F2DE118: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE11C:
    ctx->pc = 0x7F2DE11Cu;
    // 7F2DE11C: bl      0x7F018438
    {
            ctx->lr = 0x7F2DE120u;
            ctx->pc = 0x7F018438u;
            return;
    }

label_7F2DE120:
    ctx->pc = 0x7F2DE120u;
    ctx->downcount -= 2;
    // 7F2DE120: cmpwi   r3, 0
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

label_7F2DE124:
    ctx->pc = 0x7F2DE124u;
    // 7F2DE124: bc    12, 2, 0x7F2DE164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE164;
        }
    }

label_7F2DE128:
    ctx->pc = 0x7F2DE128u;
    ctx->downcount -= 1;
    // 7F2DE128: bl      0x800569E4
    {
            ctx->lr = 0x7F2DE12Cu;
            ctx->pc = 0x800569E4u;
            return;
    }

label_7F2DE12C:
    ctx->pc = 0x7F2DE12Cu;
    ctx->downcount -= 2;
    // 7F2DE12C: cmpwi   r3, 0
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

label_7F2DE130:
    ctx->pc = 0x7F2DE130u;
    // 7F2DE130: bc    12, 2, 0x7F2DE164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE164;
        }
    }

label_7F2DE134:
    ctx->pc = 0x7F2DE134u;
    ctx->downcount -= 1;
    // 7F2DE134: bl      0x7F018E6C
    {
            ctx->lr = 0x7F2DE138u;
            ctx->pc = 0x7F018E6Cu;
            return;
    }

label_7F2DE138:
    ctx->pc = 0x7F2DE138u;
    ctx->downcount -= 2;
    // 7F2DE138: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE13C:
    ctx->pc = 0x7F2DE13Cu;
    // 7F2DE13C: bl      0x80051AF0
    {
            ctx->lr = 0x7F2DE140u;
            ctx->pc = 0x80051AF0u;
            return;
    }

label_7F2DE140:
    ctx->pc = 0x7F2DE140u;
    ctx->downcount -= 48;
    // 7F2DE140: mulli   r3, r3, 300
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)300);

label_7F2DE144:
    ctx->pc = 0x7F2DE144u;
    // 7F2DE144: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F2DE148:
    ctx->pc = 0x7F2DE148u;
    // 7F2DE148: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DE14C:
    ctx->pc = 0x7F2DE14Cu;
    // 7F2DE14C: stw     r0, 728(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE150:
    ctx->pc = 0x7F2DE150u;
    // 7F2DE150: lwz     r0, 728(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(728);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE154:
    ctx->pc = 0x7F2DE154u;
    // 7F2DE154: cmpwi   r0, 0
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

label_7F2DE158:
    ctx->pc = 0x7F2DE158u;
    // 7F2DE158: bc    4, 0, 0x7F2DE164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE164;
        }
    }

label_7F2DE15C:
    ctx->pc = 0x7F2DE15Cu;
    ctx->downcount -= 2;
    // 7F2DE15C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DE160:
    ctx->pc = 0x7F2DE160u;
    // 7F2DE160: stw     r0, 728(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE164:
    ctx->pc = 0x7F2DE164u;
    ctx->downcount -= 10;
    // 7F2DE164: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE168:
    ctx->pc = 0x7F2DE168u;
    // 7F2DE168: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE16C:
    ctx->pc = 0x7F2DE16Cu;
    // 7F2DE16C: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F2DE170:
    ctx->pc = 0x7F2DE170u;
    // 7F2DE170: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE174:
    ctx->pc = 0x7F2DE174u;
    // 7F2DE174: lwz     r3, 704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(704);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE178:
    ctx->pc = 0x7F2DE178u;
    // 7F2DE178: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DE17C:
    ctx->pc = 0x7F2DE17Cu;
    // 7F2DE17C: stw     r0, 704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE180:
    ctx->pc = 0x7F2DE180u;
    // 7F2DE180: lwz     r3, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE184:
    ctx->pc = 0x7F2DE184u;
    // 7F2DE184: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DE188:
    ctx->pc = 0x7F2DE188u;
    // 7F2DE188: stw     r0, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE18C:
    ctx->pc = 0x7F2DE18Cu;
    ctx->downcount -= 3;
    // 7F2DE18C: lwz     r0, 712(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE190:
    ctx->pc = 0x7F2DE190u;
    // 7F2DE190: cmplwi  r0, 0x0000
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

label_7F2DE194:
    ctx->pc = 0x7F2DE194u;
    // 7F2DE194: bc    12, 2, 0x7F2DE1AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE1AC;
        }
    }

label_7F2DE198:
    ctx->pc = 0x7F2DE198u;
    ctx->downcount -= 2;
    // 7F2DE198: addi    r3, r30, 716
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(716);

label_7F2DE19C:
    ctx->pc = 0x7F2DE19Cu;
    // 7F2DE19C: bl      0x7F39ADA8
    {
            ctx->lr = 0x7F2DE1A0u;
            ctx->pc = 0x7F39ADA8u;
            return;
    }

label_7F2DE1A0:
    ctx->pc = 0x7F2DE1A0u;
    ctx->downcount -= 3;
    // 7F2DE1A0: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE1A4:
    ctx->pc = 0x7F2DE1A4u;
    // 7F2DE1A4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE1A8:
    ctx->pc = 0x7F2DE1A8u;
    // 7F2DE1A8: b       0x7F2DE1F8
    {
            goto label_7F2DE1F8;
    }

label_7F2DE1AC:
    ctx->pc = 0x7F2DE1ACu;
    ctx->downcount -= 1;
    // 7F2DE1AC: bl      0x7F018438
    {
            ctx->lr = 0x7F2DE1B0u;
            ctx->pc = 0x7F018438u;
            return;
    }

label_7F2DE1B0:
    ctx->pc = 0x7F2DE1B0u;
    ctx->downcount -= 2;
    // 7F2DE1B0: cmpwi   r3, 0
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

label_7F2DE1B4:
    ctx->pc = 0x7F2DE1B4u;
    // 7F2DE1B4: bc    12, 2, 0x7F2DE1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE1F8;
        }
    }

label_7F2DE1B8:
    ctx->pc = 0x7F2DE1B8u;
    ctx->downcount -= 1;
    // 7F2DE1B8: bl      0x800569E4
    {
            ctx->lr = 0x7F2DE1BCu;
            ctx->pc = 0x800569E4u;
            return;
    }

label_7F2DE1BC:
    ctx->pc = 0x7F2DE1BCu;
    ctx->downcount -= 2;
    // 7F2DE1BC: cmpwi   r3, 0
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

label_7F2DE1C0:
    ctx->pc = 0x7F2DE1C0u;
    // 7F2DE1C0: bc    12, 2, 0x7F2DE1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE1F8;
        }
    }

label_7F2DE1C4:
    ctx->pc = 0x7F2DE1C4u;
    ctx->downcount -= 1;
    // 7F2DE1C4: bl      0x7F018E6C
    {
            ctx->lr = 0x7F2DE1C8u;
            ctx->pc = 0x7F018E6Cu;
            return;
    }

label_7F2DE1C8:
    ctx->pc = 0x7F2DE1C8u;
    ctx->downcount -= 2;
    // 7F2DE1C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE1CC:
    ctx->pc = 0x7F2DE1CCu;
    // 7F2DE1CC: bl      0x80051AF0
    {
            ctx->lr = 0x7F2DE1D0u;
            ctx->pc = 0x80051AF0u;
            return;
    }

label_7F2DE1D0:
    ctx->pc = 0x7F2DE1D0u;
    ctx->downcount -= 51;
    // 7F2DE1D0: mulli   r5, r3, 300
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)300);

label_7F2DE1D4:
    ctx->pc = 0x7F2DE1D4u;
    // 7F2DE1D4: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F2DE1D8:
    ctx->pc = 0x7F2DE1D8u;
    // 7F2DE1D8: lwz     r0, 728(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(728);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE1DC:
    ctx->pc = 0x7F2DE1DCu;
    // 7F2DE1DC: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE1E0:
    ctx->pc = 0x7F2DE1E0u;
    // 7F2DE1E0: divw   r4, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DE1E4:
    ctx->pc = 0x7F2DE1E4u;
    // 7F2DE1E4: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2DE1E8:
    ctx->pc = 0x7F2DE1E8u;
    // 7F2DE1E8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE1EC:
    ctx->pc = 0x7F2DE1ECu;
    // 7F2DE1EC: lwz     r0, 728(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(728);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE1F0:
    ctx->pc = 0x7F2DE1F0u;
    // 7F2DE1F0: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2DE1F4:
    ctx->pc = 0x7F2DE1F4u;
    // 7F2DE1F4: stw     r0, 732(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE1F8:
    ctx->pc = 0x7F2DE1F8u;
    ctx->downcount -= 6;
    // 7F2DE1F8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DE1FC:
    ctx->pc = 0x7F2DE1FCu;
    // 7F2DE1FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE200:
    ctx->pc = 0x7F2DE200u;
    // 7F2DE200: addi    r4, r4, -4828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4828);

label_7F2DE204:
    ctx->pc = 0x7F2DE204u;
    // 7F2DE204: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE208:
    ctx->pc = 0x7F2DE208u;
    // 7F2DE208: lwz     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE20C:
    ctx->pc = 0x7F2DE20Cu;
    // 7F2DE20C: bl      0x7F2DCFD4
    {
            ctx->lr = 0x7F2DE210u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DCFD4u;
                return;
            }
            goto label_7F2DCFD4;
    }

label_7F2DE210:
    ctx->pc = 0x7F2DE210u;
    ctx->downcount -= 2;
    // 7F2DE210: or.   r26, r3, r3
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

label_7F2DE214:
    ctx->pc = 0x7F2DE214u;
    // 7F2DE214: bc    12, 2, 0x7F2DE344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE344;
        }
    }

label_7F2DE218:
    ctx->pc = 0x7F2DE218u;
    ctx->downcount -= 6;
    // 7F2DE218: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2DE21C:
    ctx->pc = 0x7F2DE21Cu;
    // 7F2DE21C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2DE220:
    ctx->pc = 0x7F2DE220u;
    // 7F2DE220: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2DE224:
    ctx->pc = 0x7F2DE224u;
    // 7F2DE224: addi    r29, r4, 25876
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(25876);

label_7F2DE228:
    ctx->pc = 0x7F2DE228u;
    // 7F2DE228: addi    r31, r3, 25888
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(25888);

label_7F2DE22C:
    ctx->pc = 0x7F2DE22Cu;
    // 7F2DE22C: addi    r27, r5, -4828
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(-4828);

label_7F2DE230:
    ctx->pc = 0x7F2DE230u;
    ctx->downcount -= 17;
    // 7F2DE230: lwz     r3, 704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(704);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE234:
    ctx->pc = 0x7F2DE234u;
    // 7F2DE234: lwz     r23, -4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-4);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2DE238:
    ctx->pc = 0x7F2DE238u;
    // 7F2DE238: lwz     r24, -8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2DE23C:
    // 7F2DE23C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DE240:
    // 7F2DE240: cmpwi   r23, 0
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

label_7F2DE244:
    ctx->pc = 0x7F2DE244u;
    // 7F2DE244: stw     r0, 704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE248:
    ctx->pc = 0x7F2DE248u;
    // 7F2DE248: lwz     r3, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE24C:
    // 7F2DE24C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DE250:
    ctx->pc = 0x7F2DE250u;
    // 7F2DE250: stw     r0, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE254:
    ctx->pc = 0x7F2DE254u;
    // 7F2DE254: lwz     r0, -8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE258:
    ctx->pc = 0x7F2DE258u;
    // 7F2DE258: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE25C:
    ctx->pc = 0x7F2DE25Cu;
    // 7F2DE25C: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE260:
    ctx->pc = 0x7F2DE260u;
    // 7F2DE260: lwz     r0, 356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE264:
    // 7F2DE264: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2DE268:
    // 7F2DE268: addi    r0, r3, 344
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(344);

label_7F2DE26C:
    ctx->pc = 0x7F2DE26Cu;
    // 7F2DE26C: lwzx    r25, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F2DE270:
    // 7F2DE270: bc    4, 2, 0x7F2DE2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE2CC;
        }
    }

label_7F2DE274:
    ctx->downcount -= 3;
    // 7F2DE274: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE278:
    // 7F2DE278: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2DE27C:
    // 7F2DE27C: bl      0x7F2DD09C
    {
            ctx->lr = 0x7F2DE280u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD09Cu;
                return;
            }
            goto label_7F2DD09C;
    }

label_7F2DE280:
    ctx->downcount -= 1;
    // 7F2DE280: b       0x7F2DE2CC
    {
            goto label_7F2DE2CC;
    }

label_7F2DE284:
    ctx->downcount -= 6;
    // 7F2DE284: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2DE288:
    // 7F2DE288: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2DE28C:
    // 7F2DE28C: or   r7, r23, r23
    {
        ctx->gpr[7] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2DE290:
    // 7F2DE290: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F2DE294:
    // 7F2DE294: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DE298:
    // 7F2DE298: bl      0x7F41BFC4
    {
            ctx->lr = 0x7F2DE29Cu;
            ctx->pc = 0x7F41BFC4u;
            return;
    }

label_7F2DE29C:
    ctx->downcount -= 2;
    // 7F2DE29C: or.   r28, r3, r3
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

label_7F2DE2A0:
    // 7F2DE2A0: bc    4, 0, 0x7F2DE2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE2B8;
        }
    }

label_7F2DE2A4:
    ctx->downcount -= 5;
    // 7F2DE2A4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DE2A8:
    // 7F2DE2A8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DE2AC:
    // 7F2DE2AC: li      r4, 1006
    ctx->gpr[4] = (u32)(s32)(1006);

label_7F2DE2B0:
    // 7F2DE2B0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DE2B4:
    // 7F2DE2B4: bl      0x8001E978
    {
            ctx->lr = 0x7F2DE2B8u;
            ctx->pc = 0x8001E978u;
            return;
    }

label_7F2DE2B8:
    ctx->downcount -= 3;
    // 7F2DE2B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE2BC:
    // 7F2DE2BC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2DE2C0:
    // 7F2DE2C0: bl      0x7F2DD09C
    {
            ctx->lr = 0x7F2DE2C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD09Cu;
                return;
            }
            goto label_7F2DD09C;
    }

label_7F2DE2C4:
    ctx->downcount -= 2;
    // 7F2DE2C4: add   r26, r26, r28
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F2DE2C8:
    // 7F2DE2C8: subf   r23, r28, r23
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[23];
        u32 res = a + b + 1u;
        ctx->gpr[23] = res;
    }

label_7F2DE2CC:
    ctx->downcount -= 2;
    // 7F2DE2CC: cmpwi   r23, 0
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

label_7F2DE2D0:
    // 7F2DE2D0: bc    12, 1, 0x7F2DE284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE284u;
                return;
            }
            goto label_7F2DE284;
        }
    }

label_7F2DE2D4:
    ctx->pc = 0x7F2DE2D4u;
    ctx->downcount -= 3;
    // 7F2DE2D4: lwz     r0, 732(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE2D8:
    // 7F2DE2D8: cmpw    r0, r24
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DE2DC:
    // 7F2DE2DC: bc    4, 1, 0x7F2DE2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE2F0;
        }
    }

label_7F2DE2E0:
    ctx->downcount -= 3;
    // 7F2DE2E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE2E4:
    // 7F2DE2E4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DE2E8:
    // 7F2DE2E8: bl      0x7F2DCFD4
    {
            ctx->lr = 0x7F2DE2ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DCFD4u;
                return;
            }
            goto label_7F2DCFD4;
    }

label_7F2DE2EC:
    ctx->downcount -= 1;
    // 7F2DE2EC: b       0x7F2DE2F4
    {
            goto label_7F2DE2F4;
    }

label_7F2DE2F0:
    ctx->downcount -= 1;
    // 7F2DE2F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DE2F4:
    ctx->downcount -= 3;
    // 7F2DE2F4: cmplwi  r3, 0x0000
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

label_7F2DE2F8:
    // 7F2DE2F8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DE2FC:
    // 7F2DE2FC: bc    4, 2, 0x7F2DE230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE230u;
                return;
            }
            goto label_7F2DE230;
        }
    }

label_7F2DE300:
    ctx->pc = 0x7F2DE300u;
    ctx->downcount -= 17;
    // 7F2DE300: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE304:
    ctx->pc = 0x7F2DE304u;
    // 7F2DE304: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2DE308:
    ctx->pc = 0x7F2DE308u;
    // 7F2DE308: addi    r5, r3, -4828
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DE30C:
    ctx->pc = 0x7F2DE30Cu;
    // 7F2DE30C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE310:
    ctx->pc = 0x7F2DE310u;
    // 7F2DE310: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE314:
    ctx->pc = 0x7F2DE314u;
    // 7F2DE314: lwz     r0, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE318:
    ctx->pc = 0x7F2DE318u;
    // 7F2DE318: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DE31C:
    ctx->pc = 0x7F2DE31Cu;
    // 7F2DE31C: stb     r6, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F2DE320:
    ctx->pc = 0x7F2DE320u;
    // 7F2DE320: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE324:
    ctx->pc = 0x7F2DE324u;
    // 7F2DE324: lwz     r0, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE328:
    ctx->pc = 0x7F2DE328u;
    // 7F2DE328: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2DE32C:
    ctx->pc = 0x7F2DE32Cu;
    // 7F2DE32C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DE330:
    ctx->pc = 0x7F2DE330u;
    // 7F2DE330: stb     r4, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2DE334:
    ctx->pc = 0x7F2DE334u;
    // 7F2DE334: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE338:
    ctx->pc = 0x7F2DE338u;
    // 7F2DE338: lwz     r0, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE33C:
    ctx->pc = 0x7F2DE33Cu;
    // 7F2DE33C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2DE340:
    ctx->pc = 0x7F2DE340u;
    // 7F2DE340: stw     r0, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE344:
    ctx->pc = 0x7F2DE344u;
    ctx->downcount -= 1;
    // 7F2DE344: bl      0x7F2DDD20
    {
            ctx->lr = 0x7F2DE348u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDD20u;
                return;
            }
            goto label_7F2DDD20;
    }

label_7F2DE348:
    ctx->pc = 0x7F2DE348u;
    ctx->downcount -= 6;
    // 7F2DE348: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE34C:
    ctx->pc = 0x7F2DE34Cu;
    // 7F2DE34C: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DE350:
    ctx->pc = 0x7F2DE350u;
    // 7F2DE350: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE354:
    ctx->pc = 0x7F2DE354u;
    // 7F2DE354: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE358:
    ctx->pc = 0x7F2DE358u;
    // 7F2DE358: cmpwi   r0, 0
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

label_7F2DE35C:
    ctx->pc = 0x7F2DE35Cu;
    // 7F2DE35C: bc    4, 2, 0x7F2DE384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE384;
        }
    }

label_7F2DE360:
    ctx->pc = 0x7F2DE360u;
    ctx->downcount -= 3;
    // 7F2DE360: lbz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DE364:
    ctx->pc = 0x7F2DE364u;
    // 7F2DE364: extsb. r0, r0
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

label_7F2DE368:
    ctx->pc = 0x7F2DE368u;
    // 7F2DE368: bc    4, 2, 0x7F2DE378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE378;
        }
    }

label_7F2DE36C:
    ctx->pc = 0x7F2DE36Cu;
    ctx->downcount -= 3;
    // 7F2DE36C: lbz     r0, 353(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(353);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DE370:
    ctx->pc = 0x7F2DE370u;
    // 7F2DE370: extsb. r0, r0
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

label_7F2DE374:
    ctx->pc = 0x7F2DE374u;
    // 7F2DE374: bc    12, 2, 0x7F2DE384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE384;
        }
    }

label_7F2DE378:
    ctx->pc = 0x7F2DE378u;
    ctx->downcount -= 3;
    // 7F2DE378: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DE37C:
    ctx->pc = 0x7F2DE37Cu;
    // 7F2DE37C: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE380:
    ctx->pc = 0x7F2DE380u;
    // 7F2DE380: b       0x7F2DE38C
    {
            goto label_7F2DE38C;
    }

label_7F2DE384:
    ctx->pc = 0x7F2DE384u;
    ctx->downcount -= 2;
    // 7F2DE384: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DE388:
    ctx->pc = 0x7F2DE388u;
    // 7F2DE388: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE38C:
    ctx->pc = 0x7F2DE38Cu;
    ctx->downcount -= 3;
    // 7F2DE38C: lwz     r0, 708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(708);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE390:
    ctx->pc = 0x7F2DE390u;
    // 7F2DE390: cmpwi   r0, 0
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

label_7F2DE394:
    ctx->pc = 0x7F2DE394u;
    // 7F2DE394: bc    4, 0, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DE398:
    ctx->pc = 0x7F2DE398u;
    ctx->downcount -= 3;
    // 7F2DE398: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2DE39C:
    ctx->pc = 0x7F2DE39Cu;
    // 7F2DE39C: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE3A0:
    ctx->pc = 0x7F2DE3A0u;
    // 7F2DE3A0: b       0x7F2DE3B8
    {
            goto label_7F2DE3B8;
    }

label_7F2DE3A4:
    ctx->pc = 0x7F2DE3A4u;
    ctx->downcount -= 1;
    // 7F2DE3A4: bl      0x7F2DDCC4
    {
            ctx->lr = 0x7F2DE3A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DDCC4u;
                return;
            }
            goto label_7F2DDCC4;
    }

label_7F2DE3A8:
    ctx->pc = 0x7F2DE3A8u;
    ctx->downcount -= 2;
    // 7F2DE3A8: cmpwi   r3, 0
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

label_7F2DE3AC:
    ctx->pc = 0x7F2DE3ACu;
    // 7F2DE3AC: bc    12, 2, 0x7F2DE3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3B8;
        }
    }

label_7F2DE3B0:
    ctx->pc = 0x7F2DE3B0u;
    ctx->downcount -= 2;
    // 7F2DE3B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE3B4:
    ctx->pc = 0x7F2DE3B4u;
    // 7F2DE3B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DE3B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DE3B8:
    ctx->pc = 0x7F2DE3B8u;
    ctx->downcount -= 16;
    // 7F2DE3B8: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DE3BC:
    ctx->pc = 0x7F2DE3BCu;
    // 7F2DE3BC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE3C0:
    ctx->pc = 0x7F2DE3C0u;
    // 7F2DE3C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE3C4:
    ctx->pc = 0x7F2DE3C4u;
    // 7F2DE3C4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2DE3C8:
    ctx->pc = 0x7F2DE3C8u;
    // 7F2DE3C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE3CC:
    ctx->pc = 0x7F2DE3CCu;
    ctx->downcount -= 8;
    // 7F2DE3CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE3D0:
    ctx->pc = 0x7F2DE3D0u;
    // 7F2DE3D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE3D4:
    ctx->pc = 0x7F2DE3D4u;
    // 7F2DE3D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE3D8:
    ctx->pc = 0x7F2DE3D8u;
    // 7F2DE3D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DE3DC:
    ctx->pc = 0x7F2DE3DCu;
    // 7F2DE3DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DE3E0:
    ctx->pc = 0x7F2DE3E0u;
    // 7F2DE3E0: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE3E4:
    ctx->pc = 0x7F2DE3E4u;
    // 7F2DE3E4: cmpwi   r0, 0
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

label_7F2DE3E8:
    ctx->pc = 0x7F2DE3E8u;
    // 7F2DE3E8: bc    12, 2, 0x7F2DE3F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE3F4;
        }
    }

label_7F2DE3EC:
    ctx->pc = 0x7F2DE3ECu;
    ctx->downcount -= 2;
    // 7F2DE3EC: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F2DE3F0:
    ctx->pc = 0x7F2DE3F0u;
    // 7F2DE3F0: bl      0x7F41C008
    {
            ctx->lr = 0x7F2DE3F4u;
            ctx->pc = 0x7F41C008u;
            return;
    }

label_7F2DE3F4:
    ctx->pc = 0x7F2DE3F4u;
    ctx->downcount -= 3;
    // 7F2DE3F4: lwz     r3, 712(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(712);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE3F8:
    ctx->pc = 0x7F2DE3F8u;
    // 7F2DE3F8: cmplwi  r3, 0x0000
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

label_7F2DE3FC:
    ctx->pc = 0x7F2DE3FCu;
    // 7F2DE3FC: bc    12, 2, 0x7F2DE408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE408;
        }
    }

label_7F2DE400:
    ctx->pc = 0x7F2DE400u;
    ctx->downcount -= 2;
    // 7F2DE400: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2DE404:
    ctx->pc = 0x7F2DE404u;
    // 7F2DE404: bl      0x80050B54
    {
            ctx->lr = 0x7F2DE408u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F2DE408:
    ctx->pc = 0x7F2DE408u;
    ctx->downcount -= 5;
    // 7F2DE408: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE40C:
    ctx->pc = 0x7F2DE40Cu;
    // 7F2DE40C: addi    r3, r3, -4268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4268);

label_7F2DE410:
    ctx->pc = 0x7F2DE410u;
    // 7F2DE410: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE414:
    ctx->pc = 0x7F2DE414u;
    // 7F2DE414: cmplwi  r3, 0x0000
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

label_7F2DE418:
    ctx->pc = 0x7F2DE418u;
    // 7F2DE418: bc    12, 2, 0x7F2DE42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE42C;
        }
    }

label_7F2DE41C:
    ctx->pc = 0x7F2DE41Cu;
    ctx->downcount -= 1;
    // 7F2DE41C: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F2DE420u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F2DE420:
    ctx->pc = 0x7F2DE420u;
    ctx->downcount -= 3;
    // 7F2DE420: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE424:
    ctx->pc = 0x7F2DE424u;
    // 7F2DE424: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DE428:
    ctx->pc = 0x7F2DE428u;
    // 7F2DE428: stw     r0, -4268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE42C:
    ctx->pc = 0x7F2DE42Cu;
    ctx->downcount -= 5;
    // 7F2DE42C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE430:
    ctx->pc = 0x7F2DE430u;
    // 7F2DE430: addi    r31, r3, -4268
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-4268);

label_7F2DE434:
    ctx->pc = 0x7F2DE434u;
    // 7F2DE434: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE438:
    ctx->pc = 0x7F2DE438u;
    // 7F2DE438: cmplwi  r3, 0x0000
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

label_7F2DE43C:
    ctx->pc = 0x7F2DE43Cu;
    // 7F2DE43C: bc    12, 2, 0x7F2DE44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE44C;
        }
    }

label_7F2DE440:
    ctx->pc = 0x7F2DE440u;
    ctx->downcount -= 1;
    // 7F2DE440: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F2DE444u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F2DE444:
    ctx->pc = 0x7F2DE444u;
    ctx->downcount -= 2;
    // 7F2DE444: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DE448:
    ctx->pc = 0x7F2DE448u;
    // 7F2DE448: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE44C:
    ctx->pc = 0x7F2DE44Cu;
    ctx->downcount -= 9;
    // 7F2DE44C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE450:
    ctx->pc = 0x7F2DE450u;
    // 7F2DE450: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DE454:
    ctx->pc = 0x7F2DE454u;
    // 7F2DE454: stw     r0, -4824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE458:
    ctx->pc = 0x7F2DE458u;
    // 7F2DE458: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE45C:
    ctx->pc = 0x7F2DE45Cu;
    // 7F2DE45C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DE460:
    ctx->pc = 0x7F2DE460u;
    // 7F2DE460: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE464:
    ctx->pc = 0x7F2DE464u;
    // 7F2DE464: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DE468:
    ctx->pc = 0x7F2DE468u;
    // 7F2DE468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE46C:
    ctx->pc = 0x7F2DE46Cu;
    ctx->downcount -= 18;
    // 7F2DE46C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE470:
    ctx->pc = 0x7F2DE470u;
    // 7F2DE470: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE474:
    ctx->pc = 0x7F2DE474u;
    // 7F2DE474: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE478:
    ctx->pc = 0x7F2DE478u;
    // 7F2DE478: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE47C:
    ctx->pc = 0x7F2DE47Cu;
    // 7F2DE47C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DE480:
    ctx->pc = 0x7F2DE480u;
    // 7F2DE480: lwz     r5, -4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4828);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DE484:
    ctx->pc = 0x7F2DE484u;
    // 7F2DE484: cmplwi  r5, 0x0000
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

label_7F2DE488:
    ctx->pc = 0x7F2DE488u;
    // 7F2DE488: bc    12, 2, 0x7F2DE618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE618;
        }
    }

label_7F2DE48C:
    ctx->pc = 0x7F2DE48Cu;
    ctx->downcount -= 3;
    // 7F2DE48C: lwz     r0, 344(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE490:
    ctx->pc = 0x7F2DE490u;
    // 7F2DE490: cmplwi  r0, 0x0000
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

label_7F2DE494:
    ctx->pc = 0x7F2DE494u;
    // 7F2DE494: bc    12, 2, 0x7F2DE618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE618;
        }
    }

label_7F2DE498:
    ctx->pc = 0x7F2DE498u;
    ctx->downcount -= 6;
    // 7F2DE498: lwz     r0, 356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE49C:
    ctx->pc = 0x7F2DE49Cu;
    // 7F2DE49C: subfic  r4, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2DE4A0:
    ctx->pc = 0x7F2DE4A0u;
    // 7F2DE4A0: add   r3, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DE4A4:
    ctx->pc = 0x7F2DE4A4u;
    // 7F2DE4A4: lbz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DE4A8:
    ctx->pc = 0x7F2DE4A8u;
    // 7F2DE4A8: extsb. r0, r0
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

label_7F2DE4AC:
    ctx->pc = 0x7F2DE4ACu;
    // 7F2DE4AC: bc    12, 2, 0x7F2DE618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE618;
        }
    }

label_7F2DE4B0:
    ctx->pc = 0x7F2DE4B0u;
    ctx->downcount -= 3;
    // 7F2DE4B0: lwz     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE4B4:
    ctx->pc = 0x7F2DE4B4u;
    // 7F2DE4B4: cmpwi   r0, 0
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

label_7F2DE4B8:
    ctx->pc = 0x7F2DE4B8u;
    // 7F2DE4B8: bc    4, 2, 0x7F2DE4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE4C0;
        }
    }

label_7F2DE4BC:
    ctx->pc = 0x7F2DE4BCu;
    ctx->downcount -= 1;
    // 7F2DE4BC: b       0x7F2DE618
    {
            goto label_7F2DE618;
    }

label_7F2DE4C0:
    ctx->pc = 0x7F2DE4C0u;
    ctx->downcount -= 9;
    // 7F2DE4C0: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F2DE4C4:
    ctx->pc = 0x7F2DE4C4u;
    // 7F2DE4C4: lwz     r3, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE4C8:
    ctx->pc = 0x7F2DE4C8u;
    // 7F2DE4C8: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE4CC:
    ctx->pc = 0x7F2DE4CCu;
    // 7F2DE4CC: lwz     r0, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE4D0:
    ctx->pc = 0x7F2DE4D0u;
    // 7F2DE4D0: lwz     r27, 344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(344);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F2DE4D4:
    ctx->pc = 0x7F2DE4D4u;
    // 7F2DE4D4: rlwinm r28, r3, 0, 16, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F2DE4D8:
    ctx->pc = 0x7F2DE4D8u;
    // 7F2DE4D8: rlwinm r30, r0, 0, 16, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F2DE4DC:
    ctx->pc = 0x7F2DE4DCu;
    // 7F2DE4DC: cmplwi  r27, 0x0000
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

label_7F2DE4E0:
    ctx->pc = 0x7F2DE4E0u;
    // 7F2DE4E0: bc    12, 2, 0x7F2DE618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE618;
        }
    }

label_7F2DE4E4:
    ctx->pc = 0x7F2DE4E4u;
    ctx->downcount -= 10;
    // 7F2DE4E4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE4E8:
    ctx->pc = 0x7F2DE4E8u;
    // 7F2DE4E8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2DE4EC:
    ctx->pc = 0x7F2DE4ECu;
    // 7F2DE4EC: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DE4F0:
    ctx->pc = 0x7F2DE4F0u;
    // 7F2DE4F0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DE4F4:
    ctx->pc = 0x7F2DE4F4u;
    // 7F2DE4F4: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE4F8:
    ctx->pc = 0x7F2DE4F8u;
    // 7F2DE4F8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DE4FC:
    ctx->pc = 0x7F2DE4FCu;
    // 7F2DE4FC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE500:
    ctx->pc = 0x7F2DE500u;
    // 7F2DE500: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2DE504:
    ctx->pc = 0x7F2DE504u;
    // 7F2DE504: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DE508:
    ctx->pc = 0x7F2DE508u;
    // 7F2DE508: bl      0x8004439C
    {
            ctx->lr = 0x7F2DE50Cu;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F2DE50C:
    ctx->pc = 0x7F2DE50Cu;
    ctx->downcount -= 20;
    // 7F2DE50C: mullw   r31, r28, r30
    {
        s64 product = (s64)(s32)ctx->gpr[28] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[31] = (u32)product;
    }

label_7F2DE510:
    ctx->pc = 0x7F2DE510u;
    // 7F2DE510: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE514:
    ctx->pc = 0x7F2DE514u;
    // 7F2DE514: srawi r29, r28, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[28];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[29] = value;
        } else if (sh > 31) {
            ctx->gpr[29] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[29] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2DE518:
    ctx->pc = 0x7F2DE518u;
    // 7F2DE518: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DE51C:
    ctx->pc = 0x7F2DE51Cu;
    // 7F2DE51C: rlwinm r30, r30, 31, 17, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[30], 31u) & 0x00007FFFu;
    }

label_7F2DE520:
    ctx->pc = 0x7F2DE520u;
    // 7F2DE520: addi    r28, r3, 32
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(32);

label_7F2DE524:
    ctx->pc = 0x7F2DE524u;
    // 7F2DE524: add   r27, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F2DE528:
    ctx->pc = 0x7F2DE528u;
    // 7F2DE528: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DE52C:
    ctx->pc = 0x7F2DE52Cu;
    // 7F2DE52C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2DE530:
    ctx->pc = 0x7F2DE530u;
    // 7F2DE530: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE534:
    ctx->pc = 0x7F2DE534u;
    // 7F2DE534: rlwinm r5, r29, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F2DE538:
    ctx->pc = 0x7F2DE538u;
    // 7F2DE538: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DE53C:
    ctx->pc = 0x7F2DE53Cu;
    // 7F2DE53C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE540:
    ctx->pc = 0x7F2DE540u;
    // 7F2DE540: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2DE544:
    ctx->pc = 0x7F2DE544u;
    // 7F2DE544: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DE548:
    ctx->pc = 0x7F2DE548u;
    // 7F2DE548: bl      0x8004439C
    {
            ctx->lr = 0x7F2DE54Cu;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F2DE54C:
    ctx->pc = 0x7F2DE54Cu;
    ctx->downcount -= 14;
    // 7F2DE54C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE550:
    ctx->pc = 0x7F2DE550u;
    // 7F2DE550: srawi r0, r31, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[31];
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

label_7F2DE554:
    ctx->pc = 0x7F2DE554u;
    // 7F2DE554: addi    r3, r3, -4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4364);

label_7F2DE558:
    ctx->pc = 0x7F2DE558u;
    // 7F2DE558: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE55C:
    ctx->pc = 0x7F2DE55Cu;
    // 7F2DE55C: add   r27, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F2DE560:
    ctx->pc = 0x7F2DE560u;
    // 7F2DE560: rlwinm r5, r29, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F2DE564:
    ctx->pc = 0x7F2DE564u;
    // 7F2DE564: addi    r29, r3, 64
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(64);

label_7F2DE568:
    ctx->pc = 0x7F2DE568u;
    // 7F2DE568: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2DE56C:
    ctx->pc = 0x7F2DE56Cu;
    // 7F2DE56C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DE570:
    ctx->pc = 0x7F2DE570u;
    // 7F2DE570: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2DE574:
    ctx->pc = 0x7F2DE574u;
    // 7F2DE574: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE578:
    ctx->pc = 0x7F2DE578u;
    // 7F2DE578: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2DE57C:
    ctx->pc = 0x7F2DE57Cu;
    // 7F2DE57C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DE580:
    ctx->pc = 0x7F2DE580u;
    // 7F2DE580: bl      0x8004439C
    {
            ctx->lr = 0x7F2DE584u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F2DE584:
    ctx->pc = 0x7F2DE584u;
    ctx->downcount -= 12;
    // 7F2DE584: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DE588:
    ctx->pc = 0x7F2DE588u;
    // 7F2DE588: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2DE58C:
    ctx->pc = 0x7F2DE58Cu;
    // 7F2DE58C: lfs     f1, 29388(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DE58Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DE590:
    ctx->pc = 0x7F2DE590u;
    // 7F2DE590: addi    r3, r5, -4364
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-4364);

label_7F2DE594:
    ctx->pc = 0x7F2DE594u;
    // 7F2DE594: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE598:
    ctx->pc = 0x7F2DE598u;
    // 7F2DE598: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DE59C:
    ctx->pc = 0x7F2DE59Cu;
    // 7F2DE59C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE59Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2DE5A0:
    ctx->pc = 0x7F2DE5A0u;
    // 7F2DE5A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DE5A4:
    ctx->pc = 0x7F2DE5A4u;
    // 7F2DE5A4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE5A4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F2DE5A8:
    ctx->pc = 0x7F2DE5A8u;
    // 7F2DE5A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DE5AC:
    ctx->pc = 0x7F2DE5ACu;
    // 7F2DE5AC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE5B0:
    ctx->pc = 0x7F2DE5B0u;
    // 7F2DE5B0: bl      0x80044630
    {
            ctx->lr = 0x7F2DE5B4u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F2DE5B4:
    ctx->pc = 0x7F2DE5B4u;
    ctx->downcount -= 12;
    // 7F2DE5B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DE5B8:
    ctx->pc = 0x7F2DE5B8u;
    // 7F2DE5B8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2DE5BC:
    ctx->pc = 0x7F2DE5BCu;
    // 7F2DE5BC: addi    r5, r4, 29388
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29388);

label_7F2DE5C0:
    ctx->pc = 0x7F2DE5C0u;
    // 7F2DE5C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE5C4:
    ctx->pc = 0x7F2DE5C4u;
    // 7F2DE5C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DE5C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DE5C8:
    ctx->pc = 0x7F2DE5C8u;
    // 7F2DE5C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DE5CC:
    ctx->pc = 0x7F2DE5CCu;
    // 7F2DE5CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DE5D0:
    ctx->pc = 0x7F2DE5D0u;
    // 7F2DE5D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DE5D4:
    ctx->pc = 0x7F2DE5D4u;
    // 7F2DE5D4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE5D4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2DE5D8:
    ctx->pc = 0x7F2DE5D8u;
    // 7F2DE5D8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE5DC:
    ctx->pc = 0x7F2DE5DCu;
    // 7F2DE5DC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE5DCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F2DE5E0:
    ctx->pc = 0x7F2DE5E0u;
    // 7F2DE5E0: bl      0x80044630
    {
            ctx->lr = 0x7F2DE5E4u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F2DE5E4:
    ctx->pc = 0x7F2DE5E4u;
    ctx->downcount -= 12;
    // 7F2DE5E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DE5E8:
    ctx->pc = 0x7F2DE5E8u;
    // 7F2DE5E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DE5EC:
    ctx->pc = 0x7F2DE5ECu;
    // 7F2DE5EC: addi    r5, r4, 29388
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29388);

label_7F2DE5F0:
    ctx->pc = 0x7F2DE5F0u;
    // 7F2DE5F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DE5F4:
    ctx->pc = 0x7F2DE5F4u;
    // 7F2DE5F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DE5F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DE5F8:
    ctx->pc = 0x7F2DE5F8u;
    // 7F2DE5F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DE5FC:
    ctx->pc = 0x7F2DE5FCu;
    // 7F2DE5FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DE600:
    ctx->pc = 0x7F2DE600u;
    // 7F2DE600: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DE604:
    ctx->pc = 0x7F2DE604u;
    // 7F2DE604: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE604u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2DE608:
    ctx->pc = 0x7F2DE608u;
    // 7F2DE608: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE60C:
    ctx->pc = 0x7F2DE60Cu;
    // 7F2DE60C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DE60Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F2DE610:
    ctx->pc = 0x7F2DE610u;
    // 7F2DE610: bl      0x80044630
    {
            ctx->lr = 0x7F2DE614u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F2DE614:
    ctx->pc = 0x7F2DE614u;
    ctx->downcount -= 1;
    // 7F2DE614: bl      0x7F2DD9E4
    {
            ctx->lr = 0x7F2DE618u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DD9E4u;
                return;
            }
            goto label_7F2DD9E4;
    }

label_7F2DE618:
    ctx->pc = 0x7F2DE618u;
    ctx->downcount -= 16;
    // 7F2DE618: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DE61C:
    ctx->pc = 0x7F2DE61Cu;
    // 7F2DE61C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE620:
    ctx->pc = 0x7F2DE620u;
    // 7F2DE620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE624:
    ctx->pc = 0x7F2DE624u;
    // 7F2DE624: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DE628:
    ctx->pc = 0x7F2DE628u;
    // 7F2DE628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE62C:
    ctx->pc = 0x7F2DE62Cu;
    ctx->downcount -= 29;
    // 7F2DE62C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE630:
    ctx->pc = 0x7F2DE630u;
    // 7F2DE630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE634:
    ctx->pc = 0x7F2DE634u;
    // 7F2DE634: lis     r7, 32572
    ctx->gpr[7] = ((u32)(s32)(32572) << 16);

label_7F2DE638:
    ctx->pc = 0x7F2DE638u;
    // 7F2DE638: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE63C:
    ctx->pc = 0x7F2DE63Cu;
    // 7F2DE63C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE640:
    ctx->pc = 0x7F2DE640u;
    // 7F2DE640: addi    r7, r7, 32548
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(32548);

label_7F2DE644:
    ctx->pc = 0x7F2DE644u;
    // 7F2DE644: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2DE648:
    ctx->pc = 0x7F2DE648u;
    // 7F2DE648: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DE64C:
    ctx->pc = 0x7F2DE64Cu;
    // 7F2DE64C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DE650:
    ctx->pc = 0x7F2DE650u;
    // 7F2DE650: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE654:
    ctx->pc = 0x7F2DE654u;
    // 7F2DE654: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE658:
    ctx->pc = 0x7F2DE658u;
    // 7F2DE658: addi    r3, r3, -4820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4820);

label_7F2DE65C:
    ctx->pc = 0x7F2DE65Cu;
    // 7F2DE65C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F2DE660:
    ctx->pc = 0x7F2DE660u;
    // 7F2DE660: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE664:
    ctx->pc = 0x7F2DE664u;
    // 7F2DE664: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DE668:
    ctx->pc = 0x7F2DE668u;
    // 7F2DE668: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE66C:
    ctx->pc = 0x7F2DE66Cu;
    // 7F2DE66C: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE670:
    ctx->pc = 0x7F2DE670u;
    // 7F2DE670: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE674:
    ctx->pc = 0x7F2DE674u;
    // 7F2DE674: stw     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DE678:
    ctx->pc = 0x7F2DE678u;
    // 7F2DE678: stw     r31, -4824(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4824);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DE67C:
    ctx->pc = 0x7F2DE67Cu;
    // 7F2DE67C: stw     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DE680:
    ctx->pc = 0x7F2DE680u;
    // 7F2DE680: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DE684:
    ctx->pc = 0x7F2DE684u;
    // 7F2DE684: stw     r8, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE688:
    ctx->pc = 0x7F2DE688u;
    // 7F2DE688: stw     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE68C:
    ctx->pc = 0x7F2DE68Cu;
    // 7F2DE68C: stw     r8, 704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE690:
    ctx->pc = 0x7F2DE690u;
    // 7F2DE690: stw     r0, 708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE694:
    ctx->pc = 0x7F2DE694u;
    // 7F2DE694: lha     r3, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DE698:
    ctx->pc = 0x7F2DE698u;
    // 7F2DE698: cmpwi   r3, -1
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

label_7F2DE69C:
    ctx->pc = 0x7F2DE69Cu;
    // 7F2DE69C: bc    12, 2, 0x7F2DE6D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE6D4;
        }
    }

label_7F2DE6A0:
    ctx->pc = 0x7F2DE6A0u;
    ctx->downcount -= 12;
    // 7F2DE6A0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DE6A4:
    ctx->pc = 0x7F2DE6A4u;
    // 7F2DE6A4: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F2DE6A8:
    ctx->pc = 0x7F2DE6A8u;
    // 7F2DE6A8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE6AC:
    ctx->pc = 0x7F2DE6ACu;
    // 7F2DE6AC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F2DE6B0:
    ctx->pc = 0x7F2DE6B0u;
    // 7F2DE6B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DE6B4:
    ctx->pc = 0x7F2DE6B4u;
    // 7F2DE6B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DE6B8:
    ctx->pc = 0x7F2DE6B8u;
    // 7F2DE6B8: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE6BC:
    ctx->pc = 0x7F2DE6BCu;
    // 7F2DE6BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DE6C0:
    ctx->pc = 0x7F2DE6C0u;
    // 7F2DE6C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE6C4:
    ctx->pc = 0x7F2DE6C4u;
    // 7F2DE6C4: li      r9, 23
    ctx->gpr[9] = (u32)(s32)(23);

label_7F2DE6C8:
    ctx->pc = 0x7F2DE6C8u;
    // 7F2DE6C8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DE6CC:
    ctx->pc = 0x7F2DE6CCu;
    // 7F2DE6CC: bl      0x800501FC
    {
            ctx->lr = 0x7F2DE6D0u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F2DE6D0:
    ctx->pc = 0x7F2DE6D0u;
    ctx->downcount -= 1;
    // 7F2DE6D0: stw     r3, 712(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(712);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE6D4:
    ctx->pc = 0x7F2DE6D4u;
    ctx->downcount -= 6;
    // 7F2DE6D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE6D8:
    ctx->pc = 0x7F2DE6D8u;
    // 7F2DE6D8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DE6DC:
    ctx->pc = 0x7F2DE6DCu;
    // 7F2DE6DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE6E0:
    ctx->pc = 0x7F2DE6E0u;
    // 7F2DE6E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DE6E4:
    ctx->pc = 0x7F2DE6E4u;
    // 7F2DE6E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE6E8:
    ctx->pc = 0x7F2DE6E8u;
    ctx->downcount -= 22;
    // 7F2DE6E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE6EC:
    ctx->pc = 0x7F2DE6ECu;
    // 7F2DE6EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE6F0:
    ctx->pc = 0x7F2DE6F0u;
    // 7F2DE6F0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F2DE6F4:
    ctx->pc = 0x7F2DE6F4u;
    // 7F2DE6F4: li      r6, 242
    ctx->gpr[6] = (u32)(s32)(242);

label_7F2DE6F8:
    ctx->pc = 0x7F2DE6F8u;
    // 7F2DE6F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE6FC:
    ctx->pc = 0x7F2DE6FCu;
    // 7F2DE6FC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DE700:
    ctx->pc = 0x7F2DE700u;
    // 7F2DE700: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DE704:
    ctx->pc = 0x7F2DE704u;
    // 7F2DE704: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DE708:
    ctx->pc = 0x7F2DE708u;
    // 7F2DE708: addi    r4, r5, -32768
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-32768);

label_7F2DE70C:
    ctx->pc = 0x7F2DE70Cu;
    // 7F2DE70C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DE710:
    ctx->pc = 0x7F2DE710u;
    // 7F2DE710: li      r5, 736
    ctx->gpr[5] = (u32)(s32)(736);

label_7F2DE714:
    ctx->pc = 0x7F2DE714u;
    // 7F2DE714: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2DE718u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2DE718:
    ctx->pc = 0x7F2DE718u;
    ctx->downcount -= 2;
    // 7F2DE718: or.   r31, r3, r3
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

label_7F2DE71C:
    ctx->pc = 0x7F2DE71Cu;
    // 7F2DE71C: bc    12, 2, 0x7F2DE74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE74C;
        }
    }

label_7F2DE720:
    ctx->pc = 0x7F2DE720u;
    ctx->downcount -= 5;
    // 7F2DE720: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DE724:
    ctx->pc = 0x7F2DE724u;
    // 7F2DE724: lis     r5, 32558
    ctx->gpr[5] = ((u32)(s32)(32558) << 16);

label_7F2DE728:
    ctx->pc = 0x7F2DE728u;
    // 7F2DE728: addi    r4, r4, -8704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8704);

label_7F2DE72C:
    ctx->pc = 0x7F2DE72Cu;
    // 7F2DE72C: addi    r5, r5, -7220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7220);

label_7F2DE730:
    ctx->pc = 0x7F2DE730u;
    // 7F2DE730: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2DE734u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2DE734:
    ctx->pc = 0x7F2DE734u;
    ctx->downcount -= 4;
    // 7F2DE734: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DE738:
    ctx->pc = 0x7F2DE738u;
    // 7F2DE738: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DE73C:
    ctx->pc = 0x7F2DE73Cu;
    // 7F2DE73C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DE740:
    ctx->pc = 0x7F2DE740u;
    // 7F2DE740: bl      0x7F2DE62C
    {
            ctx->lr = 0x7F2DE744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE62Cu;
                return;
            }
            goto label_7F2DE62C;
    }

label_7F2DE744:
    ctx->pc = 0x7F2DE744u;
    ctx->downcount -= 2;
    // 7F2DE744: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DE748:
    ctx->pc = 0x7F2DE748u;
    // 7F2DE748: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE74C:
    ctx->pc = 0x7F2DE74Cu;
    ctx->downcount -= 17;
    // 7F2DE74C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DE750:
    ctx->pc = 0x7F2DE750u;
    // 7F2DE750: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DE754:
    ctx->pc = 0x7F2DE754u;
    // 7F2DE754: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE758:
    ctx->pc = 0x7F2DE758u;
    // 7F2DE758: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE75C:
    ctx->pc = 0x7F2DE75Cu;
    // 7F2DE75C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DE760:
    ctx->pc = 0x7F2DE760u;
    // 7F2DE760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE764:
    ctx->pc = 0x7F2DE764u;
    ctx->downcount -= 5;
    // 7F2DE764: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE768:
    ctx->pc = 0x7F2DE768u;
    // 7F2DE768: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2DE76C:
    ctx->pc = 0x7F2DE76Cu;
    // 7F2DE76C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE770:
    ctx->pc = 0x7F2DE770u;
    // 7F2DE770: cmplwi  r3, 0x0000
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

label_7F2DE774:
    ctx->pc = 0x7F2DE774u;
    // 7F2DE774: bc    4, 2, 0x7F2DE780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE780;
        }
    }

label_7F2DE778:
    ctx->pc = 0x7F2DE778u;
    ctx->downcount -= 2;
    // 7F2DE778: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DE77C:
    ctx->pc = 0x7F2DE77Cu;
    // 7F2DE77C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE780:
    ctx->pc = 0x7F2DE780u;
    ctx->downcount -= 3;
    // 7F2DE780: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE784:
    ctx->pc = 0x7F2DE784u;
    // 7F2DE784: rlwinm r3, r0, 31, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x00000001u;
    }

label_7F2DE788:
    ctx->pc = 0x7F2DE788u;
    // 7F2DE788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE78C:
    ctx->pc = 0x7F2DE78Cu;
    ctx->downcount -= 5;
    // 7F2DE78C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE790:
    ctx->pc = 0x7F2DE790u;
    // 7F2DE790: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2DE794:
    ctx->pc = 0x7F2DE794u;
    // 7F2DE794: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE798:
    ctx->pc = 0x7F2DE798u;
    // 7F2DE798: cmplwi  r3, 0x0000
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

label_7F2DE79C:
    ctx->pc = 0x7F2DE79Cu;
    // 7F2DE79C: bc    4, 2, 0x7F2DE7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE7A8;
        }
    }

label_7F2DE7A0:
    ctx->pc = 0x7F2DE7A0u;
    ctx->downcount -= 2;
    // 7F2DE7A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DE7A4:
    ctx->pc = 0x7F2DE7A4u;
    // 7F2DE7A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE7A8:
    ctx->pc = 0x7F2DE7A8u;
    ctx->downcount -= 6;
    // 7F2DE7A8: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE7AC:
    ctx->pc = 0x7F2DE7ACu;
    // 7F2DE7AC: subfic  r3, r0, 2
    {
        u64 res = (u64)(u32)(s32)(2) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2DE7B0:
    ctx->pc = 0x7F2DE7B0u;
    // 7F2DE7B0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2DE7B4:
    ctx->pc = 0x7F2DE7B4u;
    // 7F2DE7B4: subfe   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2DE7B8:
    ctx->pc = 0x7F2DE7B8u;
    // 7F2DE7B8: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F2DE7BC:
    ctx->pc = 0x7F2DE7BCu;
    // 7F2DE7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE7C0:
    ctx->pc = 0x7F2DE7C0u;
    ctx->downcount -= 10;
    // 7F2DE7C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE7C4:
    ctx->pc = 0x7F2DE7C4u;
    // 7F2DE7C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE7C8:
    ctx->pc = 0x7F2DE7C8u;
    // 7F2DE7C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE7CC:
    ctx->pc = 0x7F2DE7CCu;
    // 7F2DE7CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE7D0:
    ctx->pc = 0x7F2DE7D0u;
    // 7F2DE7D0: addi    r4, r3, -4832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4832);

label_7F2DE7D4:
    ctx->pc = 0x7F2DE7D4u;
    // 7F2DE7D4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE7D8:
    ctx->pc = 0x7F2DE7D8u;
    // 7F2DE7D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DE7DC:
    ctx->pc = 0x7F2DE7DCu;
    // 7F2DE7DC: cmpwi   r3, 0
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

label_7F2DE7E0:
    ctx->pc = 0x7F2DE7E0u;
    // 7F2DE7E0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE7E4:
    ctx->pc = 0x7F2DE7E4u;
    // 7F2DE7E4: bc    4, 2, 0x7F2DE7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE7F8;
        }
    }

label_7F2DE7E8:
    ctx->pc = 0x7F2DE7E8u;
    ctx->downcount -= 4;
    // 7F2DE7E8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2DE7EC:
    ctx->pc = 0x7F2DE7ECu;
    // 7F2DE7EC: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_7F2DE7F0:
    ctx->pc = 0x7F2DE7F0u;
    // 7F2DE7F0: addi    r3, r3, 25864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25864);

label_7F2DE7F4:
    ctx->pc = 0x7F2DE7F4u;
    // 7F2DE7F4: bl      0x7F018020
    {
            ctx->lr = 0x7F2DE7F8u;
            ctx->pc = 0x7F018020u;
            return;
    }

label_7F2DE7F8:
    ctx->pc = 0x7F2DE7F8u;
    ctx->downcount -= 5;
    // 7F2DE7F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE7FC:
    ctx->pc = 0x7F2DE7FCu;
    // 7F2DE7FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE800:
    ctx->pc = 0x7F2DE800u;
    // 7F2DE800: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DE804:
    ctx->pc = 0x7F2DE804u;
    // 7F2DE804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE808:
    ctx->pc = 0x7F2DE808u;
    ctx->downcount -= 8;
    // 7F2DE808: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE80C:
    ctx->pc = 0x7F2DE80Cu;
    // 7F2DE80C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE810:
    ctx->pc = 0x7F2DE810u;
    // 7F2DE810: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DE814:
    ctx->pc = 0x7F2DE814u;
    // 7F2DE814: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE818:
    ctx->pc = 0x7F2DE818u;
    // 7F2DE818: addi    r4, r3, -4832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4832);

label_7F2DE81C:
    ctx->pc = 0x7F2DE81Cu;
    // 7F2DE81C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE820:
    ctx->pc = 0x7F2DE820u;
    // 7F2DE820: cmpwi   r3, 0
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

label_7F2DE824:
    ctx->pc = 0x7F2DE824u;
    // 7F2DE824: bc    4, 1, 0x7F2DE840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE840;
        }
    }

label_7F2DE828:
    ctx->pc = 0x7F2DE828u;
    ctx->downcount -= 3;
    // 7F2DE828: addic.  r0, r3, -1
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

label_7F2DE82C:
    ctx->pc = 0x7F2DE82Cu;
    // 7F2DE82C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE830:
    ctx->pc = 0x7F2DE830u;
    // 7F2DE830: bc    4, 2, 0x7F2DE840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE840;
        }
    }

label_7F2DE834:
    ctx->pc = 0x7F2DE834u;
    ctx->downcount -= 3;
    // 7F2DE834: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2DE838:
    ctx->pc = 0x7F2DE838u;
    // 7F2DE838: addi    r3, r3, 25864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25864);

label_7F2DE83C:
    ctx->pc = 0x7F2DE83Cu;
    // 7F2DE83C: bl      0x7F018058
    {
            ctx->lr = 0x7F2DE840u;
            ctx->pc = 0x7F018058u;
            return;
    }

label_7F2DE840:
    ctx->pc = 0x7F2DE840u;
    ctx->downcount -= 5;
    // 7F2DE840: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE844:
    ctx->pc = 0x7F2DE844u;
    // 7F2DE844: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE848:
    ctx->pc = 0x7F2DE848u;
    // 7F2DE848: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DE84C:
    ctx->pc = 0x7F2DE84Cu;
    // 7F2DE84C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE850:
    ctx->pc = 0x7F2DE850u;
    ctx->downcount -= 19;
    // 7F2DE850: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE854:
    ctx->pc = 0x7F2DE854u;
    // 7F2DE854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DE858:
    ctx->pc = 0x7F2DE858u;
    // 7F2DE858: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE85C:
    ctx->pc = 0x7F2DE85Cu;
    // 7F2DE85C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DE860:
    ctx->pc = 0x7F2DE860u;
    // 7F2DE860: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DE864:
    ctx->pc = 0x7F2DE864u;
    // 7F2DE864: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2DE868:
    ctx->pc = 0x7F2DE868u;
    // 7F2DE868: lwz     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE86C:
    ctx->pc = 0x7F2DE86Cu;
    // 7F2DE86C: cmpwi   r0, 0
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

label_7F2DE870:
    ctx->pc = 0x7F2DE870u;
    // 7F2DE870: bc    12, 2, 0x7F2DE884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE884;
        }
    }

label_7F2DE874:
    ctx->pc = 0x7F2DE874u;
    ctx->downcount -= 4;
    // 7F2DE874: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DE878:
    ctx->pc = 0x7F2DE878u;
    // 7F2DE878: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F2DE87C:
    ctx->pc = 0x7F2DE87Cu;
    // 7F2DE87C: stw     r0, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE880:
    ctx->pc = 0x7F2DE880u;
    // 7F2DE880: b       0x7F2DE934
    {
            goto label_7F2DE934;
    }

label_7F2DE884:
    ctx->pc = 0x7F2DE884u;
    ctx->downcount -= 3;
    // 7F2DE884: lwz     r0, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE888:
    ctx->pc = 0x7F2DE888u;
    // 7F2DE888: cmpwi   r0, 0
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

label_7F2DE88C:
    ctx->pc = 0x7F2DE88Cu;
    // 7F2DE88C: bc    12, 2, 0x7F2DE898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE898;
        }
    }

label_7F2DE890:
    ctx->pc = 0x7F2DE890u;
    ctx->downcount -= 2;
    // 7F2DE890: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2DE894:
    ctx->pc = 0x7F2DE894u;
    // 7F2DE894: b       0x7F2DE934
    {
            goto label_7F2DE934;
    }

label_7F2DE898:
    ctx->pc = 0x7F2DE898u;
    ctx->downcount -= 3;
    // 7F2DE898: lbz     r0, 312(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2DE89C:
    ctx->pc = 0x7F2DE89Cu;
    // 7F2DE89C: cmplwi  r0, 0x0000
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

label_7F2DE8A0:
    ctx->pc = 0x7F2DE8A0u;
    // 7F2DE8A0: bc    12, 2, 0x7F2DE918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE918;
        }
    }

label_7F2DE8A4:
    ctx->pc = 0x7F2DE8A4u;
    ctx->downcount -= 9;
    // 7F2DE8A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2DE8A8:
    ctx->pc = 0x7F2DE8A8u;
    // 7F2DE8A8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F2DE8AC:
    ctx->pc = 0x7F2DE8ACu;
    // 7F2DE8AC: addi    r5, r3, 14256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F2DE8B0:
    ctx->pc = 0x7F2DE8B0u;
    // 7F2DE8B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DE8B4:
    ctx->pc = 0x7F2DE8B4u;
    // 7F2DE8B4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2DE8B8:
    ctx->pc = 0x7F2DE8B8u;
    // 7F2DE8B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DE8BC:
    ctx->pc = 0x7F2DE8BCu;
    // 7F2DE8BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DE8C0:
    ctx->pc = 0x7F2DE8C0u;
    // 7F2DE8C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2DE8C4:
    loop_7F2DE8C4(ctx);
    if (ctx->pc == 0x7F2DE8F0u) goto label_7F2DE8F0;
    return;
label_7F2DE8C8:
    // 7F2DE8C8: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_7F2DE8CC:
    ctx->pc = 0x7F2DE8CCu;
    // 7F2DE8CC: lwz     r4, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DE8D0:
    ctx->pc = 0x7F2DE8D0u;
    // 7F2DE8D0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE8D4:
    // 7F2DE8D4: rlwinm r4, r4, 18, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x00000001u;
    }

label_7F2DE8D8:
    // 7F2DE8D8: xori    r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] ^ 0x0001u;

label_7F2DE8DC:
    // 7F2DE8DC: or   r9, r9, r0
    {
        ctx->gpr[9] = ctx->gpr[9] | ctx->gpr[0];
    }

label_7F2DE8E0:
    // 7F2DE8E0: slw   r0, r4, r7
    {
        u32 sh = ctx->gpr[7] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

label_7F2DE8E4:
    // 7F2DE8E4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F2DE8E8:
    // 7F2DE8E8: or   r8, r8, r0
    {
        ctx->gpr[8] = ctx->gpr[8] | ctx->gpr[0];
    }

label_7F2DE8EC:
    // 7F2DE8EC: bc    16, 0, 0x7F2DE8C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE8C4u;
                return;
            }
            goto label_7F2DE8C4;
        }
    }

label_7F2DE8F0:
    ctx->pc = 0x7F2DE8F0u;
    ctx->downcount -= 4;
    // 7F2DE8F0: lwz     r0, 316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE8F4:
    ctx->pc = 0x7F2DE8F4u;
    // 7F2DE8F4: xor   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] ^ ctx->gpr[0];
    }

label_7F2DE8F8:
    ctx->pc = 0x7F2DE8F8u;
    // 7F2DE8F8: and.   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DE8FC:
    ctx->pc = 0x7F2DE8FCu;
    // 7F2DE8FC: bc    4, 2, 0x7F2DE90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE90C;
        }
    }

label_7F2DE900:
    ctx->pc = 0x7F2DE900u;
    ctx->downcount -= 3;
    // 7F2DE900: lwz     r0, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE904:
    ctx->pc = 0x7F2DE904u;
    // 7F2DE904: and.   r0, r9, r0
    {
        ctx->gpr[0] = ctx->gpr[9] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DE908:
    ctx->pc = 0x7F2DE908u;
    // 7F2DE908: bc    12, 2, 0x7F2DE910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE910;
        }
    }

label_7F2DE90C:
    ctx->pc = 0x7F2DE90Cu;
    ctx->downcount -= 1;
    // 7F2DE90C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F2DE910:
    ctx->pc = 0x7F2DE910u;
    ctx->downcount -= 2;
    // 7F2DE910: stw     r8, 316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DE914:
    ctx->pc = 0x7F2DE914u;
    // 7F2DE914: b       0x7F2DE934
    {
            goto label_7F2DE934;
    }

label_7F2DE918:
    ctx->pc = 0x7F2DE918u;
    ctx->downcount -= 6;
    // 7F2DE918: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2DE91C:
    ctx->pc = 0x7F2DE91Cu;
    // 7F2DE91C: lwz     r0, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE920:
    ctx->pc = 0x7F2DE920u;
    // 7F2DE920: addi    r3, r3, 14256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F2DE924:
    ctx->pc = 0x7F2DE924u;
    // 7F2DE924: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE928:
    ctx->pc = 0x7F2DE928u;
    // 7F2DE928: and.   r0, r3, r0
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

label_7F2DE92C:
    ctx->pc = 0x7F2DE92Cu;
    // 7F2DE92C: bc    12, 2, 0x7F2DE934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE934;
        }
    }

label_7F2DE930:
    ctx->pc = 0x7F2DE930u;
    ctx->downcount -= 1;
    // 7F2DE930: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F2DE934:
    ctx->pc = 0x7F2DE934u;
    ctx->downcount -= 2;
    // 7F2DE934: rlwinm. r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DE938:
    ctx->pc = 0x7F2DE938u;
    // 7F2DE938: bc    12, 2, 0x7F2DE94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DE94C;
        }
    }

label_7F2DE93C:
    ctx->pc = 0x7F2DE93Cu;
    ctx->downcount -= 2;
    // 7F2DE93C: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE940:
    ctx->pc = 0x7F2DE940u;
    // 7F2DE940: bl      0x7F017E90
    {
            ctx->lr = 0x7F2DE944u;
            ctx->pc = 0x7F017E90u;
            return;
    }

label_7F2DE944:
    ctx->pc = 0x7F2DE944u;
    ctx->downcount -= 2;
    // 7F2DE944: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DE948:
    ctx->pc = 0x7F2DE948u;
    // 7F2DE948: stw     r0, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DE94C:
    ctx->pc = 0x7F2DE94Cu;
    ctx->downcount -= 17;
    // 7F2DE94C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DE950:
    ctx->pc = 0x7F2DE950u;
    // 7F2DE950: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DE954:
    ctx->pc = 0x7F2DE954u;
    // 7F2DE954: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE958:
    ctx->pc = 0x7F2DE958u;
    // 7F2DE958: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DE95C:
    ctx->pc = 0x7F2DE95Cu;
    // 7F2DE95C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DE960:
    ctx->pc = 0x7F2DE960u;
    // 7F2DE960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DE964:
    ctx->pc = 0x7F2DE964u;
    ctx->downcount -= 67;
    // 7F2DE964: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DE968:
    ctx->pc = 0x7F2DE968u;
    // 7F2DE968: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2DE96C:
    ctx->pc = 0x7F2DE96Cu;
    // 7F2DE96C: addi    r11, r11, -4820
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-4820);

label_7F2DE970:
    ctx->pc = 0x7F2DE970u;
    // 7F2DE970: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DE974:
    ctx->pc = 0x7F2DE974u;
    // 7F2DE974: lwz     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2DE978:
    ctx->pc = 0x7F2DE978u;
    // 7F2DE978: lbz     r31, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_7F2DE97C:
    ctx->pc = 0x7F2DE97Cu;
    // 7F2DE97C: stw     r3, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DE980:
    ctx->pc = 0x7F2DE980u;
    // 7F2DE980: extsb r31, r31
    {
        ctx->gpr[31] = (u32)(s32)(s8)ctx->gpr[31];
    }

label_7F2DE984:
    ctx->pc = 0x7F2DE984u;
    // 7F2DE984: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DE988:
    ctx->pc = 0x7F2DE988u;
    // 7F2DE988: mulli   r31, r31, 20
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)20);

label_7F2DE98C:
    ctx->pc = 0x7F2DE98Cu;
    // 7F2DE98C: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DE990:
    ctx->pc = 0x7F2DE990u;
    // 7F2DE990: add   r31, r11, r31
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F2DE994:
    ctx->pc = 0x7F2DE994u;
    // 7F2DE994: sth     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2DE998:
    ctx->pc = 0x7F2DE998u;
    // 7F2DE998: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DE99C:
    ctx->pc = 0x7F2DE99Cu;
    // 7F2DE99C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2DE9A0:
    ctx->pc = 0x7F2DE9A0u;
    // 7F2DE9A0: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F2DE9A4:
    ctx->pc = 0x7F2DE9A4u;
    // 7F2DE9A4: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE9A8:
    ctx->pc = 0x7F2DE9A8u;
    // 7F2DE9A8: sth     r5, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2DE9AC:
    ctx->pc = 0x7F2DE9ACu;
    // 7F2DE9AC: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DE9B0:
    ctx->pc = 0x7F2DE9B0u;
    // 7F2DE9B0: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2DE9B4:
    ctx->pc = 0x7F2DE9B4u;
    // 7F2DE9B4: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F2DE9B8:
    ctx->pc = 0x7F2DE9B8u;
    // 7F2DE9B8: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE9BC:
    ctx->pc = 0x7F2DE9BCu;
    // 7F2DE9BC: sth     r6, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2DE9C0:
    ctx->pc = 0x7F2DE9C0u;
    // 7F2DE9C0: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DE9C4:
    ctx->pc = 0x7F2DE9C4u;
    // 7F2DE9C4: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2DE9C8:
    ctx->pc = 0x7F2DE9C8u;
    // 7F2DE9C8: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F2DE9CC:
    ctx->pc = 0x7F2DE9CCu;
    // 7F2DE9CC: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE9D0:
    ctx->pc = 0x7F2DE9D0u;
    // 7F2DE9D0: sth     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2DE9D4:
    ctx->pc = 0x7F2DE9D4u;
    // 7F2DE9D4: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DE9D8:
    ctx->pc = 0x7F2DE9D8u;
    // 7F2DE9D8: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2DE9DC:
    ctx->pc = 0x7F2DE9DCu;
    // 7F2DE9DC: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F2DE9E0:
    ctx->pc = 0x7F2DE9E0u;
    // 7F2DE9E0: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE9E4:
    ctx->pc = 0x7F2DE9E4u;
    // 7F2DE9E4: sth     r8, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F2DE9E8:
    ctx->pc = 0x7F2DE9E8u;
    // 7F2DE9E8: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DE9EC:
    ctx->pc = 0x7F2DE9ECu;
    // 7F2DE9EC: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F2DE9F0:
    ctx->pc = 0x7F2DE9F0u;
    // 7F2DE9F0: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F2DE9F4:
    ctx->pc = 0x7F2DE9F4u;
    // 7F2DE9F4: add   r4, r11, r4
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2DE9F8:
    ctx->pc = 0x7F2DE9F8u;
    // 7F2DE9F8: sth     r9, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F2DE9FC:
    ctx->pc = 0x7F2DE9FCu;
    // 7F2DE9FC: lbz     r5, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2DEA00:
    ctx->pc = 0x7F2DEA00u;
    // 7F2DEA00: lwz     r4, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DEA04:
    ctx->pc = 0x7F2DEA04u;
    // 7F2DEA04: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F2DEA08:
    ctx->pc = 0x7F2DEA08u;
    // 7F2DEA08: mulli   r5, r5, 20
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)20);

label_7F2DEA0C:
    ctx->pc = 0x7F2DEA0Cu;
    // 7F2DEA0C: add   r5, r11, r5
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2DEA10:
    ctx->pc = 0x7F2DEA10u;
    // 7F2DEA10: stw     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DEA14:
    ctx->pc = 0x7F2DEA14u;
    // 7F2DEA14: lbz     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F2DEA18:
    ctx->pc = 0x7F2DEA18u;
    // 7F2DEA18: stw     r10, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DEA1C:
    ctx->pc = 0x7F2DEA1Cu;
    // 7F2DEA1C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2DEA20:
    ctx->pc = 0x7F2DEA20u;
    // 7F2DEA20: stb     r4, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2DEA24:
    ctx->pc = 0x7F2DEA24u;
    // 7F2DEA24: stw     r3, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEA28:
    ctx->pc = 0x7F2DEA28u;
    // 7F2DEA28: sth     r0, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DEA2C:
    ctx->pc = 0x7F2DEA2Cu;
    // 7F2DEA2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DEA30:
    ctx->pc = 0x7F2DEA30u;
    // 7F2DEA30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DEA34:
    ctx->pc = 0x7F2DEA34u;
    // 7F2DEA34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DEA38:
    ctx->pc = 0x7F2DEA38u;
    ctx->downcount -= 5;
    // 7F2DEA38: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DEA3C:
    ctx->pc = 0x7F2DEA3Cu;
    // 7F2DEA3C: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2DEA40:
    ctx->pc = 0x7F2DEA40u;
    // 7F2DEA40: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEA44:
    ctx->pc = 0x7F2DEA44u;
    // 7F2DEA44: cmplwi  r3, 0x0000
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

label_7F2DEA48:
    ctx->pc = 0x7F2DEA48u;
    // 7F2DEA48: bc    4, 2, 0x7F2DEA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEA54;
        }
    }

label_7F2DEA4C:
    ctx->pc = 0x7F2DEA4Cu;
    ctx->downcount -= 2;
    // 7F2DEA4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2DEA50:
    ctx->pc = 0x7F2DEA50u;
    // 7F2DEA50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DEA54:
    ctx->pc = 0x7F2DEA54u;
    ctx->downcount -= 2;
    // 7F2DEA54: lwz     r3, 708(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(708);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEA58:
    ctx->pc = 0x7F2DEA58u;
    // 7F2DEA58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DEA5C:
    ctx->pc = 0x7F2DEA5Cu;
    ctx->downcount -= 8;
    // 7F2DEA5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DEA60:
    ctx->pc = 0x7F2DEA60u;
    // 7F2DEA60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DEA64:
    ctx->pc = 0x7F2DEA64u;
    // 7F2DEA64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEA68:
    ctx->pc = 0x7F2DEA68u;
    // 7F2DEA68: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DEA6C:
    ctx->pc = 0x7F2DEA6Cu;
    // 7F2DEA6C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DEA70:
    ctx->pc = 0x7F2DEA70u;
    // 7F2DEA70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DEA74:
    ctx->pc = 0x7F2DEA74u;
    // 7F2DEA74: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEA78:
    ctx->pc = 0x7F2DEA78u;
    // 7F2DEA78: bl      0x7F3C9624
    {
            ctx->lr = 0x7F2DEA7Cu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F2DEA7C:
    ctx->pc = 0x7F2DEA7Cu;
    ctx->downcount -= 4;
    // 7F2DEA7C: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F2DEA80:
    ctx->pc = 0x7F2DEA80u;
    // 7F2DEA80: cmpwi   r3, 0
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

label_7F2DEA84:
    ctx->pc = 0x7F2DEA84u;
    // 7F2DEA84: bc    4, 1, 0x7F2DEAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEAE8;
        }
    }

label_7F2DEA88:
    ctx->pc = 0x7F2DEA88u;
    ctx->downcount -= 4;
    // 7F2DEA88: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DEA8C:
    ctx->pc = 0x7F2DEA8Cu;
    // 7F2DEA8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DEA90:
    ctx->pc = 0x7F2DEA90u;
    // 7F2DEA90: addi    r6, r3, -4824
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2DEA94:
    ctx->pc = 0x7F2DEA94u;
    // 7F2DEA94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DEA98:
    ctx->pc = 0x7F2DEA98u;
    ctx->downcount -= 5;
    // 7F2DEA98: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEA9C:
    ctx->pc = 0x7F2DEA9Cu;
    // 7F2DEA9C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEAA0:
    ctx->pc = 0x7F2DEAA0u;
    // 7F2DEAA0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEAA4:
    // 7F2DEAA4: cmpwi   r0, 1
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

label_7F2DEAA8:
    // 7F2DEAA8: bc    12, 2, 0x7F2DEAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEAD4;
        }
    }

label_7F2DEAAC:
    ctx->downcount -= 1;
    // 7F2DEAAC: bc    4, 0, 0x7F2DEAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEAD8;
        }
    }

label_7F2DEAB0:
    ctx->downcount -= 2;
    // 7F2DEAB0: cmpwi   r0, 0
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

label_7F2DEAB4:
    // 7F2DEAB4: bc    4, 0, 0x7F2DEABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEABC;
        }
    }

label_7F2DEAB8:
    ctx->downcount -= 1;
    // 7F2DEAB8: b       0x7F2DEAD8
    {
            goto label_7F2DEAD8;
    }

label_7F2DEABC:
    ctx->pc = 0x7F2DEABCu;
    ctx->downcount -= 3;
    // 7F2DEABC: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEAC0:
    // 7F2DEAC0: cmplwi  r3, 0x0000
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

label_7F2DEAC4:
    // 7F2DEAC4: bc    12, 2, 0x7F2DEACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEACC;
        }
    }

label_7F2DEAC8:
    ctx->pc = 0x7F2DEAC8u;
    ctx->downcount -= 1;
    // 7F2DEAC8: stw     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DEACC:
    ctx->pc = 0x7F2DEACCu;
    ctx->downcount -= 2;
    // 7F2DEACC: stw     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DEAD0:
    // 7F2DEAD0: b       0x7F2DEAD8
    {
            goto label_7F2DEAD8;
    }

label_7F2DEAD4:
    ctx->pc = 0x7F2DEAD4u;
    ctx->downcount -= 1;
    // 7F2DEAD4: stw     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DEAD8:
    ctx->pc = 0x7F2DEAD8u;
    ctx->downcount -= 4;
    // 7F2DEAD8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEADC:
    // 7F2DEADC: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2DEAE0:
    ctx->pc = 0x7F2DEAE0u;
    // 7F2DEAE0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEAE4:
    // 7F2DEAE4: bc    16, 0, 0x7F2DEA98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DEA98u;
                return;
            }
            goto label_7F2DEA98;
        }
    }

label_7F2DEAE8:
    ctx->pc = 0x7F2DEAE8u;
    ctx->downcount -= 3;
    // 7F2DEAE8: lwz     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEAEC:
    ctx->pc = 0x7F2DEAECu;
    // 7F2DEAEC: cmpwi   r0, 2
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

label_7F2DEAF0:
    ctx->pc = 0x7F2DEAF0u;
    // 7F2DEAF0: bc    12, 2, 0x7F2DEB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEB60;
        }
    }

label_7F2DEAF4:
    ctx->pc = 0x7F2DEAF4u;
    ctx->downcount -= 1;
    // 7F2DEAF4: bc    4, 0, 0x7F2DEB08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEB08;
        }
    }

label_7F2DEAF8:
    ctx->pc = 0x7F2DEAF8u;
    ctx->downcount -= 2;
    // 7F2DEAF8: cmpwi   r0, 0
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

label_7F2DEAFC:
    ctx->pc = 0x7F2DEAFCu;
    // 7F2DEAFC: bc    12, 2, 0x7F2DEB14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEB14;
        }
    }

label_7F2DEB00:
    ctx->pc = 0x7F2DEB00u;
    ctx->downcount -= 1;
    // 7F2DEB00: bc    4, 0, 0x7F2DEBB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEBB8;
        }
    }

label_7F2DEB04:
    ctx->pc = 0x7F2DEB04u;
    ctx->downcount -= 1;
    // 7F2DEB04: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEB08:
    ctx->pc = 0x7F2DEB08u;
    ctx->downcount -= 2;
    // 7F2DEB08: cmpwi   r0, 4
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

label_7F2DEB0C:
    ctx->pc = 0x7F2DEB0Cu;
    // 7F2DEB0C: bc    4, 0, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEB10:
    ctx->pc = 0x7F2DEB10u;
    ctx->downcount -= 1;
    // 7F2DEB10: b       0x7F2DEBC8
    {
            goto label_7F2DEBC8;
    }

label_7F2DEB14:
    ctx->pc = 0x7F2DEB14u;
    ctx->downcount -= 6;
    // 7F2DEB14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEB18:
    ctx->pc = 0x7F2DEB18u;
    // 7F2DEB18: stw     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEB1C:
    ctx->pc = 0x7F2DEB1Cu;
    // 7F2DEB1C: stw     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEB20:
    ctx->pc = 0x7F2DEB20u;
    // 7F2DEB20: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEB24:
    ctx->pc = 0x7F2DEB24u;
    // 7F2DEB24: cmpwi   r3, 0
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

label_7F2DEB28:
    ctx->pc = 0x7F2DEB28u;
    // 7F2DEB28: bc    4, 1, 0x7F2DEB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEB44;
        }
    }

label_7F2DEB2C:
    ctx->pc = 0x7F2DEB2Cu;
    ctx->downcount -= 3;
    // 7F2DEB2C: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEB30:
    ctx->pc = 0x7F2DEB30u;
    // 7F2DEB30: cmpwi   r0, 0
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

label_7F2DEB34:
    ctx->pc = 0x7F2DEB34u;
    // 7F2DEB34: bc    4, 2, 0x7F2DEB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEB44;
        }
    }

label_7F2DEB38:
    ctx->pc = 0x7F2DEB38u;
    ctx->downcount -= 3;
    // 7F2DEB38: rlwinm r0, r3, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_7F2DEB3C:
    ctx->pc = 0x7F2DEB3Cu;
    // 7F2DEB3C: ori     r4, r0, 0x0002
    ctx->gpr[4] = ctx->gpr[0] | 0x0002u;

label_7F2DEB40:
    ctx->pc = 0x7F2DEB40u;
    // 7F2DEB40: b       0x7F2DEB48
    {
            goto label_7F2DEB48;
    }

label_7F2DEB44:
    ctx->pc = 0x7F2DEB44u;
    ctx->downcount -= 1;
    // 7F2DEB44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DEB48:
    ctx->pc = 0x7F2DEB48u;
    ctx->downcount -= 2;
    // 7F2DEB48: lwz     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEB4C:
    ctx->pc = 0x7F2DEB4Cu;
    // 7F2DEB4C: bl      0x7F2DEC44
    {
            ctx->lr = 0x7F2DEB50u;
            goto label_7F2DEC44;
    }

label_7F2DEB50:
    ctx->pc = 0x7F2DEB50u;
    ctx->downcount -= 4;
    // 7F2DEB50: stw     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEB54:
    ctx->pc = 0x7F2DEB54u;
    // 7F2DEB54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DEB58:
    ctx->pc = 0x7F2DEB58u;
    // 7F2DEB58: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEB5C:
    ctx->pc = 0x7F2DEB5Cu;
    // 7F2DEB5C: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEB60:
    ctx->pc = 0x7F2DEB60u;
    ctx->downcount -= 2;
    // 7F2DEB60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DEB64:
    ctx->pc = 0x7F2DEB64u;
    // 7F2DEB64: bl      0x7F2DE850
    {
            ctx->lr = 0x7F2DEB68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE850u;
                return;
            }
            goto label_7F2DE850;
    }

label_7F2DEB68:
    ctx->pc = 0x7F2DEB68u;
    ctx->downcount -= 2;
    // 7F2DEB68: rlwinm. r0, r3, 0, 24, 31
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

label_7F2DEB6C:
    ctx->pc = 0x7F2DEB6Cu;
    // 7F2DEB6C: bc    4, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEB70:
    ctx->pc = 0x7F2DEB70u;
    ctx->downcount -= 1;
    // 7F2DEB70: bl      0x7F2DE764
    {
            ctx->lr = 0x7F2DEB74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE764u;
                return;
            }
            goto label_7F2DE764;
    }

label_7F2DEB74:
    ctx->pc = 0x7F2DEB74u;
    ctx->downcount -= 2;
    // 7F2DEB74: cmpwi   r3, 0
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

label_7F2DEB78:
    ctx->pc = 0x7F2DEB78u;
    // 7F2DEB78: bc    12, 2, 0x7F2DEBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEBA0;
        }
    }

label_7F2DEB7C:
    ctx->pc = 0x7F2DEB7Cu;
    ctx->downcount -= 1;
    // 7F2DEB7C: bl      0x7F2DEA38
    {
            ctx->lr = 0x7F2DEB80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DEA38u;
                return;
            }
            goto label_7F2DEA38;
    }

label_7F2DEB80:
    ctx->pc = 0x7F2DEB80u;
    ctx->downcount -= 2;
    // 7F2DEB80: cmpwi   r3, 0
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

label_7F2DEB84:
    ctx->pc = 0x7F2DEB84u;
    // 7F2DEB84: bc    12, 2, 0x7F2DEBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEBA0;
        }
    }

label_7F2DEB88:
    ctx->pc = 0x7F2DEB88u;
    ctx->downcount -= 3;
    // 7F2DEB88: lwz     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEB8C:
    ctx->pc = 0x7F2DEB8Cu;
    // 7F2DEB8C: cmpwi   r0, 0
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

label_7F2DEB90:
    ctx->pc = 0x7F2DEB90u;
    // 7F2DEB90: bc    4, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEB94:
    ctx->pc = 0x7F2DEB94u;
    ctx->downcount -= 3;
    // 7F2DEB94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DEB98:
    ctx->pc = 0x7F2DEB98u;
    // 7F2DEB98: stw     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEB9C:
    ctx->pc = 0x7F2DEB9Cu;
    // 7F2DEB9C: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEBA0:
    ctx->pc = 0x7F2DEBA0u;
    ctx->downcount -= 1;
    // 7F2DEBA0: bl      0x7F2DE78C
    {
            ctx->lr = 0x7F2DEBA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE78Cu;
                return;
            }
            goto label_7F2DE78C;
    }

label_7F2DEBA4:
    ctx->pc = 0x7F2DEBA4u;
    ctx->downcount -= 2;
    // 7F2DEBA4: rlwinm. r0, r3, 0, 24, 31
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

label_7F2DEBA8:
    ctx->pc = 0x7F2DEBA8u;
    // 7F2DEBA8: bc    12, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEBAC:
    ctx->pc = 0x7F2DEBACu;
    ctx->downcount -= 3;
    // 7F2DEBAC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2DEBB0:
    ctx->pc = 0x7F2DEBB0u;
    // 7F2DEBB0: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEBB4:
    ctx->pc = 0x7F2DEBB4u;
    // 7F2DEBB4: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEBB8:
    ctx->pc = 0x7F2DEBB8u;
    ctx->downcount -= 2;
    // 7F2DEBB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DEBBC:
    ctx->pc = 0x7F2DEBBCu;
    // 7F2DEBBC: bl      0x7F2DE850
    {
            ctx->lr = 0x7F2DEBC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE850u;
                return;
            }
            goto label_7F2DE850;
    }

label_7F2DEBC0:
    ctx->pc = 0x7F2DEBC0u;
    ctx->downcount -= 2;
    // 7F2DEBC0: rlwinm. r0, r3, 0, 24, 31
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

label_7F2DEBC4:
    ctx->pc = 0x7F2DEBC4u;
    // 7F2DEBC4: bc    4, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEBC8:
    ctx->pc = 0x7F2DEBC8u;
    ctx->downcount -= 1;
    // 7F2DEBC8: bl      0x7F2DE78C
    {
            ctx->lr = 0x7F2DEBCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE78Cu;
                return;
            }
            goto label_7F2DE78C;
    }

label_7F2DEBCC:
    ctx->pc = 0x7F2DEBCCu;
    ctx->downcount -= 2;
    // 7F2DEBCC: rlwinm. r0, r3, 0, 24, 31
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

label_7F2DEBD0:
    ctx->pc = 0x7F2DEBD0u;
    // 7F2DEBD0: bc    4, 2, 0x7F2DEBE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEBE0;
        }
    }

label_7F2DEBD4:
    ctx->pc = 0x7F2DEBD4u;
    ctx->downcount -= 3;
    // 7F2DEBD4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DEBD8:
    ctx->pc = 0x7F2DEBD8u;
    // 7F2DEBD8: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEBDC:
    ctx->pc = 0x7F2DEBDCu;
    // 7F2DEBDC: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEBE0:
    ctx->pc = 0x7F2DEBE0u;
    ctx->downcount -= 3;
    // 7F2DEBE0: lwz     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEBE4:
    ctx->pc = 0x7F2DEBE4u;
    // 7F2DEBE4: cmpwi   r0, 1
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

label_7F2DEBE8:
    ctx->pc = 0x7F2DEBE8u;
    // 7F2DEBE8: bc    12, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEBEC:
    ctx->pc = 0x7F2DEBECu;
    ctx->downcount -= 2;
    // 7F2DEBEC: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEBF0:
    ctx->pc = 0x7F2DEBF0u;
    // 7F2DEBF0: bl      0x7F017E28
    {
            ctx->lr = 0x7F2DEBF4u;
            ctx->pc = 0x7F017E28u;
            return;
    }

label_7F2DEBF4:
    ctx->pc = 0x7F2DEBF4u;
    ctx->downcount -= 2;
    // 7F2DEBF4: cmpwi   r3, 3
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

label_7F2DEBF8:
    ctx->pc = 0x7F2DEBF8u;
    // 7F2DEBF8: bc    4, 2, 0x7F2DEC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC30;
        }
    }

label_7F2DEBFC:
    ctx->pc = 0x7F2DEBFCu;
    ctx->downcount -= 3;
    // 7F2DEBFC: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEC00:
    ctx->pc = 0x7F2DEC00u;
    // 7F2DEC00: cmpwi   r0, 0
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

label_7F2DEC04:
    ctx->pc = 0x7F2DEC04u;
    // 7F2DEC04: bc    4, 2, 0x7F2DEC10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC10;
        }
    }

label_7F2DEC08:
    ctx->pc = 0x7F2DEC08u;
    ctx->downcount -= 2;
    // 7F2DEC08: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DEC0C:
    ctx->pc = 0x7F2DEC0Cu;
    // 7F2DEC0C: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEC10:
    ctx->pc = 0x7F2DEC10u;
    ctx->downcount -= 3;
    // 7F2DEC10: lwz     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEC14:
    ctx->pc = 0x7F2DEC14u;
    // 7F2DEC14: cmpwi   r0, 0
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

label_7F2DEC18:
    ctx->pc = 0x7F2DEC18u;
    // 7F2DEC18: bc    12, 2, 0x7F2DEC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC28;
        }
    }

label_7F2DEC1C:
    ctx->pc = 0x7F2DEC1Cu;
    ctx->downcount -= 2;
    // 7F2DEC1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DEC20:
    ctx->pc = 0x7F2DEC20u;
    // 7F2DEC20: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DEC24u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DEC24:
    ctx->pc = 0x7F2DEC24u;
    ctx->downcount -= 1;
    // 7F2DEC24: b       0x7F2DEC30
    {
            goto label_7F2DEC30;
    }

label_7F2DEC28:
    ctx->pc = 0x7F2DEC28u;
    ctx->downcount -= 2;
    // 7F2DEC28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEC2C:
    ctx->pc = 0x7F2DEC2Cu;
    // 7F2DEC2C: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEC30:
    ctx->pc = 0x7F2DEC30u;
    ctx->downcount -= 6;
    // 7F2DEC30: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEC34:
    ctx->pc = 0x7F2DEC34u;
    // 7F2DEC34: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DEC38:
    ctx->pc = 0x7F2DEC38u;
    // 7F2DEC38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DEC3C:
    ctx->pc = 0x7F2DEC3Cu;
    // 7F2DEC3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DEC40:
    ctx->pc = 0x7F2DEC40u;
    // 7F2DEC40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DEC44:
    ctx->pc = 0x7F2DEC44u;
    ctx->downcount -= 19;
    // 7F2DEC44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DEC48:
    ctx->pc = 0x7F2DEC48u;
    // 7F2DEC48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DEC4C:
    ctx->pc = 0x7F2DEC4Cu;
    // 7F2DEC4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEC50:
    ctx->pc = 0x7F2DEC50u;
    // 7F2DEC50: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DEC54:
    ctx->pc = 0x7F2DEC54u;
    // 7F2DEC54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DEC58:
    ctx->pc = 0x7F2DEC58u;
    // 7F2DEC58: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DEC5C:
    ctx->pc = 0x7F2DEC5Cu;
    // 7F2DEC5C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DEC60:
    ctx->pc = 0x7F2DEC60u;
    // 7F2DEC60: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DEC64:
    ctx->pc = 0x7F2DEC64u;
    // 7F2DEC64: bl      0x7F0180B4
    {
            ctx->lr = 0x7F2DEC68u;
            ctx->pc = 0x7F0180B4u;
            return;
    }

label_7F2DEC68:
    ctx->pc = 0x7F2DEC68u;
    ctx->downcount -= 2;
    // 7F2DEC68: cmpwi   r3, 0
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

label_7F2DEC6C:
    ctx->pc = 0x7F2DEC6Cu;
    // 7F2DEC6C: bc    4, 0, 0x7F2DEC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEC78;
        }
    }

label_7F2DEC70:
    ctx->pc = 0x7F2DEC70u;
    ctx->downcount -= 2;
    // 7F2DEC70: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2DEC74:
    ctx->pc = 0x7F2DEC74u;
    // 7F2DEC74: b       0x7F2DEC94
    {
            goto label_7F2DEC94;
    }

label_7F2DEC78:
    ctx->pc = 0x7F2DEC78u;
    ctx->downcount -= 7;
    // 7F2DEC78: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F2DEC7C:
    ctx->pc = 0x7F2DEC7Cu;
    // 7F2DEC7C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DEC80:
    ctx->pc = 0x7F2DEC80u;
    // 7F2DEC80: lwz     r0, -19456(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19456);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEC84:
    ctx->pc = 0x7F2DEC84u;
    // 7F2DEC84: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DEC88:
    ctx->pc = 0x7F2DEC88u;
    // 7F2DEC88: srawi r0, r0, 1
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

label_7F2DEC8C:
    ctx->pc = 0x7F2DEC8Cu;
    // 7F2DEC8C: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2DEC90:
    ctx->pc = 0x7F2DEC90u;
    // 7F2DEC90: bl      0x7F017B38
    {
            ctx->lr = 0x7F2DEC94u;
            ctx->pc = 0x7F017B38u;
            return;
    }

label_7F2DEC94:
    ctx->pc = 0x7F2DEC94u;
    ctx->downcount -= 16;
    // 7F2DEC94: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DEC98:
    ctx->pc = 0x7F2DEC98u;
    // 7F2DEC98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEC9C:
    ctx->pc = 0x7F2DEC9Cu;
    // 7F2DEC9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DECA0:
    ctx->pc = 0x7F2DECA0u;
    // 7F2DECA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DECA4:
    ctx->pc = 0x7F2DECA4u;
    // 7F2DECA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DECA8:
    ctx->pc = 0x7F2DECA8u;
    ctx->downcount -= 6;
    // 7F2DECA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DECAC:
    ctx->pc = 0x7F2DECACu;
    // 7F2DECAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DECB0:
    ctx->pc = 0x7F2DECB0u;
    // 7F2DECB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DECB4:
    ctx->pc = 0x7F2DECB4u;
    // 7F2DECB4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DECB8:
    ctx->pc = 0x7F2DECB8u;
    // 7F2DECB8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DECBC:
    ctx->pc = 0x7F2DECBCu;
    // 7F2DECBC: bl      0x7F2DE808
    {
            ctx->lr = 0x7F2DECC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE808u;
                return;
            }
            goto label_7F2DE808;
    }

label_7F2DECC0:
    ctx->pc = 0x7F2DECC0u;
    ctx->downcount -= 3;
    // 7F2DECC0: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DECC4:
    ctx->pc = 0x7F2DECC4u;
    // 7F2DECC4: cmpwi   r0, 0
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

label_7F2DECC8:
    ctx->pc = 0x7F2DECC8u;
    // 7F2DECC8: bc    12, 2, 0x7F2DECF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DECF4;
        }
    }

label_7F2DECCC:
    ctx->pc = 0x7F2DECCCu;
    ctx->downcount -= 3;
    // 7F2DECCC: lwz     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DECD0:
    ctx->pc = 0x7F2DECD0u;
    // 7F2DECD0: cmpwi   r0, 0
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

label_7F2DECD4:
    ctx->pc = 0x7F2DECD4u;
    // 7F2DECD4: bc    12, 2, 0x7F2DECF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DECF4;
        }
    }

label_7F2DECD8:
    ctx->pc = 0x7F2DECD8u;
    ctx->downcount -= 2;
    // 7F2DECD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DECDC:
    ctx->pc = 0x7F2DECDCu;
    // 7F2DECDC: bl      0x7F3C89FC
    {
            ctx->lr = 0x7F2DECE0u;
            ctx->pc = 0x7F3C89FCu;
            return;
    }

label_7F2DECE0:
    ctx->pc = 0x7F2DECE0u;
    ctx->downcount -= 2;
    // 7F2DECE0: cmpwi   r3, 0
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

label_7F2DECE4:
    ctx->pc = 0x7F2DECE4u;
    // 7F2DECE4: bc    4, 2, 0x7F2DECF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DECF4;
        }
    }

label_7F2DECE8:
    ctx->pc = 0x7F2DECE8u;
    ctx->downcount -= 3;
    // 7F2DECE8: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DECEC:
    ctx->pc = 0x7F2DECECu;
    // 7F2DECEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DECF0:
    ctx->pc = 0x7F2DECF0u;
    // 7F2DECF0: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2DECF4u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2DECF4:
    ctx->pc = 0x7F2DECF4u;
    ctx->downcount -= 4;
    // 7F2DECF4: lis     r4, 32573
    ctx->gpr[4] = ((u32)(s32)(32573) << 16);

label_7F2DECF8:
    ctx->pc = 0x7F2DECF8u;
    // 7F2DECF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DECFC:
    ctx->pc = 0x7F2DECFCu;
    // 7F2DECFC: addi    r4, r4, -27964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27964);

label_7F2DED00:
    ctx->pc = 0x7F2DED00u;
    // 7F2DED00: bl      0x7F3C8914
    {
            ctx->lr = 0x7F2DED04u;
            ctx->pc = 0x7F3C8914u;
            return;
    }

label_7F2DED04:
    ctx->pc = 0x7F2DED04u;
    ctx->downcount -= 6;
    // 7F2DED04: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DED08:
    ctx->pc = 0x7F2DED08u;
    // 7F2DED08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DED0C:
    ctx->pc = 0x7F2DED0Cu;
    // 7F2DED0C: addi    r4, r3, -4828
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DED10:
    ctx->pc = 0x7F2DED10u;
    // 7F2DED10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DED14:
    ctx->pc = 0x7F2DED14u;
    // 7F2DED14: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DED18:
    ctx->pc = 0x7F2DED18u;
    // 7F2DED18: bl      0x7F3C89FC
    {
            ctx->lr = 0x7F2DED1Cu;
            ctx->pc = 0x7F3C89FCu;
            return;
    }

label_7F2DED1C:
    ctx->pc = 0x7F2DED1Cu;
    ctx->downcount -= 2;
    // 7F2DED1C: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DED20:
    ctx->pc = 0x7F2DED20u;
    // 7F2DED20: bl      0x7F3BA300
    {
            ctx->lr = 0x7F2DED24u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F2DED24:
    ctx->pc = 0x7F2DED24u;
    ctx->downcount -= 2;
    // 7F2DED24: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DED28:
    ctx->pc = 0x7F2DED28u;
    // 7F2DED28: bl      0x7F3BA234
    {
            ctx->lr = 0x7F2DED2Cu;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F2DED2C:
    ctx->pc = 0x7F2DED2Cu;
    ctx->downcount -= 3;
    // 7F2DED2C: lwz     r3, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DED30:
    ctx->pc = 0x7F2DED30u;
    // 7F2DED30: cmplwi  r3, 0x0000
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

label_7F2DED34:
    ctx->pc = 0x7F2DED34u;
    // 7F2DED34: bc    12, 2, 0x7F2DED3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DED3C;
        }
    }

label_7F2DED38:
    ctx->pc = 0x7F2DED38u;
    ctx->downcount -= 1;
    // 7F2DED38: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F2DED3Cu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F2DED3C:
    ctx->pc = 0x7F2DED3Cu;
    ctx->downcount -= 1;
    // 7F2DED3C: bl      0x7F2DF4A4
    {
            ctx->lr = 0x7F2DED40u;
            goto label_7F2DF4A4;
    }

label_7F2DED40:
    ctx->pc = 0x7F2DED40u;
    ctx->downcount -= 6;
    // 7F2DED40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DED44:
    ctx->pc = 0x7F2DED44u;
    // 7F2DED44: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DED48:
    ctx->pc = 0x7F2DED48u;
    // 7F2DED48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DED4C:
    ctx->pc = 0x7F2DED4Cu;
    // 7F2DED4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DED50:
    ctx->pc = 0x7F2DED50u;
    // 7F2DED50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DED54:
    ctx->pc = 0x7F2DED54u;
    ctx->downcount -= 23;
    // 7F2DED54: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DED58:
    ctx->pc = 0x7F2DED58u;
    // 7F2DED58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DED5C:
    ctx->pc = 0x7F2DED5Cu;
    // 7F2DED5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DED60:
    ctx->pc = 0x7F2DED60u;
    // 7F2DED60: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DED64:
    ctx->pc = 0x7F2DED64u;
    // 7F2DED64: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DED68:
    ctx->pc = 0x7F2DED68u;
    // 7F2DED68: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DED6C:
    ctx->pc = 0x7F2DED6Cu;
    // 7F2DED6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DED70:
    ctx->pc = 0x7F2DED70u;
    // 7F2DED70: stw     r4, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DED74:
    ctx->pc = 0x7F2DED74u;
    // 7F2DED74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DED78:
    ctx->pc = 0x7F2DED78u;
    // 7F2DED78: stw     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DED7C:
    ctx->pc = 0x7F2DED7Cu;
    // 7F2DED7C: stw     r4, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DED80:
    ctx->pc = 0x7F2DED80u;
    // 7F2DED80: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DED84:
    ctx->pc = 0x7F2DED84u;
    // 7F2DED84: bl      0x7F2DE7C0
    {
            ctx->lr = 0x7F2DED88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE7C0u;
                return;
            }
            goto label_7F2DE7C0;
    }

label_7F2DED88:
    ctx->pc = 0x7F2DED88u;
    ctx->downcount -= 3;
    // 7F2DED88: lwz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DED8C:
    ctx->pc = 0x7F2DED8Cu;
    // 7F2DED8C: cmpwi   r0, 0
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

label_7F2DED90:
    ctx->pc = 0x7F2DED90u;
    // 7F2DED90: bc    4, 0, 0x7F2DEDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEDB0;
        }
    }

label_7F2DED94:
    ctx->pc = 0x7F2DED94u;
    ctx->downcount -= 2;
    // 7F2DED94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DED98:
    ctx->pc = 0x7F2DED98u;
    // 7F2DED98: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DED9Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DED9C:
    ctx->pc = 0x7F2DED9Cu;
    ctx->downcount -= 3;
    // 7F2DED9C: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEDA0:
    ctx->pc = 0x7F2DEDA0u;
    // 7F2DEDA0: cmpwi   r3, 0
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

label_7F2DEDA4:
    ctx->pc = 0x7F2DEDA4u;
    // 7F2DEDA4: bc    12, 2, 0x7F2DEDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEDB0;
        }
    }

label_7F2DEDA8:
    ctx->pc = 0x7F2DEDA8u;
    ctx->downcount -= 2;
    // 7F2DEDA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DEDAC:
    ctx->pc = 0x7F2DEDACu;
    // 7F2DEDAC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2DEDB0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2DEDB0:
    ctx->pc = 0x7F2DEDB0u;
    ctx->downcount -= 5;
    // 7F2DEDB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEDB4:
    ctx->pc = 0x7F2DEDB4u;
    // 7F2DEDB4: stw     r0, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEDB8:
    ctx->pc = 0x7F2DEDB8u;
    // 7F2DEDB8: lwz     r0, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEDBC:
    ctx->pc = 0x7F2DEDBCu;
    // 7F2DEDBC: cmplwi  r0, 0x0000
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

label_7F2DEDC0:
    ctx->pc = 0x7F2DEDC0u;
    // 7F2DEDC0: bc    4, 2, 0x7F2DEDF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEDF4;
        }
    }

label_7F2DEDC4:
    ctx->pc = 0x7F2DEDC4u;
    ctx->downcount -= 4;
    // 7F2DEDC4: lwz     r5, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DEDC8:
    ctx->pc = 0x7F2DEDC8u;
    // 7F2DEDC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DEDCC:
    ctx->pc = 0x7F2DEDCCu;
    // 7F2DEDCC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2DEDD0:
    ctx->pc = 0x7F2DEDD0u;
    // 7F2DEDD0: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F2DEDD4u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F2DEDD4:
    ctx->pc = 0x7F2DEDD4u;
    ctx->downcount -= 3;
    // 7F2DEDD4: stw     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEDD8:
    ctx->pc = 0x7F2DEDD8u;
    // 7F2DEDD8: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEDDC:
    ctx->pc = 0x7F2DEDDCu;
    // 7F2DEDDC: bl      0x7F3BA260
    {
            ctx->lr = 0x7F2DEDE0u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F2DEDE0:
    ctx->pc = 0x7F2DEDE0u;
    ctx->downcount -= 5;
    // 7F2DEDE0: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DEDE4:
    ctx->pc = 0x7F2DEDE4u;
    // 7F2DEDE4: lwz     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEDE8:
    ctx->pc = 0x7F2DEDE8u;
    // 7F2DEDE8: addi    r4, r4, -7060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7060);

label_7F2DEDEC:
    ctx->pc = 0x7F2DEDECu;
    // 7F2DEDEC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DEDF0:
    ctx->pc = 0x7F2DEDF0u;
    // 7F2DEDF0: bl      0x7F3BA254
    {
            ctx->lr = 0x7F2DEDF4u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F2DEDF4:
    ctx->pc = 0x7F2DEDF4u;
    ctx->downcount -= 3;
    // 7F2DEDF4: lwz     r4, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DEDF8:
    ctx->pc = 0x7F2DEDF8u;
    // 7F2DEDF8: cmpwi   r4, 0
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

label_7F2DEDFC:
    ctx->pc = 0x7F2DEDFCu;
    // 7F2DEDFC: bc    12, 2, 0x7F2DEE28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEE28;
        }
    }

label_7F2DEE00:
    ctx->pc = 0x7F2DEE00u;
    ctx->downcount -= 3;
    // 7F2DEE00: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2DEE04:
    ctx->pc = 0x7F2DEE04u;
    // 7F2DEE04: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2DEE08:
    ctx->pc = 0x7F2DEE08u;
    // 7F2DEE08: bl      0x7F3B0C68
    {
            ctx->lr = 0x7F2DEE0Cu;
            ctx->pc = 0x7F3B0C68u;
            return;
    }

label_7F2DEE0C:
    ctx->pc = 0x7F2DEE0Cu;
    ctx->downcount -= 6;
    // 7F2DEE0C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DEE10:
    ctx->pc = 0x7F2DEE10u;
    // 7F2DEE10: lwz     r3, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEE14:
    ctx->pc = 0x7F2DEE14u;
    // 7F2DEE14: lha     r5, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE18:
    ctx->pc = 0x7F2DEE18u;
    // 7F2DEE18: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2DEE1C:
    ctx->pc = 0x7F2DEE1Cu;
    // 7F2DEE1C: lwz     r6, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DEE20:
    ctx->pc = 0x7F2DEE20u;
    // 7F2DEE20: bl      0x7F2DF33C
    {
            ctx->lr = 0x7F2DEE24u;
            goto label_7F2DF33C;
    }

label_7F2DEE24:
    ctx->pc = 0x7F2DEE24u;
    ctx->downcount -= 1;
    // 7F2DEE24: b       0x7F2DEE9C
    {
            goto label_7F2DEE9C;
    }

label_7F2DEE28:
    ctx->pc = 0x7F2DEE28u;
    ctx->downcount -= 6;
    // 7F2DEE28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DEE2C:
    ctx->pc = 0x7F2DEE2Cu;
    // 7F2DEE2C: addi    r29, r1, 24
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2DEE30:
    ctx->pc = 0x7F2DEE30u;
    // 7F2DEE30: addi    r28, r3, 29464
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(29464);

label_7F2DEE34:
    ctx->pc = 0x7F2DEE34u;
    // 7F2DEE34: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2DEE38:
    ctx->pc = 0x7F2DEE38u;
    // 7F2DEE38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DEE3C:
    ctx->pc = 0x7F2DEE3Cu;
    // 7F2DEE3C: b       0x7F2DEE90
    {
            goto label_7F2DEE90;
    }

label_7F2DEE40:
    ctx->pc = 0x7F2DEE40u;
    ctx->downcount -= 18;
    // 7F2DEE40: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEE44:
    // 7F2DEE44: add   r9, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F2DEE48:
    ctx->pc = 0x7F2DEE48u;
    // 7F2DEE48: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEE4C:
    ctx->pc = 0x7F2DEE4Cu;
    // 7F2DEE4C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEE50:
    ctx->pc = 0x7F2DEE50u;
    // 7F2DEE50: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEE54:
    ctx->pc = 0x7F2DEE54u;
    // 7F2DEE54: stw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F2DEE58:
    ctx->pc = 0x7F2DEE58u;
    // 7F2DEE58: lha     r0, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE5C:
    ctx->pc = 0x7F2DEE5Cu;
    // 7F2DEE5C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEE60:
    ctx->pc = 0x7F2DEE60u;
    // 7F2DEE60: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DEE64:
    ctx->pc = 0x7F2DEE64u;
    // 7F2DEE64: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DEE68:
    ctx->pc = 0x7F2DEE68u;
    // 7F2DEE68: lha     r4, 100(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(100);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE6C:
    ctx->pc = 0x7F2DEE6Cu;
    // 7F2DEE6C: lha     r5, 102(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(102);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE70:
    ctx->pc = 0x7F2DEE70u;
    // 7F2DEE70: lha     r6, 104(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(104);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE74:
    ctx->pc = 0x7F2DEE74u;
    // 7F2DEE74: lha     r7, 180(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(180);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE78:
    ctx->pc = 0x7F2DEE78u;
    // 7F2DEE78: lha     r8, 182(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(182);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE7C:
    ctx->pc = 0x7F2DEE7Cu;
    // 7F2DEE7C: lha     r9, 184(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(184);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DEE80:
    ctx->pc = 0x7F2DEE80u;
    // 7F2DEE80: lwz     r10, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DEE84:
    // 7F2DEE84: bl      0x7F2DE964
    {
            ctx->lr = 0x7F2DEE88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DE964u;
                return;
            }
            goto label_7F2DE964;
    }

label_7F2DEE88:
    ctx->downcount -= 2;
    // 7F2DEE88: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2DEE8C:
    // 7F2DEE8C: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_7F2DEE90:
    ctx->pc = 0x7F2DEE90u;
    ctx->downcount -= 3;
    // 7F2DEE90: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEE94:
    // 7F2DEE94: cmpw    r27, r0
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

label_7F2DEE98:
    // 7F2DEE98: bc    12, 0, 0x7F2DEE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DEE40u;
                return;
            }
            goto label_7F2DEE40;
        }
    }

label_7F2DEE9C:
    ctx->pc = 0x7F2DEE9Cu;
    ctx->downcount -= 17;
    // 7F2DEE9C: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DEEA0:
    ctx->pc = 0x7F2DEEA0u;
    // 7F2DEEA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DEEA4:
    ctx->pc = 0x7F2DEEA4u;
    // 7F2DEEA4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEEA8:
    ctx->pc = 0x7F2DEEA8u;
    // 7F2DEEA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DEEAC:
    ctx->pc = 0x7F2DEEACu;
    // 7F2DEEAC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2DEEB0:
    ctx->pc = 0x7F2DEEB0u;
    // 7F2DEEB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DEEB4:
    ctx->pc = 0x7F2DEEB4u;
    ctx->downcount -= 17;
    // 7F2DEEB4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DEEB8:
    ctx->pc = 0x7F2DEEB8u;
    // 7F2DEEB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DEEBC:
    ctx->pc = 0x7F2DEEBCu;
    // 7F2DEEBC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEEC0:
    ctx->pc = 0x7F2DEEC0u;
    // 7F2DEEC0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DEEC4:
    ctx->pc = 0x7F2DEEC4u;
    // 7F2DEEC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DEEC8:
    ctx->pc = 0x7F2DEEC8u;
    // 7F2DEEC8: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F2DEECC:
    ctx->pc = 0x7F2DEECCu;
    // 7F2DEECC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEED0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEED0:
    ctx->pc = 0x7F2DEED0u;
    ctx->downcount -= 2;
    // 7F2DEED0: cmplwi  r3, 0x0000
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

label_7F2DEED4:
    ctx->pc = 0x7F2DEED4u;
    // 7F2DEED4: bc    12, 2, 0x7F2DEEF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEEF0;
        }
    }

label_7F2DEED8:
    ctx->pc = 0x7F2DEED8u;
    ctx->downcount -= 1;
    // 7F2DEED8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEEDCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEEDC:
    ctx->pc = 0x7F2DEEDCu;
    ctx->downcount -= 3;
    // 7F2DEEDC: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEEE0:
    ctx->pc = 0x7F2DEEE0u;
    // 7F2DEEE0: stw     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEEE4:
    ctx->pc = 0x7F2DEEE4u;
    // 7F2DEEE4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEEE8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEEE8:
    ctx->pc = 0x7F2DEEE8u;
    ctx->downcount -= 2;
    // 7F2DEEE8: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEEEC:
    ctx->pc = 0x7F2DEEECu;
    // 7F2DEEEC: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEEF0:
    ctx->pc = 0x7F2DEEF0u;
    ctx->downcount -= 6;
    // 7F2DEEF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DEEF4:
    ctx->pc = 0x7F2DEEF4u;
    // 7F2DEEF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEEF8:
    ctx->pc = 0x7F2DEEF8u;
    // 7F2DEEF8: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEEFC:
    ctx->pc = 0x7F2DEEFCu;
    // 7F2DEEFC: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F2DEF00:
    ctx->pc = 0x7F2DEF00u;
    // 7F2DEF00: stw     r0, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEF04:
    ctx->pc = 0x7F2DEF04u;
    // 7F2DEF04: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEF08u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEF08:
    ctx->pc = 0x7F2DEF08u;
    ctx->downcount -= 2;
    // 7F2DEF08: cmplwi  r3, 0x0000
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

label_7F2DEF0C:
    ctx->pc = 0x7F2DEF0Cu;
    // 7F2DEF0C: bc    12, 2, 0x7F2DEF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEF18;
        }
    }

label_7F2DEF10:
    ctx->pc = 0x7F2DEF10u;
    ctx->downcount -= 2;
    // 7F2DEF10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DEF14:
    ctx->pc = 0x7F2DEF14u;
    // 7F2DEF14: stw     r0, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEF18:
    ctx->pc = 0x7F2DEF18u;
    ctx->downcount -= 2;
    // 7F2DEF18: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2DEF1C:
    ctx->pc = 0x7F2DEF1Cu;
    // 7F2DEF1C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEF20u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEF20:
    ctx->pc = 0x7F2DEF20u;
    ctx->downcount -= 2;
    // 7F2DEF20: cmplwi  r3, 0x0000
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

label_7F2DEF24:
    ctx->pc = 0x7F2DEF24u;
    // 7F2DEF24: bc    12, 2, 0x7F2DEF34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEF34;
        }
    }

label_7F2DEF28:
    ctx->pc = 0x7F2DEF28u;
    ctx->downcount -= 1;
    // 7F2DEF28: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEF2Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEF2C:
    ctx->pc = 0x7F2DEF2Cu;
    ctx->downcount -= 2;
    // 7F2DEF2C: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEF30:
    ctx->pc = 0x7F2DEF30u;
    // 7F2DEF30: b       0x7F2DEF3C
    {
            goto label_7F2DEF3C;
    }

label_7F2DEF34:
    ctx->pc = 0x7F2DEF34u;
    ctx->downcount -= 2;
    // 7F2DEF34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEF38:
    ctx->pc = 0x7F2DEF38u;
    // 7F2DEF38: stw     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEF3C:
    ctx->pc = 0x7F2DEF3Cu;
    ctx->downcount -= 2;
    // 7F2DEF3C: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F2DEF40:
    ctx->pc = 0x7F2DEF40u;
    // 7F2DEF40: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEF44u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEF44:
    ctx->pc = 0x7F2DEF44u;
    ctx->downcount -= 2;
    // 7F2DEF44: cmplwi  r3, 0x0000
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

label_7F2DEF48:
    ctx->pc = 0x7F2DEF48u;
    // 7F2DEF48: bc    12, 2, 0x7F2DEF54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEF54;
        }
    }

label_7F2DEF4C:
    ctx->pc = 0x7F2DEF4Cu;
    ctx->downcount -= 1;
    // 7F2DEF4C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEF50u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEF50:
    ctx->pc = 0x7F2DEF50u;
    ctx->downcount -= 1;
    // 7F2DEF50: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEF54:
    ctx->pc = 0x7F2DEF54u;
    ctx->downcount -= 4;
    // 7F2DEF54: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DEF58:
    ctx->pc = 0x7F2DEF58u;
    // 7F2DEF58: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F2DEF5C:
    ctx->pc = 0x7F2DEF5Cu;
    // 7F2DEF5C: sth     r0, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DEF60:
    ctx->pc = 0x7F2DEF60u;
    // 7F2DEF60: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEF64u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEF64:
    ctx->pc = 0x7F2DEF64u;
    ctx->downcount -= 2;
    // 7F2DEF64: cmplwi  r3, 0x0000
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

label_7F2DEF68:
    ctx->pc = 0x7F2DEF68u;
    // 7F2DEF68: bc    12, 2, 0x7F2DEF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEF74;
        }
    }

label_7F2DEF6C:
    ctx->pc = 0x7F2DEF6Cu;
    ctx->downcount -= 1;
    // 7F2DEF6C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEF70u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEF70:
    ctx->pc = 0x7F2DEF70u;
    ctx->downcount -= 1;
    // 7F2DEF70: sth     r3, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DEF74:
    ctx->pc = 0x7F2DEF74u;
    ctx->downcount -= 6;
    // 7F2DEF74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DEF78:
    ctx->pc = 0x7F2DEF78u;
    // 7F2DEF78: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F2DEF7C:
    ctx->pc = 0x7F2DEF7Cu;
    // 7F2DEF7C: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEF80:
    ctx->pc = 0x7F2DEF80u;
    // 7F2DEF80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DEF84:
    ctx->pc = 0x7F2DEF84u;
    // 7F2DEF84: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F2DEF88:
    ctx->pc = 0x7F2DEF88u;
    // 7F2DEF88: bl      0x800050B4
    {
            ctx->lr = 0x7F2DEF8Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F2DEF8C:
    ctx->pc = 0x7F2DEF8Cu;
    ctx->downcount -= 4;
    // 7F2DEF8C: addi    r3, r31, 180
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(180);

label_7F2DEF90:
    ctx->pc = 0x7F2DEF90u;
    // 7F2DEF90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DEF94:
    ctx->pc = 0x7F2DEF94u;
    // 7F2DEF94: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F2DEF98:
    ctx->pc = 0x7F2DEF98u;
    // 7F2DEF98: bl      0x800050B4
    {
            ctx->lr = 0x7F2DEF9Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F2DEF9C:
    ctx->pc = 0x7F2DEF9Cu;
    ctx->downcount -= 4;
    // 7F2DEF9C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DEFA0:
    ctx->pc = 0x7F2DEFA0u;
    // 7F2DEFA0: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F2DEFA4:
    ctx->pc = 0x7F2DEFA4u;
    // 7F2DEFA4: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DEFA8:
    ctx->pc = 0x7F2DEFA8u;
    // 7F2DEFA8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEFACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEFAC:
    ctx->pc = 0x7F2DEFACu;
    ctx->downcount -= 2;
    // 7F2DEFAC: cmplwi  r3, 0x0000
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

label_7F2DEFB0:
    ctx->pc = 0x7F2DEFB0u;
    // 7F2DEFB0: bc    12, 2, 0x7F2DEFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DEFBC;
        }
    }

label_7F2DEFB4:
    ctx->pc = 0x7F2DEFB4u;
    ctx->downcount -= 1;
    // 7F2DEFB4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEFB8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEFB8:
    ctx->pc = 0x7F2DEFB8u;
    ctx->downcount -= 1;
    // 7F2DEFB8: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DEFBC:
    ctx->pc = 0x7F2DEFBCu;
    ctx->downcount -= 2;
    // 7F2DEFBC: li      r3, 117
    ctx->gpr[3] = (u32)(s32)(117);

label_7F2DEFC0:
    ctx->pc = 0x7F2DEFC0u;
    // 7F2DEFC0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DEFC4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DEFC4:
    ctx->pc = 0x7F2DEFC4u;
    ctx->downcount -= 2;
    // 7F2DEFC4: cmplwi  r3, 0x0000
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

label_7F2DEFC8:
    ctx->pc = 0x7F2DEFC8u;
    // 7F2DEFC8: bc    12, 2, 0x7F2DF024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF024;
        }
    }

label_7F2DEFCC:
    ctx->pc = 0x7F2DEFCCu;
    ctx->downcount -= 1;
    // 7F2DEFCC: b       0x7F2DF018
    {
            goto label_7F2DF018;
    }

label_7F2DEFD0:
    ctx->downcount -= 1;
    // 7F2DEFD0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEFD4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEFD4:
    ctx->pc = 0x7F2DEFD4u;
    ctx->downcount -= 5;
    // 7F2DEFD4: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEFD8:
    // 7F2DEFD8: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2DEFDC:
    // 7F2DEFDC: addi    r0, r4, 100
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(100);

label_7F2DEFE0:
    ctx->pc = 0x7F2DEFE0u;
    // 7F2DEFE0: sthx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DEFE4:
    // 7F2DEFE4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEFE8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEFE8:
    ctx->pc = 0x7F2DEFE8u;
    ctx->downcount -= 5;
    // 7F2DEFE8: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DEFEC:
    // 7F2DEFEC: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2DEFF0:
    // 7F2DEFF0: addi    r0, r4, 102
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(102);

label_7F2DEFF4:
    ctx->pc = 0x7F2DEFF4u;
    // 7F2DEFF4: sthx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DEFF8:
    // 7F2DEFF8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DEFFCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DEFFC:
    ctx->pc = 0x7F2DEFFCu;
    ctx->downcount -= 7;
    // 7F2DEFFC: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF000:
    // 7F2DF000: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2DF004:
    // 7F2DF004: addi    r0, r4, 104
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(104);

label_7F2DF008:
    ctx->pc = 0x7F2DF008u;
    // 7F2DF008: sthx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DF00C:
    ctx->pc = 0x7F2DF00Cu;
    // 7F2DF00C: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF010:
    // 7F2DF010: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DF014:
    ctx->pc = 0x7F2DF014u;
    // 7F2DF014: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF018:
    ctx->downcount -= 1;
    // 7F2DF018: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DF01Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DF01C:
    ctx->downcount -= 2;
    // 7F2DF01C: cmplwi  r3, 0x0000
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

label_7F2DF020:
    // 7F2DF020: bc    4, 2, 0x7F2DEFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DEFD0u;
                return;
            }
            goto label_7F2DEFD0;
        }
    }

label_7F2DF024:
    ctx->pc = 0x7F2DF024u;
    ctx->downcount -= 2;
    // 7F2DF024: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F2DF028:
    ctx->pc = 0x7F2DF028u;
    // 7F2DF028: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF02Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF02C:
    ctx->pc = 0x7F2DF02Cu;
    ctx->downcount -= 2;
    // 7F2DF02C: cmplwi  r3, 0x0000
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

label_7F2DF030:
    ctx->pc = 0x7F2DF030u;
    // 7F2DF030: bc    12, 2, 0x7F2DF068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF068;
        }
    }

label_7F2DF034:
    ctx->pc = 0x7F2DF034u;
    ctx->downcount -= 2;
    // 7F2DF034: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2DF038:
    ctx->pc = 0x7F2DF038u;
    // 7F2DF038: b       0x7F2DF05C
    {
            goto label_7F2DF05C;
    }

label_7F2DF03C:
    ctx->downcount -= 1;
    // 7F2DF03C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF040u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF040:
    ctx->downcount -= 3;
    // 7F2DF040: add   r29, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F2DF044:
    ctx->pc = 0x7F2DF044u;
    // 7F2DF044: sth     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DF048:
    // 7F2DF048: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF04Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF04C:
    ctx->pc = 0x7F2DF04Cu;
    ctx->downcount -= 2;
    // 7F2DF04C: sth     r3, 182(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(182);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DF050:
    // 7F2DF050: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF054u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF054:
    ctx->pc = 0x7F2DF054u;
    ctx->downcount -= 2;
    // 7F2DF054: sth     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DF058:
    // 7F2DF058: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_7F2DF05C:
    ctx->downcount -= 1;
    // 7F2DF05C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DF060u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DF060:
    ctx->downcount -= 2;
    // 7F2DF060: cmplwi  r3, 0x0000
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

label_7F2DF064:
    // 7F2DF064: bc    4, 2, 0x7F2DF03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF03Cu;
                return;
            }
            goto label_7F2DF03C;
        }
    }

label_7F2DF068:
    ctx->pc = 0x7F2DF068u;
    ctx->downcount -= 2;
    // 7F2DF068: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F2DF06C:
    ctx->pc = 0x7F2DF06Cu;
    // 7F2DF06C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF070u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF070:
    ctx->pc = 0x7F2DF070u;
    ctx->downcount -= 2;
    // 7F2DF070: cmplwi  r3, 0x0000
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

label_7F2DF074:
    ctx->pc = 0x7F2DF074u;
    // 7F2DF074: bc    12, 2, 0x7F2DF084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF084;
        }
    }

label_7F2DF078:
    ctx->pc = 0x7F2DF078u;
    ctx->downcount -= 3;
    // 7F2DF078: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DF07C:
    ctx->pc = 0x7F2DF07Cu;
    // 7F2DF07C: stw     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF080:
    ctx->pc = 0x7F2DF080u;
    // 7F2DF080: b       0x7F2DF08C
    {
            goto label_7F2DF08C;
    }

label_7F2DF084:
    ctx->pc = 0x7F2DF084u;
    ctx->downcount -= 2;
    // 7F2DF084: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DF088:
    ctx->pc = 0x7F2DF088u;
    // 7F2DF088: stw     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF08C:
    ctx->pc = 0x7F2DF08Cu;
    ctx->downcount -= 2;
    // 7F2DF08C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F2DF090:
    ctx->pc = 0x7F2DF090u;
    // 7F2DF090: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF094u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF094:
    ctx->pc = 0x7F2DF094u;
    ctx->downcount -= 2;
    // 7F2DF094: cmplwi  r3, 0x0000
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

label_7F2DF098:
    ctx->pc = 0x7F2DF098u;
    // 7F2DF098: bc    12, 2, 0x7F2DF0C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF0C0;
        }
    }

label_7F2DF09C:
    ctx->pc = 0x7F2DF09Cu;
    ctx->downcount -= 8;
    // 7F2DF09C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DF0A0:
    ctx->pc = 0x7F2DF0A0u;
    // 7F2DF0A0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F2DF0A4:
    ctx->pc = 0x7F2DF0A4u;
    // 7F2DF0A4: stb     r0, 312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2DF0A8:
    ctx->pc = 0x7F2DF0A8u;
    // 7F2DF0A8: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F2DF0AC:
    ctx->pc = 0x7F2DF0ACu;
    // 7F2DF0AC: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F2DF0B0:
    ctx->pc = 0x7F2DF0B0u;
    // 7F2DF0B0: stw     r4, 316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DF0B4:
    ctx->pc = 0x7F2DF0B4u;
    // 7F2DF0B4: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF0B8:
    ctx->pc = 0x7F2DF0B8u;
    // 7F2DF0B8: bl      0x7F0208E4
    {
            ctx->lr = 0x7F2DF0BCu;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F2DF0BC:
    ctx->pc = 0x7F2DF0BCu;
    ctx->downcount -= 1;
    // 7F2DF0BC: b       0x7F2DF0F8
    {
            goto label_7F2DF0F8;
    }

label_7F2DF0C0:
    ctx->pc = 0x7F2DF0C0u;
    ctx->downcount -= 5;
    // 7F2DF0C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DF0C4:
    ctx->pc = 0x7F2DF0C4u;
    // 7F2DF0C4: stb     r0, 312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2DF0C8:
    ctx->pc = 0x7F2DF0C8u;
    // 7F2DF0C8: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF0CC:
    ctx->pc = 0x7F2DF0CCu;
    // 7F2DF0CC: cmpwi   r0, 0
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

label_7F2DF0D0:
    ctx->pc = 0x7F2DF0D0u;
    // 7F2DF0D0: bc    4, 2, 0x7F2DF0EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF0EC;
        }
    }

label_7F2DF0D4:
    ctx->pc = 0x7F2DF0D4u;
    ctx->downcount -= 5;
    // 7F2DF0D4: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F2DF0D8:
    ctx->pc = 0x7F2DF0D8u;
    // 7F2DF0D8: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F2DF0DC:
    ctx->pc = 0x7F2DF0DCu;
    // 7F2DF0DC: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_7F2DF0E0:
    ctx->pc = 0x7F2DF0E0u;
    // 7F2DF0E0: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF0E4:
    ctx->pc = 0x7F2DF0E4u;
    // 7F2DF0E4: bl      0x7F0208E4
    {
            ctx->lr = 0x7F2DF0E8u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F2DF0E8:
    ctx->pc = 0x7F2DF0E8u;
    ctx->downcount -= 1;
    // 7F2DF0E8: b       0x7F2DF0F8
    {
            goto label_7F2DF0F8;
    }

label_7F2DF0EC:
    ctx->pc = 0x7F2DF0ECu;
    ctx->downcount -= 3;
    // 7F2DF0EC: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F2DF0F0:
    ctx->pc = 0x7F2DF0F0u;
    // 7F2DF0F0: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F2DF0F4:
    ctx->pc = 0x7F2DF0F4u;
    // 7F2DF0F4: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF0F8:
    ctx->pc = 0x7F2DF0F8u;
    ctx->downcount -= 5;
    // 7F2DF0F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DF0FC:
    ctx->pc = 0x7F2DF0FCu;
    // 7F2DF0FC: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2DF100:
    ctx->pc = 0x7F2DF100u;
    // 7F2DF100: stw     r0, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF104:
    ctx->pc = 0x7F2DF104u;
    // 7F2DF104: stw     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF108:
    ctx->pc = 0x7F2DF108u;
    // 7F2DF108: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF10Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF10C:
    ctx->pc = 0x7F2DF10Cu;
    ctx->downcount -= 2;
    // 7F2DF10C: cmplwi  r3, 0x0000
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

label_7F2DF110:
    ctx->pc = 0x7F2DF110u;
    // 7F2DF110: bc    12, 2, 0x7F2DF11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF11C;
        }
    }

label_7F2DF114:
    ctx->pc = 0x7F2DF114u;
    ctx->downcount -= 1;
    // 7F2DF114: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF118u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF118:
    ctx->pc = 0x7F2DF118u;
    ctx->downcount -= 1;
    // 7F2DF118: stw     r3, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF11C:
    ctx->pc = 0x7F2DF11Cu;
    ctx->downcount -= 2;
    // 7F2DF11C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F2DF120:
    ctx->pc = 0x7F2DF120u;
    // 7F2DF120: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF124u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF124:
    ctx->pc = 0x7F2DF124u;
    ctx->downcount -= 2;
    // 7F2DF124: cmplwi  r3, 0x0000
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

label_7F2DF128:
    ctx->pc = 0x7F2DF128u;
    // 7F2DF128: bc    12, 2, 0x7F2DF134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF134;
        }
    }

label_7F2DF12C:
    ctx->pc = 0x7F2DF12Cu;
    ctx->downcount -= 1;
    // 7F2DF12C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF130u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF130:
    ctx->pc = 0x7F2DF130u;
    ctx->downcount -= 1;
    // 7F2DF130: stw     r3, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF134:
    ctx->pc = 0x7F2DF134u;
    ctx->downcount -= 4;
    // 7F2DF134: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2DF138:
    ctx->pc = 0x7F2DF138u;
    // 7F2DF138: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F2DF13C:
    ctx->pc = 0x7F2DF13Cu;
    // 7F2DF13C: stw     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF140:
    ctx->pc = 0x7F2DF140u;
    // 7F2DF140: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF144u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF144:
    ctx->pc = 0x7F2DF144u;
    ctx->downcount -= 2;
    // 7F2DF144: cmplwi  r3, 0x0000
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

label_7F2DF148:
    ctx->pc = 0x7F2DF148u;
    // 7F2DF148: bc    12, 2, 0x7F2DF154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF154;
        }
    }

label_7F2DF14C:
    ctx->pc = 0x7F2DF14Cu;
    ctx->downcount -= 1;
    // 7F2DF14C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF150u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF150:
    ctx->pc = 0x7F2DF150u;
    ctx->downcount -= 1;
    // 7F2DF150: stw     r3, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF154:
    ctx->pc = 0x7F2DF154u;
    ctx->downcount -= 3;
    // 7F2DF154: lwz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF158:
    ctx->pc = 0x7F2DF158u;
    // 7F2DF158: cmpwi   r0, 255
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

label_7F2DF15C:
    ctx->pc = 0x7F2DF15Cu;
    // 7F2DF15C: bc    4, 1, 0x7F2DF168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF168;
        }
    }

label_7F2DF160:
    ctx->pc = 0x7F2DF160u;
    ctx->downcount -= 2;
    // 7F2DF160: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2DF164:
    ctx->pc = 0x7F2DF164u;
    // 7F2DF164: stw     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF168:
    ctx->pc = 0x7F2DF168u;
    ctx->downcount -= 3;
    // 7F2DF168: lwz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF16C:
    ctx->pc = 0x7F2DF16Cu;
    // 7F2DF16C: cmpwi   r0, 0
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

label_7F2DF170:
    ctx->pc = 0x7F2DF170u;
    // 7F2DF170: bc    4, 0, 0x7F2DF17C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF17C;
        }
    }

label_7F2DF174:
    ctx->pc = 0x7F2DF174u;
    ctx->downcount -= 2;
    // 7F2DF174: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F2DF178:
    ctx->pc = 0x7F2DF178u;
    // 7F2DF178: stw     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF17C:
    ctx->pc = 0x7F2DF17Cu;
    ctx->downcount -= 3;
    // 7F2DF17C: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_7F2DF180:
    ctx->pc = 0x7F2DF180u;
    // 7F2DF180: li      r4, 249
    ctx->gpr[4] = (u32)(s32)(249);

label_7F2DF184:
    ctx->pc = 0x7F2DF184u;
    // 7F2DF184: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2DF188u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2DF188:
    ctx->pc = 0x7F2DF188u;
    ctx->downcount -= 17;
    // 7F2DF188: stw     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF18C:
    ctx->pc = 0x7F2DF18Cu;
    // 7F2DF18C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DF190:
    ctx->pc = 0x7F2DF190u;
    // 7F2DF190: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF194:
    ctx->pc = 0x7F2DF194u;
    // 7F2DF194: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF198:
    ctx->pc = 0x7F2DF198u;
    // 7F2DF198: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DF19C:
    ctx->pc = 0x7F2DF19Cu;
    // 7F2DF19C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF1A0:
    ctx->pc = 0x7F2DF1A0u;
    ctx->downcount -= 20;
    // 7F2DF1A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF1A4:
    ctx->pc = 0x7F2DF1A4u;
    // 7F2DF1A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF1A8:
    ctx->pc = 0x7F2DF1A8u;
    // 7F2DF1A8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2DF1AC:
    ctx->pc = 0x7F2DF1ACu;
    // 7F2DF1AC: li      r5, 360
    ctx->gpr[5] = (u32)(s32)(360);

label_7F2DF1B0:
    ctx->pc = 0x7F2DF1B0u;
    // 7F2DF1B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF1B4:
    ctx->pc = 0x7F2DF1B4u;
    // 7F2DF1B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DF1B8:
    ctx->pc = 0x7F2DF1B8u;
    // 7F2DF1B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DF1BC:
    ctx->pc = 0x7F2DF1BCu;
    // 7F2DF1BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DF1C0:
    ctx->pc = 0x7F2DF1C0u;
    // 7F2DF1C0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DF1C4:
    ctx->pc = 0x7F2DF1C4u;
    // 7F2DF1C4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2DF1C8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2DF1C8:
    ctx->pc = 0x7F2DF1C8u;
    ctx->downcount -= 5;
    // 7F2DF1C8: or.   r31, r3, r3
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

label_7F2DF1CC:
    ctx->pc = 0x7F2DF1CCu;
    // 7F2DF1CC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DF1D0:
    ctx->pc = 0x7F2DF1D0u;
    // 7F2DF1D0: stw     r31, -4828(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4828);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF1D4:
    ctx->pc = 0x7F2DF1D4u;
    // 7F2DF1D4: stw     r30, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2DF1D8:
    ctx->pc = 0x7F2DF1D8u;
    // 7F2DF1D8: bc    12, 2, 0x7F2DF240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF240;
        }
    }

label_7F2DF1DC:
    ctx->pc = 0x7F2DF1DCu;
    ctx->downcount -= 15;
    // 7F2DF1DC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF1E0:
    ctx->pc = 0x7F2DF1E0u;
    // 7F2DF1E0: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DF1E4:
    ctx->pc = 0x7F2DF1E4u;
    // 7F2DF1E4: lis     r5, 32558
    ctx->gpr[5] = ((u32)(s32)(32558) << 16);

label_7F2DF1E8:
    ctx->pc = 0x7F2DF1E8u;
    // 7F2DF1E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DF1EC:
    ctx->pc = 0x7F2DF1ECu;
    // 7F2DF1EC: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F2DF1F0:
    ctx->pc = 0x7F2DF1F0u;
    // 7F2DF1F0: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F2DF1F4:
    ctx->pc = 0x7F2DF1F4u;
    // 7F2DF1F4: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF1F8:
    ctx->pc = 0x7F2DF1F8u;
    // 7F2DF1F8: addi    r0, r6, 32548
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F2DF1FC:
    ctx->pc = 0x7F2DF1FCu;
    // 7F2DF1FC: addi    r4, r4, -5540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5540);

label_7F2DF200:
    ctx->pc = 0x7F2DF200u;
    // 7F2DF200: addi    r5, r5, -4952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4952);

label_7F2DF204:
    ctx->pc = 0x7F2DF204u;
    // 7F2DF204: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DF208:
    ctx->pc = 0x7F2DF208u;
    // 7F2DF208: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DF20C:
    ctx->pc = 0x7F2DF20Cu;
    // 7F2DF20C: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2DF210:
    ctx->pc = 0x7F2DF210u;
    // 7F2DF210: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF214:
    ctx->pc = 0x7F2DF214u;
    // 7F2DF214: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2DF218u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2DF218:
    ctx->pc = 0x7F2DF218u;
    ctx->downcount -= 2;
    // 7F2DF218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF21C:
    ctx->pc = 0x7F2DF21Cu;
    // 7F2DF21C: bl      0x7F2DEEB4
    {
            ctx->lr = 0x7F2DF220u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DEEB4u;
                return;
            }
            goto label_7F2DEEB4;
    }

label_7F2DF220:
    ctx->pc = 0x7F2DF220u;
    ctx->downcount -= 2;
    // 7F2DF220: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF224:
    ctx->pc = 0x7F2DF224u;
    // 7F2DF224: bl      0x7F2DED54
    {
            ctx->lr = 0x7F2DF228u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DED54u;
                return;
            }
            goto label_7F2DED54;
    }

label_7F2DF228:
    ctx->pc = 0x7F2DF228u;
    ctx->downcount -= 2;
    // 7F2DF228: cmpwi   r3, 0
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

label_7F2DF22C:
    ctx->pc = 0x7F2DF22Cu;
    // 7F2DF22C: bc    4, 0, 0x7F2DF240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF240;
        }
    }

label_7F2DF230:
    ctx->pc = 0x7F2DF230u;
    ctx->downcount -= 2;
    // 7F2DF230: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF234:
    ctx->pc = 0x7F2DF234u;
    // 7F2DF234: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DF238u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DF238:
    ctx->pc = 0x7F2DF238u;
    ctx->downcount -= 2;
    // 7F2DF238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF23C:
    ctx->pc = 0x7F2DF23Cu;
    // 7F2DF23C: b       0x7F2DF244
    {
            goto label_7F2DF244;
    }

label_7F2DF240:
    ctx->pc = 0x7F2DF240u;
    ctx->downcount -= 1;
    // 7F2DF240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF244:
    ctx->pc = 0x7F2DF244u;
    ctx->downcount -= 16;
    // 7F2DF244: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DF248:
    ctx->pc = 0x7F2DF248u;
    // 7F2DF248: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF24C:
    ctx->pc = 0x7F2DF24Cu;
    // 7F2DF24C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF250:
    ctx->pc = 0x7F2DF250u;
    // 7F2DF250: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF254:
    ctx->pc = 0x7F2DF254u;
    // 7F2DF254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF258:
    ctx->pc = 0x7F2DF258u;
    ctx->downcount -= 21;
    // 7F2DF258: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF25C:
    ctx->pc = 0x7F2DF25Cu;
    // 7F2DF25C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF260:
    ctx->pc = 0x7F2DF260u;
    // 7F2DF260: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DF264:
    ctx->pc = 0x7F2DF264u;
    // 7F2DF264: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF268:
    ctx->pc = 0x7F2DF268u;
    // 7F2DF268: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DF26C:
    ctx->pc = 0x7F2DF26Cu;
    // 7F2DF26C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DF270:
    ctx->pc = 0x7F2DF270u;
    // 7F2DF270: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DF274:
    ctx->pc = 0x7F2DF274u;
    // 7F2DF274: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DF278:
    ctx->pc = 0x7F2DF278u;
    // 7F2DF278: lha     r6, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DF27C:
    ctx->pc = 0x7F2DF27Cu;
    // 7F2DF27C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF280:
    ctx->pc = 0x7F2DF280u;
    // 7F2DF280: b       0x7F2DF2E4
    {
            goto label_7F2DF2E4;
    }

label_7F2DF284:
    ctx->downcount -= 8;
    // 7F2DF284: addi    r0, r4, 660
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(660);

label_7F2DF288:
    // 7F2DF288: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DF28C:
    ctx->pc = 0x7F2DF28Cu;
    // 7F2DF28C: lwzx    r9, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF290:
    ctx->pc = 0x7F2DF290u;
    // 7F2DF290: lhz     r0, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2DF294:
    ctx->pc = 0x7F2DF294u;
    // 7F2DF294: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2DF298:
    // 7F2DF298: cmpwi   r0, 0
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

label_7F2DF29C:
    // 7F2DF29C: bc    4, 1, 0x7F2DF2DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF2DC;
        }
    }

label_7F2DF2A0:
    ctx->pc = 0x7F2DF2A0u;
    ctx->downcount -= 5;
    // 7F2DF2A0: lwz     r0, 68(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF2A4:
    // 7F2DF2A4: add   r7, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2DF2A8:
    ctx->pc = 0x7F2DF2A8u;
    // 7F2DF2A8: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF2AC:
    // 7F2DF2AC: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF2B0:
    // 7F2DF2B0: bc    12, 2, 0x7F2DF2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF2CC;
        }
    }

label_7F2DF2B4:
    ctx->pc = 0x7F2DF2B4u;
    ctx->downcount -= 3;
    // 7F2DF2B4: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF2B8:
    // 7F2DF2B8: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF2BC:
    // 7F2DF2BC: bc    12, 2, 0x7F2DF2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF2CC;
        }
    }

label_7F2DF2C0:
    ctx->pc = 0x7F2DF2C0u;
    ctx->downcount -= 3;
    // 7F2DF2C0: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF2C4:
    // 7F2DF2C4: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF2C8:
    // 7F2DF2C8: bc    4, 2, 0x7F2DF2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF2D4;
        }
    }

label_7F2DF2CC:
    ctx->downcount -= 2;
    // 7F2DF2CC: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2DF2D0:
    // 7F2DF2D0: b       0x7F2DF328
    {
            goto label_7F2DF328;
    }

label_7F2DF2D4:
    ctx->downcount -= 2;
    // 7F2DF2D4: addi    r5, r5, 36
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(36);

label_7F2DF2D8:
    // 7F2DF2D8: bc    16, 0, 0x7F2DF2A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF2A0u;
                return;
            }
            goto label_7F2DF2A0;
        }
    }

label_7F2DF2DC:
    ctx->downcount -= 2;
    // 7F2DF2DC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F2DF2E0:
    // 7F2DF2E0: addi    r4, r4, 324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(324);

label_7F2DF2E4:
    ctx->downcount -= 2;
    // 7F2DF2E4: cmpw    r8, r6
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF2E8:
    // 7F2DF2E8: bc    12, 0, 0x7F2DF284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF284u;
                return;
            }
            goto label_7F2DF284;
        }
    }

label_7F2DF2EC:
    ctx->pc = 0x7F2DF2ECu;
    ctx->downcount -= 3;
    // 7F2DF2EC: lwz     r0, 388(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF2F0:
    ctx->pc = 0x7F2DF2F0u;
    // 7F2DF2F0: cmplwi  r0, 0x0000
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

label_7F2DF2F4:
    ctx->pc = 0x7F2DF2F4u;
    // 7F2DF2F4: bc    12, 2, 0x7F2DF328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF328;
        }
    }

label_7F2DF2F8:
    ctx->pc = 0x7F2DF2F8u;
    ctx->downcount -= 2;
    // 7F2DF2F8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2DF2FC:
    ctx->pc = 0x7F2DF2FCu;
    // 7F2DF2FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2DF300:
    ctx->downcount -= 4;
    // 7F2DF300: addi    r0, r29, 388
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(388);

label_7F2DF304:
    // 7F2DF304: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF308:
    ctx->pc = 0x7F2DF308u;
    // 7F2DF308: lwzx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF30C:
    // 7F2DF30C: bl      0x7F2DF258
    {
            ctx->lr = 0x7F2DF310u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF258u;
                return;
            }
            goto label_7F2DF258;
    }

label_7F2DF310:
    ctx->downcount -= 2;
    // 7F2DF310: cmplwi  r3, 0x0000
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

label_7F2DF314:
    // 7F2DF314: bc    4, 2, 0x7F2DF328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF328;
        }
    }

label_7F2DF318:
    ctx->downcount -= 4;
    // 7F2DF318: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2DF31C:
    // 7F2DF31C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2DF320:
    // 7F2DF320: cmpwi   r28, 8
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF324:
    // 7F2DF324: bc    12, 0, 0x7F2DF300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF300u;
                return;
            }
            goto label_7F2DF300;
        }
    }

label_7F2DF328:
    ctx->pc = 0x7F2DF328u;
    ctx->downcount -= 16;
    // 7F2DF328: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DF32C:
    ctx->pc = 0x7F2DF32Cu;
    // 7F2DF32C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF330:
    ctx->pc = 0x7F2DF330u;
    // 7F2DF330: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF334:
    ctx->pc = 0x7F2DF334u;
    // 7F2DF334: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DF338:
    ctx->pc = 0x7F2DF338u;
    // 7F2DF338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF33C:
    ctx->pc = 0x7F2DF33Cu;
    ctx->downcount -= 27;
    // 7F2DF33C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF340:
    ctx->pc = 0x7F2DF340u;
    // 7F2DF340: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF344:
    ctx->pc = 0x7F2DF344u;
    // 7F2DF344: lis     r7, 32591
    ctx->gpr[7] = ((u32)(s32)(32591) << 16);

label_7F2DF348:
    ctx->pc = 0x7F2DF348u;
    // 7F2DF348: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DF34C:
    ctx->pc = 0x7F2DF34Cu;
    // 7F2DF34C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF350:
    ctx->pc = 0x7F2DF350u;
    // 7F2DF350: addi    r8, r7, -27320
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-27320);

label_7F2DF354:
    ctx->pc = 0x7F2DF354u;
    // 7F2DF354: lis     r7, 32591
    ctx->gpr[7] = ((u32)(s32)(32591) << 16);

label_7F2DF358:
    ctx->pc = 0x7F2DF358u;
    // 7F2DF358: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DF35C:
    ctx->pc = 0x7F2DF35Cu;
    // 7F2DF35C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2DF360:
    ctx->pc = 0x7F2DF360u;
    // 7F2DF360: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DF364:
    ctx->pc = 0x7F2DF364u;
    // 7F2DF364: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2DF368:
    ctx->pc = 0x7F2DF368u;
    // 7F2DF368: addi    r7, r7, -27304
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-27304);

label_7F2DF36C:
    ctx->pc = 0x7F2DF36Cu;
    // 7F2DF36C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DF370:
    ctx->pc = 0x7F2DF370u;
    // 7F2DF370: lwz     r9, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF374:
    ctx->pc = 0x7F2DF374u;
    // 7F2DF374: lwz     r8, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DF378:
    ctx->pc = 0x7F2DF378u;
    // 7F2DF378: lwz     r11, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DF37C:
    ctx->pc = 0x7F2DF37Cu;
    // 7F2DF37C: b       0x7F2DF3C8
    {
            goto label_7F2DF3C8;
    }

label_7F2DF380:
    ctx->pc = 0x7F2DF380u;
    ctx->downcount -= 4;
    // 7F2DF380: lwzx    r9, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF384:
    ctx->pc = 0x7F2DF384u;
    // 7F2DF384: lwz     r0, 804(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(804);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF388:
    // 7F2DF388: cmpw    r11, r0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF38C:
    // 7F2DF38C: bc    4, 2, 0x7F2DF3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF3C0;
        }
    }

label_7F2DF390:
    ctx->pc = 0x7F2DF390u;
    ctx->downcount -= 7;
    // 7F2DF390: lwz     r6, 816(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(816);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DF394:
    ctx->pc = 0x7F2DF394u;
    // 7F2DF394: lwz     r4, 820(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(820);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DF398:
    ctx->pc = 0x7F2DF398u;
    // 7F2DF398: lwz     r6, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2DF39C:
    ctx->pc = 0x7F2DF39Cu;
    // 7F2DF39C: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F2DF3A0:
    // 7F2DF3A0: cmpwi   r6, 0
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

label_7F2DF3A4:
    // 7F2DF3A4: bc    4, 1, 0x7F2DF3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF3C0;
        }
    }

label_7F2DF3A8:
    ctx->pc = 0x7F2DF3A8u;
    ctx->downcount -= 3;
    // 7F2DF3A8: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF3AC:
    // 7F2DF3AC: cmplw   r0, r3
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

label_7F2DF3B0:
    // 7F2DF3B0: bc    12, 2, 0x7F2DF3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF3D0;
        }
    }

label_7F2DF3B4:
    ctx->downcount -= 3;
    // 7F2DF3B4: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F2DF3B8:
    // 7F2DF3B8: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F2DF3BC:
    // 7F2DF3BC: bc    16, 0, 0x7F2DF3A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF3A8u;
                return;
            }
            goto label_7F2DF3A8;
        }
    }

label_7F2DF3C0:
    ctx->downcount -= 2;
    // 7F2DF3C0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F2DF3C4:
    // 7F2DF3C4: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F2DF3C8:
    ctx->downcount -= 2;
    // 7F2DF3C8: cmpw    r10, r8
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[8]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2DF3CC:
    // 7F2DF3CC: bc    12, 0, 0x7F2DF380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF380u;
                return;
            }
            goto label_7F2DF380;
        }
    }

label_7F2DF3D0:
    ctx->pc = 0x7F2DF3D0u;
    ctx->downcount -= 2;
    // 7F2DF3D0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2DF3D4:
    ctx->pc = 0x7F2DF3D4u;
    // 7F2DF3D4: bl      0x7F2DF258
    {
            ctx->lr = 0x7F2DF3D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF258u;
                return;
            }
            goto label_7F2DF258;
    }

label_7F2DF3D8:
    ctx->pc = 0x7F2DF3D8u;
    ctx->downcount -= 74;
    // 7F2DF3D8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2DF3DC:
    ctx->pc = 0x7F2DF3DCu;
    // 7F2DF3DC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2DF3E0:
    ctx->pc = 0x7F2DF3E0u;
    // 7F2DF3E0: addi    r4, r4, -4820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4820);

label_7F2DF3E4:
    ctx->pc = 0x7F2DF3E4u;
    // 7F2DF3E4: lwz     r0, 29468(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(29468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF3E8:
    ctx->pc = 0x7F2DF3E8u;
    // 7F2DF3E8: lbz     r7, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F2DF3EC:
    ctx->pc = 0x7F2DF3ECu;
    // 7F2DF3EC: addi    r6, r29, 256
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(256);

label_7F2DF3F0:
    ctx->pc = 0x7F2DF3F0u;
    // 7F2DF3F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF3F4:
    ctx->pc = 0x7F2DF3F4u;
    // 7F2DF3F4: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F2DF3F8:
    ctx->pc = 0x7F2DF3F8u;
    // 7F2DF3F8: mulli   r5, r5, 24
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)24);

label_7F2DF3FC:
    ctx->pc = 0x7F2DF3FCu;
    // 7F2DF3FC: stb     r31, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F2DF400:
    ctx->pc = 0x7F2DF400u;
    // 7F2DF400: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF404:
    ctx->pc = 0x7F2DF404u;
    // 7F2DF404: add   r5, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2DF408:
    ctx->pc = 0x7F2DF408u;
    // 7F2DF408: stw     r29, 216(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DF40C:
    ctx->pc = 0x7F2DF40Cu;
    // 7F2DF40C: lbz     r5, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F2DF410:
    ctx->pc = 0x7F2DF410u;
    // 7F2DF410: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F2DF414:
    ctx->pc = 0x7F2DF414u;
    // 7F2DF414: mulli   r5, r5, 24
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)24);

label_7F2DF418:
    ctx->pc = 0x7F2DF418u;
    // 7F2DF418: add   r5, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2DF41C:
    ctx->pc = 0x7F2DF41Cu;
    // 7F2DF41C: stw     r3, 220(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF420:
    ctx->pc = 0x7F2DF420u;
    // 7F2DF420: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2DF424:
    ctx->pc = 0x7F2DF424u;
    // 7F2DF424: lwz     r5, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DF428:
    ctx->pc = 0x7F2DF428u;
    // 7F2DF428: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F2DF42C:
    ctx->pc = 0x7F2DF42Cu;
    // 7F2DF42C: mulli   r3, r3, 24
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F2DF430:
    ctx->pc = 0x7F2DF430u;
    // 7F2DF430: lwz     r5, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DF434:
    ctx->pc = 0x7F2DF434u;
    // 7F2DF434: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DF438:
    ctx->pc = 0x7F2DF438u;
    // 7F2DF438: stw     r5, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DF43C:
    ctx->pc = 0x7F2DF43Cu;
    // 7F2DF43C: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2DF440:
    ctx->pc = 0x7F2DF440u;
    // 7F2DF440: lwz     r5, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DF444:
    ctx->pc = 0x7F2DF444u;
    // 7F2DF444: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F2DF448:
    ctx->pc = 0x7F2DF448u;
    // 7F2DF448: mulli   r3, r3, 24
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F2DF44C:
    ctx->pc = 0x7F2DF44Cu;
    // 7F2DF44C: lwz     r5, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DF450:
    ctx->pc = 0x7F2DF450u;
    // 7F2DF450: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DF454:
    ctx->pc = 0x7F2DF454u;
    // 7F2DF454: stw     r5, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DF458:
    ctx->pc = 0x7F2DF458u;
    // 7F2DF458: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2DF45C:
    ctx->pc = 0x7F2DF45Cu;
    // 7F2DF45C: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F2DF460:
    ctx->pc = 0x7F2DF460u;
    // 7F2DF460: mulli   r3, r3, 24
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F2DF464:
    ctx->pc = 0x7F2DF464u;
    // 7F2DF464: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DF468:
    ctx->pc = 0x7F2DF468u;
    // 7F2DF468: stw     r6, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2DF46C:
    ctx->pc = 0x7F2DF46Cu;
    // 7F2DF46C: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2DF470:
    ctx->pc = 0x7F2DF470u;
    // 7F2DF470: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F2DF474:
    ctx->pc = 0x7F2DF474u;
    // 7F2DF474: mulli   r3, r3, 24
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_7F2DF478:
    ctx->pc = 0x7F2DF478u;
    // 7F2DF478: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2DF47C:
    ctx->pc = 0x7F2DF47Cu;
    // 7F2DF47C: stw     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF480:
    ctx->pc = 0x7F2DF480u;
    // 7F2DF480: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2DF484:
    ctx->pc = 0x7F2DF484u;
    // 7F2DF484: sth     r30, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F2DF488:
    ctx->pc = 0x7F2DF488u;
    // 7F2DF488: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2DF48C:
    ctx->pc = 0x7F2DF48Cu;
    // 7F2DF48C: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2DF490:
    ctx->pc = 0x7F2DF490u;
    // 7F2DF490: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DF494:
    ctx->pc = 0x7F2DF494u;
    // 7F2DF494: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF498:
    ctx->pc = 0x7F2DF498u;
    // 7F2DF498: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF49C:
    ctx->pc = 0x7F2DF49Cu;
    // 7F2DF49C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DF4A0:
    ctx->pc = 0x7F2DF4A0u;
    // 7F2DF4A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF4A4:
    ctx->pc = 0x7F2DF4A4u;
    ctx->downcount -= 8;
    // 7F2DF4A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF4A8:
    ctx->pc = 0x7F2DF4A8u;
    // 7F2DF4A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF4AC:
    ctx->pc = 0x7F2DF4ACu;
    // 7F2DF4AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DF4B0:
    ctx->pc = 0x7F2DF4B0u;
    // 7F2DF4B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DF4B4:
    ctx->pc = 0x7F2DF4B4u;
    // 7F2DF4B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF4B8:
    ctx->pc = 0x7F2DF4B8u;
    // 7F2DF4B8: addi    r3, r3, -4820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4820);

label_7F2DF4BC:
    ctx->pc = 0x7F2DF4BCu;
    // 7F2DF4BC: li      r5, 456
    ctx->gpr[5] = (u32)(s32)(456);

label_7F2DF4C0:
    ctx->pc = 0x7F2DF4C0u;
    // 7F2DF4C0: bl      0x800050B4
    {
            ctx->lr = 0x7F2DF4C4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F2DF4C4:
    ctx->pc = 0x7F2DF4C4u;
    ctx->downcount -= 5;
    // 7F2DF4C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF4C8:
    ctx->pc = 0x7F2DF4C8u;
    // 7F2DF4C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF4CC:
    ctx->pc = 0x7F2DF4CCu;
    // 7F2DF4CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF4D0:
    ctx->pc = 0x7F2DF4D0u;
    // 7F2DF4D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF4D4:
    ctx->pc = 0x7F2DF4D4u;
    ctx->downcount -= 5;
    // 7F2DF4D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2DF4D8:
    ctx->pc = 0x7F2DF4D8u;
    // 7F2DF4D8: addi    r3, r3, -4828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F2DF4DC:
    ctx->pc = 0x7F2DF4DCu;
    // 7F2DF4DC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF4E0:
    ctx->pc = 0x7F2DF4E0u;
    // 7F2DF4E0: cmplwi  r3, 0x0000
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

label_7F2DF4E4:
    ctx->pc = 0x7F2DF4E4u;
    // 7F2DF4E4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF4E8:
    ctx->pc = 0x7F2DF4E8u;
    ctx->downcount -= 3;
    // 7F2DF4E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DF4EC:
    ctx->pc = 0x7F2DF4ECu;
    // 7F2DF4EC: stw     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF4F0:
    ctx->pc = 0x7F2DF4F0u;
    // 7F2DF4F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF4F4:
    ctx->pc = 0x7F2DF4F4u;
    ctx->downcount -= 11;
    // 7F2DF4F4: stwu     r1, -528(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-528);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF4F8:
    ctx->pc = 0x7F2DF4F8u;
    // 7F2DF4F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF4FC:
    ctx->pc = 0x7F2DF4FCu;
    // 7F2DF4FC: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F2DF500:
    ctx->pc = 0x7F2DF500u;
    // 7F2DF500: li      r5, 200
    ctx->gpr[5] = (u32)(s32)(200);

label_7F2DF504:
    ctx->pc = 0x7F2DF504u;
    // 7F2DF504: stw     r0, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF508:
    ctx->pc = 0x7F2DF508u;
    // 7F2DF508: li      r6, 200
    ctx->gpr[6] = (u32)(s32)(200);

label_7F2DF50C:
    ctx->pc = 0x7F2DF50Cu;
    // 7F2DF50C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DF510:
    ctx->pc = 0x7F2DF510u;
    // 7F2DF510: stw     r31, 524(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF514:
    ctx->pc = 0x7F2DF514u;
    // 7F2DF514: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DF518:
    ctx->pc = 0x7F2DF518u;
    // 7F2DF518: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF51C:
    ctx->pc = 0x7F2DF51Cu;
    // 7F2DF51C: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F2DF520u;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F2DF520:
    ctx->pc = 0x7F2DF520u;
    ctx->downcount -= 5;
    // 7F2DF520: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF524:
    ctx->pc = 0x7F2DF524u;
    // 7F2DF524: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F2DF528:
    ctx->pc = 0x7F2DF528u;
    // 7F2DF528: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F2DF52C:
    ctx->pc = 0x7F2DF52Cu;
    // 7F2DF52C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2DF530:
    ctx->pc = 0x7F2DF530u;
    // 7F2DF530: bl      0x7F0B9990
    {
            ctx->lr = 0x7F2DF534u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F2DF534:
    ctx->pc = 0x7F2DF534u;
    ctx->downcount -= 3;
    // 7F2DF534: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F2DF538:
    ctx->pc = 0x7F2DF538u;
    // 7F2DF538: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DF53C:
    ctx->pc = 0x7F2DF53Cu;
    // 7F2DF53C: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F2DF540u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F2DF540:
    ctx->pc = 0x7F2DF540u;
    ctx->downcount -= 4;
    // 7F2DF540: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2DF544:
    ctx->pc = 0x7F2DF544u;
    // 7F2DF544: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF548:
    ctx->pc = 0x7F2DF548u;
    // 7F2DF548: addi    r4, r4, 25896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25896);

label_7F2DF54C:
    ctx->pc = 0x7F2DF54Cu;
    // 7F2DF54C: bl      0x80014AB0
    {
            ctx->lr = 0x7F2DF550u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2DF550:
    ctx->pc = 0x7F2DF550u;
    ctx->downcount -= 3;
    // 7F2DF550: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF554:
    ctx->pc = 0x7F2DF554u;
    // 7F2DF554: addi    r4, r31, 552
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(552);

label_7F2DF558:
    ctx->pc = 0x7F2DF558u;
    // 7F2DF558: bl      0x80014A40
    {
            ctx->lr = 0x7F2DF55Cu;
            ctx->pc = 0x80014A40u;
            return;
    }

label_7F2DF55C:
    ctx->pc = 0x7F2DF55Cu;
    ctx->downcount -= 52;
    // 7F2DF55C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F2DF560:
    ctx->pc = 0x7F2DF560u;
    // 7F2DF560: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_7F2DF564:
    ctx->pc = 0x7F2DF564u;
    // 7F2DF564: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F2DF568:
    ctx->pc = 0x7F2DF568u;
    // 7F2DF568: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2DF56C:
    ctx->pc = 0x7F2DF56Cu;
    // 7F2DF56C: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2DF570:
    ctx->pc = 0x7F2DF570u;
    // 7F2DF570: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F2DF574:
    ctx->pc = 0x7F2DF574u;
    // 7F2DF574: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2DF578:
    ctx->pc = 0x7F2DF578u;
    // 7F2DF578: cmpwi   r0, 50
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

label_7F2DF57C:
    ctx->pc = 0x7F2DF57Cu;
    // 7F2DF57C: bc    4, 0, 0x7F2DF5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF5A8;
        }
    }

label_7F2DF580:
    ctx->pc = 0x7F2DF580u;
    ctx->downcount -= 2;
    // 7F2DF580: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF584:
    ctx->pc = 0x7F2DF584u;
    // 7F2DF584: bl      0x7F0B9934
    {
            ctx->lr = 0x7F2DF588u;
            ctx->pc = 0x7F0B9934u;
            return;
    }

label_7F2DF588:
    ctx->pc = 0x7F2DF588u;
    ctx->downcount -= 5;
    // 7F2DF588: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF58C:
    ctx->pc = 0x7F2DF58Cu;
    // 7F2DF58C: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F2DF590:
    ctx->pc = 0x7F2DF590u;
    // 7F2DF590: li      r5, 224
    ctx->gpr[5] = (u32)(s32)(224);

label_7F2DF594:
    ctx->pc = 0x7F2DF594u;
    // 7F2DF594: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2DF598:
    ctx->pc = 0x7F2DF598u;
    // 7F2DF598: bl      0x7F0B9990
    {
            ctx->lr = 0x7F2DF59Cu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F2DF59C:
    ctx->pc = 0x7F2DF59Cu;
    ctx->downcount -= 3;
    // 7F2DF59C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF5A0:
    ctx->pc = 0x7F2DF5A0u;
    // 7F2DF5A0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DF5A4:
    ctx->pc = 0x7F2DF5A4u;
    // 7F2DF5A4: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F2DF5A8u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F2DF5A8:
    ctx->pc = 0x7F2DF5A8u;
    ctx->downcount -= 5;
    // 7F2DF5A8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2DF5AC:
    ctx->pc = 0x7F2DF5ACu;
    // 7F2DF5AC: addi    r3, r3, 14256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F2DF5B0:
    ctx->pc = 0x7F2DF5B0u;
    // 7F2DF5B0: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF5B4:
    ctx->pc = 0x7F2DF5B4u;
    // 7F2DF5B4: rlwinm. r0, r0, 0, 24, 24
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

label_7F2DF5B8:
    ctx->pc = 0x7F2DF5B8u;
    // 7F2DF5B8: bc    12, 2, 0x7F2DF5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF5FC;
        }
    }

label_7F2DF5BC:
    ctx->pc = 0x7F2DF5BCu;
    ctx->downcount -= 4;
    // 7F2DF5BC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_7F2DF5C0:
    ctx->pc = 0x7F2DF5C0u;
    // 7F2DF5C0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2DF5C4:
    ctx->pc = 0x7F2DF5C4u;
    // 7F2DF5C4: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F2DF5C8:
    ctx->pc = 0x7F2DF5C8u;
    // 7F2DF5C8: bl      0x7F011698
    {
            ctx->lr = 0x7F2DF5CCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2DF5CC:
    ctx->pc = 0x7F2DF5CCu;
    ctx->downcount -= 3;
    // 7F2DF5CC: lwz     r3, 544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF5D0:
    ctx->pc = 0x7F2DF5D0u;
    // 7F2DF5D0: cmpwi   r3, 0
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

label_7F2DF5D4:
    ctx->pc = 0x7F2DF5D4u;
    // 7F2DF5D4: bc    12, 2, 0x7F2DF5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF5E0;
        }
    }

label_7F2DF5D8:
    ctx->pc = 0x7F2DF5D8u;
    ctx->downcount -= 2;
    // 7F2DF5D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DF5DC:
    ctx->pc = 0x7F2DF5DCu;
    // 7F2DF5DC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2DF5E0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2DF5E0:
    ctx->pc = 0x7F2DF5E0u;
    ctx->downcount -= 3;
    // 7F2DF5E0: lwz     r3, 548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF5E4:
    ctx->pc = 0x7F2DF5E4u;
    // 7F2DF5E4: cmpwi   r3, 0
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

label_7F2DF5E8:
    ctx->pc = 0x7F2DF5E8u;
    // 7F2DF5E8: bc    12, 2, 0x7F2DF5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF5F4;
        }
    }

label_7F2DF5EC:
    ctx->pc = 0x7F2DF5ECu;
    ctx->downcount -= 2;
    // 7F2DF5EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2DF5F0:
    ctx->pc = 0x7F2DF5F0u;
    // 7F2DF5F0: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2DF5F4u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2DF5F4:
    ctx->pc = 0x7F2DF5F4u;
    ctx->downcount -= 2;
    // 7F2DF5F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF5F8:
    ctx->pc = 0x7F2DF5F8u;
    // 7F2DF5F8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DF5FCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DF5FC:
    ctx->pc = 0x7F2DF5FCu;
    ctx->downcount -= 6;
    // 7F2DF5FC: lwz     r0, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF600:
    ctx->pc = 0x7F2DF600u;
    // 7F2DF600: lwz     r31, 524(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(524);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DF604:
    ctx->pc = 0x7F2DF604u;
    // 7F2DF604: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF608:
    ctx->pc = 0x7F2DF608u;
    // 7F2DF608: addi    r1, r1, 528
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(528);

label_7F2DF60C:
    ctx->pc = 0x7F2DF60Cu;
    // 7F2DF60C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF610:
    ctx->pc = 0x7F2DF610u;
    ctx->downcount -= 9;
    // 7F2DF610: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF614:
    ctx->pc = 0x7F2DF614u;
    // 7F2DF614: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF618:
    ctx->pc = 0x7F2DF618u;
    // 7F2DF618: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF61C:
    ctx->pc = 0x7F2DF61Cu;
    // 7F2DF61C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DF620:
    ctx->pc = 0x7F2DF620u;
    // 7F2DF620: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF624:
    ctx->pc = 0x7F2DF624u;
    // 7F2DF624: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DF628:
    ctx->pc = 0x7F2DF628u;
    // 7F2DF628: stw     r0, 544(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF62C:
    ctx->pc = 0x7F2DF62Cu;
    // 7F2DF62C: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2DF630:
    ctx->pc = 0x7F2DF630u;
    // 7F2DF630: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF634u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF634:
    ctx->pc = 0x7F2DF634u;
    ctx->downcount -= 2;
    // 7F2DF634: cmplwi  r3, 0x0000
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

label_7F2DF638:
    ctx->pc = 0x7F2DF638u;
    // 7F2DF638: bc    4, 2, 0x7F2DF644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF644;
        }
    }

label_7F2DF63C:
    ctx->pc = 0x7F2DF63Cu;
    ctx->downcount -= 2;
    // 7F2DF63C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2DF640:
    ctx->pc = 0x7F2DF640u;
    // 7F2DF640: b       0x7F2DF6BC
    {
            goto label_7F2DF6BC;
    }

label_7F2DF644:
    ctx->pc = 0x7F2DF644u;
    ctx->downcount -= 1;
    // 7F2DF644: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F2DF648u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F2DF648:
    ctx->pc = 0x7F2DF648u;
    ctx->downcount -= 3;
    // 7F2DF648: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DF64C:
    ctx->pc = 0x7F2DF64Cu;
    // 7F2DF64C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F2DF650:
    ctx->pc = 0x7F2DF650u;
    // 7F2DF650: bl      0x80014AB0
    {
            ctx->lr = 0x7F2DF654u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2DF654:
    ctx->pc = 0x7F2DF654u;
    ctx->downcount -= 2;
    // 7F2DF654: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2DF658:
    ctx->pc = 0x7F2DF658u;
    // 7F2DF658: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF65Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF65C:
    ctx->pc = 0x7F2DF65Cu;
    ctx->downcount -= 2;
    // 7F2DF65C: cmplwi  r3, 0x0000
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

label_7F2DF660:
    ctx->pc = 0x7F2DF660u;
    // 7F2DF660: bc    12, 2, 0x7F2DF66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF66C;
        }
    }

label_7F2DF664:
    ctx->pc = 0x7F2DF664u;
    ctx->downcount -= 1;
    // 7F2DF664: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF668u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF668:
    ctx->pc = 0x7F2DF668u;
    ctx->downcount -= 1;
    // 7F2DF668: stw     r3, 544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF66C:
    ctx->pc = 0x7F2DF66Cu;
    ctx->downcount -= 2;
    // 7F2DF66C: li      r3, 113
    ctx->gpr[3] = (u32)(s32)(113);

label_7F2DF670:
    ctx->pc = 0x7F2DF670u;
    // 7F2DF670: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF674u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF674:
    ctx->pc = 0x7F2DF674u;
    ctx->downcount -= 2;
    // 7F2DF674: cmplwi  r3, 0x0000
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

label_7F2DF678:
    ctx->pc = 0x7F2DF678u;
    // 7F2DF678: bc    12, 2, 0x7F2DF684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF684;
        }
    }

label_7F2DF67C:
    ctx->pc = 0x7F2DF67Cu;
    ctx->downcount -= 1;
    // 7F2DF67C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF680u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF680:
    ctx->pc = 0x7F2DF680u;
    ctx->downcount -= 1;
    // 7F2DF680: stw     r3, 548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF684:
    ctx->pc = 0x7F2DF684u;
    ctx->downcount -= 2;
    // 7F2DF684: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F2DF688:
    ctx->pc = 0x7F2DF688u;
    // 7F2DF688: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF68Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF68C:
    ctx->pc = 0x7F2DF68Cu;
    ctx->downcount -= 2;
    // 7F2DF68C: cmplwi  r3, 0x0000
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

label_7F2DF690:
    ctx->pc = 0x7F2DF690u;
    // 7F2DF690: bc    4, 2, 0x7F2DF6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF6A8;
        }
    }

label_7F2DF694:
    ctx->pc = 0x7F2DF694u;
    ctx->downcount -= 4;
    // 7F2DF694: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2DF698:
    ctx->pc = 0x7F2DF698u;
    // 7F2DF698: addi    r3, r31, 552
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(552);

label_7F2DF69C:
    ctx->pc = 0x7F2DF69Cu;
    // 7F2DF69C: addi    r4, r4, 25904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25904);

label_7F2DF6A0:
    ctx->pc = 0x7F2DF6A0u;
    // 7F2DF6A0: bl      0x80014AB0
    {
            ctx->lr = 0x7F2DF6A4u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2DF6A4:
    ctx->pc = 0x7F2DF6A4u;
    ctx->downcount -= 1;
    // 7F2DF6A4: b       0x7F2DF6B8
    {
            goto label_7F2DF6B8;
    }

label_7F2DF6A8:
    ctx->pc = 0x7F2DF6A8u;
    ctx->downcount -= 4;
    // 7F2DF6A8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2DF6AC:
    ctx->pc = 0x7F2DF6ACu;
    // 7F2DF6AC: addi    r3, r31, 552
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(552);

label_7F2DF6B0:
    ctx->pc = 0x7F2DF6B0u;
    // 7F2DF6B0: addi    r4, r4, 25908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25908);

label_7F2DF6B4:
    ctx->pc = 0x7F2DF6B4u;
    // 7F2DF6B4: bl      0x80014AB0
    {
            ctx->lr = 0x7F2DF6B8u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2DF6B8:
    ctx->pc = 0x7F2DF6B8u;
    ctx->downcount -= 1;
    // 7F2DF6B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF6BC:
    ctx->pc = 0x7F2DF6BCu;
    ctx->downcount -= 6;
    // 7F2DF6BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF6C0:
    ctx->pc = 0x7F2DF6C0u;
    // 7F2DF6C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DF6C4:
    ctx->pc = 0x7F2DF6C4u;
    // 7F2DF6C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF6C8:
    ctx->pc = 0x7F2DF6C8u;
    // 7F2DF6C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF6CC:
    ctx->pc = 0x7F2DF6CCu;
    // 7F2DF6CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF6D0:
    ctx->pc = 0x7F2DF6D0u;
    ctx->downcount -= 9;
    // 7F2DF6D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF6D4:
    ctx->pc = 0x7F2DF6D4u;
    // 7F2DF6D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF6D8:
    ctx->pc = 0x7F2DF6D8u;
    // 7F2DF6D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2DF6DC:
    ctx->pc = 0x7F2DF6DCu;
    // 7F2DF6DC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2DF6E0:
    ctx->pc = 0x7F2DF6E0u;
    // 7F2DF6E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF6E4:
    ctx->pc = 0x7F2DF6E4u;
    // 7F2DF6E4: li      r5, 1064
    ctx->gpr[5] = (u32)(s32)(1064);

label_7F2DF6E8:
    ctx->pc = 0x7F2DF6E8u;
    // 7F2DF6E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DF6EC:
    ctx->pc = 0x7F2DF6ECu;
    // 7F2DF6EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF6F0:
    ctx->pc = 0x7F2DF6F0u;
    // 7F2DF6F0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2DF6F4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2DF6F4:
    ctx->pc = 0x7F2DF6F4u;
    ctx->downcount -= 2;
    // 7F2DF6F4: or.   r31, r3, r3
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

label_7F2DF6F8:
    ctx->pc = 0x7F2DF6F8u;
    // 7F2DF6F8: bc    12, 2, 0x7F2DF72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF72C;
        }
    }

label_7F2DF6FC:
    ctx->pc = 0x7F2DF6FCu;
    ctx->downcount -= 4;
    // 7F2DF6FC: lis     r4, 32558
    ctx->gpr[4] = ((u32)(s32)(32558) << 16);

label_7F2DF700:
    ctx->pc = 0x7F2DF700u;
    // 7F2DF700: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DF704:
    ctx->pc = 0x7F2DF704u;
    // 7F2DF704: addi    r4, r4, -2828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2828);

label_7F2DF708:
    ctx->pc = 0x7F2DF708u;
    // 7F2DF708: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2DF70Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2DF70C:
    ctx->pc = 0x7F2DF70Cu;
    ctx->downcount -= 2;
    // 7F2DF70C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF710:
    ctx->pc = 0x7F2DF710u;
    // 7F2DF710: bl      0x7F2DF610
    {
            ctx->lr = 0x7F2DF714u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF610u;
                return;
            }
            goto label_7F2DF610;
    }

label_7F2DF714:
    ctx->pc = 0x7F2DF714u;
    ctx->downcount -= 2;
    // 7F2DF714: cmpwi   r3, 0
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

label_7F2DF718:
    ctx->pc = 0x7F2DF718u;
    // 7F2DF718: bc    4, 0, 0x7F2DF72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF72C;
        }
    }

label_7F2DF71C:
    ctx->pc = 0x7F2DF71Cu;
    ctx->downcount -= 2;
    // 7F2DF71C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF720:
    ctx->pc = 0x7F2DF720u;
    // 7F2DF720: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2DF724u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2DF724:
    ctx->pc = 0x7F2DF724u;
    ctx->downcount -= 2;
    // 7F2DF724: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF728:
    ctx->pc = 0x7F2DF728u;
    // 7F2DF728: b       0x7F2DF730
    {
            goto label_7F2DF730;
    }

label_7F2DF72C:
    ctx->pc = 0x7F2DF72Cu;
    ctx->downcount -= 1;
    // 7F2DF72C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF730:
    ctx->pc = 0x7F2DF730u;
    ctx->downcount -= 6;
    // 7F2DF730: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF734:
    ctx->pc = 0x7F2DF734u;
    // 7F2DF734: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DF738:
    ctx->pc = 0x7F2DF738u;
    // 7F2DF738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF73C:
    ctx->pc = 0x7F2DF73Cu;
    // 7F2DF73C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF740:
    ctx->pc = 0x7F2DF740u;
    // 7F2DF740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF744:
    ctx->pc = 0x7F2DF744u;
    ctx->downcount -= 9;
    // 7F2DF744: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF748:
    ctx->pc = 0x7F2DF748u;
    // 7F2DF748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF74C:
    ctx->pc = 0x7F2DF74Cu;
    // 7F2DF74C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2DF750:
    ctx->pc = 0x7F2DF750u;
    // 7F2DF750: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF754:
    ctx->pc = 0x7F2DF754u;
    // 7F2DF754: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2DF758:
    ctx->pc = 0x7F2DF758u;
    // 7F2DF758: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF75C:
    ctx->pc = 0x7F2DF75Cu;
    // 7F2DF75C: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DF760:
    ctx->pc = 0x7F2DF760u;
    // 7F2DF760: rlwinm. r0, r0, 0, 31, 31
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

label_7F2DF764:
    ctx->pc = 0x7F2DF764u;
    // 7F2DF764: bc    12, 2, 0x7F2DF770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF770;
        }
    }

label_7F2DF768:
    ctx->pc = 0x7F2DF768u;
    ctx->downcount -= 2;
    // 7F2DF768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DF76C:
    ctx->pc = 0x7F2DF76Cu;
    // 7F2DF76C: b       0x7F2DF778
    {
            goto label_7F2DF778;
    }

label_7F2DF770:
    ctx->pc = 0x7F2DF770u;
    ctx->downcount -= 1;
    // 7F2DF770: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2DF774u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2DF774:
    ctx->pc = 0x7F2DF774u;
    ctx->downcount -= 1;
    // 7F2DF774: bl      0x7F3CA8D8
    {
            ctx->lr = 0x7F2DF778u;
            ctx->pc = 0x7F3CA8D8u;
            return;
    }

label_7F2DF778:
    ctx->pc = 0x7F2DF778u;
    ctx->downcount -= 5;
    // 7F2DF778: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF77C:
    ctx->pc = 0x7F2DF77Cu;
    // 7F2DF77C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF780:
    ctx->pc = 0x7F2DF780u;
    // 7F2DF780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF784:
    ctx->pc = 0x7F2DF784u;
    // 7F2DF784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF788:
    ctx->pc = 0x7F2DF788u;
    ctx->downcount -= 11;
    // 7F2DF788: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF78C:
    ctx->pc = 0x7F2DF78Cu;
    // 7F2DF78C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF790:
    ctx->pc = 0x7F2DF790u;
    // 7F2DF790: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2DF794:
    ctx->pc = 0x7F2DF794u;
    // 7F2DF794: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF798:
    ctx->pc = 0x7F2DF798u;
    // 7F2DF798: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF79C:
    ctx->pc = 0x7F2DF79Cu;
    // 7F2DF79C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF7A0:
    ctx->pc = 0x7F2DF7A0u;
    // 7F2DF7A0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2DF7A4:
    ctx->pc = 0x7F2DF7A4u;
    // 7F2DF7A4: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DF7A8:
    ctx->pc = 0x7F2DF7A8u;
    // 7F2DF7A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF7AC:
    ctx->pc = 0x7F2DF7ACu;
    // 7F2DF7AC: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DF7B0:
    ctx->pc = 0x7F2DF7B0u;
    // 7F2DF7B0: bl      0x7F3C9494
    {
            ctx->lr = 0x7F2DF7B4u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F2DF7B4:
    ctx->pc = 0x7F2DF7B4u;
    ctx->downcount -= 5;
    // 7F2DF7B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF7B8:
    ctx->pc = 0x7F2DF7B8u;
    // 7F2DF7B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF7BC:
    ctx->pc = 0x7F2DF7BCu;
    // 7F2DF7BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DF7C0:
    ctx->pc = 0x7F2DF7C0u;
    // 7F2DF7C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF7C4:
    ctx->pc = 0x7F2DF7C4u;
    ctx->downcount -= 6;
    // 7F2DF7C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF7C8:
    ctx->pc = 0x7F2DF7C8u;
    // 7F2DF7C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF7CC:
    ctx->pc = 0x7F2DF7CCu;
    // 7F2DF7CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF7D0:
    ctx->pc = 0x7F2DF7D0u;
    // 7F2DF7D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF7D4:
    ctx->pc = 0x7F2DF7D4u;
    // 7F2DF7D4: lwz     r3, 656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF7D8:
    ctx->pc = 0x7F2DF7D8u;
    // 7F2DF7D8: bl      0x7F3C9624
    {
            ctx->lr = 0x7F2DF7DCu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F2DF7DC:
    ctx->pc = 0x7F2DF7DCu;
    ctx->downcount -= 4;
    // 7F2DF7DC: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F2DF7E0:
    ctx->pc = 0x7F2DF7E0u;
    // 7F2DF7E0: cmpwi   r3, 0
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

label_7F2DF7E4:
    ctx->pc = 0x7F2DF7E4u;
    // 7F2DF7E4: bc    4, 1, 0x7F2DF824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF824;
        }
    }

label_7F2DF7E8:
    ctx->pc = 0x7F2DF7E8u;
    ctx->downcount -= 5;
    // 7F2DF7E8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF7EC:
    ctx->pc = 0x7F2DF7ECu;
    // 7F2DF7EC: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF7F0:
    ctx->pc = 0x7F2DF7F0u;
    // 7F2DF7F0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF7F4:
    // 7F2DF7F4: cmpwi   r3, 1
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

label_7F2DF7F8:
    // 7F2DF7F8: bc    12, 2, 0x7F2DF828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF828;
        }
    }

label_7F2DF7FC:
    ctx->downcount -= 1;
    // 7F2DF7FC: bc    4, 0, 0x7F2DF814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF814;
        }
    }

label_7F2DF800:
    ctx->downcount -= 2;
    // 7F2DF800: cmpwi   r3, 0
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

label_7F2DF804:
    // 7F2DF804: bc    4, 0, 0x7F2DF828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF828;
        }
    }

label_7F2DF808:
    ctx->downcount -= 1;
    // 7F2DF808: b       0x7F2DF814
    {
            goto label_7F2DF814;
    }

label_7F2DF80C:
    ctx->downcount -= 1;
    // 7F2DF80C: b       0x7F2DF828
    {
            goto label_7F2DF828;
    }

label_7F2DF810:
    ctx->downcount -= 1;
    // 7F2DF810: b       0x7F2DF828
    {
            goto label_7F2DF828;
    }

label_7F2DF814:
    ctx->pc = 0x7F2DF814u;
    ctx->downcount -= 4;
    // 7F2DF814: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DF818:
    // 7F2DF818: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F2DF81C:
    ctx->pc = 0x7F2DF81Cu;
    // 7F2DF81C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF820:
    // 7F2DF820: bc    16, 0, 0x7F2DF7E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF7E8u;
                return;
            }
            goto label_7F2DF7E8;
        }
    }

label_7F2DF824:
    ctx->pc = 0x7F2DF824u;
    ctx->downcount -= 1;
    // 7F2DF824: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2DF828:
    ctx->pc = 0x7F2DF828u;
    ctx->downcount -= 5;
    // 7F2DF828: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF82C:
    ctx->pc = 0x7F2DF82Cu;
    // 7F2DF82C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF830:
    ctx->pc = 0x7F2DF830u;
    // 7F2DF830: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2DF834:
    ctx->pc = 0x7F2DF834u;
    // 7F2DF834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF838:
    ctx->pc = 0x7F2DF838u;
    ctx->downcount -= 19;
    // 7F2DF838: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF83C:
    ctx->pc = 0x7F2DF83Cu;
    // 7F2DF83C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF840:
    ctx->pc = 0x7F2DF840u;
    // 7F2DF840: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF844:
    ctx->pc = 0x7F2DF844u;
    // 7F2DF844: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DF848:
    ctx->pc = 0x7F2DF848u;
    // 7F2DF848: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2DF84C:
    ctx->pc = 0x7F2DF84Cu;
    // 7F2DF84C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2DF850:
    ctx->pc = 0x7F2DF850u;
    // 7F2DF850: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2DF854:
    ctx->pc = 0x7F2DF854u;
    // 7F2DF854: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2DF858:
    ctx->pc = 0x7F2DF858u;
    // 7F2DF858: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2DF85Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2DF85C:
    ctx->pc = 0x7F2DF85Cu;
    ctx->downcount -= 2;
    // 7F2DF85C: cmplwi  r3, 0x0000
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

label_7F2DF860:
    ctx->pc = 0x7F2DF860u;
    // 7F2DF860: bc    12, 2, 0x7F2DF874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DF874;
        }
    }

label_7F2DF864:
    ctx->pc = 0x7F2DF864u;
    ctx->downcount -= 1;
    // 7F2DF864: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2DF868u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2DF868:
    ctx->pc = 0x7F2DF868u;
    ctx->downcount -= 2;
    // 7F2DF868: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DF86C:
    ctx->pc = 0x7F2DF86Cu;
    // 7F2DF86C: bl      0x7F3C6904
    {
            ctx->lr = 0x7F2DF870u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F2DF870:
    ctx->pc = 0x7F2DF870u;
    ctx->downcount -= 1;
    // 7F2DF870: b       0x7F2DF8D4
    {
            goto label_7F2DF8D4;
    }

label_7F2DF874:
    ctx->pc = 0x7F2DF874u;
    ctx->downcount -= 24;
    // 7F2DF874: extsh r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_7F2DF878:
    ctx->pc = 0x7F2DF878u;
    // 7F2DF878: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F2DF87C:
    ctx->pc = 0x7F2DF87Cu;
    // 7F2DF87C: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DF880:
    ctx->pc = 0x7F2DF880u;
    // 7F2DF880: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2DF884:
    ctx->pc = 0x7F2DF884u;
    // 7F2DF884: extsh r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F2DF888:
    ctx->pc = 0x7F2DF888u;
    // 7F2DF888: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF88C:
    ctx->pc = 0x7F2DF88Cu;
    // 7F2DF88C: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DF890:
    ctx->pc = 0x7F2DF890u;
    // 7F2DF890: lfd     f3, 29480(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF890u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(29480);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DF894:
    ctx->pc = 0x7F2DF894u;
    // 7F2DF894: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DF898:
    ctx->pc = 0x7F2DF898u;
    // 7F2DF898: extsh r0, r30
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F2DF89C:
    ctx->pc = 0x7F2DF89Cu;
    // 7F2DF89C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DF8A0:
    ctx->pc = 0x7F2DF8A0u;
    // 7F2DF8A0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DF8A4:
    ctx->pc = 0x7F2DF8A4u;
    // 7F2DF8A4: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DF8A8:
    ctx->pc = 0x7F2DF8A8u;
    // 7F2DF8A8: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8A8u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F2DF8AC:
    ctx->pc = 0x7F2DF8ACu;
    // 7F2DF8AC: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DF8B0:
    ctx->pc = 0x7F2DF8B0u;
    // 7F2DF8B0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DF8B4:
    ctx->pc = 0x7F2DF8B4u;
    // 7F2DF8B4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF8B8:
    ctx->pc = 0x7F2DF8B8u;
    // 7F2DF8B8: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8B8u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F2DF8BC:
    ctx->pc = 0x7F2DF8BCu;
    // 7F2DF8BC: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DF8C0:
    ctx->pc = 0x7F2DF8C0u;
    // 7F2DF8C0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DF8C4:
    ctx->pc = 0x7F2DF8C4u;
    // 7F2DF8C4: stfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2DF8C8:
    ctx->pc = 0x7F2DF8C8u;
    // 7F2DF8C8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8C8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2DF8CC:
    ctx->pc = 0x7F2DF8CCu;
    // 7F2DF8CC: stfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DF8D0:
    ctx->pc = 0x7F2DF8D0u;
    // 7F2DF8D0: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF8D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DF8D4:
    ctx->pc = 0x7F2DF8D4u;
    ctx->downcount -= 16;
    // 7F2DF8D4: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DF8D8:
    ctx->pc = 0x7F2DF8D8u;
    // 7F2DF8D8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DF8DC:
    ctx->pc = 0x7F2DF8DCu;
    // 7F2DF8DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DF8E0:
    ctx->pc = 0x7F2DF8E0u;
    // 7F2DF8E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2DF8E4:
    ctx->pc = 0x7F2DF8E4u;
    // 7F2DF8E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DF8E8:
    ctx->pc = 0x7F2DF8E8u;
    ctx->downcount -= 92;
    // 7F2DF8E8: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DF8EC:
    ctx->pc = 0x7F2DF8ECu;
    // 7F2DF8EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DF8F0:
    ctx->pc = 0x7F2DF8F0u;
    // 7F2DF8F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DF8F4:
    ctx->pc = 0x7F2DF8F4u;
    // 7F2DF8F4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F2DF8F8:
    ctx->pc = 0x7F2DF8F8u;
    // 7F2DF8F8: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DF8FC:
    ctx->pc = 0x7F2DF8FCu;
    // 7F2DF8FC: addi    r6, r4, 29488
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(29488);

label_7F2DF900:
    ctx->pc = 0x7F2DF900u;
    // 7F2DF900: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF900u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DF904:
    ctx->pc = 0x7F2DF904u;
    // 7F2DF904: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DF908:
    ctx->pc = 0x7F2DF908u;
    // 7F2DF908: stw     r31, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF90C:
    ctx->pc = 0x7F2DF90Cu;
    // 7F2DF90C: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2DF910:
    ctx->pc = 0x7F2DF910u;
    // 7F2DF910: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DF914:
    ctx->pc = 0x7F2DF914u;
    // 7F2DF914: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2DF918:
    ctx->pc = 0x7F2DF918u;
    // 7F2DF918: lwzu     r12, 12816(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12816);
        ctx->gpr[12] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F2DF91C:
    ctx->pc = 0x7F2DF91Cu;
    // 7F2DF91C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DF920:
    ctx->pc = 0x7F2DF920u;
    // 7F2DF920: lwz     r11, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DF924:
    ctx->pc = 0x7F2DF924u;
    // 7F2DF924: lwz     r10, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DF928:
    ctx->pc = 0x7F2DF928u;
    // 7F2DF928: lwz     r9, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF92C:
    ctx->pc = 0x7F2DF92Cu;
    // 7F2DF92C: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2DF930:
    ctx->pc = 0x7F2DF930u;
    // 7F2DF930: stw     r12, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DF934:
    ctx->pc = 0x7F2DF934u;
    // 7F2DF934: stw     r11, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF938:
    ctx->pc = 0x7F2DF938u;
    // 7F2DF938: stw     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DF93C:
    ctx->pc = 0x7F2DF93Cu;
    // 7F2DF93C: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF940:
    ctx->pc = 0x7F2DF940u;
    // 7F2DF940: stw     r12, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DF944:
    ctx->pc = 0x7F2DF944u;
    // 7F2DF944: stw     r11, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF948:
    ctx->pc = 0x7F2DF948u;
    // 7F2DF948: stw     r10, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DF94C:
    ctx->pc = 0x7F2DF94Cu;
    // 7F2DF94C: stw     r9, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF950:
    ctx->pc = 0x7F2DF950u;
    // 7F2DF950: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DF954:
    ctx->pc = 0x7F2DF954u;
    // 7F2DF954: stw     r11, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF958:
    ctx->pc = 0x7F2DF958u;
    // 7F2DF958: stw     r10, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DF95C:
    ctx->pc = 0x7F2DF95Cu;
    // 7F2DF95C: stw     r9, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF960:
    ctx->pc = 0x7F2DF960u;
    // 7F2DF960: stw     r12, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DF964:
    ctx->pc = 0x7F2DF964u;
    // 7F2DF964: stw     r11, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF968:
    ctx->pc = 0x7F2DF968u;
    // 7F2DF968: stw     r10, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DF96C:
    ctx->pc = 0x7F2DF96Cu;
    // 7F2DF96C: stw     r9, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF970:
    ctx->pc = 0x7F2DF970u;
    // 7F2DF970: lfs     f3, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF970u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DF974:
    ctx->pc = 0x7F2DF974u;
    // 7F2DF974: lfs     f0, 608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF974u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DF978:
    ctx->pc = 0x7F2DF978u;
    // 7F2DF978: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DF978u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_7F2DF97C:
    ctx->pc = 0x7F2DF97Cu;
    // 7F2DF97C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DF97Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2DF980:
    ctx->pc = 0x7F2DF980u;
    // 7F2DF980: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DF980u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2DF984:
    ctx->pc = 0x7F2DF984u;
    // 7F2DF984: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DF984u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DF988:
    ctx->pc = 0x7F2DF988u;
    // 7F2DF988: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DF98C:
    ctx->pc = 0x7F2DF98Cu;
    // 7F2DF98C: lwz     r9, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF990:
    ctx->pc = 0x7F2DF990u;
    // 7F2DF990: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DF994:
    ctx->pc = 0x7F2DF994u;
    // 7F2DF994: stw     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF998:
    ctx->pc = 0x7F2DF998u;
    // 7F2DF998: lwz     r11, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DF99C:
    ctx->pc = 0x7F2DF99Cu;
    // 7F2DF99C: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF99Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DF9A0:
    ctx->pc = 0x7F2DF9A0u;
    // 7F2DF9A0: lfs     f4, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2DF9A4:
    ctx->pc = 0x7F2DF9A4u;
    // 7F2DF9A4: lfs     f3, 616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DF9A8:
    ctx->pc = 0x7F2DF9A8u;
    // 7F2DF9A8: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DF9AC:
    ctx->pc = 0x7F2DF9ACu;
    // 7F2DF9AC: fsubs   f1, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9ACu)) return;
    ppc_fsubs(ctx, 1, 4, 3);

label_7F2DF9B0:
    ctx->pc = 0x7F2DF9B0u;
    // 7F2DF9B0: lwz     r9, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF9B4:
    ctx->pc = 0x7F2DF9B4u;
    // 7F2DF9B4: fadds   f0, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9B4u)) return;
    ppc_fadds(ctx, 0, 4, 3);

label_7F2DF9B8:
    ctx->pc = 0x7F2DF9B8u;
    // 7F2DF9B8: lwz     r10, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DF9BC:
    ctx->pc = 0x7F2DF9BCu;
    // 7F2DF9BC: stw     r11, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF9C0:
    ctx->pc = 0x7F2DF9C0u;
    // 7F2DF9C0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2DF9C4:
    ctx->pc = 0x7F2DF9C4u;
    // 7F2DF9C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DF9C8:
    ctx->pc = 0x7F2DF9C8u;
    // 7F2DF9C8: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DF9CC:
    ctx->pc = 0x7F2DF9CCu;
    // 7F2DF9CC: stfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DF9D0:
    ctx->pc = 0x7F2DF9D0u;
    // 7F2DF9D0: stfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DF9D4:
    ctx->pc = 0x7F2DF9D4u;
    // 7F2DF9D4: lwz     r31, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DF9D8:
    ctx->pc = 0x7F2DF9D8u;
    // 7F2DF9D8: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DF9DC:
    ctx->pc = 0x7F2DF9DCu;
    // 7F2DF9DC: lwz     r12, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2DF9E0:
    ctx->pc = 0x7F2DF9E0u;
    // 7F2DF9E0: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DF9E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DF9E4:
    ctx->pc = 0x7F2DF9E4u;
    // 7F2DF9E4: lwz     r11, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DF9E8:
    ctx->pc = 0x7F2DF9E8u;
    // 7F2DF9E8: lwz     r9, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DF9EC:
    ctx->pc = 0x7F2DF9ECu;
    // 7F2DF9EC: stw     r31, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2DF9F0:
    ctx->pc = 0x7F2DF9F0u;
    // 7F2DF9F0: stw     r12, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DF9F4:
    ctx->pc = 0x7F2DF9F4u;
    // 7F2DF9F4: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DF9F8:
    ctx->pc = 0x7F2DF9F8u;
    // 7F2DF9F8: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DF9FC:
    ctx->pc = 0x7F2DF9FCu;
    // 7F2DF9FC: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DFA00:
    ctx->pc = 0x7F2DFA00u;
    // 7F2DFA00: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DFA04:
    ctx->pc = 0x7F2DFA04u;
    // 7F2DFA04: lfs     f0, 612(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DFA08:
    ctx->pc = 0x7F2DFA08u;
    // 7F2DFA08: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA08u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2DFA0C:
    ctx->pc = 0x7F2DFA0Cu;
    // 7F2DFA0C: stw     r8, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DFA10:
    ctx->pc = 0x7F2DFA10u;
    // 7F2DFA10: stw     r8, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DFA14:
    ctx->pc = 0x7F2DFA14u;
    // 7F2DFA14: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA14u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2DFA18:
    ctx->pc = 0x7F2DFA18u;
    // 7F2DFA18: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFA1C:
    ctx->pc = 0x7F2DFA1Cu;
    // 7F2DFA1C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA1Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DFA20:
    ctx->pc = 0x7F2DFA20u;
    // 7F2DFA20: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFA24:
    ctx->pc = 0x7F2DFA24u;
    // 7F2DFA24: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFA28:
    ctx->pc = 0x7F2DFA28u;
    // 7F2DFA28: lwz     r10, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFA2C:
    ctx->pc = 0x7F2DFA2Cu;
    // 7F2DFA2C: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFA30:
    ctx->pc = 0x7F2DFA30u;
    // 7F2DFA30: lwz     r9, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2DFA34:
    ctx->pc = 0x7F2DFA34u;
    // 7F2DFA34: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFA38:
    ctx->pc = 0x7F2DFA38u;
    // 7F2DFA38: lwz     r8, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2DFA3C:
    ctx->pc = 0x7F2DFA3Cu;
    // 7F2DFA3C: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFA40:
    ctx->pc = 0x7F2DFA40u;
    // 7F2DFA40: stw     r10, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFA44:
    ctx->pc = 0x7F2DFA44u;
    // 7F2DFA44: stw     r9, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2DFA48:
    ctx->pc = 0x7F2DFA48u;
    // 7F2DFA48: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2DFA4C:
    ctx->pc = 0x7F2DFA4Cu;
    // 7F2DFA4C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFA50:
    ctx->pc = 0x7F2DFA50u;
    // 7F2DFA50: lwz     r3, 604(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(604);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFA54:
    ctx->pc = 0x7F2DFA54u;
    // 7F2DFA54: bl      0x7F10CA3C
    {
            ctx->lr = 0x7F2DFA58u;
            ctx->pc = 0x7F10CA3Cu;
            return;
    }

label_7F2DFA58:
    ctx->pc = 0x7F2DFA58u;
    ctx->downcount -= 6;
    // 7F2DFA58: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFA5C:
    ctx->pc = 0x7F2DFA5Cu;
    // 7F2DFA5C: lwz     r31, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2DFA60:
    ctx->pc = 0x7F2DFA60u;
    // 7F2DFA60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DFA64:
    ctx->pc = 0x7F2DFA64u;
    // 7F2DFA64: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F2DFA68:
    ctx->pc = 0x7F2DFA68u;
    // 7F2DFA68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DFA6C:
    ctx->pc = 0x7F2DFA6Cu;
    ctx->downcount -= 105;
    // 7F2DFA6C: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DFA70:
    ctx->pc = 0x7F2DFA70u;
    // 7F2DFA70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DFA74:
    ctx->pc = 0x7F2DFA74u;
    // 7F2DFA74: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DFA78:
    ctx->pc = 0x7F2DFA78u;
    // 7F2DFA78: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F2DFA7C:
    ctx->pc = 0x7F2DFA7Cu;
    // 7F2DFA7C: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFA80:
    ctx->pc = 0x7F2DFA80u;
    // 7F2DFA80: addi    r6, r4, 29488
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(29488);

label_7F2DFA84:
    ctx->pc = 0x7F2DFA84u;
    // 7F2DFA84: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFA84u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2DFA88:
    ctx->pc = 0x7F2DFA88u;
    // 7F2DFA88: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2DFA8C:
    ctx->pc = 0x7F2DFA8Cu;
    // 7F2DFA8C: stmw     r29, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DFA90:
    ctx->pc = 0x7F2DFA90u;
    // 7F2DFA90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DFA94:
    ctx->pc = 0x7F2DFA94u;
    // 7F2DFA94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2DFA98:
    ctx->pc = 0x7F2DFA98u;
    // 7F2DFA98: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2DFA9C:
    ctx->pc = 0x7F2DFA9Cu;
    // 7F2DFA9C: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2DFAA0:
    ctx->pc = 0x7F2DFAA0u;
    // 7F2DFAA0: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DFAA4:
    ctx->pc = 0x7F2DFAA4u;
    // 7F2DFAA4: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F2DFAA8:
    ctx->pc = 0x7F2DFAA8u;
    // 7F2DFAA8: li      r9, 12224
    ctx->gpr[9] = (u32)(s32)(12224);

label_7F2DFAAC:
    ctx->pc = 0x7F2DFAACu;
    // 7F2DFAAC: lwzu     r29, 12816(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12816);
        ctx->gpr[29] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F2DFAB0:
    ctx->pc = 0x7F2DFAB0u;
    // 7F2DFAB0: lwz     r12, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2DFAB4:
    ctx->pc = 0x7F2DFAB4u;
    // 7F2DFAB4: lwz     r11, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DFAB8:
    ctx->pc = 0x7F2DFAB8u;
    // 7F2DFAB8: lwz     r10, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFABC:
    ctx->pc = 0x7F2DFABCu;
    // 7F2DFABC: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2DFAC0:
    ctx->pc = 0x7F2DFAC0u;
    // 7F2DFAC0: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DFAC4:
    ctx->pc = 0x7F2DFAC4u;
    // 7F2DFAC4: stw     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFAC8:
    ctx->pc = 0x7F2DFAC8u;
    // 7F2DFAC8: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFACC:
    ctx->pc = 0x7F2DFACCu;
    // 7F2DFACC: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFAD0:
    ctx->pc = 0x7F2DFAD0u;
    // 7F2DFAD0: stw     r29, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DFAD4:
    ctx->pc = 0x7F2DFAD4u;
    // 7F2DFAD4: stw     r12, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFAD8:
    ctx->pc = 0x7F2DFAD8u;
    // 7F2DFAD8: stw     r11, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFADC:
    ctx->pc = 0x7F2DFADCu;
    // 7F2DFADC: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFAE0:
    ctx->pc = 0x7F2DFAE0u;
    // 7F2DFAE0: stw     r29, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DFAE4:
    ctx->pc = 0x7F2DFAE4u;
    // 7F2DFAE4: stw     r12, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFAE8:
    ctx->pc = 0x7F2DFAE8u;
    // 7F2DFAE8: stw     r11, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFAEC:
    ctx->pc = 0x7F2DFAECu;
    // 7F2DFAEC: stw     r10, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFAF0:
    ctx->pc = 0x7F2DFAF0u;
    // 7F2DFAF0: stw     r29, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DFAF4:
    ctx->pc = 0x7F2DFAF4u;
    // 7F2DFAF4: stw     r12, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFAF8:
    ctx->pc = 0x7F2DFAF8u;
    // 7F2DFAF8: stw     r11, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFAFC:
    ctx->pc = 0x7F2DFAFCu;
    // 7F2DFAFC: stw     r10, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFB00:
    ctx->pc = 0x7F2DFB00u;
    // 7F2DFB00: lfs     f3, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DFB04:
    ctx->pc = 0x7F2DFB04u;
    // 7F2DFB04: lfs     f0, 608(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DFB08:
    ctx->pc = 0x7F2DFB08u;
    // 7F2DFB08: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB08u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_7F2DFB0C:
    ctx->pc = 0x7F2DFB0Cu;
    // 7F2DFB0C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB0Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2DFB10:
    ctx->pc = 0x7F2DFB10u;
    // 7F2DFB10: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2DFB14:
    ctx->pc = 0x7F2DFB14u;
    // 7F2DFB14: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB14u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DFB18:
    ctx->pc = 0x7F2DFB18u;
    // 7F2DFB18: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DFB1C:
    ctx->pc = 0x7F2DFB1Cu;
    // 7F2DFB1C: lwz     r10, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFB20:
    ctx->pc = 0x7F2DFB20u;
    // 7F2DFB20: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFB24:
    ctx->pc = 0x7F2DFB24u;
    // 7F2DFB24: stw     r10, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFB28:
    ctx->pc = 0x7F2DFB28u;
    // 7F2DFB28: lwz     r12, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2DFB2C:
    ctx->pc = 0x7F2DFB2Cu;
    // 7F2DFB2C: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DFB30:
    ctx->pc = 0x7F2DFB30u;
    // 7F2DFB30: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2DFB34:
    ctx->pc = 0x7F2DFB34u;
    // 7F2DFB34: lfs     f3, 616(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2DFB38:
    ctx->pc = 0x7F2DFB38u;
    // 7F2DFB38: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFB3C:
    ctx->pc = 0x7F2DFB3Cu;
    // 7F2DFB3C: fsubs   f1, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB3Cu)) return;
    ppc_fsubs(ctx, 1, 4, 3);

label_7F2DFB40:
    ctx->pc = 0x7F2DFB40u;
    // 7F2DFB40: lwz     r10, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFB44:
    ctx->pc = 0x7F2DFB44u;
    // 7F2DFB44: fadds   f0, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB44u)) return;
    ppc_fadds(ctx, 0, 4, 3);

label_7F2DFB48:
    ctx->pc = 0x7F2DFB48u;
    // 7F2DFB48: lwz     r11, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DFB4C:
    ctx->pc = 0x7F2DFB4Cu;
    // 7F2DFB4C: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFB50:
    ctx->pc = 0x7F2DFB50u;
    // 7F2DFB50: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB50u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2DFB54:
    ctx->pc = 0x7F2DFB54u;
    // 7F2DFB54: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB54u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DFB58:
    ctx->pc = 0x7F2DFB58u;
    // 7F2DFB58: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFB5C:
    ctx->pc = 0x7F2DFB5Cu;
    // 7F2DFB5C: stfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DFB60:
    ctx->pc = 0x7F2DFB60u;
    // 7F2DFB60: stfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2DFB64:
    ctx->pc = 0x7F2DFB64u;
    // 7F2DFB64: lwz     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2DFB68:
    ctx->pc = 0x7F2DFB68u;
    // 7F2DFB68: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFB6C:
    ctx->pc = 0x7F2DFB6Cu;
    // 7F2DFB6C: lwz     r30, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2DFB70:
    ctx->pc = 0x7F2DFB70u;
    // 7F2DFB70: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFB74:
    ctx->pc = 0x7F2DFB74u;
    // 7F2DFB74: lwz     r12, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2DFB78:
    ctx->pc = 0x7F2DFB78u;
    // 7F2DFB78: lwz     r10, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFB7C:
    ctx->pc = 0x7F2DFB7Cu;
    // 7F2DFB7C: stw     r29, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2DFB80:
    ctx->pc = 0x7F2DFB80u;
    // 7F2DFB80: stw     r30, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2DFB84:
    ctx->pc = 0x7F2DFB84u;
    // 7F2DFB84: stw     r12, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2DFB88:
    ctx->pc = 0x7F2DFB88u;
    // 7F2DFB88: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFB8C:
    ctx->pc = 0x7F2DFB8Cu;
    // 7F2DFB8C: stw     r10, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFB90:
    ctx->pc = 0x7F2DFB90u;
    // 7F2DFB90: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DFB94:
    ctx->pc = 0x7F2DFB94u;
    // 7F2DFB94: lfs     f0, 612(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DFB98:
    ctx->pc = 0x7F2DFB98u;
    // 7F2DFB98: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFB98u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2DFB9C:
    ctx->pc = 0x7F2DFB9Cu;
    // 7F2DFB9C: stw     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFBA0:
    ctx->pc = 0x7F2DFBA0u;
    // 7F2DFBA0: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFBA4:
    ctx->pc = 0x7F2DFBA4u;
    // 7F2DFBA4: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBA4u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2DFBA8:
    ctx->pc = 0x7F2DFBA8u;
    // 7F2DFBA8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFBAC:
    ctx->pc = 0x7F2DFBACu;
    // 7F2DFBAC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2DFBB0:
    ctx->pc = 0x7F2DFBB0u;
    // 7F2DFBB0: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFBB4:
    ctx->pc = 0x7F2DFBB4u;
    // 7F2DFBB4: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFBB8:
    ctx->pc = 0x7F2DFBB8u;
    // 7F2DFBB8: lwz     r11, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2DFBBC:
    ctx->pc = 0x7F2DFBBCu;
    // 7F2DFBBC: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFBC0:
    ctx->pc = 0x7F2DFBC0u;
    // 7F2DFBC0: lwz     r10, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2DFBC4:
    ctx->pc = 0x7F2DFBC4u;
    // 7F2DFBC4: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFBC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2DFBC8:
    ctx->pc = 0x7F2DFBC8u;
    // 7F2DFBC8: lwz     r3, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFBCC:
    ctx->pc = 0x7F2DFBCCu;
    // 7F2DFBCC: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFBD0:
    ctx->pc = 0x7F2DFBD0u;
    // 7F2DFBD0: stw     r11, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2DFBD4:
    ctx->pc = 0x7F2DFBD4u;
    // 7F2DFBD4: stw     r10, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2DFBD8:
    ctx->pc = 0x7F2DFBD8u;
    // 7F2DFBD8: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFBDC:
    ctx->pc = 0x7F2DFBDCu;
    // 7F2DFBDC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFBE0:
    ctx->pc = 0x7F2DFBE0u;
    // 7F2DFBE0: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFBE4:
    ctx->pc = 0x7F2DFBE4u;
    // 7F2DFBE4: bl      0x7F10D22C
    {
            ctx->lr = 0x7F2DFBE8u;
            ctx->pc = 0x7F10D22Cu;
            return;
    }

label_7F2DFBE8:
    ctx->pc = 0x7F2DFBE8u;
    ctx->downcount -= 17;
    // 7F2DFBE8: stw     r3, 604(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFBEC:
    ctx->pc = 0x7F2DFBECu;
    // 7F2DFBEC: lmw     r29, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2DFBF0:
    ctx->pc = 0x7F2DFBF0u;
    // 7F2DFBF0: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFBF4:
    ctx->pc = 0x7F2DFBF4u;
    // 7F2DFBF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DFBF8:
    ctx->pc = 0x7F2DFBF8u;
    // 7F2DFBF8: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F2DFBFC:
    ctx->pc = 0x7F2DFBFCu;
    // 7F2DFBFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DFC00:
    ctx->pc = 0x7F2DFC00u;
    ctx->downcount -= 6;
    // 7F2DFC00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DFC04:
    ctx->pc = 0x7F2DFC04u;
    // 7F2DFC04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DFC08:
    ctx->pc = 0x7F2DFC08u;
    // 7F2DFC08: cmpwi   r3, 0
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

label_7F2DFC0C:
    ctx->pc = 0x7F2DFC0Cu;
    // 7F2DFC0C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFC10:
    ctx->pc = 0x7F2DFC10u;
    // 7F2DFC10: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2DFC14:
    ctx->pc = 0x7F2DFC14u;
    // 7F2DFC14: bc    12, 2, 0x7F2DFC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFC30;
        }
    }

label_7F2DFC18:
    ctx->pc = 0x7F2DFC18u;
    ctx->downcount -= 6;
    // 7F2DFC18: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2DFC1C:
    ctx->pc = 0x7F2DFC1Cu;
    // 7F2DFC1C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2DFC20:
    ctx->pc = 0x7F2DFC20u;
    // 7F2DFC20: sth     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2DFC24:
    ctx->pc = 0x7F2DFC24u;
    // 7F2DFC24: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2DFC28:
    ctx->pc = 0x7F2DFC28u;
    // 7F2DFC28: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFC2C:
    ctx->pc = 0x7F2DFC2Cu;
    // 7F2DFC2C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2DFC30u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2DFC30:
    ctx->pc = 0x7F2DFC30u;
    ctx->downcount -= 5;
    // 7F2DFC30: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFC34:
    ctx->pc = 0x7F2DFC34u;
    // 7F2DFC34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2DFC38:
    ctx->pc = 0x7F2DFC38u;
    // 7F2DFC38: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2DFC3C:
    ctx->pc = 0x7F2DFC3Cu;
    // 7F2DFC3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2DFC40:
    ctx->pc = 0x7F2DFC40u;
    ctx->downcount -= 21;
    // 7F2DFC40: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2DFC44:
    ctx->pc = 0x7F2DFC44u;
    // 7F2DFC44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2DFC48:
    ctx->pc = 0x7F2DFC48u;
    // 7F2DFC48: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFC4C:
    ctx->pc = 0x7F2DFC4Cu;
    // 7F2DFC4C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2DFC50:
    ctx->pc = 0x7F2DFC50u;
    // 7F2DFC50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2DFC54:
    ctx->pc = 0x7F2DFC54u;
    // 7F2DFC54: addi    r31, r30, 32
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2DFC58:
    ctx->pc = 0x7F2DFC58u;
    // 7F2DFC58: addi    r4, r30, 476
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(476);

label_7F2DFC5C:
    ctx->pc = 0x7F2DFC5Cu;
    // 7F2DFC5C: lwz     r5, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2DFC60:
    ctx->pc = 0x7F2DFC60u;
    // 7F2DFC60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2DFC64:
    ctx->pc = 0x7F2DFC64u;
    // 7F2DFC64: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F2DFC68:
    ctx->pc = 0x7F2DFC68u;
    // 7F2DFC68: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F2DFC6Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F2DFC6C:
    ctx->pc = 0x7F2DFC6Cu;
    ctx->downcount -= 3;
    // 7F2DFC6C: lwz     r0, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFC70:
    ctx->pc = 0x7F2DFC70u;
    // 7F2DFC70: cmpwi   r0, 2
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

label_7F2DFC74:
    ctx->pc = 0x7F2DFC74u;
    // 7F2DFC74: bc    12, 2, 0x7F2DFE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFE54;
        }
    }

label_7F2DFC78:
    ctx->pc = 0x7F2DFC78u;
    ctx->downcount -= 1;
    // 7F2DFC78: bc    4, 0, 0x7F2DFC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFC8C;
        }
    }

label_7F2DFC7C:
    ctx->pc = 0x7F2DFC7Cu;
    ctx->downcount -= 2;
    // 7F2DFC7C: cmpwi   r0, 0
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

label_7F2DFC80:
    ctx->pc = 0x7F2DFC80u;
    // 7F2DFC80: bc    12, 2, 0x7F2DFC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFC98;
        }
    }

label_7F2DFC84:
    ctx->pc = 0x7F2DFC84u;
    ctx->downcount -= 1;
    // 7F2DFC84: bc    4, 0, 0x7F2DFD60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFD60;
        }
    }

label_7F2DFC88:
    ctx->pc = 0x7F2DFC88u;
    ctx->downcount -= 1;
    // 7F2DFC88: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFC8C:
    ctx->pc = 0x7F2DFC8Cu;
    ctx->downcount -= 2;
    // 7F2DFC8C: cmpwi   r0, 4
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

label_7F2DFC90:
    ctx->pc = 0x7F2DFC90u;
    // 7F2DFC90: bc    4, 0, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFC94:
    ctx->pc = 0x7F2DFC94u;
    ctx->downcount -= 1;
    // 7F2DFC94: b       0x7F2DFF1C
    {
            goto label_7F2DFF1C;
    }

label_7F2DFC98:
    ctx->pc = 0x7F2DFC98u;
    ctx->downcount -= 3;
    // 7F2DFC98: lha     r3, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DFC9C:
    ctx->pc = 0x7F2DFC9Cu;
    // 7F2DFC9C: cmpwi   r3, 0
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

label_7F2DFCA0:
    ctx->pc = 0x7F2DFCA0u;
    // 7F2DFCA0: bc    4, 1, 0x7F2DFCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFCC4;
        }
    }

label_7F2DFCA4:
    ctx->pc = 0x7F2DFCA4u;
    ctx->downcount -= 4;
    // 7F2DFCA4: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DFCA8:
    ctx->pc = 0x7F2DFCA8u;
    // 7F2DFCA8: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DFCAC:
    ctx->pc = 0x7F2DFCACu;
    // 7F2DFCAC: sth     r3, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DFCB0:
    ctx->pc = 0x7F2DFCB0u;
    // 7F2DFCB0: bc    4, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFCB4:
    ctx->pc = 0x7F2DFCB4u;
    ctx->downcount -= 3;
    // 7F2DFCB4: lwz     r3, 648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFCB8:
    ctx->pc = 0x7F2DFCB8u;
    // 7F2DFCB8: li      r4, 16779
    ctx->gpr[4] = (u32)(s32)(16779);

label_7F2DFCBC:
    ctx->pc = 0x7F2DFCBCu;
    // 7F2DFCBC: bl      0x7F2DF788
    {
            ctx->lr = 0x7F2DFCC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF788u;
                return;
            }
            goto label_7F2DF788;
    }

label_7F2DFCC0:
    ctx->pc = 0x7F2DFCC0u;
    ctx->downcount -= 1;
    // 7F2DFCC0: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFCC4:
    ctx->pc = 0x7F2DFCC4u;
    ctx->downcount -= 2;
    // 7F2DFCC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DFCC8:
    ctx->pc = 0x7F2DFCC8u;
    // 7F2DFCC8: bl      0x7F2DF7C4
    {
            ctx->lr = 0x7F2DFCCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF7C4u;
                return;
            }
            goto label_7F2DF7C4;
    }

label_7F2DFCCC:
    ctx->pc = 0x7F2DFCCCu;
    ctx->downcount -= 2;
    // 7F2DFCCC: cmpwi   r3, -1
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

label_7F2DFCD0:
    ctx->pc = 0x7F2DFCD0u;
    // 7F2DFCD0: bc    4, 2, 0x7F2DFCE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFCE0;
        }
    }

label_7F2DFCD4:
    ctx->pc = 0x7F2DFCD4u;
    ctx->downcount -= 3;
    // 7F2DFCD4: lwz     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFCD8:
    ctx->pc = 0x7F2DFCD8u;
    // 7F2DFCD8: cmpwi   r0, 0
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

label_7F2DFCDC:
    ctx->pc = 0x7F2DFCDCu;
    // 7F2DFCDC: bc    12, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFCE0:
    ctx->pc = 0x7F2DFCE0u;
    ctx->downcount -= 13;
    // 7F2DFCE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DFCE4:
    ctx->pc = 0x7F2DFCE4u;
    // 7F2DFCE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DFCE8:
    ctx->pc = 0x7F2DFCE8u;
    // 7F2DFCE8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFCEC:
    ctx->pc = 0x7F2DFCECu;
    // 7F2DFCEC: li      r3, 483
    ctx->gpr[3] = (u32)(s32)(483);

label_7F2DFCF0:
    ctx->pc = 0x7F2DFCF0u;
    // 7F2DFCF0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F2DFCF4:
    ctx->pc = 0x7F2DFCF4u;
    // 7F2DFCF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DFCF8:
    ctx->pc = 0x7F2DFCF8u;
    // 7F2DFCF8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFCFC:
    ctx->pc = 0x7F2DFCFCu;
    // 7F2DFCFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DFD00:
    ctx->pc = 0x7F2DFD00u;
    // 7F2DFD00: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DFD04:
    ctx->pc = 0x7F2DFD04u;
    // 7F2DFD04: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DFD08:
    ctx->pc = 0x7F2DFD08u;
    // 7F2DFD08: li      r9, 28
    ctx->gpr[9] = (u32)(s32)(28);

label_7F2DFD0C:
    ctx->pc = 0x7F2DFD0Cu;
    // 7F2DFD0C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DFD10:
    ctx->pc = 0x7F2DFD10u;
    // 7F2DFD10: bl      0x800501FC
    {
            ctx->lr = 0x7F2DFD14u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F2DFD14:
    ctx->pc = 0x7F2DFD14u;
    ctx->downcount -= 4;
    // 7F2DFD14: stw     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFD18:
    ctx->pc = 0x7F2DFD18u;
    // 7F2DFD18: lwz     r0, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFD1C:
    ctx->pc = 0x7F2DFD1Cu;
    // 7F2DFD1C: cmplwi  r0, 0x0000
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

label_7F2DFD20:
    ctx->pc = 0x7F2DFD20u;
    // 7F2DFD20: bc    12, 2, 0x7F2DFD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFD54;
        }
    }

label_7F2DFD24:
    ctx->pc = 0x7F2DFD24u;
    ctx->downcount -= 5;
    // 7F2DFD24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DFD28:
    ctx->pc = 0x7F2DFD28u;
    // 7F2DFD28: li      r4, 14850
    ctx->gpr[4] = (u32)(s32)(14850);

label_7F2DFD2C:
    ctx->pc = 0x7F2DFD2Cu;
    // 7F2DFD2C: stw     r0, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFD30:
    ctx->pc = 0x7F2DFD30u;
    // 7F2DFD30: lwz     r3, 648(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFD34:
    ctx->pc = 0x7F2DFD34u;
    // 7F2DFD34: bl      0x7F2DF788
    {
            ctx->lr = 0x7F2DFD38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF788u;
                return;
            }
            goto label_7F2DF788;
    }

label_7F2DFD38:
    ctx->pc = 0x7F2DFD38u;
    ctx->downcount -= 7;
    // 7F2DFD38: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F2DFD3C:
    ctx->pc = 0x7F2DFD3Cu;
    // 7F2DFD3C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_7F2DFD40:
    ctx->pc = 0x7F2DFD40u;
    // 7F2DFD40: sth     r0, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFD44:
    ctx->pc = 0x7F2DFD44u;
    // 7F2DFD44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DFD48:
    ctx->pc = 0x7F2DFD48u;
    // 7F2DFD48: sth     r3, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DFD4C:
    ctx->pc = 0x7F2DFD4Cu;
    // 7F2DFD4C: stw     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFD50:
    ctx->pc = 0x7F2DFD50u;
    // 7F2DFD50: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFD54:
    ctx->pc = 0x7F2DFD54u;
    ctx->downcount -= 3;
    // 7F2DFD54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DFD58:
    ctx->pc = 0x7F2DFD58u;
    // 7F2DFD58: stw     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFD5C:
    ctx->pc = 0x7F2DFD5Cu;
    // 7F2DFD5C: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFD60:
    ctx->pc = 0x7F2DFD60u;
    ctx->downcount -= 3;
    // 7F2DFD60: lha     r3, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DFD64:
    ctx->pc = 0x7F2DFD64u;
    // 7F2DFD64: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DFD68:
    ctx->pc = 0x7F2DFD68u;
    // 7F2DFD68: bc    4, 1, 0x7F2DFDD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFDD8;
        }
    }

label_7F2DFD6C:
    ctx->pc = 0x7F2DFD6Cu;
    ctx->downcount -= 2;
    // 7F2DFD6C: cmpwi   r3, 1
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

label_7F2DFD70:
    ctx->pc = 0x7F2DFD70u;
    // 7F2DFD70: bc    4, 2, 0x7F2DFDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFDCC;
        }
    }

label_7F2DFD74:
    ctx->pc = 0x7F2DFD74u;
    ctx->downcount -= 2;
    // 7F2DFD74: lwz     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFD78:
    ctx->pc = 0x7F2DFD78u;
    // 7F2DFD78: bl      0x80051AA0
    {
            ctx->lr = 0x7F2DFD7Cu;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F2DFD7C:
    ctx->pc = 0x7F2DFD7Cu;
    ctx->downcount -= 2;
    // 7F2DFD7C: cmpwi   r3, 0
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

label_7F2DFD80:
    ctx->pc = 0x7F2DFD80u;
    // 7F2DFD80: bc    12, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFD84:
    ctx->pc = 0x7F2DFD84u;
    ctx->downcount -= 2;
    // 7F2DFD84: lwz     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFD88:
    ctx->pc = 0x7F2DFD88u;
    // 7F2DFD88: bl      0x80051A5C
    {
            ctx->lr = 0x7F2DFD8Cu;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F2DFD8C:
    ctx->pc = 0x7F2DFD8Cu;
    ctx->downcount -= 3;
    // 7F2DFD8C: lwz     r3, 652(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFD90:
    ctx->pc = 0x7F2DFD90u;
    // 7F2DFD90: li      r4, 13854
    ctx->gpr[4] = (u32)(s32)(13854);

label_7F2DFD94:
    ctx->pc = 0x7F2DFD94u;
    // 7F2DFD94: bl      0x7F2DFC00
    {
            ctx->lr = 0x7F2DFD98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DFC00u;
                return;
            }
            goto label_7F2DFC00;
    }

label_7F2DFD98:
    ctx->pc = 0x7F2DFD98u;
    ctx->downcount -= 13;
    // 7F2DFD98: lwz     r3, 636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFD9C:
    ctx->pc = 0x7F2DFD9Cu;
    // 7F2DFD9C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DFDA0:
    ctx->pc = 0x7F2DFDA0u;
    // 7F2DFDA0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFDA4:
    ctx->pc = 0x7F2DFDA4u;
    // 7F2DFDA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DFDA8:
    ctx->pc = 0x7F2DFDA8u;
    // 7F2DFDA8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2DFDAC:
    ctx->pc = 0x7F2DFDACu;
    // 7F2DFDAC: lfd     f1, 29480(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29480);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFDB0:
    ctx->pc = 0x7F2DFDB0u;
    // 7F2DFDB0: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFDB4:
    ctx->pc = 0x7F2DFDB4u;
    // 7F2DFDB4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DFDB8:
    ctx->pc = 0x7F2DFDB8u;
    // 7F2DFDB8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFDBC:
    ctx->pc = 0x7F2DFDBCu;
    // 7F2DFDBC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDBCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DFDC0:
    ctx->pc = 0x7F2DFDC0u;
    // 7F2DFDC0: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DFDC4:
    ctx->pc = 0x7F2DFDC4u;
    // 7F2DFDC4: sth     r0, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFDC8:
    ctx->pc = 0x7F2DFDC8u;
    // 7F2DFDC8: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFDCC:
    ctx->pc = 0x7F2DFDCCu;
    ctx->downcount -= 3;
    // 7F2DFDCC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DFDD0:
    ctx->pc = 0x7F2DFDD0u;
    // 7F2DFDD0: sth     r0, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFDD4:
    ctx->pc = 0x7F2DFDD4u;
    // 7F2DFDD4: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFDD8:
    ctx->pc = 0x7F2DFDD8u;
    ctx->downcount -= 13;
    // 7F2DFDD8: lwz     r0, 628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFDDC:
    ctx->pc = 0x7F2DFDDCu;
    // 7F2DFDDC: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F2DFDE0:
    ctx->pc = 0x7F2DFDE0u;
    // 7F2DFDE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DFDE4:
    ctx->pc = 0x7F2DFDE4u;
    // 7F2DFDE4: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DFDE8:
    ctx->pc = 0x7F2DFDE8u;
    // 7F2DFDE8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DFDEC:
    ctx->pc = 0x7F2DFDECu;
    // 7F2DFDEC: lfd     f2, 29480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29480);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFDF0:
    ctx->pc = 0x7F2DFDF0u;
    // 7F2DFDF0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFDF4:
    ctx->pc = 0x7F2DFDF4u;
    // 7F2DFDF4: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DFDF8:
    ctx->pc = 0x7F2DFDF8u;
    // 7F2DFDF8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFDFC:
    ctx->pc = 0x7F2DFDFCu;
    // 7F2DFDFC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2DFDFCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2DFE00:
    ctx->pc = 0x7F2DFE00u;
    // 7F2DFE00: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE00u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2DFE04:
    ctx->pc = 0x7F2DFE04u;
    // 7F2DFE04: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DFE08:
    ctx->pc = 0x7F2DFE08u;
    // 7F2DFE08: bc    4, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFE0C:
    ctx->pc = 0x7F2DFE0Cu;
    ctx->downcount -= 17;
    // 7F2DFE0C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2DFE10:
    ctx->pc = 0x7F2DFE10u;
    // 7F2DFE10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DFE14:
    ctx->pc = 0x7F2DFE14u;
    // 7F2DFE14: stw     r0, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFE18:
    ctx->pc = 0x7F2DFE18u;
    // 7F2DFE18: addi    r4, r3, 29472
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29472);

label_7F2DFE1C:
    ctx->pc = 0x7F2DFE1Cu;
    // 7F2DFE1C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2DFE20:
    ctx->pc = 0x7F2DFE20u;
    // 7F2DFE20: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DFE24:
    ctx->pc = 0x7F2DFE24u;
    // 7F2DFE24: lwz     r0, 628(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFE28:
    ctx->pc = 0x7F2DFE28u;
    // 7F2DFE28: addi    r4, r3, -21057
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21057);

label_7F2DFE2C:
    ctx->pc = 0x7F2DFE2Cu;
    // 7F2DFE2C: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DFE30:
    ctx->pc = 0x7F2DFE30u;
    // 7F2DFE30: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DFE34:
    ctx->pc = 0x7F2DFE34u;
    // 7F2DFE34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFE38:
    ctx->pc = 0x7F2DFE38u;
    // 7F2DFE38: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFE3C:
    ctx->pc = 0x7F2DFE3Cu;
    // 7F2DFE3C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE3Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2DFE40:
    ctx->pc = 0x7F2DFE40u;
    // 7F2DFE40: stfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2DFE44:
    ctx->pc = 0x7F2DFE44u;
    // 7F2DFE44: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFE44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DFE48:
    ctx->pc = 0x7F2DFE48u;
    // 7F2DFE48: lwz     r3, 652(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFE4C:
    ctx->pc = 0x7F2DFE4Cu;
    // 7F2DFE4C: bl      0x7F2DFC00
    {
            ctx->lr = 0x7F2DFE50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DFC00u;
                return;
            }
            goto label_7F2DFC00;
    }

label_7F2DFE50:
    ctx->pc = 0x7F2DFE50u;
    ctx->downcount -= 1;
    // 7F2DFE50: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFE54:
    ctx->pc = 0x7F2DFE54u;
    ctx->downcount -= 3;
    // 7F2DFE54: lha     r3, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DFE58:
    ctx->pc = 0x7F2DFE58u;
    // 7F2DFE58: cmpwi   r3, 0
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

label_7F2DFE5C:
    ctx->pc = 0x7F2DFE5Cu;
    // 7F2DFE5C: bc    4, 1, 0x7F2DFE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFE80;
        }
    }

label_7F2DFE60:
    ctx->pc = 0x7F2DFE60u;
    ctx->downcount -= 4;
    // 7F2DFE60: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DFE64:
    ctx->pc = 0x7F2DFE64u;
    // 7F2DFE64: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DFE68:
    ctx->pc = 0x7F2DFE68u;
    // 7F2DFE68: sth     r3, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DFE6C:
    ctx->pc = 0x7F2DFE6Cu;
    // 7F2DFE6C: bc    4, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFE70:
    ctx->pc = 0x7F2DFE70u;
    ctx->downcount -= 3;
    // 7F2DFE70: lwz     r3, 644(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(644);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFE74:
    ctx->pc = 0x7F2DFE74u;
    // 7F2DFE74: li      r4, 16779
    ctx->gpr[4] = (u32)(s32)(16779);

label_7F2DFE78:
    ctx->pc = 0x7F2DFE78u;
    // 7F2DFE78: bl      0x7F2DF788
    {
            ctx->lr = 0x7F2DFE7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF788u;
                return;
            }
            goto label_7F2DF788;
    }

label_7F2DFE7C:
    ctx->pc = 0x7F2DFE7Cu;
    ctx->downcount -= 1;
    // 7F2DFE7C: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFE80:
    ctx->pc = 0x7F2DFE80u;
    ctx->downcount -= 2;
    // 7F2DFE80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2DFE84:
    ctx->pc = 0x7F2DFE84u;
    // 7F2DFE84: bl      0x7F2DF7C4
    {
            ctx->lr = 0x7F2DFE88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF7C4u;
                return;
            }
            goto label_7F2DF7C4;
    }

label_7F2DFE88:
    ctx->pc = 0x7F2DFE88u;
    ctx->downcount -= 2;
    // 7F2DFE88: cmpwi   r3, -1
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

label_7F2DFE8C:
    ctx->pc = 0x7F2DFE8Cu;
    // 7F2DFE8C: bc    4, 2, 0x7F2DFE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFE9C;
        }
    }

label_7F2DFE90:
    ctx->pc = 0x7F2DFE90u;
    ctx->downcount -= 3;
    // 7F2DFE90: lwz     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFE94:
    ctx->pc = 0x7F2DFE94u;
    // 7F2DFE94: cmpwi   r0, 0
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

label_7F2DFE98:
    ctx->pc = 0x7F2DFE98u;
    // 7F2DFE98: bc    12, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFE9C:
    ctx->pc = 0x7F2DFE9Cu;
    ctx->downcount -= 13;
    // 7F2DFE9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2DFEA0:
    ctx->pc = 0x7F2DFEA0u;
    // 7F2DFEA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DFEA4:
    ctx->pc = 0x7F2DFEA4u;
    // 7F2DFEA4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFEA8:
    ctx->pc = 0x7F2DFEA8u;
    // 7F2DFEA8: li      r3, 483
    ctx->gpr[3] = (u32)(s32)(483);

label_7F2DFEAC:
    ctx->pc = 0x7F2DFEACu;
    // 7F2DFEAC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F2DFEB0:
    ctx->pc = 0x7F2DFEB0u;
    // 7F2DFEB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2DFEB4:
    ctx->pc = 0x7F2DFEB4u;
    // 7F2DFEB4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFEB8:
    ctx->pc = 0x7F2DFEB8u;
    // 7F2DFEB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2DFEBC:
    ctx->pc = 0x7F2DFEBCu;
    // 7F2DFEBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2DFEC0:
    ctx->pc = 0x7F2DFEC0u;
    // 7F2DFEC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2DFEC4:
    ctx->pc = 0x7F2DFEC4u;
    // 7F2DFEC4: li      r9, 28
    ctx->gpr[9] = (u32)(s32)(28);

label_7F2DFEC8:
    ctx->pc = 0x7F2DFEC8u;
    // 7F2DFEC8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2DFECC:
    ctx->pc = 0x7F2DFECCu;
    // 7F2DFECC: bl      0x800501FC
    {
            ctx->lr = 0x7F2DFED0u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F2DFED0:
    ctx->pc = 0x7F2DFED0u;
    ctx->downcount -= 4;
    // 7F2DFED0: stw     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFED4:
    ctx->pc = 0x7F2DFED4u;
    // 7F2DFED4: lwz     r0, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFED8:
    ctx->pc = 0x7F2DFED8u;
    // 7F2DFED8: cmplwi  r0, 0x0000
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

label_7F2DFEDC:
    ctx->pc = 0x7F2DFEDCu;
    // 7F2DFEDC: bc    12, 2, 0x7F2DFF10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFF10;
        }
    }

label_7F2DFEE0:
    ctx->pc = 0x7F2DFEE0u;
    ctx->downcount -= 5;
    // 7F2DFEE0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2DFEE4:
    ctx->pc = 0x7F2DFEE4u;
    // 7F2DFEE4: li      r4, 14850
    ctx->gpr[4] = (u32)(s32)(14850);

label_7F2DFEE8:
    ctx->pc = 0x7F2DFEE8u;
    // 7F2DFEE8: stw     r0, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFEEC:
    ctx->pc = 0x7F2DFEECu;
    // 7F2DFEEC: lwz     r3, 644(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(644);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFEF0:
    ctx->pc = 0x7F2DFEF0u;
    // 7F2DFEF0: bl      0x7F2DF788
    {
            ctx->lr = 0x7F2DFEF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF788u;
                return;
            }
            goto label_7F2DF788;
    }

label_7F2DFEF4:
    ctx->pc = 0x7F2DFEF4u;
    ctx->downcount -= 7;
    // 7F2DFEF4: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F2DFEF8:
    ctx->pc = 0x7F2DFEF8u;
    // 7F2DFEF8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_7F2DFEFC:
    ctx->pc = 0x7F2DFEFCu;
    // 7F2DFEFC: sth     r0, 640(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(640);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFF00:
    ctx->pc = 0x7F2DFF00u;
    // 7F2DFF00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DFF04:
    ctx->pc = 0x7F2DFF04u;
    // 7F2DFF04: sth     r3, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2DFF08:
    ctx->pc = 0x7F2DFF08u;
    // 7F2DFF08: stw     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFF0C:
    ctx->pc = 0x7F2DFF0Cu;
    // 7F2DFF0C: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFF10:
    ctx->pc = 0x7F2DFF10u;
    ctx->downcount -= 3;
    // 7F2DFF10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2DFF14:
    ctx->pc = 0x7F2DFF14u;
    // 7F2DFF14: stw     r0, 664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFF18:
    ctx->pc = 0x7F2DFF18u;
    // 7F2DFF18: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFF1C:
    ctx->pc = 0x7F2DFF1Cu;
    ctx->downcount -= 3;
    // 7F2DFF1C: lha     r3, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2DFF20:
    ctx->pc = 0x7F2DFF20u;
    // 7F2DFF20: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2DFF24:
    ctx->pc = 0x7F2DFF24u;
    // 7F2DFF24: bc    4, 1, 0x7F2DFF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFF9C;
        }
    }

label_7F2DFF28:
    ctx->pc = 0x7F2DFF28u;
    ctx->downcount -= 2;
    // 7F2DFF28: cmpwi   r3, 1
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

label_7F2DFF2C:
    ctx->pc = 0x7F2DFF2Cu;
    // 7F2DFF2C: bc    4, 2, 0x7F2DFF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2DFF90;
        }
    }

label_7F2DFF30:
    ctx->pc = 0x7F2DFF30u;
    ctx->downcount -= 2;
    // 7F2DFF30: lwz     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFF34:
    ctx->pc = 0x7F2DFF34u;
    // 7F2DFF34: bl      0x80051AA0
    {
            ctx->lr = 0x7F2DFF38u;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F2DFF38:
    ctx->pc = 0x7F2DFF38u;
    ctx->downcount -= 2;
    // 7F2DFF38: cmpwi   r3, 0
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

label_7F2DFF3C:
    ctx->pc = 0x7F2DFF3Cu;
    // 7F2DFF3C: bc    12, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFF40:
    ctx->pc = 0x7F2DFF40u;
    ctx->downcount -= 2;
    // 7F2DFF40: lwz     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFF44:
    ctx->pc = 0x7F2DFF44u;
    // 7F2DFF44: bl      0x80051A5C
    {
            ctx->lr = 0x7F2DFF48u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F2DFF48:
    ctx->pc = 0x7F2DFF48u;
    ctx->downcount -= 4;
    // 7F2DFF48: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2DFF4C:
    ctx->pc = 0x7F2DFF4Cu;
    // 7F2DFF4C: lwz     r3, 652(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFF50:
    ctx->pc = 0x7F2DFF50u;
    // 7F2DFF50: addi    r4, r4, -2524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2524);

label_7F2DFF54:
    ctx->pc = 0x7F2DFF54u;
    // 7F2DFF54: bl      0x7F2DFC00
    {
            ctx->lr = 0x7F2DFF58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DFC00u;
                return;
            }
            goto label_7F2DFC00;
    }

label_7F2DFF58:
    ctx->pc = 0x7F2DFF58u;
    ctx->downcount -= 14;
    // 7F2DFF58: lwz     r3, 636(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2DFF5C:
    ctx->pc = 0x7F2DFF5Cu;
    // 7F2DFF5C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2DFF60:
    ctx->pc = 0x7F2DFF60u;
    // 7F2DFF60: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFF64:
    ctx->pc = 0x7F2DFF64u;
    // 7F2DFF64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2DFF68:
    ctx->pc = 0x7F2DFF68u;
    // 7F2DFF68: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F2DFF6C:
    ctx->pc = 0x7F2DFF6Cu;
    // 7F2DFF6C: lfd     f1, 29480(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFF6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29480);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFF70:
    ctx->pc = 0x7F2DFF70u;
    // 7F2DFF70: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2DFF74:
    ctx->pc = 0x7F2DFF74u;
    // 7F2DFF74: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2DFF78:
    ctx->pc = 0x7F2DFF78u;
    // 7F2DFF78: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2DFF7C:
    ctx->pc = 0x7F2DFF7Cu;
    // 7F2DFF7C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFF7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFF80:
    ctx->pc = 0x7F2DFF80u;
    // 7F2DFF80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2DFF80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2DFF84:
    ctx->pc = 0x7F2DFF84u;
    // 7F2DFF84: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFF84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2DFF88:
    ctx->pc = 0x7F2DFF88u;
    // 7F2DFF88: sth     r0, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFF8C:
    ctx->pc = 0x7F2DFF8Cu;
    // 7F2DFF8C: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFF90:
    ctx->pc = 0x7F2DFF90u;
    ctx->downcount -= 3;
    // 7F2DFF90: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2DFF94:
    ctx->pc = 0x7F2DFF94u;
    // 7F2DFF94: sth     r0, 642(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(642);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2DFF98:
    ctx->pc = 0x7F2DFF98u;
    // 7F2DFF98: b       0x7F2E0014
    {
            goto label_7F2E0014;
    }

label_7F2DFF9C:
    ctx->pc = 0x7F2DFF9Cu;
    ctx->downcount -= 13;
    // 7F2DFF9C: lwz     r0, 632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFFA0:
    ctx->pc = 0x7F2DFFA0u;
    // 7F2DFFA0: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F2DFFA4:
    ctx->pc = 0x7F2DFFA4u;
    // 7F2DFFA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DFFA8:
    ctx->pc = 0x7F2DFFA8u;
    // 7F2DFFA8: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DFFAC:
    ctx->pc = 0x7F2DFFACu;
    // 7F2DFFAC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DFFB0:
    ctx->pc = 0x7F2DFFB0u;
    // 7F2DFFB0: lfd     f2, 29480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29480);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFFB4:
    ctx->pc = 0x7F2DFFB4u;
    // 7F2DFFB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFFB8:
    ctx->pc = 0x7F2DFFB8u;
    // 7F2DFFB8: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2DFFBC:
    ctx->pc = 0x7F2DFFBCu;
    // 7F2DFFBC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2DFFC0:
    ctx->pc = 0x7F2DFFC0u;
    // 7F2DFFC0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFC0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F2DFFC4:
    ctx->pc = 0x7F2DFFC4u;
    // 7F2DFFC4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2DFFC8:
    ctx->pc = 0x7F2DFFC8u;
    // 7F2DFFC8: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2DFFCC:
    ctx->pc = 0x7F2DFFCCu;
    // 7F2DFFCC: bc    4, 2, 0x7F2E0014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2E0014;
        }
    }

label_7F2DFFD0:
    ctx->pc = 0x7F2DFFD0u;
    ctx->downcount -= 17;
    // 7F2DFFD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2DFFD4:
    ctx->pc = 0x7F2DFFD4u;
    // 7F2DFFD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2DFFD8:
    ctx->pc = 0x7F2DFFD8u;
    // 7F2DFFD8: stw     r0, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFFDC:
    ctx->pc = 0x7F2DFFDCu;
    // 7F2DFFDC: addi    r4, r3, 29472
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29472);

label_7F2DFFE0:
    ctx->pc = 0x7F2DFFE0u;
    // 7F2DFFE0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2DFFE4:
    ctx->pc = 0x7F2DFFE4u;
    // 7F2DFFE4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2DFFE8:
    ctx->pc = 0x7F2DFFE8u;
    // 7F2DFFE8: lwz     r0, 632(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2DFFEC:
    ctx->pc = 0x7F2DFFECu;
    // 7F2DFFEC: addi    r4, r3, -4680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4680);

label_7F2DFFF0:
    ctx->pc = 0x7F2DFFF0u;
    // 7F2DFFF0: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2DFFF4:
    ctx->pc = 0x7F2DFFF4u;
    // 7F2DFFF4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2DFFF8:
    ctx->pc = 0x7F2DFFF8u;
    // 7F2DFFF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2DFFFC:
    ctx->pc = 0x7F2DFFFCu;
    // 7F2DFFFC: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2DFFFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2E0000:
    ctx->pc = 0x7F2E0000u;
    // 7F2E0000: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2E0000u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2E0004:
    ctx->pc = 0x7F2E0004u;
    // 7F2E0004: stfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0004u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2E0008:
    ctx->pc = 0x7F2E0008u;
    // 7F2E0008: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0008u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2E000C:
    ctx->pc = 0x7F2E000Cu;
    // 7F2E000C: lwz     r3, 652(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2E0010:
    ctx->pc = 0x7F2E0010u;
    // 7F2E0010: bl      0x7F2DFC00
    {
            ctx->lr = 0x7F2E0014u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DFC00u;
                return;
            }
            goto label_7F2DFC00;
    }

label_7F2E0014:
    ctx->pc = 0x7F2E0014u;
    ctx->downcount -= 4;
    // 7F2E0014: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2E0018:
    ctx->pc = 0x7F2E0018u;
    // 7F2E0018: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2E001C:
    ctx->pc = 0x7F2E001Cu;
    // 7F2E001C: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F2E0020:
    ctx->pc = 0x7F2E0020u;
    // 7F2E0020: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F2E0024u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F2E0024:
    ctx->pc = 0x7F2E0024u;
    ctx->downcount -= 2;
    // 7F2E0024: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2E0028:
    ctx->pc = 0x7F2E0028u;
    // 7F2E0028: bl      0x7F2DF8E8
    {
            ctx->lr = 0x7F2E002Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2DF8E8u;
                return;
            }
            goto label_7F2DF8E8;
    }

label_7F2E002C:
    ctx->pc = 0x7F2E002Cu;
    ctx->downcount -= 2;
    // 7F2E002C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2E0030:
    ctx->pc = 0x7F2E0030u;
    // 7F2E0030: bl      0x7F023170
    {
            ctx->lr = 0x7F2E0034u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F2E0034:
    ctx->pc = 0x7F2E0034u;
    ctx->downcount -= 10;
    // 7F2E0034: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2E0038:
    ctx->pc = 0x7F2E0038u;
    // 7F2E0038: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2E003C:
    ctx->pc = 0x7F2E003Cu;
    // 7F2E003C: addi    r5, r3, 29472
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29472);

label_7F2E0040:
    ctx->pc = 0x7F2E0040u;
    // 7F2E0040: lfs     f0, 29492(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0040u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2E0044:
    ctx->pc = 0x7F2E0044u;
    // 7F2E0044: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0044u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2E0048:
    ctx->pc = 0x7F2E0048u;
    // 7F2E0048: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2E004C:
    ctx->pc = 0x7F2E004Cu;
    // 7F2E004C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2E004Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2E0050:
    ctx->pc = 0x7F2E0050u;
    // 7F2E0050: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2E0054:
    ctx->pc = 0x7F2E0054u;
    // 7F2E0054: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2E0054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2E0058:
    ctx->pc = 0x7F2E0058u;
    // 7F2E0058: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2E005Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2E005C:
    ctx->pc = 0x7F2E005Cu;
    ctx->downcount -= 2;
    // 7F2E005C: addi    r3, r30, 432
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(432);

label_7F2E0060:
    ctx->pc = 0x7F2E0060u;
    // 7F2E0060: bl      0x7F0427FC
    {
            ctx->lr = 0x7F2E0064u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F2E0064:
    ctx->pc = 0x7F2E0064u;
    ctx->downcount -= 16;
    // 7F2E0064: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2E0068:
    ctx->pc = 0x7F2E0068u;
    // 7F2E0068: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2E006C:
    ctx->pc = 0x7F2E006Cu;
    // 7F2E006C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2E0070:
    ctx->pc = 0x7F2E0070u;
    // 7F2E0070: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2E0074:
    ctx->pc = 0x7F2E0074u;
    // 7F2E0074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2E0078:
    ctx->pc = 0x7F2E0078u;
    ctx->downcount -= 7;
    // 7F2E0078: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2E007C:
    ctx->pc = 0x7F2E007Cu;
    // 7F2E007C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2E0080:
    ctx->pc = 0x7F2E0080u;
    // 7F2E0080: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2E0084:
    ctx->pc = 0x7F2E0084u;
    // 7F2E0084: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2E0088:
    ctx->pc = 0x7F2E0088u;
    // 7F2E0088: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2E008C:
    ctx->pc = 0x7F2E008Cu;
    // 7F2E008C: lwz     r3, 604(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(604);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2E0090:
    ctx->pc = 0x7F2E0090u;
    // 7F2E0090: bl      0x7F10D51C
    {
            ctx->lr = 0x7F2E0094u;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F2E0094:
    ctx->pc = 0x7F2E0094u;
    ctx->downcount -= 2;
    // 7F2E0094: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F2E0098:
    ctx->pc = 0x7F2E0098u;
    // 7F2E0098: bl      0x7F023E10
    {
            ctx->lr = 0x7F2E009Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F2E009C:
    ctx->pc = 0x7F2E009Cu;
    ctx->downcount -= 2;
    // 7F2E009C: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F2E00A0:
    ctx->pc = 0x7F2E00A0u;
    // 7F2E00A0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F2E00A4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F2E00A4:
    ctx->pc = 0x7F2E00A4u;
    ctx->downcount -= 6;
    // 7F2E00A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2E00A8:
    ctx->pc = 0x7F2E00A8u;
    // 7F2E00A8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2E00AC:
    ctx->pc = 0x7F2E00ACu;
    // 7F2E00AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2E00B0:
    ctx->pc = 0x7F2E00B0u;
    // 7F2E00B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2E00B4:
    ctx->pc = 0x7F2E00B4u;
    // 7F2E00B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2DC0EC;
        }
    }

label_7F2E00B8:
    ctx->pc = 0x7F2E00B8u;
    ctx->downcount -= 19;
    // 7F2E00B8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2E00BC:
    ctx->pc = 0x7F2E00BCu;
    // 7F2E00BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2E00C0:
    ctx->pc = 0x7F2E00C0u;
    // 7F2E00C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2E00C4:
    ctx->pc = 0x7F2E00C4u;
    // 7F2E00C4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2E00C8:
    ctx->pc = 0x7F2E00C8u;
    // 7F2E00C8: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2E00CC:
    ctx->pc = 0x7F2E00CCu;
    // 7F2E00CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2E00D0:
    ctx->pc = 0x7F2E00D0u;
    // 7F2E00D0: addi    r31, r30, 32
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2E00D4:
    ctx->pc = 0x7F2E00D4u;
    // 7F2E00D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2E00D8:
    ctx->pc = 0x7F2E00D8u;
    // 7F2E00D8: bl      0x7F022FB4
    {
            ctx->lr = 0x7F2E00DCu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F2E00DC:
    ctx->pc = 0x7F2E00DCu;
    ctx->downcount -= 2;
    // 7F2E00DC: cmpwi   r3, 0
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

label_7F2E00E0:
    ctx->pc = 0x7F2E00E0u;
    // 7F2E00E0: bc    4, 0, 0x7F2E00EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F2E00ECu;
            return;
        }
    }

label_7F2E00E4:
    ctx->pc = 0x7F2E00E4u;
    ctx->downcount -= 2;
    // 7F2E00E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2E00E8:
    ctx->pc = 0x7F2E00E8u;
    // 7F2E00E8: b       0x7F2E030C
    {
            ctx->pc = 0x7F2E030Cu;
            return;
    }

    ctx->pc = 0x7F2E00ECu;
    return;
return_dispatch_7F2DC0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2DC114u: goto label_7F2DC114;
    case 0x7F2DC120u: goto label_7F2DC120;
    case 0x7F2DC12Cu: goto label_7F2DC12C;
    case 0x7F2DC134u: goto label_7F2DC134;
    case 0x7F2DC198u: goto label_7F2DC198;
    case 0x7F2DC1A0u: goto label_7F2DC1A0;
    case 0x7F2DC214u: goto label_7F2DC214;
    case 0x7F2DC220u: goto label_7F2DC220;
    case 0x7F2DC230u: goto label_7F2DC230;
    case 0x7F2DC240u: goto label_7F2DC240;
    case 0x7F2DC250u: goto label_7F2DC250;
    case 0x7F2DC260u: goto label_7F2DC260;
    case 0x7F2DC30Cu: goto label_7F2DC30C;
    case 0x7F2DC334u: goto label_7F2DC334;
    case 0x7F2DC33Cu: goto label_7F2DC33C;
    case 0x7F2DC3A0u: goto label_7F2DC3A0;
    case 0x7F2DC3ACu: goto label_7F2DC3AC;
    case 0x7F2DC418u: goto label_7F2DC418;
    case 0x7F2DC434u: goto label_7F2DC434;
    case 0x7F2DC470u: goto label_7F2DC470;
    case 0x7F2DC480u: goto label_7F2DC480;
    case 0x7F2DC4C0u: goto label_7F2DC4C0;
    case 0x7F2DC4CCu: goto label_7F2DC4CC;
    case 0x7F2DC4D8u: goto label_7F2DC4D8;
    case 0x7F2DC4E4u: goto label_7F2DC4E4;
    case 0x7F2DC508u: goto label_7F2DC508;
    case 0x7F2DC514u: goto label_7F2DC514;
    case 0x7F2DC518u: goto label_7F2DC518;
    case 0x7F2DC520u: goto label_7F2DC520;
    case 0x7F2DC528u: goto label_7F2DC528;
    case 0x7F2DC52Cu: goto label_7F2DC52C;
    case 0x7F2DC534u: goto label_7F2DC534;
    case 0x7F2DC54Cu: goto label_7F2DC54C;
    case 0x7F2DC55Cu: goto label_7F2DC55C;
    case 0x7F2DC57Cu: goto label_7F2DC57C;
    case 0x7F2DC580u: goto label_7F2DC580;
    case 0x7F2DC5CCu: goto label_7F2DC5CC;
    case 0x7F2DC5F8u: goto label_7F2DC5F8;
    case 0x7F2DC60Cu: goto label_7F2DC60C;
    case 0x7F2DC628u: goto label_7F2DC628;
    case 0x7F2DC63Cu: goto label_7F2DC63C;
    case 0x7F2DC654u: goto label_7F2DC654;
    case 0x7F2DC668u: goto label_7F2DC668;
    case 0x7F2DC758u: goto label_7F2DC758;
    case 0x7F2DC76Cu: goto label_7F2DC76C;
    case 0x7F2DC780u: goto label_7F2DC780;
    case 0x7F2DC794u: goto label_7F2DC794;
    case 0x7F2DC7A8u: goto label_7F2DC7A8;
    case 0x7F2DC7BCu: goto label_7F2DC7BC;
    case 0x7F2DC7D0u: goto label_7F2DC7D0;
    case 0x7F2DC7E4u: goto label_7F2DC7E4;
    case 0x7F2DC804u: goto label_7F2DC804;
    case 0x7F2DC810u: goto label_7F2DC810;
    case 0x7F2DC818u: goto label_7F2DC818;
    case 0x7F2DC834u: goto label_7F2DC834;
    case 0x7F2DC844u: goto label_7F2DC844;
    case 0x7F2DC84Cu: goto label_7F2DC84C;
    case 0x7F2DC858u: goto label_7F2DC858;
    case 0x7F2DC868u: goto label_7F2DC868;
    case 0x7F2DC878u: goto label_7F2DC878;
    case 0x7F2DC88Cu: goto label_7F2DC88C;
    case 0x7F2DC89Cu: goto label_7F2DC89C;
    case 0x7F2DC8ACu: goto label_7F2DC8AC;
    case 0x7F2DC8C4u: goto label_7F2DC8C4;
    case 0x7F2DC8ECu: goto label_7F2DC8EC;
    case 0x7F2DC8FCu: goto label_7F2DC8FC;
    case 0x7F2DC914u: goto label_7F2DC914;
    case 0x7F2DC91Cu: goto label_7F2DC91C;
    case 0x7F2DC928u: goto label_7F2DC928;
    case 0x7F2DC938u: goto label_7F2DC938;
    case 0x7F2DC948u: goto label_7F2DC948;
    case 0x7F2DC95Cu: goto label_7F2DC95C;
    case 0x7F2DC990u: goto label_7F2DC990;
    case 0x7F2DC998u: goto label_7F2DC998;
    case 0x7F2DC9A8u: goto label_7F2DC9A8;
    case 0x7F2DC9B8u: goto label_7F2DC9B8;
    case 0x7F2DCA3Cu: goto label_7F2DCA3C;
    case 0x7F2DCA4Cu: goto label_7F2DCA4C;
    case 0x7F2DCA80u: goto label_7F2DCA80;
    case 0x7F2DCA8Cu: goto label_7F2DCA8C;
    case 0x7F2DCAA4u: goto label_7F2DCAA4;
    case 0x7F2DCAB8u: goto label_7F2DCAB8;
    case 0x7F2DCAC4u: goto label_7F2DCAC4;
    case 0x7F2DCAE0u: goto label_7F2DCAE0;
    case 0x7F2DCAF4u: goto label_7F2DCAF4;
    case 0x7F2DCB78u: goto label_7F2DCB78;
    case 0x7F2DCB88u: goto label_7F2DCB88;
    case 0x7F2DCBBCu: goto label_7F2DCBBC;
    case 0x7F2DCBC8u: goto label_7F2DCBC8;
    case 0x7F2DCBDCu: goto label_7F2DCBDC;
    case 0x7F2DCBF0u: goto label_7F2DCBF0;
    case 0x7F2DCBFCu: goto label_7F2DCBFC;
    case 0x7F2DCC10u: goto label_7F2DCC10;
    case 0x7F2DCC24u: goto label_7F2DCC24;
    case 0x7F2DCC5Cu: goto label_7F2DCC5C;
    case 0x7F2DCCC4u: goto label_7F2DCCC4;
    case 0x7F2DCCE0u: goto label_7F2DCCE0;
    case 0x7F2DCD18u: goto label_7F2DCD18;
    case 0x7F2DCD28u: goto label_7F2DCD28;
    case 0x7F2DCD98u: goto label_7F2DCD98;
    case 0x7F2DCDA0u: goto label_7F2DCDA0;
    case 0x7F2DCDACu: goto label_7F2DCDAC;
    case 0x7F2DCDB4u: goto label_7F2DCDB4;
    case 0x7F2DCDD4u: goto label_7F2DCDD4;
    case 0x7F2DCDDCu: goto label_7F2DCDDC;
    case 0x7F2DCE10u: goto label_7F2DCE10;
    case 0x7F2DCE20u: goto label_7F2DCE20;
    case 0x7F2DCE34u: goto label_7F2DCE34;
    case 0x7F2DCE44u: goto label_7F2DCE44;
    case 0x7F2DCE9Cu: goto label_7F2DCE9C;
    case 0x7F2DCEA4u: goto label_7F2DCEA4;
    case 0x7F2DCEE8u: goto label_7F2DCEE8;
    case 0x7F2DCF00u: goto label_7F2DCF00;
    case 0x7F2DCF40u: goto label_7F2DCF40;
    case 0x7F2DCF5Cu: goto label_7F2DCF5C;
    case 0x7F2DCF68u: goto label_7F2DCF68;
    case 0x7F2DCF70u: goto label_7F2DCF70;
    case 0x7F2DCFA8u: goto label_7F2DCFA8;
    case 0x7F2DCFB0u: goto label_7F2DCFB0;
    case 0x7F2DD014u: goto label_7F2DD014;
    case 0x7F2DD050u: goto label_7F2DD050;
    case 0x7F2DD080u: goto label_7F2DD080;
    case 0x7F2DD0C0u: goto label_7F2DD0C0;
    case 0x7F2DD138u: goto label_7F2DD138;
    case 0x7F2DD158u: goto label_7F2DD158;
    case 0x7F2DD18Cu: goto label_7F2DD18C;
    case 0x7F2DD194u: goto label_7F2DD194;
    case 0x7F2DD19Cu: goto label_7F2DD19C;
    case 0x7F2DD1B8u: goto label_7F2DD1B8;
    case 0x7F2DD234u: goto label_7F2DD234;
    case 0x7F2DD250u: goto label_7F2DD250;
    case 0x7F2DD268u: goto label_7F2DD268;
    case 0x7F2DD284u: goto label_7F2DD284;
    case 0x7F2DD29Cu: goto label_7F2DD29C;
    case 0x7F2DD2B8u: goto label_7F2DD2B8;
    case 0x7F2DD2CCu: goto label_7F2DD2CC;
    case 0x7F2DD2E0u: goto label_7F2DD2E0;
    case 0x7F2DD2F4u: goto label_7F2DD2F4;
    case 0x7F2DD308u: goto label_7F2DD308;
    case 0x7F2DD31Cu: goto label_7F2DD31C;
    case 0x7F2DD330u: goto label_7F2DD330;
    case 0x7F2DD338u: goto label_7F2DD338;
    case 0x7F2DD340u: goto label_7F2DD340;
    case 0x7F2DD348u: goto label_7F2DD348;
    case 0x7F2DD354u: goto label_7F2DD354;
    case 0x7F2DD360u: goto label_7F2DD360;
    case 0x7F2DD36Cu: goto label_7F2DD36C;
    case 0x7F2DD38Cu: goto label_7F2DD38C;
    case 0x7F2DD3A8u: goto label_7F2DD3A8;
    case 0x7F2DD3B0u: goto label_7F2DD3B0;
    case 0x7F2DD3B8u: goto label_7F2DD3B8;
    case 0x7F2DD3C0u: goto label_7F2DD3C0;
    case 0x7F2DD3C8u: goto label_7F2DD3C8;
    case 0x7F2DD3E4u: goto label_7F2DD3E4;
    case 0x7F2DD3FCu: goto label_7F2DD3FC;
    case 0x7F2DD44Cu: goto label_7F2DD44C;
    case 0x7F2DD460u: goto label_7F2DD460;
    case 0x7F2DD474u: goto label_7F2DD474;
    case 0x7F2DD488u: goto label_7F2DD488;
    case 0x7F2DD4A0u: goto label_7F2DD4A0;
    case 0x7F2DD4BCu: goto label_7F2DD4BC;
    case 0x7F2DD4D4u: goto label_7F2DD4D4;
    case 0x7F2DD4F0u: goto label_7F2DD4F0;
    case 0x7F2DD508u: goto label_7F2DD508;
    case 0x7F2DD524u: goto label_7F2DD524;
    case 0x7F2DD53Cu: goto label_7F2DD53C;
    case 0x7F2DD56Cu: goto label_7F2DD56C;
    case 0x7F2DD57Cu: goto label_7F2DD57C;
    case 0x7F2DD594u: goto label_7F2DD594;
    case 0x7F2DD5A0u: goto label_7F2DD5A0;
    case 0x7F2DD5BCu: goto label_7F2DD5BC;
    case 0x7F2DD5D4u: goto label_7F2DD5D4;
    case 0x7F2DD624u: goto label_7F2DD624;
    case 0x7F2DD638u: goto label_7F2DD638;
    case 0x7F2DD64Cu: goto label_7F2DD64C;
    case 0x7F2DD660u: goto label_7F2DD660;
    case 0x7F2DD67Cu: goto label_7F2DD67C;
    case 0x7F2DD698u: goto label_7F2DD698;
    case 0x7F2DD6B0u: goto label_7F2DD6B0;
    case 0x7F2DD6E0u: goto label_7F2DD6E0;
    case 0x7F2DD6F0u: goto label_7F2DD6F0;
    case 0x7F2DD708u: goto label_7F2DD708;
    case 0x7F2DD714u: goto label_7F2DD714;
    case 0x7F2DD764u: goto label_7F2DD764;
    case 0x7F2DD784u: goto label_7F2DD784;
    case 0x7F2DD790u: goto label_7F2DD790;
    case 0x7F2DD79Cu: goto label_7F2DD79C;
    case 0x7F2DD7ACu: goto label_7F2DD7AC;
    case 0x7F2DD7F8u: goto label_7F2DD7F8;
    case 0x7F2DD804u: goto label_7F2DD804;
    case 0x7F2DD80Cu: goto label_7F2DD80C;
    case 0x7F2DD824u: goto label_7F2DD824;
    case 0x7F2DD830u: goto label_7F2DD830;
    case 0x7F2DD844u: goto label_7F2DD844;
    case 0x7F2DD850u: goto label_7F2DD850;
    case 0x7F2DD858u: goto label_7F2DD858;
    case 0x7F2DD864u: goto label_7F2DD864;
    case 0x7F2DD868u: goto label_7F2DD868;
    case 0x7F2DD878u: goto label_7F2DD878;
    case 0x7F2DD88Cu: goto label_7F2DD88C;
    case 0x7F2DD8A0u: goto label_7F2DD8A0;
    case 0x7F2DD8B4u: goto label_7F2DD8B4;
    case 0x7F2DD900u: goto label_7F2DD900;
    case 0x7F2DD90Cu: goto label_7F2DD90C;
    case 0x7F2DD918u: goto label_7F2DD918;
    case 0x7F2DD924u: goto label_7F2DD924;
    case 0x7F2DD934u: goto label_7F2DD934;
    case 0x7F2DD948u: goto label_7F2DD948;
    case 0x7F2DD954u: goto label_7F2DD954;
    case 0x7F2DD968u: goto label_7F2DD968;
    case 0x7F2DD974u: goto label_7F2DD974;
    case 0x7F2DD97Cu: goto label_7F2DD97C;
    case 0x7F2DD988u: goto label_7F2DD988;
    case 0x7F2DD98Cu: goto label_7F2DD98C;
    case 0x7F2DD99Cu: goto label_7F2DD99C;
    case 0x7F2DD9B0u: goto label_7F2DD9B0;
    case 0x7F2DD9C4u: goto label_7F2DD9C4;
    case 0x7F2DD9D4u: goto label_7F2DD9D4;
    case 0x7F2DDA74u: goto label_7F2DDA74;
    case 0x7F2DDBB0u: goto label_7F2DDBB0;
    case 0x7F2DDBB8u: goto label_7F2DDBB8;
    case 0x7F2DDBD4u: goto label_7F2DDBD4;
    case 0x7F2DDC14u: goto label_7F2DDC14;
    case 0x7F2DDC24u: goto label_7F2DDC24;
    case 0x7F2DDC3Cu: goto label_7F2DDC3C;
    case 0x7F2DDC50u: goto label_7F2DDC50;
    case 0x7F2DDC5Cu: goto label_7F2DDC5C;
    case 0x7F2DDC70u: goto label_7F2DDC70;
    case 0x7F2DDC78u: goto label_7F2DDC78;
    case 0x7F2DDCD8u: goto label_7F2DDCD8;
    case 0x7F2DDD68u: goto label_7F2DDD68;
    case 0x7F2DDE50u: goto label_7F2DDE50;
    case 0x7F2DDE70u: goto label_7F2DDE70;
    case 0x7F2DDE98u: goto label_7F2DDE98;
    case 0x7F2DDEA4u: goto label_7F2DDEA4;
    case 0x7F2DDF34u: goto label_7F2DDF34;
    case 0x7F2DE030u: goto label_7F2DE030;
    case 0x7F2DE040u: goto label_7F2DE040;
    case 0x7F2DE05Cu: goto label_7F2DE05C;
    case 0x7F2DE068u: goto label_7F2DE068;
    case 0x7F2DE070u: goto label_7F2DE070;
    case 0x7F2DE094u: goto label_7F2DE094;
    case 0x7F2DE0A0u: goto label_7F2DE0A0;
    case 0x7F2DE0C4u: goto label_7F2DE0C4;
    case 0x7F2DE0D8u: goto label_7F2DE0D8;
    case 0x7F2DE0F4u: goto label_7F2DE0F4;
    case 0x7F2DE120u: goto label_7F2DE120;
    case 0x7F2DE12Cu: goto label_7F2DE12C;
    case 0x7F2DE138u: goto label_7F2DE138;
    case 0x7F2DE140u: goto label_7F2DE140;
    case 0x7F2DE1A0u: goto label_7F2DE1A0;
    case 0x7F2DE1B0u: goto label_7F2DE1B0;
    case 0x7F2DE1BCu: goto label_7F2DE1BC;
    case 0x7F2DE1C8u: goto label_7F2DE1C8;
    case 0x7F2DE1D0u: goto label_7F2DE1D0;
    case 0x7F2DE210u: goto label_7F2DE210;
    case 0x7F2DE280u: goto label_7F2DE280;
    case 0x7F2DE29Cu: goto label_7F2DE29C;
    case 0x7F2DE2B8u: goto label_7F2DE2B8;
    case 0x7F2DE2C4u: goto label_7F2DE2C4;
    case 0x7F2DE2ECu: goto label_7F2DE2EC;
    case 0x7F2DE348u: goto label_7F2DE348;
    case 0x7F2DE3A8u: goto label_7F2DE3A8;
    case 0x7F2DE3B8u: goto label_7F2DE3B8;
    case 0x7F2DE3F4u: goto label_7F2DE3F4;
    case 0x7F2DE408u: goto label_7F2DE408;
    case 0x7F2DE420u: goto label_7F2DE420;
    case 0x7F2DE444u: goto label_7F2DE444;
    case 0x7F2DE50Cu: goto label_7F2DE50C;
    case 0x7F2DE54Cu: goto label_7F2DE54C;
    case 0x7F2DE584u: goto label_7F2DE584;
    case 0x7F2DE5B4u: goto label_7F2DE5B4;
    case 0x7F2DE5E4u: goto label_7F2DE5E4;
    case 0x7F2DE614u: goto label_7F2DE614;
    case 0x7F2DE618u: goto label_7F2DE618;
    case 0x7F2DE6D0u: goto label_7F2DE6D0;
    case 0x7F2DE718u: goto label_7F2DE718;
    case 0x7F2DE734u: goto label_7F2DE734;
    case 0x7F2DE744u: goto label_7F2DE744;
    case 0x7F2DE7F8u: goto label_7F2DE7F8;
    case 0x7F2DE840u: goto label_7F2DE840;
    case 0x7F2DE944u: goto label_7F2DE944;
    case 0x7F2DEA7Cu: goto label_7F2DEA7C;
    case 0x7F2DEB50u: goto label_7F2DEB50;
    case 0x7F2DEB68u: goto label_7F2DEB68;
    case 0x7F2DEB74u: goto label_7F2DEB74;
    case 0x7F2DEB80u: goto label_7F2DEB80;
    case 0x7F2DEBA4u: goto label_7F2DEBA4;
    case 0x7F2DEBC0u: goto label_7F2DEBC0;
    case 0x7F2DEBCCu: goto label_7F2DEBCC;
    case 0x7F2DEBF4u: goto label_7F2DEBF4;
    case 0x7F2DEC24u: goto label_7F2DEC24;
    case 0x7F2DEC68u: goto label_7F2DEC68;
    case 0x7F2DEC94u: goto label_7F2DEC94;
    case 0x7F2DECC0u: goto label_7F2DECC0;
    case 0x7F2DECE0u: goto label_7F2DECE0;
    case 0x7F2DECF4u: goto label_7F2DECF4;
    case 0x7F2DED04u: goto label_7F2DED04;
    case 0x7F2DED1Cu: goto label_7F2DED1C;
    case 0x7F2DED24u: goto label_7F2DED24;
    case 0x7F2DED2Cu: goto label_7F2DED2C;
    case 0x7F2DED3Cu: goto label_7F2DED3C;
    case 0x7F2DED40u: goto label_7F2DED40;
    case 0x7F2DED88u: goto label_7F2DED88;
    case 0x7F2DED9Cu: goto label_7F2DED9C;
    case 0x7F2DEDB0u: goto label_7F2DEDB0;
    case 0x7F2DEDD4u: goto label_7F2DEDD4;
    case 0x7F2DEDE0u: goto label_7F2DEDE0;
    case 0x7F2DEDF4u: goto label_7F2DEDF4;
    case 0x7F2DEE0Cu: goto label_7F2DEE0C;
    case 0x7F2DEE24u: goto label_7F2DEE24;
    case 0x7F2DEE88u: goto label_7F2DEE88;
    case 0x7F2DEED0u: goto label_7F2DEED0;
    case 0x7F2DEEDCu: goto label_7F2DEEDC;
    case 0x7F2DEEE8u: goto label_7F2DEEE8;
    case 0x7F2DEF08u: goto label_7F2DEF08;
    case 0x7F2DEF20u: goto label_7F2DEF20;
    case 0x7F2DEF2Cu: goto label_7F2DEF2C;
    case 0x7F2DEF44u: goto label_7F2DEF44;
    case 0x7F2DEF50u: goto label_7F2DEF50;
    case 0x7F2DEF64u: goto label_7F2DEF64;
    case 0x7F2DEF70u: goto label_7F2DEF70;
    case 0x7F2DEF8Cu: goto label_7F2DEF8C;
    case 0x7F2DEF9Cu: goto label_7F2DEF9C;
    case 0x7F2DEFACu: goto label_7F2DEFAC;
    case 0x7F2DEFB8u: goto label_7F2DEFB8;
    case 0x7F2DEFC4u: goto label_7F2DEFC4;
    case 0x7F2DEFD4u: goto label_7F2DEFD4;
    case 0x7F2DEFE8u: goto label_7F2DEFE8;
    case 0x7F2DEFFCu: goto label_7F2DEFFC;
    case 0x7F2DF01Cu: goto label_7F2DF01C;
    case 0x7F2DF02Cu: goto label_7F2DF02C;
    case 0x7F2DF040u: goto label_7F2DF040;
    case 0x7F2DF04Cu: goto label_7F2DF04C;
    case 0x7F2DF054u: goto label_7F2DF054;
    case 0x7F2DF060u: goto label_7F2DF060;
    case 0x7F2DF070u: goto label_7F2DF070;
    case 0x7F2DF094u: goto label_7F2DF094;
    case 0x7F2DF0BCu: goto label_7F2DF0BC;
    case 0x7F2DF0E8u: goto label_7F2DF0E8;
    case 0x7F2DF10Cu: goto label_7F2DF10C;
    case 0x7F2DF118u: goto label_7F2DF118;
    case 0x7F2DF124u: goto label_7F2DF124;
    case 0x7F2DF130u: goto label_7F2DF130;
    case 0x7F2DF144u: goto label_7F2DF144;
    case 0x7F2DF150u: goto label_7F2DF150;
    case 0x7F2DF188u: goto label_7F2DF188;
    case 0x7F2DF1C8u: goto label_7F2DF1C8;
    case 0x7F2DF218u: goto label_7F2DF218;
    case 0x7F2DF220u: goto label_7F2DF220;
    case 0x7F2DF228u: goto label_7F2DF228;
    case 0x7F2DF238u: goto label_7F2DF238;
    case 0x7F2DF310u: goto label_7F2DF310;
    case 0x7F2DF3D8u: goto label_7F2DF3D8;
    case 0x7F2DF4C4u: goto label_7F2DF4C4;
    case 0x7F2DF520u: goto label_7F2DF520;
    case 0x7F2DF534u: goto label_7F2DF534;
    case 0x7F2DF540u: goto label_7F2DF540;
    case 0x7F2DF550u: goto label_7F2DF550;
    case 0x7F2DF55Cu: goto label_7F2DF55C;
    case 0x7F2DF588u: goto label_7F2DF588;
    case 0x7F2DF59Cu: goto label_7F2DF59C;
    case 0x7F2DF5A8u: goto label_7F2DF5A8;
    case 0x7F2DF5CCu: goto label_7F2DF5CC;
    case 0x7F2DF5E0u: goto label_7F2DF5E0;
    case 0x7F2DF5F4u: goto label_7F2DF5F4;
    case 0x7F2DF5FCu: goto label_7F2DF5FC;
    case 0x7F2DF634u: goto label_7F2DF634;
    case 0x7F2DF648u: goto label_7F2DF648;
    case 0x7F2DF654u: goto label_7F2DF654;
    case 0x7F2DF65Cu: goto label_7F2DF65C;
    case 0x7F2DF668u: goto label_7F2DF668;
    case 0x7F2DF674u: goto label_7F2DF674;
    case 0x7F2DF680u: goto label_7F2DF680;
    case 0x7F2DF68Cu: goto label_7F2DF68C;
    case 0x7F2DF6A4u: goto label_7F2DF6A4;
    case 0x7F2DF6B8u: goto label_7F2DF6B8;
    case 0x7F2DF6F4u: goto label_7F2DF6F4;
    case 0x7F2DF70Cu: goto label_7F2DF70C;
    case 0x7F2DF714u: goto label_7F2DF714;
    case 0x7F2DF724u: goto label_7F2DF724;
    case 0x7F2DF774u: goto label_7F2DF774;
    case 0x7F2DF778u: goto label_7F2DF778;
    case 0x7F2DF7B4u: goto label_7F2DF7B4;
    case 0x7F2DF7DCu: goto label_7F2DF7DC;
    case 0x7F2DF85Cu: goto label_7F2DF85C;
    case 0x7F2DF868u: goto label_7F2DF868;
    case 0x7F2DF870u: goto label_7F2DF870;
    case 0x7F2DFA58u: goto label_7F2DFA58;
    case 0x7F2DFBE8u: goto label_7F2DFBE8;
    case 0x7F2DFC30u: goto label_7F2DFC30;
    case 0x7F2DFC6Cu: goto label_7F2DFC6C;
    case 0x7F2DFCC0u: goto label_7F2DFCC0;
    case 0x7F2DFCCCu: goto label_7F2DFCCC;
    case 0x7F2DFD14u: goto label_7F2DFD14;
    case 0x7F2DFD38u: goto label_7F2DFD38;
    case 0x7F2DFD7Cu: goto label_7F2DFD7C;
    case 0x7F2DFD8Cu: goto label_7F2DFD8C;
    case 0x7F2DFD98u: goto label_7F2DFD98;
    case 0x7F2DFE50u: goto label_7F2DFE50;
    case 0x7F2DFE7Cu: goto label_7F2DFE7C;
    case 0x7F2DFE88u: goto label_7F2DFE88;
    case 0x7F2DFED0u: goto label_7F2DFED0;
    case 0x7F2DFEF4u: goto label_7F2DFEF4;
    case 0x7F2DFF38u: goto label_7F2DFF38;
    case 0x7F2DFF48u: goto label_7F2DFF48;
    case 0x7F2DFF58u: goto label_7F2DFF58;
    case 0x7F2E0014u: goto label_7F2E0014;
    case 0x7F2E0024u: goto label_7F2E0024;
    case 0x7F2E002Cu: goto label_7F2E002C;
    case 0x7F2E0034u: goto label_7F2E0034;
    case 0x7F2E005Cu: goto label_7F2E005C;
    case 0x7F2E0064u: goto label_7F2E0064;
    case 0x7F2E0094u: goto label_7F2E0094;
    case 0x7F2E009Cu: goto label_7F2E009C;
    case 0x7F2E00A4u: goto label_7F2E00A4;
    case 0x7F2E00DCu: goto label_7F2E00DC;
    default: return;
    }
}

