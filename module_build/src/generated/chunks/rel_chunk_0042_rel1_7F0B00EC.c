// DolRecomp output
#include "../generated.h"

static void loop_7F0B177C(CPUState* ctx) {
label_7F0B177C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0B177Cu;
    // 7F0B177C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0B1780u;
    // 7F0B1780: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0B1784u;
    // 7F0B1784: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0B1788u;
    // 7F0B1788: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0B178C: bc    16, 0, 0x7F0B177C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B177Cu;
                return;
            }
            goto label_7F0B177C;
        }
    }

    ctx->pc = 0x7F0B1790u;
}

static void loop_7F0B2D4C(CPUState* ctx) {
label_7F0B2D4C:
    ctx->downcount -= 4;
    // 7F0B2D4C: addi    r0, r3, 1544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1544);

    // 7F0B2D50: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F0B2D54u;
    // 7F0B2D54: stwx    r10, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    // 7F0B2D58: bc    16, 0, 0x7F0B2D4C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2D4Cu;
                return;
            }
            goto label_7F0B2D4C;
        }
    }

    ctx->pc = 0x7F0B2D5Cu;
}

void func_7F0B00EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0B00ECu: goto label_7F0B00EC;
    case 0x7F0B00F0u: goto label_7F0B00F0;
    case 0x7F0B00F4u: goto label_7F0B00F4;
    case 0x7F0B00F8u: goto label_7F0B00F8;
    case 0x7F0B00FCu: goto label_7F0B00FC;
    case 0x7F0B0100u: goto label_7F0B0100;
    case 0x7F0B0104u: goto label_7F0B0104;
    case 0x7F0B0108u: goto label_7F0B0108;
    case 0x7F0B010Cu: goto label_7F0B010C;
    case 0x7F0B0110u: goto label_7F0B0110;
    case 0x7F0B0114u: goto label_7F0B0114;
    case 0x7F0B0118u: goto label_7F0B0118;
    case 0x7F0B011Cu: goto label_7F0B011C;
    case 0x7F0B0120u: goto label_7F0B0120;
    case 0x7F0B0124u: goto label_7F0B0124;
    case 0x7F0B0128u: goto label_7F0B0128;
    case 0x7F0B012Cu: goto label_7F0B012C;
    case 0x7F0B0130u: goto label_7F0B0130;
    case 0x7F0B0134u: goto label_7F0B0134;
    case 0x7F0B0138u: goto label_7F0B0138;
    case 0x7F0B013Cu: goto label_7F0B013C;
    case 0x7F0B0140u: goto label_7F0B0140;
    case 0x7F0B0144u: goto label_7F0B0144;
    case 0x7F0B0148u: goto label_7F0B0148;
    case 0x7F0B014Cu: goto label_7F0B014C;
    case 0x7F0B0150u: goto label_7F0B0150;
    case 0x7F0B0154u: goto label_7F0B0154;
    case 0x7F0B0158u: goto label_7F0B0158;
    case 0x7F0B015Cu: goto label_7F0B015C;
    case 0x7F0B0160u: goto label_7F0B0160;
    case 0x7F0B0164u: goto label_7F0B0164;
    case 0x7F0B0168u: goto label_7F0B0168;
    case 0x7F0B016Cu: goto label_7F0B016C;
    case 0x7F0B0170u: goto label_7F0B0170;
    case 0x7F0B0174u: goto label_7F0B0174;
    case 0x7F0B0178u: goto label_7F0B0178;
    case 0x7F0B017Cu: goto label_7F0B017C;
    case 0x7F0B0180u: goto label_7F0B0180;
    case 0x7F0B0184u: goto label_7F0B0184;
    case 0x7F0B0188u: goto label_7F0B0188;
    case 0x7F0B018Cu: goto label_7F0B018C;
    case 0x7F0B0190u: goto label_7F0B0190;
    case 0x7F0B0194u: goto label_7F0B0194;
    case 0x7F0B0198u: goto label_7F0B0198;
    case 0x7F0B019Cu: goto label_7F0B019C;
    case 0x7F0B01A0u: goto label_7F0B01A0;
    case 0x7F0B01A4u: goto label_7F0B01A4;
    case 0x7F0B01A8u: goto label_7F0B01A8;
    case 0x7F0B01ACu: goto label_7F0B01AC;
    case 0x7F0B01B0u: goto label_7F0B01B0;
    case 0x7F0B01B4u: goto label_7F0B01B4;
    case 0x7F0B01B8u: goto label_7F0B01B8;
    case 0x7F0B01BCu: goto label_7F0B01BC;
    case 0x7F0B01C0u: goto label_7F0B01C0;
    case 0x7F0B01C4u: goto label_7F0B01C4;
    case 0x7F0B01C8u: goto label_7F0B01C8;
    case 0x7F0B01CCu: goto label_7F0B01CC;
    case 0x7F0B01D0u: goto label_7F0B01D0;
    case 0x7F0B01D4u: goto label_7F0B01D4;
    case 0x7F0B01D8u: goto label_7F0B01D8;
    case 0x7F0B01DCu: goto label_7F0B01DC;
    case 0x7F0B01E0u: goto label_7F0B01E0;
    case 0x7F0B01E4u: goto label_7F0B01E4;
    case 0x7F0B01E8u: goto label_7F0B01E8;
    case 0x7F0B01ECu: goto label_7F0B01EC;
    case 0x7F0B01F0u: goto label_7F0B01F0;
    case 0x7F0B01F4u: goto label_7F0B01F4;
    case 0x7F0B01F8u: goto label_7F0B01F8;
    case 0x7F0B01FCu: goto label_7F0B01FC;
    case 0x7F0B0200u: goto label_7F0B0200;
    case 0x7F0B0204u: goto label_7F0B0204;
    case 0x7F0B0208u: goto label_7F0B0208;
    case 0x7F0B020Cu: goto label_7F0B020C;
    case 0x7F0B0210u: goto label_7F0B0210;
    case 0x7F0B0214u: goto label_7F0B0214;
    case 0x7F0B0218u: goto label_7F0B0218;
    case 0x7F0B021Cu: goto label_7F0B021C;
    case 0x7F0B0220u: goto label_7F0B0220;
    case 0x7F0B0224u: goto label_7F0B0224;
    case 0x7F0B0228u: goto label_7F0B0228;
    case 0x7F0B022Cu: goto label_7F0B022C;
    case 0x7F0B0230u: goto label_7F0B0230;
    case 0x7F0B0234u: goto label_7F0B0234;
    case 0x7F0B0238u: goto label_7F0B0238;
    case 0x7F0B023Cu: goto label_7F0B023C;
    case 0x7F0B0240u: goto label_7F0B0240;
    case 0x7F0B0244u: goto label_7F0B0244;
    case 0x7F0B0248u: goto label_7F0B0248;
    case 0x7F0B024Cu: goto label_7F0B024C;
    case 0x7F0B0250u: goto label_7F0B0250;
    case 0x7F0B0254u: goto label_7F0B0254;
    case 0x7F0B0258u: goto label_7F0B0258;
    case 0x7F0B025Cu: goto label_7F0B025C;
    case 0x7F0B0260u: goto label_7F0B0260;
    case 0x7F0B0264u: goto label_7F0B0264;
    case 0x7F0B0268u: goto label_7F0B0268;
    case 0x7F0B026Cu: goto label_7F0B026C;
    case 0x7F0B0270u: goto label_7F0B0270;
    case 0x7F0B0274u: goto label_7F0B0274;
    case 0x7F0B0278u: goto label_7F0B0278;
    case 0x7F0B027Cu: goto label_7F0B027C;
    case 0x7F0B0280u: goto label_7F0B0280;
    case 0x7F0B0284u: goto label_7F0B0284;
    case 0x7F0B0288u: goto label_7F0B0288;
    case 0x7F0B028Cu: goto label_7F0B028C;
    case 0x7F0B0290u: goto label_7F0B0290;
    case 0x7F0B0294u: goto label_7F0B0294;
    case 0x7F0B0298u: goto label_7F0B0298;
    case 0x7F0B029Cu: goto label_7F0B029C;
    case 0x7F0B02A0u: goto label_7F0B02A0;
    case 0x7F0B02A4u: goto label_7F0B02A4;
    case 0x7F0B02A8u: goto label_7F0B02A8;
    case 0x7F0B02ACu: goto label_7F0B02AC;
    case 0x7F0B02B0u: goto label_7F0B02B0;
    case 0x7F0B02B4u: goto label_7F0B02B4;
    case 0x7F0B02B8u: goto label_7F0B02B8;
    case 0x7F0B02BCu: goto label_7F0B02BC;
    case 0x7F0B02C0u: goto label_7F0B02C0;
    case 0x7F0B02C4u: goto label_7F0B02C4;
    case 0x7F0B02C8u: goto label_7F0B02C8;
    case 0x7F0B02CCu: goto label_7F0B02CC;
    case 0x7F0B02D0u: goto label_7F0B02D0;
    case 0x7F0B02D4u: goto label_7F0B02D4;
    case 0x7F0B02D8u: goto label_7F0B02D8;
    case 0x7F0B02DCu: goto label_7F0B02DC;
    case 0x7F0B02E0u: goto label_7F0B02E0;
    case 0x7F0B02E4u: goto label_7F0B02E4;
    case 0x7F0B02E8u: goto label_7F0B02E8;
    case 0x7F0B02ECu: goto label_7F0B02EC;
    case 0x7F0B02F0u: goto label_7F0B02F0;
    case 0x7F0B02F4u: goto label_7F0B02F4;
    case 0x7F0B02F8u: goto label_7F0B02F8;
    case 0x7F0B02FCu: goto label_7F0B02FC;
    case 0x7F0B0300u: goto label_7F0B0300;
    case 0x7F0B0304u: goto label_7F0B0304;
    case 0x7F0B0308u: goto label_7F0B0308;
    case 0x7F0B030Cu: goto label_7F0B030C;
    case 0x7F0B0310u: goto label_7F0B0310;
    case 0x7F0B0314u: goto label_7F0B0314;
    case 0x7F0B0318u: goto label_7F0B0318;
    case 0x7F0B031Cu: goto label_7F0B031C;
    case 0x7F0B0320u: goto label_7F0B0320;
    case 0x7F0B0324u: goto label_7F0B0324;
    case 0x7F0B0328u: goto label_7F0B0328;
    case 0x7F0B032Cu: goto label_7F0B032C;
    case 0x7F0B0330u: goto label_7F0B0330;
    case 0x7F0B0334u: goto label_7F0B0334;
    case 0x7F0B0338u: goto label_7F0B0338;
    case 0x7F0B033Cu: goto label_7F0B033C;
    case 0x7F0B0340u: goto label_7F0B0340;
    case 0x7F0B0344u: goto label_7F0B0344;
    case 0x7F0B0348u: goto label_7F0B0348;
    case 0x7F0B034Cu: goto label_7F0B034C;
    case 0x7F0B0350u: goto label_7F0B0350;
    case 0x7F0B0354u: goto label_7F0B0354;
    case 0x7F0B0358u: goto label_7F0B0358;
    case 0x7F0B035Cu: goto label_7F0B035C;
    case 0x7F0B0360u: goto label_7F0B0360;
    case 0x7F0B0364u: goto label_7F0B0364;
    case 0x7F0B0368u: goto label_7F0B0368;
    case 0x7F0B036Cu: goto label_7F0B036C;
    case 0x7F0B0370u: goto label_7F0B0370;
    case 0x7F0B0374u: goto label_7F0B0374;
    case 0x7F0B0378u: goto label_7F0B0378;
    case 0x7F0B037Cu: goto label_7F0B037C;
    case 0x7F0B0380u: goto label_7F0B0380;
    case 0x7F0B0384u: goto label_7F0B0384;
    case 0x7F0B0388u: goto label_7F0B0388;
    case 0x7F0B038Cu: goto label_7F0B038C;
    case 0x7F0B0390u: goto label_7F0B0390;
    case 0x7F0B0394u: goto label_7F0B0394;
    case 0x7F0B0398u: goto label_7F0B0398;
    case 0x7F0B039Cu: goto label_7F0B039C;
    case 0x7F0B03A0u: goto label_7F0B03A0;
    case 0x7F0B03A4u: goto label_7F0B03A4;
    case 0x7F0B03A8u: goto label_7F0B03A8;
    case 0x7F0B03ACu: goto label_7F0B03AC;
    case 0x7F0B03B0u: goto label_7F0B03B0;
    case 0x7F0B03B4u: goto label_7F0B03B4;
    case 0x7F0B03B8u: goto label_7F0B03B8;
    case 0x7F0B03BCu: goto label_7F0B03BC;
    case 0x7F0B03C0u: goto label_7F0B03C0;
    case 0x7F0B03C4u: goto label_7F0B03C4;
    case 0x7F0B03C8u: goto label_7F0B03C8;
    case 0x7F0B03CCu: goto label_7F0B03CC;
    case 0x7F0B03D0u: goto label_7F0B03D0;
    case 0x7F0B03D4u: goto label_7F0B03D4;
    case 0x7F0B03D8u: goto label_7F0B03D8;
    case 0x7F0B03DCu: goto label_7F0B03DC;
    case 0x7F0B03E0u: goto label_7F0B03E0;
    case 0x7F0B03E4u: goto label_7F0B03E4;
    case 0x7F0B03E8u: goto label_7F0B03E8;
    case 0x7F0B03ECu: goto label_7F0B03EC;
    case 0x7F0B03F0u: goto label_7F0B03F0;
    case 0x7F0B03F4u: goto label_7F0B03F4;
    case 0x7F0B03F8u: goto label_7F0B03F8;
    case 0x7F0B03FCu: goto label_7F0B03FC;
    case 0x7F0B0400u: goto label_7F0B0400;
    case 0x7F0B0404u: goto label_7F0B0404;
    case 0x7F0B0408u: goto label_7F0B0408;
    case 0x7F0B040Cu: goto label_7F0B040C;
    case 0x7F0B0410u: goto label_7F0B0410;
    case 0x7F0B0414u: goto label_7F0B0414;
    case 0x7F0B0418u: goto label_7F0B0418;
    case 0x7F0B041Cu: goto label_7F0B041C;
    case 0x7F0B0420u: goto label_7F0B0420;
    case 0x7F0B0424u: goto label_7F0B0424;
    case 0x7F0B0428u: goto label_7F0B0428;
    case 0x7F0B042Cu: goto label_7F0B042C;
    case 0x7F0B0430u: goto label_7F0B0430;
    case 0x7F0B0434u: goto label_7F0B0434;
    case 0x7F0B0438u: goto label_7F0B0438;
    case 0x7F0B043Cu: goto label_7F0B043C;
    case 0x7F0B0440u: goto label_7F0B0440;
    case 0x7F0B0444u: goto label_7F0B0444;
    case 0x7F0B0448u: goto label_7F0B0448;
    case 0x7F0B044Cu: goto label_7F0B044C;
    case 0x7F0B0450u: goto label_7F0B0450;
    case 0x7F0B0454u: goto label_7F0B0454;
    case 0x7F0B0458u: goto label_7F0B0458;
    case 0x7F0B045Cu: goto label_7F0B045C;
    case 0x7F0B0460u: goto label_7F0B0460;
    case 0x7F0B0464u: goto label_7F0B0464;
    case 0x7F0B0468u: goto label_7F0B0468;
    case 0x7F0B046Cu: goto label_7F0B046C;
    case 0x7F0B0470u: goto label_7F0B0470;
    case 0x7F0B0474u: goto label_7F0B0474;
    case 0x7F0B0478u: goto label_7F0B0478;
    case 0x7F0B047Cu: goto label_7F0B047C;
    case 0x7F0B0480u: goto label_7F0B0480;
    case 0x7F0B0484u: goto label_7F0B0484;
    case 0x7F0B0488u: goto label_7F0B0488;
    case 0x7F0B048Cu: goto label_7F0B048C;
    case 0x7F0B0490u: goto label_7F0B0490;
    case 0x7F0B0494u: goto label_7F0B0494;
    case 0x7F0B0498u: goto label_7F0B0498;
    case 0x7F0B049Cu: goto label_7F0B049C;
    case 0x7F0B04A0u: goto label_7F0B04A0;
    case 0x7F0B04A4u: goto label_7F0B04A4;
    case 0x7F0B04A8u: goto label_7F0B04A8;
    case 0x7F0B04ACu: goto label_7F0B04AC;
    case 0x7F0B04B0u: goto label_7F0B04B0;
    case 0x7F0B04B4u: goto label_7F0B04B4;
    case 0x7F0B04B8u: goto label_7F0B04B8;
    case 0x7F0B04BCu: goto label_7F0B04BC;
    case 0x7F0B04C0u: goto label_7F0B04C0;
    case 0x7F0B04C4u: goto label_7F0B04C4;
    case 0x7F0B04C8u: goto label_7F0B04C8;
    case 0x7F0B04CCu: goto label_7F0B04CC;
    case 0x7F0B04D0u: goto label_7F0B04D0;
    case 0x7F0B04D4u: goto label_7F0B04D4;
    case 0x7F0B04D8u: goto label_7F0B04D8;
    case 0x7F0B04DCu: goto label_7F0B04DC;
    case 0x7F0B04E0u: goto label_7F0B04E0;
    case 0x7F0B04E4u: goto label_7F0B04E4;
    case 0x7F0B04E8u: goto label_7F0B04E8;
    case 0x7F0B04ECu: goto label_7F0B04EC;
    case 0x7F0B04F0u: goto label_7F0B04F0;
    case 0x7F0B04F4u: goto label_7F0B04F4;
    case 0x7F0B04F8u: goto label_7F0B04F8;
    case 0x7F0B04FCu: goto label_7F0B04FC;
    case 0x7F0B0500u: goto label_7F0B0500;
    case 0x7F0B0504u: goto label_7F0B0504;
    case 0x7F0B0508u: goto label_7F0B0508;
    case 0x7F0B050Cu: goto label_7F0B050C;
    case 0x7F0B0510u: goto label_7F0B0510;
    case 0x7F0B0514u: goto label_7F0B0514;
    case 0x7F0B0518u: goto label_7F0B0518;
    case 0x7F0B051Cu: goto label_7F0B051C;
    case 0x7F0B0520u: goto label_7F0B0520;
    case 0x7F0B0524u: goto label_7F0B0524;
    case 0x7F0B0528u: goto label_7F0B0528;
    case 0x7F0B052Cu: goto label_7F0B052C;
    case 0x7F0B0530u: goto label_7F0B0530;
    case 0x7F0B0534u: goto label_7F0B0534;
    case 0x7F0B0538u: goto label_7F0B0538;
    case 0x7F0B053Cu: goto label_7F0B053C;
    case 0x7F0B0540u: goto label_7F0B0540;
    case 0x7F0B0544u: goto label_7F0B0544;
    case 0x7F0B0548u: goto label_7F0B0548;
    case 0x7F0B054Cu: goto label_7F0B054C;
    case 0x7F0B0550u: goto label_7F0B0550;
    case 0x7F0B0554u: goto label_7F0B0554;
    case 0x7F0B0558u: goto label_7F0B0558;
    case 0x7F0B055Cu: goto label_7F0B055C;
    case 0x7F0B0560u: goto label_7F0B0560;
    case 0x7F0B0564u: goto label_7F0B0564;
    case 0x7F0B0568u: goto label_7F0B0568;
    case 0x7F0B056Cu: goto label_7F0B056C;
    case 0x7F0B0570u: goto label_7F0B0570;
    case 0x7F0B0574u: goto label_7F0B0574;
    case 0x7F0B0578u: goto label_7F0B0578;
    case 0x7F0B057Cu: goto label_7F0B057C;
    case 0x7F0B0580u: goto label_7F0B0580;
    case 0x7F0B0584u: goto label_7F0B0584;
    case 0x7F0B0588u: goto label_7F0B0588;
    case 0x7F0B058Cu: goto label_7F0B058C;
    case 0x7F0B0590u: goto label_7F0B0590;
    case 0x7F0B0594u: goto label_7F0B0594;
    case 0x7F0B0598u: goto label_7F0B0598;
    case 0x7F0B059Cu: goto label_7F0B059C;
    case 0x7F0B05A0u: goto label_7F0B05A0;
    case 0x7F0B05A4u: goto label_7F0B05A4;
    case 0x7F0B05A8u: goto label_7F0B05A8;
    case 0x7F0B05ACu: goto label_7F0B05AC;
    case 0x7F0B05B0u: goto label_7F0B05B0;
    case 0x7F0B05B4u: goto label_7F0B05B4;
    case 0x7F0B05B8u: goto label_7F0B05B8;
    case 0x7F0B05BCu: goto label_7F0B05BC;
    case 0x7F0B05C0u: goto label_7F0B05C0;
    case 0x7F0B05C4u: goto label_7F0B05C4;
    case 0x7F0B05C8u: goto label_7F0B05C8;
    case 0x7F0B05CCu: goto label_7F0B05CC;
    case 0x7F0B05D0u: goto label_7F0B05D0;
    case 0x7F0B05D4u: goto label_7F0B05D4;
    case 0x7F0B05D8u: goto label_7F0B05D8;
    case 0x7F0B05DCu: goto label_7F0B05DC;
    case 0x7F0B05E0u: goto label_7F0B05E0;
    case 0x7F0B05E4u: goto label_7F0B05E4;
    case 0x7F0B05E8u: goto label_7F0B05E8;
    case 0x7F0B05ECu: goto label_7F0B05EC;
    case 0x7F0B05F0u: goto label_7F0B05F0;
    case 0x7F0B05F4u: goto label_7F0B05F4;
    case 0x7F0B05F8u: goto label_7F0B05F8;
    case 0x7F0B05FCu: goto label_7F0B05FC;
    case 0x7F0B0600u: goto label_7F0B0600;
    case 0x7F0B0604u: goto label_7F0B0604;
    case 0x7F0B0608u: goto label_7F0B0608;
    case 0x7F0B060Cu: goto label_7F0B060C;
    case 0x7F0B0610u: goto label_7F0B0610;
    case 0x7F0B0614u: goto label_7F0B0614;
    case 0x7F0B0618u: goto label_7F0B0618;
    case 0x7F0B061Cu: goto label_7F0B061C;
    case 0x7F0B0620u: goto label_7F0B0620;
    case 0x7F0B0624u: goto label_7F0B0624;
    case 0x7F0B0628u: goto label_7F0B0628;
    case 0x7F0B062Cu: goto label_7F0B062C;
    case 0x7F0B0630u: goto label_7F0B0630;
    case 0x7F0B0634u: goto label_7F0B0634;
    case 0x7F0B0638u: goto label_7F0B0638;
    case 0x7F0B063Cu: goto label_7F0B063C;
    case 0x7F0B0640u: goto label_7F0B0640;
    case 0x7F0B0644u: goto label_7F0B0644;
    case 0x7F0B0648u: goto label_7F0B0648;
    case 0x7F0B064Cu: goto label_7F0B064C;
    case 0x7F0B0650u: goto label_7F0B0650;
    case 0x7F0B0654u: goto label_7F0B0654;
    case 0x7F0B0658u: goto label_7F0B0658;
    case 0x7F0B065Cu: goto label_7F0B065C;
    case 0x7F0B0660u: goto label_7F0B0660;
    case 0x7F0B0664u: goto label_7F0B0664;
    case 0x7F0B0668u: goto label_7F0B0668;
    case 0x7F0B066Cu: goto label_7F0B066C;
    case 0x7F0B0670u: goto label_7F0B0670;
    case 0x7F0B0674u: goto label_7F0B0674;
    case 0x7F0B0678u: goto label_7F0B0678;
    case 0x7F0B067Cu: goto label_7F0B067C;
    case 0x7F0B0680u: goto label_7F0B0680;
    case 0x7F0B0684u: goto label_7F0B0684;
    case 0x7F0B0688u: goto label_7F0B0688;
    case 0x7F0B068Cu: goto label_7F0B068C;
    case 0x7F0B0690u: goto label_7F0B0690;
    case 0x7F0B0694u: goto label_7F0B0694;
    case 0x7F0B0698u: goto label_7F0B0698;
    case 0x7F0B069Cu: goto label_7F0B069C;
    case 0x7F0B06A0u: goto label_7F0B06A0;
    case 0x7F0B06A4u: goto label_7F0B06A4;
    case 0x7F0B06A8u: goto label_7F0B06A8;
    case 0x7F0B06ACu: goto label_7F0B06AC;
    case 0x7F0B06B0u: goto label_7F0B06B0;
    case 0x7F0B06B4u: goto label_7F0B06B4;
    case 0x7F0B06B8u: goto label_7F0B06B8;
    case 0x7F0B06BCu: goto label_7F0B06BC;
    case 0x7F0B06C0u: goto label_7F0B06C0;
    case 0x7F0B06C4u: goto label_7F0B06C4;
    case 0x7F0B06C8u: goto label_7F0B06C8;
    case 0x7F0B06CCu: goto label_7F0B06CC;
    case 0x7F0B06D0u: goto label_7F0B06D0;
    case 0x7F0B06D4u: goto label_7F0B06D4;
    case 0x7F0B06D8u: goto label_7F0B06D8;
    case 0x7F0B06DCu: goto label_7F0B06DC;
    case 0x7F0B06E0u: goto label_7F0B06E0;
    case 0x7F0B06E4u: goto label_7F0B06E4;
    case 0x7F0B06E8u: goto label_7F0B06E8;
    case 0x7F0B06ECu: goto label_7F0B06EC;
    case 0x7F0B06F0u: goto label_7F0B06F0;
    case 0x7F0B06F4u: goto label_7F0B06F4;
    case 0x7F0B06F8u: goto label_7F0B06F8;
    case 0x7F0B06FCu: goto label_7F0B06FC;
    case 0x7F0B0700u: goto label_7F0B0700;
    case 0x7F0B0704u: goto label_7F0B0704;
    case 0x7F0B0708u: goto label_7F0B0708;
    case 0x7F0B070Cu: goto label_7F0B070C;
    case 0x7F0B0710u: goto label_7F0B0710;
    case 0x7F0B0714u: goto label_7F0B0714;
    case 0x7F0B0718u: goto label_7F0B0718;
    case 0x7F0B071Cu: goto label_7F0B071C;
    case 0x7F0B0720u: goto label_7F0B0720;
    case 0x7F0B0724u: goto label_7F0B0724;
    case 0x7F0B0728u: goto label_7F0B0728;
    case 0x7F0B072Cu: goto label_7F0B072C;
    case 0x7F0B0730u: goto label_7F0B0730;
    case 0x7F0B0734u: goto label_7F0B0734;
    case 0x7F0B0738u: goto label_7F0B0738;
    case 0x7F0B073Cu: goto label_7F0B073C;
    case 0x7F0B0740u: goto label_7F0B0740;
    case 0x7F0B0744u: goto label_7F0B0744;
    case 0x7F0B0748u: goto label_7F0B0748;
    case 0x7F0B074Cu: goto label_7F0B074C;
    case 0x7F0B0750u: goto label_7F0B0750;
    case 0x7F0B0754u: goto label_7F0B0754;
    case 0x7F0B0758u: goto label_7F0B0758;
    case 0x7F0B075Cu: goto label_7F0B075C;
    case 0x7F0B0760u: goto label_7F0B0760;
    case 0x7F0B0764u: goto label_7F0B0764;
    case 0x7F0B0768u: goto label_7F0B0768;
    case 0x7F0B076Cu: goto label_7F0B076C;
    case 0x7F0B0770u: goto label_7F0B0770;
    case 0x7F0B0774u: goto label_7F0B0774;
    case 0x7F0B0778u: goto label_7F0B0778;
    case 0x7F0B077Cu: goto label_7F0B077C;
    case 0x7F0B0780u: goto label_7F0B0780;
    case 0x7F0B0784u: goto label_7F0B0784;
    case 0x7F0B0788u: goto label_7F0B0788;
    case 0x7F0B078Cu: goto label_7F0B078C;
    case 0x7F0B0790u: goto label_7F0B0790;
    case 0x7F0B0794u: goto label_7F0B0794;
    case 0x7F0B0798u: goto label_7F0B0798;
    case 0x7F0B079Cu: goto label_7F0B079C;
    case 0x7F0B07A0u: goto label_7F0B07A0;
    case 0x7F0B07A4u: goto label_7F0B07A4;
    case 0x7F0B07A8u: goto label_7F0B07A8;
    case 0x7F0B07ACu: goto label_7F0B07AC;
    case 0x7F0B07B0u: goto label_7F0B07B0;
    case 0x7F0B07B4u: goto label_7F0B07B4;
    case 0x7F0B07B8u: goto label_7F0B07B8;
    case 0x7F0B07BCu: goto label_7F0B07BC;
    case 0x7F0B07C0u: goto label_7F0B07C0;
    case 0x7F0B07C4u: goto label_7F0B07C4;
    case 0x7F0B07C8u: goto label_7F0B07C8;
    case 0x7F0B07CCu: goto label_7F0B07CC;
    case 0x7F0B07D0u: goto label_7F0B07D0;
    case 0x7F0B07D4u: goto label_7F0B07D4;
    case 0x7F0B07D8u: goto label_7F0B07D8;
    case 0x7F0B07DCu: goto label_7F0B07DC;
    case 0x7F0B07E0u: goto label_7F0B07E0;
    case 0x7F0B07E4u: goto label_7F0B07E4;
    case 0x7F0B07E8u: goto label_7F0B07E8;
    case 0x7F0B07ECu: goto label_7F0B07EC;
    case 0x7F0B07F0u: goto label_7F0B07F0;
    case 0x7F0B07F4u: goto label_7F0B07F4;
    case 0x7F0B07F8u: goto label_7F0B07F8;
    case 0x7F0B07FCu: goto label_7F0B07FC;
    case 0x7F0B0800u: goto label_7F0B0800;
    case 0x7F0B0804u: goto label_7F0B0804;
    case 0x7F0B0808u: goto label_7F0B0808;
    case 0x7F0B080Cu: goto label_7F0B080C;
    case 0x7F0B0810u: goto label_7F0B0810;
    case 0x7F0B0814u: goto label_7F0B0814;
    case 0x7F0B0818u: goto label_7F0B0818;
    case 0x7F0B081Cu: goto label_7F0B081C;
    case 0x7F0B0820u: goto label_7F0B0820;
    case 0x7F0B0824u: goto label_7F0B0824;
    case 0x7F0B0828u: goto label_7F0B0828;
    case 0x7F0B082Cu: goto label_7F0B082C;
    case 0x7F0B0830u: goto label_7F0B0830;
    case 0x7F0B0834u: goto label_7F0B0834;
    case 0x7F0B0838u: goto label_7F0B0838;
    case 0x7F0B083Cu: goto label_7F0B083C;
    case 0x7F0B0840u: goto label_7F0B0840;
    case 0x7F0B0844u: goto label_7F0B0844;
    case 0x7F0B0848u: goto label_7F0B0848;
    case 0x7F0B084Cu: goto label_7F0B084C;
    case 0x7F0B0850u: goto label_7F0B0850;
    case 0x7F0B0854u: goto label_7F0B0854;
    case 0x7F0B0858u: goto label_7F0B0858;
    case 0x7F0B085Cu: goto label_7F0B085C;
    case 0x7F0B0860u: goto label_7F0B0860;
    case 0x7F0B0864u: goto label_7F0B0864;
    case 0x7F0B0868u: goto label_7F0B0868;
    case 0x7F0B086Cu: goto label_7F0B086C;
    case 0x7F0B0870u: goto label_7F0B0870;
    case 0x7F0B0874u: goto label_7F0B0874;
    case 0x7F0B0878u: goto label_7F0B0878;
    case 0x7F0B087Cu: goto label_7F0B087C;
    case 0x7F0B0880u: goto label_7F0B0880;
    case 0x7F0B0884u: goto label_7F0B0884;
    case 0x7F0B0888u: goto label_7F0B0888;
    case 0x7F0B088Cu: goto label_7F0B088C;
    case 0x7F0B0890u: goto label_7F0B0890;
    case 0x7F0B0894u: goto label_7F0B0894;
    case 0x7F0B0898u: goto label_7F0B0898;
    case 0x7F0B089Cu: goto label_7F0B089C;
    case 0x7F0B08A0u: goto label_7F0B08A0;
    case 0x7F0B08A4u: goto label_7F0B08A4;
    case 0x7F0B08A8u: goto label_7F0B08A8;
    case 0x7F0B08ACu: goto label_7F0B08AC;
    case 0x7F0B08B0u: goto label_7F0B08B0;
    case 0x7F0B08B4u: goto label_7F0B08B4;
    case 0x7F0B08B8u: goto label_7F0B08B8;
    case 0x7F0B08BCu: goto label_7F0B08BC;
    case 0x7F0B08C0u: goto label_7F0B08C0;
    case 0x7F0B08C4u: goto label_7F0B08C4;
    case 0x7F0B08C8u: goto label_7F0B08C8;
    case 0x7F0B08CCu: goto label_7F0B08CC;
    case 0x7F0B08D0u: goto label_7F0B08D0;
    case 0x7F0B08D4u: goto label_7F0B08D4;
    case 0x7F0B08D8u: goto label_7F0B08D8;
    case 0x7F0B08DCu: goto label_7F0B08DC;
    case 0x7F0B08E0u: goto label_7F0B08E0;
    case 0x7F0B08E4u: goto label_7F0B08E4;
    case 0x7F0B08E8u: goto label_7F0B08E8;
    case 0x7F0B08ECu: goto label_7F0B08EC;
    case 0x7F0B08F0u: goto label_7F0B08F0;
    case 0x7F0B08F4u: goto label_7F0B08F4;
    case 0x7F0B08F8u: goto label_7F0B08F8;
    case 0x7F0B08FCu: goto label_7F0B08FC;
    case 0x7F0B0900u: goto label_7F0B0900;
    case 0x7F0B0904u: goto label_7F0B0904;
    case 0x7F0B0908u: goto label_7F0B0908;
    case 0x7F0B090Cu: goto label_7F0B090C;
    case 0x7F0B0910u: goto label_7F0B0910;
    case 0x7F0B0914u: goto label_7F0B0914;
    case 0x7F0B0918u: goto label_7F0B0918;
    case 0x7F0B091Cu: goto label_7F0B091C;
    case 0x7F0B0920u: goto label_7F0B0920;
    case 0x7F0B0924u: goto label_7F0B0924;
    case 0x7F0B0928u: goto label_7F0B0928;
    case 0x7F0B092Cu: goto label_7F0B092C;
    case 0x7F0B0930u: goto label_7F0B0930;
    case 0x7F0B0934u: goto label_7F0B0934;
    case 0x7F0B0938u: goto label_7F0B0938;
    case 0x7F0B093Cu: goto label_7F0B093C;
    case 0x7F0B0940u: goto label_7F0B0940;
    case 0x7F0B0944u: goto label_7F0B0944;
    case 0x7F0B0948u: goto label_7F0B0948;
    case 0x7F0B094Cu: goto label_7F0B094C;
    case 0x7F0B0950u: goto label_7F0B0950;
    case 0x7F0B0954u: goto label_7F0B0954;
    case 0x7F0B0958u: goto label_7F0B0958;
    case 0x7F0B095Cu: goto label_7F0B095C;
    case 0x7F0B0960u: goto label_7F0B0960;
    case 0x7F0B0964u: goto label_7F0B0964;
    case 0x7F0B0968u: goto label_7F0B0968;
    case 0x7F0B096Cu: goto label_7F0B096C;
    case 0x7F0B0970u: goto label_7F0B0970;
    case 0x7F0B0974u: goto label_7F0B0974;
    case 0x7F0B0978u: goto label_7F0B0978;
    case 0x7F0B097Cu: goto label_7F0B097C;
    case 0x7F0B0980u: goto label_7F0B0980;
    case 0x7F0B0984u: goto label_7F0B0984;
    case 0x7F0B0988u: goto label_7F0B0988;
    case 0x7F0B098Cu: goto label_7F0B098C;
    case 0x7F0B0990u: goto label_7F0B0990;
    case 0x7F0B0994u: goto label_7F0B0994;
    case 0x7F0B0998u: goto label_7F0B0998;
    case 0x7F0B099Cu: goto label_7F0B099C;
    case 0x7F0B09A0u: goto label_7F0B09A0;
    case 0x7F0B09A4u: goto label_7F0B09A4;
    case 0x7F0B09A8u: goto label_7F0B09A8;
    case 0x7F0B09ACu: goto label_7F0B09AC;
    case 0x7F0B09B0u: goto label_7F0B09B0;
    case 0x7F0B09B4u: goto label_7F0B09B4;
    case 0x7F0B09B8u: goto label_7F0B09B8;
    case 0x7F0B09BCu: goto label_7F0B09BC;
    case 0x7F0B09C0u: goto label_7F0B09C0;
    case 0x7F0B09C4u: goto label_7F0B09C4;
    case 0x7F0B09C8u: goto label_7F0B09C8;
    case 0x7F0B09CCu: goto label_7F0B09CC;
    case 0x7F0B09D0u: goto label_7F0B09D0;
    case 0x7F0B09D4u: goto label_7F0B09D4;
    case 0x7F0B09D8u: goto label_7F0B09D8;
    case 0x7F0B09DCu: goto label_7F0B09DC;
    case 0x7F0B09E0u: goto label_7F0B09E0;
    case 0x7F0B09E4u: goto label_7F0B09E4;
    case 0x7F0B09E8u: goto label_7F0B09E8;
    case 0x7F0B09ECu: goto label_7F0B09EC;
    case 0x7F0B09F0u: goto label_7F0B09F0;
    case 0x7F0B09F4u: goto label_7F0B09F4;
    case 0x7F0B09F8u: goto label_7F0B09F8;
    case 0x7F0B09FCu: goto label_7F0B09FC;
    case 0x7F0B0A00u: goto label_7F0B0A00;
    case 0x7F0B0A04u: goto label_7F0B0A04;
    case 0x7F0B0A08u: goto label_7F0B0A08;
    case 0x7F0B0A0Cu: goto label_7F0B0A0C;
    case 0x7F0B0A10u: goto label_7F0B0A10;
    case 0x7F0B0A14u: goto label_7F0B0A14;
    case 0x7F0B0A18u: goto label_7F0B0A18;
    case 0x7F0B0A1Cu: goto label_7F0B0A1C;
    case 0x7F0B0A20u: goto label_7F0B0A20;
    case 0x7F0B0A24u: goto label_7F0B0A24;
    case 0x7F0B0A28u: goto label_7F0B0A28;
    case 0x7F0B0A2Cu: goto label_7F0B0A2C;
    case 0x7F0B0A30u: goto label_7F0B0A30;
    case 0x7F0B0A34u: goto label_7F0B0A34;
    case 0x7F0B0A38u: goto label_7F0B0A38;
    case 0x7F0B0A3Cu: goto label_7F0B0A3C;
    case 0x7F0B0A40u: goto label_7F0B0A40;
    case 0x7F0B0A44u: goto label_7F0B0A44;
    case 0x7F0B0A48u: goto label_7F0B0A48;
    case 0x7F0B0A4Cu: goto label_7F0B0A4C;
    case 0x7F0B0A50u: goto label_7F0B0A50;
    case 0x7F0B0A54u: goto label_7F0B0A54;
    case 0x7F0B0A58u: goto label_7F0B0A58;
    case 0x7F0B0A5Cu: goto label_7F0B0A5C;
    case 0x7F0B0A60u: goto label_7F0B0A60;
    case 0x7F0B0A64u: goto label_7F0B0A64;
    case 0x7F0B0A68u: goto label_7F0B0A68;
    case 0x7F0B0A6Cu: goto label_7F0B0A6C;
    case 0x7F0B0A70u: goto label_7F0B0A70;
    case 0x7F0B0A74u: goto label_7F0B0A74;
    case 0x7F0B0A78u: goto label_7F0B0A78;
    case 0x7F0B0A7Cu: goto label_7F0B0A7C;
    case 0x7F0B0A80u: goto label_7F0B0A80;
    case 0x7F0B0A84u: goto label_7F0B0A84;
    case 0x7F0B0A88u: goto label_7F0B0A88;
    case 0x7F0B0A8Cu: goto label_7F0B0A8C;
    case 0x7F0B0A90u: goto label_7F0B0A90;
    case 0x7F0B0A94u: goto label_7F0B0A94;
    case 0x7F0B0A98u: goto label_7F0B0A98;
    case 0x7F0B0A9Cu: goto label_7F0B0A9C;
    case 0x7F0B0AA0u: goto label_7F0B0AA0;
    case 0x7F0B0AA4u: goto label_7F0B0AA4;
    case 0x7F0B0AA8u: goto label_7F0B0AA8;
    case 0x7F0B0AACu: goto label_7F0B0AAC;
    case 0x7F0B0AB0u: goto label_7F0B0AB0;
    case 0x7F0B0AB4u: goto label_7F0B0AB4;
    case 0x7F0B0AB8u: goto label_7F0B0AB8;
    case 0x7F0B0ABCu: goto label_7F0B0ABC;
    case 0x7F0B0AC0u: goto label_7F0B0AC0;
    case 0x7F0B0AC4u: goto label_7F0B0AC4;
    case 0x7F0B0AC8u: goto label_7F0B0AC8;
    case 0x7F0B0ACCu: goto label_7F0B0ACC;
    case 0x7F0B0AD0u: goto label_7F0B0AD0;
    case 0x7F0B0AD4u: goto label_7F0B0AD4;
    case 0x7F0B0AD8u: goto label_7F0B0AD8;
    case 0x7F0B0ADCu: goto label_7F0B0ADC;
    case 0x7F0B0AE0u: goto label_7F0B0AE0;
    case 0x7F0B0AE4u: goto label_7F0B0AE4;
    case 0x7F0B0AE8u: goto label_7F0B0AE8;
    case 0x7F0B0AECu: goto label_7F0B0AEC;
    case 0x7F0B0AF0u: goto label_7F0B0AF0;
    case 0x7F0B0AF4u: goto label_7F0B0AF4;
    case 0x7F0B0AF8u: goto label_7F0B0AF8;
    case 0x7F0B0AFCu: goto label_7F0B0AFC;
    case 0x7F0B0B00u: goto label_7F0B0B00;
    case 0x7F0B0B04u: goto label_7F0B0B04;
    case 0x7F0B0B08u: goto label_7F0B0B08;
    case 0x7F0B0B0Cu: goto label_7F0B0B0C;
    case 0x7F0B0B10u: goto label_7F0B0B10;
    case 0x7F0B0B14u: goto label_7F0B0B14;
    case 0x7F0B0B18u: goto label_7F0B0B18;
    case 0x7F0B0B1Cu: goto label_7F0B0B1C;
    case 0x7F0B0B20u: goto label_7F0B0B20;
    case 0x7F0B0B24u: goto label_7F0B0B24;
    case 0x7F0B0B28u: goto label_7F0B0B28;
    case 0x7F0B0B2Cu: goto label_7F0B0B2C;
    case 0x7F0B0B30u: goto label_7F0B0B30;
    case 0x7F0B0B34u: goto label_7F0B0B34;
    case 0x7F0B0B38u: goto label_7F0B0B38;
    case 0x7F0B0B3Cu: goto label_7F0B0B3C;
    case 0x7F0B0B40u: goto label_7F0B0B40;
    case 0x7F0B0B44u: goto label_7F0B0B44;
    case 0x7F0B0B48u: goto label_7F0B0B48;
    case 0x7F0B0B4Cu: goto label_7F0B0B4C;
    case 0x7F0B0B50u: goto label_7F0B0B50;
    case 0x7F0B0B54u: goto label_7F0B0B54;
    case 0x7F0B0B58u: goto label_7F0B0B58;
    case 0x7F0B0B5Cu: goto label_7F0B0B5C;
    case 0x7F0B0B60u: goto label_7F0B0B60;
    case 0x7F0B0B64u: goto label_7F0B0B64;
    case 0x7F0B0B68u: goto label_7F0B0B68;
    case 0x7F0B0B6Cu: goto label_7F0B0B6C;
    case 0x7F0B0B70u: goto label_7F0B0B70;
    case 0x7F0B0B74u: goto label_7F0B0B74;
    case 0x7F0B0B78u: goto label_7F0B0B78;
    case 0x7F0B0B7Cu: goto label_7F0B0B7C;
    case 0x7F0B0B80u: goto label_7F0B0B80;
    case 0x7F0B0B84u: goto label_7F0B0B84;
    case 0x7F0B0B88u: goto label_7F0B0B88;
    case 0x7F0B0B8Cu: goto label_7F0B0B8C;
    case 0x7F0B0B90u: goto label_7F0B0B90;
    case 0x7F0B0B94u: goto label_7F0B0B94;
    case 0x7F0B0B98u: goto label_7F0B0B98;
    case 0x7F0B0B9Cu: goto label_7F0B0B9C;
    case 0x7F0B0BA0u: goto label_7F0B0BA0;
    case 0x7F0B0BA4u: goto label_7F0B0BA4;
    case 0x7F0B0BA8u: goto label_7F0B0BA8;
    case 0x7F0B0BACu: goto label_7F0B0BAC;
    case 0x7F0B0BB0u: goto label_7F0B0BB0;
    case 0x7F0B0BB4u: goto label_7F0B0BB4;
    case 0x7F0B0BB8u: goto label_7F0B0BB8;
    case 0x7F0B0BBCu: goto label_7F0B0BBC;
    case 0x7F0B0BC0u: goto label_7F0B0BC0;
    case 0x7F0B0BC4u: goto label_7F0B0BC4;
    case 0x7F0B0BC8u: goto label_7F0B0BC8;
    case 0x7F0B0BCCu: goto label_7F0B0BCC;
    case 0x7F0B0BD0u: goto label_7F0B0BD0;
    case 0x7F0B0BD4u: goto label_7F0B0BD4;
    case 0x7F0B0BD8u: goto label_7F0B0BD8;
    case 0x7F0B0BDCu: goto label_7F0B0BDC;
    case 0x7F0B0BE0u: goto label_7F0B0BE0;
    case 0x7F0B0BE4u: goto label_7F0B0BE4;
    case 0x7F0B0BE8u: goto label_7F0B0BE8;
    case 0x7F0B0BECu: goto label_7F0B0BEC;
    case 0x7F0B0BF0u: goto label_7F0B0BF0;
    case 0x7F0B0BF4u: goto label_7F0B0BF4;
    case 0x7F0B0BF8u: goto label_7F0B0BF8;
    case 0x7F0B0BFCu: goto label_7F0B0BFC;
    case 0x7F0B0C00u: goto label_7F0B0C00;
    case 0x7F0B0C04u: goto label_7F0B0C04;
    case 0x7F0B0C08u: goto label_7F0B0C08;
    case 0x7F0B0C0Cu: goto label_7F0B0C0C;
    case 0x7F0B0C10u: goto label_7F0B0C10;
    case 0x7F0B0C14u: goto label_7F0B0C14;
    case 0x7F0B0C18u: goto label_7F0B0C18;
    case 0x7F0B0C1Cu: goto label_7F0B0C1C;
    case 0x7F0B0C20u: goto label_7F0B0C20;
    case 0x7F0B0C24u: goto label_7F0B0C24;
    case 0x7F0B0C28u: goto label_7F0B0C28;
    case 0x7F0B0C2Cu: goto label_7F0B0C2C;
    case 0x7F0B0C30u: goto label_7F0B0C30;
    case 0x7F0B0C34u: goto label_7F0B0C34;
    case 0x7F0B0C38u: goto label_7F0B0C38;
    case 0x7F0B0C3Cu: goto label_7F0B0C3C;
    case 0x7F0B0C40u: goto label_7F0B0C40;
    case 0x7F0B0C44u: goto label_7F0B0C44;
    case 0x7F0B0C48u: goto label_7F0B0C48;
    case 0x7F0B0C4Cu: goto label_7F0B0C4C;
    case 0x7F0B0C50u: goto label_7F0B0C50;
    case 0x7F0B0C54u: goto label_7F0B0C54;
    case 0x7F0B0C58u: goto label_7F0B0C58;
    case 0x7F0B0C5Cu: goto label_7F0B0C5C;
    case 0x7F0B0C60u: goto label_7F0B0C60;
    case 0x7F0B0C64u: goto label_7F0B0C64;
    case 0x7F0B0C68u: goto label_7F0B0C68;
    case 0x7F0B0C6Cu: goto label_7F0B0C6C;
    case 0x7F0B0C70u: goto label_7F0B0C70;
    case 0x7F0B0C74u: goto label_7F0B0C74;
    case 0x7F0B0C78u: goto label_7F0B0C78;
    case 0x7F0B0C7Cu: goto label_7F0B0C7C;
    case 0x7F0B0C80u: goto label_7F0B0C80;
    case 0x7F0B0C84u: goto label_7F0B0C84;
    case 0x7F0B0C88u: goto label_7F0B0C88;
    case 0x7F0B0C8Cu: goto label_7F0B0C8C;
    case 0x7F0B0C90u: goto label_7F0B0C90;
    case 0x7F0B0C94u: goto label_7F0B0C94;
    case 0x7F0B0C98u: goto label_7F0B0C98;
    case 0x7F0B0C9Cu: goto label_7F0B0C9C;
    case 0x7F0B0CA0u: goto label_7F0B0CA0;
    case 0x7F0B0CA4u: goto label_7F0B0CA4;
    case 0x7F0B0CA8u: goto label_7F0B0CA8;
    case 0x7F0B0CACu: goto label_7F0B0CAC;
    case 0x7F0B0CB0u: goto label_7F0B0CB0;
    case 0x7F0B0CB4u: goto label_7F0B0CB4;
    case 0x7F0B0CB8u: goto label_7F0B0CB8;
    case 0x7F0B0CBCu: goto label_7F0B0CBC;
    case 0x7F0B0CC0u: goto label_7F0B0CC0;
    case 0x7F0B0CC4u: goto label_7F0B0CC4;
    case 0x7F0B0CC8u: goto label_7F0B0CC8;
    case 0x7F0B0CCCu: goto label_7F0B0CCC;
    case 0x7F0B0CD0u: goto label_7F0B0CD0;
    case 0x7F0B0CD4u: goto label_7F0B0CD4;
    case 0x7F0B0CD8u: goto label_7F0B0CD8;
    case 0x7F0B0CDCu: goto label_7F0B0CDC;
    case 0x7F0B0CE0u: goto label_7F0B0CE0;
    case 0x7F0B0CE4u: goto label_7F0B0CE4;
    case 0x7F0B0CE8u: goto label_7F0B0CE8;
    case 0x7F0B0CECu: goto label_7F0B0CEC;
    case 0x7F0B0CF0u: goto label_7F0B0CF0;
    case 0x7F0B0CF4u: goto label_7F0B0CF4;
    case 0x7F0B0CF8u: goto label_7F0B0CF8;
    case 0x7F0B0CFCu: goto label_7F0B0CFC;
    case 0x7F0B0D00u: goto label_7F0B0D00;
    case 0x7F0B0D04u: goto label_7F0B0D04;
    case 0x7F0B0D08u: goto label_7F0B0D08;
    case 0x7F0B0D0Cu: goto label_7F0B0D0C;
    case 0x7F0B0D10u: goto label_7F0B0D10;
    case 0x7F0B0D14u: goto label_7F0B0D14;
    case 0x7F0B0D18u: goto label_7F0B0D18;
    case 0x7F0B0D1Cu: goto label_7F0B0D1C;
    case 0x7F0B0D20u: goto label_7F0B0D20;
    case 0x7F0B0D24u: goto label_7F0B0D24;
    case 0x7F0B0D28u: goto label_7F0B0D28;
    case 0x7F0B0D2Cu: goto label_7F0B0D2C;
    case 0x7F0B0D30u: goto label_7F0B0D30;
    case 0x7F0B0D34u: goto label_7F0B0D34;
    case 0x7F0B0D38u: goto label_7F0B0D38;
    case 0x7F0B0D3Cu: goto label_7F0B0D3C;
    case 0x7F0B0D40u: goto label_7F0B0D40;
    case 0x7F0B0D44u: goto label_7F0B0D44;
    case 0x7F0B0D48u: goto label_7F0B0D48;
    case 0x7F0B0D4Cu: goto label_7F0B0D4C;
    case 0x7F0B0D50u: goto label_7F0B0D50;
    case 0x7F0B0D54u: goto label_7F0B0D54;
    case 0x7F0B0D58u: goto label_7F0B0D58;
    case 0x7F0B0D5Cu: goto label_7F0B0D5C;
    case 0x7F0B0D60u: goto label_7F0B0D60;
    case 0x7F0B0D64u: goto label_7F0B0D64;
    case 0x7F0B0D68u: goto label_7F0B0D68;
    case 0x7F0B0D6Cu: goto label_7F0B0D6C;
    case 0x7F0B0D70u: goto label_7F0B0D70;
    case 0x7F0B0D74u: goto label_7F0B0D74;
    case 0x7F0B0D78u: goto label_7F0B0D78;
    case 0x7F0B0D7Cu: goto label_7F0B0D7C;
    case 0x7F0B0D80u: goto label_7F0B0D80;
    case 0x7F0B0D84u: goto label_7F0B0D84;
    case 0x7F0B0D88u: goto label_7F0B0D88;
    case 0x7F0B0D8Cu: goto label_7F0B0D8C;
    case 0x7F0B0D90u: goto label_7F0B0D90;
    case 0x7F0B0D94u: goto label_7F0B0D94;
    case 0x7F0B0D98u: goto label_7F0B0D98;
    case 0x7F0B0D9Cu: goto label_7F0B0D9C;
    case 0x7F0B0DA0u: goto label_7F0B0DA0;
    case 0x7F0B0DA4u: goto label_7F0B0DA4;
    case 0x7F0B0DA8u: goto label_7F0B0DA8;
    case 0x7F0B0DACu: goto label_7F0B0DAC;
    case 0x7F0B0DB0u: goto label_7F0B0DB0;
    case 0x7F0B0DB4u: goto label_7F0B0DB4;
    case 0x7F0B0DB8u: goto label_7F0B0DB8;
    case 0x7F0B0DBCu: goto label_7F0B0DBC;
    case 0x7F0B0DC0u: goto label_7F0B0DC0;
    case 0x7F0B0DC4u: goto label_7F0B0DC4;
    case 0x7F0B0DC8u: goto label_7F0B0DC8;
    case 0x7F0B0DCCu: goto label_7F0B0DCC;
    case 0x7F0B0DD0u: goto label_7F0B0DD0;
    case 0x7F0B0DD4u: goto label_7F0B0DD4;
    case 0x7F0B0DD8u: goto label_7F0B0DD8;
    case 0x7F0B0DDCu: goto label_7F0B0DDC;
    case 0x7F0B0DE0u: goto label_7F0B0DE0;
    case 0x7F0B0DE4u: goto label_7F0B0DE4;
    case 0x7F0B0DE8u: goto label_7F0B0DE8;
    case 0x7F0B0DECu: goto label_7F0B0DEC;
    case 0x7F0B0DF0u: goto label_7F0B0DF0;
    case 0x7F0B0DF4u: goto label_7F0B0DF4;
    case 0x7F0B0DF8u: goto label_7F0B0DF8;
    case 0x7F0B0DFCu: goto label_7F0B0DFC;
    case 0x7F0B0E00u: goto label_7F0B0E00;
    case 0x7F0B0E04u: goto label_7F0B0E04;
    case 0x7F0B0E08u: goto label_7F0B0E08;
    case 0x7F0B0E0Cu: goto label_7F0B0E0C;
    case 0x7F0B0E10u: goto label_7F0B0E10;
    case 0x7F0B0E14u: goto label_7F0B0E14;
    case 0x7F0B0E18u: goto label_7F0B0E18;
    case 0x7F0B0E1Cu: goto label_7F0B0E1C;
    case 0x7F0B0E20u: goto label_7F0B0E20;
    case 0x7F0B0E24u: goto label_7F0B0E24;
    case 0x7F0B0E28u: goto label_7F0B0E28;
    case 0x7F0B0E2Cu: goto label_7F0B0E2C;
    case 0x7F0B0E30u: goto label_7F0B0E30;
    case 0x7F0B0E34u: goto label_7F0B0E34;
    case 0x7F0B0E38u: goto label_7F0B0E38;
    case 0x7F0B0E3Cu: goto label_7F0B0E3C;
    case 0x7F0B0E40u: goto label_7F0B0E40;
    case 0x7F0B0E44u: goto label_7F0B0E44;
    case 0x7F0B0E48u: goto label_7F0B0E48;
    case 0x7F0B0E4Cu: goto label_7F0B0E4C;
    case 0x7F0B0E50u: goto label_7F0B0E50;
    case 0x7F0B0E54u: goto label_7F0B0E54;
    case 0x7F0B0E58u: goto label_7F0B0E58;
    case 0x7F0B0E5Cu: goto label_7F0B0E5C;
    case 0x7F0B0E60u: goto label_7F0B0E60;
    case 0x7F0B0E64u: goto label_7F0B0E64;
    case 0x7F0B0E68u: goto label_7F0B0E68;
    case 0x7F0B0E6Cu: goto label_7F0B0E6C;
    case 0x7F0B0E70u: goto label_7F0B0E70;
    case 0x7F0B0E74u: goto label_7F0B0E74;
    case 0x7F0B0E78u: goto label_7F0B0E78;
    case 0x7F0B0E7Cu: goto label_7F0B0E7C;
    case 0x7F0B0E80u: goto label_7F0B0E80;
    case 0x7F0B0E84u: goto label_7F0B0E84;
    case 0x7F0B0E88u: goto label_7F0B0E88;
    case 0x7F0B0E8Cu: goto label_7F0B0E8C;
    case 0x7F0B0E90u: goto label_7F0B0E90;
    case 0x7F0B0E94u: goto label_7F0B0E94;
    case 0x7F0B0E98u: goto label_7F0B0E98;
    case 0x7F0B0E9Cu: goto label_7F0B0E9C;
    case 0x7F0B0EA0u: goto label_7F0B0EA0;
    case 0x7F0B0EA4u: goto label_7F0B0EA4;
    case 0x7F0B0EA8u: goto label_7F0B0EA8;
    case 0x7F0B0EACu: goto label_7F0B0EAC;
    case 0x7F0B0EB0u: goto label_7F0B0EB0;
    case 0x7F0B0EB4u: goto label_7F0B0EB4;
    case 0x7F0B0EB8u: goto label_7F0B0EB8;
    case 0x7F0B0EBCu: goto label_7F0B0EBC;
    case 0x7F0B0EC0u: goto label_7F0B0EC0;
    case 0x7F0B0EC4u: goto label_7F0B0EC4;
    case 0x7F0B0EC8u: goto label_7F0B0EC8;
    case 0x7F0B0ECCu: goto label_7F0B0ECC;
    case 0x7F0B0ED0u: goto label_7F0B0ED0;
    case 0x7F0B0ED4u: goto label_7F0B0ED4;
    case 0x7F0B0ED8u: goto label_7F0B0ED8;
    case 0x7F0B0EDCu: goto label_7F0B0EDC;
    case 0x7F0B0EE0u: goto label_7F0B0EE0;
    case 0x7F0B0EE4u: goto label_7F0B0EE4;
    case 0x7F0B0EE8u: goto label_7F0B0EE8;
    case 0x7F0B0EECu: goto label_7F0B0EEC;
    case 0x7F0B0EF0u: goto label_7F0B0EF0;
    case 0x7F0B0EF4u: goto label_7F0B0EF4;
    case 0x7F0B0EF8u: goto label_7F0B0EF8;
    case 0x7F0B0EFCu: goto label_7F0B0EFC;
    case 0x7F0B0F00u: goto label_7F0B0F00;
    case 0x7F0B0F04u: goto label_7F0B0F04;
    case 0x7F0B0F08u: goto label_7F0B0F08;
    case 0x7F0B0F0Cu: goto label_7F0B0F0C;
    case 0x7F0B0F10u: goto label_7F0B0F10;
    case 0x7F0B0F14u: goto label_7F0B0F14;
    case 0x7F0B0F18u: goto label_7F0B0F18;
    case 0x7F0B0F1Cu: goto label_7F0B0F1C;
    case 0x7F0B0F20u: goto label_7F0B0F20;
    case 0x7F0B0F24u: goto label_7F0B0F24;
    case 0x7F0B0F28u: goto label_7F0B0F28;
    case 0x7F0B0F2Cu: goto label_7F0B0F2C;
    case 0x7F0B0F30u: goto label_7F0B0F30;
    case 0x7F0B0F34u: goto label_7F0B0F34;
    case 0x7F0B0F38u: goto label_7F0B0F38;
    case 0x7F0B0F3Cu: goto label_7F0B0F3C;
    case 0x7F0B0F40u: goto label_7F0B0F40;
    case 0x7F0B0F44u: goto label_7F0B0F44;
    case 0x7F0B0F48u: goto label_7F0B0F48;
    case 0x7F0B0F4Cu: goto label_7F0B0F4C;
    case 0x7F0B0F50u: goto label_7F0B0F50;
    case 0x7F0B0F54u: goto label_7F0B0F54;
    case 0x7F0B0F58u: goto label_7F0B0F58;
    case 0x7F0B0F5Cu: goto label_7F0B0F5C;
    case 0x7F0B0F60u: goto label_7F0B0F60;
    case 0x7F0B0F64u: goto label_7F0B0F64;
    case 0x7F0B0F68u: goto label_7F0B0F68;
    case 0x7F0B0F6Cu: goto label_7F0B0F6C;
    case 0x7F0B0F70u: goto label_7F0B0F70;
    case 0x7F0B0F74u: goto label_7F0B0F74;
    case 0x7F0B0F78u: goto label_7F0B0F78;
    case 0x7F0B0F7Cu: goto label_7F0B0F7C;
    case 0x7F0B0F80u: goto label_7F0B0F80;
    case 0x7F0B0F84u: goto label_7F0B0F84;
    case 0x7F0B0F88u: goto label_7F0B0F88;
    case 0x7F0B0F8Cu: goto label_7F0B0F8C;
    case 0x7F0B0F90u: goto label_7F0B0F90;
    case 0x7F0B0F94u: goto label_7F0B0F94;
    case 0x7F0B0F98u: goto label_7F0B0F98;
    case 0x7F0B0F9Cu: goto label_7F0B0F9C;
    case 0x7F0B0FA0u: goto label_7F0B0FA0;
    case 0x7F0B0FA4u: goto label_7F0B0FA4;
    case 0x7F0B0FA8u: goto label_7F0B0FA8;
    case 0x7F0B0FACu: goto label_7F0B0FAC;
    case 0x7F0B0FB0u: goto label_7F0B0FB0;
    case 0x7F0B0FB4u: goto label_7F0B0FB4;
    case 0x7F0B0FB8u: goto label_7F0B0FB8;
    case 0x7F0B0FBCu: goto label_7F0B0FBC;
    case 0x7F0B0FC0u: goto label_7F0B0FC0;
    case 0x7F0B0FC4u: goto label_7F0B0FC4;
    case 0x7F0B0FC8u: goto label_7F0B0FC8;
    case 0x7F0B0FCCu: goto label_7F0B0FCC;
    case 0x7F0B0FD0u: goto label_7F0B0FD0;
    case 0x7F0B0FD4u: goto label_7F0B0FD4;
    case 0x7F0B0FD8u: goto label_7F0B0FD8;
    case 0x7F0B0FDCu: goto label_7F0B0FDC;
    case 0x7F0B0FE0u: goto label_7F0B0FE0;
    case 0x7F0B0FE4u: goto label_7F0B0FE4;
    case 0x7F0B0FE8u: goto label_7F0B0FE8;
    case 0x7F0B0FECu: goto label_7F0B0FEC;
    case 0x7F0B0FF0u: goto label_7F0B0FF0;
    case 0x7F0B0FF4u: goto label_7F0B0FF4;
    case 0x7F0B0FF8u: goto label_7F0B0FF8;
    case 0x7F0B0FFCu: goto label_7F0B0FFC;
    case 0x7F0B1000u: goto label_7F0B1000;
    case 0x7F0B1004u: goto label_7F0B1004;
    case 0x7F0B1008u: goto label_7F0B1008;
    case 0x7F0B100Cu: goto label_7F0B100C;
    case 0x7F0B1010u: goto label_7F0B1010;
    case 0x7F0B1014u: goto label_7F0B1014;
    case 0x7F0B1018u: goto label_7F0B1018;
    case 0x7F0B101Cu: goto label_7F0B101C;
    case 0x7F0B1020u: goto label_7F0B1020;
    case 0x7F0B1024u: goto label_7F0B1024;
    case 0x7F0B1028u: goto label_7F0B1028;
    case 0x7F0B102Cu: goto label_7F0B102C;
    case 0x7F0B1030u: goto label_7F0B1030;
    case 0x7F0B1034u: goto label_7F0B1034;
    case 0x7F0B1038u: goto label_7F0B1038;
    case 0x7F0B103Cu: goto label_7F0B103C;
    case 0x7F0B1040u: goto label_7F0B1040;
    case 0x7F0B1044u: goto label_7F0B1044;
    case 0x7F0B1048u: goto label_7F0B1048;
    case 0x7F0B104Cu: goto label_7F0B104C;
    case 0x7F0B1050u: goto label_7F0B1050;
    case 0x7F0B1054u: goto label_7F0B1054;
    case 0x7F0B1058u: goto label_7F0B1058;
    case 0x7F0B105Cu: goto label_7F0B105C;
    case 0x7F0B1060u: goto label_7F0B1060;
    case 0x7F0B1064u: goto label_7F0B1064;
    case 0x7F0B1068u: goto label_7F0B1068;
    case 0x7F0B106Cu: goto label_7F0B106C;
    case 0x7F0B1070u: goto label_7F0B1070;
    case 0x7F0B1074u: goto label_7F0B1074;
    case 0x7F0B1078u: goto label_7F0B1078;
    case 0x7F0B107Cu: goto label_7F0B107C;
    case 0x7F0B1080u: goto label_7F0B1080;
    case 0x7F0B1084u: goto label_7F0B1084;
    case 0x7F0B1088u: goto label_7F0B1088;
    case 0x7F0B108Cu: goto label_7F0B108C;
    case 0x7F0B1090u: goto label_7F0B1090;
    case 0x7F0B1094u: goto label_7F0B1094;
    case 0x7F0B1098u: goto label_7F0B1098;
    case 0x7F0B109Cu: goto label_7F0B109C;
    case 0x7F0B10A0u: goto label_7F0B10A0;
    case 0x7F0B10A4u: goto label_7F0B10A4;
    case 0x7F0B10A8u: goto label_7F0B10A8;
    case 0x7F0B10ACu: goto label_7F0B10AC;
    case 0x7F0B10B0u: goto label_7F0B10B0;
    case 0x7F0B10B4u: goto label_7F0B10B4;
    case 0x7F0B10B8u: goto label_7F0B10B8;
    case 0x7F0B10BCu: goto label_7F0B10BC;
    case 0x7F0B10C0u: goto label_7F0B10C0;
    case 0x7F0B10C4u: goto label_7F0B10C4;
    case 0x7F0B10C8u: goto label_7F0B10C8;
    case 0x7F0B10CCu: goto label_7F0B10CC;
    case 0x7F0B10D0u: goto label_7F0B10D0;
    case 0x7F0B10D4u: goto label_7F0B10D4;
    case 0x7F0B10D8u: goto label_7F0B10D8;
    case 0x7F0B10DCu: goto label_7F0B10DC;
    case 0x7F0B10E0u: goto label_7F0B10E0;
    case 0x7F0B10E4u: goto label_7F0B10E4;
    case 0x7F0B10E8u: goto label_7F0B10E8;
    case 0x7F0B10ECu: goto label_7F0B10EC;
    case 0x7F0B10F0u: goto label_7F0B10F0;
    case 0x7F0B10F4u: goto label_7F0B10F4;
    case 0x7F0B10F8u: goto label_7F0B10F8;
    case 0x7F0B10FCu: goto label_7F0B10FC;
    case 0x7F0B1100u: goto label_7F0B1100;
    case 0x7F0B1104u: goto label_7F0B1104;
    case 0x7F0B1108u: goto label_7F0B1108;
    case 0x7F0B110Cu: goto label_7F0B110C;
    case 0x7F0B1110u: goto label_7F0B1110;
    case 0x7F0B1114u: goto label_7F0B1114;
    case 0x7F0B1118u: goto label_7F0B1118;
    case 0x7F0B111Cu: goto label_7F0B111C;
    case 0x7F0B1120u: goto label_7F0B1120;
    case 0x7F0B1124u: goto label_7F0B1124;
    case 0x7F0B1128u: goto label_7F0B1128;
    case 0x7F0B112Cu: goto label_7F0B112C;
    case 0x7F0B1130u: goto label_7F0B1130;
    case 0x7F0B1134u: goto label_7F0B1134;
    case 0x7F0B1138u: goto label_7F0B1138;
    case 0x7F0B113Cu: goto label_7F0B113C;
    case 0x7F0B1140u: goto label_7F0B1140;
    case 0x7F0B1144u: goto label_7F0B1144;
    case 0x7F0B1148u: goto label_7F0B1148;
    case 0x7F0B114Cu: goto label_7F0B114C;
    case 0x7F0B1150u: goto label_7F0B1150;
    case 0x7F0B1154u: goto label_7F0B1154;
    case 0x7F0B1158u: goto label_7F0B1158;
    case 0x7F0B115Cu: goto label_7F0B115C;
    case 0x7F0B1160u: goto label_7F0B1160;
    case 0x7F0B1164u: goto label_7F0B1164;
    case 0x7F0B1168u: goto label_7F0B1168;
    case 0x7F0B116Cu: goto label_7F0B116C;
    case 0x7F0B1170u: goto label_7F0B1170;
    case 0x7F0B1174u: goto label_7F0B1174;
    case 0x7F0B1178u: goto label_7F0B1178;
    case 0x7F0B117Cu: goto label_7F0B117C;
    case 0x7F0B1180u: goto label_7F0B1180;
    case 0x7F0B1184u: goto label_7F0B1184;
    case 0x7F0B1188u: goto label_7F0B1188;
    case 0x7F0B118Cu: goto label_7F0B118C;
    case 0x7F0B1190u: goto label_7F0B1190;
    case 0x7F0B1194u: goto label_7F0B1194;
    case 0x7F0B1198u: goto label_7F0B1198;
    case 0x7F0B119Cu: goto label_7F0B119C;
    case 0x7F0B11A0u: goto label_7F0B11A0;
    case 0x7F0B11A4u: goto label_7F0B11A4;
    case 0x7F0B11A8u: goto label_7F0B11A8;
    case 0x7F0B11ACu: goto label_7F0B11AC;
    case 0x7F0B11B0u: goto label_7F0B11B0;
    case 0x7F0B11B4u: goto label_7F0B11B4;
    case 0x7F0B11B8u: goto label_7F0B11B8;
    case 0x7F0B11BCu: goto label_7F0B11BC;
    case 0x7F0B11C0u: goto label_7F0B11C0;
    case 0x7F0B11C4u: goto label_7F0B11C4;
    case 0x7F0B11C8u: goto label_7F0B11C8;
    case 0x7F0B11CCu: goto label_7F0B11CC;
    case 0x7F0B11D0u: goto label_7F0B11D0;
    case 0x7F0B11D4u: goto label_7F0B11D4;
    case 0x7F0B11D8u: goto label_7F0B11D8;
    case 0x7F0B11DCu: goto label_7F0B11DC;
    case 0x7F0B11E0u: goto label_7F0B11E0;
    case 0x7F0B11E4u: goto label_7F0B11E4;
    case 0x7F0B11E8u: goto label_7F0B11E8;
    case 0x7F0B11ECu: goto label_7F0B11EC;
    case 0x7F0B11F0u: goto label_7F0B11F0;
    case 0x7F0B11F4u: goto label_7F0B11F4;
    case 0x7F0B11F8u: goto label_7F0B11F8;
    case 0x7F0B11FCu: goto label_7F0B11FC;
    case 0x7F0B1200u: goto label_7F0B1200;
    case 0x7F0B1204u: goto label_7F0B1204;
    case 0x7F0B1208u: goto label_7F0B1208;
    case 0x7F0B120Cu: goto label_7F0B120C;
    case 0x7F0B1210u: goto label_7F0B1210;
    case 0x7F0B1214u: goto label_7F0B1214;
    case 0x7F0B1218u: goto label_7F0B1218;
    case 0x7F0B121Cu: goto label_7F0B121C;
    case 0x7F0B1220u: goto label_7F0B1220;
    case 0x7F0B1224u: goto label_7F0B1224;
    case 0x7F0B1228u: goto label_7F0B1228;
    case 0x7F0B122Cu: goto label_7F0B122C;
    case 0x7F0B1230u: goto label_7F0B1230;
    case 0x7F0B1234u: goto label_7F0B1234;
    case 0x7F0B1238u: goto label_7F0B1238;
    case 0x7F0B123Cu: goto label_7F0B123C;
    case 0x7F0B1240u: goto label_7F0B1240;
    case 0x7F0B1244u: goto label_7F0B1244;
    case 0x7F0B1248u: goto label_7F0B1248;
    case 0x7F0B124Cu: goto label_7F0B124C;
    case 0x7F0B1250u: goto label_7F0B1250;
    case 0x7F0B1254u: goto label_7F0B1254;
    case 0x7F0B1258u: goto label_7F0B1258;
    case 0x7F0B125Cu: goto label_7F0B125C;
    case 0x7F0B1260u: goto label_7F0B1260;
    case 0x7F0B1264u: goto label_7F0B1264;
    case 0x7F0B1268u: goto label_7F0B1268;
    case 0x7F0B126Cu: goto label_7F0B126C;
    case 0x7F0B1270u: goto label_7F0B1270;
    case 0x7F0B1274u: goto label_7F0B1274;
    case 0x7F0B1278u: goto label_7F0B1278;
    case 0x7F0B127Cu: goto label_7F0B127C;
    case 0x7F0B1280u: goto label_7F0B1280;
    case 0x7F0B1284u: goto label_7F0B1284;
    case 0x7F0B1288u: goto label_7F0B1288;
    case 0x7F0B128Cu: goto label_7F0B128C;
    case 0x7F0B1290u: goto label_7F0B1290;
    case 0x7F0B1294u: goto label_7F0B1294;
    case 0x7F0B1298u: goto label_7F0B1298;
    case 0x7F0B129Cu: goto label_7F0B129C;
    case 0x7F0B12A0u: goto label_7F0B12A0;
    case 0x7F0B12A4u: goto label_7F0B12A4;
    case 0x7F0B12A8u: goto label_7F0B12A8;
    case 0x7F0B12ACu: goto label_7F0B12AC;
    case 0x7F0B12B0u: goto label_7F0B12B0;
    case 0x7F0B12B4u: goto label_7F0B12B4;
    case 0x7F0B12B8u: goto label_7F0B12B8;
    case 0x7F0B12BCu: goto label_7F0B12BC;
    case 0x7F0B12C0u: goto label_7F0B12C0;
    case 0x7F0B12C4u: goto label_7F0B12C4;
    case 0x7F0B12C8u: goto label_7F0B12C8;
    case 0x7F0B12CCu: goto label_7F0B12CC;
    case 0x7F0B12D0u: goto label_7F0B12D0;
    case 0x7F0B12D4u: goto label_7F0B12D4;
    case 0x7F0B12D8u: goto label_7F0B12D8;
    case 0x7F0B12DCu: goto label_7F0B12DC;
    case 0x7F0B12E0u: goto label_7F0B12E0;
    case 0x7F0B12E4u: goto label_7F0B12E4;
    case 0x7F0B12E8u: goto label_7F0B12E8;
    case 0x7F0B12ECu: goto label_7F0B12EC;
    case 0x7F0B12F0u: goto label_7F0B12F0;
    case 0x7F0B12F4u: goto label_7F0B12F4;
    case 0x7F0B12F8u: goto label_7F0B12F8;
    case 0x7F0B12FCu: goto label_7F0B12FC;
    case 0x7F0B1300u: goto label_7F0B1300;
    case 0x7F0B1304u: goto label_7F0B1304;
    case 0x7F0B1308u: goto label_7F0B1308;
    case 0x7F0B130Cu: goto label_7F0B130C;
    case 0x7F0B1310u: goto label_7F0B1310;
    case 0x7F0B1314u: goto label_7F0B1314;
    case 0x7F0B1318u: goto label_7F0B1318;
    case 0x7F0B131Cu: goto label_7F0B131C;
    case 0x7F0B1320u: goto label_7F0B1320;
    case 0x7F0B1324u: goto label_7F0B1324;
    case 0x7F0B1328u: goto label_7F0B1328;
    case 0x7F0B132Cu: goto label_7F0B132C;
    case 0x7F0B1330u: goto label_7F0B1330;
    case 0x7F0B1334u: goto label_7F0B1334;
    case 0x7F0B1338u: goto label_7F0B1338;
    case 0x7F0B133Cu: goto label_7F0B133C;
    case 0x7F0B1340u: goto label_7F0B1340;
    case 0x7F0B1344u: goto label_7F0B1344;
    case 0x7F0B1348u: goto label_7F0B1348;
    case 0x7F0B134Cu: goto label_7F0B134C;
    case 0x7F0B1350u: goto label_7F0B1350;
    case 0x7F0B1354u: goto label_7F0B1354;
    case 0x7F0B1358u: goto label_7F0B1358;
    case 0x7F0B135Cu: goto label_7F0B135C;
    case 0x7F0B1360u: goto label_7F0B1360;
    case 0x7F0B1364u: goto label_7F0B1364;
    case 0x7F0B1368u: goto label_7F0B1368;
    case 0x7F0B136Cu: goto label_7F0B136C;
    case 0x7F0B1370u: goto label_7F0B1370;
    case 0x7F0B1374u: goto label_7F0B1374;
    case 0x7F0B1378u: goto label_7F0B1378;
    case 0x7F0B137Cu: goto label_7F0B137C;
    case 0x7F0B1380u: goto label_7F0B1380;
    case 0x7F0B1384u: goto label_7F0B1384;
    case 0x7F0B1388u: goto label_7F0B1388;
    case 0x7F0B138Cu: goto label_7F0B138C;
    case 0x7F0B1390u: goto label_7F0B1390;
    case 0x7F0B1394u: goto label_7F0B1394;
    case 0x7F0B1398u: goto label_7F0B1398;
    case 0x7F0B139Cu: goto label_7F0B139C;
    case 0x7F0B13A0u: goto label_7F0B13A0;
    case 0x7F0B13A4u: goto label_7F0B13A4;
    case 0x7F0B13A8u: goto label_7F0B13A8;
    case 0x7F0B13ACu: goto label_7F0B13AC;
    case 0x7F0B13B0u: goto label_7F0B13B0;
    case 0x7F0B13B4u: goto label_7F0B13B4;
    case 0x7F0B13B8u: goto label_7F0B13B8;
    case 0x7F0B13BCu: goto label_7F0B13BC;
    case 0x7F0B13C0u: goto label_7F0B13C0;
    case 0x7F0B13C4u: goto label_7F0B13C4;
    case 0x7F0B13C8u: goto label_7F0B13C8;
    case 0x7F0B13CCu: goto label_7F0B13CC;
    case 0x7F0B13D0u: goto label_7F0B13D0;
    case 0x7F0B13D4u: goto label_7F0B13D4;
    case 0x7F0B13D8u: goto label_7F0B13D8;
    case 0x7F0B13DCu: goto label_7F0B13DC;
    case 0x7F0B13E0u: goto label_7F0B13E0;
    case 0x7F0B13E4u: goto label_7F0B13E4;
    case 0x7F0B13E8u: goto label_7F0B13E8;
    case 0x7F0B13ECu: goto label_7F0B13EC;
    case 0x7F0B13F0u: goto label_7F0B13F0;
    case 0x7F0B13F4u: goto label_7F0B13F4;
    case 0x7F0B13F8u: goto label_7F0B13F8;
    case 0x7F0B13FCu: goto label_7F0B13FC;
    case 0x7F0B1400u: goto label_7F0B1400;
    case 0x7F0B1404u: goto label_7F0B1404;
    case 0x7F0B1408u: goto label_7F0B1408;
    case 0x7F0B140Cu: goto label_7F0B140C;
    case 0x7F0B1410u: goto label_7F0B1410;
    case 0x7F0B1414u: goto label_7F0B1414;
    case 0x7F0B1418u: goto label_7F0B1418;
    case 0x7F0B141Cu: goto label_7F0B141C;
    case 0x7F0B1420u: goto label_7F0B1420;
    case 0x7F0B1424u: goto label_7F0B1424;
    case 0x7F0B1428u: goto label_7F0B1428;
    case 0x7F0B142Cu: goto label_7F0B142C;
    case 0x7F0B1430u: goto label_7F0B1430;
    case 0x7F0B1434u: goto label_7F0B1434;
    case 0x7F0B1438u: goto label_7F0B1438;
    case 0x7F0B143Cu: goto label_7F0B143C;
    case 0x7F0B1440u: goto label_7F0B1440;
    case 0x7F0B1444u: goto label_7F0B1444;
    case 0x7F0B1448u: goto label_7F0B1448;
    case 0x7F0B144Cu: goto label_7F0B144C;
    case 0x7F0B1450u: goto label_7F0B1450;
    case 0x7F0B1454u: goto label_7F0B1454;
    case 0x7F0B1458u: goto label_7F0B1458;
    case 0x7F0B145Cu: goto label_7F0B145C;
    case 0x7F0B1460u: goto label_7F0B1460;
    case 0x7F0B1464u: goto label_7F0B1464;
    case 0x7F0B1468u: goto label_7F0B1468;
    case 0x7F0B146Cu: goto label_7F0B146C;
    case 0x7F0B1470u: goto label_7F0B1470;
    case 0x7F0B1474u: goto label_7F0B1474;
    case 0x7F0B1478u: goto label_7F0B1478;
    case 0x7F0B147Cu: goto label_7F0B147C;
    case 0x7F0B1480u: goto label_7F0B1480;
    case 0x7F0B1484u: goto label_7F0B1484;
    case 0x7F0B1488u: goto label_7F0B1488;
    case 0x7F0B148Cu: goto label_7F0B148C;
    case 0x7F0B1490u: goto label_7F0B1490;
    case 0x7F0B1494u: goto label_7F0B1494;
    case 0x7F0B1498u: goto label_7F0B1498;
    case 0x7F0B149Cu: goto label_7F0B149C;
    case 0x7F0B14A0u: goto label_7F0B14A0;
    case 0x7F0B14A4u: goto label_7F0B14A4;
    case 0x7F0B14A8u: goto label_7F0B14A8;
    case 0x7F0B14ACu: goto label_7F0B14AC;
    case 0x7F0B14B0u: goto label_7F0B14B0;
    case 0x7F0B14B4u: goto label_7F0B14B4;
    case 0x7F0B14B8u: goto label_7F0B14B8;
    case 0x7F0B14BCu: goto label_7F0B14BC;
    case 0x7F0B14C0u: goto label_7F0B14C0;
    case 0x7F0B14C4u: goto label_7F0B14C4;
    case 0x7F0B14C8u: goto label_7F0B14C8;
    case 0x7F0B14CCu: goto label_7F0B14CC;
    case 0x7F0B14D0u: goto label_7F0B14D0;
    case 0x7F0B14D4u: goto label_7F0B14D4;
    case 0x7F0B14D8u: goto label_7F0B14D8;
    case 0x7F0B14DCu: goto label_7F0B14DC;
    case 0x7F0B14E0u: goto label_7F0B14E0;
    case 0x7F0B14E4u: goto label_7F0B14E4;
    case 0x7F0B14E8u: goto label_7F0B14E8;
    case 0x7F0B14ECu: goto label_7F0B14EC;
    case 0x7F0B14F0u: goto label_7F0B14F0;
    case 0x7F0B14F4u: goto label_7F0B14F4;
    case 0x7F0B14F8u: goto label_7F0B14F8;
    case 0x7F0B14FCu: goto label_7F0B14FC;
    case 0x7F0B1500u: goto label_7F0B1500;
    case 0x7F0B1504u: goto label_7F0B1504;
    case 0x7F0B1508u: goto label_7F0B1508;
    case 0x7F0B150Cu: goto label_7F0B150C;
    case 0x7F0B1510u: goto label_7F0B1510;
    case 0x7F0B1514u: goto label_7F0B1514;
    case 0x7F0B1518u: goto label_7F0B1518;
    case 0x7F0B151Cu: goto label_7F0B151C;
    case 0x7F0B1520u: goto label_7F0B1520;
    case 0x7F0B1524u: goto label_7F0B1524;
    case 0x7F0B1528u: goto label_7F0B1528;
    case 0x7F0B152Cu: goto label_7F0B152C;
    case 0x7F0B1530u: goto label_7F0B1530;
    case 0x7F0B1534u: goto label_7F0B1534;
    case 0x7F0B1538u: goto label_7F0B1538;
    case 0x7F0B153Cu: goto label_7F0B153C;
    case 0x7F0B1540u: goto label_7F0B1540;
    case 0x7F0B1544u: goto label_7F0B1544;
    case 0x7F0B1548u: goto label_7F0B1548;
    case 0x7F0B154Cu: goto label_7F0B154C;
    case 0x7F0B1550u: goto label_7F0B1550;
    case 0x7F0B1554u: goto label_7F0B1554;
    case 0x7F0B1558u: goto label_7F0B1558;
    case 0x7F0B155Cu: goto label_7F0B155C;
    case 0x7F0B1560u: goto label_7F0B1560;
    case 0x7F0B1564u: goto label_7F0B1564;
    case 0x7F0B1568u: goto label_7F0B1568;
    case 0x7F0B156Cu: goto label_7F0B156C;
    case 0x7F0B1570u: goto label_7F0B1570;
    case 0x7F0B1574u: goto label_7F0B1574;
    case 0x7F0B1578u: goto label_7F0B1578;
    case 0x7F0B157Cu: goto label_7F0B157C;
    case 0x7F0B1580u: goto label_7F0B1580;
    case 0x7F0B1584u: goto label_7F0B1584;
    case 0x7F0B1588u: goto label_7F0B1588;
    case 0x7F0B158Cu: goto label_7F0B158C;
    case 0x7F0B1590u: goto label_7F0B1590;
    case 0x7F0B1594u: goto label_7F0B1594;
    case 0x7F0B1598u: goto label_7F0B1598;
    case 0x7F0B159Cu: goto label_7F0B159C;
    case 0x7F0B15A0u: goto label_7F0B15A0;
    case 0x7F0B15A4u: goto label_7F0B15A4;
    case 0x7F0B15A8u: goto label_7F0B15A8;
    case 0x7F0B15ACu: goto label_7F0B15AC;
    case 0x7F0B15B0u: goto label_7F0B15B0;
    case 0x7F0B15B4u: goto label_7F0B15B4;
    case 0x7F0B15B8u: goto label_7F0B15B8;
    case 0x7F0B15BCu: goto label_7F0B15BC;
    case 0x7F0B15C0u: goto label_7F0B15C0;
    case 0x7F0B15C4u: goto label_7F0B15C4;
    case 0x7F0B15C8u: goto label_7F0B15C8;
    case 0x7F0B15CCu: goto label_7F0B15CC;
    case 0x7F0B15D0u: goto label_7F0B15D0;
    case 0x7F0B15D4u: goto label_7F0B15D4;
    case 0x7F0B15D8u: goto label_7F0B15D8;
    case 0x7F0B15DCu: goto label_7F0B15DC;
    case 0x7F0B15E0u: goto label_7F0B15E0;
    case 0x7F0B15E4u: goto label_7F0B15E4;
    case 0x7F0B15E8u: goto label_7F0B15E8;
    case 0x7F0B15ECu: goto label_7F0B15EC;
    case 0x7F0B15F0u: goto label_7F0B15F0;
    case 0x7F0B15F4u: goto label_7F0B15F4;
    case 0x7F0B15F8u: goto label_7F0B15F8;
    case 0x7F0B15FCu: goto label_7F0B15FC;
    case 0x7F0B1600u: goto label_7F0B1600;
    case 0x7F0B1604u: goto label_7F0B1604;
    case 0x7F0B1608u: goto label_7F0B1608;
    case 0x7F0B160Cu: goto label_7F0B160C;
    case 0x7F0B1610u: goto label_7F0B1610;
    case 0x7F0B1614u: goto label_7F0B1614;
    case 0x7F0B1618u: goto label_7F0B1618;
    case 0x7F0B161Cu: goto label_7F0B161C;
    case 0x7F0B1620u: goto label_7F0B1620;
    case 0x7F0B1624u: goto label_7F0B1624;
    case 0x7F0B1628u: goto label_7F0B1628;
    case 0x7F0B162Cu: goto label_7F0B162C;
    case 0x7F0B1630u: goto label_7F0B1630;
    case 0x7F0B1634u: goto label_7F0B1634;
    case 0x7F0B1638u: goto label_7F0B1638;
    case 0x7F0B163Cu: goto label_7F0B163C;
    case 0x7F0B1640u: goto label_7F0B1640;
    case 0x7F0B1644u: goto label_7F0B1644;
    case 0x7F0B1648u: goto label_7F0B1648;
    case 0x7F0B164Cu: goto label_7F0B164C;
    case 0x7F0B1650u: goto label_7F0B1650;
    case 0x7F0B1654u: goto label_7F0B1654;
    case 0x7F0B1658u: goto label_7F0B1658;
    case 0x7F0B165Cu: goto label_7F0B165C;
    case 0x7F0B1660u: goto label_7F0B1660;
    case 0x7F0B1664u: goto label_7F0B1664;
    case 0x7F0B1668u: goto label_7F0B1668;
    case 0x7F0B166Cu: goto label_7F0B166C;
    case 0x7F0B1670u: goto label_7F0B1670;
    case 0x7F0B1674u: goto label_7F0B1674;
    case 0x7F0B1678u: goto label_7F0B1678;
    case 0x7F0B167Cu: goto label_7F0B167C;
    case 0x7F0B1680u: goto label_7F0B1680;
    case 0x7F0B1684u: goto label_7F0B1684;
    case 0x7F0B1688u: goto label_7F0B1688;
    case 0x7F0B168Cu: goto label_7F0B168C;
    case 0x7F0B1690u: goto label_7F0B1690;
    case 0x7F0B1694u: goto label_7F0B1694;
    case 0x7F0B1698u: goto label_7F0B1698;
    case 0x7F0B169Cu: goto label_7F0B169C;
    case 0x7F0B16A0u: goto label_7F0B16A0;
    case 0x7F0B16A4u: goto label_7F0B16A4;
    case 0x7F0B16A8u: goto label_7F0B16A8;
    case 0x7F0B16ACu: goto label_7F0B16AC;
    case 0x7F0B16B0u: goto label_7F0B16B0;
    case 0x7F0B16B4u: goto label_7F0B16B4;
    case 0x7F0B16B8u: goto label_7F0B16B8;
    case 0x7F0B16BCu: goto label_7F0B16BC;
    case 0x7F0B16C0u: goto label_7F0B16C0;
    case 0x7F0B16C4u: goto label_7F0B16C4;
    case 0x7F0B16C8u: goto label_7F0B16C8;
    case 0x7F0B16CCu: goto label_7F0B16CC;
    case 0x7F0B16D0u: goto label_7F0B16D0;
    case 0x7F0B16D4u: goto label_7F0B16D4;
    case 0x7F0B16D8u: goto label_7F0B16D8;
    case 0x7F0B16DCu: goto label_7F0B16DC;
    case 0x7F0B16E0u: goto label_7F0B16E0;
    case 0x7F0B16E4u: goto label_7F0B16E4;
    case 0x7F0B16E8u: goto label_7F0B16E8;
    case 0x7F0B16ECu: goto label_7F0B16EC;
    case 0x7F0B16F0u: goto label_7F0B16F0;
    case 0x7F0B16F4u: goto label_7F0B16F4;
    case 0x7F0B16F8u: goto label_7F0B16F8;
    case 0x7F0B16FCu: goto label_7F0B16FC;
    case 0x7F0B1700u: goto label_7F0B1700;
    case 0x7F0B1704u: goto label_7F0B1704;
    case 0x7F0B1708u: goto label_7F0B1708;
    case 0x7F0B170Cu: goto label_7F0B170C;
    case 0x7F0B1710u: goto label_7F0B1710;
    case 0x7F0B1714u: goto label_7F0B1714;
    case 0x7F0B1718u: goto label_7F0B1718;
    case 0x7F0B171Cu: goto label_7F0B171C;
    case 0x7F0B1720u: goto label_7F0B1720;
    case 0x7F0B1724u: goto label_7F0B1724;
    case 0x7F0B1728u: goto label_7F0B1728;
    case 0x7F0B172Cu: goto label_7F0B172C;
    case 0x7F0B1730u: goto label_7F0B1730;
    case 0x7F0B1734u: goto label_7F0B1734;
    case 0x7F0B1738u: goto label_7F0B1738;
    case 0x7F0B173Cu: goto label_7F0B173C;
    case 0x7F0B1740u: goto label_7F0B1740;
    case 0x7F0B1744u: goto label_7F0B1744;
    case 0x7F0B1748u: goto label_7F0B1748;
    case 0x7F0B174Cu: goto label_7F0B174C;
    case 0x7F0B1750u: goto label_7F0B1750;
    case 0x7F0B1754u: goto label_7F0B1754;
    case 0x7F0B1758u: goto label_7F0B1758;
    case 0x7F0B175Cu: goto label_7F0B175C;
    case 0x7F0B1760u: goto label_7F0B1760;
    case 0x7F0B1764u: goto label_7F0B1764;
    case 0x7F0B1768u: goto label_7F0B1768;
    case 0x7F0B176Cu: goto label_7F0B176C;
    case 0x7F0B1770u: goto label_7F0B1770;
    case 0x7F0B1774u: goto label_7F0B1774;
    case 0x7F0B1778u: goto label_7F0B1778;
    case 0x7F0B177Cu: goto label_7F0B177C;
    case 0x7F0B1780u: goto label_7F0B1780;
    case 0x7F0B1784u: goto label_7F0B1784;
    case 0x7F0B1788u: goto label_7F0B1788;
    case 0x7F0B178Cu: goto label_7F0B178C;
    case 0x7F0B1790u: goto label_7F0B1790;
    case 0x7F0B1794u: goto label_7F0B1794;
    case 0x7F0B1798u: goto label_7F0B1798;
    case 0x7F0B179Cu: goto label_7F0B179C;
    case 0x7F0B17A0u: goto label_7F0B17A0;
    case 0x7F0B17A4u: goto label_7F0B17A4;
    case 0x7F0B17A8u: goto label_7F0B17A8;
    case 0x7F0B17ACu: goto label_7F0B17AC;
    case 0x7F0B17B0u: goto label_7F0B17B0;
    case 0x7F0B17B4u: goto label_7F0B17B4;
    case 0x7F0B17B8u: goto label_7F0B17B8;
    case 0x7F0B17BCu: goto label_7F0B17BC;
    case 0x7F0B17C0u: goto label_7F0B17C0;
    case 0x7F0B17C4u: goto label_7F0B17C4;
    case 0x7F0B17C8u: goto label_7F0B17C8;
    case 0x7F0B17CCu: goto label_7F0B17CC;
    case 0x7F0B17D0u: goto label_7F0B17D0;
    case 0x7F0B17D4u: goto label_7F0B17D4;
    case 0x7F0B17D8u: goto label_7F0B17D8;
    case 0x7F0B17DCu: goto label_7F0B17DC;
    case 0x7F0B17E0u: goto label_7F0B17E0;
    case 0x7F0B17E4u: goto label_7F0B17E4;
    case 0x7F0B17E8u: goto label_7F0B17E8;
    case 0x7F0B17ECu: goto label_7F0B17EC;
    case 0x7F0B17F0u: goto label_7F0B17F0;
    case 0x7F0B17F4u: goto label_7F0B17F4;
    case 0x7F0B17F8u: goto label_7F0B17F8;
    case 0x7F0B17FCu: goto label_7F0B17FC;
    case 0x7F0B1800u: goto label_7F0B1800;
    case 0x7F0B1804u: goto label_7F0B1804;
    case 0x7F0B1808u: goto label_7F0B1808;
    case 0x7F0B180Cu: goto label_7F0B180C;
    case 0x7F0B1810u: goto label_7F0B1810;
    case 0x7F0B1814u: goto label_7F0B1814;
    case 0x7F0B1818u: goto label_7F0B1818;
    case 0x7F0B181Cu: goto label_7F0B181C;
    case 0x7F0B1820u: goto label_7F0B1820;
    case 0x7F0B1824u: goto label_7F0B1824;
    case 0x7F0B1828u: goto label_7F0B1828;
    case 0x7F0B182Cu: goto label_7F0B182C;
    case 0x7F0B1830u: goto label_7F0B1830;
    case 0x7F0B1834u: goto label_7F0B1834;
    case 0x7F0B1838u: goto label_7F0B1838;
    case 0x7F0B183Cu: goto label_7F0B183C;
    case 0x7F0B1840u: goto label_7F0B1840;
    case 0x7F0B1844u: goto label_7F0B1844;
    case 0x7F0B1848u: goto label_7F0B1848;
    case 0x7F0B184Cu: goto label_7F0B184C;
    case 0x7F0B1850u: goto label_7F0B1850;
    case 0x7F0B1854u: goto label_7F0B1854;
    case 0x7F0B1858u: goto label_7F0B1858;
    case 0x7F0B185Cu: goto label_7F0B185C;
    case 0x7F0B1860u: goto label_7F0B1860;
    case 0x7F0B1864u: goto label_7F0B1864;
    case 0x7F0B1868u: goto label_7F0B1868;
    case 0x7F0B186Cu: goto label_7F0B186C;
    case 0x7F0B1870u: goto label_7F0B1870;
    case 0x7F0B1874u: goto label_7F0B1874;
    case 0x7F0B1878u: goto label_7F0B1878;
    case 0x7F0B187Cu: goto label_7F0B187C;
    case 0x7F0B1880u: goto label_7F0B1880;
    case 0x7F0B1884u: goto label_7F0B1884;
    case 0x7F0B1888u: goto label_7F0B1888;
    case 0x7F0B188Cu: goto label_7F0B188C;
    case 0x7F0B1890u: goto label_7F0B1890;
    case 0x7F0B1894u: goto label_7F0B1894;
    case 0x7F0B1898u: goto label_7F0B1898;
    case 0x7F0B189Cu: goto label_7F0B189C;
    case 0x7F0B18A0u: goto label_7F0B18A0;
    case 0x7F0B18A4u: goto label_7F0B18A4;
    case 0x7F0B18A8u: goto label_7F0B18A8;
    case 0x7F0B18ACu: goto label_7F0B18AC;
    case 0x7F0B18B0u: goto label_7F0B18B0;
    case 0x7F0B18B4u: goto label_7F0B18B4;
    case 0x7F0B18B8u: goto label_7F0B18B8;
    case 0x7F0B18BCu: goto label_7F0B18BC;
    case 0x7F0B18C0u: goto label_7F0B18C0;
    case 0x7F0B18C4u: goto label_7F0B18C4;
    case 0x7F0B18C8u: goto label_7F0B18C8;
    case 0x7F0B18CCu: goto label_7F0B18CC;
    case 0x7F0B18D0u: goto label_7F0B18D0;
    case 0x7F0B18D4u: goto label_7F0B18D4;
    case 0x7F0B18D8u: goto label_7F0B18D8;
    case 0x7F0B18DCu: goto label_7F0B18DC;
    case 0x7F0B18E0u: goto label_7F0B18E0;
    case 0x7F0B18E4u: goto label_7F0B18E4;
    case 0x7F0B18E8u: goto label_7F0B18E8;
    case 0x7F0B18ECu: goto label_7F0B18EC;
    case 0x7F0B18F0u: goto label_7F0B18F0;
    case 0x7F0B18F4u: goto label_7F0B18F4;
    case 0x7F0B18F8u: goto label_7F0B18F8;
    case 0x7F0B18FCu: goto label_7F0B18FC;
    case 0x7F0B1900u: goto label_7F0B1900;
    case 0x7F0B1904u: goto label_7F0B1904;
    case 0x7F0B1908u: goto label_7F0B1908;
    case 0x7F0B190Cu: goto label_7F0B190C;
    case 0x7F0B1910u: goto label_7F0B1910;
    case 0x7F0B1914u: goto label_7F0B1914;
    case 0x7F0B1918u: goto label_7F0B1918;
    case 0x7F0B191Cu: goto label_7F0B191C;
    case 0x7F0B1920u: goto label_7F0B1920;
    case 0x7F0B1924u: goto label_7F0B1924;
    case 0x7F0B1928u: goto label_7F0B1928;
    case 0x7F0B192Cu: goto label_7F0B192C;
    case 0x7F0B1930u: goto label_7F0B1930;
    case 0x7F0B1934u: goto label_7F0B1934;
    case 0x7F0B1938u: goto label_7F0B1938;
    case 0x7F0B193Cu: goto label_7F0B193C;
    case 0x7F0B1940u: goto label_7F0B1940;
    case 0x7F0B1944u: goto label_7F0B1944;
    case 0x7F0B1948u: goto label_7F0B1948;
    case 0x7F0B194Cu: goto label_7F0B194C;
    case 0x7F0B1950u: goto label_7F0B1950;
    case 0x7F0B1954u: goto label_7F0B1954;
    case 0x7F0B1958u: goto label_7F0B1958;
    case 0x7F0B195Cu: goto label_7F0B195C;
    case 0x7F0B1960u: goto label_7F0B1960;
    case 0x7F0B1964u: goto label_7F0B1964;
    case 0x7F0B1968u: goto label_7F0B1968;
    case 0x7F0B196Cu: goto label_7F0B196C;
    case 0x7F0B1970u: goto label_7F0B1970;
    case 0x7F0B1974u: goto label_7F0B1974;
    case 0x7F0B1978u: goto label_7F0B1978;
    case 0x7F0B197Cu: goto label_7F0B197C;
    case 0x7F0B1980u: goto label_7F0B1980;
    case 0x7F0B1984u: goto label_7F0B1984;
    case 0x7F0B1988u: goto label_7F0B1988;
    case 0x7F0B198Cu: goto label_7F0B198C;
    case 0x7F0B1990u: goto label_7F0B1990;
    case 0x7F0B1994u: goto label_7F0B1994;
    case 0x7F0B1998u: goto label_7F0B1998;
    case 0x7F0B199Cu: goto label_7F0B199C;
    case 0x7F0B19A0u: goto label_7F0B19A0;
    case 0x7F0B19A4u: goto label_7F0B19A4;
    case 0x7F0B19A8u: goto label_7F0B19A8;
    case 0x7F0B19ACu: goto label_7F0B19AC;
    case 0x7F0B19B0u: goto label_7F0B19B0;
    case 0x7F0B19B4u: goto label_7F0B19B4;
    case 0x7F0B19B8u: goto label_7F0B19B8;
    case 0x7F0B19BCu: goto label_7F0B19BC;
    case 0x7F0B19C0u: goto label_7F0B19C0;
    case 0x7F0B19C4u: goto label_7F0B19C4;
    case 0x7F0B19C8u: goto label_7F0B19C8;
    case 0x7F0B19CCu: goto label_7F0B19CC;
    case 0x7F0B19D0u: goto label_7F0B19D0;
    case 0x7F0B19D4u: goto label_7F0B19D4;
    case 0x7F0B19D8u: goto label_7F0B19D8;
    case 0x7F0B19DCu: goto label_7F0B19DC;
    case 0x7F0B19E0u: goto label_7F0B19E0;
    case 0x7F0B19E4u: goto label_7F0B19E4;
    case 0x7F0B19E8u: goto label_7F0B19E8;
    case 0x7F0B19ECu: goto label_7F0B19EC;
    case 0x7F0B19F0u: goto label_7F0B19F0;
    case 0x7F0B19F4u: goto label_7F0B19F4;
    case 0x7F0B19F8u: goto label_7F0B19F8;
    case 0x7F0B19FCu: goto label_7F0B19FC;
    case 0x7F0B1A00u: goto label_7F0B1A00;
    case 0x7F0B1A04u: goto label_7F0B1A04;
    case 0x7F0B1A08u: goto label_7F0B1A08;
    case 0x7F0B1A0Cu: goto label_7F0B1A0C;
    case 0x7F0B1A10u: goto label_7F0B1A10;
    case 0x7F0B1A14u: goto label_7F0B1A14;
    case 0x7F0B1A18u: goto label_7F0B1A18;
    case 0x7F0B1A1Cu: goto label_7F0B1A1C;
    case 0x7F0B1A20u: goto label_7F0B1A20;
    case 0x7F0B1A24u: goto label_7F0B1A24;
    case 0x7F0B1A28u: goto label_7F0B1A28;
    case 0x7F0B1A2Cu: goto label_7F0B1A2C;
    case 0x7F0B1A30u: goto label_7F0B1A30;
    case 0x7F0B1A34u: goto label_7F0B1A34;
    case 0x7F0B1A38u: goto label_7F0B1A38;
    case 0x7F0B1A3Cu: goto label_7F0B1A3C;
    case 0x7F0B1A40u: goto label_7F0B1A40;
    case 0x7F0B1A44u: goto label_7F0B1A44;
    case 0x7F0B1A48u: goto label_7F0B1A48;
    case 0x7F0B1A4Cu: goto label_7F0B1A4C;
    case 0x7F0B1A50u: goto label_7F0B1A50;
    case 0x7F0B1A54u: goto label_7F0B1A54;
    case 0x7F0B1A58u: goto label_7F0B1A58;
    case 0x7F0B1A5Cu: goto label_7F0B1A5C;
    case 0x7F0B1A60u: goto label_7F0B1A60;
    case 0x7F0B1A64u: goto label_7F0B1A64;
    case 0x7F0B1A68u: goto label_7F0B1A68;
    case 0x7F0B1A6Cu: goto label_7F0B1A6C;
    case 0x7F0B1A70u: goto label_7F0B1A70;
    case 0x7F0B1A74u: goto label_7F0B1A74;
    case 0x7F0B1A78u: goto label_7F0B1A78;
    case 0x7F0B1A7Cu: goto label_7F0B1A7C;
    case 0x7F0B1A80u: goto label_7F0B1A80;
    case 0x7F0B1A84u: goto label_7F0B1A84;
    case 0x7F0B1A88u: goto label_7F0B1A88;
    case 0x7F0B1A8Cu: goto label_7F0B1A8C;
    case 0x7F0B1A90u: goto label_7F0B1A90;
    case 0x7F0B1A94u: goto label_7F0B1A94;
    case 0x7F0B1A98u: goto label_7F0B1A98;
    case 0x7F0B1A9Cu: goto label_7F0B1A9C;
    case 0x7F0B1AA0u: goto label_7F0B1AA0;
    case 0x7F0B1AA4u: goto label_7F0B1AA4;
    case 0x7F0B1AA8u: goto label_7F0B1AA8;
    case 0x7F0B1AACu: goto label_7F0B1AAC;
    case 0x7F0B1AB0u: goto label_7F0B1AB0;
    case 0x7F0B1AB4u: goto label_7F0B1AB4;
    case 0x7F0B1AB8u: goto label_7F0B1AB8;
    case 0x7F0B1ABCu: goto label_7F0B1ABC;
    case 0x7F0B1AC0u: goto label_7F0B1AC0;
    case 0x7F0B1AC4u: goto label_7F0B1AC4;
    case 0x7F0B1AC8u: goto label_7F0B1AC8;
    case 0x7F0B1ACCu: goto label_7F0B1ACC;
    case 0x7F0B1AD0u: goto label_7F0B1AD0;
    case 0x7F0B1AD4u: goto label_7F0B1AD4;
    case 0x7F0B1AD8u: goto label_7F0B1AD8;
    case 0x7F0B1ADCu: goto label_7F0B1ADC;
    case 0x7F0B1AE0u: goto label_7F0B1AE0;
    case 0x7F0B1AE4u: goto label_7F0B1AE4;
    case 0x7F0B1AE8u: goto label_7F0B1AE8;
    case 0x7F0B1AECu: goto label_7F0B1AEC;
    case 0x7F0B1AF0u: goto label_7F0B1AF0;
    case 0x7F0B1AF4u: goto label_7F0B1AF4;
    case 0x7F0B1AF8u: goto label_7F0B1AF8;
    case 0x7F0B1AFCu: goto label_7F0B1AFC;
    case 0x7F0B1B00u: goto label_7F0B1B00;
    case 0x7F0B1B04u: goto label_7F0B1B04;
    case 0x7F0B1B08u: goto label_7F0B1B08;
    case 0x7F0B1B0Cu: goto label_7F0B1B0C;
    case 0x7F0B1B10u: goto label_7F0B1B10;
    case 0x7F0B1B14u: goto label_7F0B1B14;
    case 0x7F0B1B18u: goto label_7F0B1B18;
    case 0x7F0B1B1Cu: goto label_7F0B1B1C;
    case 0x7F0B1B20u: goto label_7F0B1B20;
    case 0x7F0B1B24u: goto label_7F0B1B24;
    case 0x7F0B1B28u: goto label_7F0B1B28;
    case 0x7F0B1B2Cu: goto label_7F0B1B2C;
    case 0x7F0B1B30u: goto label_7F0B1B30;
    case 0x7F0B1B34u: goto label_7F0B1B34;
    case 0x7F0B1B38u: goto label_7F0B1B38;
    case 0x7F0B1B3Cu: goto label_7F0B1B3C;
    case 0x7F0B1B40u: goto label_7F0B1B40;
    case 0x7F0B1B44u: goto label_7F0B1B44;
    case 0x7F0B1B48u: goto label_7F0B1B48;
    case 0x7F0B1B4Cu: goto label_7F0B1B4C;
    case 0x7F0B1B50u: goto label_7F0B1B50;
    case 0x7F0B1B54u: goto label_7F0B1B54;
    case 0x7F0B1B58u: goto label_7F0B1B58;
    case 0x7F0B1B5Cu: goto label_7F0B1B5C;
    case 0x7F0B1B60u: goto label_7F0B1B60;
    case 0x7F0B1B64u: goto label_7F0B1B64;
    case 0x7F0B1B68u: goto label_7F0B1B68;
    case 0x7F0B1B6Cu: goto label_7F0B1B6C;
    case 0x7F0B1B70u: goto label_7F0B1B70;
    case 0x7F0B1B74u: goto label_7F0B1B74;
    case 0x7F0B1B78u: goto label_7F0B1B78;
    case 0x7F0B1B7Cu: goto label_7F0B1B7C;
    case 0x7F0B1B80u: goto label_7F0B1B80;
    case 0x7F0B1B84u: goto label_7F0B1B84;
    case 0x7F0B1B88u: goto label_7F0B1B88;
    case 0x7F0B1B8Cu: goto label_7F0B1B8C;
    case 0x7F0B1B90u: goto label_7F0B1B90;
    case 0x7F0B1B94u: goto label_7F0B1B94;
    case 0x7F0B1B98u: goto label_7F0B1B98;
    case 0x7F0B1B9Cu: goto label_7F0B1B9C;
    case 0x7F0B1BA0u: goto label_7F0B1BA0;
    case 0x7F0B1BA4u: goto label_7F0B1BA4;
    case 0x7F0B1BA8u: goto label_7F0B1BA8;
    case 0x7F0B1BACu: goto label_7F0B1BAC;
    case 0x7F0B1BB0u: goto label_7F0B1BB0;
    case 0x7F0B1BB4u: goto label_7F0B1BB4;
    case 0x7F0B1BB8u: goto label_7F0B1BB8;
    case 0x7F0B1BBCu: goto label_7F0B1BBC;
    case 0x7F0B1BC0u: goto label_7F0B1BC0;
    case 0x7F0B1BC4u: goto label_7F0B1BC4;
    case 0x7F0B1BC8u: goto label_7F0B1BC8;
    case 0x7F0B1BCCu: goto label_7F0B1BCC;
    case 0x7F0B1BD0u: goto label_7F0B1BD0;
    case 0x7F0B1BD4u: goto label_7F0B1BD4;
    case 0x7F0B1BD8u: goto label_7F0B1BD8;
    case 0x7F0B1BDCu: goto label_7F0B1BDC;
    case 0x7F0B1BE0u: goto label_7F0B1BE0;
    case 0x7F0B1BE4u: goto label_7F0B1BE4;
    case 0x7F0B1BE8u: goto label_7F0B1BE8;
    case 0x7F0B1BECu: goto label_7F0B1BEC;
    case 0x7F0B1BF0u: goto label_7F0B1BF0;
    case 0x7F0B1BF4u: goto label_7F0B1BF4;
    case 0x7F0B1BF8u: goto label_7F0B1BF8;
    case 0x7F0B1BFCu: goto label_7F0B1BFC;
    case 0x7F0B1C00u: goto label_7F0B1C00;
    case 0x7F0B1C04u: goto label_7F0B1C04;
    case 0x7F0B1C08u: goto label_7F0B1C08;
    case 0x7F0B1C0Cu: goto label_7F0B1C0C;
    case 0x7F0B1C10u: goto label_7F0B1C10;
    case 0x7F0B1C14u: goto label_7F0B1C14;
    case 0x7F0B1C18u: goto label_7F0B1C18;
    case 0x7F0B1C1Cu: goto label_7F0B1C1C;
    case 0x7F0B1C20u: goto label_7F0B1C20;
    case 0x7F0B1C24u: goto label_7F0B1C24;
    case 0x7F0B1C28u: goto label_7F0B1C28;
    case 0x7F0B1C2Cu: goto label_7F0B1C2C;
    case 0x7F0B1C30u: goto label_7F0B1C30;
    case 0x7F0B1C34u: goto label_7F0B1C34;
    case 0x7F0B1C38u: goto label_7F0B1C38;
    case 0x7F0B1C3Cu: goto label_7F0B1C3C;
    case 0x7F0B1C40u: goto label_7F0B1C40;
    case 0x7F0B1C44u: goto label_7F0B1C44;
    case 0x7F0B1C48u: goto label_7F0B1C48;
    case 0x7F0B1C4Cu: goto label_7F0B1C4C;
    case 0x7F0B1C50u: goto label_7F0B1C50;
    case 0x7F0B1C54u: goto label_7F0B1C54;
    case 0x7F0B1C58u: goto label_7F0B1C58;
    case 0x7F0B1C5Cu: goto label_7F0B1C5C;
    case 0x7F0B1C60u: goto label_7F0B1C60;
    case 0x7F0B1C64u: goto label_7F0B1C64;
    case 0x7F0B1C68u: goto label_7F0B1C68;
    case 0x7F0B1C6Cu: goto label_7F0B1C6C;
    case 0x7F0B1C70u: goto label_7F0B1C70;
    case 0x7F0B1C74u: goto label_7F0B1C74;
    case 0x7F0B1C78u: goto label_7F0B1C78;
    case 0x7F0B1C7Cu: goto label_7F0B1C7C;
    case 0x7F0B1C80u: goto label_7F0B1C80;
    case 0x7F0B1C84u: goto label_7F0B1C84;
    case 0x7F0B1C88u: goto label_7F0B1C88;
    case 0x7F0B1C8Cu: goto label_7F0B1C8C;
    case 0x7F0B1C90u: goto label_7F0B1C90;
    case 0x7F0B1C94u: goto label_7F0B1C94;
    case 0x7F0B1C98u: goto label_7F0B1C98;
    case 0x7F0B1C9Cu: goto label_7F0B1C9C;
    case 0x7F0B1CA0u: goto label_7F0B1CA0;
    case 0x7F0B1CA4u: goto label_7F0B1CA4;
    case 0x7F0B1CA8u: goto label_7F0B1CA8;
    case 0x7F0B1CACu: goto label_7F0B1CAC;
    case 0x7F0B1CB0u: goto label_7F0B1CB0;
    case 0x7F0B1CB4u: goto label_7F0B1CB4;
    case 0x7F0B1CB8u: goto label_7F0B1CB8;
    case 0x7F0B1CBCu: goto label_7F0B1CBC;
    case 0x7F0B1CC0u: goto label_7F0B1CC0;
    case 0x7F0B1CC4u: goto label_7F0B1CC4;
    case 0x7F0B1CC8u: goto label_7F0B1CC8;
    case 0x7F0B1CCCu: goto label_7F0B1CCC;
    case 0x7F0B1CD0u: goto label_7F0B1CD0;
    case 0x7F0B1CD4u: goto label_7F0B1CD4;
    case 0x7F0B1CD8u: goto label_7F0B1CD8;
    case 0x7F0B1CDCu: goto label_7F0B1CDC;
    case 0x7F0B1CE0u: goto label_7F0B1CE0;
    case 0x7F0B1CE4u: goto label_7F0B1CE4;
    case 0x7F0B1CE8u: goto label_7F0B1CE8;
    case 0x7F0B1CECu: goto label_7F0B1CEC;
    case 0x7F0B1CF0u: goto label_7F0B1CF0;
    case 0x7F0B1CF4u: goto label_7F0B1CF4;
    case 0x7F0B1CF8u: goto label_7F0B1CF8;
    case 0x7F0B1CFCu: goto label_7F0B1CFC;
    case 0x7F0B1D00u: goto label_7F0B1D00;
    case 0x7F0B1D04u: goto label_7F0B1D04;
    case 0x7F0B1D08u: goto label_7F0B1D08;
    case 0x7F0B1D0Cu: goto label_7F0B1D0C;
    case 0x7F0B1D10u: goto label_7F0B1D10;
    case 0x7F0B1D14u: goto label_7F0B1D14;
    case 0x7F0B1D18u: goto label_7F0B1D18;
    case 0x7F0B1D1Cu: goto label_7F0B1D1C;
    case 0x7F0B1D20u: goto label_7F0B1D20;
    case 0x7F0B1D24u: goto label_7F0B1D24;
    case 0x7F0B1D28u: goto label_7F0B1D28;
    case 0x7F0B1D2Cu: goto label_7F0B1D2C;
    case 0x7F0B1D30u: goto label_7F0B1D30;
    case 0x7F0B1D34u: goto label_7F0B1D34;
    case 0x7F0B1D38u: goto label_7F0B1D38;
    case 0x7F0B1D3Cu: goto label_7F0B1D3C;
    case 0x7F0B1D40u: goto label_7F0B1D40;
    case 0x7F0B1D44u: goto label_7F0B1D44;
    case 0x7F0B1D48u: goto label_7F0B1D48;
    case 0x7F0B1D4Cu: goto label_7F0B1D4C;
    case 0x7F0B1D50u: goto label_7F0B1D50;
    case 0x7F0B1D54u: goto label_7F0B1D54;
    case 0x7F0B1D58u: goto label_7F0B1D58;
    case 0x7F0B1D5Cu: goto label_7F0B1D5C;
    case 0x7F0B1D60u: goto label_7F0B1D60;
    case 0x7F0B1D64u: goto label_7F0B1D64;
    case 0x7F0B1D68u: goto label_7F0B1D68;
    case 0x7F0B1D6Cu: goto label_7F0B1D6C;
    case 0x7F0B1D70u: goto label_7F0B1D70;
    case 0x7F0B1D74u: goto label_7F0B1D74;
    case 0x7F0B1D78u: goto label_7F0B1D78;
    case 0x7F0B1D7Cu: goto label_7F0B1D7C;
    case 0x7F0B1D80u: goto label_7F0B1D80;
    case 0x7F0B1D84u: goto label_7F0B1D84;
    case 0x7F0B1D88u: goto label_7F0B1D88;
    case 0x7F0B1D8Cu: goto label_7F0B1D8C;
    case 0x7F0B1D90u: goto label_7F0B1D90;
    case 0x7F0B1D94u: goto label_7F0B1D94;
    case 0x7F0B1D98u: goto label_7F0B1D98;
    case 0x7F0B1D9Cu: goto label_7F0B1D9C;
    case 0x7F0B1DA0u: goto label_7F0B1DA0;
    case 0x7F0B1DA4u: goto label_7F0B1DA4;
    case 0x7F0B1DA8u: goto label_7F0B1DA8;
    case 0x7F0B1DACu: goto label_7F0B1DAC;
    case 0x7F0B1DB0u: goto label_7F0B1DB0;
    case 0x7F0B1DB4u: goto label_7F0B1DB4;
    case 0x7F0B1DB8u: goto label_7F0B1DB8;
    case 0x7F0B1DBCu: goto label_7F0B1DBC;
    case 0x7F0B1DC0u: goto label_7F0B1DC0;
    case 0x7F0B1DC4u: goto label_7F0B1DC4;
    case 0x7F0B1DC8u: goto label_7F0B1DC8;
    case 0x7F0B1DCCu: goto label_7F0B1DCC;
    case 0x7F0B1DD0u: goto label_7F0B1DD0;
    case 0x7F0B1DD4u: goto label_7F0B1DD4;
    case 0x7F0B1DD8u: goto label_7F0B1DD8;
    case 0x7F0B1DDCu: goto label_7F0B1DDC;
    case 0x7F0B1DE0u: goto label_7F0B1DE0;
    case 0x7F0B1DE4u: goto label_7F0B1DE4;
    case 0x7F0B1DE8u: goto label_7F0B1DE8;
    case 0x7F0B1DECu: goto label_7F0B1DEC;
    case 0x7F0B1DF0u: goto label_7F0B1DF0;
    case 0x7F0B1DF4u: goto label_7F0B1DF4;
    case 0x7F0B1DF8u: goto label_7F0B1DF8;
    case 0x7F0B1DFCu: goto label_7F0B1DFC;
    case 0x7F0B1E00u: goto label_7F0B1E00;
    case 0x7F0B1E04u: goto label_7F0B1E04;
    case 0x7F0B1E08u: goto label_7F0B1E08;
    case 0x7F0B1E0Cu: goto label_7F0B1E0C;
    case 0x7F0B1E10u: goto label_7F0B1E10;
    case 0x7F0B1E14u: goto label_7F0B1E14;
    case 0x7F0B1E18u: goto label_7F0B1E18;
    case 0x7F0B1E1Cu: goto label_7F0B1E1C;
    case 0x7F0B1E20u: goto label_7F0B1E20;
    case 0x7F0B1E24u: goto label_7F0B1E24;
    case 0x7F0B1E28u: goto label_7F0B1E28;
    case 0x7F0B1E2Cu: goto label_7F0B1E2C;
    case 0x7F0B1E30u: goto label_7F0B1E30;
    case 0x7F0B1E34u: goto label_7F0B1E34;
    case 0x7F0B1E38u: goto label_7F0B1E38;
    case 0x7F0B1E3Cu: goto label_7F0B1E3C;
    case 0x7F0B1E40u: goto label_7F0B1E40;
    case 0x7F0B1E44u: goto label_7F0B1E44;
    case 0x7F0B1E48u: goto label_7F0B1E48;
    case 0x7F0B1E4Cu: goto label_7F0B1E4C;
    case 0x7F0B1E50u: goto label_7F0B1E50;
    case 0x7F0B1E54u: goto label_7F0B1E54;
    case 0x7F0B1E58u: goto label_7F0B1E58;
    case 0x7F0B1E5Cu: goto label_7F0B1E5C;
    case 0x7F0B1E60u: goto label_7F0B1E60;
    case 0x7F0B1E64u: goto label_7F0B1E64;
    case 0x7F0B1E68u: goto label_7F0B1E68;
    case 0x7F0B1E6Cu: goto label_7F0B1E6C;
    case 0x7F0B1E70u: goto label_7F0B1E70;
    case 0x7F0B1E74u: goto label_7F0B1E74;
    case 0x7F0B1E78u: goto label_7F0B1E78;
    case 0x7F0B1E7Cu: goto label_7F0B1E7C;
    case 0x7F0B1E80u: goto label_7F0B1E80;
    case 0x7F0B1E84u: goto label_7F0B1E84;
    case 0x7F0B1E88u: goto label_7F0B1E88;
    case 0x7F0B1E8Cu: goto label_7F0B1E8C;
    case 0x7F0B1E90u: goto label_7F0B1E90;
    case 0x7F0B1E94u: goto label_7F0B1E94;
    case 0x7F0B1E98u: goto label_7F0B1E98;
    case 0x7F0B1E9Cu: goto label_7F0B1E9C;
    case 0x7F0B1EA0u: goto label_7F0B1EA0;
    case 0x7F0B1EA4u: goto label_7F0B1EA4;
    case 0x7F0B1EA8u: goto label_7F0B1EA8;
    case 0x7F0B1EACu: goto label_7F0B1EAC;
    case 0x7F0B1EB0u: goto label_7F0B1EB0;
    case 0x7F0B1EB4u: goto label_7F0B1EB4;
    case 0x7F0B1EB8u: goto label_7F0B1EB8;
    case 0x7F0B1EBCu: goto label_7F0B1EBC;
    case 0x7F0B1EC0u: goto label_7F0B1EC0;
    case 0x7F0B1EC4u: goto label_7F0B1EC4;
    case 0x7F0B1EC8u: goto label_7F0B1EC8;
    case 0x7F0B1ECCu: goto label_7F0B1ECC;
    case 0x7F0B1ED0u: goto label_7F0B1ED0;
    case 0x7F0B1ED4u: goto label_7F0B1ED4;
    case 0x7F0B1ED8u: goto label_7F0B1ED8;
    case 0x7F0B1EDCu: goto label_7F0B1EDC;
    case 0x7F0B1EE0u: goto label_7F0B1EE0;
    case 0x7F0B1EE4u: goto label_7F0B1EE4;
    case 0x7F0B1EE8u: goto label_7F0B1EE8;
    case 0x7F0B1EECu: goto label_7F0B1EEC;
    case 0x7F0B1EF0u: goto label_7F0B1EF0;
    case 0x7F0B1EF4u: goto label_7F0B1EF4;
    case 0x7F0B1EF8u: goto label_7F0B1EF8;
    case 0x7F0B1EFCu: goto label_7F0B1EFC;
    case 0x7F0B1F00u: goto label_7F0B1F00;
    case 0x7F0B1F04u: goto label_7F0B1F04;
    case 0x7F0B1F08u: goto label_7F0B1F08;
    case 0x7F0B1F0Cu: goto label_7F0B1F0C;
    case 0x7F0B1F10u: goto label_7F0B1F10;
    case 0x7F0B1F14u: goto label_7F0B1F14;
    case 0x7F0B1F18u: goto label_7F0B1F18;
    case 0x7F0B1F1Cu: goto label_7F0B1F1C;
    case 0x7F0B1F20u: goto label_7F0B1F20;
    case 0x7F0B1F24u: goto label_7F0B1F24;
    case 0x7F0B1F28u: goto label_7F0B1F28;
    case 0x7F0B1F2Cu: goto label_7F0B1F2C;
    case 0x7F0B1F30u: goto label_7F0B1F30;
    case 0x7F0B1F34u: goto label_7F0B1F34;
    case 0x7F0B1F38u: goto label_7F0B1F38;
    case 0x7F0B1F3Cu: goto label_7F0B1F3C;
    case 0x7F0B1F40u: goto label_7F0B1F40;
    case 0x7F0B1F44u: goto label_7F0B1F44;
    case 0x7F0B1F48u: goto label_7F0B1F48;
    case 0x7F0B1F4Cu: goto label_7F0B1F4C;
    case 0x7F0B1F50u: goto label_7F0B1F50;
    case 0x7F0B1F54u: goto label_7F0B1F54;
    case 0x7F0B1F58u: goto label_7F0B1F58;
    case 0x7F0B1F5Cu: goto label_7F0B1F5C;
    case 0x7F0B1F60u: goto label_7F0B1F60;
    case 0x7F0B1F64u: goto label_7F0B1F64;
    case 0x7F0B1F68u: goto label_7F0B1F68;
    case 0x7F0B1F6Cu: goto label_7F0B1F6C;
    case 0x7F0B1F70u: goto label_7F0B1F70;
    case 0x7F0B1F74u: goto label_7F0B1F74;
    case 0x7F0B1F78u: goto label_7F0B1F78;
    case 0x7F0B1F7Cu: goto label_7F0B1F7C;
    case 0x7F0B1F80u: goto label_7F0B1F80;
    case 0x7F0B1F84u: goto label_7F0B1F84;
    case 0x7F0B1F88u: goto label_7F0B1F88;
    case 0x7F0B1F8Cu: goto label_7F0B1F8C;
    case 0x7F0B1F90u: goto label_7F0B1F90;
    case 0x7F0B1F94u: goto label_7F0B1F94;
    case 0x7F0B1F98u: goto label_7F0B1F98;
    case 0x7F0B1F9Cu: goto label_7F0B1F9C;
    case 0x7F0B1FA0u: goto label_7F0B1FA0;
    case 0x7F0B1FA4u: goto label_7F0B1FA4;
    case 0x7F0B1FA8u: goto label_7F0B1FA8;
    case 0x7F0B1FACu: goto label_7F0B1FAC;
    case 0x7F0B1FB0u: goto label_7F0B1FB0;
    case 0x7F0B1FB4u: goto label_7F0B1FB4;
    case 0x7F0B1FB8u: goto label_7F0B1FB8;
    case 0x7F0B1FBCu: goto label_7F0B1FBC;
    case 0x7F0B1FC0u: goto label_7F0B1FC0;
    case 0x7F0B1FC4u: goto label_7F0B1FC4;
    case 0x7F0B1FC8u: goto label_7F0B1FC8;
    case 0x7F0B1FCCu: goto label_7F0B1FCC;
    case 0x7F0B1FD0u: goto label_7F0B1FD0;
    case 0x7F0B1FD4u: goto label_7F0B1FD4;
    case 0x7F0B1FD8u: goto label_7F0B1FD8;
    case 0x7F0B1FDCu: goto label_7F0B1FDC;
    case 0x7F0B1FE0u: goto label_7F0B1FE0;
    case 0x7F0B1FE4u: goto label_7F0B1FE4;
    case 0x7F0B1FE8u: goto label_7F0B1FE8;
    case 0x7F0B1FECu: goto label_7F0B1FEC;
    case 0x7F0B1FF0u: goto label_7F0B1FF0;
    case 0x7F0B1FF4u: goto label_7F0B1FF4;
    case 0x7F0B1FF8u: goto label_7F0B1FF8;
    case 0x7F0B1FFCu: goto label_7F0B1FFC;
    case 0x7F0B2000u: goto label_7F0B2000;
    case 0x7F0B2004u: goto label_7F0B2004;
    case 0x7F0B2008u: goto label_7F0B2008;
    case 0x7F0B200Cu: goto label_7F0B200C;
    case 0x7F0B2010u: goto label_7F0B2010;
    case 0x7F0B2014u: goto label_7F0B2014;
    case 0x7F0B2018u: goto label_7F0B2018;
    case 0x7F0B201Cu: goto label_7F0B201C;
    case 0x7F0B2020u: goto label_7F0B2020;
    case 0x7F0B2024u: goto label_7F0B2024;
    case 0x7F0B2028u: goto label_7F0B2028;
    case 0x7F0B202Cu: goto label_7F0B202C;
    case 0x7F0B2030u: goto label_7F0B2030;
    case 0x7F0B2034u: goto label_7F0B2034;
    case 0x7F0B2038u: goto label_7F0B2038;
    case 0x7F0B203Cu: goto label_7F0B203C;
    case 0x7F0B2040u: goto label_7F0B2040;
    case 0x7F0B2044u: goto label_7F0B2044;
    case 0x7F0B2048u: goto label_7F0B2048;
    case 0x7F0B204Cu: goto label_7F0B204C;
    case 0x7F0B2050u: goto label_7F0B2050;
    case 0x7F0B2054u: goto label_7F0B2054;
    case 0x7F0B2058u: goto label_7F0B2058;
    case 0x7F0B205Cu: goto label_7F0B205C;
    case 0x7F0B2060u: goto label_7F0B2060;
    case 0x7F0B2064u: goto label_7F0B2064;
    case 0x7F0B2068u: goto label_7F0B2068;
    case 0x7F0B206Cu: goto label_7F0B206C;
    case 0x7F0B2070u: goto label_7F0B2070;
    case 0x7F0B2074u: goto label_7F0B2074;
    case 0x7F0B2078u: goto label_7F0B2078;
    case 0x7F0B207Cu: goto label_7F0B207C;
    case 0x7F0B2080u: goto label_7F0B2080;
    case 0x7F0B2084u: goto label_7F0B2084;
    case 0x7F0B2088u: goto label_7F0B2088;
    case 0x7F0B208Cu: goto label_7F0B208C;
    case 0x7F0B2090u: goto label_7F0B2090;
    case 0x7F0B2094u: goto label_7F0B2094;
    case 0x7F0B2098u: goto label_7F0B2098;
    case 0x7F0B209Cu: goto label_7F0B209C;
    case 0x7F0B20A0u: goto label_7F0B20A0;
    case 0x7F0B20A4u: goto label_7F0B20A4;
    case 0x7F0B20A8u: goto label_7F0B20A8;
    case 0x7F0B20ACu: goto label_7F0B20AC;
    case 0x7F0B20B0u: goto label_7F0B20B0;
    case 0x7F0B20B4u: goto label_7F0B20B4;
    case 0x7F0B20B8u: goto label_7F0B20B8;
    case 0x7F0B20BCu: goto label_7F0B20BC;
    case 0x7F0B20C0u: goto label_7F0B20C0;
    case 0x7F0B20C4u: goto label_7F0B20C4;
    case 0x7F0B20C8u: goto label_7F0B20C8;
    case 0x7F0B20CCu: goto label_7F0B20CC;
    case 0x7F0B20D0u: goto label_7F0B20D0;
    case 0x7F0B20D4u: goto label_7F0B20D4;
    case 0x7F0B20D8u: goto label_7F0B20D8;
    case 0x7F0B20DCu: goto label_7F0B20DC;
    case 0x7F0B20E0u: goto label_7F0B20E0;
    case 0x7F0B20E4u: goto label_7F0B20E4;
    case 0x7F0B20E8u: goto label_7F0B20E8;
    case 0x7F0B20ECu: goto label_7F0B20EC;
    case 0x7F0B20F0u: goto label_7F0B20F0;
    case 0x7F0B20F4u: goto label_7F0B20F4;
    case 0x7F0B20F8u: goto label_7F0B20F8;
    case 0x7F0B20FCu: goto label_7F0B20FC;
    case 0x7F0B2100u: goto label_7F0B2100;
    case 0x7F0B2104u: goto label_7F0B2104;
    case 0x7F0B2108u: goto label_7F0B2108;
    case 0x7F0B210Cu: goto label_7F0B210C;
    case 0x7F0B2110u: goto label_7F0B2110;
    case 0x7F0B2114u: goto label_7F0B2114;
    case 0x7F0B2118u: goto label_7F0B2118;
    case 0x7F0B211Cu: goto label_7F0B211C;
    case 0x7F0B2120u: goto label_7F0B2120;
    case 0x7F0B2124u: goto label_7F0B2124;
    case 0x7F0B2128u: goto label_7F0B2128;
    case 0x7F0B212Cu: goto label_7F0B212C;
    case 0x7F0B2130u: goto label_7F0B2130;
    case 0x7F0B2134u: goto label_7F0B2134;
    case 0x7F0B2138u: goto label_7F0B2138;
    case 0x7F0B213Cu: goto label_7F0B213C;
    case 0x7F0B2140u: goto label_7F0B2140;
    case 0x7F0B2144u: goto label_7F0B2144;
    case 0x7F0B2148u: goto label_7F0B2148;
    case 0x7F0B214Cu: goto label_7F0B214C;
    case 0x7F0B2150u: goto label_7F0B2150;
    case 0x7F0B2154u: goto label_7F0B2154;
    case 0x7F0B2158u: goto label_7F0B2158;
    case 0x7F0B215Cu: goto label_7F0B215C;
    case 0x7F0B2160u: goto label_7F0B2160;
    case 0x7F0B2164u: goto label_7F0B2164;
    case 0x7F0B2168u: goto label_7F0B2168;
    case 0x7F0B216Cu: goto label_7F0B216C;
    case 0x7F0B2170u: goto label_7F0B2170;
    case 0x7F0B2174u: goto label_7F0B2174;
    case 0x7F0B2178u: goto label_7F0B2178;
    case 0x7F0B217Cu: goto label_7F0B217C;
    case 0x7F0B2180u: goto label_7F0B2180;
    case 0x7F0B2184u: goto label_7F0B2184;
    case 0x7F0B2188u: goto label_7F0B2188;
    case 0x7F0B218Cu: goto label_7F0B218C;
    case 0x7F0B2190u: goto label_7F0B2190;
    case 0x7F0B2194u: goto label_7F0B2194;
    case 0x7F0B2198u: goto label_7F0B2198;
    case 0x7F0B219Cu: goto label_7F0B219C;
    case 0x7F0B21A0u: goto label_7F0B21A0;
    case 0x7F0B21A4u: goto label_7F0B21A4;
    case 0x7F0B21A8u: goto label_7F0B21A8;
    case 0x7F0B21ACu: goto label_7F0B21AC;
    case 0x7F0B21B0u: goto label_7F0B21B0;
    case 0x7F0B21B4u: goto label_7F0B21B4;
    case 0x7F0B21B8u: goto label_7F0B21B8;
    case 0x7F0B21BCu: goto label_7F0B21BC;
    case 0x7F0B21C0u: goto label_7F0B21C0;
    case 0x7F0B21C4u: goto label_7F0B21C4;
    case 0x7F0B21C8u: goto label_7F0B21C8;
    case 0x7F0B21CCu: goto label_7F0B21CC;
    case 0x7F0B21D0u: goto label_7F0B21D0;
    case 0x7F0B21D4u: goto label_7F0B21D4;
    case 0x7F0B21D8u: goto label_7F0B21D8;
    case 0x7F0B21DCu: goto label_7F0B21DC;
    case 0x7F0B21E0u: goto label_7F0B21E0;
    case 0x7F0B21E4u: goto label_7F0B21E4;
    case 0x7F0B21E8u: goto label_7F0B21E8;
    case 0x7F0B21ECu: goto label_7F0B21EC;
    case 0x7F0B21F0u: goto label_7F0B21F0;
    case 0x7F0B21F4u: goto label_7F0B21F4;
    case 0x7F0B21F8u: goto label_7F0B21F8;
    case 0x7F0B21FCu: goto label_7F0B21FC;
    case 0x7F0B2200u: goto label_7F0B2200;
    case 0x7F0B2204u: goto label_7F0B2204;
    case 0x7F0B2208u: goto label_7F0B2208;
    case 0x7F0B220Cu: goto label_7F0B220C;
    case 0x7F0B2210u: goto label_7F0B2210;
    case 0x7F0B2214u: goto label_7F0B2214;
    case 0x7F0B2218u: goto label_7F0B2218;
    case 0x7F0B221Cu: goto label_7F0B221C;
    case 0x7F0B2220u: goto label_7F0B2220;
    case 0x7F0B2224u: goto label_7F0B2224;
    case 0x7F0B2228u: goto label_7F0B2228;
    case 0x7F0B222Cu: goto label_7F0B222C;
    case 0x7F0B2230u: goto label_7F0B2230;
    case 0x7F0B2234u: goto label_7F0B2234;
    case 0x7F0B2238u: goto label_7F0B2238;
    case 0x7F0B223Cu: goto label_7F0B223C;
    case 0x7F0B2240u: goto label_7F0B2240;
    case 0x7F0B2244u: goto label_7F0B2244;
    case 0x7F0B2248u: goto label_7F0B2248;
    case 0x7F0B224Cu: goto label_7F0B224C;
    case 0x7F0B2250u: goto label_7F0B2250;
    case 0x7F0B2254u: goto label_7F0B2254;
    case 0x7F0B2258u: goto label_7F0B2258;
    case 0x7F0B225Cu: goto label_7F0B225C;
    case 0x7F0B2260u: goto label_7F0B2260;
    case 0x7F0B2264u: goto label_7F0B2264;
    case 0x7F0B2268u: goto label_7F0B2268;
    case 0x7F0B226Cu: goto label_7F0B226C;
    case 0x7F0B2270u: goto label_7F0B2270;
    case 0x7F0B2274u: goto label_7F0B2274;
    case 0x7F0B2278u: goto label_7F0B2278;
    case 0x7F0B227Cu: goto label_7F0B227C;
    case 0x7F0B2280u: goto label_7F0B2280;
    case 0x7F0B2284u: goto label_7F0B2284;
    case 0x7F0B2288u: goto label_7F0B2288;
    case 0x7F0B228Cu: goto label_7F0B228C;
    case 0x7F0B2290u: goto label_7F0B2290;
    case 0x7F0B2294u: goto label_7F0B2294;
    case 0x7F0B2298u: goto label_7F0B2298;
    case 0x7F0B229Cu: goto label_7F0B229C;
    case 0x7F0B22A0u: goto label_7F0B22A0;
    case 0x7F0B22A4u: goto label_7F0B22A4;
    case 0x7F0B22A8u: goto label_7F0B22A8;
    case 0x7F0B22ACu: goto label_7F0B22AC;
    case 0x7F0B22B0u: goto label_7F0B22B0;
    case 0x7F0B22B4u: goto label_7F0B22B4;
    case 0x7F0B22B8u: goto label_7F0B22B8;
    case 0x7F0B22BCu: goto label_7F0B22BC;
    case 0x7F0B22C0u: goto label_7F0B22C0;
    case 0x7F0B22C4u: goto label_7F0B22C4;
    case 0x7F0B22C8u: goto label_7F0B22C8;
    case 0x7F0B22CCu: goto label_7F0B22CC;
    case 0x7F0B22D0u: goto label_7F0B22D0;
    case 0x7F0B22D4u: goto label_7F0B22D4;
    case 0x7F0B22D8u: goto label_7F0B22D8;
    case 0x7F0B22DCu: goto label_7F0B22DC;
    case 0x7F0B22E0u: goto label_7F0B22E0;
    case 0x7F0B22E4u: goto label_7F0B22E4;
    case 0x7F0B22E8u: goto label_7F0B22E8;
    case 0x7F0B22ECu: goto label_7F0B22EC;
    case 0x7F0B22F0u: goto label_7F0B22F0;
    case 0x7F0B22F4u: goto label_7F0B22F4;
    case 0x7F0B22F8u: goto label_7F0B22F8;
    case 0x7F0B22FCu: goto label_7F0B22FC;
    case 0x7F0B2300u: goto label_7F0B2300;
    case 0x7F0B2304u: goto label_7F0B2304;
    case 0x7F0B2308u: goto label_7F0B2308;
    case 0x7F0B230Cu: goto label_7F0B230C;
    case 0x7F0B2310u: goto label_7F0B2310;
    case 0x7F0B2314u: goto label_7F0B2314;
    case 0x7F0B2318u: goto label_7F0B2318;
    case 0x7F0B231Cu: goto label_7F0B231C;
    case 0x7F0B2320u: goto label_7F0B2320;
    case 0x7F0B2324u: goto label_7F0B2324;
    case 0x7F0B2328u: goto label_7F0B2328;
    case 0x7F0B232Cu: goto label_7F0B232C;
    case 0x7F0B2330u: goto label_7F0B2330;
    case 0x7F0B2334u: goto label_7F0B2334;
    case 0x7F0B2338u: goto label_7F0B2338;
    case 0x7F0B233Cu: goto label_7F0B233C;
    case 0x7F0B2340u: goto label_7F0B2340;
    case 0x7F0B2344u: goto label_7F0B2344;
    case 0x7F0B2348u: goto label_7F0B2348;
    case 0x7F0B234Cu: goto label_7F0B234C;
    case 0x7F0B2350u: goto label_7F0B2350;
    case 0x7F0B2354u: goto label_7F0B2354;
    case 0x7F0B2358u: goto label_7F0B2358;
    case 0x7F0B235Cu: goto label_7F0B235C;
    case 0x7F0B2360u: goto label_7F0B2360;
    case 0x7F0B2364u: goto label_7F0B2364;
    case 0x7F0B2368u: goto label_7F0B2368;
    case 0x7F0B236Cu: goto label_7F0B236C;
    case 0x7F0B2370u: goto label_7F0B2370;
    case 0x7F0B2374u: goto label_7F0B2374;
    case 0x7F0B2378u: goto label_7F0B2378;
    case 0x7F0B237Cu: goto label_7F0B237C;
    case 0x7F0B2380u: goto label_7F0B2380;
    case 0x7F0B2384u: goto label_7F0B2384;
    case 0x7F0B2388u: goto label_7F0B2388;
    case 0x7F0B238Cu: goto label_7F0B238C;
    case 0x7F0B2390u: goto label_7F0B2390;
    case 0x7F0B2394u: goto label_7F0B2394;
    case 0x7F0B2398u: goto label_7F0B2398;
    case 0x7F0B239Cu: goto label_7F0B239C;
    case 0x7F0B23A0u: goto label_7F0B23A0;
    case 0x7F0B23A4u: goto label_7F0B23A4;
    case 0x7F0B23A8u: goto label_7F0B23A8;
    case 0x7F0B23ACu: goto label_7F0B23AC;
    case 0x7F0B23B0u: goto label_7F0B23B0;
    case 0x7F0B23B4u: goto label_7F0B23B4;
    case 0x7F0B23B8u: goto label_7F0B23B8;
    case 0x7F0B23BCu: goto label_7F0B23BC;
    case 0x7F0B23C0u: goto label_7F0B23C0;
    case 0x7F0B23C4u: goto label_7F0B23C4;
    case 0x7F0B23C8u: goto label_7F0B23C8;
    case 0x7F0B23CCu: goto label_7F0B23CC;
    case 0x7F0B23D0u: goto label_7F0B23D0;
    case 0x7F0B23D4u: goto label_7F0B23D4;
    case 0x7F0B23D8u: goto label_7F0B23D8;
    case 0x7F0B23DCu: goto label_7F0B23DC;
    case 0x7F0B23E0u: goto label_7F0B23E0;
    case 0x7F0B23E4u: goto label_7F0B23E4;
    case 0x7F0B23E8u: goto label_7F0B23E8;
    case 0x7F0B23ECu: goto label_7F0B23EC;
    case 0x7F0B23F0u: goto label_7F0B23F0;
    case 0x7F0B23F4u: goto label_7F0B23F4;
    case 0x7F0B23F8u: goto label_7F0B23F8;
    case 0x7F0B23FCu: goto label_7F0B23FC;
    case 0x7F0B2400u: goto label_7F0B2400;
    case 0x7F0B2404u: goto label_7F0B2404;
    case 0x7F0B2408u: goto label_7F0B2408;
    case 0x7F0B240Cu: goto label_7F0B240C;
    case 0x7F0B2410u: goto label_7F0B2410;
    case 0x7F0B2414u: goto label_7F0B2414;
    case 0x7F0B2418u: goto label_7F0B2418;
    case 0x7F0B241Cu: goto label_7F0B241C;
    case 0x7F0B2420u: goto label_7F0B2420;
    case 0x7F0B2424u: goto label_7F0B2424;
    case 0x7F0B2428u: goto label_7F0B2428;
    case 0x7F0B242Cu: goto label_7F0B242C;
    case 0x7F0B2430u: goto label_7F0B2430;
    case 0x7F0B2434u: goto label_7F0B2434;
    case 0x7F0B2438u: goto label_7F0B2438;
    case 0x7F0B243Cu: goto label_7F0B243C;
    case 0x7F0B2440u: goto label_7F0B2440;
    case 0x7F0B2444u: goto label_7F0B2444;
    case 0x7F0B2448u: goto label_7F0B2448;
    case 0x7F0B244Cu: goto label_7F0B244C;
    case 0x7F0B2450u: goto label_7F0B2450;
    case 0x7F0B2454u: goto label_7F0B2454;
    case 0x7F0B2458u: goto label_7F0B2458;
    case 0x7F0B245Cu: goto label_7F0B245C;
    case 0x7F0B2460u: goto label_7F0B2460;
    case 0x7F0B2464u: goto label_7F0B2464;
    case 0x7F0B2468u: goto label_7F0B2468;
    case 0x7F0B246Cu: goto label_7F0B246C;
    case 0x7F0B2470u: goto label_7F0B2470;
    case 0x7F0B2474u: goto label_7F0B2474;
    case 0x7F0B2478u: goto label_7F0B2478;
    case 0x7F0B247Cu: goto label_7F0B247C;
    case 0x7F0B2480u: goto label_7F0B2480;
    case 0x7F0B2484u: goto label_7F0B2484;
    case 0x7F0B2488u: goto label_7F0B2488;
    case 0x7F0B248Cu: goto label_7F0B248C;
    case 0x7F0B2490u: goto label_7F0B2490;
    case 0x7F0B2494u: goto label_7F0B2494;
    case 0x7F0B2498u: goto label_7F0B2498;
    case 0x7F0B249Cu: goto label_7F0B249C;
    case 0x7F0B24A0u: goto label_7F0B24A0;
    case 0x7F0B24A4u: goto label_7F0B24A4;
    case 0x7F0B24A8u: goto label_7F0B24A8;
    case 0x7F0B24ACu: goto label_7F0B24AC;
    case 0x7F0B24B0u: goto label_7F0B24B0;
    case 0x7F0B24B4u: goto label_7F0B24B4;
    case 0x7F0B24B8u: goto label_7F0B24B8;
    case 0x7F0B24BCu: goto label_7F0B24BC;
    case 0x7F0B24C0u: goto label_7F0B24C0;
    case 0x7F0B24C4u: goto label_7F0B24C4;
    case 0x7F0B24C8u: goto label_7F0B24C8;
    case 0x7F0B24CCu: goto label_7F0B24CC;
    case 0x7F0B24D0u: goto label_7F0B24D0;
    case 0x7F0B24D4u: goto label_7F0B24D4;
    case 0x7F0B24D8u: goto label_7F0B24D8;
    case 0x7F0B24DCu: goto label_7F0B24DC;
    case 0x7F0B24E0u: goto label_7F0B24E0;
    case 0x7F0B24E4u: goto label_7F0B24E4;
    case 0x7F0B24E8u: goto label_7F0B24E8;
    case 0x7F0B24ECu: goto label_7F0B24EC;
    case 0x7F0B24F0u: goto label_7F0B24F0;
    case 0x7F0B24F4u: goto label_7F0B24F4;
    case 0x7F0B24F8u: goto label_7F0B24F8;
    case 0x7F0B24FCu: goto label_7F0B24FC;
    case 0x7F0B2500u: goto label_7F0B2500;
    case 0x7F0B2504u: goto label_7F0B2504;
    case 0x7F0B2508u: goto label_7F0B2508;
    case 0x7F0B250Cu: goto label_7F0B250C;
    case 0x7F0B2510u: goto label_7F0B2510;
    case 0x7F0B2514u: goto label_7F0B2514;
    case 0x7F0B2518u: goto label_7F0B2518;
    case 0x7F0B251Cu: goto label_7F0B251C;
    case 0x7F0B2520u: goto label_7F0B2520;
    case 0x7F0B2524u: goto label_7F0B2524;
    case 0x7F0B2528u: goto label_7F0B2528;
    case 0x7F0B252Cu: goto label_7F0B252C;
    case 0x7F0B2530u: goto label_7F0B2530;
    case 0x7F0B2534u: goto label_7F0B2534;
    case 0x7F0B2538u: goto label_7F0B2538;
    case 0x7F0B253Cu: goto label_7F0B253C;
    case 0x7F0B2540u: goto label_7F0B2540;
    case 0x7F0B2544u: goto label_7F0B2544;
    case 0x7F0B2548u: goto label_7F0B2548;
    case 0x7F0B254Cu: goto label_7F0B254C;
    case 0x7F0B2550u: goto label_7F0B2550;
    case 0x7F0B2554u: goto label_7F0B2554;
    case 0x7F0B2558u: goto label_7F0B2558;
    case 0x7F0B255Cu: goto label_7F0B255C;
    case 0x7F0B2560u: goto label_7F0B2560;
    case 0x7F0B2564u: goto label_7F0B2564;
    case 0x7F0B2568u: goto label_7F0B2568;
    case 0x7F0B256Cu: goto label_7F0B256C;
    case 0x7F0B2570u: goto label_7F0B2570;
    case 0x7F0B2574u: goto label_7F0B2574;
    case 0x7F0B2578u: goto label_7F0B2578;
    case 0x7F0B257Cu: goto label_7F0B257C;
    case 0x7F0B2580u: goto label_7F0B2580;
    case 0x7F0B2584u: goto label_7F0B2584;
    case 0x7F0B2588u: goto label_7F0B2588;
    case 0x7F0B258Cu: goto label_7F0B258C;
    case 0x7F0B2590u: goto label_7F0B2590;
    case 0x7F0B2594u: goto label_7F0B2594;
    case 0x7F0B2598u: goto label_7F0B2598;
    case 0x7F0B259Cu: goto label_7F0B259C;
    case 0x7F0B25A0u: goto label_7F0B25A0;
    case 0x7F0B25A4u: goto label_7F0B25A4;
    case 0x7F0B25A8u: goto label_7F0B25A8;
    case 0x7F0B25ACu: goto label_7F0B25AC;
    case 0x7F0B25B0u: goto label_7F0B25B0;
    case 0x7F0B25B4u: goto label_7F0B25B4;
    case 0x7F0B25B8u: goto label_7F0B25B8;
    case 0x7F0B25BCu: goto label_7F0B25BC;
    case 0x7F0B25C0u: goto label_7F0B25C0;
    case 0x7F0B25C4u: goto label_7F0B25C4;
    case 0x7F0B25C8u: goto label_7F0B25C8;
    case 0x7F0B25CCu: goto label_7F0B25CC;
    case 0x7F0B25D0u: goto label_7F0B25D0;
    case 0x7F0B25D4u: goto label_7F0B25D4;
    case 0x7F0B25D8u: goto label_7F0B25D8;
    case 0x7F0B25DCu: goto label_7F0B25DC;
    case 0x7F0B25E0u: goto label_7F0B25E0;
    case 0x7F0B25E4u: goto label_7F0B25E4;
    case 0x7F0B25E8u: goto label_7F0B25E8;
    case 0x7F0B25ECu: goto label_7F0B25EC;
    case 0x7F0B25F0u: goto label_7F0B25F0;
    case 0x7F0B25F4u: goto label_7F0B25F4;
    case 0x7F0B25F8u: goto label_7F0B25F8;
    case 0x7F0B25FCu: goto label_7F0B25FC;
    case 0x7F0B2600u: goto label_7F0B2600;
    case 0x7F0B2604u: goto label_7F0B2604;
    case 0x7F0B2608u: goto label_7F0B2608;
    case 0x7F0B260Cu: goto label_7F0B260C;
    case 0x7F0B2610u: goto label_7F0B2610;
    case 0x7F0B2614u: goto label_7F0B2614;
    case 0x7F0B2618u: goto label_7F0B2618;
    case 0x7F0B261Cu: goto label_7F0B261C;
    case 0x7F0B2620u: goto label_7F0B2620;
    case 0x7F0B2624u: goto label_7F0B2624;
    case 0x7F0B2628u: goto label_7F0B2628;
    case 0x7F0B262Cu: goto label_7F0B262C;
    case 0x7F0B2630u: goto label_7F0B2630;
    case 0x7F0B2634u: goto label_7F0B2634;
    case 0x7F0B2638u: goto label_7F0B2638;
    case 0x7F0B263Cu: goto label_7F0B263C;
    case 0x7F0B2640u: goto label_7F0B2640;
    case 0x7F0B2644u: goto label_7F0B2644;
    case 0x7F0B2648u: goto label_7F0B2648;
    case 0x7F0B264Cu: goto label_7F0B264C;
    case 0x7F0B2650u: goto label_7F0B2650;
    case 0x7F0B2654u: goto label_7F0B2654;
    case 0x7F0B2658u: goto label_7F0B2658;
    case 0x7F0B265Cu: goto label_7F0B265C;
    case 0x7F0B2660u: goto label_7F0B2660;
    case 0x7F0B2664u: goto label_7F0B2664;
    case 0x7F0B2668u: goto label_7F0B2668;
    case 0x7F0B266Cu: goto label_7F0B266C;
    case 0x7F0B2670u: goto label_7F0B2670;
    case 0x7F0B2674u: goto label_7F0B2674;
    case 0x7F0B2678u: goto label_7F0B2678;
    case 0x7F0B267Cu: goto label_7F0B267C;
    case 0x7F0B2680u: goto label_7F0B2680;
    case 0x7F0B2684u: goto label_7F0B2684;
    case 0x7F0B2688u: goto label_7F0B2688;
    case 0x7F0B268Cu: goto label_7F0B268C;
    case 0x7F0B2690u: goto label_7F0B2690;
    case 0x7F0B2694u: goto label_7F0B2694;
    case 0x7F0B2698u: goto label_7F0B2698;
    case 0x7F0B269Cu: goto label_7F0B269C;
    case 0x7F0B26A0u: goto label_7F0B26A0;
    case 0x7F0B26A4u: goto label_7F0B26A4;
    case 0x7F0B26A8u: goto label_7F0B26A8;
    case 0x7F0B26ACu: goto label_7F0B26AC;
    case 0x7F0B26B0u: goto label_7F0B26B0;
    case 0x7F0B26B4u: goto label_7F0B26B4;
    case 0x7F0B26B8u: goto label_7F0B26B8;
    case 0x7F0B26BCu: goto label_7F0B26BC;
    case 0x7F0B26C0u: goto label_7F0B26C0;
    case 0x7F0B26C4u: goto label_7F0B26C4;
    case 0x7F0B26C8u: goto label_7F0B26C8;
    case 0x7F0B26CCu: goto label_7F0B26CC;
    case 0x7F0B26D0u: goto label_7F0B26D0;
    case 0x7F0B26D4u: goto label_7F0B26D4;
    case 0x7F0B26D8u: goto label_7F0B26D8;
    case 0x7F0B26DCu: goto label_7F0B26DC;
    case 0x7F0B26E0u: goto label_7F0B26E0;
    case 0x7F0B26E4u: goto label_7F0B26E4;
    case 0x7F0B26E8u: goto label_7F0B26E8;
    case 0x7F0B26ECu: goto label_7F0B26EC;
    case 0x7F0B26F0u: goto label_7F0B26F0;
    case 0x7F0B26F4u: goto label_7F0B26F4;
    case 0x7F0B26F8u: goto label_7F0B26F8;
    case 0x7F0B26FCu: goto label_7F0B26FC;
    case 0x7F0B2700u: goto label_7F0B2700;
    case 0x7F0B2704u: goto label_7F0B2704;
    case 0x7F0B2708u: goto label_7F0B2708;
    case 0x7F0B270Cu: goto label_7F0B270C;
    case 0x7F0B2710u: goto label_7F0B2710;
    case 0x7F0B2714u: goto label_7F0B2714;
    case 0x7F0B2718u: goto label_7F0B2718;
    case 0x7F0B271Cu: goto label_7F0B271C;
    case 0x7F0B2720u: goto label_7F0B2720;
    case 0x7F0B2724u: goto label_7F0B2724;
    case 0x7F0B2728u: goto label_7F0B2728;
    case 0x7F0B272Cu: goto label_7F0B272C;
    case 0x7F0B2730u: goto label_7F0B2730;
    case 0x7F0B2734u: goto label_7F0B2734;
    case 0x7F0B2738u: goto label_7F0B2738;
    case 0x7F0B273Cu: goto label_7F0B273C;
    case 0x7F0B2740u: goto label_7F0B2740;
    case 0x7F0B2744u: goto label_7F0B2744;
    case 0x7F0B2748u: goto label_7F0B2748;
    case 0x7F0B274Cu: goto label_7F0B274C;
    case 0x7F0B2750u: goto label_7F0B2750;
    case 0x7F0B2754u: goto label_7F0B2754;
    case 0x7F0B2758u: goto label_7F0B2758;
    case 0x7F0B275Cu: goto label_7F0B275C;
    case 0x7F0B2760u: goto label_7F0B2760;
    case 0x7F0B2764u: goto label_7F0B2764;
    case 0x7F0B2768u: goto label_7F0B2768;
    case 0x7F0B276Cu: goto label_7F0B276C;
    case 0x7F0B2770u: goto label_7F0B2770;
    case 0x7F0B2774u: goto label_7F0B2774;
    case 0x7F0B2778u: goto label_7F0B2778;
    case 0x7F0B277Cu: goto label_7F0B277C;
    case 0x7F0B2780u: goto label_7F0B2780;
    case 0x7F0B2784u: goto label_7F0B2784;
    case 0x7F0B2788u: goto label_7F0B2788;
    case 0x7F0B278Cu: goto label_7F0B278C;
    case 0x7F0B2790u: goto label_7F0B2790;
    case 0x7F0B2794u: goto label_7F0B2794;
    case 0x7F0B2798u: goto label_7F0B2798;
    case 0x7F0B279Cu: goto label_7F0B279C;
    case 0x7F0B27A0u: goto label_7F0B27A0;
    case 0x7F0B27A4u: goto label_7F0B27A4;
    case 0x7F0B27A8u: goto label_7F0B27A8;
    case 0x7F0B27ACu: goto label_7F0B27AC;
    case 0x7F0B27B0u: goto label_7F0B27B0;
    case 0x7F0B27B4u: goto label_7F0B27B4;
    case 0x7F0B27B8u: goto label_7F0B27B8;
    case 0x7F0B27BCu: goto label_7F0B27BC;
    case 0x7F0B27C0u: goto label_7F0B27C0;
    case 0x7F0B27C4u: goto label_7F0B27C4;
    case 0x7F0B27C8u: goto label_7F0B27C8;
    case 0x7F0B27CCu: goto label_7F0B27CC;
    case 0x7F0B27D0u: goto label_7F0B27D0;
    case 0x7F0B27D4u: goto label_7F0B27D4;
    case 0x7F0B27D8u: goto label_7F0B27D8;
    case 0x7F0B27DCu: goto label_7F0B27DC;
    case 0x7F0B27E0u: goto label_7F0B27E0;
    case 0x7F0B27E4u: goto label_7F0B27E4;
    case 0x7F0B27E8u: goto label_7F0B27E8;
    case 0x7F0B27ECu: goto label_7F0B27EC;
    case 0x7F0B27F0u: goto label_7F0B27F0;
    case 0x7F0B27F4u: goto label_7F0B27F4;
    case 0x7F0B27F8u: goto label_7F0B27F8;
    case 0x7F0B27FCu: goto label_7F0B27FC;
    case 0x7F0B2800u: goto label_7F0B2800;
    case 0x7F0B2804u: goto label_7F0B2804;
    case 0x7F0B2808u: goto label_7F0B2808;
    case 0x7F0B280Cu: goto label_7F0B280C;
    case 0x7F0B2810u: goto label_7F0B2810;
    case 0x7F0B2814u: goto label_7F0B2814;
    case 0x7F0B2818u: goto label_7F0B2818;
    case 0x7F0B281Cu: goto label_7F0B281C;
    case 0x7F0B2820u: goto label_7F0B2820;
    case 0x7F0B2824u: goto label_7F0B2824;
    case 0x7F0B2828u: goto label_7F0B2828;
    case 0x7F0B282Cu: goto label_7F0B282C;
    case 0x7F0B2830u: goto label_7F0B2830;
    case 0x7F0B2834u: goto label_7F0B2834;
    case 0x7F0B2838u: goto label_7F0B2838;
    case 0x7F0B283Cu: goto label_7F0B283C;
    case 0x7F0B2840u: goto label_7F0B2840;
    case 0x7F0B2844u: goto label_7F0B2844;
    case 0x7F0B2848u: goto label_7F0B2848;
    case 0x7F0B284Cu: goto label_7F0B284C;
    case 0x7F0B2850u: goto label_7F0B2850;
    case 0x7F0B2854u: goto label_7F0B2854;
    case 0x7F0B2858u: goto label_7F0B2858;
    case 0x7F0B285Cu: goto label_7F0B285C;
    case 0x7F0B2860u: goto label_7F0B2860;
    case 0x7F0B2864u: goto label_7F0B2864;
    case 0x7F0B2868u: goto label_7F0B2868;
    case 0x7F0B286Cu: goto label_7F0B286C;
    case 0x7F0B2870u: goto label_7F0B2870;
    case 0x7F0B2874u: goto label_7F0B2874;
    case 0x7F0B2878u: goto label_7F0B2878;
    case 0x7F0B287Cu: goto label_7F0B287C;
    case 0x7F0B2880u: goto label_7F0B2880;
    case 0x7F0B2884u: goto label_7F0B2884;
    case 0x7F0B2888u: goto label_7F0B2888;
    case 0x7F0B288Cu: goto label_7F0B288C;
    case 0x7F0B2890u: goto label_7F0B2890;
    case 0x7F0B2894u: goto label_7F0B2894;
    case 0x7F0B2898u: goto label_7F0B2898;
    case 0x7F0B289Cu: goto label_7F0B289C;
    case 0x7F0B28A0u: goto label_7F0B28A0;
    case 0x7F0B28A4u: goto label_7F0B28A4;
    case 0x7F0B28A8u: goto label_7F0B28A8;
    case 0x7F0B28ACu: goto label_7F0B28AC;
    case 0x7F0B28B0u: goto label_7F0B28B0;
    case 0x7F0B28B4u: goto label_7F0B28B4;
    case 0x7F0B28B8u: goto label_7F0B28B8;
    case 0x7F0B28BCu: goto label_7F0B28BC;
    case 0x7F0B28C0u: goto label_7F0B28C0;
    case 0x7F0B28C4u: goto label_7F0B28C4;
    case 0x7F0B28C8u: goto label_7F0B28C8;
    case 0x7F0B28CCu: goto label_7F0B28CC;
    case 0x7F0B28D0u: goto label_7F0B28D0;
    case 0x7F0B28D4u: goto label_7F0B28D4;
    case 0x7F0B28D8u: goto label_7F0B28D8;
    case 0x7F0B28DCu: goto label_7F0B28DC;
    case 0x7F0B28E0u: goto label_7F0B28E0;
    case 0x7F0B28E4u: goto label_7F0B28E4;
    case 0x7F0B28E8u: goto label_7F0B28E8;
    case 0x7F0B28ECu: goto label_7F0B28EC;
    case 0x7F0B28F0u: goto label_7F0B28F0;
    case 0x7F0B28F4u: goto label_7F0B28F4;
    case 0x7F0B28F8u: goto label_7F0B28F8;
    case 0x7F0B28FCu: goto label_7F0B28FC;
    case 0x7F0B2900u: goto label_7F0B2900;
    case 0x7F0B2904u: goto label_7F0B2904;
    case 0x7F0B2908u: goto label_7F0B2908;
    case 0x7F0B290Cu: goto label_7F0B290C;
    case 0x7F0B2910u: goto label_7F0B2910;
    case 0x7F0B2914u: goto label_7F0B2914;
    case 0x7F0B2918u: goto label_7F0B2918;
    case 0x7F0B291Cu: goto label_7F0B291C;
    case 0x7F0B2920u: goto label_7F0B2920;
    case 0x7F0B2924u: goto label_7F0B2924;
    case 0x7F0B2928u: goto label_7F0B2928;
    case 0x7F0B292Cu: goto label_7F0B292C;
    case 0x7F0B2930u: goto label_7F0B2930;
    case 0x7F0B2934u: goto label_7F0B2934;
    case 0x7F0B2938u: goto label_7F0B2938;
    case 0x7F0B293Cu: goto label_7F0B293C;
    case 0x7F0B2940u: goto label_7F0B2940;
    case 0x7F0B2944u: goto label_7F0B2944;
    case 0x7F0B2948u: goto label_7F0B2948;
    case 0x7F0B294Cu: goto label_7F0B294C;
    case 0x7F0B2950u: goto label_7F0B2950;
    case 0x7F0B2954u: goto label_7F0B2954;
    case 0x7F0B2958u: goto label_7F0B2958;
    case 0x7F0B295Cu: goto label_7F0B295C;
    case 0x7F0B2960u: goto label_7F0B2960;
    case 0x7F0B2964u: goto label_7F0B2964;
    case 0x7F0B2968u: goto label_7F0B2968;
    case 0x7F0B296Cu: goto label_7F0B296C;
    case 0x7F0B2970u: goto label_7F0B2970;
    case 0x7F0B2974u: goto label_7F0B2974;
    case 0x7F0B2978u: goto label_7F0B2978;
    case 0x7F0B297Cu: goto label_7F0B297C;
    case 0x7F0B2980u: goto label_7F0B2980;
    case 0x7F0B2984u: goto label_7F0B2984;
    case 0x7F0B2988u: goto label_7F0B2988;
    case 0x7F0B298Cu: goto label_7F0B298C;
    case 0x7F0B2990u: goto label_7F0B2990;
    case 0x7F0B2994u: goto label_7F0B2994;
    case 0x7F0B2998u: goto label_7F0B2998;
    case 0x7F0B299Cu: goto label_7F0B299C;
    case 0x7F0B29A0u: goto label_7F0B29A0;
    case 0x7F0B29A4u: goto label_7F0B29A4;
    case 0x7F0B29A8u: goto label_7F0B29A8;
    case 0x7F0B29ACu: goto label_7F0B29AC;
    case 0x7F0B29B0u: goto label_7F0B29B0;
    case 0x7F0B29B4u: goto label_7F0B29B4;
    case 0x7F0B29B8u: goto label_7F0B29B8;
    case 0x7F0B29BCu: goto label_7F0B29BC;
    case 0x7F0B29C0u: goto label_7F0B29C0;
    case 0x7F0B29C4u: goto label_7F0B29C4;
    case 0x7F0B29C8u: goto label_7F0B29C8;
    case 0x7F0B29CCu: goto label_7F0B29CC;
    case 0x7F0B29D0u: goto label_7F0B29D0;
    case 0x7F0B29D4u: goto label_7F0B29D4;
    case 0x7F0B29D8u: goto label_7F0B29D8;
    case 0x7F0B29DCu: goto label_7F0B29DC;
    case 0x7F0B29E0u: goto label_7F0B29E0;
    case 0x7F0B29E4u: goto label_7F0B29E4;
    case 0x7F0B29E8u: goto label_7F0B29E8;
    case 0x7F0B29ECu: goto label_7F0B29EC;
    case 0x7F0B29F0u: goto label_7F0B29F0;
    case 0x7F0B29F4u: goto label_7F0B29F4;
    case 0x7F0B29F8u: goto label_7F0B29F8;
    case 0x7F0B29FCu: goto label_7F0B29FC;
    case 0x7F0B2A00u: goto label_7F0B2A00;
    case 0x7F0B2A04u: goto label_7F0B2A04;
    case 0x7F0B2A08u: goto label_7F0B2A08;
    case 0x7F0B2A0Cu: goto label_7F0B2A0C;
    case 0x7F0B2A10u: goto label_7F0B2A10;
    case 0x7F0B2A14u: goto label_7F0B2A14;
    case 0x7F0B2A18u: goto label_7F0B2A18;
    case 0x7F0B2A1Cu: goto label_7F0B2A1C;
    case 0x7F0B2A20u: goto label_7F0B2A20;
    case 0x7F0B2A24u: goto label_7F0B2A24;
    case 0x7F0B2A28u: goto label_7F0B2A28;
    case 0x7F0B2A2Cu: goto label_7F0B2A2C;
    case 0x7F0B2A30u: goto label_7F0B2A30;
    case 0x7F0B2A34u: goto label_7F0B2A34;
    case 0x7F0B2A38u: goto label_7F0B2A38;
    case 0x7F0B2A3Cu: goto label_7F0B2A3C;
    case 0x7F0B2A40u: goto label_7F0B2A40;
    case 0x7F0B2A44u: goto label_7F0B2A44;
    case 0x7F0B2A48u: goto label_7F0B2A48;
    case 0x7F0B2A4Cu: goto label_7F0B2A4C;
    case 0x7F0B2A50u: goto label_7F0B2A50;
    case 0x7F0B2A54u: goto label_7F0B2A54;
    case 0x7F0B2A58u: goto label_7F0B2A58;
    case 0x7F0B2A5Cu: goto label_7F0B2A5C;
    case 0x7F0B2A60u: goto label_7F0B2A60;
    case 0x7F0B2A64u: goto label_7F0B2A64;
    case 0x7F0B2A68u: goto label_7F0B2A68;
    case 0x7F0B2A6Cu: goto label_7F0B2A6C;
    case 0x7F0B2A70u: goto label_7F0B2A70;
    case 0x7F0B2A74u: goto label_7F0B2A74;
    case 0x7F0B2A78u: goto label_7F0B2A78;
    case 0x7F0B2A7Cu: goto label_7F0B2A7C;
    case 0x7F0B2A80u: goto label_7F0B2A80;
    case 0x7F0B2A84u: goto label_7F0B2A84;
    case 0x7F0B2A88u: goto label_7F0B2A88;
    case 0x7F0B2A8Cu: goto label_7F0B2A8C;
    case 0x7F0B2A90u: goto label_7F0B2A90;
    case 0x7F0B2A94u: goto label_7F0B2A94;
    case 0x7F0B2A98u: goto label_7F0B2A98;
    case 0x7F0B2A9Cu: goto label_7F0B2A9C;
    case 0x7F0B2AA0u: goto label_7F0B2AA0;
    case 0x7F0B2AA4u: goto label_7F0B2AA4;
    case 0x7F0B2AA8u: goto label_7F0B2AA8;
    case 0x7F0B2AACu: goto label_7F0B2AAC;
    case 0x7F0B2AB0u: goto label_7F0B2AB0;
    case 0x7F0B2AB4u: goto label_7F0B2AB4;
    case 0x7F0B2AB8u: goto label_7F0B2AB8;
    case 0x7F0B2ABCu: goto label_7F0B2ABC;
    case 0x7F0B2AC0u: goto label_7F0B2AC0;
    case 0x7F0B2AC4u: goto label_7F0B2AC4;
    case 0x7F0B2AC8u: goto label_7F0B2AC8;
    case 0x7F0B2ACCu: goto label_7F0B2ACC;
    case 0x7F0B2AD0u: goto label_7F0B2AD0;
    case 0x7F0B2AD4u: goto label_7F0B2AD4;
    case 0x7F0B2AD8u: goto label_7F0B2AD8;
    case 0x7F0B2ADCu: goto label_7F0B2ADC;
    case 0x7F0B2AE0u: goto label_7F0B2AE0;
    case 0x7F0B2AE4u: goto label_7F0B2AE4;
    case 0x7F0B2AE8u: goto label_7F0B2AE8;
    case 0x7F0B2AECu: goto label_7F0B2AEC;
    case 0x7F0B2AF0u: goto label_7F0B2AF0;
    case 0x7F0B2AF4u: goto label_7F0B2AF4;
    case 0x7F0B2AF8u: goto label_7F0B2AF8;
    case 0x7F0B2AFCu: goto label_7F0B2AFC;
    case 0x7F0B2B00u: goto label_7F0B2B00;
    case 0x7F0B2B04u: goto label_7F0B2B04;
    case 0x7F0B2B08u: goto label_7F0B2B08;
    case 0x7F0B2B0Cu: goto label_7F0B2B0C;
    case 0x7F0B2B10u: goto label_7F0B2B10;
    case 0x7F0B2B14u: goto label_7F0B2B14;
    case 0x7F0B2B18u: goto label_7F0B2B18;
    case 0x7F0B2B1Cu: goto label_7F0B2B1C;
    case 0x7F0B2B20u: goto label_7F0B2B20;
    case 0x7F0B2B24u: goto label_7F0B2B24;
    case 0x7F0B2B28u: goto label_7F0B2B28;
    case 0x7F0B2B2Cu: goto label_7F0B2B2C;
    case 0x7F0B2B30u: goto label_7F0B2B30;
    case 0x7F0B2B34u: goto label_7F0B2B34;
    case 0x7F0B2B38u: goto label_7F0B2B38;
    case 0x7F0B2B3Cu: goto label_7F0B2B3C;
    case 0x7F0B2B40u: goto label_7F0B2B40;
    case 0x7F0B2B44u: goto label_7F0B2B44;
    case 0x7F0B2B48u: goto label_7F0B2B48;
    case 0x7F0B2B4Cu: goto label_7F0B2B4C;
    case 0x7F0B2B50u: goto label_7F0B2B50;
    case 0x7F0B2B54u: goto label_7F0B2B54;
    case 0x7F0B2B58u: goto label_7F0B2B58;
    case 0x7F0B2B5Cu: goto label_7F0B2B5C;
    case 0x7F0B2B60u: goto label_7F0B2B60;
    case 0x7F0B2B64u: goto label_7F0B2B64;
    case 0x7F0B2B68u: goto label_7F0B2B68;
    case 0x7F0B2B6Cu: goto label_7F0B2B6C;
    case 0x7F0B2B70u: goto label_7F0B2B70;
    case 0x7F0B2B74u: goto label_7F0B2B74;
    case 0x7F0B2B78u: goto label_7F0B2B78;
    case 0x7F0B2B7Cu: goto label_7F0B2B7C;
    case 0x7F0B2B80u: goto label_7F0B2B80;
    case 0x7F0B2B84u: goto label_7F0B2B84;
    case 0x7F0B2B88u: goto label_7F0B2B88;
    case 0x7F0B2B8Cu: goto label_7F0B2B8C;
    case 0x7F0B2B90u: goto label_7F0B2B90;
    case 0x7F0B2B94u: goto label_7F0B2B94;
    case 0x7F0B2B98u: goto label_7F0B2B98;
    case 0x7F0B2B9Cu: goto label_7F0B2B9C;
    case 0x7F0B2BA0u: goto label_7F0B2BA0;
    case 0x7F0B2BA4u: goto label_7F0B2BA4;
    case 0x7F0B2BA8u: goto label_7F0B2BA8;
    case 0x7F0B2BACu: goto label_7F0B2BAC;
    case 0x7F0B2BB0u: goto label_7F0B2BB0;
    case 0x7F0B2BB4u: goto label_7F0B2BB4;
    case 0x7F0B2BB8u: goto label_7F0B2BB8;
    case 0x7F0B2BBCu: goto label_7F0B2BBC;
    case 0x7F0B2BC0u: goto label_7F0B2BC0;
    case 0x7F0B2BC4u: goto label_7F0B2BC4;
    case 0x7F0B2BC8u: goto label_7F0B2BC8;
    case 0x7F0B2BCCu: goto label_7F0B2BCC;
    case 0x7F0B2BD0u: goto label_7F0B2BD0;
    case 0x7F0B2BD4u: goto label_7F0B2BD4;
    case 0x7F0B2BD8u: goto label_7F0B2BD8;
    case 0x7F0B2BDCu: goto label_7F0B2BDC;
    case 0x7F0B2BE0u: goto label_7F0B2BE0;
    case 0x7F0B2BE4u: goto label_7F0B2BE4;
    case 0x7F0B2BE8u: goto label_7F0B2BE8;
    case 0x7F0B2BECu: goto label_7F0B2BEC;
    case 0x7F0B2BF0u: goto label_7F0B2BF0;
    case 0x7F0B2BF4u: goto label_7F0B2BF4;
    case 0x7F0B2BF8u: goto label_7F0B2BF8;
    case 0x7F0B2BFCu: goto label_7F0B2BFC;
    case 0x7F0B2C00u: goto label_7F0B2C00;
    case 0x7F0B2C04u: goto label_7F0B2C04;
    case 0x7F0B2C08u: goto label_7F0B2C08;
    case 0x7F0B2C0Cu: goto label_7F0B2C0C;
    case 0x7F0B2C10u: goto label_7F0B2C10;
    case 0x7F0B2C14u: goto label_7F0B2C14;
    case 0x7F0B2C18u: goto label_7F0B2C18;
    case 0x7F0B2C1Cu: goto label_7F0B2C1C;
    case 0x7F0B2C20u: goto label_7F0B2C20;
    case 0x7F0B2C24u: goto label_7F0B2C24;
    case 0x7F0B2C28u: goto label_7F0B2C28;
    case 0x7F0B2C2Cu: goto label_7F0B2C2C;
    case 0x7F0B2C30u: goto label_7F0B2C30;
    case 0x7F0B2C34u: goto label_7F0B2C34;
    case 0x7F0B2C38u: goto label_7F0B2C38;
    case 0x7F0B2C3Cu: goto label_7F0B2C3C;
    case 0x7F0B2C40u: goto label_7F0B2C40;
    case 0x7F0B2C44u: goto label_7F0B2C44;
    case 0x7F0B2C48u: goto label_7F0B2C48;
    case 0x7F0B2C4Cu: goto label_7F0B2C4C;
    case 0x7F0B2C50u: goto label_7F0B2C50;
    case 0x7F0B2C54u: goto label_7F0B2C54;
    case 0x7F0B2C58u: goto label_7F0B2C58;
    case 0x7F0B2C5Cu: goto label_7F0B2C5C;
    case 0x7F0B2C60u: goto label_7F0B2C60;
    case 0x7F0B2C64u: goto label_7F0B2C64;
    case 0x7F0B2C68u: goto label_7F0B2C68;
    case 0x7F0B2C6Cu: goto label_7F0B2C6C;
    case 0x7F0B2C70u: goto label_7F0B2C70;
    case 0x7F0B2C74u: goto label_7F0B2C74;
    case 0x7F0B2C78u: goto label_7F0B2C78;
    case 0x7F0B2C7Cu: goto label_7F0B2C7C;
    case 0x7F0B2C80u: goto label_7F0B2C80;
    case 0x7F0B2C84u: goto label_7F0B2C84;
    case 0x7F0B2C88u: goto label_7F0B2C88;
    case 0x7F0B2C8Cu: goto label_7F0B2C8C;
    case 0x7F0B2C90u: goto label_7F0B2C90;
    case 0x7F0B2C94u: goto label_7F0B2C94;
    case 0x7F0B2C98u: goto label_7F0B2C98;
    case 0x7F0B2C9Cu: goto label_7F0B2C9C;
    case 0x7F0B2CA0u: goto label_7F0B2CA0;
    case 0x7F0B2CA4u: goto label_7F0B2CA4;
    case 0x7F0B2CA8u: goto label_7F0B2CA8;
    case 0x7F0B2CACu: goto label_7F0B2CAC;
    case 0x7F0B2CB0u: goto label_7F0B2CB0;
    case 0x7F0B2CB4u: goto label_7F0B2CB4;
    case 0x7F0B2CB8u: goto label_7F0B2CB8;
    case 0x7F0B2CBCu: goto label_7F0B2CBC;
    case 0x7F0B2CC0u: goto label_7F0B2CC0;
    case 0x7F0B2CC4u: goto label_7F0B2CC4;
    case 0x7F0B2CC8u: goto label_7F0B2CC8;
    case 0x7F0B2CCCu: goto label_7F0B2CCC;
    case 0x7F0B2CD0u: goto label_7F0B2CD0;
    case 0x7F0B2CD4u: goto label_7F0B2CD4;
    case 0x7F0B2CD8u: goto label_7F0B2CD8;
    case 0x7F0B2CDCu: goto label_7F0B2CDC;
    case 0x7F0B2CE0u: goto label_7F0B2CE0;
    case 0x7F0B2CE4u: goto label_7F0B2CE4;
    case 0x7F0B2CE8u: goto label_7F0B2CE8;
    case 0x7F0B2CECu: goto label_7F0B2CEC;
    case 0x7F0B2CF0u: goto label_7F0B2CF0;
    case 0x7F0B2CF4u: goto label_7F0B2CF4;
    case 0x7F0B2CF8u: goto label_7F0B2CF8;
    case 0x7F0B2CFCu: goto label_7F0B2CFC;
    case 0x7F0B2D00u: goto label_7F0B2D00;
    case 0x7F0B2D04u: goto label_7F0B2D04;
    case 0x7F0B2D08u: goto label_7F0B2D08;
    case 0x7F0B2D0Cu: goto label_7F0B2D0C;
    case 0x7F0B2D10u: goto label_7F0B2D10;
    case 0x7F0B2D14u: goto label_7F0B2D14;
    case 0x7F0B2D18u: goto label_7F0B2D18;
    case 0x7F0B2D1Cu: goto label_7F0B2D1C;
    case 0x7F0B2D20u: goto label_7F0B2D20;
    case 0x7F0B2D24u: goto label_7F0B2D24;
    case 0x7F0B2D28u: goto label_7F0B2D28;
    case 0x7F0B2D2Cu: goto label_7F0B2D2C;
    case 0x7F0B2D30u: goto label_7F0B2D30;
    case 0x7F0B2D34u: goto label_7F0B2D34;
    case 0x7F0B2D38u: goto label_7F0B2D38;
    case 0x7F0B2D3Cu: goto label_7F0B2D3C;
    case 0x7F0B2D40u: goto label_7F0B2D40;
    case 0x7F0B2D44u: goto label_7F0B2D44;
    case 0x7F0B2D48u: goto label_7F0B2D48;
    case 0x7F0B2D4Cu: goto label_7F0B2D4C;
    case 0x7F0B2D50u: goto label_7F0B2D50;
    case 0x7F0B2D54u: goto label_7F0B2D54;
    case 0x7F0B2D58u: goto label_7F0B2D58;
    case 0x7F0B2D5Cu: goto label_7F0B2D5C;
    case 0x7F0B2D60u: goto label_7F0B2D60;
    case 0x7F0B2D64u: goto label_7F0B2D64;
    case 0x7F0B2D68u: goto label_7F0B2D68;
    case 0x7F0B2D6Cu: goto label_7F0B2D6C;
    case 0x7F0B2D70u: goto label_7F0B2D70;
    case 0x7F0B2D74u: goto label_7F0B2D74;
    case 0x7F0B2D78u: goto label_7F0B2D78;
    case 0x7F0B2D7Cu: goto label_7F0B2D7C;
    case 0x7F0B2D80u: goto label_7F0B2D80;
    case 0x7F0B2D84u: goto label_7F0B2D84;
    case 0x7F0B2D88u: goto label_7F0B2D88;
    case 0x7F0B2D8Cu: goto label_7F0B2D8C;
    case 0x7F0B2D90u: goto label_7F0B2D90;
    case 0x7F0B2D94u: goto label_7F0B2D94;
    case 0x7F0B2D98u: goto label_7F0B2D98;
    case 0x7F0B2D9Cu: goto label_7F0B2D9C;
    case 0x7F0B2DA0u: goto label_7F0B2DA0;
    case 0x7F0B2DA4u: goto label_7F0B2DA4;
    case 0x7F0B2DA8u: goto label_7F0B2DA8;
    case 0x7F0B2DACu: goto label_7F0B2DAC;
    case 0x7F0B2DB0u: goto label_7F0B2DB0;
    case 0x7F0B2DB4u: goto label_7F0B2DB4;
    case 0x7F0B2DB8u: goto label_7F0B2DB8;
    case 0x7F0B2DBCu: goto label_7F0B2DBC;
    case 0x7F0B2DC0u: goto label_7F0B2DC0;
    case 0x7F0B2DC4u: goto label_7F0B2DC4;
    case 0x7F0B2DC8u: goto label_7F0B2DC8;
    case 0x7F0B2DCCu: goto label_7F0B2DCC;
    case 0x7F0B2DD0u: goto label_7F0B2DD0;
    case 0x7F0B2DD4u: goto label_7F0B2DD4;
    case 0x7F0B2DD8u: goto label_7F0B2DD8;
    case 0x7F0B2DDCu: goto label_7F0B2DDC;
    case 0x7F0B2DE0u: goto label_7F0B2DE0;
    case 0x7F0B2DE4u: goto label_7F0B2DE4;
    case 0x7F0B2DE8u: goto label_7F0B2DE8;
    case 0x7F0B2DECu: goto label_7F0B2DEC;
    case 0x7F0B2DF0u: goto label_7F0B2DF0;
    case 0x7F0B2DF4u: goto label_7F0B2DF4;
    case 0x7F0B2DF8u: goto label_7F0B2DF8;
    case 0x7F0B2DFCu: goto label_7F0B2DFC;
    case 0x7F0B2E00u: goto label_7F0B2E00;
    case 0x7F0B2E04u: goto label_7F0B2E04;
    case 0x7F0B2E08u: goto label_7F0B2E08;
    case 0x7F0B2E0Cu: goto label_7F0B2E0C;
    case 0x7F0B2E10u: goto label_7F0B2E10;
    case 0x7F0B2E14u: goto label_7F0B2E14;
    case 0x7F0B2E18u: goto label_7F0B2E18;
    case 0x7F0B2E1Cu: goto label_7F0B2E1C;
    case 0x7F0B2E20u: goto label_7F0B2E20;
    case 0x7F0B2E24u: goto label_7F0B2E24;
    case 0x7F0B2E28u: goto label_7F0B2E28;
    case 0x7F0B2E2Cu: goto label_7F0B2E2C;
    case 0x7F0B2E30u: goto label_7F0B2E30;
    case 0x7F0B2E34u: goto label_7F0B2E34;
    case 0x7F0B2E38u: goto label_7F0B2E38;
    case 0x7F0B2E3Cu: goto label_7F0B2E3C;
    case 0x7F0B2E40u: goto label_7F0B2E40;
    case 0x7F0B2E44u: goto label_7F0B2E44;
    case 0x7F0B2E48u: goto label_7F0B2E48;
    case 0x7F0B2E4Cu: goto label_7F0B2E4C;
    case 0x7F0B2E50u: goto label_7F0B2E50;
    case 0x7F0B2E54u: goto label_7F0B2E54;
    case 0x7F0B2E58u: goto label_7F0B2E58;
    case 0x7F0B2E5Cu: goto label_7F0B2E5C;
    case 0x7F0B2E60u: goto label_7F0B2E60;
    case 0x7F0B2E64u: goto label_7F0B2E64;
    case 0x7F0B2E68u: goto label_7F0B2E68;
    case 0x7F0B2E6Cu: goto label_7F0B2E6C;
    case 0x7F0B2E70u: goto label_7F0B2E70;
    case 0x7F0B2E74u: goto label_7F0B2E74;
    case 0x7F0B2E78u: goto label_7F0B2E78;
    case 0x7F0B2E7Cu: goto label_7F0B2E7C;
    case 0x7F0B2E80u: goto label_7F0B2E80;
    case 0x7F0B2E84u: goto label_7F0B2E84;
    case 0x7F0B2E88u: goto label_7F0B2E88;
    case 0x7F0B2E8Cu: goto label_7F0B2E8C;
    case 0x7F0B2E90u: goto label_7F0B2E90;
    case 0x7F0B2E94u: goto label_7F0B2E94;
    case 0x7F0B2E98u: goto label_7F0B2E98;
    case 0x7F0B2E9Cu: goto label_7F0B2E9C;
    case 0x7F0B2EA0u: goto label_7F0B2EA0;
    case 0x7F0B2EA4u: goto label_7F0B2EA4;
    case 0x7F0B2EA8u: goto label_7F0B2EA8;
    case 0x7F0B2EACu: goto label_7F0B2EAC;
    case 0x7F0B2EB0u: goto label_7F0B2EB0;
    case 0x7F0B2EB4u: goto label_7F0B2EB4;
    case 0x7F0B2EB8u: goto label_7F0B2EB8;
    case 0x7F0B2EBCu: goto label_7F0B2EBC;
    case 0x7F0B2EC0u: goto label_7F0B2EC0;
    case 0x7F0B2EC4u: goto label_7F0B2EC4;
    case 0x7F0B2EC8u: goto label_7F0B2EC8;
    case 0x7F0B2ECCu: goto label_7F0B2ECC;
    case 0x7F0B2ED0u: goto label_7F0B2ED0;
    case 0x7F0B2ED4u: goto label_7F0B2ED4;
    case 0x7F0B2ED8u: goto label_7F0B2ED8;
    case 0x7F0B2EDCu: goto label_7F0B2EDC;
    case 0x7F0B2EE0u: goto label_7F0B2EE0;
    case 0x7F0B2EE4u: goto label_7F0B2EE4;
    case 0x7F0B2EE8u: goto label_7F0B2EE8;
    case 0x7F0B2EECu: goto label_7F0B2EEC;
    case 0x7F0B2EF0u: goto label_7F0B2EF0;
    case 0x7F0B2EF4u: goto label_7F0B2EF4;
    case 0x7F0B2EF8u: goto label_7F0B2EF8;
    case 0x7F0B2EFCu: goto label_7F0B2EFC;
    case 0x7F0B2F00u: goto label_7F0B2F00;
    case 0x7F0B2F04u: goto label_7F0B2F04;
    case 0x7F0B2F08u: goto label_7F0B2F08;
    case 0x7F0B2F0Cu: goto label_7F0B2F0C;
    case 0x7F0B2F10u: goto label_7F0B2F10;
    case 0x7F0B2F14u: goto label_7F0B2F14;
    case 0x7F0B2F18u: goto label_7F0B2F18;
    case 0x7F0B2F1Cu: goto label_7F0B2F1C;
    case 0x7F0B2F20u: goto label_7F0B2F20;
    case 0x7F0B2F24u: goto label_7F0B2F24;
    case 0x7F0B2F28u: goto label_7F0B2F28;
    case 0x7F0B2F2Cu: goto label_7F0B2F2C;
    case 0x7F0B2F30u: goto label_7F0B2F30;
    case 0x7F0B2F34u: goto label_7F0B2F34;
    case 0x7F0B2F38u: goto label_7F0B2F38;
    case 0x7F0B2F3Cu: goto label_7F0B2F3C;
    case 0x7F0B2F40u: goto label_7F0B2F40;
    case 0x7F0B2F44u: goto label_7F0B2F44;
    case 0x7F0B2F48u: goto label_7F0B2F48;
    case 0x7F0B2F4Cu: goto label_7F0B2F4C;
    case 0x7F0B2F50u: goto label_7F0B2F50;
    case 0x7F0B2F54u: goto label_7F0B2F54;
    case 0x7F0B2F58u: goto label_7F0B2F58;
    case 0x7F0B2F5Cu: goto label_7F0B2F5C;
    case 0x7F0B2F60u: goto label_7F0B2F60;
    case 0x7F0B2F64u: goto label_7F0B2F64;
    case 0x7F0B2F68u: goto label_7F0B2F68;
    case 0x7F0B2F6Cu: goto label_7F0B2F6C;
    case 0x7F0B2F70u: goto label_7F0B2F70;
    case 0x7F0B2F74u: goto label_7F0B2F74;
    case 0x7F0B2F78u: goto label_7F0B2F78;
    case 0x7F0B2F7Cu: goto label_7F0B2F7C;
    case 0x7F0B2F80u: goto label_7F0B2F80;
    case 0x7F0B2F84u: goto label_7F0B2F84;
    case 0x7F0B2F88u: goto label_7F0B2F88;
    case 0x7F0B2F8Cu: goto label_7F0B2F8C;
    case 0x7F0B2F90u: goto label_7F0B2F90;
    case 0x7F0B2F94u: goto label_7F0B2F94;
    case 0x7F0B2F98u: goto label_7F0B2F98;
    case 0x7F0B2F9Cu: goto label_7F0B2F9C;
    case 0x7F0B2FA0u: goto label_7F0B2FA0;
    case 0x7F0B2FA4u: goto label_7F0B2FA4;
    case 0x7F0B2FA8u: goto label_7F0B2FA8;
    case 0x7F0B2FACu: goto label_7F0B2FAC;
    case 0x7F0B2FB0u: goto label_7F0B2FB0;
    case 0x7F0B2FB4u: goto label_7F0B2FB4;
    case 0x7F0B2FB8u: goto label_7F0B2FB8;
    case 0x7F0B2FBCu: goto label_7F0B2FBC;
    case 0x7F0B2FC0u: goto label_7F0B2FC0;
    case 0x7F0B2FC4u: goto label_7F0B2FC4;
    case 0x7F0B2FC8u: goto label_7F0B2FC8;
    case 0x7F0B2FCCu: goto label_7F0B2FCC;
    case 0x7F0B2FD0u: goto label_7F0B2FD0;
    case 0x7F0B2FD4u: goto label_7F0B2FD4;
    case 0x7F0B2FD8u: goto label_7F0B2FD8;
    case 0x7F0B2FDCu: goto label_7F0B2FDC;
    case 0x7F0B2FE0u: goto label_7F0B2FE0;
    case 0x7F0B2FE4u: goto label_7F0B2FE4;
    case 0x7F0B2FE8u: goto label_7F0B2FE8;
    case 0x7F0B2FECu: goto label_7F0B2FEC;
    case 0x7F0B2FF0u: goto label_7F0B2FF0;
    case 0x7F0B2FF4u: goto label_7F0B2FF4;
    case 0x7F0B2FF8u: goto label_7F0B2FF8;
    case 0x7F0B2FFCu: goto label_7F0B2FFC;
    case 0x7F0B3000u: goto label_7F0B3000;
    case 0x7F0B3004u: goto label_7F0B3004;
    case 0x7F0B3008u: goto label_7F0B3008;
    case 0x7F0B300Cu: goto label_7F0B300C;
    case 0x7F0B3010u: goto label_7F0B3010;
    case 0x7F0B3014u: goto label_7F0B3014;
    case 0x7F0B3018u: goto label_7F0B3018;
    case 0x7F0B301Cu: goto label_7F0B301C;
    case 0x7F0B3020u: goto label_7F0B3020;
    case 0x7F0B3024u: goto label_7F0B3024;
    case 0x7F0B3028u: goto label_7F0B3028;
    case 0x7F0B302Cu: goto label_7F0B302C;
    case 0x7F0B3030u: goto label_7F0B3030;
    case 0x7F0B3034u: goto label_7F0B3034;
    case 0x7F0B3038u: goto label_7F0B3038;
    case 0x7F0B303Cu: goto label_7F0B303C;
    case 0x7F0B3040u: goto label_7F0B3040;
    case 0x7F0B3044u: goto label_7F0B3044;
    case 0x7F0B3048u: goto label_7F0B3048;
    case 0x7F0B304Cu: goto label_7F0B304C;
    case 0x7F0B3050u: goto label_7F0B3050;
    case 0x7F0B3054u: goto label_7F0B3054;
    case 0x7F0B3058u: goto label_7F0B3058;
    case 0x7F0B305Cu: goto label_7F0B305C;
    case 0x7F0B3060u: goto label_7F0B3060;
    case 0x7F0B3064u: goto label_7F0B3064;
    case 0x7F0B3068u: goto label_7F0B3068;
    case 0x7F0B306Cu: goto label_7F0B306C;
    case 0x7F0B3070u: goto label_7F0B3070;
    case 0x7F0B3074u: goto label_7F0B3074;
    case 0x7F0B3078u: goto label_7F0B3078;
    case 0x7F0B307Cu: goto label_7F0B307C;
    case 0x7F0B3080u: goto label_7F0B3080;
    case 0x7F0B3084u: goto label_7F0B3084;
    case 0x7F0B3088u: goto label_7F0B3088;
    case 0x7F0B308Cu: goto label_7F0B308C;
    case 0x7F0B3090u: goto label_7F0B3090;
    case 0x7F0B3094u: goto label_7F0B3094;
    case 0x7F0B3098u: goto label_7F0B3098;
    case 0x7F0B309Cu: goto label_7F0B309C;
    case 0x7F0B30A0u: goto label_7F0B30A0;
    case 0x7F0B30A4u: goto label_7F0B30A4;
    case 0x7F0B30A8u: goto label_7F0B30A8;
    case 0x7F0B30ACu: goto label_7F0B30AC;
    case 0x7F0B30B0u: goto label_7F0B30B0;
    case 0x7F0B30B4u: goto label_7F0B30B4;
    case 0x7F0B30B8u: goto label_7F0B30B8;
    case 0x7F0B30BCu: goto label_7F0B30BC;
    case 0x7F0B30C0u: goto label_7F0B30C0;
    case 0x7F0B30C4u: goto label_7F0B30C4;
    case 0x7F0B30C8u: goto label_7F0B30C8;
    case 0x7F0B30CCu: goto label_7F0B30CC;
    case 0x7F0B30D0u: goto label_7F0B30D0;
    case 0x7F0B30D4u: goto label_7F0B30D4;
    case 0x7F0B30D8u: goto label_7F0B30D8;
    case 0x7F0B30DCu: goto label_7F0B30DC;
    case 0x7F0B30E0u: goto label_7F0B30E0;
    case 0x7F0B30E4u: goto label_7F0B30E4;
    case 0x7F0B30E8u: goto label_7F0B30E8;
    case 0x7F0B30ECu: goto label_7F0B30EC;
    case 0x7F0B30F0u: goto label_7F0B30F0;
    case 0x7F0B30F4u: goto label_7F0B30F4;
    case 0x7F0B30F8u: goto label_7F0B30F8;
    case 0x7F0B30FCu: goto label_7F0B30FC;
    case 0x7F0B3100u: goto label_7F0B3100;
    case 0x7F0B3104u: goto label_7F0B3104;
    case 0x7F0B3108u: goto label_7F0B3108;
    case 0x7F0B310Cu: goto label_7F0B310C;
    case 0x7F0B3110u: goto label_7F0B3110;
    case 0x7F0B3114u: goto label_7F0B3114;
    case 0x7F0B3118u: goto label_7F0B3118;
    case 0x7F0B311Cu: goto label_7F0B311C;
    case 0x7F0B3120u: goto label_7F0B3120;
    case 0x7F0B3124u: goto label_7F0B3124;
    case 0x7F0B3128u: goto label_7F0B3128;
    case 0x7F0B312Cu: goto label_7F0B312C;
    case 0x7F0B3130u: goto label_7F0B3130;
    case 0x7F0B3134u: goto label_7F0B3134;
    case 0x7F0B3138u: goto label_7F0B3138;
    case 0x7F0B313Cu: goto label_7F0B313C;
    case 0x7F0B3140u: goto label_7F0B3140;
    case 0x7F0B3144u: goto label_7F0B3144;
    case 0x7F0B3148u: goto label_7F0B3148;
    case 0x7F0B314Cu: goto label_7F0B314C;
    case 0x7F0B3150u: goto label_7F0B3150;
    case 0x7F0B3154u: goto label_7F0B3154;
    case 0x7F0B3158u: goto label_7F0B3158;
    case 0x7F0B315Cu: goto label_7F0B315C;
    case 0x7F0B3160u: goto label_7F0B3160;
    case 0x7F0B3164u: goto label_7F0B3164;
    case 0x7F0B3168u: goto label_7F0B3168;
    case 0x7F0B316Cu: goto label_7F0B316C;
    case 0x7F0B3170u: goto label_7F0B3170;
    case 0x7F0B3174u: goto label_7F0B3174;
    case 0x7F0B3178u: goto label_7F0B3178;
    case 0x7F0B317Cu: goto label_7F0B317C;
    case 0x7F0B3180u: goto label_7F0B3180;
    case 0x7F0B3184u: goto label_7F0B3184;
    case 0x7F0B3188u: goto label_7F0B3188;
    case 0x7F0B318Cu: goto label_7F0B318C;
    case 0x7F0B3190u: goto label_7F0B3190;
    case 0x7F0B3194u: goto label_7F0B3194;
    case 0x7F0B3198u: goto label_7F0B3198;
    case 0x7F0B319Cu: goto label_7F0B319C;
    case 0x7F0B31A0u: goto label_7F0B31A0;
    case 0x7F0B31A4u: goto label_7F0B31A4;
    case 0x7F0B31A8u: goto label_7F0B31A8;
    case 0x7F0B31ACu: goto label_7F0B31AC;
    case 0x7F0B31B0u: goto label_7F0B31B0;
    case 0x7F0B31B4u: goto label_7F0B31B4;
    case 0x7F0B31B8u: goto label_7F0B31B8;
    case 0x7F0B31BCu: goto label_7F0B31BC;
    case 0x7F0B31C0u: goto label_7F0B31C0;
    case 0x7F0B31C4u: goto label_7F0B31C4;
    case 0x7F0B31C8u: goto label_7F0B31C8;
    case 0x7F0B31CCu: goto label_7F0B31CC;
    case 0x7F0B31D0u: goto label_7F0B31D0;
    case 0x7F0B31D4u: goto label_7F0B31D4;
    case 0x7F0B31D8u: goto label_7F0B31D8;
    case 0x7F0B31DCu: goto label_7F0B31DC;
    case 0x7F0B31E0u: goto label_7F0B31E0;
    case 0x7F0B31E4u: goto label_7F0B31E4;
    case 0x7F0B31E8u: goto label_7F0B31E8;
    case 0x7F0B31ECu: goto label_7F0B31EC;
    case 0x7F0B31F0u: goto label_7F0B31F0;
    case 0x7F0B31F4u: goto label_7F0B31F4;
    case 0x7F0B31F8u: goto label_7F0B31F8;
    case 0x7F0B31FCu: goto label_7F0B31FC;
    case 0x7F0B3200u: goto label_7F0B3200;
    case 0x7F0B3204u: goto label_7F0B3204;
    case 0x7F0B3208u: goto label_7F0B3208;
    case 0x7F0B320Cu: goto label_7F0B320C;
    case 0x7F0B3210u: goto label_7F0B3210;
    case 0x7F0B3214u: goto label_7F0B3214;
    case 0x7F0B3218u: goto label_7F0B3218;
    case 0x7F0B321Cu: goto label_7F0B321C;
    case 0x7F0B3220u: goto label_7F0B3220;
    case 0x7F0B3224u: goto label_7F0B3224;
    case 0x7F0B3228u: goto label_7F0B3228;
    case 0x7F0B322Cu: goto label_7F0B322C;
    case 0x7F0B3230u: goto label_7F0B3230;
    case 0x7F0B3234u: goto label_7F0B3234;
    case 0x7F0B3238u: goto label_7F0B3238;
    case 0x7F0B323Cu: goto label_7F0B323C;
    case 0x7F0B3240u: goto label_7F0B3240;
    case 0x7F0B3244u: goto label_7F0B3244;
    case 0x7F0B3248u: goto label_7F0B3248;
    case 0x7F0B324Cu: goto label_7F0B324C;
    case 0x7F0B3250u: goto label_7F0B3250;
    case 0x7F0B3254u: goto label_7F0B3254;
    case 0x7F0B3258u: goto label_7F0B3258;
    case 0x7F0B325Cu: goto label_7F0B325C;
    case 0x7F0B3260u: goto label_7F0B3260;
    case 0x7F0B3264u: goto label_7F0B3264;
    case 0x7F0B3268u: goto label_7F0B3268;
    case 0x7F0B326Cu: goto label_7F0B326C;
    case 0x7F0B3270u: goto label_7F0B3270;
    case 0x7F0B3274u: goto label_7F0B3274;
    case 0x7F0B3278u: goto label_7F0B3278;
    case 0x7F0B327Cu: goto label_7F0B327C;
    case 0x7F0B3280u: goto label_7F0B3280;
    case 0x7F0B3284u: goto label_7F0B3284;
    case 0x7F0B3288u: goto label_7F0B3288;
    case 0x7F0B328Cu: goto label_7F0B328C;
    case 0x7F0B3290u: goto label_7F0B3290;
    case 0x7F0B3294u: goto label_7F0B3294;
    case 0x7F0B3298u: goto label_7F0B3298;
    case 0x7F0B329Cu: goto label_7F0B329C;
    case 0x7F0B32A0u: goto label_7F0B32A0;
    case 0x7F0B32A4u: goto label_7F0B32A4;
    case 0x7F0B32A8u: goto label_7F0B32A8;
    case 0x7F0B32ACu: goto label_7F0B32AC;
    case 0x7F0B32B0u: goto label_7F0B32B0;
    case 0x7F0B32B4u: goto label_7F0B32B4;
    case 0x7F0B32B8u: goto label_7F0B32B8;
    case 0x7F0B32BCu: goto label_7F0B32BC;
    case 0x7F0B32C0u: goto label_7F0B32C0;
    case 0x7F0B32C4u: goto label_7F0B32C4;
    case 0x7F0B32C8u: goto label_7F0B32C8;
    case 0x7F0B32CCu: goto label_7F0B32CC;
    case 0x7F0B32D0u: goto label_7F0B32D0;
    case 0x7F0B32D4u: goto label_7F0B32D4;
    case 0x7F0B32D8u: goto label_7F0B32D8;
    case 0x7F0B32DCu: goto label_7F0B32DC;
    case 0x7F0B32E0u: goto label_7F0B32E0;
    case 0x7F0B32E4u: goto label_7F0B32E4;
    case 0x7F0B32E8u: goto label_7F0B32E8;
    case 0x7F0B32ECu: goto label_7F0B32EC;
    case 0x7F0B32F0u: goto label_7F0B32F0;
    case 0x7F0B32F4u: goto label_7F0B32F4;
    case 0x7F0B32F8u: goto label_7F0B32F8;
    case 0x7F0B32FCu: goto label_7F0B32FC;
    case 0x7F0B3300u: goto label_7F0B3300;
    case 0x7F0B3304u: goto label_7F0B3304;
    case 0x7F0B3308u: goto label_7F0B3308;
    case 0x7F0B330Cu: goto label_7F0B330C;
    case 0x7F0B3310u: goto label_7F0B3310;
    case 0x7F0B3314u: goto label_7F0B3314;
    case 0x7F0B3318u: goto label_7F0B3318;
    case 0x7F0B331Cu: goto label_7F0B331C;
    case 0x7F0B3320u: goto label_7F0B3320;
    case 0x7F0B3324u: goto label_7F0B3324;
    case 0x7F0B3328u: goto label_7F0B3328;
    case 0x7F0B332Cu: goto label_7F0B332C;
    case 0x7F0B3330u: goto label_7F0B3330;
    case 0x7F0B3334u: goto label_7F0B3334;
    case 0x7F0B3338u: goto label_7F0B3338;
    case 0x7F0B333Cu: goto label_7F0B333C;
    case 0x7F0B3340u: goto label_7F0B3340;
    case 0x7F0B3344u: goto label_7F0B3344;
    case 0x7F0B3348u: goto label_7F0B3348;
    case 0x7F0B334Cu: goto label_7F0B334C;
    case 0x7F0B3350u: goto label_7F0B3350;
    case 0x7F0B3354u: goto label_7F0B3354;
    case 0x7F0B3358u: goto label_7F0B3358;
    case 0x7F0B335Cu: goto label_7F0B335C;
    case 0x7F0B3360u: goto label_7F0B3360;
    case 0x7F0B3364u: goto label_7F0B3364;
    case 0x7F0B3368u: goto label_7F0B3368;
    case 0x7F0B336Cu: goto label_7F0B336C;
    case 0x7F0B3370u: goto label_7F0B3370;
    case 0x7F0B3374u: goto label_7F0B3374;
    case 0x7F0B3378u: goto label_7F0B3378;
    case 0x7F0B337Cu: goto label_7F0B337C;
    case 0x7F0B3380u: goto label_7F0B3380;
    case 0x7F0B3384u: goto label_7F0B3384;
    case 0x7F0B3388u: goto label_7F0B3388;
    case 0x7F0B338Cu: goto label_7F0B338C;
    case 0x7F0B3390u: goto label_7F0B3390;
    case 0x7F0B3394u: goto label_7F0B3394;
    case 0x7F0B3398u: goto label_7F0B3398;
    case 0x7F0B339Cu: goto label_7F0B339C;
    case 0x7F0B33A0u: goto label_7F0B33A0;
    case 0x7F0B33A4u: goto label_7F0B33A4;
    case 0x7F0B33A8u: goto label_7F0B33A8;
    case 0x7F0B33ACu: goto label_7F0B33AC;
    case 0x7F0B33B0u: goto label_7F0B33B0;
    case 0x7F0B33B4u: goto label_7F0B33B4;
    case 0x7F0B33B8u: goto label_7F0B33B8;
    case 0x7F0B33BCu: goto label_7F0B33BC;
    case 0x7F0B33C0u: goto label_7F0B33C0;
    case 0x7F0B33C4u: goto label_7F0B33C4;
    case 0x7F0B33C8u: goto label_7F0B33C8;
    case 0x7F0B33CCu: goto label_7F0B33CC;
    case 0x7F0B33D0u: goto label_7F0B33D0;
    case 0x7F0B33D4u: goto label_7F0B33D4;
    case 0x7F0B33D8u: goto label_7F0B33D8;
    case 0x7F0B33DCu: goto label_7F0B33DC;
    case 0x7F0B33E0u: goto label_7F0B33E0;
    case 0x7F0B33E4u: goto label_7F0B33E4;
    case 0x7F0B33E8u: goto label_7F0B33E8;
    case 0x7F0B33ECu: goto label_7F0B33EC;
    case 0x7F0B33F0u: goto label_7F0B33F0;
    case 0x7F0B33F4u: goto label_7F0B33F4;
    case 0x7F0B33F8u: goto label_7F0B33F8;
    case 0x7F0B33FCu: goto label_7F0B33FC;
    case 0x7F0B3400u: goto label_7F0B3400;
    case 0x7F0B3404u: goto label_7F0B3404;
    case 0x7F0B3408u: goto label_7F0B3408;
    case 0x7F0B340Cu: goto label_7F0B340C;
    case 0x7F0B3410u: goto label_7F0B3410;
    case 0x7F0B3414u: goto label_7F0B3414;
    case 0x7F0B3418u: goto label_7F0B3418;
    case 0x7F0B341Cu: goto label_7F0B341C;
    case 0x7F0B3420u: goto label_7F0B3420;
    case 0x7F0B3424u: goto label_7F0B3424;
    case 0x7F0B3428u: goto label_7F0B3428;
    case 0x7F0B342Cu: goto label_7F0B342C;
    case 0x7F0B3430u: goto label_7F0B3430;
    case 0x7F0B3434u: goto label_7F0B3434;
    case 0x7F0B3438u: goto label_7F0B3438;
    case 0x7F0B343Cu: goto label_7F0B343C;
    case 0x7F0B3440u: goto label_7F0B3440;
    case 0x7F0B3444u: goto label_7F0B3444;
    case 0x7F0B3448u: goto label_7F0B3448;
    case 0x7F0B344Cu: goto label_7F0B344C;
    case 0x7F0B3450u: goto label_7F0B3450;
    case 0x7F0B3454u: goto label_7F0B3454;
    case 0x7F0B3458u: goto label_7F0B3458;
    case 0x7F0B345Cu: goto label_7F0B345C;
    case 0x7F0B3460u: goto label_7F0B3460;
    case 0x7F0B3464u: goto label_7F0B3464;
    case 0x7F0B3468u: goto label_7F0B3468;
    case 0x7F0B346Cu: goto label_7F0B346C;
    case 0x7F0B3470u: goto label_7F0B3470;
    case 0x7F0B3474u: goto label_7F0B3474;
    case 0x7F0B3478u: goto label_7F0B3478;
    case 0x7F0B347Cu: goto label_7F0B347C;
    case 0x7F0B3480u: goto label_7F0B3480;
    case 0x7F0B3484u: goto label_7F0B3484;
    case 0x7F0B3488u: goto label_7F0B3488;
    case 0x7F0B348Cu: goto label_7F0B348C;
    case 0x7F0B3490u: goto label_7F0B3490;
    case 0x7F0B3494u: goto label_7F0B3494;
    case 0x7F0B3498u: goto label_7F0B3498;
    case 0x7F0B349Cu: goto label_7F0B349C;
    case 0x7F0B34A0u: goto label_7F0B34A0;
    case 0x7F0B34A4u: goto label_7F0B34A4;
    case 0x7F0B34A8u: goto label_7F0B34A8;
    case 0x7F0B34ACu: goto label_7F0B34AC;
    case 0x7F0B34B0u: goto label_7F0B34B0;
    case 0x7F0B34B4u: goto label_7F0B34B4;
    case 0x7F0B34B8u: goto label_7F0B34B8;
    case 0x7F0B34BCu: goto label_7F0B34BC;
    case 0x7F0B34C0u: goto label_7F0B34C0;
    case 0x7F0B34C4u: goto label_7F0B34C4;
    case 0x7F0B34C8u: goto label_7F0B34C8;
    case 0x7F0B34CCu: goto label_7F0B34CC;
    case 0x7F0B34D0u: goto label_7F0B34D0;
    case 0x7F0B34D4u: goto label_7F0B34D4;
    case 0x7F0B34D8u: goto label_7F0B34D8;
    case 0x7F0B34DCu: goto label_7F0B34DC;
    case 0x7F0B34E0u: goto label_7F0B34E0;
    case 0x7F0B34E4u: goto label_7F0B34E4;
    case 0x7F0B34E8u: goto label_7F0B34E8;
    case 0x7F0B34ECu: goto label_7F0B34EC;
    case 0x7F0B34F0u: goto label_7F0B34F0;
    case 0x7F0B34F4u: goto label_7F0B34F4;
    case 0x7F0B34F8u: goto label_7F0B34F8;
    case 0x7F0B34FCu: goto label_7F0B34FC;
    case 0x7F0B3500u: goto label_7F0B3500;
    case 0x7F0B3504u: goto label_7F0B3504;
    case 0x7F0B3508u: goto label_7F0B3508;
    case 0x7F0B350Cu: goto label_7F0B350C;
    case 0x7F0B3510u: goto label_7F0B3510;
    case 0x7F0B3514u: goto label_7F0B3514;
    case 0x7F0B3518u: goto label_7F0B3518;
    case 0x7F0B351Cu: goto label_7F0B351C;
    case 0x7F0B3520u: goto label_7F0B3520;
    case 0x7F0B3524u: goto label_7F0B3524;
    case 0x7F0B3528u: goto label_7F0B3528;
    case 0x7F0B352Cu: goto label_7F0B352C;
    case 0x7F0B3530u: goto label_7F0B3530;
    case 0x7F0B3534u: goto label_7F0B3534;
    case 0x7F0B3538u: goto label_7F0B3538;
    case 0x7F0B353Cu: goto label_7F0B353C;
    case 0x7F0B3540u: goto label_7F0B3540;
    case 0x7F0B3544u: goto label_7F0B3544;
    case 0x7F0B3548u: goto label_7F0B3548;
    case 0x7F0B354Cu: goto label_7F0B354C;
    case 0x7F0B3550u: goto label_7F0B3550;
    case 0x7F0B3554u: goto label_7F0B3554;
    case 0x7F0B3558u: goto label_7F0B3558;
    case 0x7F0B355Cu: goto label_7F0B355C;
    case 0x7F0B3560u: goto label_7F0B3560;
    case 0x7F0B3564u: goto label_7F0B3564;
    case 0x7F0B3568u: goto label_7F0B3568;
    case 0x7F0B356Cu: goto label_7F0B356C;
    case 0x7F0B3570u: goto label_7F0B3570;
    case 0x7F0B3574u: goto label_7F0B3574;
    case 0x7F0B3578u: goto label_7F0B3578;
    case 0x7F0B357Cu: goto label_7F0B357C;
    case 0x7F0B3580u: goto label_7F0B3580;
    case 0x7F0B3584u: goto label_7F0B3584;
    case 0x7F0B3588u: goto label_7F0B3588;
    case 0x7F0B358Cu: goto label_7F0B358C;
    case 0x7F0B3590u: goto label_7F0B3590;
    case 0x7F0B3594u: goto label_7F0B3594;
    case 0x7F0B3598u: goto label_7F0B3598;
    case 0x7F0B359Cu: goto label_7F0B359C;
    case 0x7F0B35A0u: goto label_7F0B35A0;
    case 0x7F0B35A4u: goto label_7F0B35A4;
    case 0x7F0B35A8u: goto label_7F0B35A8;
    case 0x7F0B35ACu: goto label_7F0B35AC;
    case 0x7F0B35B0u: goto label_7F0B35B0;
    case 0x7F0B35B4u: goto label_7F0B35B4;
    case 0x7F0B35B8u: goto label_7F0B35B8;
    case 0x7F0B35BCu: goto label_7F0B35BC;
    case 0x7F0B35C0u: goto label_7F0B35C0;
    case 0x7F0B35C4u: goto label_7F0B35C4;
    case 0x7F0B35C8u: goto label_7F0B35C8;
    case 0x7F0B35CCu: goto label_7F0B35CC;
    case 0x7F0B35D0u: goto label_7F0B35D0;
    case 0x7F0B35D4u: goto label_7F0B35D4;
    case 0x7F0B35D8u: goto label_7F0B35D8;
    case 0x7F0B35DCu: goto label_7F0B35DC;
    case 0x7F0B35E0u: goto label_7F0B35E0;
    case 0x7F0B35E4u: goto label_7F0B35E4;
    case 0x7F0B35E8u: goto label_7F0B35E8;
    case 0x7F0B35ECu: goto label_7F0B35EC;
    case 0x7F0B35F0u: goto label_7F0B35F0;
    case 0x7F0B35F4u: goto label_7F0B35F4;
    case 0x7F0B35F8u: goto label_7F0B35F8;
    case 0x7F0B35FCu: goto label_7F0B35FC;
    case 0x7F0B3600u: goto label_7F0B3600;
    case 0x7F0B3604u: goto label_7F0B3604;
    case 0x7F0B3608u: goto label_7F0B3608;
    case 0x7F0B360Cu: goto label_7F0B360C;
    case 0x7F0B3610u: goto label_7F0B3610;
    case 0x7F0B3614u: goto label_7F0B3614;
    case 0x7F0B3618u: goto label_7F0B3618;
    case 0x7F0B361Cu: goto label_7F0B361C;
    case 0x7F0B3620u: goto label_7F0B3620;
    case 0x7F0B3624u: goto label_7F0B3624;
    case 0x7F0B3628u: goto label_7F0B3628;
    case 0x7F0B362Cu: goto label_7F0B362C;
    case 0x7F0B3630u: goto label_7F0B3630;
    case 0x7F0B3634u: goto label_7F0B3634;
    case 0x7F0B3638u: goto label_7F0B3638;
    case 0x7F0B363Cu: goto label_7F0B363C;
    case 0x7F0B3640u: goto label_7F0B3640;
    case 0x7F0B3644u: goto label_7F0B3644;
    case 0x7F0B3648u: goto label_7F0B3648;
    case 0x7F0B364Cu: goto label_7F0B364C;
    case 0x7F0B3650u: goto label_7F0B3650;
    case 0x7F0B3654u: goto label_7F0B3654;
    case 0x7F0B3658u: goto label_7F0B3658;
    case 0x7F0B365Cu: goto label_7F0B365C;
    case 0x7F0B3660u: goto label_7F0B3660;
    case 0x7F0B3664u: goto label_7F0B3664;
    case 0x7F0B3668u: goto label_7F0B3668;
    case 0x7F0B366Cu: goto label_7F0B366C;
    case 0x7F0B3670u: goto label_7F0B3670;
    case 0x7F0B3674u: goto label_7F0B3674;
    case 0x7F0B3678u: goto label_7F0B3678;
    case 0x7F0B367Cu: goto label_7F0B367C;
    case 0x7F0B3680u: goto label_7F0B3680;
    case 0x7F0B3684u: goto label_7F0B3684;
    case 0x7F0B3688u: goto label_7F0B3688;
    case 0x7F0B368Cu: goto label_7F0B368C;
    case 0x7F0B3690u: goto label_7F0B3690;
    case 0x7F0B3694u: goto label_7F0B3694;
    case 0x7F0B3698u: goto label_7F0B3698;
    case 0x7F0B369Cu: goto label_7F0B369C;
    case 0x7F0B36A0u: goto label_7F0B36A0;
    case 0x7F0B36A4u: goto label_7F0B36A4;
    case 0x7F0B36A8u: goto label_7F0B36A8;
    case 0x7F0B36ACu: goto label_7F0B36AC;
    case 0x7F0B36B0u: goto label_7F0B36B0;
    case 0x7F0B36B4u: goto label_7F0B36B4;
    case 0x7F0B36B8u: goto label_7F0B36B8;
    case 0x7F0B36BCu: goto label_7F0B36BC;
    case 0x7F0B36C0u: goto label_7F0B36C0;
    case 0x7F0B36C4u: goto label_7F0B36C4;
    case 0x7F0B36C8u: goto label_7F0B36C8;
    case 0x7F0B36CCu: goto label_7F0B36CC;
    case 0x7F0B36D0u: goto label_7F0B36D0;
    case 0x7F0B36D4u: goto label_7F0B36D4;
    case 0x7F0B36D8u: goto label_7F0B36D8;
    case 0x7F0B36DCu: goto label_7F0B36DC;
    case 0x7F0B36E0u: goto label_7F0B36E0;
    case 0x7F0B36E4u: goto label_7F0B36E4;
    case 0x7F0B36E8u: goto label_7F0B36E8;
    case 0x7F0B36ECu: goto label_7F0B36EC;
    case 0x7F0B36F0u: goto label_7F0B36F0;
    case 0x7F0B36F4u: goto label_7F0B36F4;
    case 0x7F0B36F8u: goto label_7F0B36F8;
    case 0x7F0B36FCu: goto label_7F0B36FC;
    case 0x7F0B3700u: goto label_7F0B3700;
    case 0x7F0B3704u: goto label_7F0B3704;
    case 0x7F0B3708u: goto label_7F0B3708;
    case 0x7F0B370Cu: goto label_7F0B370C;
    case 0x7F0B3710u: goto label_7F0B3710;
    case 0x7F0B3714u: goto label_7F0B3714;
    case 0x7F0B3718u: goto label_7F0B3718;
    case 0x7F0B371Cu: goto label_7F0B371C;
    case 0x7F0B3720u: goto label_7F0B3720;
    case 0x7F0B3724u: goto label_7F0B3724;
    case 0x7F0B3728u: goto label_7F0B3728;
    case 0x7F0B372Cu: goto label_7F0B372C;
    case 0x7F0B3730u: goto label_7F0B3730;
    case 0x7F0B3734u: goto label_7F0B3734;
    case 0x7F0B3738u: goto label_7F0B3738;
    case 0x7F0B373Cu: goto label_7F0B373C;
    case 0x7F0B3740u: goto label_7F0B3740;
    case 0x7F0B3744u: goto label_7F0B3744;
    case 0x7F0B3748u: goto label_7F0B3748;
    case 0x7F0B374Cu: goto label_7F0B374C;
    case 0x7F0B3750u: goto label_7F0B3750;
    case 0x7F0B3754u: goto label_7F0B3754;
    case 0x7F0B3758u: goto label_7F0B3758;
    case 0x7F0B375Cu: goto label_7F0B375C;
    case 0x7F0B3760u: goto label_7F0B3760;
    case 0x7F0B3764u: goto label_7F0B3764;
    case 0x7F0B3768u: goto label_7F0B3768;
    case 0x7F0B376Cu: goto label_7F0B376C;
    case 0x7F0B3770u: goto label_7F0B3770;
    case 0x7F0B3774u: goto label_7F0B3774;
    case 0x7F0B3778u: goto label_7F0B3778;
    case 0x7F0B377Cu: goto label_7F0B377C;
    case 0x7F0B3780u: goto label_7F0B3780;
    case 0x7F0B3784u: goto label_7F0B3784;
    case 0x7F0B3788u: goto label_7F0B3788;
    case 0x7F0B378Cu: goto label_7F0B378C;
    case 0x7F0B3790u: goto label_7F0B3790;
    case 0x7F0B3794u: goto label_7F0B3794;
    case 0x7F0B3798u: goto label_7F0B3798;
    case 0x7F0B379Cu: goto label_7F0B379C;
    case 0x7F0B37A0u: goto label_7F0B37A0;
    case 0x7F0B37A4u: goto label_7F0B37A4;
    case 0x7F0B37A8u: goto label_7F0B37A8;
    case 0x7F0B37ACu: goto label_7F0B37AC;
    case 0x7F0B37B0u: goto label_7F0B37B0;
    case 0x7F0B37B4u: goto label_7F0B37B4;
    case 0x7F0B37B8u: goto label_7F0B37B8;
    case 0x7F0B37BCu: goto label_7F0B37BC;
    case 0x7F0B37C0u: goto label_7F0B37C0;
    case 0x7F0B37C4u: goto label_7F0B37C4;
    case 0x7F0B37C8u: goto label_7F0B37C8;
    case 0x7F0B37CCu: goto label_7F0B37CC;
    case 0x7F0B37D0u: goto label_7F0B37D0;
    case 0x7F0B37D4u: goto label_7F0B37D4;
    case 0x7F0B37D8u: goto label_7F0B37D8;
    case 0x7F0B37DCu: goto label_7F0B37DC;
    case 0x7F0B37E0u: goto label_7F0B37E0;
    case 0x7F0B37E4u: goto label_7F0B37E4;
    case 0x7F0B37E8u: goto label_7F0B37E8;
    case 0x7F0B37ECu: goto label_7F0B37EC;
    case 0x7F0B37F0u: goto label_7F0B37F0;
    case 0x7F0B37F4u: goto label_7F0B37F4;
    case 0x7F0B37F8u: goto label_7F0B37F8;
    case 0x7F0B37FCu: goto label_7F0B37FC;
    case 0x7F0B3800u: goto label_7F0B3800;
    case 0x7F0B3804u: goto label_7F0B3804;
    case 0x7F0B3808u: goto label_7F0B3808;
    case 0x7F0B380Cu: goto label_7F0B380C;
    case 0x7F0B3810u: goto label_7F0B3810;
    case 0x7F0B3814u: goto label_7F0B3814;
    case 0x7F0B3818u: goto label_7F0B3818;
    case 0x7F0B381Cu: goto label_7F0B381C;
    case 0x7F0B3820u: goto label_7F0B3820;
    case 0x7F0B3824u: goto label_7F0B3824;
    case 0x7F0B3828u: goto label_7F0B3828;
    case 0x7F0B382Cu: goto label_7F0B382C;
    case 0x7F0B3830u: goto label_7F0B3830;
    case 0x7F0B3834u: goto label_7F0B3834;
    case 0x7F0B3838u: goto label_7F0B3838;
    case 0x7F0B383Cu: goto label_7F0B383C;
    case 0x7F0B3840u: goto label_7F0B3840;
    case 0x7F0B3844u: goto label_7F0B3844;
    case 0x7F0B3848u: goto label_7F0B3848;
    case 0x7F0B384Cu: goto label_7F0B384C;
    case 0x7F0B3850u: goto label_7F0B3850;
    case 0x7F0B3854u: goto label_7F0B3854;
    case 0x7F0B3858u: goto label_7F0B3858;
    case 0x7F0B385Cu: goto label_7F0B385C;
    case 0x7F0B3860u: goto label_7F0B3860;
    case 0x7F0B3864u: goto label_7F0B3864;
    case 0x7F0B3868u: goto label_7F0B3868;
    case 0x7F0B386Cu: goto label_7F0B386C;
    case 0x7F0B3870u: goto label_7F0B3870;
    case 0x7F0B3874u: goto label_7F0B3874;
    case 0x7F0B3878u: goto label_7F0B3878;
    case 0x7F0B387Cu: goto label_7F0B387C;
    case 0x7F0B3880u: goto label_7F0B3880;
    case 0x7F0B3884u: goto label_7F0B3884;
    case 0x7F0B3888u: goto label_7F0B3888;
    case 0x7F0B388Cu: goto label_7F0B388C;
    case 0x7F0B3890u: goto label_7F0B3890;
    case 0x7F0B3894u: goto label_7F0B3894;
    case 0x7F0B3898u: goto label_7F0B3898;
    case 0x7F0B389Cu: goto label_7F0B389C;
    case 0x7F0B38A0u: goto label_7F0B38A0;
    case 0x7F0B38A4u: goto label_7F0B38A4;
    case 0x7F0B38A8u: goto label_7F0B38A8;
    case 0x7F0B38ACu: goto label_7F0B38AC;
    case 0x7F0B38B0u: goto label_7F0B38B0;
    case 0x7F0B38B4u: goto label_7F0B38B4;
    case 0x7F0B38B8u: goto label_7F0B38B8;
    case 0x7F0B38BCu: goto label_7F0B38BC;
    case 0x7F0B38C0u: goto label_7F0B38C0;
    case 0x7F0B38C4u: goto label_7F0B38C4;
    case 0x7F0B38C8u: goto label_7F0B38C8;
    case 0x7F0B38CCu: goto label_7F0B38CC;
    case 0x7F0B38D0u: goto label_7F0B38D0;
    case 0x7F0B38D4u: goto label_7F0B38D4;
    case 0x7F0B38D8u: goto label_7F0B38D8;
    case 0x7F0B38DCu: goto label_7F0B38DC;
    case 0x7F0B38E0u: goto label_7F0B38E0;
    case 0x7F0B38E4u: goto label_7F0B38E4;
    case 0x7F0B38E8u: goto label_7F0B38E8;
    case 0x7F0B38ECu: goto label_7F0B38EC;
    case 0x7F0B38F0u: goto label_7F0B38F0;
    case 0x7F0B38F4u: goto label_7F0B38F4;
    case 0x7F0B38F8u: goto label_7F0B38F8;
    case 0x7F0B38FCu: goto label_7F0B38FC;
    case 0x7F0B3900u: goto label_7F0B3900;
    case 0x7F0B3904u: goto label_7F0B3904;
    case 0x7F0B3908u: goto label_7F0B3908;
    case 0x7F0B390Cu: goto label_7F0B390C;
    case 0x7F0B3910u: goto label_7F0B3910;
    case 0x7F0B3914u: goto label_7F0B3914;
    case 0x7F0B3918u: goto label_7F0B3918;
    case 0x7F0B391Cu: goto label_7F0B391C;
    case 0x7F0B3920u: goto label_7F0B3920;
    case 0x7F0B3924u: goto label_7F0B3924;
    case 0x7F0B3928u: goto label_7F0B3928;
    case 0x7F0B392Cu: goto label_7F0B392C;
    case 0x7F0B3930u: goto label_7F0B3930;
    case 0x7F0B3934u: goto label_7F0B3934;
    case 0x7F0B3938u: goto label_7F0B3938;
    case 0x7F0B393Cu: goto label_7F0B393C;
    case 0x7F0B3940u: goto label_7F0B3940;
    case 0x7F0B3944u: goto label_7F0B3944;
    case 0x7F0B3948u: goto label_7F0B3948;
    case 0x7F0B394Cu: goto label_7F0B394C;
    case 0x7F0B3950u: goto label_7F0B3950;
    case 0x7F0B3954u: goto label_7F0B3954;
    case 0x7F0B3958u: goto label_7F0B3958;
    case 0x7F0B395Cu: goto label_7F0B395C;
    case 0x7F0B3960u: goto label_7F0B3960;
    case 0x7F0B3964u: goto label_7F0B3964;
    case 0x7F0B3968u: goto label_7F0B3968;
    case 0x7F0B396Cu: goto label_7F0B396C;
    case 0x7F0B3970u: goto label_7F0B3970;
    case 0x7F0B3974u: goto label_7F0B3974;
    case 0x7F0B3978u: goto label_7F0B3978;
    case 0x7F0B397Cu: goto label_7F0B397C;
    case 0x7F0B3980u: goto label_7F0B3980;
    case 0x7F0B3984u: goto label_7F0B3984;
    case 0x7F0B3988u: goto label_7F0B3988;
    case 0x7F0B398Cu: goto label_7F0B398C;
    case 0x7F0B3990u: goto label_7F0B3990;
    case 0x7F0B3994u: goto label_7F0B3994;
    case 0x7F0B3998u: goto label_7F0B3998;
    case 0x7F0B399Cu: goto label_7F0B399C;
    case 0x7F0B39A0u: goto label_7F0B39A0;
    case 0x7F0B39A4u: goto label_7F0B39A4;
    case 0x7F0B39A8u: goto label_7F0B39A8;
    case 0x7F0B39ACu: goto label_7F0B39AC;
    case 0x7F0B39B0u: goto label_7F0B39B0;
    case 0x7F0B39B4u: goto label_7F0B39B4;
    case 0x7F0B39B8u: goto label_7F0B39B8;
    case 0x7F0B39BCu: goto label_7F0B39BC;
    case 0x7F0B39C0u: goto label_7F0B39C0;
    case 0x7F0B39C4u: goto label_7F0B39C4;
    case 0x7F0B39C8u: goto label_7F0B39C8;
    case 0x7F0B39CCu: goto label_7F0B39CC;
    case 0x7F0B39D0u: goto label_7F0B39D0;
    case 0x7F0B39D4u: goto label_7F0B39D4;
    case 0x7F0B39D8u: goto label_7F0B39D8;
    case 0x7F0B39DCu: goto label_7F0B39DC;
    case 0x7F0B39E0u: goto label_7F0B39E0;
    case 0x7F0B39E4u: goto label_7F0B39E4;
    case 0x7F0B39E8u: goto label_7F0B39E8;
    case 0x7F0B39ECu: goto label_7F0B39EC;
    case 0x7F0B39F0u: goto label_7F0B39F0;
    case 0x7F0B39F4u: goto label_7F0B39F4;
    case 0x7F0B39F8u: goto label_7F0B39F8;
    case 0x7F0B39FCu: goto label_7F0B39FC;
    case 0x7F0B3A00u: goto label_7F0B3A00;
    case 0x7F0B3A04u: goto label_7F0B3A04;
    case 0x7F0B3A08u: goto label_7F0B3A08;
    case 0x7F0B3A0Cu: goto label_7F0B3A0C;
    case 0x7F0B3A10u: goto label_7F0B3A10;
    case 0x7F0B3A14u: goto label_7F0B3A14;
    case 0x7F0B3A18u: goto label_7F0B3A18;
    case 0x7F0B3A1Cu: goto label_7F0B3A1C;
    case 0x7F0B3A20u: goto label_7F0B3A20;
    case 0x7F0B3A24u: goto label_7F0B3A24;
    case 0x7F0B3A28u: goto label_7F0B3A28;
    case 0x7F0B3A2Cu: goto label_7F0B3A2C;
    case 0x7F0B3A30u: goto label_7F0B3A30;
    case 0x7F0B3A34u: goto label_7F0B3A34;
    case 0x7F0B3A38u: goto label_7F0B3A38;
    case 0x7F0B3A3Cu: goto label_7F0B3A3C;
    case 0x7F0B3A40u: goto label_7F0B3A40;
    case 0x7F0B3A44u: goto label_7F0B3A44;
    case 0x7F0B3A48u: goto label_7F0B3A48;
    case 0x7F0B3A4Cu: goto label_7F0B3A4C;
    case 0x7F0B3A50u: goto label_7F0B3A50;
    case 0x7F0B3A54u: goto label_7F0B3A54;
    case 0x7F0B3A58u: goto label_7F0B3A58;
    case 0x7F0B3A5Cu: goto label_7F0B3A5C;
    case 0x7F0B3A60u: goto label_7F0B3A60;
    case 0x7F0B3A64u: goto label_7F0B3A64;
    case 0x7F0B3A68u: goto label_7F0B3A68;
    case 0x7F0B3A6Cu: goto label_7F0B3A6C;
    case 0x7F0B3A70u: goto label_7F0B3A70;
    case 0x7F0B3A74u: goto label_7F0B3A74;
    case 0x7F0B3A78u: goto label_7F0B3A78;
    case 0x7F0B3A7Cu: goto label_7F0B3A7C;
    case 0x7F0B3A80u: goto label_7F0B3A80;
    case 0x7F0B3A84u: goto label_7F0B3A84;
    case 0x7F0B3A88u: goto label_7F0B3A88;
    case 0x7F0B3A8Cu: goto label_7F0B3A8C;
    case 0x7F0B3A90u: goto label_7F0B3A90;
    case 0x7F0B3A94u: goto label_7F0B3A94;
    case 0x7F0B3A98u: goto label_7F0B3A98;
    case 0x7F0B3A9Cu: goto label_7F0B3A9C;
    case 0x7F0B3AA0u: goto label_7F0B3AA0;
    case 0x7F0B3AA4u: goto label_7F0B3AA4;
    case 0x7F0B3AA8u: goto label_7F0B3AA8;
    case 0x7F0B3AACu: goto label_7F0B3AAC;
    case 0x7F0B3AB0u: goto label_7F0B3AB0;
    case 0x7F0B3AB4u: goto label_7F0B3AB4;
    case 0x7F0B3AB8u: goto label_7F0B3AB8;
    case 0x7F0B3ABCu: goto label_7F0B3ABC;
    case 0x7F0B3AC0u: goto label_7F0B3AC0;
    case 0x7F0B3AC4u: goto label_7F0B3AC4;
    case 0x7F0B3AC8u: goto label_7F0B3AC8;
    case 0x7F0B3ACCu: goto label_7F0B3ACC;
    case 0x7F0B3AD0u: goto label_7F0B3AD0;
    case 0x7F0B3AD4u: goto label_7F0B3AD4;
    case 0x7F0B3AD8u: goto label_7F0B3AD8;
    case 0x7F0B3ADCu: goto label_7F0B3ADC;
    case 0x7F0B3AE0u: goto label_7F0B3AE0;
    case 0x7F0B3AE4u: goto label_7F0B3AE4;
    case 0x7F0B3AE8u: goto label_7F0B3AE8;
    case 0x7F0B3AECu: goto label_7F0B3AEC;
    case 0x7F0B3AF0u: goto label_7F0B3AF0;
    case 0x7F0B3AF4u: goto label_7F0B3AF4;
    case 0x7F0B3AF8u: goto label_7F0B3AF8;
    case 0x7F0B3AFCu: goto label_7F0B3AFC;
    case 0x7F0B3B00u: goto label_7F0B3B00;
    case 0x7F0B3B04u: goto label_7F0B3B04;
    case 0x7F0B3B08u: goto label_7F0B3B08;
    case 0x7F0B3B0Cu: goto label_7F0B3B0C;
    case 0x7F0B3B10u: goto label_7F0B3B10;
    case 0x7F0B3B14u: goto label_7F0B3B14;
    case 0x7F0B3B18u: goto label_7F0B3B18;
    case 0x7F0B3B1Cu: goto label_7F0B3B1C;
    case 0x7F0B3B20u: goto label_7F0B3B20;
    case 0x7F0B3B24u: goto label_7F0B3B24;
    case 0x7F0B3B28u: goto label_7F0B3B28;
    case 0x7F0B3B2Cu: goto label_7F0B3B2C;
    case 0x7F0B3B30u: goto label_7F0B3B30;
    case 0x7F0B3B34u: goto label_7F0B3B34;
    case 0x7F0B3B38u: goto label_7F0B3B38;
    case 0x7F0B3B3Cu: goto label_7F0B3B3C;
    case 0x7F0B3B40u: goto label_7F0B3B40;
    case 0x7F0B3B44u: goto label_7F0B3B44;
    case 0x7F0B3B48u: goto label_7F0B3B48;
    case 0x7F0B3B4Cu: goto label_7F0B3B4C;
    case 0x7F0B3B50u: goto label_7F0B3B50;
    case 0x7F0B3B54u: goto label_7F0B3B54;
    case 0x7F0B3B58u: goto label_7F0B3B58;
    case 0x7F0B3B5Cu: goto label_7F0B3B5C;
    case 0x7F0B3B60u: goto label_7F0B3B60;
    case 0x7F0B3B64u: goto label_7F0B3B64;
    case 0x7F0B3B68u: goto label_7F0B3B68;
    case 0x7F0B3B6Cu: goto label_7F0B3B6C;
    case 0x7F0B3B70u: goto label_7F0B3B70;
    case 0x7F0B3B74u: goto label_7F0B3B74;
    case 0x7F0B3B78u: goto label_7F0B3B78;
    case 0x7F0B3B7Cu: goto label_7F0B3B7C;
    case 0x7F0B3B80u: goto label_7F0B3B80;
    case 0x7F0B3B84u: goto label_7F0B3B84;
    case 0x7F0B3B88u: goto label_7F0B3B88;
    case 0x7F0B3B8Cu: goto label_7F0B3B8C;
    case 0x7F0B3B90u: goto label_7F0B3B90;
    case 0x7F0B3B94u: goto label_7F0B3B94;
    case 0x7F0B3B98u: goto label_7F0B3B98;
    case 0x7F0B3B9Cu: goto label_7F0B3B9C;
    case 0x7F0B3BA0u: goto label_7F0B3BA0;
    case 0x7F0B3BA4u: goto label_7F0B3BA4;
    case 0x7F0B3BA8u: goto label_7F0B3BA8;
    case 0x7F0B3BACu: goto label_7F0B3BAC;
    case 0x7F0B3BB0u: goto label_7F0B3BB0;
    case 0x7F0B3BB4u: goto label_7F0B3BB4;
    case 0x7F0B3BB8u: goto label_7F0B3BB8;
    case 0x7F0B3BBCu: goto label_7F0B3BBC;
    case 0x7F0B3BC0u: goto label_7F0B3BC0;
    case 0x7F0B3BC4u: goto label_7F0B3BC4;
    case 0x7F0B3BC8u: goto label_7F0B3BC8;
    case 0x7F0B3BCCu: goto label_7F0B3BCC;
    case 0x7F0B3BD0u: goto label_7F0B3BD0;
    case 0x7F0B3BD4u: goto label_7F0B3BD4;
    case 0x7F0B3BD8u: goto label_7F0B3BD8;
    case 0x7F0B3BDCu: goto label_7F0B3BDC;
    case 0x7F0B3BE0u: goto label_7F0B3BE0;
    case 0x7F0B3BE4u: goto label_7F0B3BE4;
    case 0x7F0B3BE8u: goto label_7F0B3BE8;
    case 0x7F0B3BECu: goto label_7F0B3BEC;
    case 0x7F0B3BF0u: goto label_7F0B3BF0;
    case 0x7F0B3BF4u: goto label_7F0B3BF4;
    case 0x7F0B3BF8u: goto label_7F0B3BF8;
    case 0x7F0B3BFCu: goto label_7F0B3BFC;
    case 0x7F0B3C00u: goto label_7F0B3C00;
    case 0x7F0B3C04u: goto label_7F0B3C04;
    case 0x7F0B3C08u: goto label_7F0B3C08;
    case 0x7F0B3C0Cu: goto label_7F0B3C0C;
    case 0x7F0B3C10u: goto label_7F0B3C10;
    case 0x7F0B3C14u: goto label_7F0B3C14;
    case 0x7F0B3C18u: goto label_7F0B3C18;
    case 0x7F0B3C1Cu: goto label_7F0B3C1C;
    case 0x7F0B3C20u: goto label_7F0B3C20;
    case 0x7F0B3C24u: goto label_7F0B3C24;
    case 0x7F0B3C28u: goto label_7F0B3C28;
    case 0x7F0B3C2Cu: goto label_7F0B3C2C;
    case 0x7F0B3C30u: goto label_7F0B3C30;
    case 0x7F0B3C34u: goto label_7F0B3C34;
    case 0x7F0B3C38u: goto label_7F0B3C38;
    case 0x7F0B3C3Cu: goto label_7F0B3C3C;
    case 0x7F0B3C40u: goto label_7F0B3C40;
    case 0x7F0B3C44u: goto label_7F0B3C44;
    case 0x7F0B3C48u: goto label_7F0B3C48;
    case 0x7F0B3C4Cu: goto label_7F0B3C4C;
    case 0x7F0B3C50u: goto label_7F0B3C50;
    case 0x7F0B3C54u: goto label_7F0B3C54;
    case 0x7F0B3C58u: goto label_7F0B3C58;
    case 0x7F0B3C5Cu: goto label_7F0B3C5C;
    case 0x7F0B3C60u: goto label_7F0B3C60;
    case 0x7F0B3C64u: goto label_7F0B3C64;
    case 0x7F0B3C68u: goto label_7F0B3C68;
    case 0x7F0B3C6Cu: goto label_7F0B3C6C;
    case 0x7F0B3C70u: goto label_7F0B3C70;
    case 0x7F0B3C74u: goto label_7F0B3C74;
    case 0x7F0B3C78u: goto label_7F0B3C78;
    case 0x7F0B3C7Cu: goto label_7F0B3C7C;
    case 0x7F0B3C80u: goto label_7F0B3C80;
    case 0x7F0B3C84u: goto label_7F0B3C84;
    case 0x7F0B3C88u: goto label_7F0B3C88;
    case 0x7F0B3C8Cu: goto label_7F0B3C8C;
    case 0x7F0B3C90u: goto label_7F0B3C90;
    case 0x7F0B3C94u: goto label_7F0B3C94;
    case 0x7F0B3C98u: goto label_7F0B3C98;
    case 0x7F0B3C9Cu: goto label_7F0B3C9C;
    case 0x7F0B3CA0u: goto label_7F0B3CA0;
    case 0x7F0B3CA4u: goto label_7F0B3CA4;
    case 0x7F0B3CA8u: goto label_7F0B3CA8;
    case 0x7F0B3CACu: goto label_7F0B3CAC;
    case 0x7F0B3CB0u: goto label_7F0B3CB0;
    case 0x7F0B3CB4u: goto label_7F0B3CB4;
    case 0x7F0B3CB8u: goto label_7F0B3CB8;
    case 0x7F0B3CBCu: goto label_7F0B3CBC;
    case 0x7F0B3CC0u: goto label_7F0B3CC0;
    case 0x7F0B3CC4u: goto label_7F0B3CC4;
    case 0x7F0B3CC8u: goto label_7F0B3CC8;
    case 0x7F0B3CCCu: goto label_7F0B3CCC;
    case 0x7F0B3CD0u: goto label_7F0B3CD0;
    case 0x7F0B3CD4u: goto label_7F0B3CD4;
    case 0x7F0B3CD8u: goto label_7F0B3CD8;
    case 0x7F0B3CDCu: goto label_7F0B3CDC;
    case 0x7F0B3CE0u: goto label_7F0B3CE0;
    case 0x7F0B3CE4u: goto label_7F0B3CE4;
    case 0x7F0B3CE8u: goto label_7F0B3CE8;
    case 0x7F0B3CECu: goto label_7F0B3CEC;
    case 0x7F0B3CF0u: goto label_7F0B3CF0;
    case 0x7F0B3CF4u: goto label_7F0B3CF4;
    case 0x7F0B3CF8u: goto label_7F0B3CF8;
    case 0x7F0B3CFCu: goto label_7F0B3CFC;
    case 0x7F0B3D00u: goto label_7F0B3D00;
    case 0x7F0B3D04u: goto label_7F0B3D04;
    case 0x7F0B3D08u: goto label_7F0B3D08;
    case 0x7F0B3D0Cu: goto label_7F0B3D0C;
    case 0x7F0B3D10u: goto label_7F0B3D10;
    case 0x7F0B3D14u: goto label_7F0B3D14;
    case 0x7F0B3D18u: goto label_7F0B3D18;
    case 0x7F0B3D1Cu: goto label_7F0B3D1C;
    case 0x7F0B3D20u: goto label_7F0B3D20;
    case 0x7F0B3D24u: goto label_7F0B3D24;
    case 0x7F0B3D28u: goto label_7F0B3D28;
    case 0x7F0B3D2Cu: goto label_7F0B3D2C;
    case 0x7F0B3D30u: goto label_7F0B3D30;
    case 0x7F0B3D34u: goto label_7F0B3D34;
    case 0x7F0B3D38u: goto label_7F0B3D38;
    case 0x7F0B3D3Cu: goto label_7F0B3D3C;
    case 0x7F0B3D40u: goto label_7F0B3D40;
    case 0x7F0B3D44u: goto label_7F0B3D44;
    case 0x7F0B3D48u: goto label_7F0B3D48;
    case 0x7F0B3D4Cu: goto label_7F0B3D4C;
    case 0x7F0B3D50u: goto label_7F0B3D50;
    case 0x7F0B3D54u: goto label_7F0B3D54;
    case 0x7F0B3D58u: goto label_7F0B3D58;
    case 0x7F0B3D5Cu: goto label_7F0B3D5C;
    case 0x7F0B3D60u: goto label_7F0B3D60;
    case 0x7F0B3D64u: goto label_7F0B3D64;
    case 0x7F0B3D68u: goto label_7F0B3D68;
    case 0x7F0B3D6Cu: goto label_7F0B3D6C;
    case 0x7F0B3D70u: goto label_7F0B3D70;
    case 0x7F0B3D74u: goto label_7F0B3D74;
    case 0x7F0B3D78u: goto label_7F0B3D78;
    case 0x7F0B3D7Cu: goto label_7F0B3D7C;
    case 0x7F0B3D80u: goto label_7F0B3D80;
    case 0x7F0B3D84u: goto label_7F0B3D84;
    case 0x7F0B3D88u: goto label_7F0B3D88;
    case 0x7F0B3D8Cu: goto label_7F0B3D8C;
    case 0x7F0B3D90u: goto label_7F0B3D90;
    case 0x7F0B3D94u: goto label_7F0B3D94;
    case 0x7F0B3D98u: goto label_7F0B3D98;
    case 0x7F0B3D9Cu: goto label_7F0B3D9C;
    case 0x7F0B3DA0u: goto label_7F0B3DA0;
    case 0x7F0B3DA4u: goto label_7F0B3DA4;
    case 0x7F0B3DA8u: goto label_7F0B3DA8;
    case 0x7F0B3DACu: goto label_7F0B3DAC;
    case 0x7F0B3DB0u: goto label_7F0B3DB0;
    case 0x7F0B3DB4u: goto label_7F0B3DB4;
    case 0x7F0B3DB8u: goto label_7F0B3DB8;
    case 0x7F0B3DBCu: goto label_7F0B3DBC;
    case 0x7F0B3DC0u: goto label_7F0B3DC0;
    case 0x7F0B3DC4u: goto label_7F0B3DC4;
    case 0x7F0B3DC8u: goto label_7F0B3DC8;
    case 0x7F0B3DCCu: goto label_7F0B3DCC;
    case 0x7F0B3DD0u: goto label_7F0B3DD0;
    case 0x7F0B3DD4u: goto label_7F0B3DD4;
    case 0x7F0B3DD8u: goto label_7F0B3DD8;
    case 0x7F0B3DDCu: goto label_7F0B3DDC;
    case 0x7F0B3DE0u: goto label_7F0B3DE0;
    case 0x7F0B3DE4u: goto label_7F0B3DE4;
    case 0x7F0B3DE8u: goto label_7F0B3DE8;
    case 0x7F0B3DECu: goto label_7F0B3DEC;
    case 0x7F0B3DF0u: goto label_7F0B3DF0;
    case 0x7F0B3DF4u: goto label_7F0B3DF4;
    case 0x7F0B3DF8u: goto label_7F0B3DF8;
    case 0x7F0B3DFCu: goto label_7F0B3DFC;
    case 0x7F0B3E00u: goto label_7F0B3E00;
    case 0x7F0B3E04u: goto label_7F0B3E04;
    case 0x7F0B3E08u: goto label_7F0B3E08;
    case 0x7F0B3E0Cu: goto label_7F0B3E0C;
    case 0x7F0B3E10u: goto label_7F0B3E10;
    case 0x7F0B3E14u: goto label_7F0B3E14;
    case 0x7F0B3E18u: goto label_7F0B3E18;
    case 0x7F0B3E1Cu: goto label_7F0B3E1C;
    case 0x7F0B3E20u: goto label_7F0B3E20;
    case 0x7F0B3E24u: goto label_7F0B3E24;
    case 0x7F0B3E28u: goto label_7F0B3E28;
    case 0x7F0B3E2Cu: goto label_7F0B3E2C;
    case 0x7F0B3E30u: goto label_7F0B3E30;
    case 0x7F0B3E34u: goto label_7F0B3E34;
    case 0x7F0B3E38u: goto label_7F0B3E38;
    case 0x7F0B3E3Cu: goto label_7F0B3E3C;
    case 0x7F0B3E40u: goto label_7F0B3E40;
    case 0x7F0B3E44u: goto label_7F0B3E44;
    case 0x7F0B3E48u: goto label_7F0B3E48;
    case 0x7F0B3E4Cu: goto label_7F0B3E4C;
    case 0x7F0B3E50u: goto label_7F0B3E50;
    case 0x7F0B3E54u: goto label_7F0B3E54;
    case 0x7F0B3E58u: goto label_7F0B3E58;
    case 0x7F0B3E5Cu: goto label_7F0B3E5C;
    case 0x7F0B3E60u: goto label_7F0B3E60;
    case 0x7F0B3E64u: goto label_7F0B3E64;
    case 0x7F0B3E68u: goto label_7F0B3E68;
    case 0x7F0B3E6Cu: goto label_7F0B3E6C;
    case 0x7F0B3E70u: goto label_7F0B3E70;
    case 0x7F0B3E74u: goto label_7F0B3E74;
    case 0x7F0B3E78u: goto label_7F0B3E78;
    case 0x7F0B3E7Cu: goto label_7F0B3E7C;
    case 0x7F0B3E80u: goto label_7F0B3E80;
    case 0x7F0B3E84u: goto label_7F0B3E84;
    case 0x7F0B3E88u: goto label_7F0B3E88;
    case 0x7F0B3E8Cu: goto label_7F0B3E8C;
    case 0x7F0B3E90u: goto label_7F0B3E90;
    case 0x7F0B3E94u: goto label_7F0B3E94;
    case 0x7F0B3E98u: goto label_7F0B3E98;
    case 0x7F0B3E9Cu: goto label_7F0B3E9C;
    case 0x7F0B3EA0u: goto label_7F0B3EA0;
    case 0x7F0B3EA4u: goto label_7F0B3EA4;
    case 0x7F0B3EA8u: goto label_7F0B3EA8;
    case 0x7F0B3EACu: goto label_7F0B3EAC;
    case 0x7F0B3EB0u: goto label_7F0B3EB0;
    case 0x7F0B3EB4u: goto label_7F0B3EB4;
    case 0x7F0B3EB8u: goto label_7F0B3EB8;
    case 0x7F0B3EBCu: goto label_7F0B3EBC;
    case 0x7F0B3EC0u: goto label_7F0B3EC0;
    case 0x7F0B3EC4u: goto label_7F0B3EC4;
    case 0x7F0B3EC8u: goto label_7F0B3EC8;
    case 0x7F0B3ECCu: goto label_7F0B3ECC;
    case 0x7F0B3ED0u: goto label_7F0B3ED0;
    case 0x7F0B3ED4u: goto label_7F0B3ED4;
    case 0x7F0B3ED8u: goto label_7F0B3ED8;
    case 0x7F0B3EDCu: goto label_7F0B3EDC;
    case 0x7F0B3EE0u: goto label_7F0B3EE0;
    case 0x7F0B3EE4u: goto label_7F0B3EE4;
    case 0x7F0B3EE8u: goto label_7F0B3EE8;
    case 0x7F0B3EECu: goto label_7F0B3EEC;
    case 0x7F0B3EF0u: goto label_7F0B3EF0;
    case 0x7F0B3EF4u: goto label_7F0B3EF4;
    case 0x7F0B3EF8u: goto label_7F0B3EF8;
    case 0x7F0B3EFCu: goto label_7F0B3EFC;
    case 0x7F0B3F00u: goto label_7F0B3F00;
    case 0x7F0B3F04u: goto label_7F0B3F04;
    case 0x7F0B3F08u: goto label_7F0B3F08;
    case 0x7F0B3F0Cu: goto label_7F0B3F0C;
    case 0x7F0B3F10u: goto label_7F0B3F10;
    case 0x7F0B3F14u: goto label_7F0B3F14;
    case 0x7F0B3F18u: goto label_7F0B3F18;
    case 0x7F0B3F1Cu: goto label_7F0B3F1C;
    case 0x7F0B3F20u: goto label_7F0B3F20;
    case 0x7F0B3F24u: goto label_7F0B3F24;
    case 0x7F0B3F28u: goto label_7F0B3F28;
    case 0x7F0B3F2Cu: goto label_7F0B3F2C;
    case 0x7F0B3F30u: goto label_7F0B3F30;
    case 0x7F0B3F34u: goto label_7F0B3F34;
    case 0x7F0B3F38u: goto label_7F0B3F38;
    case 0x7F0B3F3Cu: goto label_7F0B3F3C;
    case 0x7F0B3F40u: goto label_7F0B3F40;
    case 0x7F0B3F44u: goto label_7F0B3F44;
    case 0x7F0B3F48u: goto label_7F0B3F48;
    case 0x7F0B3F4Cu: goto label_7F0B3F4C;
    case 0x7F0B3F50u: goto label_7F0B3F50;
    case 0x7F0B3F54u: goto label_7F0B3F54;
    case 0x7F0B3F58u: goto label_7F0B3F58;
    case 0x7F0B3F5Cu: goto label_7F0B3F5C;
    case 0x7F0B3F60u: goto label_7F0B3F60;
    case 0x7F0B3F64u: goto label_7F0B3F64;
    case 0x7F0B3F68u: goto label_7F0B3F68;
    case 0x7F0B3F6Cu: goto label_7F0B3F6C;
    case 0x7F0B3F70u: goto label_7F0B3F70;
    case 0x7F0B3F74u: goto label_7F0B3F74;
    case 0x7F0B3F78u: goto label_7F0B3F78;
    case 0x7F0B3F7Cu: goto label_7F0B3F7C;
    case 0x7F0B3F80u: goto label_7F0B3F80;
    case 0x7F0B3F84u: goto label_7F0B3F84;
    case 0x7F0B3F88u: goto label_7F0B3F88;
    case 0x7F0B3F8Cu: goto label_7F0B3F8C;
    case 0x7F0B3F90u: goto label_7F0B3F90;
    case 0x7F0B3F94u: goto label_7F0B3F94;
    case 0x7F0B3F98u: goto label_7F0B3F98;
    case 0x7F0B3F9Cu: goto label_7F0B3F9C;
    case 0x7F0B3FA0u: goto label_7F0B3FA0;
    case 0x7F0B3FA4u: goto label_7F0B3FA4;
    case 0x7F0B3FA8u: goto label_7F0B3FA8;
    case 0x7F0B3FACu: goto label_7F0B3FAC;
    case 0x7F0B3FB0u: goto label_7F0B3FB0;
    case 0x7F0B3FB4u: goto label_7F0B3FB4;
    case 0x7F0B3FB8u: goto label_7F0B3FB8;
    case 0x7F0B3FBCu: goto label_7F0B3FBC;
    case 0x7F0B3FC0u: goto label_7F0B3FC0;
    case 0x7F0B3FC4u: goto label_7F0B3FC4;
    case 0x7F0B3FC8u: goto label_7F0B3FC8;
    case 0x7F0B3FCCu: goto label_7F0B3FCC;
    case 0x7F0B3FD0u: goto label_7F0B3FD0;
    case 0x7F0B3FD4u: goto label_7F0B3FD4;
    case 0x7F0B3FD8u: goto label_7F0B3FD8;
    case 0x7F0B3FDCu: goto label_7F0B3FDC;
    case 0x7F0B3FE0u: goto label_7F0B3FE0;
    case 0x7F0B3FE4u: goto label_7F0B3FE4;
    case 0x7F0B3FE8u: goto label_7F0B3FE8;
    case 0x7F0B3FECu: goto label_7F0B3FEC;
    case 0x7F0B3FF0u: goto label_7F0B3FF0;
    case 0x7F0B3FF4u: goto label_7F0B3FF4;
    case 0x7F0B3FF8u: goto label_7F0B3FF8;
    case 0x7F0B3FFCu: goto label_7F0B3FFC;
    case 0x7F0B4000u: goto label_7F0B4000;
    case 0x7F0B4004u: goto label_7F0B4004;
    case 0x7F0B4008u: goto label_7F0B4008;
    case 0x7F0B400Cu: goto label_7F0B400C;
    case 0x7F0B4010u: goto label_7F0B4010;
    case 0x7F0B4014u: goto label_7F0B4014;
    case 0x7F0B4018u: goto label_7F0B4018;
    case 0x7F0B401Cu: goto label_7F0B401C;
    case 0x7F0B4020u: goto label_7F0B4020;
    case 0x7F0B4024u: goto label_7F0B4024;
    case 0x7F0B4028u: goto label_7F0B4028;
    case 0x7F0B402Cu: goto label_7F0B402C;
    case 0x7F0B4030u: goto label_7F0B4030;
    case 0x7F0B4034u: goto label_7F0B4034;
    case 0x7F0B4038u: goto label_7F0B4038;
    case 0x7F0B403Cu: goto label_7F0B403C;
    case 0x7F0B4040u: goto label_7F0B4040;
    case 0x7F0B4044u: goto label_7F0B4044;
    case 0x7F0B4048u: goto label_7F0B4048;
    case 0x7F0B404Cu: goto label_7F0B404C;
    case 0x7F0B4050u: goto label_7F0B4050;
    case 0x7F0B4054u: goto label_7F0B4054;
    case 0x7F0B4058u: goto label_7F0B4058;
    case 0x7F0B405Cu: goto label_7F0B405C;
    case 0x7F0B4060u: goto label_7F0B4060;
    case 0x7F0B4064u: goto label_7F0B4064;
    case 0x7F0B4068u: goto label_7F0B4068;
    case 0x7F0B406Cu: goto label_7F0B406C;
    case 0x7F0B4070u: goto label_7F0B4070;
    case 0x7F0B4074u: goto label_7F0B4074;
    case 0x7F0B4078u: goto label_7F0B4078;
    case 0x7F0B407Cu: goto label_7F0B407C;
    case 0x7F0B4080u: goto label_7F0B4080;
    case 0x7F0B4084u: goto label_7F0B4084;
    case 0x7F0B4088u: goto label_7F0B4088;
    case 0x7F0B408Cu: goto label_7F0B408C;
    case 0x7F0B4090u: goto label_7F0B4090;
    case 0x7F0B4094u: goto label_7F0B4094;
    case 0x7F0B4098u: goto label_7F0B4098;
    case 0x7F0B409Cu: goto label_7F0B409C;
    case 0x7F0B40A0u: goto label_7F0B40A0;
    case 0x7F0B40A4u: goto label_7F0B40A4;
    case 0x7F0B40A8u: goto label_7F0B40A8;
    case 0x7F0B40ACu: goto label_7F0B40AC;
    case 0x7F0B40B0u: goto label_7F0B40B0;
    case 0x7F0B40B4u: goto label_7F0B40B4;
    case 0x7F0B40B8u: goto label_7F0B40B8;
    case 0x7F0B40BCu: goto label_7F0B40BC;
    case 0x7F0B40C0u: goto label_7F0B40C0;
    case 0x7F0B40C4u: goto label_7F0B40C4;
    case 0x7F0B40C8u: goto label_7F0B40C8;
    case 0x7F0B40CCu: goto label_7F0B40CC;
    case 0x7F0B40D0u: goto label_7F0B40D0;
    case 0x7F0B40D4u: goto label_7F0B40D4;
    case 0x7F0B40D8u: goto label_7F0B40D8;
    case 0x7F0B40DCu: goto label_7F0B40DC;
    case 0x7F0B40E0u: goto label_7F0B40E0;
    case 0x7F0B40E4u: goto label_7F0B40E4;
    case 0x7F0B40E8u: goto label_7F0B40E8;
    default: return;
    }
label_7F0B00EC:
    ctx->pc = 0x7F0B00ECu;
    ctx->downcount -= 19;
    // 7F0B00EC: lha     r0, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B00F0:
    ctx->pc = 0x7F0B00F0u;
    // 7F0B00F0: stw     r0, 1464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1464);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B00F4:
    ctx->pc = 0x7F0B00F4u;
    // 7F0B00F4: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B00F8:
    ctx->pc = 0x7F0B00F8u;
    // 7F0B00F8: sth     r8, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0B00FC:
    ctx->pc = 0x7F0B00FCu;
    // 7F0B00FC: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0100:
    ctx->pc = 0x7F0B0100u;
    // 7F0B0100: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0104:
    ctx->pc = 0x7F0B0104u;
    // 7F0B0104: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0108:
    ctx->pc = 0x7F0B0108u;
    // 7F0B0108: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B010C:
    ctx->pc = 0x7F0B010Cu;
    // 7F0B010C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0110:
    ctx->pc = 0x7F0B0110u;
    // 7F0B0110: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0114:
    ctx->pc = 0x7F0B0114u;
    // 7F0B0114: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0118:
    ctx->pc = 0x7F0B0118u;
    // 7F0B0118: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B011C:
    ctx->pc = 0x7F0B011Cu;
    // 7F0B011C: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0120:
    ctx->pc = 0x7F0B0120u;
    // 7F0B0120: lha     r0, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0124:
    ctx->pc = 0x7F0B0124u;
    // 7F0B0124: stw     r0, 1464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1464);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0128:
    ctx->pc = 0x7F0B0128u;
    // 7F0B0128: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B012C:
    ctx->pc = 0x7F0B012Cu;
    // 7F0B012C: stw     r30, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0B0130:
    ctx->pc = 0x7F0B0130u;
    // 7F0B0130: cmplwi  r4, 0x0000
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

label_7F0B0134:
    ctx->pc = 0x7F0B0134u;
    // 7F0B0134: bc    12, 2, 0x7F0B0158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0158;
        }
    }

label_7F0B0138:
    ctx->pc = 0x7F0B0138u;
    ctx->downcount -= 8;
    // 7F0B0138: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B013C:
    ctx->pc = 0x7F0B013Cu;
    // 7F0B013C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0140:
    ctx->pc = 0x7F0B0140u;
    // 7F0B0140: stw     r3, 1492(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0144:
    ctx->pc = 0x7F0B0144u;
    // 7F0B0144: stw     r0, 1496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0148:
    ctx->pc = 0x7F0B0148u;
    // 7F0B0148: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B014C:
    ctx->pc = 0x7F0B014Cu;
    // 7F0B014C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0150:
    ctx->pc = 0x7F0B0150u;
    // 7F0B0150: stw     r3, 1500(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0154:
    ctx->pc = 0x7F0B0154u;
    // 7F0B0154: stw     r0, 1504(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0158:
    ctx->pc = 0x7F0B0158u;
    ctx->downcount -= 2;
    // 7F0B0158: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B015C:
    ctx->pc = 0x7F0B015Cu;
    // 7F0B015C: bl      0x7F01D45C
    {
            ctx->lr = 0x7F0B0160u;
            ctx->pc = 0x7F01D45Cu;
            return;
    }

label_7F0B0160:
    ctx->pc = 0x7F0B0160u;
    ctx->downcount -= 3;
    // 7F0B0160: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B0164:
    ctx->pc = 0x7F0B0164u;
    // 7F0B0164: lfs     f1, -5160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0164u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B0168:
    ctx->pc = 0x7F0B0168u;
    // 7F0B0168: bl      0x7F01D44C
    {
            ctx->lr = 0x7F0B016Cu;
            ctx->pc = 0x7F01D44Cu;
            return;
    }

label_7F0B016C:
    ctx->pc = 0x7F0B016Cu;
    ctx->downcount -= 17;
    // 7F0B016C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B0170:
    ctx->pc = 0x7F0B0170u;
    // 7F0B0170: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B0174:
    ctx->pc = 0x7F0B0174u;
    // 7F0B0174: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0178:
    ctx->pc = 0x7F0B0178u;
    // 7F0B0178: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B017C:
    ctx->pc = 0x7F0B017Cu;
    // 7F0B017C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B0180:
    ctx->pc = 0x7F0B0180u;
    // 7F0B0180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B0184:
    ctx->pc = 0x7F0B0184u;
    ctx->downcount -= 7;
    // 7F0B0184: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B0188:
    ctx->pc = 0x7F0B0188u;
    // 7F0B0188: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B018C:
    ctx->pc = 0x7F0B018Cu;
    // 7F0B018C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0190:
    ctx->pc = 0x7F0B0190u;
    // 7F0B0190: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B0194:
    ctx->pc = 0x7F0B0194u;
    // 7F0B0194: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B0198:
    ctx->pc = 0x7F0B0198u;
    // 7F0B0198: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B019C:
    ctx->pc = 0x7F0B019Cu;
    // 7F0B019C: bl      0x7F023E10
    {
            ctx->lr = 0x7F0B01A0u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0B01A0:
    ctx->pc = 0x7F0B01A0u;
    ctx->downcount -= 2;
    // 7F0B01A0: addi    r3, r31, 1052
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1052);

label_7F0B01A4:
    ctx->pc = 0x7F0B01A4u;
    // 7F0B01A4: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B01A8u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B01A8:
    ctx->pc = 0x7F0B01A8u;
    ctx->downcount -= 2;
    // 7F0B01A8: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B01AC:
    ctx->pc = 0x7F0B01ACu;
    // 7F0B01AC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B01B0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B01B0:
    ctx->pc = 0x7F0B01B0u;
    ctx->downcount -= 1;
    // 7F0B01B0: bl      0x7F0B8B20
    {
            ctx->lr = 0x7F0B01B4u;
            ctx->pc = 0x7F0B8B20u;
            return;
    }

label_7F0B01B4:
    ctx->pc = 0x7F0B01B4u;
    ctx->downcount -= 6;
    // 7F0B01B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B01B8:
    ctx->pc = 0x7F0B01B8u;
    // 7F0B01B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B01BC:
    ctx->pc = 0x7F0B01BCu;
    // 7F0B01BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B01C0:
    ctx->pc = 0x7F0B01C0u;
    // 7F0B01C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B01C4:
    ctx->pc = 0x7F0B01C4u;
    // 7F0B01C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B01C8:
    ctx->pc = 0x7F0B01C8u;
    ctx->downcount -= 21;
    // 7F0B01C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B01CC:
    ctx->pc = 0x7F0B01CCu;
    // 7F0B01CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B01D0:
    ctx->pc = 0x7F0B01D0u;
    // 7F0B01D0: li      r5, 1520
    ctx->gpr[5] = (u32)(s32)(1520);

label_7F0B01D4:
    ctx->pc = 0x7F0B01D4u;
    // 7F0B01D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B01D8:
    ctx->pc = 0x7F0B01D8u;
    // 7F0B01D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B01DC:
    ctx->pc = 0x7F0B01DCu;
    // 7F0B01DC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B01E0:
    ctx->pc = 0x7F0B01E0u;
    // 7F0B01E0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B01E4:
    ctx->pc = 0x7F0B01E4u;
    // 7F0B01E4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B01E8:
    ctx->pc = 0x7F0B01E8u;
    // 7F0B01E8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0B01EC:
    ctx->pc = 0x7F0B01ECu;
    // 7F0B01EC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B01F0:
    ctx->pc = 0x7F0B01F0u;
    // 7F0B01F0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0B01F4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0B01F4:
    ctx->pc = 0x7F0B01F4u;
    ctx->downcount -= 2;
    // 7F0B01F4: or.   r31, r3, r3
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

label_7F0B01F8:
    ctx->pc = 0x7F0B01F8u;
    // 7F0B01F8: bc    12, 2, 0x7F0B0260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0260;
        }
    }

label_7F0B01FC:
    ctx->pc = 0x7F0B01FCu;
    ctx->downcount -= 5;
    // 7F0B01FC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B0200:
    ctx->pc = 0x7F0B0200u;
    // 7F0B0200: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0B0204:
    ctx->pc = 0x7F0B0204u;
    // 7F0B0204: addi    r4, r4, -1020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1020);

label_7F0B0208:
    ctx->pc = 0x7F0B0208u;
    // 7F0B0208: addi    r5, r5, 388
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(388);

label_7F0B020C:
    ctx->pc = 0x7F0B020Cu;
    // 7F0B020C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0B0210u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0B0210:
    ctx->pc = 0x7F0B0210u;
    ctx->downcount -= 6;
    // 7F0B0210: stw     r29, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B0214:
    ctx->pc = 0x7F0B0214u;
    // 7F0B0214: lis     r4, 105
    ctx->gpr[4] = ((u32)(s32)(105) << 16);

label_7F0B0218:
    ctx->pc = 0x7F0B0218u;
    // 7F0B0218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B021C:
    ctx->pc = 0x7F0B021Cu;
    // 7F0B021C: stw     r30, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0B0220:
    ctx->pc = 0x7F0B0220u;
    // 7F0B0220: addi    r4, r4, -28214
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28214);

label_7F0B0224:
    ctx->pc = 0x7F0B0224u;
    // 7F0B0224: bl      0x7F0AFF68
    {
            ctx->lr = 0x7F0B0228u;
            ctx->pc = 0x7F0AFF68u;
            return;
    }

label_7F0B0228:
    ctx->pc = 0x7F0B0228u;
    ctx->downcount -= 2;
    // 7F0B0228: cmpwi   r3, 0
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

label_7F0B022C:
    ctx->pc = 0x7F0B022Cu;
    // 7F0B022C: bc    4, 0, 0x7F0B0240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0240;
        }
    }

label_7F0B0230:
    ctx->pc = 0x7F0B0230u;
    ctx->downcount -= 2;
    // 7F0B0230: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0234:
    ctx->pc = 0x7F0B0234u;
    // 7F0B0234: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B0238u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B0238:
    ctx->pc = 0x7F0B0238u;
    ctx->downcount -= 2;
    // 7F0B0238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B023C:
    ctx->pc = 0x7F0B023Cu;
    // 7F0B023C: b       0x7F0B0264
    {
            goto label_7F0B0264;
    }

label_7F0B0240:
    ctx->pc = 0x7F0B0240u;
    ctx->downcount -= 8;
    // 7F0B0240: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B0244:
    ctx->pc = 0x7F0B0244u;
    // 7F0B0244: addi    r3, r31, 1200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1200);

label_7F0B0248:
    ctx->pc = 0x7F0B0248u;
    // 7F0B0248: addi    r5, r4, -5156
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5156);

label_7F0B024C:
    ctx->pc = 0x7F0B024Cu;
    // 7F0B024C: addi    r4, r31, 1476
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1476);

label_7F0B0250:
    ctx->pc = 0x7F0B0250u;
    // 7F0B0250: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0250u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B0254:
    ctx->pc = 0x7F0B0254u;
    // 7F0B0254: addi    r5, r31, 1468
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(1468);

label_7F0B0258:
    ctx->pc = 0x7F0B0258u;
    // 7F0B0258: addi    r6, r31, 1484
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(1484);

label_7F0B025C:
    ctx->pc = 0x7F0B025Cu;
    // 7F0B025C: bl      0x7F0B8AE4
    {
            ctx->lr = 0x7F0B0260u;
            ctx->pc = 0x7F0B8AE4u;
            return;
    }

label_7F0B0260:
    ctx->pc = 0x7F0B0260u;
    ctx->downcount -= 1;
    // 7F0B0260: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0264:
    ctx->pc = 0x7F0B0264u;
    ctx->downcount -= 16;
    // 7F0B0264: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B0268:
    ctx->pc = 0x7F0B0268u;
    // 7F0B0268: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B026C:
    ctx->pc = 0x7F0B026Cu;
    // 7F0B026C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B0270:
    ctx->pc = 0x7F0B0270u;
    // 7F0B0270: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B0274:
    ctx->pc = 0x7F0B0274u;
    // 7F0B0274: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B0278:
    ctx->pc = 0x7F0B0278u;
    ctx->downcount -= 6;
    // 7F0B0278: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B027C:
    ctx->pc = 0x7F0B027Cu;
    // 7F0B027C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B0280:
    ctx->pc = 0x7F0B0280u;
    // 7F0B0280: cmpwi   r3, 0
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

label_7F0B0284:
    ctx->pc = 0x7F0B0284u;
    // 7F0B0284: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0288:
    ctx->pc = 0x7F0B0288u;
    // 7F0B0288: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B028C:
    ctx->pc = 0x7F0B028Cu;
    // 7F0B028C: bc    12, 2, 0x7F0B02A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B02A8;
        }
    }

label_7F0B0290:
    ctx->pc = 0x7F0B0290u;
    ctx->downcount -= 6;
    // 7F0B0290: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B0294:
    ctx->pc = 0x7F0B0294u;
    // 7F0B0294: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0298:
    ctx->pc = 0x7F0B0298u;
    // 7F0B0298: sth     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F0B029C:
    ctx->pc = 0x7F0B029Cu;
    // 7F0B029C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0B02A0:
    ctx->pc = 0x7F0B02A0u;
    // 7F0B02A0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B02A4:
    ctx->pc = 0x7F0B02A4u;
    // 7F0B02A4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0B02A8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0B02A8:
    ctx->pc = 0x7F0B02A8u;
    ctx->downcount -= 5;
    // 7F0B02A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B02AC:
    ctx->pc = 0x7F0B02ACu;
    // 7F0B02AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B02B0:
    ctx->pc = 0x7F0B02B0u;
    // 7F0B02B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B02B4:
    ctx->pc = 0x7F0B02B4u;
    // 7F0B02B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B02B8:
    ctx->pc = 0x7F0B02B8u;
    ctx->downcount -= 8;
    // 7F0B02B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B02BC:
    ctx->pc = 0x7F0B02BCu;
    // 7F0B02BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B02C0:
    ctx->pc = 0x7F0B02C0u;
    // 7F0B02C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B02C4:
    ctx->pc = 0x7F0B02C4u;
    // 7F0B02C4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B02C8:
    ctx->pc = 0x7F0B02C8u;
    // 7F0B02C8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B02CC:
    ctx->pc = 0x7F0B02CCu;
    // 7F0B02CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B02D0:
    ctx->pc = 0x7F0B02D0u;
    // 7F0B02D0: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B02D4:
    ctx->pc = 0x7F0B02D4u;
    // 7F0B02D4: bl      0x7F3C9624
    {
            ctx->lr = 0x7F0B02D8u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F0B02D8:
    ctx->pc = 0x7F0B02D8u;
    ctx->downcount -= 6;
    // 7F0B02D8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B02DC:
    ctx->pc = 0x7F0B02DCu;
    // 7F0B02DC: addi    r4, r4, -9981
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9981);

label_7F0B02E0:
    ctx->pc = 0x7F0B02E0u;
    // 7F0B02E0: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F0B02E4:
    ctx->pc = 0x7F0B02E4u;
    // 7F0B02E4: cmpwi   r3, 0
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

label_7F0B02E8:
    ctx->pc = 0x7F0B02E8u;
    // 7F0B02E8: bc    4, 1, 0x7F0B03A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B03A0;
        }
    }

label_7F0B02EC:
    ctx->pc = 0x7F0B02ECu;
    ctx->downcount -= 5;
    // 7F0B02EC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B02F0:
    ctx->pc = 0x7F0B02F0u;
    // 7F0B02F0: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B02F4:
    ctx->pc = 0x7F0B02F4u;
    // 7F0B02F4: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B02F8:
    // 7F0B02F8: cmpw    r5, r4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B02FC:
    // 7F0B02FC: bc    12, 2, 0x7F0B0388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0388;
        }
    }

label_7F0B0300:
    ctx->downcount -= 1;
    // 7F0B0300: bc    4, 0, 0x7F0B0338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0338;
        }
    }

label_7F0B0304:
    ctx->downcount -= 4;
    // 7F0B0304: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F0B0308:
    // 7F0B0308: addi    r0, r3, -21092
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21092);

label_7F0B030C:
    // 7F0B030C: cmpw    r5, r0
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

label_7F0B0310:
    // 7F0B0310: bc    12, 2, 0x7F0B0380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0380;
        }
    }

label_7F0B0314:
    ctx->downcount -= 1;
    // 7F0B0314: bc    4, 0, 0x7F0B0328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0328;
        }
    }

label_7F0B0318:
    ctx->downcount -= 3;
    // 7F0B0318: addi    r0, r3, -30258
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30258);

label_7F0B031C:
    // 7F0B031C: cmpw    r5, r0
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

label_7F0B0320:
    // 7F0B0320: bc    12, 2, 0x7F0B0378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0378;
        }
    }

label_7F0B0324:
    ctx->downcount -= 1;
    // 7F0B0324: b       0x7F0B0390
    {
            goto label_7F0B0390;
    }

label_7F0B0328:
    ctx->downcount -= 3;
    // 7F0B0328: addi    r0, r3, -19284
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-19284);

label_7F0B032C:
    // 7F0B032C: cmpw    r5, r0
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

label_7F0B0330:
    // 7F0B0330: bc    12, 2, 0x7F0B0370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0370;
        }
    }

label_7F0B0334:
    ctx->downcount -= 1;
    // 7F0B0334: b       0x7F0B0390
    {
            goto label_7F0B0390;
    }

label_7F0B0338:
    ctx->downcount -= 4;
    // 7F0B0338: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F0B033C:
    // 7F0B033C: addi    r0, r3, -5612
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5612);

label_7F0B0340:
    // 7F0B0340: cmpw    r5, r0
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

label_7F0B0344:
    // 7F0B0344: bc    12, 2, 0x7F0B035C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B035C;
        }
    }

label_7F0B0348:
    ctx->downcount -= 1;
    // 7F0B0348: bc    4, 0, 0x7F0B0390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0390;
        }
    }

label_7F0B034C:
    ctx->downcount -= 3;
    // 7F0B034C: addi    r0, r3, -8654
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8654);

label_7F0B0350:
    // 7F0B0350: cmpw    r5, r0
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

label_7F0B0354:
    // 7F0B0354: bc    12, 2, 0x7F0B0368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0368;
        }
    }

label_7F0B0358:
    ctx->downcount -= 1;
    // 7F0B0358: b       0x7F0B0390
    {
            goto label_7F0B0390;
    }

label_7F0B035C:
    ctx->downcount -= 3;
    // 7F0B035C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B0360:
    ctx->pc = 0x7F0B0360u;
    // 7F0B0360: stw     r0, 2044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0364:
    // 7F0B0364: b       0x7F0B0390
    {
            goto label_7F0B0390;
    }

label_7F0B0368:
    ctx->downcount -= 2;
    // 7F0B0368: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B036C:
    // 7F0B036C: b       0x7F0B03A4
    {
            goto label_7F0B03A4;
    }

label_7F0B0370:
    ctx->downcount -= 2;
    // 7F0B0370: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0B0374:
    // 7F0B0374: b       0x7F0B03A4
    {
            goto label_7F0B03A4;
    }

label_7F0B0378:
    ctx->downcount -= 2;
    // 7F0B0378: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F0B037C:
    // 7F0B037C: b       0x7F0B03A4
    {
            goto label_7F0B03A4;
    }

label_7F0B0380:
    ctx->downcount -= 2;
    // 7F0B0380: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0B0384:
    // 7F0B0384: b       0x7F0B03A4
    {
            goto label_7F0B03A4;
    }

label_7F0B0388:
    ctx->downcount -= 2;
    // 7F0B0388: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0B038C:
    // 7F0B038C: b       0x7F0B03A4
    {
            goto label_7F0B03A4;
    }

label_7F0B0390:
    ctx->pc = 0x7F0B0390u;
    ctx->downcount -= 4;
    // 7F0B0390: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0394:
    // 7F0B0394: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F0B0398:
    ctx->pc = 0x7F0B0398u;
    // 7F0B0398: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B039C:
    // 7F0B039C: bc    16, 0, 0x7F0B02EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B02ECu;
                return;
            }
            goto label_7F0B02EC;
        }
    }

label_7F0B03A0:
    ctx->pc = 0x7F0B03A0u;
    ctx->downcount -= 1;
    // 7F0B03A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B03A4:
    ctx->pc = 0x7F0B03A4u;
    ctx->downcount -= 6;
    // 7F0B03A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B03A8:
    ctx->pc = 0x7F0B03A8u;
    // 7F0B03A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B03AC:
    ctx->pc = 0x7F0B03ACu;
    // 7F0B03AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B03B0:
    ctx->pc = 0x7F0B03B0u;
    // 7F0B03B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B03B4:
    ctx->pc = 0x7F0B03B4u;
    // 7F0B03B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B03B8:
    ctx->pc = 0x7F0B03B8u;
    ctx->downcount -= 7;
    // 7F0B03B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B03BC:
    ctx->pc = 0x7F0B03BCu;
    // 7F0B03BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B03C0:
    ctx->pc = 0x7F0B03C0u;
    // 7F0B03C0: cmpwi   r4, 4
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

label_7F0B03C4:
    ctx->pc = 0x7F0B03C4u;
    // 7F0B03C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B03C8:
    ctx->pc = 0x7F0B03C8u;
    // 7F0B03C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B03CC:
    ctx->pc = 0x7F0B03CCu;
    // 7F0B03CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B03D0:
    ctx->pc = 0x7F0B03D0u;
    // 7F0B03D0: bc    12, 2, 0x7F0B0440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0440;
        }
    }

label_7F0B03D4:
    ctx->pc = 0x7F0B03D4u;
    ctx->downcount -= 1;
    // 7F0B03D4: bc    4, 0, 0x7F0B03E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B03E4;
        }
    }

label_7F0B03D8:
    ctx->pc = 0x7F0B03D8u;
    ctx->downcount -= 2;
    // 7F0B03D8: cmpwi   r4, 1
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

label_7F0B03DC:
    ctx->pc = 0x7F0B03DCu;
    // 7F0B03DC: bc    12, 2, 0x7F0B03F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B03F0;
        }
    }

label_7F0B03E0:
    ctx->pc = 0x7F0B03E0u;
    ctx->downcount -= 1;
    // 7F0B03E0: b       0x7F0B0478
    {
            goto label_7F0B0478;
    }

label_7F0B03E4:
    ctx->pc = 0x7F0B03E4u;
    ctx->downcount -= 2;
    // 7F0B03E4: cmpwi   r4, 6
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B03E8:
    ctx->pc = 0x7F0B03E8u;
    // 7F0B03E8: bc    4, 0, 0x7F0B0478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0478;
        }
    }

label_7F0B03EC:
    ctx->pc = 0x7F0B03ECu;
    ctx->downcount -= 1;
    // 7F0B03EC: b       0x7F0B0468
    {
            goto label_7F0B0468;
    }

label_7F0B03F0:
    ctx->pc = 0x7F0B03F0u;
    ctx->downcount -= 4;
    // 7F0B03F0: lis     r3, 181
    ctx->gpr[3] = ((u32)(s32)(181) << 16);

label_7F0B03F4:
    ctx->pc = 0x7F0B03F4u;
    // 7F0B03F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B03F8:
    ctx->pc = 0x7F0B03F8u;
    // 7F0B03F8: addi    r3, r3, -20716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20716);

label_7F0B03FC:
    ctx->pc = 0x7F0B03FCu;
    // 7F0B03FC: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B0400u;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B0400:
    ctx->pc = 0x7F0B0400u;
    ctx->downcount -= 4;
    // 7F0B0400: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F0B0404:
    ctx->pc = 0x7F0B0404u;
    // 7F0B0404: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0408:
    ctx->pc = 0x7F0B0408u;
    // 7F0B0408: addi    r3, r3, 16636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16636);

label_7F0B040C:
    ctx->pc = 0x7F0B040Cu;
    // 7F0B040C: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B0410u;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B0410:
    ctx->pc = 0x7F0B0410u;
    ctx->downcount -= 12;
    // 7F0B0410: lwz     r5, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0414:
    ctx->pc = 0x7F0B0414u;
    // 7F0B0414: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0418:
    ctx->pc = 0x7F0B0418u;
    // 7F0B0418: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B041C:
    ctx->pc = 0x7F0B041Cu;
    // 7F0B041C: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0420:
    ctx->pc = 0x7F0B0420u;
    // 7F0B0420: rlwinm r4, r4, 0, 20, 17
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F0B0424:
    ctx->pc = 0x7F0B0424u;
    // 7F0B0424: stw     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B0428:
    ctx->pc = 0x7F0B0428u;
    // 7F0B0428: lwz     r5, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B042C:
    ctx->pc = 0x7F0B042Cu;
    // 7F0B042C: lwz     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0430:
    ctx->pc = 0x7F0B0430u;
    // 7F0B0430: rlwinm r4, r4, 0, 20, 17
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F0B0434:
    ctx->pc = 0x7F0B0434u;
    // 7F0B0434: stw     r4, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B0438:
    ctx->pc = 0x7F0B0438u;
    // 7F0B0438: stw     r0, 29964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29964);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B043C:
    ctx->pc = 0x7F0B043Cu;
    // 7F0B043C: b       0x7F0B062C
    {
            goto label_7F0B062C;
    }

label_7F0B0440:
    ctx->pc = 0x7F0B0440u;
    ctx->downcount -= 5;
    // 7F0B0440: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0444:
    ctx->pc = 0x7F0B0444u;
    // 7F0B0444: addi    r4, r3, 29964
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29964);

label_7F0B0448:
    ctx->pc = 0x7F0B0448u;
    // 7F0B0448: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B044C:
    ctx->pc = 0x7F0B044Cu;
    // 7F0B044C: cmpwi   r0, 0
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

label_7F0B0450:
    ctx->pc = 0x7F0B0450u;
    // 7F0B0450: bc    4, 2, 0x7F0B0478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0478;
        }
    }

label_7F0B0454:
    ctx->pc = 0x7F0B0454u;
    ctx->downcount -= 5;
    // 7F0B0454: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B0458:
    ctx->pc = 0x7F0B0458u;
    // 7F0B0458: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B045C:
    ctx->pc = 0x7F0B045Cu;
    // 7F0B045C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0460:
    ctx->pc = 0x7F0B0460u;
    // 7F0B0460: stw     r0, 29960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0464:
    ctx->pc = 0x7F0B0464u;
    // 7F0B0464: b       0x7F0B0478
    {
            goto label_7F0B0478;
    }

label_7F0B0468:
    ctx->pc = 0x7F0B0468u;
    ctx->downcount -= 4;
    // 7F0B0468: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0B046C:
    ctx->pc = 0x7F0B046Cu;
    // 7F0B046C: li      r4, 1944
    ctx->gpr[4] = (u32)(s32)(1944);

label_7F0B0470:
    ctx->pc = 0x7F0B0470u;
    // 7F0B0470: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F0B0474:
    ctx->pc = 0x7F0B0474u;
    // 7F0B0474: bl      0x7F011A74
    {
            ctx->lr = 0x7F0B0478u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0B0478:
    ctx->pc = 0x7F0B0478u;
    ctx->downcount -= 4;
    // 7F0B0478: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B047C:
    ctx->pc = 0x7F0B047Cu;
    // 7F0B047C: lwz     r0, 29964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29964);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0480:
    ctx->pc = 0x7F0B0480u;
    // 7F0B0480: cmpwi   r0, 0
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

label_7F0B0484:
    ctx->pc = 0x7F0B0484u;
    // 7F0B0484: bc    12, 2, 0x7F0B062C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B062C;
        }
    }

label_7F0B0488:
    ctx->pc = 0x7F0B0488u;
    ctx->downcount -= 6;
    // 7F0B0488: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B048C:
    ctx->pc = 0x7F0B048Cu;
    // 7F0B048C: addi    r4, r3, 29956
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29956);

label_7F0B0490:
    ctx->pc = 0x7F0B0490u;
    // 7F0B0490: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0494:
    ctx->pc = 0x7F0B0494u;
    // 7F0B0494: addic.  r0, r3, -1
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

label_7F0B0498:
    ctx->pc = 0x7F0B0498u;
    // 7F0B0498: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B049C:
    ctx->pc = 0x7F0B049Cu;
    // 7F0B049C: bc    12, 1, 0x7F0B04E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B04E4;
        }
    }

label_7F0B04A0:
    ctx->pc = 0x7F0B04A0u;
    ctx->downcount -= 6;
    // 7F0B04A0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B04A4:
    ctx->pc = 0x7F0B04A4u;
    // 7F0B04A4: lwzu     r0, 29960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29960);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0B04A8:
    ctx->pc = 0x7F0B04A8u;
    // 7F0B04A8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F0B04AC:
    ctx->pc = 0x7F0B04ACu;
    // 7F0B04AC: cmpwi   r0, 0
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

label_7F0B04B0:
    ctx->pc = 0x7F0B04B0u;
    // 7F0B04B0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B04B4:
    ctx->pc = 0x7F0B04B4u;
    // 7F0B04B4: bc    12, 2, 0x7F0B04D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B04D0;
        }
    }

label_7F0B04B8:
    ctx->pc = 0x7F0B04B8u;
    ctx->downcount -= 1;
    // 7F0B04B8: bl      0x7F0B1A38
    {
            ctx->lr = 0x7F0B04BCu;
            goto label_7F0B1A38;
    }

label_7F0B04BC:
    ctx->pc = 0x7F0B04BCu;
    ctx->downcount -= 5;
    // 7F0B04BC: andi.   r4, r3, 0x0005
    {
        ctx->gpr[4] = ctx->gpr[3] & 0x0005u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B04C0:
    ctx->pc = 0x7F0B04C0u;
    // 7F0B04C0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B04C4:
    ctx->pc = 0x7F0B04C4u;
    // 7F0B04C4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0B04C8:
    ctx->pc = 0x7F0B04C8u;
    // 7F0B04C8: stw     r0, 29956(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B04CC:
    ctx->pc = 0x7F0B04CCu;
    // 7F0B04CC: b       0x7F0B04E4
    {
            goto label_7F0B04E4;
    }

label_7F0B04D0:
    ctx->pc = 0x7F0B04D0u;
    ctx->downcount -= 1;
    // 7F0B04D0: bl      0x7F0B1A38
    {
            ctx->lr = 0x7F0B04D4u;
            goto label_7F0B1A38;
    }

label_7F0B04D4:
    ctx->pc = 0x7F0B04D4u;
    ctx->downcount -= 4;
    // 7F0B04D4: rlwinm r4, r3, 0, 29, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000007u;
    }

label_7F0B04D8:
    ctx->pc = 0x7F0B04D8u;
    // 7F0B04D8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B04DC:
    ctx->pc = 0x7F0B04DCu;
    // 7F0B04DC: addi    r0, r4, 20
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20);

label_7F0B04E0:
    ctx->pc = 0x7F0B04E0u;
    // 7F0B04E0: stw     r0, 29956(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B04E4:
    ctx->pc = 0x7F0B04E4u;
    ctx->downcount -= 4;
    // 7F0B04E4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B04E8:
    ctx->pc = 0x7F0B04E8u;
    // 7F0B04E8: lwz     r0, 29952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29952);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B04EC:
    ctx->pc = 0x7F0B04ECu;
    // 7F0B04EC: cmpwi   r0, 0
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

label_7F0B04F0:
    ctx->pc = 0x7F0B04F0u;
    // 7F0B04F0: bc    4, 2, 0x7F0B0598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0598;
        }
    }

label_7F0B04F4:
    ctx->pc = 0x7F0B04F4u;
    ctx->downcount -= 8;
    // 7F0B04F4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B04F8:
    ctx->pc = 0x7F0B04F8u;
    // 7F0B04F8: lwz     r3, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B04FC:
    ctx->pc = 0x7F0B04FCu;
    // 7F0B04FC: addi    r5, r4, -5144
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5144);

label_7F0B0500:
    ctx->pc = 0x7F0B0500u;
    // 7F0B0500: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0504:
    ctx->pc = 0x7F0B0504u;
    // 7F0B0504: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0504u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B0508:
    ctx->pc = 0x7F0B0508u;
    // 7F0B0508: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B050C:
    ctx->pc = 0x7F0B050Cu;
    // 7F0B050C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B0510:
    ctx->pc = 0x7F0B0510u;
    // 7F0B0510: bl      0x7F0B1144
    {
            ctx->lr = 0x7F0B0514u;
            goto label_7F0B1144;
    }

label_7F0B0514:
    ctx->pc = 0x7F0B0514u;
    ctx->downcount -= 8;
    // 7F0B0514: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B0518:
    ctx->pc = 0x7F0B0518u;
    // 7F0B0518: lwz     r3, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B051C:
    ctx->pc = 0x7F0B051Cu;
    // 7F0B051C: addi    r5, r4, -5144
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5144);

label_7F0B0520:
    ctx->pc = 0x7F0B0520u;
    // 7F0B0520: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0524:
    ctx->pc = 0x7F0B0524u;
    // 7F0B0524: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0524u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B0528:
    ctx->pc = 0x7F0B0528u;
    // 7F0B0528: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B052C:
    ctx->pc = 0x7F0B052Cu;
    // 7F0B052C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B0530:
    ctx->pc = 0x7F0B0530u;
    // 7F0B0530: bl      0x7F0B1144
    {
            ctx->lr = 0x7F0B0534u;
            goto label_7F0B1144;
    }

label_7F0B0534:
    ctx->pc = 0x7F0B0534u;
    ctx->downcount -= 15;
    // 7F0B0534: lwz     r7, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B0538:
    ctx->pc = 0x7F0B0538u;
    // 7F0B0538: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B053C:
    ctx->pc = 0x7F0B053Cu;
    // 7F0B053C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B0540:
    ctx->pc = 0x7F0B0540u;
    // 7F0B0540: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0544:
    ctx->pc = 0x7F0B0544u;
    // 7F0B0544: lwz     r6, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0548:
    ctx->pc = 0x7F0B0548u;
    // 7F0B0548: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B054C:
    ctx->pc = 0x7F0B054Cu;
    // 7F0B054C: rlwinm r6, r6, 0, 20, 17
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFCFFFu;
    }

label_7F0B0550:
    ctx->pc = 0x7F0B0550u;
    // 7F0B0550: stw     r6, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B0554:
    ctx->pc = 0x7F0B0554u;
    // 7F0B0554: lwz     r7, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B0558:
    ctx->pc = 0x7F0B0558u;
    // 7F0B0558: lwz     r6, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B055C:
    ctx->pc = 0x7F0B055Cu;
    // 7F0B055C: rlwinm r6, r6, 0, 20, 17
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFCFFFu;
    }

label_7F0B0560:
    ctx->pc = 0x7F0B0560u;
    // 7F0B0560: stw     r6, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B0564:
    ctx->pc = 0x7F0B0564u;
    // 7F0B0564: stw     r0, 29952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0568:
    ctx->pc = 0x7F0B0568u;
    // 7F0B0568: lwz     r3, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B056C:
    ctx->pc = 0x7F0B056Cu;
    // 7F0B056C: bl      0x80051BB0
    {
            ctx->lr = 0x7F0B0570u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0B0570:
    ctx->pc = 0x7F0B0570u;
    ctx->downcount -= 2;
    // 7F0B0570: cmpwi   r3, 0
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

label_7F0B0574:
    ctx->pc = 0x7F0B0574u;
    // 7F0B0574: bc    4, 2, 0x7F0B062C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B062C;
        }
    }

label_7F0B0578:
    ctx->pc = 0x7F0B0578u;
    ctx->downcount -= 6;
    // 7F0B0578: li      r3, 2225
    ctx->gpr[3] = (u32)(s32)(2225);

label_7F0B057C:
    ctx->pc = 0x7F0B057Cu;
    // 7F0B057C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F0B0580:
    ctx->pc = 0x7F0B0580u;
    // 7F0B0580: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B0584:
    ctx->pc = 0x7F0B0584u;
    // 7F0B0584: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_7F0B0588:
    ctx->pc = 0x7F0B0588u;
    // 7F0B0588: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B058C:
    ctx->pc = 0x7F0B058Cu;
    // 7F0B058C: bl      0x7F011848
    {
            ctx->lr = 0x7F0B0590u;
            ctx->pc = 0x7F011848u;
            return;
    }

label_7F0B0590:
    ctx->pc = 0x7F0B0590u;
    ctx->downcount -= 2;
    // 7F0B0590: stw     r3, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0594:
    ctx->pc = 0x7F0B0594u;
    // 7F0B0594: b       0x7F0B062C
    {
            goto label_7F0B062C;
    }

label_7F0B0598:
    ctx->pc = 0x7F0B0598u;
    ctx->downcount -= 4;
    // 7F0B0598: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B059C:
    ctx->pc = 0x7F0B059Cu;
    // 7F0B059C: lwz     r0, 29960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29960);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B05A0:
    ctx->pc = 0x7F0B05A0u;
    // 7F0B05A0: cmpwi   r0, 0
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

label_7F0B05A4:
    ctx->pc = 0x7F0B05A4u;
    // 7F0B05A4: bc    12, 2, 0x7F0B05EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B05EC;
        }
    }

label_7F0B05A8:
    ctx->pc = 0x7F0B05A8u;
    ctx->downcount -= 4;
    // 7F0B05A8: lis     r3, 181
    ctx->gpr[3] = ((u32)(s32)(181) << 16);

label_7F0B05AC:
    ctx->pc = 0x7F0B05ACu;
    // 7F0B05AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B05B0:
    ctx->pc = 0x7F0B05B0u;
    // 7F0B05B0: addi    r3, r3, -20716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20716);

label_7F0B05B4:
    ctx->pc = 0x7F0B05B4u;
    // 7F0B05B4: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B05B8u;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B05B8:
    ctx->pc = 0x7F0B05B8u;
    ctx->downcount -= 4;
    // 7F0B05B8: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F0B05BC:
    ctx->pc = 0x7F0B05BCu;
    // 7F0B05BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B05C0:
    ctx->pc = 0x7F0B05C0u;
    // 7F0B05C0: addi    r3, r3, 16636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16636);

label_7F0B05C4:
    ctx->pc = 0x7F0B05C4u;
    // 7F0B05C4: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B05C8u;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B05C8:
    ctx->pc = 0x7F0B05C8u;
    ctx->downcount -= 9;
    // 7F0B05C8: lwz     r3, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B05CC:
    ctx->pc = 0x7F0B05CCu;
    // 7F0B05CC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B05D0:
    ctx->pc = 0x7F0B05D0u;
    // 7F0B05D0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0B05D4:
    ctx->pc = 0x7F0B05D4u;
    // 7F0B05D4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B05D8:
    ctx->pc = 0x7F0B05D8u;
    // 7F0B05D8: lwz     r3, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B05DC:
    ctx->pc = 0x7F0B05DCu;
    // 7F0B05DC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B05E0:
    ctx->pc = 0x7F0B05E0u;
    // 7F0B05E0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0B05E4:
    ctx->pc = 0x7F0B05E4u;
    // 7F0B05E4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B05E8:
    ctx->pc = 0x7F0B05E8u;
    // 7F0B05E8: b       0x7F0B062C
    {
            goto label_7F0B062C;
    }

label_7F0B05EC:
    ctx->pc = 0x7F0B05ECu;
    ctx->downcount -= 4;
    // 7F0B05EC: lis     r3, 181
    ctx->gpr[3] = ((u32)(s32)(181) << 16);

label_7F0B05F0:
    ctx->pc = 0x7F0B05F0u;
    // 7F0B05F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B05F4:
    ctx->pc = 0x7F0B05F4u;
    // 7F0B05F4: addi    r3, r3, -20716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20716);

label_7F0B05F8:
    ctx->pc = 0x7F0B05F8u;
    // 7F0B05F8: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B05FCu;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B05FC:
    ctx->pc = 0x7F0B05FCu;
    ctx->downcount -= 4;
    // 7F0B05FC: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F0B0600:
    ctx->pc = 0x7F0B0600u;
    // 7F0B0600: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B0604:
    ctx->pc = 0x7F0B0604u;
    // 7F0B0604: addi    r3, r3, 16636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16636);

label_7F0B0608:
    ctx->pc = 0x7F0B0608u;
    // 7F0B0608: bl      0x7F34A090
    {
            ctx->lr = 0x7F0B060Cu;
            ctx->pc = 0x7F34A090u;
            return;
    }

label_7F0B060C:
    ctx->pc = 0x7F0B060Cu;
    ctx->downcount -= 8;
    // 7F0B060C: lwz     r3, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0610:
    ctx->pc = 0x7F0B0610u;
    // 7F0B0610: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0614:
    ctx->pc = 0x7F0B0614u;
    // 7F0B0614: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B0618:
    ctx->pc = 0x7F0B0618u;
    // 7F0B0618: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B061C:
    ctx->pc = 0x7F0B061Cu;
    // 7F0B061C: lwz     r3, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0620:
    ctx->pc = 0x7F0B0620u;
    // 7F0B0620: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0624:
    ctx->pc = 0x7F0B0624u;
    // 7F0B0624: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B0628:
    ctx->pc = 0x7F0B0628u;
    // 7F0B0628: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B062C:
    ctx->pc = 0x7F0B062Cu;
    ctx->downcount -= 6;
    // 7F0B062C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0630:
    ctx->pc = 0x7F0B0630u;
    // 7F0B0630: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B0634:
    ctx->pc = 0x7F0B0634u;
    // 7F0B0634: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B0638:
    ctx->pc = 0x7F0B0638u;
    // 7F0B0638: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B063C:
    ctx->pc = 0x7F0B063Cu;
    // 7F0B063C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B0640:
    ctx->pc = 0x7F0B0640u;
    ctx->downcount -= 20;
    // 7F0B0640: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B0644:
    ctx->pc = 0x7F0B0644u;
    // 7F0B0644: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B0648:
    ctx->pc = 0x7F0B0648u;
    // 7F0B0648: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B064C:
    ctx->pc = 0x7F0B064Cu;
    // 7F0B064C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0650:
    ctx->pc = 0x7F0B0650u;
    // 7F0B0650: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B0654:
    ctx->pc = 0x7F0B0654u;
    // 7F0B0654: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B0658:
    ctx->pc = 0x7F0B0658u;
    // 7F0B0658: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B065C:
    ctx->pc = 0x7F0B065Cu;
    // 7F0B065C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0660:
    ctx->pc = 0x7F0B0660u;
    // 7F0B0660: lwz     r3, 1932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1932);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0664:
    ctx->pc = 0x7F0B0664u;
    // 7F0B0664: bl      0x80051BB0
    {
            ctx->lr = 0x7F0B0668u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0B0668:
    ctx->pc = 0x7F0B0668u;
    ctx->downcount -= 2;
    // 7F0B0668: cmpwi   r3, 0
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

label_7F0B066C:
    ctx->pc = 0x7F0B066Cu;
    // 7F0B066C: bc    4, 2, 0x7F0B06E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B06E0;
        }
    }

label_7F0B0670:
    ctx->pc = 0x7F0B0670u;
    ctx->downcount -= 22;
    // 7F0B0670: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0670u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0674:
    ctx->pc = 0x7F0B0674u;
    // 7F0B0674: rlwinm r31, r31, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F0B0678:
    ctx->pc = 0x7F0B0678u;
    // 7F0B0678: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F0B067C:
    ctx->pc = 0x7F0B067Cu;
    // 7F0B067C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B0680:
    ctx->pc = 0x7F0B0680u;
    // 7F0B0680: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0684:
    ctx->pc = 0x7F0B0684u;
    // 7F0B0684: add   r3, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0B0688:
    ctx->pc = 0x7F0B0688u;
    // 7F0B0688: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B068C:
    ctx->pc = 0x7F0B068Cu;
    // 7F0B068C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0B0690:
    ctx->pc = 0x7F0B0690u;
    // 7F0B0690: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0690u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0694:
    ctx->pc = 0x7F0B0694u;
    // 7F0B0694: li      r6, 30000
    ctx->gpr[6] = (u32)(s32)(30000);

label_7F0B0698:
    ctx->pc = 0x7F0B0698u;
    // 7F0B0698: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B069C:
    ctx->pc = 0x7F0B069Cu;
    // 7F0B069C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B06A0:
    ctx->pc = 0x7F0B06A0u;
    // 7F0B06A0: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B06A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B06A4:
    ctx->pc = 0x7F0B06A4u;
    // 7F0B06A4: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F0B06A8:
    ctx->pc = 0x7F0B06A8u;
    // 7F0B06A8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B06AC:
    ctx->pc = 0x7F0B06ACu;
    // 7F0B06AC: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B06ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B06B0:
    ctx->pc = 0x7F0B06B0u;
    // 7F0B06B0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B06B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B06B4:
    ctx->pc = 0x7F0B06B4u;
    // 7F0B06B4: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0B06B8:
    ctx->pc = 0x7F0B06B8u;
    // 7F0B06B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B06BC:
    ctx->pc = 0x7F0B06BCu;
    // 7F0B06BC: lwz     r0, 1988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B06C0:
    ctx->pc = 0x7F0B06C0u;
    // 7F0B06C0: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0B06C4:
    ctx->pc = 0x7F0B06C4u;
    // 7F0B06C4: bl      0x800501FC
    {
            ctx->lr = 0x7F0B06C8u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0B06C8:
    ctx->pc = 0x7F0B06C8u;
    ctx->downcount -= 6;
    // 7F0B06C8: stw     r3, 1932(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1932);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B06CC:
    ctx->pc = 0x7F0B06CCu;
    // 7F0B06CC: add   r3, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0B06D0:
    ctx->pc = 0x7F0B06D0u;
    // 7F0B06D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B06D4:
    ctx->pc = 0x7F0B06D4u;
    // 7F0B06D4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0B06D8:
    ctx->pc = 0x7F0B06D8u;
    // 7F0B06D8: lwz     r3, 1936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B06DC:
    ctx->pc = 0x7F0B06DCu;
    // 7F0B06DC: bl      0x7F017DC4
    {
            ctx->lr = 0x7F0B06E0u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F0B06E0:
    ctx->pc = 0x7F0B06E0u;
    ctx->downcount -= 16;
    // 7F0B06E0: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B06E4:
    ctx->pc = 0x7F0B06E4u;
    // 7F0B06E4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B06E8:
    ctx->pc = 0x7F0B06E8u;
    // 7F0B06E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B06EC:
    ctx->pc = 0x7F0B06ECu;
    // 7F0B06EC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B06F0:
    ctx->pc = 0x7F0B06F0u;
    // 7F0B06F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B06F4:
    ctx->pc = 0x7F0B06F4u;
    ctx->downcount -= 20;
    // 7F0B06F4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B06F8:
    ctx->pc = 0x7F0B06F8u;
    // 7F0B06F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B06FC:
    ctx->pc = 0x7F0B06FCu;
    // 7F0B06FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B0700:
    ctx->pc = 0x7F0B0700u;
    // 7F0B0700: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0704:
    ctx->pc = 0x7F0B0704u;
    // 7F0B0704: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B0708:
    ctx->pc = 0x7F0B0708u;
    // 7F0B0708: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B070C:
    ctx->pc = 0x7F0B070Cu;
    // 7F0B070C: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0B0710:
    ctx->pc = 0x7F0B0710u;
    // 7F0B0710: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0714:
    ctx->pc = 0x7F0B0714u;
    // 7F0B0714: stw     r0, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0718:
    ctx->pc = 0x7F0B0718u;
    // 7F0B0718: bl      0x7F0B02B8
    {
            ctx->lr = 0x7F0B071Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B02B8u;
                return;
            }
            goto label_7F0B02B8;
    }

label_7F0B071C:
    ctx->pc = 0x7F0B071Cu;
    ctx->downcount -= 7;
    // 7F0B071C: lwz     r4, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0720:
    ctx->pc = 0x7F0B0720u;
    // 7F0B0720: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B0724:
    ctx->pc = 0x7F0B0724u;
    // 7F0B0724: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0B0728:
    ctx->pc = 0x7F0B0728u;
    // 7F0B0728: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B072C:
    ctx->pc = 0x7F0B072Cu;
    // 7F0B072C: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0730:
    ctx->pc = 0x7F0B0730u;
    // 7F0B0730: cmpwi   r0, 0
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

label_7F0B0734:
    ctx->pc = 0x7F0B0734u;
    // 7F0B0734: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0738:
    ctx->pc = 0x7F0B0738u;
    ctx->downcount -= 3;
    // 7F0B0738: lwz     r0, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B073C:
    ctx->pc = 0x7F0B073Cu;
    // 7F0B073C: cmpwi   r0, 2
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

label_7F0B0740:
    ctx->pc = 0x7F0B0740u;
    // 7F0B0740: bc    12, 2, 0x7F0B07FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B07FC;
        }
    }

label_7F0B0744:
    ctx->pc = 0x7F0B0744u;
    ctx->downcount -= 1;
    // 7F0B0744: bc    4, 0, 0x7F0B0754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0754;
        }
    }

label_7F0B0748:
    ctx->pc = 0x7F0B0748u;
    ctx->downcount -= 2;
    // 7F0B0748: cmpwi   r0, 0
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

label_7F0B074C:
    ctx->pc = 0x7F0B074Cu;
    // 7F0B074C: bc    12, 2, 0x7F0B0764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0764;
        }
    }

label_7F0B0750:
    ctx->pc = 0x7F0B0750u;
    ctx->downcount -= 1;
    // 7F0B0750: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0754:
    ctx->pc = 0x7F0B0754u;
    ctx->downcount -= 2;
    // 7F0B0754: cmpwi   r0, 4
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

label_7F0B0758:
    ctx->pc = 0x7F0B0758u;
    // 7F0B0758: bc    12, 2, 0x7F0B0B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B80;
        }
    }

label_7F0B075C:
    ctx->pc = 0x7F0B075Cu;
    ctx->downcount -= 1;
    // 7F0B075C: bc    4, 0, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0760:
    ctx->pc = 0x7F0B0760u;
    ctx->downcount -= 1;
    // 7F0B0760: b       0x7F0B096C
    {
            goto label_7F0B096C;
    }

label_7F0B0764:
    ctx->pc = 0x7F0B0764u;
    ctx->downcount -= 1;
    // 7F0B0764: bl      0x7F0B19DC
    {
            ctx->lr = 0x7F0B0768u;
            goto label_7F0B19DC;
    }

label_7F0B0768:
    ctx->pc = 0x7F0B0768u;
    ctx->downcount -= 2;
    // 7F0B0768: cmpwi   r3, 0
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

label_7F0B076C:
    ctx->pc = 0x7F0B076Cu;
    // 7F0B076C: bc    4, 2, 0x7F0B07EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B07EC;
        }
    }

label_7F0B0770:
    ctx->pc = 0x7F0B0770u;
    ctx->downcount -= 9;
    // 7F0B0770: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0774:
    ctx->pc = 0x7F0B0774u;
    // 7F0B0774: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F0B0778:
    ctx->pc = 0x7F0B0778u;
    // 7F0B0778: addi    r4, r3, 29944
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29944);

label_7F0B077C:
    ctx->pc = 0x7F0B077Cu;
    // 7F0B077C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0780:
    ctx->pc = 0x7F0B0780u;
    // 7F0B0780: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0784:
    ctx->pc = 0x7F0B0784u;
    // 7F0B0784: lwz     r4, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0788:
    ctx->pc = 0x7F0B0788u;
    // 7F0B0788: lwz     r5, 1912(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1912);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B078C:
    ctx->pc = 0x7F0B078Cu;
    // 7F0B078C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0B0790:
    ctx->pc = 0x7F0B0790u;
    // 7F0B0790: bl      0x7F0AEFE0
    {
            ctx->lr = 0x7F0B0794u;
            ctx->pc = 0x7F0AEFE0u;
            return;
    }

label_7F0B0794:
    ctx->pc = 0x7F0B0794u;
    ctx->downcount -= 18;
    // 7F0B0794: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B0798:
    ctx->pc = 0x7F0B0798u;
    // 7F0B0798: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B079C:
    ctx->pc = 0x7F0B079Cu;
    // 7F0B079C: addi    r8, r4, 29944
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(29944);

label_7F0B07A0:
    ctx->pc = 0x7F0B07A0u;
    // 7F0B07A0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B07A4:
    ctx->pc = 0x7F0B07A4u;
    // 7F0B07A4: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B07A8:
    ctx->pc = 0x7F0B07A8u;
    // 7F0B07A8: lis     r3, 129
    ctx->gpr[3] = ((u32)(s32)(129) << 16);

label_7F0B07AC:
    ctx->pc = 0x7F0B07ACu;
    // 7F0B07AC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F0B07B0:
    ctx->pc = 0x7F0B07B0u;
    // 7F0B07B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B07B4:
    ctx->pc = 0x7F0B07B4u;
    // 7F0B07B4: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_7F0B07B8:
    ctx->pc = 0x7F0B07B8u;
    // 7F0B07B8: addi    r5, r4, 29940
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29940);

label_7F0B07BC:
    ctx->pc = 0x7F0B07BCu;
    // 7F0B07BC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B07C0:
    ctx->pc = 0x7F0B07C0u;
    // 7F0B07C0: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F0B07C4:
    ctx->pc = 0x7F0B07C4u;
    // 7F0B07C4: addi    r4, r3, 3663
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3663);

label_7F0B07C8:
    ctx->pc = 0x7F0B07C8u;
    // 7F0B07C8: stw     r7, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B07CC:
    ctx->pc = 0x7F0B07CCu;
    // 7F0B07CC: stw     r6, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B07D0:
    ctx->pc = 0x7F0B07D0u;
    // 7F0B07D0: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B07D4:
    ctx->pc = 0x7F0B07D4u;
    // 7F0B07D4: lwz     r3, 1920(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1920);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B07D8:
    ctx->pc = 0x7F0B07D8u;
    // 7F0B07D8: bl      0x7F0B0278
    {
            ctx->lr = 0x7F0B07DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B0278u;
                return;
            }
            goto label_7F0B0278;
    }

label_7F0B07DC:
    ctx->pc = 0x7F0B07DCu;
    ctx->downcount -= 3;
    // 7F0B07DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B07E0:
    ctx->pc = 0x7F0B07E0u;
    // 7F0B07E0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0B07E4:
    ctx->pc = 0x7F0B07E4u;
    // 7F0B07E4: bl      0x7F0B0640
    {
            ctx->lr = 0x7F0B07E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B0640u;
                return;
            }
            goto label_7F0B0640;
    }

label_7F0B07E8:
    ctx->pc = 0x7F0B07E8u;
    ctx->downcount -= 1;
    // 7F0B07E8: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B07EC:
    ctx->pc = 0x7F0B07ECu;
    ctx->downcount -= 3;
    // 7F0B07EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B07F0:
    ctx->pc = 0x7F0B07F0u;
    // 7F0B07F0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B07F4:
    ctx->pc = 0x7F0B07F4u;
    // 7F0B07F4: bl      0x7F0B03B8
    {
            ctx->lr = 0x7F0B07F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B03B8u;
                return;
            }
            goto label_7F0B03B8;
    }

label_7F0B07F8:
    ctx->pc = 0x7F0B07F8u;
    ctx->downcount -= 1;
    // 7F0B07F8: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B07FC:
    ctx->pc = 0x7F0B07FCu;
    ctx->downcount -= 6;
    // 7F0B07FC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0800:
    ctx->pc = 0x7F0B0800u;
    // 7F0B0800: lwzu     r0, 29944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29944);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0B0804:
    ctx->pc = 0x7F0B0804u;
    // 7F0B0804: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0808:
    ctx->pc = 0x7F0B0808u;
    // 7F0B0808: ori     r0, r0, 0x2000
    ctx->gpr[0] = ctx->gpr[0] | 0x2000u;

label_7F0B080C:
    ctx->pc = 0x7F0B080Cu;
    // 7F0B080C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0810:
    ctx->pc = 0x7F0B0810u;
    // 7F0B0810: bc    4, 2, 0x7F0B084C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B084C;
        }
    }

label_7F0B0814:
    ctx->pc = 0x7F0B0814u;
    ctx->downcount -= 8;
    // 7F0B0814: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F0B0818:
    ctx->pc = 0x7F0B0818u;
    // 7F0B0818: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B081C:
    ctx->pc = 0x7F0B081Cu;
    // 7F0B081C: stw     r3, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0820:
    ctx->pc = 0x7F0B0820u;
    // 7F0B0820: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0824:
    ctx->pc = 0x7F0B0824u;
    // 7F0B0824: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0828:
    ctx->pc = 0x7F0B0828u;
    // 7F0B0828: lwz     r4, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B082C:
    ctx->pc = 0x7F0B082Cu;
    // 7F0B082C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0B0830:
    ctx->pc = 0x7F0B0830u;
    // 7F0B0830: bl      0x7F0B01C8
    {
            ctx->lr = 0x7F0B0834u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B01C8u;
                return;
            }
            goto label_7F0B01C8;
    }

label_7F0B0834:
    ctx->pc = 0x7F0B0834u;
    ctx->downcount -= 6;
    // 7F0B0834: stw     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0838:
    ctx->pc = 0x7F0B0838u;
    // 7F0B0838: lwz     r3, 536(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(536);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B083C:
    ctx->pc = 0x7F0B083Cu;
    // 7F0B083C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0840:
    ctx->pc = 0x7F0B0840u;
    // 7F0B0840: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B0844:
    ctx->pc = 0x7F0B0844u;
    // 7F0B0844: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0848:
    ctx->pc = 0x7F0B0848u;
    // 7F0B0848: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B084C:
    ctx->pc = 0x7F0B084Cu;
    ctx->downcount -= 5;
    // 7F0B084C: lwz     r3, 1916(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1916);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0850:
    ctx->pc = 0x7F0B0850u;
    // 7F0B0850: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B0854:
    ctx->pc = 0x7F0B0854u;
    // 7F0B0854: cmpwi   r0, 450
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

label_7F0B0858:
    ctx->pc = 0x7F0B0858u;
    // 7F0B0858: stw     r0, 1916(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1916);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B085C:
    ctx->pc = 0x7F0B085Cu;
    // 7F0B085C: bc    4, 1, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0860:
    ctx->pc = 0x7F0B0860u;
    ctx->downcount -= 3;
    // 7F0B0860: lwz     r0, 2044(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0864:
    ctx->pc = 0x7F0B0864u;
    // 7F0B0864: cmpwi   r0, 0
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

label_7F0B0868:
    ctx->pc = 0x7F0B0868u;
    // 7F0B0868: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B086C:
    ctx->pc = 0x7F0B086Cu;
    ctx->downcount -= 8;
    // 7F0B086C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0870:
    ctx->pc = 0x7F0B0870u;
    // 7F0B0870: li      r27, -1
    ctx->gpr[27] = (u32)(s32)(-1);

label_7F0B0874:
    ctx->pc = 0x7F0B0874u;
    // 7F0B0874: stw     r4, 1916(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1916);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B0878:
    ctx->pc = 0x7F0B0878u;
    // 7F0B0878: lwz     r3, 1924(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1924);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B087C:
    ctx->pc = 0x7F0B087Cu;
    // 7F0B087C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B0880:
    ctx->pc = 0x7F0B0880u;
    // 7F0B0880: cmpwi   r3, 1
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

label_7F0B0884:
    ctx->pc = 0x7F0B0884u;
    // 7F0B0884: stw     r0, 1924(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1924);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0888:
    ctx->pc = 0x7F0B0888u;
    // 7F0B0888: bc    12, 2, 0x7F0B08B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B08B0;
        }
    }

label_7F0B088C:
    ctx->pc = 0x7F0B088Cu;
    ctx->downcount -= 1;
    // 7F0B088C: bc    4, 0, 0x7F0B089C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B089C;
        }
    }

label_7F0B0890:
    ctx->pc = 0x7F0B0890u;
    ctx->downcount -= 2;
    // 7F0B0890: cmpwi   r3, 0
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

label_7F0B0894:
    ctx->pc = 0x7F0B0894u;
    // 7F0B0894: bc    4, 0, 0x7F0B08A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B08A8;
        }
    }

label_7F0B0898:
    ctx->pc = 0x7F0B0898u;
    ctx->downcount -= 1;
    // 7F0B0898: b       0x7F0B08C0
    {
            goto label_7F0B08C0;
    }

label_7F0B089C:
    ctx->pc = 0x7F0B089Cu;
    ctx->downcount -= 2;
    // 7F0B089C: cmpwi   r3, 3
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

label_7F0B08A0:
    ctx->pc = 0x7F0B08A0u;
    // 7F0B08A0: bc    4, 0, 0x7F0B08C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B08C0;
        }
    }

label_7F0B08A4:
    ctx->pc = 0x7F0B08A4u;
    ctx->downcount -= 1;
    // 7F0B08A4: b       0x7F0B08B8
    {
            goto label_7F0B08B8;
    }

label_7F0B08A8:
    ctx->pc = 0x7F0B08A8u;
    ctx->downcount -= 2;
    // 7F0B08A8: li      r27, 7
    ctx->gpr[27] = (u32)(s32)(7);

label_7F0B08AC:
    ctx->pc = 0x7F0B08ACu;
    // 7F0B08AC: b       0x7F0B08C0
    {
            goto label_7F0B08C0;
    }

label_7F0B08B0:
    ctx->pc = 0x7F0B08B0u;
    ctx->downcount -= 2;
    // 7F0B08B0: li      r27, 8
    ctx->gpr[27] = (u32)(s32)(8);

label_7F0B08B4:
    ctx->pc = 0x7F0B08B4u;
    // 7F0B08B4: b       0x7F0B08C0
    {
            goto label_7F0B08C0;
    }

label_7F0B08B8:
    ctx->pc = 0x7F0B08B8u;
    ctx->downcount -= 2;
    // 7F0B08B8: li      r27, 9
    ctx->gpr[27] = (u32)(s32)(9);

label_7F0B08BC:
    ctx->pc = 0x7F0B08BCu;
    // 7F0B08BC: stw     r4, 1924(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1924);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B08C0:
    ctx->pc = 0x7F0B08C0u;
    ctx->downcount -= 2;
    // 7F0B08C0: cmpwi   r27, -1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B08C4:
    ctx->pc = 0x7F0B08C4u;
    // 7F0B08C4: bc    12, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B08C8:
    ctx->pc = 0x7F0B08C8u;
    ctx->downcount -= 5;
    // 7F0B08C8: rlwinm r28, r27, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_7F0B08CC:
    ctx->pc = 0x7F0B08CCu;
    // 7F0B08CC: add   r29, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0B08D0:
    ctx->pc = 0x7F0B08D0u;
    // 7F0B08D0: lwz     r0, 1988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B08D4:
    ctx->pc = 0x7F0B08D4u;
    // 7F0B08D4: cmpwi   r0, 0
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

label_7F0B08D8:
    ctx->pc = 0x7F0B08D8u;
    // 7F0B08D8: bc    12, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B08DC:
    ctx->pc = 0x7F0B08DCu;
    ctx->downcount -= 4;
    // 7F0B08DC: lwz     r3, 1932(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1932);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B08E0:
    ctx->pc = 0x7F0B08E0u;
    // 7F0B08E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B08E4:
    ctx->pc = 0x7F0B08E4u;
    // 7F0B08E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B08E8:
    ctx->pc = 0x7F0B08E8u;
    // 7F0B08E8: bl      0x80051BB0
    {
            ctx->lr = 0x7F0B08ECu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0B08EC:
    ctx->pc = 0x7F0B08ECu;
    ctx->downcount -= 2;
    // 7F0B08EC: cmpwi   r3, 0
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

label_7F0B08F0:
    ctx->pc = 0x7F0B08F0u;
    // 7F0B08F0: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B08F4:
    ctx->pc = 0x7F0B08F4u;
    ctx->downcount -= 20;
    // 7F0B08F4: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B08F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B08F8:
    ctx->pc = 0x7F0B08F8u;
    // 7F0B08F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B08FC:
    ctx->pc = 0x7F0B08FCu;
    // 7F0B08FC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B0900:
    ctx->pc = 0x7F0B0900u;
    // 7F0B0900: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F0B0904:
    ctx->pc = 0x7F0B0904u;
    // 7F0B0904: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0908:
    ctx->pc = 0x7F0B0908u;
    // 7F0B0908: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0B090C:
    ctx->pc = 0x7F0B090Cu;
    // 7F0B090C: li      r6, 30000
    ctx->gpr[6] = (u32)(s32)(30000);

label_7F0B0910:
    ctx->pc = 0x7F0B0910u;
    // 7F0B0910: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B0914:
    ctx->pc = 0x7F0B0914u;
    // 7F0B0914: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0914u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0918:
    ctx->pc = 0x7F0B0918u;
    // 7F0B0918: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B091C:
    ctx->pc = 0x7F0B091Cu;
    // 7F0B091C: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F0B0920:
    ctx->pc = 0x7F0B0920u;
    // 7F0B0920: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B0924:
    ctx->pc = 0x7F0B0924u;
    // 7F0B0924: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0928:
    ctx->pc = 0x7F0B0928u;
    // 7F0B0928: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0928u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B092C:
    ctx->pc = 0x7F0B092Cu;
    // 7F0B092C: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B092Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0930:
    ctx->pc = 0x7F0B0930u;
    // 7F0B0930: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0934:
    ctx->pc = 0x7F0B0934u;
    // 7F0B0934: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0938:
    ctx->pc = 0x7F0B0938u;
    // 7F0B0938: lwz     r0, 1988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B093C:
    ctx->pc = 0x7F0B093Cu;
    // 7F0B093C: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0B0940:
    ctx->pc = 0x7F0B0940u;
    // 7F0B0940: bl      0x800501FC
    {
            ctx->lr = 0x7F0B0944u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0B0944:
    ctx->pc = 0x7F0B0944u;
    ctx->downcount -= 3;
    // 7F0B0944: cmpwi   r27, -1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0948:
    ctx->pc = 0x7F0B0948u;
    // 7F0B0948: stw     r3, 1932(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1932);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B094C:
    ctx->pc = 0x7F0B094Cu;
    // 7F0B094C: bc    12, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0950:
    ctx->pc = 0x7F0B0950u;
    ctx->downcount -= 3;
    // 7F0B0950: lwz     r3, 1936(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0954:
    ctx->pc = 0x7F0B0954u;
    // 7F0B0954: cmpwi   r3, 0
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

label_7F0B0958:
    ctx->pc = 0x7F0B0958u;
    // 7F0B0958: bc    12, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B095C:
    ctx->pc = 0x7F0B095Cu;
    ctx->downcount -= 3;
    // 7F0B095C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0960:
    ctx->pc = 0x7F0B0960u;
    // 7F0B0960: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0B0964:
    ctx->pc = 0x7F0B0964u;
    // 7F0B0964: bl      0x7F017DC4
    {
            ctx->lr = 0x7F0B0968u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F0B0968:
    ctx->pc = 0x7F0B0968u;
    ctx->downcount -= 1;
    // 7F0B0968: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B096C:
    ctx->pc = 0x7F0B096Cu;
    ctx->downcount -= 2;
    // 7F0B096C: cmpwi   r28, 3
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

label_7F0B0970:
    ctx->pc = 0x7F0B0970u;
    // 7F0B0970: bc    4, 2, 0x7F0B097C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B097C;
        }
    }

label_7F0B0974:
    ctx->pc = 0x7F0B0974u;
    ctx->downcount -= 2;
    // 7F0B0974: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B0978:
    ctx->pc = 0x7F0B0978u;
    // 7F0B0978: stw     r0, 1908(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1908);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B097C:
    ctx->pc = 0x7F0B097Cu;
    ctx->downcount -= 3;
    // 7F0B097C: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0980:
    ctx->pc = 0x7F0B0980u;
    // 7F0B0980: cmpwi   r0, 1
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

label_7F0B0984:
    ctx->pc = 0x7F0B0984u;
    // 7F0B0984: bc    4, 2, 0x7F0B0994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0994;
        }
    }

label_7F0B0988:
    ctx->pc = 0x7F0B0988u;
    ctx->downcount -= 3;
    // 7F0B0988: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B098C:
    ctx->pc = 0x7F0B098Cu;
    // 7F0B098C: stw     r0, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0990:
    ctx->pc = 0x7F0B0990u;
    // 7F0B0990: b       0x7F0B0B54
    {
            goto label_7F0B0B54;
    }

label_7F0B0994:
    ctx->pc = 0x7F0B0994u;
    ctx->downcount -= 2;
    // 7F0B0994: cmpwi   r0, 15
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

label_7F0B0998:
    ctx->pc = 0x7F0B0998u;
    // 7F0B0998: bc    4, 0, 0x7F0B0A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0A14;
        }
    }

label_7F0B099C:
    ctx->pc = 0x7F0B099Cu;
    ctx->downcount -= 4;
    // 7F0B099C: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B09A0:
    ctx->pc = 0x7F0B09A0u;
    // 7F0B09A0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0B09A4:
    ctx->pc = 0x7F0B09A4u;
    // 7F0B09A4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F0B09A8:
    ctx->pc = 0x7F0B09A8u;
    // 7F0B09A8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B09ACu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B09AC:
    ctx->pc = 0x7F0B09ACu;
    ctx->downcount -= 5;
    // 7F0B09AC: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B09B0:
    ctx->pc = 0x7F0B09B0u;
    // 7F0B09B0: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F0B09B4:
    ctx->pc = 0x7F0B09B4u;
    // 7F0B09B4: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F0B09B8:
    ctx->pc = 0x7F0B09B8u;
    // 7F0B09B8: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B09BC:
    ctx->pc = 0x7F0B09BCu;
    // 7F0B09BC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B09C0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B09C0:
    ctx->pc = 0x7F0B09C0u;
    ctx->downcount -= 6;
    // 7F0B09C0: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B09C4:
    ctx->pc = 0x7F0B09C4u;
    // 7F0B09C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B09C8:
    ctx->pc = 0x7F0B09C8u;
    // 7F0B09C8: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B09CC:
    ctx->pc = 0x7F0B09CCu;
    // 7F0B09CC: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B09D0:
    ctx->pc = 0x7F0B09D0u;
    // 7F0B09D0: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B09D4:
    ctx->pc = 0x7F0B09D4u;
    // 7F0B09D4: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B09D8u;
            goto label_7F0B185C;
    }

label_7F0B09D8:
    ctx->pc = 0x7F0B09D8u;
    ctx->downcount -= 7;
    // 7F0B09D8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B09DC:
    ctx->pc = 0x7F0B09DCu;
    // 7F0B09DC: lwzu     r0, 29944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29944);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0B09E0:
    ctx->pc = 0x7F0B09E0u;
    // 7F0B09E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B09E4:
    ctx->pc = 0x7F0B09E4u;
    // 7F0B09E4: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F0B09E8:
    ctx->pc = 0x7F0B09E8u;
    // 7F0B09E8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B09EC:
    ctx->pc = 0x7F0B09ECu;
    // 7F0B09EC: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B09F0:
    ctx->pc = 0x7F0B09F0u;
    // 7F0B09F0: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B09F4u;
            goto label_7F0B19D8;
    }

label_7F0B09F4:
    ctx->pc = 0x7F0B09F4u;
    ctx->downcount -= 3;
    // 7F0B09F4: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B09F8:
    ctx->pc = 0x7F0B09F8u;
    // 7F0B09F8: cmpwi   r0, 2
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

label_7F0B09FC:
    ctx->pc = 0x7F0B09FCu;
    // 7F0B09FC: bc    4, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0A00:
    ctx->pc = 0x7F0B0A00u;
    ctx->downcount -= 4;
    // 7F0B0A00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0A04:
    ctx->pc = 0x7F0B0A04u;
    // 7F0B0A04: li      r4, 1954
    ctx->gpr[4] = (u32)(s32)(1954);

label_7F0B0A08:
    ctx->pc = 0x7F0B0A08u;
    // 7F0B0A08: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F0B0A0C:
    ctx->pc = 0x7F0B0A0Cu;
    // 7F0B0A0C: bl      0x7F011A74
    {
            ctx->lr = 0x7F0B0A10u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0B0A10:
    ctx->pc = 0x7F0B0A10u;
    ctx->downcount -= 1;
    // 7F0B0A10: b       0x7F0B0B54
    {
            goto label_7F0B0B54;
    }

label_7F0B0A14:
    ctx->pc = 0x7F0B0A14u;
    ctx->downcount -= 2;
    // 7F0B0A14: cmpwi   r0, 40
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

label_7F0B0A18:
    ctx->pc = 0x7F0B0A18u;
    // 7F0B0A18: bc    4, 0, 0x7F0B0A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0A50;
        }
    }

label_7F0B0A1C:
    ctx->pc = 0x7F0B0A1Cu;
    ctx->downcount -= 3;
    // 7F0B0A1C: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0A20:
    ctx->pc = 0x7F0B0A20u;
    // 7F0B0A20: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F0B0A24:
    ctx->pc = 0x7F0B0A24u;
    // 7F0B0A24: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B0A28u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B0A28:
    ctx->pc = 0x7F0B0A28u;
    ctx->downcount -= 6;
    // 7F0B0A28: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0A2C:
    ctx->pc = 0x7F0B0A2Cu;
    // 7F0B0A2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0A30:
    ctx->pc = 0x7F0B0A30u;
    // 7F0B0A30: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0A34:
    ctx->pc = 0x7F0B0A34u;
    // 7F0B0A34: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0A38:
    ctx->pc = 0x7F0B0A38u;
    // 7F0B0A38: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0A3C:
    ctx->pc = 0x7F0B0A3Cu;
    // 7F0B0A3C: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0A40u;
            goto label_7F0B185C;
    }

label_7F0B0A40:
    ctx->pc = 0x7F0B0A40u;
    ctx->downcount -= 3;
    // 7F0B0A40: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0A44:
    ctx->pc = 0x7F0B0A44u;
    // 7F0B0A44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0A48:
    ctx->pc = 0x7F0B0A48u;
    // 7F0B0A48: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0A4Cu;
            goto label_7F0B19D8;
    }

label_7F0B0A4C:
    ctx->pc = 0x7F0B0A4Cu;
    ctx->downcount -= 1;
    // 7F0B0A4C: b       0x7F0B0B54
    {
            goto label_7F0B0B54;
    }

label_7F0B0A50:
    ctx->pc = 0x7F0B0A50u;
    ctx->downcount -= 2;
    // 7F0B0A50: cmpwi   r0, 70
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(70);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0A54:
    ctx->pc = 0x7F0B0A54u;
    // 7F0B0A54: bc    4, 0, 0x7F0B0B38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B38;
        }
    }

label_7F0B0A58:
    ctx->pc = 0x7F0B0A58u;
    ctx->downcount -= 3;
    // 7F0B0A58: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0A5C:
    ctx->pc = 0x7F0B0A5Cu;
    // 7F0B0A5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0A60:
    ctx->pc = 0x7F0B0A60u;
    // 7F0B0A60: bl      0x7F3C98A4
    {
            ctx->lr = 0x7F0B0A64u;
            ctx->pc = 0x7F3C98A4u;
            return;
    }

label_7F0B0A64:
    ctx->pc = 0x7F0B0A64u;
    ctx->downcount -= 4;
    // 7F0B0A64: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0A68:
    ctx->pc = 0x7F0B0A68u;
    // 7F0B0A68: li      r4, 1536
    ctx->gpr[4] = (u32)(s32)(1536);

label_7F0B0A6C:
    ctx->pc = 0x7F0B0A6Cu;
    // 7F0B0A6C: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0A70:
    ctx->pc = 0x7F0B0A70u;
    // 7F0B0A70: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B0A74u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B0A74:
    ctx->pc = 0x7F0B0A74u;
    ctx->downcount -= 6;
    // 7F0B0A74: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0A78:
    ctx->pc = 0x7F0B0A78u;
    // 7F0B0A78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0A7C:
    ctx->pc = 0x7F0B0A7Cu;
    // 7F0B0A7C: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0A80:
    ctx->pc = 0x7F0B0A80u;
    // 7F0B0A80: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0A84:
    ctx->pc = 0x7F0B0A84u;
    // 7F0B0A84: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0A88:
    ctx->pc = 0x7F0B0A88u;
    // 7F0B0A88: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0A8Cu;
            goto label_7F0B185C;
    }

label_7F0B0A8C:
    ctx->pc = 0x7F0B0A8Cu;
    ctx->downcount -= 3;
    // 7F0B0A8C: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0A90:
    ctx->pc = 0x7F0B0A90u;
    // 7F0B0A90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0A94:
    ctx->pc = 0x7F0B0A94u;
    // 7F0B0A94: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0A98u;
            goto label_7F0B19D8;
    }

label_7F0B0A98:
    ctx->pc = 0x7F0B0A98u;
    ctx->downcount -= 3;
    // 7F0B0A98: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0A9C:
    ctx->pc = 0x7F0B0A9Cu;
    // 7F0B0A9C: cmpwi   r0, 69
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(69);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0AA0:
    ctx->pc = 0x7F0B0AA0u;
    // 7F0B0AA0: bc    4, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0AA4:
    ctx->pc = 0x7F0B0AA4u;
    ctx->downcount -= 3;
    // 7F0B0AA4: lwz     r0, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0AA8:
    ctx->pc = 0x7F0B0AA8u;
    // 7F0B0AA8: cmpwi   r0, 0
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

label_7F0B0AAC:
    ctx->pc = 0x7F0B0AACu;
    // 7F0B0AAC: bc    12, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0AB0:
    ctx->pc = 0x7F0B0AB0u;
    ctx->downcount -= 4;
    // 7F0B0AB0: lwz     r3, 1932(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1932);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0AB4:
    ctx->pc = 0x7F0B0AB4u;
    // 7F0B0AB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0AB8:
    ctx->pc = 0x7F0B0AB8u;
    // 7F0B0AB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B0ABC:
    ctx->pc = 0x7F0B0ABCu;
    // 7F0B0ABC: bl      0x80051BB0
    {
            ctx->lr = 0x7F0B0AC0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0B0AC0:
    ctx->pc = 0x7F0B0AC0u;
    ctx->downcount -= 2;
    // 7F0B0AC0: cmpwi   r3, 0
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

label_7F0B0AC4:
    ctx->pc = 0x7F0B0AC4u;
    // 7F0B0AC4: bc    4, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0AC8:
    ctx->pc = 0x7F0B0AC8u;
    ctx->downcount -= 20;
    // 7F0B0AC8: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0AC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0ACC:
    ctx->pc = 0x7F0B0ACCu;
    // 7F0B0ACC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B0AD0:
    ctx->pc = 0x7F0B0AD0u;
    // 7F0B0AD0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B0AD4:
    ctx->pc = 0x7F0B0AD4u;
    // 7F0B0AD4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B0AD8:
    ctx->pc = 0x7F0B0AD8u;
    // 7F0B0AD8: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0ADC:
    ctx->pc = 0x7F0B0ADCu;
    // 7F0B0ADC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0B0AE0:
    ctx->pc = 0x7F0B0AE0u;
    // 7F0B0AE0: li      r6, 30000
    ctx->gpr[6] = (u32)(s32)(30000);

label_7F0B0AE4:
    ctx->pc = 0x7F0B0AE4u;
    // 7F0B0AE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B0AE8:
    ctx->pc = 0x7F0B0AE8u;
    // 7F0B0AE8: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0AE8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0AEC:
    ctx->pc = 0x7F0B0AECu;
    // 7F0B0AEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B0AF0:
    ctx->pc = 0x7F0B0AF0u;
    // 7F0B0AF0: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F0B0AF4:
    ctx->pc = 0x7F0B0AF4u;
    // 7F0B0AF4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B0AF8:
    ctx->pc = 0x7F0B0AF8u;
    // 7F0B0AF8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0AFC:
    ctx->pc = 0x7F0B0AFCu;
    // 7F0B0AFC: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0AFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0B00:
    ctx->pc = 0x7F0B0B00u;
    // 7F0B0B00: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0B04:
    ctx->pc = 0x7F0B0B04u;
    // 7F0B0B04: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0B08:
    ctx->pc = 0x7F0B0B08u;
    // 7F0B0B08: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0B0C:
    ctx->pc = 0x7F0B0B0Cu;
    // 7F0B0B0C: lwz     r0, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0B10:
    ctx->pc = 0x7F0B0B10u;
    // 7F0B0B10: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0B0B14:
    ctx->pc = 0x7F0B0B14u;
    // 7F0B0B14: bl      0x800501FC
    {
            ctx->lr = 0x7F0B0B18u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0B0B18:
    ctx->pc = 0x7F0B0B18u;
    ctx->downcount -= 4;
    // 7F0B0B18: stw     r3, 1932(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1932);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0B1C:
    ctx->pc = 0x7F0B0B1Cu;
    // 7F0B0B1C: lwz     r3, 1980(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1980);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0B20:
    ctx->pc = 0x7F0B0B20u;
    // 7F0B0B20: cmpwi   r3, 0
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

label_7F0B0B24:
    ctx->pc = 0x7F0B0B24u;
    // 7F0B0B24: bc    12, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0B28:
    ctx->pc = 0x7F0B0B28u;
    ctx->downcount -= 3;
    // 7F0B0B28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0B2C:
    ctx->pc = 0x7F0B0B2Cu;
    // 7F0B0B2C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0B0B30:
    ctx->pc = 0x7F0B0B30u;
    // 7F0B0B30: bl      0x7F017DC4
    {
            ctx->lr = 0x7F0B0B34u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F0B0B34:
    ctx->pc = 0x7F0B0B34u;
    ctx->downcount -= 1;
    // 7F0B0B34: b       0x7F0B0B54
    {
            goto label_7F0B0B54;
    }

label_7F0B0B38:
    ctx->pc = 0x7F0B0B38u;
    ctx->downcount -= 3;
    // 7F0B0B38: lwz     r0, 1908(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1908);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0B3C:
    ctx->pc = 0x7F0B0B3Cu;
    // 7F0B0B3C: cmpwi   r0, 0
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

label_7F0B0B40:
    ctx->pc = 0x7F0B0B40u;
    // 7F0B0B40: bc    12, 2, 0x7F0B0B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0B54;
        }
    }

label_7F0B0B44:
    ctx->pc = 0x7F0B0B44u;
    ctx->downcount -= 4;
    // 7F0B0B44: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0B0B48:
    ctx->pc = 0x7F0B0B48u;
    // 7F0B0B48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0B4C:
    ctx->pc = 0x7F0B0B4Cu;
    // 7F0B0B4C: stw     r3, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0B50:
    ctx->pc = 0x7F0B0B50u;
    // 7F0B0B50: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0B54:
    ctx->pc = 0x7F0B0B54u;
    ctx->downcount -= 11;
    // 7F0B0B54: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0B0B58:
    ctx->pc = 0x7F0B0B58u;
    // 7F0B0B58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B0B5C:
    ctx->pc = 0x7F0B0B5Cu;
    // 7F0B0B5C: addi    r6, r4, -5736
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F0B0B60:
    ctx->pc = 0x7F0B0B60u;
    // 7F0B0B60: li      r0, -257
    ctx->gpr[0] = (u32)(s32)(-257);

label_7F0B0B64:
    ctx->pc = 0x7F0B0B64u;
    // 7F0B0B64: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0B68:
    ctx->pc = 0x7F0B0B68u;
    // 7F0B0B68: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0B6C:
    ctx->pc = 0x7F0B0B6Cu;
    // 7F0B0B6C: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0B0B70:
    ctx->pc = 0x7F0B0B70u;
    // 7F0B0B70: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F0B0B74:
    ctx->pc = 0x7F0B0B74u;
    // 7F0B0B74: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0B78:
    ctx->pc = 0x7F0B0B78u;
    // 7F0B0B78: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0B7C:
    ctx->pc = 0x7F0B0B7Cu;
    // 7F0B0B7C: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0B80:
    ctx->pc = 0x7F0B0B80u;
    ctx->downcount -= 3;
    // 7F0B0B80: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0B84:
    ctx->pc = 0x7F0B0B84u;
    // 7F0B0B84: cmpwi   r0, 30
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

label_7F0B0B88:
    ctx->pc = 0x7F0B0B88u;
    // 7F0B0B88: bc    4, 0, 0x7F0B0BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0BB4;
        }
    }

label_7F0B0B8C:
    ctx->pc = 0x7F0B0B8Cu;
    ctx->downcount -= 5;
    // 7F0B0B8C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0B90:
    ctx->pc = 0x7F0B0B90u;
    // 7F0B0B90: stw     r0, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0B94:
    ctx->pc = 0x7F0B0B94u;
    // 7F0B0B94: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0B98:
    ctx->pc = 0x7F0B0B98u;
    // 7F0B0B98: cmpwi   r0, 20
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

label_7F0B0B9C:
    ctx->pc = 0x7F0B0B9Cu;
    // 7F0B0B9C: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0BA0:
    ctx->pc = 0x7F0B0BA0u;
    ctx->downcount -= 5;
    // 7F0B0BA0: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0B0BA4:
    ctx->pc = 0x7F0B0BA4u;
    // 7F0B0BA4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0BA8:
    ctx->pc = 0x7F0B0BA8u;
    // 7F0B0BA8: addi    r0, r4, 512
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(512);

label_7F0B0BAC:
    ctx->pc = 0x7F0B0BACu;
    // 7F0B0BAC: stw     r0, 29944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0BB0:
    ctx->pc = 0x7F0B0BB0u;
    // 7F0B0BB0: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0BB4:
    ctx->pc = 0x7F0B0BB4u;
    ctx->downcount -= 2;
    // 7F0B0BB4: cmpwi   r0, 90
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

label_7F0B0BB8:
    ctx->pc = 0x7F0B0BB8u;
    // 7F0B0BB8: bc    4, 0, 0x7F0B0C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0C40;
        }
    }

label_7F0B0BBC:
    ctx->pc = 0x7F0B0BBCu;
    ctx->downcount -= 3;
    // 7F0B0BBC: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0BC0:
    ctx->pc = 0x7F0B0BC0u;
    // 7F0B0BC0: lha     r4, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0BC4:
    ctx->pc = 0x7F0B0BC4u;
    // 7F0B0BC4: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B0BC8u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B0BC8:
    ctx->pc = 0x7F0B0BC8u;
    ctx->downcount -= 49;
    // 7F0B0BC8: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0BCC:
    ctx->pc = 0x7F0B0BCCu;
    // 7F0B0BCC: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F0B0BD0:
    ctx->pc = 0x7F0B0BD0u;
    // 7F0B0BD0: li      r4, -70
    ctx->gpr[4] = (u32)(s32)(-70);

label_7F0B0BD4:
    ctx->pc = 0x7F0B0BD4u;
    // 7F0B0BD4: lwz     r5, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0BD8:
    ctx->pc = 0x7F0B0BD8u;
    // 7F0B0BD8: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0BDC:
    ctx->pc = 0x7F0B0BDCu;
    // 7F0B0BDC: mulli   r5, r5, 90
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)90);

label_7F0B0BE0:
    ctx->pc = 0x7F0B0BE0u;
    // 7F0B0BE0: divw   r5, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0B0BE4:
    ctx->pc = 0x7F0B0BE4u;
    // 7F0B0BE4: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0BE8u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0BE8:
    ctx->pc = 0x7F0B0BE8u;
    ctx->downcount -= 5;
    // 7F0B0BE8: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0BEC:
    ctx->pc = 0x7F0B0BECu;
    // 7F0B0BEC: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F0B0BF0:
    ctx->pc = 0x7F0B0BF0u;
    // 7F0B0BF0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F0B0BF4:
    ctx->pc = 0x7F0B0BF4u;
    // 7F0B0BF4: lwz     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0BF8:
    ctx->pc = 0x7F0B0BF8u;
    // 7F0B0BF8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0BFCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0BFC:
    ctx->pc = 0x7F0B0BFCu;
    ctx->downcount -= 6;
    // 7F0B0BFC: stw     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0C00:
    ctx->pc = 0x7F0B0C00u;
    // 7F0B0C00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0C04:
    ctx->pc = 0x7F0B0C04u;
    // 7F0B0C04: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0C08:
    ctx->pc = 0x7F0B0C08u;
    // 7F0B0C08: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0C0C:
    ctx->pc = 0x7F0B0C0Cu;
    // 7F0B0C0C: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0C10:
    ctx->pc = 0x7F0B0C10u;
    // 7F0B0C10: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0C14u;
            goto label_7F0B185C;
    }

label_7F0B0C14:
    ctx->pc = 0x7F0B0C14u;
    ctx->downcount -= 3;
    // 7F0B0C14: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0C18:
    ctx->pc = 0x7F0B0C18u;
    // 7F0B0C18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0C1C:
    ctx->pc = 0x7F0B0C1Cu;
    // 7F0B0C1C: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0C20u;
            goto label_7F0B19D8;
    }

label_7F0B0C20:
    ctx->pc = 0x7F0B0C20u;
    ctx->downcount -= 3;
    // 7F0B0C20: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0C24:
    ctx->pc = 0x7F0B0C24u;
    // 7F0B0C24: cmpwi   r0, 80
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

label_7F0B0C28:
    ctx->pc = 0x7F0B0C28u;
    // 7F0B0C28: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0C2C:
    ctx->pc = 0x7F0B0C2Cu;
    ctx->downcount -= 4;
    // 7F0B0C2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0C30:
    ctx->pc = 0x7F0B0C30u;
    // 7F0B0C30: li      r4, 1949
    ctx->gpr[4] = (u32)(s32)(1949);

label_7F0B0C34:
    ctx->pc = 0x7F0B0C34u;
    // 7F0B0C34: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F0B0C38:
    ctx->pc = 0x7F0B0C38u;
    // 7F0B0C38: bl      0x7F011A74
    {
            ctx->lr = 0x7F0B0C3Cu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0B0C3C:
    ctx->pc = 0x7F0B0C3Cu;
    ctx->downcount -= 1;
    // 7F0B0C3C: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0C40:
    ctx->pc = 0x7F0B0C40u;
    ctx->downcount -= 2;
    // 7F0B0C40: cmpwi   r0, 100
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0C44:
    ctx->pc = 0x7F0B0C44u;
    // 7F0B0C44: bc    4, 0, 0x7F0B0CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0CE4;
        }
    }

label_7F0B0C48:
    ctx->pc = 0x7F0B0C48u;
    ctx->downcount -= 4;
    // 7F0B0C48: lha     r4, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0C4C:
    ctx->pc = 0x7F0B0C4Cu;
    // 7F0B0C4C: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0C50:
    ctx->pc = 0x7F0B0C50u;
    // 7F0B0C50: addi    r4, r4, -200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-200);

label_7F0B0C54:
    ctx->pc = 0x7F0B0C54u;
    // 7F0B0C54: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B0C58u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B0C58:
    ctx->pc = 0x7F0B0C58u;
    ctx->downcount -= 49;
    // 7F0B0C58: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0C5C:
    ctx->pc = 0x7F0B0C5Cu;
    // 7F0B0C5C: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0B0C60:
    ctx->pc = 0x7F0B0C60u;
    // 7F0B0C60: li      r4, -70
    ctx->gpr[4] = (u32)(s32)(-70);

label_7F0B0C64:
    ctx->pc = 0x7F0B0C64u;
    // 7F0B0C64: lwz     r5, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0C68:
    ctx->pc = 0x7F0B0C68u;
    // 7F0B0C68: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0C6C:
    ctx->pc = 0x7F0B0C6Cu;
    // 7F0B0C6C: mulli   r5, r5, 100
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)100);

label_7F0B0C70:
    ctx->pc = 0x7F0B0C70u;
    // 7F0B0C70: divw   r5, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0B0C74:
    ctx->pc = 0x7F0B0C74u;
    // 7F0B0C74: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0C78u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0C78:
    ctx->pc = 0x7F0B0C78u;
    ctx->downcount -= 5;
    // 7F0B0C78: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0C7C:
    ctx->pc = 0x7F0B0C7Cu;
    // 7F0B0C7C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F0B0C80:
    ctx->pc = 0x7F0B0C80u;
    // 7F0B0C80: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F0B0C84:
    ctx->pc = 0x7F0B0C84u;
    // 7F0B0C84: lwz     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0C88:
    ctx->pc = 0x7F0B0C88u;
    // 7F0B0C88: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0C8Cu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0C8C:
    ctx->pc = 0x7F0B0C8Cu;
    ctx->downcount -= 6;
    // 7F0B0C8C: stw     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0C90:
    ctx->pc = 0x7F0B0C90u;
    // 7F0B0C90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0C94:
    ctx->pc = 0x7F0B0C94u;
    // 7F0B0C94: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0C98:
    ctx->pc = 0x7F0B0C98u;
    // 7F0B0C98: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0C9C:
    ctx->pc = 0x7F0B0C9Cu;
    // 7F0B0C9C: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0CA0:
    ctx->pc = 0x7F0B0CA0u;
    // 7F0B0CA0: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0CA4u;
            goto label_7F0B185C;
    }

label_7F0B0CA4:
    ctx->pc = 0x7F0B0CA4u;
    ctx->downcount -= 3;
    // 7F0B0CA4: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0CA8:
    ctx->pc = 0x7F0B0CA8u;
    // 7F0B0CA8: cmpwi   r0, 99
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(99);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0CAC:
    ctx->pc = 0x7F0B0CACu;
    // 7F0B0CAC: bc    4, 2, 0x7F0B0CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0CB8;
        }
    }

label_7F0B0CB0:
    ctx->pc = 0x7F0B0CB0u;
    ctx->downcount -= 2;
    // 7F0B0CB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0CB4:
    ctx->pc = 0x7F0B0CB4u;
    // 7F0B0CB4: stw     r0, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0CB8:
    ctx->pc = 0x7F0B0CB8u;
    ctx->downcount -= 3;
    // 7F0B0CB8: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0CBC:
    ctx->pc = 0x7F0B0CBCu;
    // 7F0B0CBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0CC0:
    ctx->pc = 0x7F0B0CC0u;
    // 7F0B0CC0: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0CC4u;
            goto label_7F0B19D8;
    }

label_7F0B0CC4:
    ctx->pc = 0x7F0B0CC4u;
    ctx->downcount -= 8;
    // 7F0B0CC4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B0CC8:
    ctx->pc = 0x7F0B0CC8u;
    // 7F0B0CC8: lis     r3, -2
    ctx->gpr[3] = ((u32)(s32)(-2) << 16);

label_7F0B0CCC:
    ctx->pc = 0x7F0B0CCCu;
    // 7F0B0CCC: addi    r5, r4, 29944
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(29944);

label_7F0B0CD0:
    ctx->pc = 0x7F0B0CD0u;
    // 7F0B0CD0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0CD4:
    ctx->pc = 0x7F0B0CD4u;
    // 7F0B0CD4: addi    r0, r3, -513
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-513);

label_7F0B0CD8:
    ctx->pc = 0x7F0B0CD8u;
    // 7F0B0CD8: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0B0CDC:
    ctx->pc = 0x7F0B0CDCu;
    // 7F0B0CDC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0CE0:
    ctx->pc = 0x7F0B0CE0u;
    // 7F0B0CE0: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0CE4:
    ctx->pc = 0x7F0B0CE4u;
    ctx->downcount -= 2;
    // 7F0B0CE4: cmpwi   r0, 170
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(170);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0CE8:
    ctx->pc = 0x7F0B0CE8u;
    // 7F0B0CE8: bc    4, 0, 0x7F0B0D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0D44;
        }
    }

label_7F0B0CEC:
    ctx->pc = 0x7F0B0CECu;
    ctx->downcount -= 3;
    // 7F0B0CEC: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0CF0:
    ctx->pc = 0x7F0B0CF0u;
    // 7F0B0CF0: lha     r4, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0CF4:
    ctx->pc = 0x7F0B0CF4u;
    // 7F0B0CF4: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B0CF8u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B0CF8:
    ctx->pc = 0x7F0B0CF8u;
    ctx->downcount -= 4;
    // 7F0B0CF8: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0CFC:
    ctx->pc = 0x7F0B0CFCu;
    // 7F0B0CFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B0D00:
    ctx->pc = 0x7F0B0D00u;
    // 7F0B0D00: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0D04:
    ctx->pc = 0x7F0B0D04u;
    // 7F0B0D04: bl      0x7F3C9844
    {
            ctx->lr = 0x7F0B0D08u;
            ctx->pc = 0x7F3C9844u;
            return;
    }

label_7F0B0D08:
    ctx->pc = 0x7F0B0D08u;
    ctx->downcount -= 6;
    // 7F0B0D08: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0D0C:
    ctx->pc = 0x7F0B0D0Cu;
    // 7F0B0D0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0D10:
    ctx->pc = 0x7F0B0D10u;
    // 7F0B0D10: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0D14:
    ctx->pc = 0x7F0B0D14u;
    // 7F0B0D14: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0D18:
    ctx->pc = 0x7F0B0D18u;
    // 7F0B0D18: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0D1C:
    ctx->pc = 0x7F0B0D1Cu;
    // 7F0B0D1C: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0D20u;
            goto label_7F0B185C;
    }

label_7F0B0D20:
    ctx->pc = 0x7F0B0D20u;
    ctx->downcount -= 3;
    // 7F0B0D20: lwz     r0, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0D24:
    ctx->pc = 0x7F0B0D24u;
    // 7F0B0D24: cmpwi   r0, 0
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

label_7F0B0D28:
    ctx->pc = 0x7F0B0D28u;
    // 7F0B0D28: bc    4, 2, 0x7F0B0D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0D34;
        }
    }

label_7F0B0D2C:
    ctx->pc = 0x7F0B0D2Cu;
    ctx->downcount -= 2;
    // 7F0B0D2C: li      r0, 170
    ctx->gpr[0] = (u32)(s32)(170);

label_7F0B0D30:
    ctx->pc = 0x7F0B0D30u;
    // 7F0B0D30: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0D34:
    ctx->pc = 0x7F0B0D34u;
    ctx->downcount -= 3;
    // 7F0B0D34: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0D38:
    ctx->pc = 0x7F0B0D38u;
    // 7F0B0D38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0D3C:
    ctx->pc = 0x7F0B0D3Cu;
    // 7F0B0D3C: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0D40u;
            goto label_7F0B19D8;
    }

label_7F0B0D40:
    ctx->pc = 0x7F0B0D40u;
    ctx->downcount -= 1;
    // 7F0B0D40: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0D44:
    ctx->pc = 0x7F0B0D44u;
    ctx->downcount -= 2;
    // 7F0B0D44: cmpwi   r0, 190
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(190);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0D48:
    ctx->pc = 0x7F0B0D48u;
    // 7F0B0D48: bc    4, 0, 0x7F0B0DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0DA4;
        }
    }

label_7F0B0D4C:
    ctx->pc = 0x7F0B0D4Cu;
    ctx->downcount -= 8;
    // 7F0B0D4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0D50:
    ctx->pc = 0x7F0B0D50u;
    // 7F0B0D50: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0D54:
    ctx->pc = 0x7F0B0D54u;
    // 7F0B0D54: stw     r0, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0D58:
    ctx->pc = 0x7F0B0D58u;
    // 7F0B0D58: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0B0D5C:
    ctx->pc = 0x7F0B0D5Cu;
    // 7F0B0D5C: stw     r0, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0D60:
    ctx->pc = 0x7F0B0D60u;
    // 7F0B0D60: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0D64:
    ctx->pc = 0x7F0B0D64u;
    // 7F0B0D64: cmpwi   r0, 0
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

label_7F0B0D68:
    ctx->pc = 0x7F0B0D68u;
    // 7F0B0D68: bc    12, 2, 0x7F0B0D74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0D74;
        }
    }

label_7F0B0D6C:
    ctx->pc = 0x7F0B0D6Cu;
    ctx->downcount -= 2;
    // 7F0B0D6C: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F0B0D70:
    ctx->pc = 0x7F0B0D70u;
    // 7F0B0D70: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0D74:
    ctx->pc = 0x7F0B0D74u;
    ctx->downcount -= 8;
    // 7F0B0D74: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B0D78:
    ctx->pc = 0x7F0B0D78u;
    // 7F0B0D78: addi    r4, r3, -5736
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F0B0D7C:
    ctx->pc = 0x7F0B0D7Cu;
    // 7F0B0D7C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0D80:
    ctx->pc = 0x7F0B0D80u;
    // 7F0B0D80: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F0B0D84:
    ctx->pc = 0x7F0B0D84u;
    // 7F0B0D84: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0D88:
    ctx->pc = 0x7F0B0D88u;
    // 7F0B0D88: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0D8C:
    ctx->pc = 0x7F0B0D8Cu;
    // 7F0B0D8C: cmpwi   r0, 180
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(180);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0D90:
    ctx->pc = 0x7F0B0D90u;
    // 7F0B0D90: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0D94:
    ctx->pc = 0x7F0B0D94u;
    ctx->downcount -= 4;
    // 7F0B0D94: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0D98:
    ctx->pc = 0x7F0B0D98u;
    // 7F0B0D98: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B0D9C:
    ctx->pc = 0x7F0B0D9Cu;
    // 7F0B0D9C: stw     r0, 29944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0DA0:
    ctx->pc = 0x7F0B0DA0u;
    // 7F0B0DA0: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0DA4:
    ctx->pc = 0x7F0B0DA4u;
    ctx->downcount -= 2;
    // 7F0B0DA4: cmpwi   r0, 400
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(400);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0DA8:
    ctx->pc = 0x7F0B0DA8u;
    // 7F0B0DA8: bc    4, 0, 0x7F0B0E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0E90;
        }
    }

label_7F0B0DAC:
    ctx->pc = 0x7F0B0DACu;
    ctx->downcount -= 4;
    // 7F0B0DAC: lwz     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0DB0:
    ctx->pc = 0x7F0B0DB0u;
    // 7F0B0DB0: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F0B0DB4:
    ctx->pc = 0x7F0B0DB4u;
    // 7F0B0DB4: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0B0DB8:
    ctx->pc = 0x7F0B0DB8u;
    // 7F0B0DB8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0DBCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0DBC:
    ctx->pc = 0x7F0B0DBCu;
    ctx->downcount -= 49;
    // 7F0B0DBC: stw     r3, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0DC0:
    ctx->pc = 0x7F0B0DC0u;
    // 7F0B0DC0: li      r0, 400
    ctx->gpr[0] = (u32)(s32)(400);

label_7F0B0DC4:
    ctx->pc = 0x7F0B0DC4u;
    // 7F0B0DC4: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_7F0B0DC8:
    ctx->pc = 0x7F0B0DC8u;
    // 7F0B0DC8: lwz     r5, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0DCC:
    ctx->pc = 0x7F0B0DCCu;
    // 7F0B0DCC: lwz     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0DD0:
    ctx->pc = 0x7F0B0DD0u;
    // 7F0B0DD0: mulli   r5, r5, 400
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)400);

label_7F0B0DD4:
    ctx->pc = 0x7F0B0DD4u;
    // 7F0B0DD4: divw   r5, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0B0DD8:
    ctx->pc = 0x7F0B0DD8u;
    // 7F0B0DD8: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0DDCu;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0DDC:
    ctx->pc = 0x7F0B0DDCu;
    ctx->downcount -= 5;
    // 7F0B0DDC: stw     r3, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0DE0:
    ctx->pc = 0x7F0B0DE0u;
    // 7F0B0DE0: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F0B0DE4:
    ctx->pc = 0x7F0B0DE4u;
    // 7F0B0DE4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F0B0DE8:
    ctx->pc = 0x7F0B0DE8u;
    // 7F0B0DE8: lwz     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0DEC:
    ctx->pc = 0x7F0B0DECu;
    // 7F0B0DEC: bl      0x7F3C9A2C
    {
            ctx->lr = 0x7F0B0DF0u;
            ctx->pc = 0x7F3C9A2Cu;
            return;
    }

label_7F0B0DF0:
    ctx->pc = 0x7F0B0DF0u;
    ctx->downcount -= 6;
    // 7F0B0DF0: stw     r3, 1896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1896);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0DF4:
    ctx->pc = 0x7F0B0DF4u;
    // 7F0B0DF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0DF8:
    ctx->pc = 0x7F0B0DF8u;
    // 7F0B0DF8: addi    r4, r31, 34
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(34);

label_7F0B0DFC:
    ctx->pc = 0x7F0B0DFCu;
    // 7F0B0DFC: lwz     r5, 1900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0E00:
    ctx->pc = 0x7F0B0E00u;
    // 7F0B0E00: lwz     r6, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0E04:
    ctx->pc = 0x7F0B0E04u;
    // 7F0B0E04: bl      0x7F0B185C
    {
            ctx->lr = 0x7F0B0E08u;
            goto label_7F0B185C;
    }

label_7F0B0E08:
    ctx->pc = 0x7F0B0E08u;
    ctx->downcount -= 3;
    // 7F0B0E08: lwz     r4, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0E0C:
    ctx->pc = 0x7F0B0E0Cu;
    // 7F0B0E0C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0E10:
    ctx->pc = 0x7F0B0E10u;
    // 7F0B0E10: bl      0x7F0B19D8
    {
            ctx->lr = 0x7F0B0E14u;
            goto label_7F0B19D8;
    }

label_7F0B0E14:
    ctx->pc = 0x7F0B0E14u;
    ctx->downcount -= 3;
    // 7F0B0E14: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0E18:
    ctx->pc = 0x7F0B0E18u;
    // 7F0B0E18: cmpwi   r0, 190
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(190);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0E1C:
    ctx->pc = 0x7F0B0E1Cu;
    // 7F0B0E1C: bc    4, 2, 0x7F0B0E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0E40;
        }
    }

label_7F0B0E20:
    ctx->pc = 0x7F0B0E20u;
    ctx->downcount -= 4;
    // 7F0B0E20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0E24:
    ctx->pc = 0x7F0B0E24u;
    // 7F0B0E24: li      r4, 1946
    ctx->gpr[4] = (u32)(s32)(1946);

label_7F0B0E28:
    ctx->pc = 0x7F0B0E28u;
    // 7F0B0E28: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0B0E2C:
    ctx->pc = 0x7F0B0E2Cu;
    // 7F0B0E2C: bl      0x7F011A74
    {
            ctx->lr = 0x7F0B0E30u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0B0E30:
    ctx->pc = 0x7F0B0E30u;
    ctx->downcount -= 4;
    // 7F0B0E30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0E34:
    ctx->pc = 0x7F0B0E34u;
    // 7F0B0E34: li      r4, 1951
    ctx->gpr[4] = (u32)(s32)(1951);

label_7F0B0E38:
    ctx->pc = 0x7F0B0E38u;
    // 7F0B0E38: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F0B0E3C:
    ctx->pc = 0x7F0B0E3Cu;
    // 7F0B0E3C: bl      0x7F011A74
    {
            ctx->lr = 0x7F0B0E40u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F0B0E40:
    ctx->pc = 0x7F0B0E40u;
    ctx->downcount -= 3;
    // 7F0B0E40: lwz     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0E44:
    ctx->pc = 0x7F0B0E44u;
    // 7F0B0E44: cmpwi   r0, 320
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(320);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B0E48:
    ctx->pc = 0x7F0B0E48u;
    // 7F0B0E48: bc    4, 2, 0x7F0B0EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EA0;
        }
    }

label_7F0B0E4C:
    ctx->pc = 0x7F0B0E4Cu;
    ctx->downcount -= 7;
    // 7F0B0E4C: li      r3, 2225
    ctx->gpr[3] = (u32)(s32)(2225);

label_7F0B0E50:
    ctx->pc = 0x7F0B0E50u;
    // 7F0B0E50: li      r4, 2225
    ctx->gpr[4] = (u32)(s32)(2225);

label_7F0B0E54:
    ctx->pc = 0x7F0B0E54u;
    // 7F0B0E54: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0B0E58:
    ctx->pc = 0x7F0B0E58u;
    // 7F0B0E58: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_7F0B0E5C:
    ctx->pc = 0x7F0B0E5Cu;
    // 7F0B0E5C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B0E60:
    ctx->pc = 0x7F0B0E60u;
    // 7F0B0E60: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0B0E64:
    ctx->pc = 0x7F0B0E64u;
    // 7F0B0E64: bl      0x800516D4
    {
            ctx->lr = 0x7F0B0E68u;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F0B0E68:
    ctx->pc = 0x7F0B0E68u;
    ctx->downcount -= 10;
    // 7F0B0E68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0E6C:
    ctx->pc = 0x7F0B0E6Cu;
    // 7F0B0E6C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0E70:
    ctx->pc = 0x7F0B0E70u;
    // 7F0B0E70: stw     r0, 2756(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0E74:
    ctx->pc = 0x7F0B0E74u;
    // 7F0B0E74: addi    r5, r3, 29944
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29944);

label_7F0B0E78:
    ctx->pc = 0x7F0B0E78u;
    // 7F0B0E78: lis     r3, -2
    ctx->gpr[3] = ((u32)(s32)(-2) << 16);

label_7F0B0E7C:
    ctx->pc = 0x7F0B0E7Cu;
    // 7F0B0E7C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0E80:
    ctx->pc = 0x7F0B0E80u;
    // 7F0B0E80: addi    r0, r3, -513
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-513);

label_7F0B0E84:
    ctx->pc = 0x7F0B0E84u;
    // 7F0B0E84: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0B0E88:
    ctx->pc = 0x7F0B0E88u;
    // 7F0B0E88: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0E8C:
    ctx->pc = 0x7F0B0E8Cu;
    // 7F0B0E8C: b       0x7F0B0EA0
    {
            goto label_7F0B0EA0;
    }

label_7F0B0E90:
    ctx->pc = 0x7F0B0E90u;
    ctx->downcount -= 4;
    // 7F0B0E90: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0B0E94:
    ctx->pc = 0x7F0B0E94u;
    // 7F0B0E94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0E98:
    ctx->pc = 0x7F0B0E98u;
    // 7F0B0E98: stw     r3, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B0E9C:
    ctx->pc = 0x7F0B0E9Cu;
    // 7F0B0E9C: stw     r0, 1884(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0EA0:
    ctx->pc = 0x7F0B0EA0u;
    ctx->downcount -= 5;
    // 7F0B0EA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B0EA4:
    ctx->pc = 0x7F0B0EA4u;
    // 7F0B0EA4: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0EA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B0EA8:
    ctx->pc = 0x7F0B0EA8u;
    // 7F0B0EA8: lfs     f0, -5140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0EA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B0EAC:
    ctx->pc = 0x7F0B0EACu;
    // 7F0B0EAC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B0EACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0B0EB0:
    ctx->pc = 0x7F0B0EB0u;
    // 7F0B0EB0: bc    4, 0, 0x7F0B0EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EC0;
        }
    }

label_7F0B0EB4:
    ctx->pc = 0x7F0B0EB4u;
    ctx->downcount -= 3;
    // 7F0B0EB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0EB8:
    ctx->pc = 0x7F0B0EB8u;
    // 7F0B0EB8: stw     r0, 1892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0EBC:
    ctx->pc = 0x7F0B0EBCu;
    // 7F0B0EBC: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B0EBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B0EC0:
    ctx->pc = 0x7F0B0EC0u;
    ctx->downcount -= 6;
    // 7F0B0EC0: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B0EC4:
    ctx->pc = 0x7F0B0EC4u;
    // 7F0B0EC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0EC8:
    ctx->pc = 0x7F0B0EC8u;
    // 7F0B0EC8: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0ECC:
    ctx->pc = 0x7F0B0ECCu;
    // 7F0B0ECC: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B0ED0:
    ctx->pc = 0x7F0B0ED0u;
    // 7F0B0ED0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B0ED4:
    ctx->pc = 0x7F0B0ED4u;
    // 7F0B0ED4: bl      0x7F023170
    {
            ctx->lr = 0x7F0B0ED8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F0B0ED8:
    ctx->pc = 0x7F0B0ED8u;
    ctx->downcount -= 2;
    // 7F0B0ED8: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0B0EDC:
    ctx->pc = 0x7F0B0EDCu;
    // 7F0B0EDC: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0B0EE0u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0B0EE0:
    ctx->pc = 0x7F0B0EE0u;
    ctx->downcount -= 3;
    // 7F0B0EE0: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0EE4:
    ctx->pc = 0x7F0B0EE4u;
    // 7F0B0EE4: cmpwi   r0, 0
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

label_7F0B0EE8:
    ctx->pc = 0x7F0B0EE8u;
    // 7F0B0EE8: bc    4, 2, 0x7F0B0EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0EFC;
        }
    }

label_7F0B0EEC:
    ctx->pc = 0x7F0B0EECu;
    ctx->downcount -= 2;
    // 7F0B0EEC: addi    r3, r30, 580
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(580);

label_7F0B0EF0:
    ctx->pc = 0x7F0B0EF0u;
    // 7F0B0EF0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0B0EF4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0B0EF4:
    ctx->pc = 0x7F0B0EF4u;
    ctx->downcount -= 2;
    // 7F0B0EF4: addi    r3, r30, 624
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(624);

label_7F0B0EF8:
    ctx->pc = 0x7F0B0EF8u;
    // 7F0B0EF8: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0B0EFCu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0B0EFC:
    ctx->pc = 0x7F0B0EFCu;
    ctx->downcount -= 3;
    // 7F0B0EFC: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0F00:
    ctx->pc = 0x7F0B0F00u;
    // 7F0B0F00: cmpwi   r0, 0
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

label_7F0B0F04:
    ctx->pc = 0x7F0B0F04u;
    // 7F0B0F04: bc    4, 2, 0x7F0B0F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0F28;
        }
    }

label_7F0B0F08:
    ctx->pc = 0x7F0B0F08u;
    ctx->downcount -= 3;
    // 7F0B0F08: lwz     r0, 1888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1888);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0F0C:
    ctx->pc = 0x7F0B0F0Cu;
    // 7F0B0F0C: cmpwi   r0, 2
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

label_7F0B0F10:
    ctx->pc = 0x7F0B0F10u;
    // 7F0B0F10: bc    4, 1, 0x7F0B0F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0F28;
        }
    }

label_7F0B0F14:
    ctx->pc = 0x7F0B0F14u;
    ctx->downcount -= 5;
    // 7F0B0F14: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0F18:
    ctx->pc = 0x7F0B0F18u;
    // 7F0B0F18: addi    r3, r30, 2060
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2060);

label_7F0B0F1C:
    ctx->pc = 0x7F0B0F1Cu;
    // 7F0B0F1C: addi    r4, r30, 2096
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2096);

label_7F0B0F20:
    ctx->pc = 0x7F0B0F20u;
    // 7F0B0F20: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F0B0F24:
    ctx->pc = 0x7F0B0F24u;
    // 7F0B0F24: bl      0x7F094D78
    {
            ctx->lr = 0x7F0B0F28u;
            ctx->pc = 0x7F094D78u;
            return;
    }

label_7F0B0F28:
    ctx->pc = 0x7F0B0F28u;
    ctx->downcount -= 9;
    // 7F0B0F28: lha     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0F2C:
    ctx->pc = 0x7F0B0F2Cu;
    // 7F0B0F2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B0F30:
    ctx->pc = 0x7F0B0F30u;
    // 7F0B0F30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B0F34:
    ctx->pc = 0x7F0B0F34u;
    // 7F0B0F34: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B0F38:
    ctx->pc = 0x7F0B0F38u;
    // 7F0B0F38: sth     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0B0F3C:
    ctx->pc = 0x7F0B0F3Cu;
    // 7F0B0F3C: lha     r5, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B0F40:
    ctx->pc = 0x7F0B0F40u;
    // 7F0B0F40: sth     r5, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0B0F44:
    ctx->pc = 0x7F0B0F44u;
    // 7F0B0F44: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B0F48:
    ctx->pc = 0x7F0B0F48u;
    // 7F0B0F48: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0B0F4Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0B0F4C:
    ctx->pc = 0x7F0B0F4Cu;
    ctx->downcount -= 2;
    // 7F0B0F4C: addi    r3, r30, 492
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(492);

label_7F0B0F50:
    ctx->pc = 0x7F0B0F50u;
    // 7F0B0F50: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0B0F54u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0B0F54:
    ctx->pc = 0x7F0B0F54u;
    ctx->downcount -= 3;
    // 7F0B0F54: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B0F58:
    ctx->pc = 0x7F0B0F58u;
    // 7F0B0F58: addi    r3, r3, -32328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32328);

label_7F0B0F5C:
    ctx->pc = 0x7F0B0F5Cu;
    // 7F0B0F5C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0B0F60u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0B0F60:
    ctx->pc = 0x7F0B0F60u;
    ctx->downcount -= 2;
    // 7F0B0F60: addi    r3, r30, 536
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(536);

label_7F0B0F64:
    ctx->pc = 0x7F0B0F64u;
    // 7F0B0F64: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0B0F68u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0B0F68:
    ctx->pc = 0x7F0B0F68u;
    ctx->downcount -= 3;
    // 7F0B0F68: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0F6C:
    ctx->pc = 0x7F0B0F6Cu;
    // 7F0B0F6C: cmpwi   r0, 0
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

label_7F0B0F70:
    ctx->pc = 0x7F0B0F70u;
    // 7F0B0F70: bc    4, 2, 0x7F0B0F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B0F90;
        }
    }

label_7F0B0F74:
    ctx->pc = 0x7F0B0F74u;
    ctx->downcount -= 7;
    // 7F0B0F74: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B0F78:
    ctx->pc = 0x7F0B0F78u;
    // 7F0B0F78: lwz     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B0F7C:
    ctx->pc = 0x7F0B0F7Cu;
    // 7F0B0F7C: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B0F80:
    ctx->pc = 0x7F0B0F80u;
    // 7F0B0F80: addi    r3, r30, 1312
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1312);

label_7F0B0F84:
    ctx->pc = 0x7F0B0F84u;
    // 7F0B0F84: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0F88:
    ctx->pc = 0x7F0B0F88u;
    // 7F0B0F88: addi    r4, r6, 444
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(444);

label_7F0B0F8C:
    ctx->pc = 0x7F0B0F8Cu;
    // 7F0B0F8C: bl      0x7F014964
    {
            ctx->lr = 0x7F0B0F90u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B0F90:
    ctx->pc = 0x7F0B0F90u;
    ctx->downcount -= 2;
    // 7F0B0F90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B0F94:
    ctx->pc = 0x7F0B0F94u;
    // 7F0B0F94: bl      0x7F0B19D4
    {
            ctx->lr = 0x7F0B0F98u;
            goto label_7F0B19D4;
    }

label_7F0B0F98:
    ctx->pc = 0x7F0B0F98u;
    ctx->downcount -= 5;
    // 7F0B0F98: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0F9C:
    ctx->pc = 0x7F0B0F9Cu;
    // 7F0B0F9C: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0B0FA0:
    ctx->pc = 0x7F0B0FA0u;
    // 7F0B0FA0: addi    r4, r30, 668
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(668);

label_7F0B0FA4:
    ctx->pc = 0x7F0B0FA4u;
    // 7F0B0FA4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B0FA8:
    ctx->pc = 0x7F0B0FA8u;
    // 7F0B0FA8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B0FACu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B0FAC:
    ctx->pc = 0x7F0B0FACu;
    ctx->downcount -= 5;
    // 7F0B0FAC: lwz     r5, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0FB0:
    ctx->pc = 0x7F0B0FB0u;
    // 7F0B0FB0: addi    r4, r30, 796
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(796);

label_7F0B0FB4:
    ctx->pc = 0x7F0B0FB4u;
    // 7F0B0FB4: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0B0FB8:
    ctx->pc = 0x7F0B0FB8u;
    // 7F0B0FB8: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B0FBC:
    ctx->pc = 0x7F0B0FBCu;
    // 7F0B0FBC: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B0FC0u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B0FC0:
    ctx->pc = 0x7F0B0FC0u;
    ctx->downcount -= 6;
    // 7F0B0FC0: lwz     r3, 536(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(536);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B0FC4:
    ctx->pc = 0x7F0B0FC4u;
    // 7F0B0FC4: addi    r4, r30, 924
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(924);

label_7F0B0FC8:
    ctx->pc = 0x7F0B0FC8u;
    // 7F0B0FC8: lwz     r5, 492(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(492);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0FCC:
    ctx->pc = 0x7F0B0FCCu;
    // 7F0B0FCC: addi    r3, r3, 52
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(52);

label_7F0B0FD0:
    ctx->pc = 0x7F0B0FD0u;
    // 7F0B0FD0: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B0FD4:
    ctx->pc = 0x7F0B0FD4u;
    // 7F0B0FD4: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B0FD8u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B0FD8:
    ctx->pc = 0x7F0B0FD8u;
    ctx->downcount -= 3;
    // 7F0B0FD8: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B0FDC:
    ctx->pc = 0x7F0B0FDCu;
    // 7F0B0FDC: cmpwi   r0, 0
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

label_7F0B0FE0:
    ctx->pc = 0x7F0B0FE0u;
    // 7F0B0FE0: bc    4, 2, 0x7F0B100C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B100C;
        }
    }

label_7F0B0FE4:
    ctx->pc = 0x7F0B0FE4u;
    ctx->downcount -= 5;
    // 7F0B0FE4: lwz     r5, 580(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(580);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0FE8:
    ctx->pc = 0x7F0B0FE8u;
    // 7F0B0FE8: addi    r4, r30, 1052
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1052);

label_7F0B0FEC:
    ctx->pc = 0x7F0B0FECu;
    // 7F0B0FEC: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0B0FF0:
    ctx->pc = 0x7F0B0FF0u;
    // 7F0B0FF0: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B0FF4:
    ctx->pc = 0x7F0B0FF4u;
    // 7F0B0FF4: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B0FF8u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B0FF8:
    ctx->pc = 0x7F0B0FF8u;
    ctx->downcount -= 5;
    // 7F0B0FF8: lwz     r5, 624(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(624);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B0FFC:
    ctx->pc = 0x7F0B0FFCu;
    // 7F0B0FFC: addi    r4, r30, 1180
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1180);

label_7F0B1000:
    ctx->pc = 0x7F0B1000u;
    // 7F0B1000: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F0B1004:
    ctx->pc = 0x7F0B1004u;
    // 7F0B1004: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B1008:
    ctx->pc = 0x7F0B1008u;
    // 7F0B1008: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B100Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B100C:
    ctx->pc = 0x7F0B100Cu;
    ctx->downcount -= 3;
    // 7F0B100C: lwz     r0, 2040(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1010:
    ctx->pc = 0x7F0B1010u;
    // 7F0B1010: cmpwi   r0, 0
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

label_7F0B1014:
    ctx->pc = 0x7F0B1014u;
    // 7F0B1014: bc    4, 2, 0x7F0B103C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B103C;
        }
    }

label_7F0B1018:
    ctx->pc = 0x7F0B1018u;
    ctx->downcount -= 4;
    // 7F0B1018: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B101C:
    ctx->pc = 0x7F0B101Cu;
    // 7F0B101C: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1020:
    ctx->pc = 0x7F0B1020u;
    // 7F0B1020: rlwinm. r0, r0, 0, 1, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x78000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B1024:
    ctx->pc = 0x7F0B1024u;
    // 7F0B1024: bc    12, 2, 0x7F0B1034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1034;
        }
    }

label_7F0B1028:
    ctx->pc = 0x7F0B1028u;
    ctx->downcount -= 3;
    // 7F0B1028: lwz     r3, 1928(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1928);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B102C:
    ctx->pc = 0x7F0B102Cu;
    // 7F0B102C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B1030:
    ctx->pc = 0x7F0B1030u;
    // 7F0B1030: stw     r0, 1928(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1928);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1034:
    ctx->pc = 0x7F0B1034u;
    ctx->downcount -= 2;
    // 7F0B1034: addi    r3, r30, 1928
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1928);

label_7F0B1038:
    ctx->pc = 0x7F0B1038u;
    // 7F0B1038: bl      0x7F093FF0
    {
            ctx->lr = 0x7F0B103Cu;
            ctx->pc = 0x7F093FF0u;
            return;
    }

label_7F0B103C:
    ctx->pc = 0x7F0B103Cu;
    ctx->downcount -= 16;
    // 7F0B103C: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B1040:
    ctx->pc = 0x7F0B1040u;
    // 7F0B1040: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1044:
    ctx->pc = 0x7F0B1044u;
    // 7F0B1044: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B1048:
    ctx->pc = 0x7F0B1048u;
    // 7F0B1048: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0B104C:
    ctx->pc = 0x7F0B104Cu;
    // 7F0B104C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1050:
    ctx->pc = 0x7F0B1050u;
    ctx->downcount -= 8;
    // 7F0B1050: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B1054:
    ctx->pc = 0x7F0B1054u;
    // 7F0B1054: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B1058:
    ctx->pc = 0x7F0B1058u;
    // 7F0B1058: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B105C:
    ctx->pc = 0x7F0B105Cu;
    // 7F0B105C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B1060:
    ctx->pc = 0x7F0B1060u;
    // 7F0B1060: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1064:
    ctx->pc = 0x7F0B1064u;
    // 7F0B1064: lwz     r0, 2756(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1068:
    ctx->pc = 0x7F0B1068u;
    // 7F0B1068: cmplwi  r0, 0x0000
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

label_7F0B106C:
    ctx->pc = 0x7F0B106Cu;
    // 7F0B106C: bc    12, 2, 0x7F0B1094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1094;
        }
    }

label_7F0B1070:
    ctx->pc = 0x7F0B1070u;
    ctx->downcount -= 7;
    // 7F0B1070: li      r3, 2225
    ctx->gpr[3] = (u32)(s32)(2225);

label_7F0B1074:
    ctx->pc = 0x7F0B1074u;
    // 7F0B1074: li      r4, 2225
    ctx->gpr[4] = (u32)(s32)(2225);

label_7F0B1078:
    ctx->pc = 0x7F0B1078u;
    // 7F0B1078: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0B107C:
    ctx->pc = 0x7F0B107Cu;
    // 7F0B107C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F0B1080:
    ctx->pc = 0x7F0B1080u;
    // 7F0B1080: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B1084:
    ctx->pc = 0x7F0B1084u;
    // 7F0B1084: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0B1088:
    ctx->pc = 0x7F0B1088u;
    // 7F0B1088: bl      0x800516D4
    {
            ctx->lr = 0x7F0B108Cu;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F0B108C:
    ctx->pc = 0x7F0B108Cu;
    ctx->downcount -= 2;
    // 7F0B108C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B1090:
    ctx->pc = 0x7F0B1090u;
    // 7F0B1090: stw     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1094:
    ctx->pc = 0x7F0B1094u;
    ctx->downcount -= 3;
    // 7F0B1094: lwz     r0, 2040(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1098:
    ctx->pc = 0x7F0B1098u;
    // 7F0B1098: cmpwi   r0, 0
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

label_7F0B109C:
    ctx->pc = 0x7F0B109Cu;
    // 7F0B109C: bc    4, 2, 0x7F0B10BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B10BC;
        }
    }

label_7F0B10A0:
    ctx->pc = 0x7F0B10A0u;
    ctx->downcount -= 3;
    // 7F0B10A0: addi    r3, r31, 2060
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2060);

label_7F0B10A4:
    ctx->pc = 0x7F0B10A4u;
    // 7F0B10A4: addi    r4, r31, 2096
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2096);

label_7F0B10A8:
    ctx->pc = 0x7F0B10A8u;
    // 7F0B10A8: bl      0x7F094E5C
    {
            ctx->lr = 0x7F0B10ACu;
            ctx->pc = 0x7F094E5Cu;
            return;
    }

label_7F0B10AC:
    ctx->pc = 0x7F0B10ACu;
    ctx->downcount -= 2;
    // 7F0B10AC: addi    r3, r31, 580
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(580);

label_7F0B10B0:
    ctx->pc = 0x7F0B10B0u;
    // 7F0B10B0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B10B4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B10B4:
    ctx->pc = 0x7F0B10B4u;
    ctx->downcount -= 2;
    // 7F0B10B4: addi    r3, r31, 624
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(624);

label_7F0B10B8:
    ctx->pc = 0x7F0B10B8u;
    // 7F0B10B8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B10BCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B10BC:
    ctx->pc = 0x7F0B10BCu;
    ctx->downcount -= 2;
    // 7F0B10BC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0B10C0:
    ctx->pc = 0x7F0B10C0u;
    // 7F0B10C0: bl      0x7F023E10
    {
            ctx->lr = 0x7F0B10C4u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0B10C4:
    ctx->pc = 0x7F0B10C4u;
    ctx->downcount -= 2;
    // 7F0B10C4: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0B10C8:
    ctx->pc = 0x7F0B10C8u;
    // 7F0B10C8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B10CCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B10CC:
    ctx->pc = 0x7F0B10CCu;
    ctx->downcount -= 2;
    // 7F0B10CC: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0B10D0:
    ctx->pc = 0x7F0B10D0u;
    // 7F0B10D0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B10D4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B10D4:
    ctx->pc = 0x7F0B10D4u;
    ctx->downcount -= 2;
    // 7F0B10D4: addi    r3, r31, 536
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(536);

label_7F0B10D8:
    ctx->pc = 0x7F0B10D8u;
    // 7F0B10D8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B10DCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B10DC:
    ctx->pc = 0x7F0B10DCu;
    ctx->downcount -= 3;
    // 7F0B10DC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B10E0:
    ctx->pc = 0x7F0B10E0u;
    // 7F0B10E0: cmplwi  r3, 0x0000
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

label_7F0B10E4:
    ctx->pc = 0x7F0B10E4u;
    // 7F0B10E4: bc    12, 2, 0x7F0B10EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B10EC;
        }
    }

label_7F0B10E8:
    ctx->pc = 0x7F0B10E8u;
    ctx->downcount -= 1;
    // 7F0B10E8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B10ECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B10EC:
    ctx->pc = 0x7F0B10ECu;
    ctx->downcount -= 3;
    // 7F0B10EC: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B10F0:
    ctx->pc = 0x7F0B10F0u;
    // 7F0B10F0: cmplwi  r3, 0x0000
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

label_7F0B10F4:
    ctx->pc = 0x7F0B10F4u;
    // 7F0B10F4: bc    12, 2, 0x7F0B10FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B10FC;
        }
    }

label_7F0B10F8:
    ctx->pc = 0x7F0B10F8u;
    ctx->downcount -= 1;
    // 7F0B10F8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B10FCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B10FC:
    ctx->pc = 0x7F0B10FCu;
    ctx->downcount -= 13;
    // 7F0B10FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B1100:
    ctx->pc = 0x7F0B1100u;
    // 7F0B1100: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0B1104:
    ctx->pc = 0x7F0B1104u;
    // 7F0B1104: addi    r7, r3, -5736
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F0B1108:
    ctx->pc = 0x7F0B1108u;
    // 7F0B1108: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0B110C:
    ctx->pc = 0x7F0B110Cu;
    // 7F0B110C: lwz     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1110:
    ctx->pc = 0x7F0B1110u;
    // 7F0B1110: li      r3, -257
    ctx->gpr[3] = (u32)(s32)(-257);

label_7F0B1114:
    ctx->pc = 0x7F0B1114u;
    // 7F0B1114: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1118:
    ctx->pc = 0x7F0B1118u;
    // 7F0B1118: and   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F0B111C:
    ctx->pc = 0x7F0B111Cu;
    // 7F0B111C: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F0B1120:
    ctx->pc = 0x7F0B1120u;
    // 7F0B1120: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1124:
    ctx->pc = 0x7F0B1124u;
    // 7F0B1124: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1128:
    ctx->pc = 0x7F0B1128u;
    // 7F0B1128: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B112C:
    ctx->downcount -= 1;
    // 7F0B112C: bc    16, 0, 0x7F0B112C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B112Cu;
                return;
            }
            goto label_7F0B112C;
        }
    }

label_7F0B1130:
    ctx->pc = 0x7F0B1130u;
    ctx->downcount -= 6;
    // 7F0B1130: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1134:
    ctx->pc = 0x7F0B1134u;
    // 7F0B1134: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B1138:
    ctx->pc = 0x7F0B1138u;
    // 7F0B1138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B113C:
    ctx->pc = 0x7F0B113Cu;
    // 7F0B113C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B1140:
    ctx->pc = 0x7F0B1140u;
    // 7F0B1140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1144:
    ctx->pc = 0x7F0B1144u;
    ctx->downcount -= 64;
    // 7F0B1144: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B1148:
    ctx->pc = 0x7F0B1148u;
    // 7F0B1148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B114C:
    ctx->pc = 0x7F0B114Cu;
    // 7F0B114C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F0B1150:
    ctx->pc = 0x7F0B1150u;
    // 7F0B1150: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1154:
    ctx->pc = 0x7F0B1154u;
    // 7F0B1154: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1158:
    ctx->pc = 0x7F0B1158u;
    // 7F0B1158: lis     r12, 181
    ctx->gpr[12] = ((u32)(s32)(181) << 16);

label_7F0B115C:
    ctx->pc = 0x7F0B115Cu;
    // 7F0B115C: cmpwi   r6, 0
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

label_7F0B1160:
    ctx->pc = 0x7F0B1160u;
    // 7F0B1160: stfd     f31, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F0B1164:
    ctx->pc = 0x7F0B1164u;
    // 7F0B1164: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B1164u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F0B1168:
    ctx->pc = 0x7F0B1168u;
    // 7F0B1168: stmw     r20, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B116C:
    ctx->pc = 0x7F0B116Cu;
    // 7F0B116C: addi    r20, r8, -5136
    ctx->gpr[20] = ctx->gpr[8] + (u32)(s32)(-5136);

label_7F0B1170:
    ctx->pc = 0x7F0B1170u;
    // 7F0B1170: addi    r21, r7, -5120
    ctx->gpr[21] = ctx->gpr[7] + (u32)(s32)(-5120);

label_7F0B1174:
    ctx->pc = 0x7F0B1174u;
    // 7F0B1174: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F0B1178:
    ctx->pc = 0x7F0B1178u;
    // 7F0B1178: addi    r25, r8, -5104
    ctx->gpr[25] = ctx->gpr[8] + (u32)(s32)(-5104);

label_7F0B117C:
    ctx->pc = 0x7F0B117Cu;
    // 7F0B117C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1180:
    ctx->pc = 0x7F0B1180u;
    // 7F0B1180: addi    r30, r7, -5088
    ctx->gpr[30] = ctx->gpr[7] + (u32)(s32)(-5088);

label_7F0B1184:
    ctx->pc = 0x7F0B1184u;
    // 7F0B1184: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1188:
    ctx->pc = 0x7F0B1188u;
    // 7F0B1188: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B118C:
    ctx->pc = 0x7F0B118Cu;
    // 7F0B118C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B1190:
    ctx->pc = 0x7F0B1190u;
    // 7F0B1190: addi    r31, r12, -20716
    ctx->gpr[31] = ctx->gpr[12] + (u32)(s32)(-20716);

label_7F0B1194:
    ctx->pc = 0x7F0B1194u;
    // 7F0B1194: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0B1198:
    ctx->pc = 0x7F0B1198u;
    // 7F0B1198: lwz     r11, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0B119C:
    ctx->pc = 0x7F0B119Cu;
    // 7F0B119C: lwz     r10, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B11A0:
    ctx->pc = 0x7F0B11A0u;
    // 7F0B11A0: lwz     r9, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0B11A4:
    ctx->pc = 0x7F0B11A4u;
    // 7F0B11A4: lwz     r8, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0B11A8:
    ctx->pc = 0x7F0B11A8u;
    // 7F0B11A8: lwz     r7, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B11AC:
    ctx->pc = 0x7F0B11ACu;
    // 7F0B11AC: lwz     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B11B0:
    ctx->pc = 0x7F0B11B0u;
    // 7F0B11B0: lwz     r20, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F0B11B4:
    ctx->pc = 0x7F0B11B4u;
    // 7F0B11B4: lwz     r21, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F0B11B8:
    ctx->pc = 0x7F0B11B8u;
    // 7F0B11B8: lwz     r22, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F0B11BC:
    ctx->pc = 0x7F0B11BCu;
    // 7F0B11BC: lwz     r23, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F0B11C0:
    ctx->pc = 0x7F0B11C0u;
    // 7F0B11C0: lwz     r24, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F0B11C4:
    ctx->pc = 0x7F0B11C4u;
    // 7F0B11C4: lwz     r25, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F0B11C8:
    ctx->pc = 0x7F0B11C8u;
    // 7F0B11C8: lwz     r12, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0B11CC:
    ctx->pc = 0x7F0B11CCu;
    // 7F0B11CC: lwz     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B11D0:
    ctx->pc = 0x7F0B11D0u;
    // 7F0B11D0: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B11D4:
    ctx->pc = 0x7F0B11D4u;
    // 7F0B11D4: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B11D8:
    ctx->pc = 0x7F0B11D8u;
    // 7F0B11D8: stw     r11, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0B11DC:
    ctx->pc = 0x7F0B11DCu;
    // 7F0B11DC: stw     r10, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B11E0:
    ctx->pc = 0x7F0B11E0u;
    // 7F0B11E0: stw     r9, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B11E4:
    ctx->pc = 0x7F0B11E4u;
    // 7F0B11E4: stw     r8, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B11E8:
    ctx->pc = 0x7F0B11E8u;
    // 7F0B11E8: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B11EC:
    ctx->pc = 0x7F0B11ECu;
    // 7F0B11EC: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B11F0:
    ctx->pc = 0x7F0B11F0u;
    // 7F0B11F0: stw     r20, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F0B11F4:
    ctx->pc = 0x7F0B11F4u;
    // 7F0B11F4: stw     r21, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F0B11F8:
    ctx->pc = 0x7F0B11F8u;
    // 7F0B11F8: stw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F0B11FC:
    ctx->pc = 0x7F0B11FCu;
    // 7F0B11FC: stw     r23, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F0B1200:
    ctx->pc = 0x7F0B1200u;
    // 7F0B1200: stw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F0B1204:
    ctx->pc = 0x7F0B1204u;
    // 7F0B1204: stw     r25, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F0B1208:
    ctx->pc = 0x7F0B1208u;
    // 7F0B1208: stw     r12, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0B120C:
    ctx->pc = 0x7F0B120Cu;
    // 7F0B120C: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1210:
    ctx->pc = 0x7F0B1210u;
    // 7F0B1210: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1214:
    ctx->pc = 0x7F0B1214u;
    // 7F0B1214: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1218:
    ctx->pc = 0x7F0B1218u;
    // 7F0B1218: bc    12, 2, 0x7F0B1224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1224;
        }
    }

label_7F0B121C:
    ctx->pc = 0x7F0B121Cu;
    ctx->downcount -= 2;
    // 7F0B121C: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F0B1220:
    ctx->pc = 0x7F0B1220u;
    // 7F0B1220: addi    r31, r3, 3749
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(3749);

label_7F0B1224:
    ctx->pc = 0x7F0B1224u;
    ctx->downcount -= 4;
    // 7F0B1224: cmpwi   r6, 0
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

label_7F0B1228:
    ctx->pc = 0x7F0B1228u;
    // 7F0B1228: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F0B122C:
    ctx->pc = 0x7F0B122Cu;
    // 7F0B122C: addi    r30, r3, 16636
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(16636);

label_7F0B1230:
    ctx->pc = 0x7F0B1230u;
    // 7F0B1230: bc    12, 2, 0x7F0B123C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B123C;
        }
    }

label_7F0B1234:
    ctx->pc = 0x7F0B1234u;
    ctx->downcount -= 2;
    // 7F0B1234: lis     r3, 36
    ctx->gpr[3] = ((u32)(s32)(36) << 16);

label_7F0B1238:
    ctx->pc = 0x7F0B1238u;
    // 7F0B1238: addi    r30, r3, -10343
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-10343);

label_7F0B123C:
    ctx->pc = 0x7F0B123Cu;
    ctx->downcount -= 4;
    // 7F0B123C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B1240:
    ctx->pc = 0x7F0B1240u;
    // 7F0B1240: lwz     r0, -5664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1244:
    ctx->pc = 0x7F0B1244u;
    // 7F0B1244: cmplwi  r0, 0x0000
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

label_7F0B1248:
    ctx->pc = 0x7F0B1248u;
    // 7F0B1248: bc    12, 2, 0x7F0B1258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1258;
        }
    }

label_7F0B124C:
    ctx->pc = 0x7F0B124Cu;
    ctx->downcount -= 2;
    // 7F0B124C: cmpwi   r27, 0
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

label_7F0B1250:
    ctx->pc = 0x7F0B1250u;
    // 7F0B1250: bc    12, 2, 0x7F0B1258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1258;
        }
    }

label_7F0B1254:
    ctx->pc = 0x7F0B1254u;
    ctx->downcount -= 1;
    // 7F0B1254: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0B1258:
    ctx->pc = 0x7F0B1258u;
    ctx->downcount -= 4;
    // 7F0B1258: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0B1258u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F0B125C:
    ctx->pc = 0x7F0B125Cu;
    // 7F0B125C: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F0B1260:
    ctx->pc = 0x7F0B1260u;
    // 7F0B1260: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1264:
    ctx->pc = 0x7F0B1264u;
    // 7F0B1264: bl      0x800261FC
    {
            ctx->lr = 0x7F0B1268u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F0B1268:
    ctx->pc = 0x7F0B1268u;
    ctx->downcount -= 4;
    // 7F0B1268: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0B1268u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F0B126C:
    ctx->pc = 0x7F0B126Cu;
    // 7F0B126C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0B1270:
    ctx->pc = 0x7F0B1270u;
    // 7F0B1270: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1274:
    ctx->pc = 0x7F0B1274u;
    // 7F0B1274: bl      0x800261FC
    {
            ctx->lr = 0x7F0B1278u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F0B1278:
    ctx->pc = 0x7F0B1278u;
    ctx->downcount -= 2;
    // 7F0B1278: cmpwi   r28, 0
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

label_7F0B127C:
    ctx->pc = 0x7F0B127Cu;
    // 7F0B127C: bc    12, 2, 0x7F0B12E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B12E0;
        }
    }

label_7F0B1280:
    ctx->pc = 0x7F0B1280u;
    ctx->downcount -= 23;
    // 7F0B1280: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B1284:
    ctx->pc = 0x7F0B1284u;
    // 7F0B1284: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1288:
    ctx->pc = 0x7F0B1288u;
    // 7F0B1288: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B128C:
    ctx->pc = 0x7F0B128Cu;
    // 7F0B128C: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1290:
    ctx->pc = 0x7F0B1290u;
    // 7F0B1290: addi    r0, r1, 72
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0B1294:
    ctx->pc = 0x7F0B1294u;
    // 7F0B1294: lis     r3, 152
    ctx->gpr[3] = ((u32)(s32)(152) << 16);

label_7F0B1298:
    ctx->pc = 0x7F0B1298u;
    // 7F0B1298: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B129C:
    ctx->pc = 0x7F0B129Cu;
    // 7F0B129C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0B12A0:
    ctx->pc = 0x7F0B12A0u;
    // 7F0B12A0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B12A4:
    ctx->pc = 0x7F0B12A4u;
    // 7F0B12A4: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F0B12A8:
    ctx->pc = 0x7F0B12A8u;
    // 7F0B12A8: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B12AC:
    ctx->pc = 0x7F0B12ACu;
    // 7F0B12AC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B12B0:
    ctx->pc = 0x7F0B12B0u;
    // 7F0B12B0: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B12B4:
    ctx->pc = 0x7F0B12B4u;
    // 7F0B12B4: addi    r3, r3, -6254
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6254);

label_7F0B12B8:
    ctx->pc = 0x7F0B12B8u;
    // 7F0B12B8: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F0B12BC:
    ctx->pc = 0x7F0B12BCu;
    // 7F0B12BC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F0B12C0:
    ctx->pc = 0x7F0B12C0u;
    // 7F0B12C0: li      r8, 30000
    ctx->gpr[8] = (u32)(s32)(30000);

label_7F0B12C4:
    ctx->pc = 0x7F0B12C4u;
    // 7F0B12C4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B12C8:
    ctx->pc = 0x7F0B12C8u;
    // 7F0B12C8: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B12CC:
    ctx->pc = 0x7F0B12CCu;
    // 7F0B12CC: li      r9, 50
    ctx->gpr[9] = (u32)(s32)(50);

label_7F0B12D0:
    ctx->pc = 0x7F0B12D0u;
    // 7F0B12D0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B12D4:
    ctx->pc = 0x7F0B12D4u;
    // 7F0B12D4: stw     r29, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B12D8:
    ctx->pc = 0x7F0B12D8u;
    // 7F0B12D8: bl      0x7F349EDC
    {
            ctx->lr = 0x7F0B12DCu;
            ctx->pc = 0x7F349EDCu;
            return;
    }

label_7F0B12DC:
    ctx->pc = 0x7F0B12DCu;
    ctx->downcount -= 1;
    // 7F0B12DC: b       0x7F0B133C
    {
            goto label_7F0B133C;
    }

label_7F0B12E0:
    ctx->pc = 0x7F0B12E0u;
    ctx->downcount -= 23;
    // 7F0B12E0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B12E4:
    ctx->pc = 0x7F0B12E4u;
    // 7F0B12E4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B12E8:
    ctx->pc = 0x7F0B12E8u;
    // 7F0B12E8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B12EC:
    ctx->pc = 0x7F0B12ECu;
    // 7F0B12EC: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B12F0:
    ctx->pc = 0x7F0B12F0u;
    // 7F0B12F0: addi    r0, r1, 88
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(88);

label_7F0B12F4:
    ctx->pc = 0x7F0B12F4u;
    // 7F0B12F4: lis     r3, 53
    ctx->gpr[3] = ((u32)(s32)(53) << 16);

label_7F0B12F8:
    ctx->pc = 0x7F0B12F8u;
    // 7F0B12F8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B12FC:
    ctx->pc = 0x7F0B12FCu;
    // 7F0B12FC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F0B1300:
    ctx->pc = 0x7F0B1300u;
    // 7F0B1300: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B1304:
    ctx->pc = 0x7F0B1304u;
    // 7F0B1304: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F0B1308:
    ctx->pc = 0x7F0B1308u;
    // 7F0B1308: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B130C:
    ctx->pc = 0x7F0B130Cu;
    // 7F0B130C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B1310:
    ctx->pc = 0x7F0B1310u;
    // 7F0B1310: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B1314:
    ctx->pc = 0x7F0B1314u;
    // 7F0B1314: addi    r3, r3, -28803
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28803);

label_7F0B1318:
    ctx->pc = 0x7F0B1318u;
    // 7F0B1318: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F0B131C:
    ctx->pc = 0x7F0B131Cu;
    // 7F0B131C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F0B1320:
    ctx->pc = 0x7F0B1320u;
    // 7F0B1320: li      r8, 30000
    ctx->gpr[8] = (u32)(s32)(30000);

label_7F0B1324:
    ctx->pc = 0x7F0B1324u;
    // 7F0B1324: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B1328:
    ctx->pc = 0x7F0B1328u;
    // 7F0B1328: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B132C:
    ctx->pc = 0x7F0B132Cu;
    // 7F0B132C: li      r9, 50
    ctx->gpr[9] = (u32)(s32)(50);

label_7F0B1330:
    ctx->pc = 0x7F0B1330u;
    // 7F0B1330: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1334:
    ctx->pc = 0x7F0B1334u;
    // 7F0B1334: stw     r29, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B1338:
    ctx->pc = 0x7F0B1338u;
    // 7F0B1338: bl      0x7F349EDC
    {
            ctx->lr = 0x7F0B133Cu;
            ctx->pc = 0x7F349EDCu;
            return;
    }

label_7F0B133C:
    ctx->pc = 0x7F0B133Cu;
    ctx->downcount -= 2;
    // 7F0B133C: cmpwi   r27, 0
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

label_7F0B1340:
    ctx->pc = 0x7F0B1340u;
    // 7F0B1340: bc    12, 2, 0x7F0B1360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1360;
        }
    }

label_7F0B1344:
    ctx->pc = 0x7F0B1344u;
    ctx->downcount -= 2;
    // 7F0B1344: cmpwi   r28, 0
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

label_7F0B1348:
    ctx->pc = 0x7F0B1348u;
    // 7F0B1348: bc    12, 2, 0x7F0B1358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1358;
        }
    }

label_7F0B134C:
    ctx->pc = 0x7F0B134Cu;
    ctx->downcount -= 2;
    // 7F0B134C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1350:
    ctx->pc = 0x7F0B1350u;
    // 7F0B1350: bl      0x7F34A00C
    {
            ctx->lr = 0x7F0B1354u;
            ctx->pc = 0x7F34A00Cu;
            return;
    }

label_7F0B1354:
    ctx->pc = 0x7F0B1354u;
    ctx->downcount -= 1;
    // 7F0B1354: b       0x7F0B1360
    {
            goto label_7F0B1360;
    }

label_7F0B1358:
    ctx->pc = 0x7F0B1358u;
    ctx->downcount -= 2;
    // 7F0B1358: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B135C:
    ctx->pc = 0x7F0B135Cu;
    // 7F0B135C: bl      0x7F34A00C
    {
            ctx->lr = 0x7F0B1360u;
            ctx->pc = 0x7F34A00Cu;
            return;
    }

label_7F0B1360:
    ctx->pc = 0x7F0B1360u;
    ctx->downcount -= 17;
    // 7F0B1360: lfd     f31, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B1364:
    ctx->pc = 0x7F0B1364u;
    // 7F0B1364: lmw     r20, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B1368:
    ctx->pc = 0x7F0B1368u;
    // 7F0B1368: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B136C:
    ctx->pc = 0x7F0B136Cu;
    // 7F0B136C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B1370:
    ctx->pc = 0x7F0B1370u;
    // 7F0B1370: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F0B1374:
    ctx->pc = 0x7F0B1374u;
    // 7F0B1374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1378:
    ctx->pc = 0x7F0B1378u;
    ctx->downcount -= 7;
    // 7F0B1378: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B137C:
    ctx->pc = 0x7F0B137Cu;
    // 7F0B137C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B1380:
    ctx->pc = 0x7F0B1380u;
    // 7F0B1380: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1384:
    ctx->pc = 0x7F0B1384u;
    // 7F0B1384: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B1388:
    ctx->pc = 0x7F0B1388u;
    // 7F0B1388: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B138C:
    ctx->pc = 0x7F0B138Cu;
    // 7F0B138C: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F0B1390:
    ctx->pc = 0x7F0B1390u;
    // 7F0B1390: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B1394u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B1394:
    ctx->pc = 0x7F0B1394u;
    ctx->downcount -= 2;
    // 7F0B1394: cmplwi  r3, 0x0000
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

label_7F0B1398:
    ctx->pc = 0x7F0B1398u;
    // 7F0B1398: bc    12, 2, 0x7F0B13B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B13B4;
        }
    }

label_7F0B139C:
    ctx->pc = 0x7F0B139Cu;
    ctx->downcount -= 2;
    // 7F0B139C: addi    r4, r31, 1988
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1988);

label_7F0B13A0:
    ctx->pc = 0x7F0B13A0u;
    // 7F0B13A0: bl      0x7F0AE4AC
    {
            ctx->lr = 0x7F0B13A4u;
            ctx->pc = 0x7F0AE4ACu;
            return;
    }

label_7F0B13A4:
    ctx->pc = 0x7F0B13A4u;
    ctx->downcount -= 2;
    // 7F0B13A4: cmpwi   r3, 13
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B13A8:
    ctx->pc = 0x7F0B13A8u;
    // 7F0B13A8: bc    4, 1, 0x7F0B13B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B13B4;
        }
    }

label_7F0B13AC:
    ctx->pc = 0x7F0B13ACu;
    ctx->downcount -= 2;
    // 7F0B13AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B13B0:
    ctx->pc = 0x7F0B13B0u;
    // 7F0B13B0: b       0x7F0B13E0
    {
            goto label_7F0B13E0;
    }

label_7F0B13B4:
    ctx->pc = 0x7F0B13B4u;
    ctx->downcount -= 2;
    // 7F0B13B4: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F0B13B8:
    ctx->pc = 0x7F0B13B8u;
    // 7F0B13B8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B13BCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B13BC:
    ctx->pc = 0x7F0B13BCu;
    ctx->downcount -= 2;
    // 7F0B13BC: cmplwi  r3, 0x0000
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

label_7F0B13C0:
    ctx->pc = 0x7F0B13C0u;
    // 7F0B13C0: bc    12, 2, 0x7F0B13DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B13DC;
        }
    }

label_7F0B13C4:
    ctx->pc = 0x7F0B13C4u;
    ctx->downcount -= 2;
    // 7F0B13C4: addi    r4, r31, 1936
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1936);

label_7F0B13C8:
    ctx->pc = 0x7F0B13C8u;
    // 7F0B13C8: bl      0x7F0AE45C
    {
            ctx->lr = 0x7F0B13CCu;
            ctx->pc = 0x7F0AE45Cu;
            return;
    }

label_7F0B13CC:
    ctx->pc = 0x7F0B13CCu;
    ctx->downcount -= 2;
    // 7F0B13CC: cmpwi   r3, 13
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B13D0:
    ctx->pc = 0x7F0B13D0u;
    // 7F0B13D0: bc    4, 1, 0x7F0B13DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B13DC;
        }
    }

label_7F0B13D4:
    ctx->pc = 0x7F0B13D4u;
    ctx->downcount -= 2;
    // 7F0B13D4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B13D8:
    ctx->pc = 0x7F0B13D8u;
    // 7F0B13D8: b       0x7F0B13E0
    {
            goto label_7F0B13E0;
    }

label_7F0B13DC:
    ctx->pc = 0x7F0B13DCu;
    ctx->downcount -= 1;
    // 7F0B13DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B13E0:
    ctx->pc = 0x7F0B13E0u;
    ctx->downcount -= 6;
    // 7F0B13E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B13E4:
    ctx->pc = 0x7F0B13E4u;
    // 7F0B13E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B13E8:
    ctx->pc = 0x7F0B13E8u;
    // 7F0B13E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B13EC:
    ctx->pc = 0x7F0B13ECu;
    // 7F0B13EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B13F0:
    ctx->pc = 0x7F0B13F0u;
    // 7F0B13F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B13F4:
    ctx->pc = 0x7F0B13F4u;
    ctx->downcount -= 28;
    // 7F0B13F4: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B13F8:
    ctx->pc = 0x7F0B13F8u;
    // 7F0B13F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B13FC:
    ctx->pc = 0x7F0B13FCu;
    // 7F0B13FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B1400:
    ctx->pc = 0x7F0B1400u;
    // 7F0B1400: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1404:
    ctx->pc = 0x7F0B1404u;
    // 7F0B1404: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B1408:
    ctx->pc = 0x7F0B1408u;
    // 7F0B1408: stmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B140C:
    ctx->pc = 0x7F0B140Cu;
    // 7F0B140C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1410:
    ctx->pc = 0x7F0B1410u;
    // 7F0B1410: addi    r31, r28, 48
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(48);

label_7F0B1414:
    ctx->pc = 0x7F0B1414u;
    // 7F0B1414: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B1418:
    ctx->pc = 0x7F0B1418u;
    // 7F0B1418: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B141C:
    ctx->pc = 0x7F0B141Cu;
    // 7F0B141C: stw     r0, 2040(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2040);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1420:
    ctx->pc = 0x7F0B1420u;
    // 7F0B1420: stw     r0, 2044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1424:
    ctx->pc = 0x7F0B1424u;
    // 7F0B1424: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1428:
    ctx->pc = 0x7F0B1428u;
    // 7F0B1428: stw     r0, 1932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1932);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B142C:
    ctx->pc = 0x7F0B142Cu;
    // 7F0B142C: stw     r0, 2048(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1430:
    ctx->pc = 0x7F0B1430u;
    // 7F0B1430: stw     r0, 2052(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1434:
    ctx->pc = 0x7F0B1434u;
    // 7F0B1434: stw     r0, 2056(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1438:
    ctx->pc = 0x7F0B1438u;
    // 7F0B1438: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0B143Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0B143C:
    ctx->pc = 0x7F0B143Cu;
    ctx->downcount -= 2;
    // 7F0B143C: cmpwi   r3, 0
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

label_7F0B1440:
    ctx->pc = 0x7F0B1440u;
    // 7F0B1440: bc    4, 0, 0x7F0B144C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B144C;
        }
    }

label_7F0B1444:
    ctx->pc = 0x7F0B1444u;
    ctx->downcount -= 2;
    // 7F0B1444: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B1448:
    ctx->pc = 0x7F0B1448u;
    // 7F0B1448: b       0x7F0B17C0
    {
            goto label_7F0B17C0;
    }

label_7F0B144C:
    ctx->pc = 0x7F0B144Cu;
    ctx->downcount -= 5;
    // 7F0B144C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1450:
    ctx->pc = 0x7F0B1450u;
    // 7F0B1450: li      r4, 468
    ctx->gpr[4] = (u32)(s32)(468);

label_7F0B1454:
    ctx->pc = 0x7F0B1454u;
    // 7F0B1454: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F0B1458:
    ctx->pc = 0x7F0B1458u;
    // 7F0B1458: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F0B145C:
    ctx->pc = 0x7F0B145Cu;
    // 7F0B145C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F0B1460u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F0B1460:
    ctx->pc = 0x7F0B1460u;
    ctx->downcount -= 5;
    // 7F0B1460: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B1464:
    ctx->pc = 0x7F0B1464u;
    // 7F0B1464: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F0B1468:
    ctx->pc = 0x7F0B1468u;
    // 7F0B1468: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F0B146C:
    ctx->pc = 0x7F0B146Cu;
    // 7F0B146C: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1470:
    ctx->pc = 0x7F0B1470u;
    // 7F0B1470: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B1474u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B1474:
    ctx->pc = 0x7F0B1474u;
    ctx->downcount -= 2;
    // 7F0B1474: cmplwi  r3, 0x0000
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

label_7F0B1478:
    ctx->pc = 0x7F0B1478u;
    // 7F0B1478: bc    12, 2, 0x7F0B1484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1484;
        }
    }

label_7F0B147C:
    ctx->pc = 0x7F0B147Cu;
    ctx->downcount -= 2;
    // 7F0B147C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B1480:
    ctx->pc = 0x7F0B1480u;
    // 7F0B1480: stw     r0, 2040(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2040);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1484:
    ctx->pc = 0x7F0B1484u;
    ctx->downcount -= 2;
    // 7F0B1484: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F0B1488:
    ctx->pc = 0x7F0B1488u;
    // 7F0B1488: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B148Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B148C:
    ctx->pc = 0x7F0B148Cu;
    ctx->downcount -= 2;
    // 7F0B148C: cmplwi  r3, 0x0000
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

label_7F0B1490:
    ctx->pc = 0x7F0B1490u;
    // 7F0B1490: bc    12, 2, 0x7F0B1500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1500;
        }
    }

label_7F0B1494:
    ctx->pc = 0x7F0B1494u;
    ctx->downcount -= 1;
    // 7F0B1494: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B1498u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B1498:
    ctx->pc = 0x7F0B1498u;
    ctx->downcount -= 2;
    // 7F0B1498: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B149C:
    ctx->pc = 0x7F0B149Cu;
    // 7F0B149C: bl      0x7F3C6780
    {
            ctx->lr = 0x7F0B14A0u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F0B14A0:
    ctx->pc = 0x7F0B14A0u;
    ctx->downcount -= 24;
    // 7F0B14A0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B14A4:
    ctx->pc = 0x7F0B14A4u;
    // 7F0B14A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0B14A8:
    ctx->pc = 0x7F0B14A8u;
    // 7F0B14A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B14AC:
    ctx->pc = 0x7F0B14ACu;
    // 7F0B14AC: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B14B0:
    ctx->pc = 0x7F0B14B0u;
    // 7F0B14B0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0B14B4:
    ctx->pc = 0x7F0B14B4u;
    // 7F0B14B4: lfd     f1, -5152(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B14B8:
    ctx->pc = 0x7F0B14B8u;
    // 7F0B14B8: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B14BC:
    ctx->pc = 0x7F0B14BCu;
    // 7F0B14BC: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B14C0:
    ctx->pc = 0x7F0B14C0u;
    // 7F0B14C0: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B14C4:
    ctx->pc = 0x7F0B14C4u;
    // 7F0B14C4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B14C4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B14C8:
    ctx->pc = 0x7F0B14C8u;
    // 7F0B14C8: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B14CC:
    ctx->pc = 0x7F0B14CCu;
    // 7F0B14CC: stfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14CCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B14D0:
    ctx->pc = 0x7F0B14D0u;
    // 7F0B14D0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B14D4:
    ctx->pc = 0x7F0B14D4u;
    // 7F0B14D4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B14D8:
    ctx->pc = 0x7F0B14D8u;
    // 7F0B14D8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B14DC:
    ctx->pc = 0x7F0B14DCu;
    // 7F0B14DC: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B14E0:
    ctx->pc = 0x7F0B14E0u;
    // 7F0B14E0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B14E0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B14E4:
    ctx->pc = 0x7F0B14E4u;
    // 7F0B14E4: stfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14E4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B14E8:
    ctx->pc = 0x7F0B14E8u;
    // 7F0B14E8: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B14EC:
    ctx->pc = 0x7F0B14ECu;
    // 7F0B14EC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B14F0:
    ctx->pc = 0x7F0B14F0u;
    // 7F0B14F0: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B14F4:
    ctx->pc = 0x7F0B14F4u;
    // 7F0B14F4: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B14F8:
    ctx->pc = 0x7F0B14F8u;
    // 7F0B14F8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B14F8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B14FC:
    ctx->pc = 0x7F0B14FCu;
    // 7F0B14FC: stfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B14FCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1500:
    ctx->pc = 0x7F0B1500u;
    ctx->downcount -= 2;
    // 7F0B1500: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F0B1504:
    ctx->pc = 0x7F0B1504u;
    // 7F0B1504: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B1508u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B1508:
    ctx->pc = 0x7F0B1508u;
    ctx->downcount -= 2;
    // 7F0B1508: cmplwi  r3, 0x0000
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

label_7F0B150C:
    ctx->pc = 0x7F0B150Cu;
    // 7F0B150C: bc    12, 2, 0x7F0B1540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1540;
        }
    }

label_7F0B1510:
    ctx->pc = 0x7F0B1510u;
    ctx->downcount -= 1;
    // 7F0B1510: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B1514u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B1514:
    ctx->pc = 0x7F0B1514u;
    ctx->downcount -= 2;
    // 7F0B1514: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B1518:
    ctx->pc = 0x7F0B1518u;
    // 7F0B1518: bl      0x7F3C6780
    {
            ctx->lr = 0x7F0B151Cu;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F0B151C:
    ctx->pc = 0x7F0B151Cu;
    ctx->downcount -= 9;
    // 7F0B151C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1520:
    ctx->pc = 0x7F0B1520u;
    // 7F0B1520: sth     r0, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1524:
    ctx->pc = 0x7F0B1524u;
    // 7F0B1524: sth     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1528:
    ctx->pc = 0x7F0B1528u;
    // 7F0B1528: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B152C:
    ctx->pc = 0x7F0B152Cu;
    // 7F0B152C: sth     r0, 90(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1530:
    ctx->pc = 0x7F0B1530u;
    // 7F0B1530: sth     r0, 82(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1534:
    ctx->pc = 0x7F0B1534u;
    // 7F0B1534: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1538:
    ctx->pc = 0x7F0B1538u;
    // 7F0B1538: sth     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B153C:
    ctx->pc = 0x7F0B153Cu;
    // 7F0B153C: sth     r0, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1540:
    ctx->pc = 0x7F0B1540u;
    ctx->downcount -= 2;
    // 7F0B1540: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F0B1544:
    ctx->pc = 0x7F0B1544u;
    // 7F0B1544: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B1548u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B1548:
    ctx->pc = 0x7F0B1548u;
    ctx->downcount -= 2;
    // 7F0B1548: cmplwi  r3, 0x0000
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

label_7F0B154C:
    ctx->pc = 0x7F0B154Cu;
    // 7F0B154C: bc    12, 2, 0x7F0B155C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B155C;
        }
    }

label_7F0B1550:
    ctx->pc = 0x7F0B1550u;
    ctx->downcount -= 1;
    // 7F0B1550: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B1554u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B1554:
    ctx->pc = 0x7F0B1554u;
    ctx->downcount -= 1;
    // 7F0B1554: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B1558u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B1558:
    ctx->pc = 0x7F0B1558u;
    ctx->downcount -= 1;
    // 7F0B1558: stw     r3, 1920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1920);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B155C:
    ctx->pc = 0x7F0B155Cu;
    ctx->downcount -= 2;
    // 7F0B155C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B1560:
    ctx->pc = 0x7F0B1560u;
    // 7F0B1560: bl      0x7F0B1378
    {
            ctx->lr = 0x7F0B1564u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B1378u;
                return;
            }
            goto label_7F0B1378;
    }

label_7F0B1564:
    ctx->pc = 0x7F0B1564u;
    ctx->downcount -= 6;
    // 7F0B1564: addi    r27, r28, 448
    ctx->gpr[27] = ctx->gpr[28] + (u32)(s32)(448);

label_7F0B1568:
    ctx->pc = 0x7F0B1568u;
    // 7F0B1568: lis     r4, 132
    ctx->gpr[4] = ((u32)(s32)(132) << 16);

label_7F0B156C:
    ctx->pc = 0x7F0B156Cu;
    // 7F0B156C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B1570:
    ctx->pc = 0x7F0B1570u;
    // 7F0B1570: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0B1574:
    ctx->pc = 0x7F0B1574u;
    // 7F0B1574: addi    r4, r4, 19740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19740);

label_7F0B1578:
    ctx->pc = 0x7F0B1578u;
    // 7F0B1578: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B157Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B157C:
    ctx->pc = 0x7F0B157Cu;
    ctx->downcount -= 3;
    // 7F0B157C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B1580:
    ctx->pc = 0x7F0B1580u;
    // 7F0B1580: addi    r4, r28, 1580
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1580);

label_7F0B1584:
    ctx->pc = 0x7F0B1584u;
    // 7F0B1584: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0B1588u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0B1588:
    ctx->pc = 0x7F0B1588u;
    ctx->downcount -= 3;
    // 7F0B1588: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B158C:
    ctx->pc = 0x7F0B158Cu;
    // 7F0B158C: addi    r4, r28, 668
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(668);

label_7F0B1590:
    ctx->pc = 0x7F0B1590u;
    // 7F0B1590: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B1594u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B1594:
    ctx->pc = 0x7F0B1594u;
    ctx->downcount -= 6;
    // 7F0B1594: addi    r27, r28, 492
    ctx->gpr[27] = ctx->gpr[28] + (u32)(s32)(492);

label_7F0B1598:
    ctx->pc = 0x7F0B1598u;
    // 7F0B1598: lis     r4, 132
    ctx->gpr[4] = ((u32)(s32)(132) << 16);

label_7F0B159C:
    ctx->pc = 0x7F0B159Cu;
    // 7F0B159C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B15A0:
    ctx->pc = 0x7F0B15A0u;
    // 7F0B15A0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0B15A4:
    ctx->pc = 0x7F0B15A4u;
    // 7F0B15A4: addi    r4, r4, 19758
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19758);

label_7F0B15A8:
    ctx->pc = 0x7F0B15A8u;
    // 7F0B15A8: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B15ACu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B15AC:
    ctx->pc = 0x7F0B15ACu;
    ctx->downcount -= 3;
    // 7F0B15AC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B15B0:
    ctx->pc = 0x7F0B15B0u;
    // 7F0B15B0: addi    r4, r28, 1644
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1644);

label_7F0B15B4:
    ctx->pc = 0x7F0B15B4u;
    // 7F0B15B4: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0B15B8u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0B15B8:
    ctx->pc = 0x7F0B15B8u;
    ctx->downcount -= 3;
    // 7F0B15B8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B15BC:
    ctx->pc = 0x7F0B15BCu;
    // 7F0B15BC: addi    r4, r28, 796
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(796);

label_7F0B15C0:
    ctx->pc = 0x7F0B15C0u;
    // 7F0B15C0: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B15C4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B15C4:
    ctx->pc = 0x7F0B15C4u;
    ctx->downcount -= 5;
    // 7F0B15C4: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F0B15C8:
    ctx->pc = 0x7F0B15C8u;
    // 7F0B15C8: addi    r3, r28, 536
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(536);

label_7F0B15CC:
    ctx->pc = 0x7F0B15CCu;
    // 7F0B15CC: addi    r4, r4, -27361
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27361);

label_7F0B15D0:
    ctx->pc = 0x7F0B15D0u;
    // 7F0B15D0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0B15D4:
    ctx->pc = 0x7F0B15D4u;
    // 7F0B15D4: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B15D8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B15D8:
    ctx->pc = 0x7F0B15D8u;
    ctx->downcount -= 3;
    // 7F0B15D8: addi    r3, r28, 536
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(536);

label_7F0B15DC:
    ctx->pc = 0x7F0B15DCu;
    // 7F0B15DC: addi    r4, r28, 924
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(924);

label_7F0B15E0:
    ctx->pc = 0x7F0B15E0u;
    // 7F0B15E0: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B15E4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B15E4:
    ctx->pc = 0x7F0B15E4u;
    ctx->downcount -= 9;
    // 7F0B15E4: lwz     r4, 536(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(536);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B15E8:
    ctx->pc = 0x7F0B15E8u;
    // 7F0B15E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B15EC:
    ctx->pc = 0x7F0B15ECu;
    // 7F0B15EC: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F0B15F0:
    ctx->pc = 0x7F0B15F0u;
    // 7F0B15F0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0B15F4:
    ctx->pc = 0x7F0B15F4u;
    // 7F0B15F4: stw     r4, 29968(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29968);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B15F8:
    ctx->pc = 0x7F0B15F8u;
    // 7F0B15F8: stw     r0, 1928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1928);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B15FC:
    ctx->pc = 0x7F0B15FCu;
    // 7F0B15FC: lwz     r0, 2040(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1600:
    ctx->pc = 0x7F0B1600u;
    // 7F0B1600: cmpwi   r0, 0
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

label_7F0B1604:
    ctx->pc = 0x7F0B1604u;
    // 7F0B1604: bc    4, 2, 0x7F0B16A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B16A8;
        }
    }

label_7F0B1608:
    ctx->pc = 0x7F0B1608u;
    ctx->downcount -= 6;
    // 7F0B1608: addi    r26, r28, 580
    ctx->gpr[26] = ctx->gpr[28] + (u32)(s32)(580);

label_7F0B160C:
    ctx->pc = 0x7F0B160Cu;
    // 7F0B160C: lis     r4, 152
    ctx->gpr[4] = ((u32)(s32)(152) << 16);

label_7F0B1610:
    ctx->pc = 0x7F0B1610u;
    // 7F0B1610: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0B1614:
    ctx->pc = 0x7F0B1614u;
    // 7F0B1614: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0B1618:
    ctx->pc = 0x7F0B1618u;
    // 7F0B1618: addi    r4, r4, -6254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6254);

label_7F0B161C:
    ctx->pc = 0x7F0B161Cu;
    // 7F0B161C: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B1620u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B1620:
    ctx->pc = 0x7F0B1620u;
    ctx->downcount -= 3;
    // 7F0B1620: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0B1624:
    ctx->pc = 0x7F0B1624u;
    // 7F0B1624: addi    r4, r28, 1580
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1580);

label_7F0B1628:
    ctx->pc = 0x7F0B1628u;
    // 7F0B1628: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0B162Cu;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0B162C:
    ctx->pc = 0x7F0B162Cu;
    ctx->downcount -= 3;
    // 7F0B162C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0B1630:
    ctx->pc = 0x7F0B1630u;
    // 7F0B1630: addi    r4, r28, 1052
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1052);

label_7F0B1634:
    ctx->pc = 0x7F0B1634u;
    // 7F0B1634: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B1638u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B1638:
    ctx->pc = 0x7F0B1638u;
    ctx->downcount -= 14;
    // 7F0B1638: lwz     r3, 448(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B163C:
    ctx->pc = 0x7F0B163Cu;
    // 7F0B163C: addi    r27, r28, 624
    ctx->gpr[27] = ctx->gpr[28] + (u32)(s32)(624);

label_7F0B1640:
    ctx->pc = 0x7F0B1640u;
    // 7F0B1640: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1644:
    ctx->pc = 0x7F0B1644u;
    // 7F0B1644: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F0B1648:
    ctx->pc = 0x7F0B1648u;
    // 7F0B1648: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0B164C:
    ctx->pc = 0x7F0B164Cu;
    // 7F0B164C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B1650:
    ctx->pc = 0x7F0B1650u;
    // 7F0B1650: stw     r0, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1654:
    ctx->pc = 0x7F0B1654u;
    // 7F0B1654: addi    r4, r4, -28803
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28803);

label_7F0B1658:
    ctx->pc = 0x7F0B1658u;
    // 7F0B1658: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0B165C:
    ctx->pc = 0x7F0B165Cu;
    // 7F0B165C: lwz     r6, 580(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(580);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1660:
    ctx->pc = 0x7F0B1660u;
    // 7F0B1660: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1664:
    ctx->pc = 0x7F0B1664u;
    // 7F0B1664: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B1668:
    ctx->pc = 0x7F0B1668u;
    // 7F0B1668: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B166C:
    ctx->pc = 0x7F0B166Cu;
    // 7F0B166C: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B1670u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B1670:
    ctx->pc = 0x7F0B1670u;
    ctx->downcount -= 3;
    // 7F0B1670: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B1674:
    ctx->pc = 0x7F0B1674u;
    // 7F0B1674: addi    r4, r28, 1580
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1580);

label_7F0B1678:
    ctx->pc = 0x7F0B1678u;
    // 7F0B1678: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0B167Cu;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0B167C:
    ctx->pc = 0x7F0B167Cu;
    ctx->downcount -= 3;
    // 7F0B167C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0B1680:
    ctx->pc = 0x7F0B1680u;
    // 7F0B1680: addi    r4, r28, 1180
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1180);

label_7F0B1684:
    ctx->pc = 0x7F0B1684u;
    // 7F0B1684: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B1688u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B1688:
    ctx->pc = 0x7F0B1688u;
    ctx->downcount -= 8;
    // 7F0B1688: lwz     r4, 448(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B168C:
    ctx->pc = 0x7F0B168Cu;
    // 7F0B168C: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1690:
    ctx->pc = 0x7F0B1690u;
    // 7F0B1690: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0B1694:
    ctx->pc = 0x7F0B1694u;
    // 7F0B1694: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1698:
    ctx->pc = 0x7F0B1698u;
    // 7F0B1698: lwz     r3, 624(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B169C:
    ctx->pc = 0x7F0B169Cu;
    // 7F0B169C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B16A0:
    ctx->pc = 0x7F0B16A0u;
    // 7F0B16A0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B16A4:
    ctx->pc = 0x7F0B16A4u;
    // 7F0B16A4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B16A8:
    ctx->pc = 0x7F0B16A8u;
    ctx->downcount -= 2;
    // 7F0B16A8: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F0B16AC:
    ctx->pc = 0x7F0B16ACu;
    // 7F0B16AC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B16B0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B16B0:
    ctx->pc = 0x7F0B16B0u;
    ctx->downcount -= 2;
    // 7F0B16B0: cmplwi  r3, 0x0000
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

label_7F0B16B4:
    ctx->pc = 0x7F0B16B4u;
    // 7F0B16B4: bc    12, 2, 0x7F0B16C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B16C4;
        }
    }

label_7F0B16B8:
    ctx->pc = 0x7F0B16B8u;
    ctx->downcount -= 1;
    // 7F0B16B8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B16BCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B16BC:
    ctx->pc = 0x7F0B16BCu;
    ctx->downcount -= 1;
    // 7F0B16BC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B16C0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B16C0:
    ctx->pc = 0x7F0B16C0u;
    ctx->downcount -= 1;
    // 7F0B16C0: stw     r3, 1912(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1912);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B16C4:
    ctx->pc = 0x7F0B16C4u;
    ctx->downcount -= 2;
    // 7F0B16C4: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F0B16C8:
    ctx->pc = 0x7F0B16C8u;
    // 7F0B16C8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B16CCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B16CC:
    ctx->pc = 0x7F0B16CCu;
    ctx->downcount -= 2;
    // 7F0B16CC: cmplwi  r3, 0x0000
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

label_7F0B16D0:
    ctx->pc = 0x7F0B16D0u;
    // 7F0B16D0: bc    12, 2, 0x7F0B1704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1704;
        }
    }

label_7F0B16D4:
    ctx->pc = 0x7F0B16D4u;
    ctx->downcount -= 2;
    // 7F0B16D4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0B16D8:
    ctx->pc = 0x7F0B16D8u;
    // 7F0B16D8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0B16DC:
    ctx->downcount -= 1;
    // 7F0B16DC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B16E0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B16E0:
    ctx->downcount -= 2;
    // 7F0B16E0: cmplwi  r3, 0x0000
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

label_7F0B16E4:
    // 7F0B16E4: bc    12, 2, 0x7F0B16F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B16F4;
        }
    }

label_7F0B16E8:
    ctx->downcount -= 1;
    // 7F0B16E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F0B16ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F0B16EC:
    ctx->downcount -= 2;
    // 7F0B16EC: addi    r0, r27, 2052
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(2052);

label_7F0B16F0:
    ctx->pc = 0x7F0B16F0u;
    // 7F0B16F0: stwx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B16F4:
    ctx->downcount -= 4;
    // 7F0B16F4: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0B16F8:
    // 7F0B16F8: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F0B16FC:
    // 7F0B16FC: cmpwi   r26, 2
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

label_7F0B1700:
    // 7F0B1700: bc    12, 0, 0x7F0B16DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B16DCu;
                return;
            }
            goto label_7F0B16DC;
        }
    }

label_7F0B1704:
    ctx->pc = 0x7F0B1704u;
    ctx->downcount -= 24;
    // 7F0B1704: stw     r30, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0B1708:
    ctx->pc = 0x7F0B1708u;
    // 7F0B1708: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B170C:
    ctx->pc = 0x7F0B170Cu;
    // 7F0B170C: lis     r8, 32586
    ctx->gpr[8] = ((u32)(s32)(32586) << 16);

label_7F0B1710:
    ctx->pc = 0x7F0B1710u;
    // 7F0B1710: lis     r7, 32586
    ctx->gpr[7] = ((u32)(s32)(32586) << 16);

label_7F0B1714:
    ctx->pc = 0x7F0B1714u;
    // 7F0B1714: stw     r29, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B1718:
    ctx->pc = 0x7F0B1718u;
    // 7F0B1718: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F0B171C:
    ctx->pc = 0x7F0B171Cu;
    // 7F0B171C: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0B1720:
    ctx->pc = 0x7F0B1720u;
    // 7F0B1720: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B1724:
    ctx->pc = 0x7F0B1724u;
    // 7F0B1724: stw     r9, 1884(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1884);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1728:
    ctx->pc = 0x7F0B1728u;
    // 7F0B1728: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B172C:
    ctx->pc = 0x7F0B172Cu;
    // 7F0B172C: stw     r9, 1888(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1888);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1730:
    ctx->pc = 0x7F0B1730u;
    // 7F0B1730: stw     r9, 1892(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1892);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1734:
    ctx->pc = 0x7F0B1734u;
    // 7F0B1734: lha     r0, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B1738:
    ctx->pc = 0x7F0B1738u;
    // 7F0B1738: stw     r0, 1900(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B173C:
    ctx->pc = 0x7F0B173Cu;
    // 7F0B173C: stw     r9, 1904(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1904);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1740:
    ctx->pc = 0x7F0B1740u;
    // 7F0B1740: stw     r9, 29940(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(29940);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1744:
    ctx->pc = 0x7F0B1744u;
    // 7F0B1744: stw     r9, 29936(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(29936);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1748:
    ctx->pc = 0x7F0B1748u;
    // 7F0B1748: stw     r9, 29964(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(29964);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B174C:
    ctx->pc = 0x7F0B174Cu;
    // 7F0B174C: stw     r9, 29960(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(29960);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1750:
    ctx->pc = 0x7F0B1750u;
    // 7F0B1750: stw     r9, 29956(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29956);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1754:
    ctx->pc = 0x7F0B1754u;
    // 7F0B1754: stw     r9, 29952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29952);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1758:
    ctx->pc = 0x7F0B1758u;
    // 7F0B1758: lwz     r0, 2040(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B175C:
    ctx->pc = 0x7F0B175Cu;
    // 7F0B175C: cmpwi   r0, 0
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

label_7F0B1760:
    ctx->pc = 0x7F0B1760u;
    // 7F0B1760: bc    4, 2, 0x7F0B17BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B17BC;
        }
    }

label_7F0B1764:
    ctx->pc = 0x7F0B1764u;
    ctx->downcount -= 7;
    // 7F0B1764: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1768:
    ctx->pc = 0x7F0B1768u;
    // 7F0B1768: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0B176C:
    ctx->pc = 0x7F0B176Cu;
    // 7F0B176C: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F0B1770:
    ctx->pc = 0x7F0B1770u;
    // 7F0B1770: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B1774:
    ctx->pc = 0x7F0B1774u;
    // 7F0B1774: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F0B1778:
    ctx->pc = 0x7F0B1778u;
    // 7F0B1778: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B177C:
    loop_7F0B177C(ctx);
    if (ctx->pc == 0x7F0B1790u) goto label_7F0B1790;
    return;
label_7F0B1780:
    ctx->pc = 0x7F0B1780u;
    // 7F0B1780: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0B1784:
    ctx->pc = 0x7F0B1784u;
    // 7F0B1784: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1788:
    ctx->pc = 0x7F0B1788u;
    // 7F0B1788: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0B178C:
    // 7F0B178C: bc    16, 0, 0x7F0B177C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B177Cu;
                return;
            }
            goto label_7F0B177C;
        }
    }

label_7F0B1790:
    ctx->pc = 0x7F0B1790u;
    ctx->downcount -= 11;
    // 7F0B1790: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1794:
    ctx->pc = 0x7F0B1794u;
    // 7F0B1794: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B1798:
    ctx->pc = 0x7F0B1798u;
    // 7F0B1798: addi    r4, r3, -5072
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5072);

label_7F0B179C:
    ctx->pc = 0x7F0B179Cu;
    // 7F0B179C: addi    r3, r28, 2060
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(2060);

label_7F0B17A0:
    ctx->pc = 0x7F0B17A0u;
    // 7F0B17A0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B17A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B17A4:
    ctx->pc = 0x7F0B17A4u;
    // 7F0B17A4: addi    r4, r28, 2096
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(2096);

label_7F0B17A8:
    ctx->pc = 0x7F0B17A8u;
    // 7F0B17A8: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_7F0B17AC:
    ctx->pc = 0x7F0B17ACu;
    // 7F0B17AC: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B17ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B17B0:
    ctx->pc = 0x7F0B17B0u;
    // 7F0B17B0: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B17B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B17B4:
    ctx->pc = 0x7F0B17B4u;
    // 7F0B17B4: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B17B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B17B8:
    ctx->pc = 0x7F0B17B8u;
    // 7F0B17B8: bl      0x7F094ED8
    {
            ctx->lr = 0x7F0B17BCu;
            ctx->pc = 0x7F094ED8u;
            return;
    }

label_7F0B17BC:
    ctx->pc = 0x7F0B17BCu;
    ctx->downcount -= 1;
    // 7F0B17BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B17C0:
    ctx->pc = 0x7F0B17C0u;
    ctx->downcount -= 16;
    // 7F0B17C0: lmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B17C4:
    ctx->pc = 0x7F0B17C4u;
    // 7F0B17C4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B17C8:
    ctx->pc = 0x7F0B17C8u;
    // 7F0B17C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B17CC:
    ctx->pc = 0x7F0B17CCu;
    // 7F0B17CC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F0B17D0:
    ctx->pc = 0x7F0B17D0u;
    // 7F0B17D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B17D4:
    ctx->pc = 0x7F0B17D4u;
    ctx->downcount -= 21;
    // 7F0B17D4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B17D8:
    ctx->pc = 0x7F0B17D8u;
    // 7F0B17D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B17DC:
    ctx->pc = 0x7F0B17DCu;
    // 7F0B17DC: li      r5, 2768
    ctx->gpr[5] = (u32)(s32)(2768);

label_7F0B17E0:
    ctx->pc = 0x7F0B17E0u;
    // 7F0B17E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B17E4:
    ctx->pc = 0x7F0B17E4u;
    // 7F0B17E4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B17E8:
    ctx->pc = 0x7F0B17E8u;
    // 7F0B17E8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B17EC:
    ctx->pc = 0x7F0B17ECu;
    // 7F0B17EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B17F0:
    ctx->pc = 0x7F0B17F0u;
    // 7F0B17F0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B17F4:
    ctx->pc = 0x7F0B17F4u;
    // 7F0B17F4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0B17F8:
    ctx->pc = 0x7F0B17F8u;
    // 7F0B17F8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B17FC:
    ctx->pc = 0x7F0B17FCu;
    // 7F0B17FC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0B1800u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0B1800:
    ctx->pc = 0x7F0B1800u;
    ctx->downcount -= 2;
    // 7F0B1800: or.   r31, r3, r3
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

label_7F0B1804:
    ctx->pc = 0x7F0B1804u;
    // 7F0B1804: bc    12, 2, 0x7F0B1844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1844;
        }
    }

label_7F0B1808:
    ctx->pc = 0x7F0B1808u;
    ctx->downcount -= 5;
    // 7F0B1808: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B180C:
    ctx->pc = 0x7F0B180Cu;
    // 7F0B180C: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0B1810:
    ctx->pc = 0x7F0B1810u;
    // 7F0B1810: addi    r4, r4, 1780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1780);

label_7F0B1814:
    ctx->pc = 0x7F0B1814u;
    // 7F0B1814: addi    r5, r5, 4176
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4176);

label_7F0B1818:
    ctx->pc = 0x7F0B1818u;
    // 7F0B1818: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0B181Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0B181C:
    ctx->pc = 0x7F0B181Cu;
    ctx->downcount -= 4;
    // 7F0B181C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1820:
    ctx->pc = 0x7F0B1820u;
    // 7F0B1820: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B1824:
    ctx->pc = 0x7F0B1824u;
    // 7F0B1824: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B1828:
    ctx->pc = 0x7F0B1828u;
    // 7F0B1828: bl      0x7F0B13F4
    {
            ctx->lr = 0x7F0B182Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B13F4u;
                return;
            }
            goto label_7F0B13F4;
    }

label_7F0B182C:
    ctx->pc = 0x7F0B182Cu;
    ctx->downcount -= 2;
    // 7F0B182C: cmpwi   r3, 0
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

label_7F0B1830:
    ctx->pc = 0x7F0B1830u;
    // 7F0B1830: bc    4, 0, 0x7F0B1844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1844;
        }
    }

label_7F0B1834:
    ctx->pc = 0x7F0B1834u;
    ctx->downcount -= 2;
    // 7F0B1834: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1838:
    ctx->pc = 0x7F0B1838u;
    // 7F0B1838: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B183Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B183C:
    ctx->pc = 0x7F0B183Cu;
    ctx->downcount -= 2;
    // 7F0B183C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B1840:
    ctx->pc = 0x7F0B1840u;
    // 7F0B1840: b       0x7F0B1848
    {
            goto label_7F0B1848;
    }

label_7F0B1844:
    ctx->pc = 0x7F0B1844u;
    ctx->downcount -= 1;
    // 7F0B1844: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1848:
    ctx->pc = 0x7F0B1848u;
    ctx->downcount -= 16;
    // 7F0B1848: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B184C:
    ctx->pc = 0x7F0B184Cu;
    // 7F0B184C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1850:
    ctx->pc = 0x7F0B1850u;
    // 7F0B1850: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B1854:
    ctx->pc = 0x7F0B1854u;
    // 7F0B1854: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B1858:
    ctx->pc = 0x7F0B1858u;
    // 7F0B1858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B185C:
    ctx->pc = 0x7F0B185Cu;
    ctx->downcount -= 56;
    // 7F0B185C: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B1860:
    ctx->pc = 0x7F0B1860u;
    // 7F0B1860: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B1864:
    ctx->pc = 0x7F0B1864u;
    // 7F0B1864: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F0B1868:
    ctx->pc = 0x7F0B1868u;
    // 7F0B1868: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B186C:
    ctx->pc = 0x7F0B186Cu;
    // 7F0B186C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1870:
    ctx->pc = 0x7F0B1870u;
    // 7F0B1870: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0B1874:
    ctx->pc = 0x7F0B1874u;
    // 7F0B1874: lfd     f1, -5152(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1874u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B1878:
    ctx->pc = 0x7F0B1878u;
    // 7F0B1878: stmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B187C:
    ctx->pc = 0x7F0B187Cu;
    // 7F0B187C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B1880:
    ctx->pc = 0x7F0B1880u;
    // 7F0B1880: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B1884:
    ctx->pc = 0x7F0B1884u;
    // 7F0B1884: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1888:
    ctx->pc = 0x7F0B1888u;
    // 7F0B1888: stw     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B188C:
    ctx->pc = 0x7F0B188Cu;
    // 7F0B188C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0B1890:
    ctx->pc = 0x7F0B1890u;
    // 7F0B1890: addi    r8, r6, 12832
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F0B1894:
    ctx->pc = 0x7F0B1894u;
    // 7F0B1894: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B1898:
    ctx->pc = 0x7F0B1898u;
    // 7F0B1898: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B189C:
    ctx->pc = 0x7F0B189Cu;
    // 7F0B189C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B18A0:
    ctx->pc = 0x7F0B18A0u;
    // 7F0B18A0: addi    r10, r6, -5068
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-5068);

label_7F0B18A4:
    ctx->pc = 0x7F0B18A4u;
    // 7F0B18A4: or   r3, r8, r8
    {
        ctx->gpr[3] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0B18A8:
    ctx->pc = 0x7F0B18A8u;
    // 7F0B18A8: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B18A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B18AC:
    ctx->pc = 0x7F0B18ACu;
    // 7F0B18AC: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0B18B0:
    ctx->pc = 0x7F0B18B0u;
    // 7F0B18B0: lwzu     r5, 12808(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12808);
        ctx->gpr[5] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F0B18B4:
    ctx->pc = 0x7F0B18B4u;
    // 7F0B18B4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B18B4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B18B8:
    ctx->pc = 0x7F0B18B8u;
    // 7F0B18B8: lwz     r9, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0B18BC:
    ctx->pc = 0x7F0B18BCu;
    // 7F0B18BC: lwz     r26, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F0B18C0:
    ctx->pc = 0x7F0B18C0u;
    // 7F0B18C0: lwz     r27, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F0B18C4:
    ctx->pc = 0x7F0B18C4u;
    // 7F0B18C4: lwz     r28, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F0B18C8:
    ctx->pc = 0x7F0B18C8u;
    // 7F0B18C8: lwz     r12, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0B18CC:
    ctx->pc = 0x7F0B18CCu;
    // 7F0B18CC: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0B18D0:
    ctx->pc = 0x7F0B18D0u;
    // 7F0B18D0: lwz     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B18D4:
    ctx->pc = 0x7F0B18D4u;
    // 7F0B18D4: lwz     r8, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0B18D8:
    ctx->pc = 0x7F0B18D8u;
    // 7F0B18D8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B18DC:
    ctx->pc = 0x7F0B18DCu;
    // 7F0B18DC: stw     r9, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B18E0:
    ctx->pc = 0x7F0B18E0u;
    // 7F0B18E0: stw     r26, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F0B18E4:
    ctx->pc = 0x7F0B18E4u;
    // 7F0B18E4: stw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0B18E8:
    ctx->pc = 0x7F0B18E8u;
    // 7F0B18E8: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0B18EC:
    ctx->pc = 0x7F0B18ECu;
    // 7F0B18EC: stw     r12, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0B18F0:
    ctx->pc = 0x7F0B18F0u;
    // 7F0B18F0: stw     r11, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0B18F4:
    ctx->pc = 0x7F0B18F4u;
    // 7F0B18F4: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B18F8:
    ctx->pc = 0x7F0B18F8u;
    // 7F0B18F8: stw     r8, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B18FC:
    ctx->pc = 0x7F0B18FCu;
    // 7F0B18FC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B18FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1900:
    ctx->pc = 0x7F0B1900u;
    // 7F0B1900: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1904:
    ctx->pc = 0x7F0B1904u;
    // 7F0B1904: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1908:
    ctx->pc = 0x7F0B1908u;
    // 7F0B1908: lha     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B190C:
    ctx->pc = 0x7F0B190Cu;
    // 7F0B190C: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B1910:
    ctx->pc = 0x7F0B1910u;
    // 7F0B1910: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0B1914u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0B1914:
    ctx->pc = 0x7F0B1914u;
    ctx->downcount -= 4;
    // 7F0B1914: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B1918:
    ctx->pc = 0x7F0B1918u;
    // 7F0B1918: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B191C:
    ctx->pc = 0x7F0B191Cu;
    // 7F0B191C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1920:
    ctx->pc = 0x7F0B1920u;
    // 7F0B1920: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0B1924u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0B1924:
    ctx->pc = 0x7F0B1924u;
    ctx->downcount -= 4;
    // 7F0B1924: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B1928:
    ctx->pc = 0x7F0B1928u;
    // 7F0B1928: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B192C:
    ctx->pc = 0x7F0B192Cu;
    // 7F0B192C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1930:
    ctx->pc = 0x7F0B1930u;
    // 7F0B1930: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0B1934u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0B1934:
    ctx->pc = 0x7F0B1934u;
    ctx->downcount -= 4;
    // 7F0B1934: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B1938:
    ctx->pc = 0x7F0B1938u;
    // 7F0B1938: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B193C:
    ctx->pc = 0x7F0B193Cu;
    // 7F0B193C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B1940:
    ctx->pc = 0x7F0B1940u;
    // 7F0B1940: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0B1944u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0B1944:
    ctx->pc = 0x7F0B1944u;
    ctx->downcount -= 6;
    // 7F0B1944: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1948:
    ctx->pc = 0x7F0B1948u;
    // 7F0B1948: sth     r31, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F0B194C:
    ctx->pc = 0x7F0B194Cu;
    // 7F0B194C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1950:
    ctx->pc = 0x7F0B1950u;
    // 7F0B1950: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0B1954:
    ctx->pc = 0x7F0B1954u;
    // 7F0B1954: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1958:
    ctx->pc = 0x7F0B1958u;
    // 7F0B1958: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0B195Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0B195C:
    ctx->pc = 0x7F0B195Cu;
    ctx->downcount -= 3;
    // 7F0B195C: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0B1960:
    ctx->pc = 0x7F0B1960u;
    // 7F0B1960: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B1964:
    ctx->pc = 0x7F0B1964u;
    // 7F0B1964: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0B1968u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0B1968:
    ctx->pc = 0x7F0B1968u;
    ctx->downcount -= 4;
    // 7F0B1968: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B196C:
    ctx->pc = 0x7F0B196Cu;
    // 7F0B196C: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0B1970:
    ctx->pc = 0x7F0B1970u;
    // 7F0B1970: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1974:
    ctx->pc = 0x7F0B1974u;
    // 7F0B1974: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0B1978u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0B1978:
    ctx->pc = 0x7F0B1978u;
    ctx->downcount -= 4;
    // 7F0B1978: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0B197C:
    ctx->pc = 0x7F0B197Cu;
    // 7F0B197C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B1980:
    ctx->pc = 0x7F0B1980u;
    // 7F0B1980: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B1984:
    ctx->pc = 0x7F0B1984u;
    // 7F0B1984: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0B1988u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0B1988:
    ctx->pc = 0x7F0B1988u;
    ctx->downcount -= 4;
    // 7F0B1988: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0B198C:
    ctx->pc = 0x7F0B198Cu;
    // 7F0B198C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B1990:
    ctx->pc = 0x7F0B1990u;
    // 7F0B1990: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B1994:
    ctx->pc = 0x7F0B1994u;
    // 7F0B1994: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0B1998u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0B1998:
    ctx->pc = 0x7F0B1998u;
    ctx->downcount -= 9;
    // 7F0B1998: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B199C:
    ctx->pc = 0x7F0B199Cu;
    // 7F0B199C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B199Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B19A0:
    ctx->pc = 0x7F0B19A0u;
    // 7F0B19A0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B19A0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0B19A4:
    ctx->pc = 0x7F0B19A4u;
    // 7F0B19A4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B19A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0B19A8:
    ctx->pc = 0x7F0B19A8u;
    // 7F0B19A8: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B19A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0B19AC:
    ctx->pc = 0x7F0B19ACu;
    // 7F0B19AC: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B19ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0B19B0:
    ctx->pc = 0x7F0B19B0u;
    // 7F0B19B0: lwz     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B19B4:
    ctx->pc = 0x7F0B19B4u;
    // 7F0B19B4: lwz     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B19B8:
    ctx->pc = 0x7F0B19B8u;
    // 7F0B19B8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0B19BCu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0B19BC:
    ctx->pc = 0x7F0B19BCu;
    ctx->downcount -= 17;
    // 7F0B19BC: sth     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B19C0:
    ctx->pc = 0x7F0B19C0u;
    // 7F0B19C0: lmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B19C4:
    ctx->pc = 0x7F0B19C4u;
    // 7F0B19C4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B19C8:
    ctx->pc = 0x7F0B19C8u;
    // 7F0B19C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B19CC:
    ctx->pc = 0x7F0B19CCu;
    // 7F0B19CC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F0B19D0:
    ctx->pc = 0x7F0B19D0u;
    // 7F0B19D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B19D4:
    ctx->pc = 0x7F0B19D4u;
    ctx->downcount -= 1;
    // 7F0B19D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B19D8:
    ctx->pc = 0x7F0B19D8u;
    ctx->downcount -= 1;
    // 7F0B19D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B19DC:
    ctx->pc = 0x7F0B19DCu;
    ctx->downcount -= 11;
    // 7F0B19DC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B19E0:
    ctx->pc = 0x7F0B19E0u;
    // 7F0B19E0: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0B19E4:
    ctx->pc = 0x7F0B19E4u;
    // 7F0B19E4: addi    r4, r3, 21616
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(21616);

label_7F0B19E8:
    ctx->pc = 0x7F0B19E8u;
    // 7F0B19E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B19EC:
    ctx->pc = 0x7F0B19ECu;
    // 7F0B19EC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B19F0:
    ctx->pc = 0x7F0B19F0u;
    // 7F0B19F0: addi    r0, r5, 20080
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(20080);

label_7F0B19F4:
    ctx->pc = 0x7F0B19F4u;
    // 7F0B19F4: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0B19F8:
    ctx->pc = 0x7F0B19F8u;
    // 7F0B19F8: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_7F0B19FC:
    ctx->pc = 0x7F0B19FCu;
    // 7F0B19FC: cmpwi   r4, 0
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

label_7F0B1A00:
    ctx->pc = 0x7F0B1A00u;
    // 7F0B1A00: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1A04:
    ctx->pc = 0x7F0B1A04u;
    ctx->downcount -= 5;
    // 7F0B1A04: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1A08:
    ctx->pc = 0x7F0B1A08u;
    // 7F0B1A08: lwz     r4, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1A0C:
    // 7F0B1A0C: addis   r0, r4, -4
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-4) << 16);

label_7F0B1A10:
    // 7F0B1A10: cmplwi  r0, 0x5791
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x5791u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B1A14:
    // 7F0B1A14: bc    4, 2, 0x7F0B1A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1A1C;
        }
    }

label_7F0B1A18:
    ctx->downcount -= 1;
    // 7F0B1A18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B1A1C:
    ctx->downcount -= 3;
    // 7F0B1A1C: addis   r0, r4, -114
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-114) << 16);

label_7F0B1A20:
    // 7F0B1A20: cmplwi  r0, 0x1AF3
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x1AF3u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B1A24:
    // 7F0B1A24: bc    4, 2, 0x7F0B1A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1A2C;
        }
    }

label_7F0B1A28:
    ctx->downcount -= 1;
    // 7F0B1A28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B1A2C:
    ctx->downcount -= 2;
    // 7F0B1A2C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F0B1A30:
    // 7F0B1A30: bc    16, 0, 0x7F0B1A04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B1A04u;
                return;
            }
            goto label_7F0B1A04;
        }
    }

label_7F0B1A34:
    ctx->pc = 0x7F0B1A34u;
    ctx->downcount -= 1;
    // 7F0B1A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1A38:
    ctx->pc = 0x7F0B1A38u;
    ctx->downcount -= 13;
    // 7F0B1A38: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0B1A3C:
    ctx->pc = 0x7F0B1A3Cu;
    // 7F0B1A3C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F0B1A40:
    ctx->pc = 0x7F0B1A40u;
    // 7F0B1A40: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F0B1A44:
    ctx->pc = 0x7F0B1A44u;
    // 7F0B1A44: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1A48:
    ctx->pc = 0x7F0B1A48u;
    // 7F0B1A48: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F0B1A4C:
    ctx->pc = 0x7F0B1A4Cu;
    // 7F0B1A4C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F0B1A50:
    ctx->pc = 0x7F0B1A50u;
    // 7F0B1A50: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B1A54:
    ctx->pc = 0x7F0B1A54u;
    // 7F0B1A54: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1A58:
    ctx->pc = 0x7F0B1A58u;
    // 7F0B1A58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1A5C:
    ctx->pc = 0x7F0B1A5Cu;
    ctx->downcount -= 19;
    // 7F0B1A5C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B1A60:
    ctx->pc = 0x7F0B1A60u;
    // 7F0B1A60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B1A64:
    ctx->pc = 0x7F0B1A64u;
    // 7F0B1A64: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1A68:
    ctx->pc = 0x7F0B1A68u;
    // 7F0B1A68: stmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B1A6C:
    ctx->pc = 0x7F0B1A6Cu;
    // 7F0B1A6C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1A70:
    ctx->pc = 0x7F0B1A70u;
    // 7F0B1A70: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B1A74:
    ctx->pc = 0x7F0B1A74u;
    // 7F0B1A74: lwz     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1A78:
    ctx->pc = 0x7F0B1A78u;
    // 7F0B1A78: cmplwi  r6, 0x0000
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

label_7F0B1A7C:
    ctx->pc = 0x7F0B1A7Cu;
    // 7F0B1A7C: bc    12, 2, 0x7F0B1AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1AA4;
        }
    }

label_7F0B1A80:
    ctx->pc = 0x7F0B1A80u;
    ctx->downcount -= 9;
    // 7F0B1A80: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1A84:
    ctx->pc = 0x7F0B1A84u;
    // 7F0B1A84: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1A88:
    ctx->pc = 0x7F0B1A88u;
    // 7F0B1A88: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1A8C:
    ctx->pc = 0x7F0B1A8Cu;
    // 7F0B1A8C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1A90:
    ctx->pc = 0x7F0B1A90u;
    // 7F0B1A90: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1A94:
    ctx->pc = 0x7F0B1A94u;
    // 7F0B1A94: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1A98:
    ctx->pc = 0x7F0B1A98u;
    // 7F0B1A98: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1A9C:
    ctx->pc = 0x7F0B1A9Cu;
    // 7F0B1A9C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1AA0:
    ctx->pc = 0x7F0B1AA0u;
    // 7F0B1AA0: b       0x7F0B1ACC
    {
            goto label_7F0B1ACC;
    }

label_7F0B1AA4:
    ctx->pc = 0x7F0B1AA4u;
    ctx->downcount -= 10;
    // 7F0B1AA4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B1AA8:
    ctx->pc = 0x7F0B1AA8u;
    // 7F0B1AA8: addi    r6, r3, -32312
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32312);

label_7F0B1AAC:
    ctx->pc = 0x7F0B1AACu;
    // 7F0B1AAC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1AB0:
    ctx->pc = 0x7F0B1AB0u;
    // 7F0B1AB0: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1AB4:
    ctx->pc = 0x7F0B1AB4u;
    // 7F0B1AB4: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1AB8:
    ctx->pc = 0x7F0B1AB8u;
    // 7F0B1AB8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1ABC:
    ctx->pc = 0x7F0B1ABCu;
    // 7F0B1ABC: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1AC0:
    ctx->pc = 0x7F0B1AC0u;
    // 7F0B1AC0: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1AC4:
    ctx->pc = 0x7F0B1AC4u;
    // 7F0B1AC4: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1AC8:
    ctx->pc = 0x7F0B1AC8u;
    // 7F0B1AC8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1ACC:
    ctx->pc = 0x7F0B1ACCu;
    ctx->downcount -= 11;
    // 7F0B1ACC: lwz     r24, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F0B1AD0:
    ctx->pc = 0x7F0B1AD0u;
    // 7F0B1AD0: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1AD4:
    ctx->pc = 0x7F0B1AD4u;
    // 7F0B1AD4: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1AD8:
    ctx->pc = 0x7F0B1AD8u;
    // 7F0B1AD8: cmplwi  r24, 0x0000
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

label_7F0B1ADC:
    ctx->pc = 0x7F0B1ADCu;
    // 7F0B1ADC: lwz     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1AE0:
    ctx->pc = 0x7F0B1AE0u;
    // 7F0B1AE0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1AE4:
    ctx->pc = 0x7F0B1AE4u;
    // 7F0B1AE4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1AE8:
    ctx->pc = 0x7F0B1AE8u;
    // 7F0B1AE8: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1AEC:
    ctx->pc = 0x7F0B1AECu;
    // 7F0B1AEC: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B1AF0:
    ctx->pc = 0x7F0B1AF0u;
    // 7F0B1AF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1AF4:
    ctx->pc = 0x7F0B1AF4u;
    // 7F0B1AF4: bc    12, 2, 0x7F0B1B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1B84;
        }
    }

label_7F0B1AF8:
    ctx->pc = 0x7F0B1AF8u;
    ctx->downcount -= 25;
    // 7F0B1AF8: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1AFC:
    ctx->pc = 0x7F0B1AFCu;
    // 7F0B1AFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1B00:
    ctx->pc = 0x7F0B1B00u;
    // 7F0B1B00: addi    r5, r3, -5048
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5048);

label_7F0B1B04:
    ctx->pc = 0x7F0B1B04u;
    // 7F0B1B04: addi    r7, r1, 40
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0B1B08:
    ctx->pc = 0x7F0B1B08u;
    // 7F0B1B08: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1B0C:
    ctx->pc = 0x7F0B1B0Cu;
    // 7F0B1B0C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1B10:
    ctx->pc = 0x7F0B1B10u;
    // 7F0B1B10: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1B14:
    ctx->pc = 0x7F0B1B14u;
    // 7F0B1B14: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F0B1B18:
    ctx->pc = 0x7F0B1B18u;
    // 7F0B1B18: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B1B1C:
    ctx->pc = 0x7F0B1B1Cu;
    // 7F0B1B1C: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1B20:
    ctx->pc = 0x7F0B1B20u;
    // 7F0B1B20: lfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1B24:
    ctx->pc = 0x7F0B1B24u;
    // 7F0B1B24: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0B1B28:
    ctx->pc = 0x7F0B1B28u;
    // 7F0B1B28: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1B2C:
    ctx->pc = 0x7F0B1B2Cu;
    // 7F0B1B2C: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F0B1B30:
    ctx->pc = 0x7F0B1B30u;
    // 7F0B1B30: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1B34:
    ctx->pc = 0x7F0B1B34u;
    // 7F0B1B34: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B34u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F0B1B38:
    ctx->pc = 0x7F0B1B38u;
    // 7F0B1B38: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B38u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F0B1B3C:
    ctx->pc = 0x7F0B1B3Cu;
    // 7F0B1B3C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1B40:
    ctx->pc = 0x7F0B1B40u;
    // 7F0B1B40: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B40u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F0B1B44:
    ctx->pc = 0x7F0B1B44u;
    // 7F0B1B44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1B48:
    ctx->pc = 0x7F0B1B48u;
    // 7F0B1B48: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1B4C:
    ctx->pc = 0x7F0B1B4Cu;
    // 7F0B1B4C: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1B50:
    ctx->pc = 0x7F0B1B50u;
    // 7F0B1B50: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1B50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1B54:
    ctx->pc = 0x7F0B1B54u;
    // 7F0B1B54: lwz     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1B58:
    ctx->pc = 0x7F0B1B58u;
    // 7F0B1B58: bl      0x7F014788
    {
            ctx->lr = 0x7F0B1B5Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0B1B5C:
    ctx->pc = 0x7F0B1B5Cu;
    ctx->downcount -= 4;
    // 7F0B1B5C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0B1B60:
    ctx->pc = 0x7F0B1B60u;
    // 7F0B1B60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B1B64:
    ctx->pc = 0x7F0B1B64u;
    // 7F0B1B64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B1B68:
    ctx->pc = 0x7F0B1B68u;
    // 7F0B1B68: bl      0x7F014B60
    {
            ctx->lr = 0x7F0B1B6Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0B1B6C:
    ctx->pc = 0x7F0B1B6Cu;
    ctx->downcount -= 4;
    // 7F0B1B6C: lwz     r4, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1B70:
    ctx->pc = 0x7F0B1B70u;
    // 7F0B1B70: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0B1B74:
    ctx->pc = 0x7F0B1B74u;
    // 7F0B1B74: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1B78:
    ctx->pc = 0x7F0B1B78u;
    // 7F0B1B78: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0B1B7Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0B1B7C:
    ctx->pc = 0x7F0B1B7Cu;
    ctx->downcount -= 2;
    // 7F0B1B7C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0B1B80:
    ctx->pc = 0x7F0B1B80u;
    // 7F0B1B80: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0B1B84u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0B1B84:
    ctx->pc = 0x7F0B1B84u;
    ctx->downcount -= 6;
    // 7F0B1B84: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1B88:
    ctx->pc = 0x7F0B1B88u;
    // 7F0B1B88: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0B1B8C:
    ctx->pc = 0x7F0B1B8Cu;
    // 7F0B1B8C: addi    r25, r3, 12832
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1B90:
    ctx->pc = 0x7F0B1B90u;
    // 7F0B1B90: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0B1B94:
    ctx->pc = 0x7F0B1B94u;
    // 7F0B1B94: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0B1B98:
    ctx->pc = 0x7F0B1B98u;
    // 7F0B1B98: lis     r24, 512
    ctx->gpr[24] = ((u32)(s32)(512) << 16);

label_7F0B1B9C:
    ctx->pc = 0x7F0B1B9Cu;
    ctx->downcount -= 4;
    // 7F0B1B9C: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1BA0:
    // 7F0B1BA0: cmplwi  r30, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B1BA4:
    // 7F0B1BA4: add   r31, r0, r26
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F0B1BA8:
    // 7F0B1BA8: bc    12, 1, 0x7F0B1E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1E28;
        }
    }

label_7F0B1BAC:
    ctx->downcount -= 6;
    // 7F0B1BAC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B1BB0:
    // 7F0B1BB0: addi    r3, r3, -32296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32296);

label_7F0B1BB4:
    ctx->pc = 0x7F0B1BB4u;
    // 7F0B1BB4: lwzx    r0, r3, r27
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1BB8:
    ctx->pc = 0x7F0B1BB8u;
    // 7F0B1BB8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B1BBC:
    ctx->pc = 0x7F0B1BBCu;
    // 7F0B1BBC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0B1BC0:
    ctx->downcount -= 19;
    // 7F0B1BC0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1BC4:
    ctx->pc = 0x7F0B1BC4u;
    // 7F0B1BC4: lwz     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B1BC8:
    // 7F0B1BC8: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1BCC:
    ctx->pc = 0x7F0B1BCCu;
    // 7F0B1BCC: lwz     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0B1BD0:
    ctx->pc = 0x7F0B1BD0u;
    // 7F0B1BD0: lwz     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0B1BD4:
    ctx->pc = 0x7F0B1BD4u;
    // 7F0B1BD4: lwz     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B1BD8:
    ctx->pc = 0x7F0B1BD8u;
    // 7F0B1BD8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1BDC:
    ctx->pc = 0x7F0B1BDCu;
    // 7F0B1BDC: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1BE0:
    ctx->pc = 0x7F0B1BE0u;
    // 7F0B1BE0: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1BE4:
    ctx->pc = 0x7F0B1BE4u;
    // 7F0B1BE4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1BE8:
    ctx->pc = 0x7F0B1BE8u;
    // 7F0B1BE8: stw     r10, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B1BEC:
    ctx->pc = 0x7F0B1BECu;
    // 7F0B1BEC: stw     r9, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B1BF0:
    ctx->pc = 0x7F0B1BF0u;
    // 7F0B1BF0: stw     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B1BF4:
    ctx->pc = 0x7F0B1BF4u;
    // 7F0B1BF4: stw     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B1BF8:
    ctx->pc = 0x7F0B1BF8u;
    // 7F0B1BF8: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1BFC:
    ctx->pc = 0x7F0B1BFCu;
    // 7F0B1BFC: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1C00:
    ctx->pc = 0x7F0B1C00u;
    // 7F0B1C00: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1C04:
    ctx->pc = 0x7F0B1C04u;
    // 7F0B1C04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1C08:
    // 7F0B1C08: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1C0C:
    ctx->downcount -= 2;
    // 7F0B1C0C: cmpwi   r29, 0
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

label_7F0B1C10:
    // 7F0B1C10: bc    12, 2, 0x7F0B1C34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1C34;
        }
    }

label_7F0B1C14:
    ctx->downcount -= 8;
    // 7F0B1C14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1C18:
    // 7F0B1C18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1C1C:
    ctx->pc = 0x7F0B1C1Cu;
    // 7F0B1C1C: lfs     f1, -5044(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1C20:
    ctx->pc = 0x7F0B1C20u;
    // 7F0B1C20: lfs     f0, -5040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1C24:
    ctx->pc = 0x7F0B1C24u;
    // 7F0B1C24: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1C28:
    ctx->pc = 0x7F0B1C28u;
    // 7F0B1C28: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1C2C:
    ctx->pc = 0x7F0B1C2Cu;
    // 7F0B1C2C: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1C30:
    // 7F0B1C30: b       0x7F0B1C50
    {
            goto label_7F0B1C50;
    }

label_7F0B1C34:
    ctx->downcount -= 7;
    // 7F0B1C34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1C38:
    // 7F0B1C38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1C3C:
    ctx->pc = 0x7F0B1C3Cu;
    // 7F0B1C3C: lfs     f1, -5036(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5036);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1C40:
    ctx->pc = 0x7F0B1C40u;
    // 7F0B1C40: lfs     f0, -5032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1C44:
    ctx->pc = 0x7F0B1C44u;
    // 7F0B1C44: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1C48:
    ctx->pc = 0x7F0B1C48u;
    // 7F0B1C48: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1C4C:
    ctx->pc = 0x7F0B1C4Cu;
    // 7F0B1C4C: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1C50:
    ctx->downcount -= 11;
    // 7F0B1C50: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B1C54:
    // 7F0B1C54: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B1C58:
    ctx->pc = 0x7F0B1C58u;
    // 7F0B1C58: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1C5C:
    ctx->pc = 0x7F0B1C5Cu;
    // 7F0B1C5C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1C60:
    ctx->pc = 0x7F0B1C60u;
    // 7F0B1C60: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1C64:
    ctx->pc = 0x7F0B1C64u;
    // 7F0B1C64: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1C68:
    ctx->pc = 0x7F0B1C68u;
    // 7F0B1C68: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B1C6C:
    ctx->pc = 0x7F0B1C6Cu;
    // 7F0B1C6C: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B1C70:
    ctx->pc = 0x7F0B1C70u;
    // 7F0B1C70: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B1C74:
    ctx->pc = 0x7F0B1C74u;
    // 7F0B1C74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1C78:
    // 7F0B1C78: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1C7C:
    ctx->downcount -= 15;
    // 7F0B1C7C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B1C80:
    // 7F0B1C80: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B1C84:
    ctx->pc = 0x7F0B1C84u;
    // 7F0B1C84: lfs     f3, -5028(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C84u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1C88:
    // 7F0B1C88: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1C8C:
    ctx->pc = 0x7F0B1C8Cu;
    // 7F0B1C8C: lfs     f1, -5024(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1C90:
    // 7F0B1C90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1C94:
    ctx->pc = 0x7F0B1C94u;
    // 7F0B1C94: lfs     f2, -5044(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1C98:
    ctx->pc = 0x7F0B1C98u;
    // 7F0B1C98: lfs     f0, -5020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1C9C:
    ctx->pc = 0x7F0B1C9Cu;
    // 7F0B1C9C: stfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1C9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1CA0:
    ctx->pc = 0x7F0B1CA0u;
    // 7F0B1CA0: stfs     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1CA4:
    ctx->pc = 0x7F0B1CA4u;
    // 7F0B1CA4: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1CA8:
    ctx->pc = 0x7F0B1CA8u;
    // 7F0B1CA8: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1CAC:
    ctx->pc = 0x7F0B1CACu;
    // 7F0B1CAC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1CB0:
    ctx->pc = 0x7F0B1CB0u;
    // 7F0B1CB0: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1CB4:
    // 7F0B1CB4: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1CB8:
    ctx->downcount -= 17;
    // 7F0B1CB8: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1CBC:
    // 7F0B1CBC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B1CC0:
    // 7F0B1CC0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B1CC4:
    // 7F0B1CC4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1CC8:
    ctx->pc = 0x7F0B1CC8u;
    // 7F0B1CC8: lfs     f1, -5048(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1CCC:
    // 7F0B1CCC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1CD0:
    ctx->pc = 0x7F0B1CD0u;
    // 7F0B1CD0: lfs     f4, -5016(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CD0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B1CD4:
    ctx->pc = 0x7F0B1CD4u;
    // 7F0B1CD4: lfs     f3, -5012(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CD4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1CD8:
    ctx->pc = 0x7F0B1CD8u;
    // 7F0B1CD8: lfs     f2, -5008(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1CDC:
    ctx->pc = 0x7F0B1CDCu;
    // 7F0B1CDC: lfs     f0, -5024(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1CE0:
    ctx->pc = 0x7F0B1CE0u;
    // 7F0B1CE0: stfs     f4, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B1CE4:
    ctx->pc = 0x7F0B1CE4u;
    // 7F0B1CE4: stfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1CE8:
    ctx->pc = 0x7F0B1CE8u;
    // 7F0B1CE8: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1CEC:
    ctx->pc = 0x7F0B1CECu;
    // 7F0B1CEC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1CF0:
    ctx->pc = 0x7F0B1CF0u;
    // 7F0B1CF0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1CF4:
    ctx->pc = 0x7F0B1CF4u;
    // 7F0B1CF4: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1CF8:
    // 7F0B1CF8: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1CFC:
    ctx->downcount -= 17;
    // 7F0B1CFC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1D00:
    // 7F0B1D00: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B1D04:
    // 7F0B1D04: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B1D08:
    // 7F0B1D08: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1D0C:
    ctx->pc = 0x7F0B1D0Cu;
    // 7F0B1D0C: lfs     f1, -5024(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1D10:
    // 7F0B1D10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1D14:
    ctx->pc = 0x7F0B1D14u;
    // 7F0B1D14: lfs     f4, -5048(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D14u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B1D18:
    ctx->pc = 0x7F0B1D18u;
    // 7F0B1D18: lfs     f3, -5004(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1D1C:
    ctx->pc = 0x7F0B1D1Cu;
    // 7F0B1D1C: lfs     f2, -5008(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D1Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1D20:
    ctx->pc = 0x7F0B1D20u;
    // 7F0B1D20: lfs     f0, -5000(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1D24:
    ctx->pc = 0x7F0B1D24u;
    // 7F0B1D24: stfs     f4, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B1D28:
    ctx->pc = 0x7F0B1D28u;
    // 7F0B1D28: stfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1D2C:
    ctx->pc = 0x7F0B1D2Cu;
    // 7F0B1D2C: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1D30:
    ctx->pc = 0x7F0B1D30u;
    // 7F0B1D30: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D34:
    ctx->pc = 0x7F0B1D34u;
    // 7F0B1D34: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D38:
    ctx->pc = 0x7F0B1D38u;
    // 7F0B1D38: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1D3C:
    // 7F0B1D3C: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1D40:
    ctx->downcount -= 2;
    // 7F0B1D40: cmpwi   r29, 0
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

label_7F0B1D44:
    // 7F0B1D44: bc    12, 2, 0x7F0B1D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1D68;
        }
    }

label_7F0B1D48:
    ctx->downcount -= 8;
    // 7F0B1D48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1D4C:
    // 7F0B1D4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1D50:
    ctx->pc = 0x7F0B1D50u;
    // 7F0B1D50: lfs     f1, -4996(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D50u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4996);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1D54:
    ctx->pc = 0x7F0B1D54u;
    // 7F0B1D54: lfs     f0, -4992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1D58:
    ctx->pc = 0x7F0B1D58u;
    // 7F0B1D58: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D5C:
    ctx->pc = 0x7F0B1D5Cu;
    // 7F0B1D5C: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D60:
    ctx->pc = 0x7F0B1D60u;
    // 7F0B1D60: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1D64:
    // 7F0B1D64: b       0x7F0B1D84
    {
            goto label_7F0B1D84;
    }

label_7F0B1D68:
    ctx->downcount -= 7;
    // 7F0B1D68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1D6C:
    // 7F0B1D6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1D70:
    ctx->pc = 0x7F0B1D70u;
    // 7F0B1D70: lfs     f1, -4988(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1D74:
    ctx->pc = 0x7F0B1D74u;
    // 7F0B1D74: lfs     f0, -5004(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1D78:
    ctx->pc = 0x7F0B1D78u;
    // 7F0B1D78: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D7C:
    ctx->pc = 0x7F0B1D7Cu;
    // 7F0B1D7C: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D80:
    ctx->pc = 0x7F0B1D80u;
    // 7F0B1D80: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1D84:
    ctx->downcount -= 8;
    // 7F0B1D84: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1D88:
    // 7F0B1D88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1D8C:
    ctx->pc = 0x7F0B1D8Cu;
    // 7F0B1D8C: lfs     f1, -5024(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1D90:
    ctx->pc = 0x7F0B1D90u;
    // 7F0B1D90: lfs     f0, -4984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1D94:
    ctx->pc = 0x7F0B1D94u;
    // 7F0B1D94: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D98:
    ctx->pc = 0x7F0B1D98u;
    // 7F0B1D98: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1D9C:
    ctx->pc = 0x7F0B1D9Cu;
    // 7F0B1D9C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1D9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1DA0:
    // 7F0B1DA0: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1DA4:
    ctx->downcount -= 17;
    // 7F0B1DA4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1DA8:
    // 7F0B1DA8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B1DAC:
    // 7F0B1DAC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B1DB0:
    // 7F0B1DB0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1DB4:
    ctx->pc = 0x7F0B1DB4u;
    // 7F0B1DB4: lfs     f1, -4968(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1DB8:
    // 7F0B1DB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1DBC:
    ctx->pc = 0x7F0B1DBCu;
    // 7F0B1DBC: lfs     f4, -4980(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DBCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-4980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B1DC0:
    ctx->pc = 0x7F0B1DC0u;
    // 7F0B1DC0: lfs     f3, -4976(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DC0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1DC4:
    ctx->pc = 0x7F0B1DC4u;
    // 7F0B1DC4: lfs     f2, -4972(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1DC8:
    ctx->pc = 0x7F0B1DC8u;
    // 7F0B1DC8: lfs     f0, -4964(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1DCC:
    ctx->pc = 0x7F0B1DCCu;
    // 7F0B1DCC: stfs     f4, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B1DD0:
    ctx->pc = 0x7F0B1DD0u;
    // 7F0B1DD0: stfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1DD4:
    ctx->pc = 0x7F0B1DD4u;
    // 7F0B1DD4: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1DD8:
    ctx->pc = 0x7F0B1DD8u;
    // 7F0B1DD8: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1DDC:
    ctx->pc = 0x7F0B1DDCu;
    // 7F0B1DDC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1DE0:
    ctx->pc = 0x7F0B1DE0u;
    // 7F0B1DE0: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1DE4:
    // 7F0B1DE4: b       0x7F0B1E28
    {
            goto label_7F0B1E28;
    }

label_7F0B1DE8:
    ctx->downcount -= 16;
    // 7F0B1DE8: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B1DEC:
    // 7F0B1DEC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B1DF0:
    // 7F0B1DF0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B1DF4:
    // 7F0B1DF4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B1DF8:
    ctx->pc = 0x7F0B1DF8u;
    // 7F0B1DF8: lfs     f1, -4956(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1DF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B1DFC:
    // 7F0B1DFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B1E00:
    ctx->pc = 0x7F0B1E00u;
    // 7F0B1E00: lfs     f4, -4980(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E00u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-4980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B1E04:
    ctx->pc = 0x7F0B1E04u;
    // 7F0B1E04: lfs     f3, -4976(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B1E08:
    ctx->pc = 0x7F0B1E08u;
    // 7F0B1E08: lfs     f2, -4960(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E08u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B1E0C:
    ctx->pc = 0x7F0B1E0Cu;
    // 7F0B1E0C: lfs     f0, -4952(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4952);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B1E10:
    ctx->pc = 0x7F0B1E10u;
    // 7F0B1E10: stfs     f4, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B1E14:
    ctx->pc = 0x7F0B1E14u;
    // 7F0B1E14: stfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B1E18:
    ctx->pc = 0x7F0B1E18u;
    // 7F0B1E18: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B1E1C:
    ctx->pc = 0x7F0B1E1Cu;
    // 7F0B1E1C: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1E20:
    ctx->pc = 0x7F0B1E20u;
    // 7F0B1E20: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B1E24:
    ctx->pc = 0x7F0B1E24u;
    // 7F0B1E24: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B1E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B1E28:
    ctx->pc = 0x7F0B1E28u;
    ctx->downcount -= 11;
    // 7F0B1E28: lwz     r3, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1E2C:
    // 7F0B1E2C: addic   r0, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B1E30:
    // 7F0B1E30: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B1E34:
    // 7F0B1E34: addi    r4, r24, 16401
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(16401);

label_7F0B1E38:
    ctx->pc = 0x7F0B1E38u;
    // 7F0B1E38: lwz     r5, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1E3C:
    // 7F0B1E3C: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0B1E40:
    ctx->pc = 0x7F0B1E40u;
    // 7F0B1E40: lwz     r6, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1E44:
    // 7F0B1E44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1E48:
    // 7F0B1E48: addi    r7, r1, 40
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0B1E4C:
    // 7F0B1E4C: addi    r8, r1, 24
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B1E50:
    // 7F0B1E50: bl      0x7F014788
    {
            ctx->lr = 0x7F0B1E54u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0B1E54:
    ctx->downcount -= 4;
    // 7F0B1E54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1E58:
    // 7F0B1E58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B1E5C:
    // 7F0B1E5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B1E60:
    // 7F0B1E60: bl      0x7F014B60
    {
            ctx->lr = 0x7F0B1E64u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0B1E64:
    ctx->pc = 0x7F0B1E64u;
    ctx->downcount -= 10;
    // 7F0B1E64: lwz     r5, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1E68:
    // 7F0B1E68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1E6C:
    ctx->pc = 0x7F0B1E6Cu;
    // 7F0B1E6C: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1E70:
    // 7F0B1E70: or   r9, r25, r25
    {
        ctx->gpr[9] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F0B1E74:
    ctx->pc = 0x7F0B1E74u;
    // 7F0B1E74: lwz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1E78:
    // 7F0B1E78: rlwinm r6, r5, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_7F0B1E7C:
    // 7F0B1E7C: rlwinm r7, r0, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0B1E80:
    // 7F0B1E80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1E84:
    // 7F0B1E84: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B1E88:
    // 7F0B1E88: bl      0x7F014B78
    {
            ctx->lr = 0x7F0B1E8Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0B1E8C:
    ctx->pc = 0x7F0B1E8Cu;
    ctx->downcount -= 4;
    // 7F0B1E8C: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1E90:
    // 7F0B1E90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1E94:
    ctx->pc = 0x7F0B1E94u;
    // 7F0B1E94: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1E98:
    // 7F0B1E98: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0B1E9Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0B1E9C:
    ctx->downcount -= 2;
    // 7F0B1E9C: cmpwi   r30, 0
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

label_7F0B1EA0:
    // 7F0B1EA0: bc    4, 2, 0x7F0B1ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1ECC;
        }
    }

label_7F0B1EA4:
    ctx->pc = 0x7F0B1EA4u;
    ctx->downcount -= 3;
    // 7F0B1EA4: lwz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B1EA8:
    // 7F0B1EA8: cmplwi  r4, 0x0000
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

label_7F0B1EAC:
    // 7F0B1EAC: bc    12, 2, 0x7F0B1EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1EC0;
        }
    }

label_7F0B1EB0:
    ctx->pc = 0x7F0B1EB0u;
    ctx->downcount -= 4;
    // 7F0B1EB0: lwz     r5, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1EB4:
    // 7F0B1EB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1EB8:
    ctx->pc = 0x7F0B1EB8u;
    // 7F0B1EB8: lwz     r6, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1EBC:
    // 7F0B1EBC: bl      0x7F014BBC
    {
            ctx->lr = 0x7F0B1EC0u;
            ctx->pc = 0x7F014BBCu;
            return;
    }

label_7F0B1EC0:
    ctx->downcount -= 2;
    // 7F0B1EC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1EC4:
    // 7F0B1EC4: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0B1EC8u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0B1EC8:
    ctx->downcount -= 1;
    // 7F0B1EC8: b       0x7F0B1EE0
    {
            goto label_7F0B1EE0;
    }

label_7F0B1ECC:
    ctx->pc = 0x7F0B1ECCu;
    ctx->downcount -= 5;
    // 7F0B1ECC: lwz     r3, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B1ED0:
    // 7F0B1ED0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B1ED4:
    // 7F0B1ED4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B1ED8:
    // 7F0B1ED8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B1EDC:
    // 7F0B1EDC: bl      0x7F014A50
    {
            ctx->lr = 0x7F0B1EE0u;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0B1EE0:
    ctx->downcount -= 5;
    // 7F0B1EE0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0B1EE4:
    // 7F0B1EE4: addi    r26, r26, 192
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(192);

label_7F0B1EE8:
    // 7F0B1EE8: cmpwi   r30, 13
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B1EEC:
    // 7F0B1EEC: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F0B1EF0:
    // 7F0B1EF0: bc    12, 0, 0x7F0B1B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B1B9Cu;
                return;
            }
            goto label_7F0B1B9C;
        }
    }

label_7F0B1EF4:
    ctx->pc = 0x7F0B1EF4u;
    ctx->downcount -= 16;
    // 7F0B1EF4: lmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B1EF8:
    ctx->pc = 0x7F0B1EF8u;
    // 7F0B1EF8: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1EFC:
    ctx->pc = 0x7F0B1EFCu;
    // 7F0B1EFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B1F00:
    ctx->pc = 0x7F0B1F00u;
    // 7F0B1F00: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0B1F04:
    ctx->pc = 0x7F0B1F04u;
    // 7F0B1F04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1F08:
    ctx->pc = 0x7F0B1F08u;
    ctx->downcount -= 4;
    // 7F0B1F08: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B1F0C:
    ctx->pc = 0x7F0B1F0Cu;
    // 7F0B1F0C: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F0B1F10:
    ctx->pc = 0x7F0B1F10u;
    // 7F0B1F10: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1F14:
    ctx->pc = 0x7F0B1F14u;
    // 7F0B1F14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1F18:
    ctx->pc = 0x7F0B1F18u;
    ctx->downcount -= 4;
    // 7F0B1F18: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1F1C:
    ctx->pc = 0x7F0B1F1Cu;
    // 7F0B1F1C: andc   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[4];
    }

label_7F0B1F20:
    ctx->pc = 0x7F0B1F20u;
    // 7F0B1F20: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1F24:
    ctx->pc = 0x7F0B1F24u;
    // 7F0B1F24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B1F28:
    ctx->pc = 0x7F0B1F28u;
    ctx->downcount -= 18;
    // 7F0B1F28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B1F2C:
    ctx->pc = 0x7F0B1F2Cu;
    // 7F0B1F2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B1F30:
    ctx->pc = 0x7F0B1F30u;
    // 7F0B1F30: cmplwi  r4, 0x0000
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

label_7F0B1F34:
    ctx->pc = 0x7F0B1F34u;
    // 7F0B1F34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B1F38:
    ctx->pc = 0x7F0B1F38u;
    // 7F0B1F38: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B1F3C:
    ctx->pc = 0x7F0B1F3Cu;
    // 7F0B1F3C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B1F40:
    ctx->pc = 0x7F0B1F40u;
    // 7F0B1F40: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B1F44:
    ctx->pc = 0x7F0B1F44u;
    // 7F0B1F44: bc    12, 2, 0x7F0B1F64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B1F64;
        }
    }

label_7F0B1F48:
    ctx->pc = 0x7F0B1F48u;
    ctx->downcount -= 7;
    // 7F0B1F48: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1F4C:
    ctx->pc = 0x7F0B1F4Cu;
    // 7F0B1F4C: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1F50:
    ctx->pc = 0x7F0B1F50u;
    // 7F0B1F50: addi    r5, r3, 18312
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1F54:
    ctx->pc = 0x7F0B1F54u;
    // 7F0B1F54: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B1F58:
    ctx->pc = 0x7F0B1F58u;
    // 7F0B1F58: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1F5C:
    ctx->pc = 0x7F0B1F5Cu;
    // 7F0B1F5C: addi    r4, r6, 444
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(444);

label_7F0B1F60:
    ctx->pc = 0x7F0B1F60u;
    // 7F0B1F60: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1F64u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1F64:
    ctx->pc = 0x7F0B1F64u;
    ctx->downcount -= 7;
    // 7F0B1F64: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1F68:
    ctx->pc = 0x7F0B1F68u;
    // 7F0B1F68: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1F6C:
    ctx->pc = 0x7F0B1F6Cu;
    // 7F0B1F6C: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1F70:
    ctx->pc = 0x7F0B1F70u;
    // 7F0B1F70: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B1F74:
    ctx->pc = 0x7F0B1F74u;
    // 7F0B1F74: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1F78:
    ctx->pc = 0x7F0B1F78u;
    // 7F0B1F78: addi    r4, r6, 444
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(444);

label_7F0B1F7C:
    ctx->pc = 0x7F0B1F7Cu;
    // 7F0B1F7C: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1F80u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1F80:
    ctx->pc = 0x7F0B1F80u;
    ctx->downcount -= 7;
    // 7F0B1F80: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1F84:
    ctx->pc = 0x7F0B1F84u;
    // 7F0B1F84: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1F88:
    ctx->pc = 0x7F0B1F88u;
    // 7F0B1F88: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1F8C:
    ctx->pc = 0x7F0B1F8Cu;
    // 7F0B1F8C: addi    r3, r30, 192
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(192);

label_7F0B1F90:
    ctx->pc = 0x7F0B1F90u;
    // 7F0B1F90: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1F94:
    ctx->pc = 0x7F0B1F94u;
    // 7F0B1F94: addi    r4, r6, 1092
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(1092);

label_7F0B1F98:
    ctx->pc = 0x7F0B1F98u;
    // 7F0B1F98: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1F9Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1F9C:
    ctx->pc = 0x7F0B1F9Cu;
    ctx->downcount -= 7;
    // 7F0B1F9C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1FA0:
    ctx->pc = 0x7F0B1FA0u;
    // 7F0B1FA0: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1FA4:
    ctx->pc = 0x7F0B1FA4u;
    // 7F0B1FA4: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1FA8:
    ctx->pc = 0x7F0B1FA8u;
    // 7F0B1FA8: addi    r3, r30, 384
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(384);

label_7F0B1FAC:
    ctx->pc = 0x7F0B1FACu;
    // 7F0B1FAC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1FB0:
    ctx->pc = 0x7F0B1FB0u;
    // 7F0B1FB0: addi    r4, r6, 4332
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4332);

label_7F0B1FB4:
    ctx->pc = 0x7F0B1FB4u;
    // 7F0B1FB4: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1FB8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1FB8:
    ctx->pc = 0x7F0B1FB8u;
    ctx->downcount -= 7;
    // 7F0B1FB8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1FBC:
    ctx->pc = 0x7F0B1FBCu;
    // 7F0B1FBC: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1FC0:
    ctx->pc = 0x7F0B1FC0u;
    // 7F0B1FC0: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1FC4:
    ctx->pc = 0x7F0B1FC4u;
    // 7F0B1FC4: addi    r3, r30, 576
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(576);

label_7F0B1FC8:
    ctx->pc = 0x7F0B1FC8u;
    // 7F0B1FC8: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1FCC:
    ctx->pc = 0x7F0B1FCCu;
    // 7F0B1FCC: addi    r4, r6, 1092
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(1092);

label_7F0B1FD0:
    ctx->pc = 0x7F0B1FD0u;
    // 7F0B1FD0: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1FD4u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1FD4:
    ctx->pc = 0x7F0B1FD4u;
    ctx->downcount -= 7;
    // 7F0B1FD4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1FD8:
    ctx->pc = 0x7F0B1FD8u;
    // 7F0B1FD8: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1FDC:
    ctx->pc = 0x7F0B1FDCu;
    // 7F0B1FDC: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1FE0:
    ctx->pc = 0x7F0B1FE0u;
    // 7F0B1FE0: addi    r3, r30, 768
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(768);

label_7F0B1FE4:
    ctx->pc = 0x7F0B1FE4u;
    // 7F0B1FE4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B1FE8:
    ctx->pc = 0x7F0B1FE8u;
    // 7F0B1FE8: addi    r4, r6, 444
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(444);

label_7F0B1FEC:
    ctx->pc = 0x7F0B1FECu;
    // 7F0B1FEC: bl      0x7F014964
    {
            ctx->lr = 0x7F0B1FF0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B1FF0:
    ctx->pc = 0x7F0B1FF0u;
    ctx->downcount -= 7;
    // 7F0B1FF0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B1FF4:
    ctx->pc = 0x7F0B1FF4u;
    // 7F0B1FF4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B1FF8:
    ctx->pc = 0x7F0B1FF8u;
    // 7F0B1FF8: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B1FFC:
    ctx->pc = 0x7F0B1FFCu;
    // 7F0B1FFC: addi    r3, r30, 960
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(960);

label_7F0B2000:
    ctx->pc = 0x7F0B2000u;
    // 7F0B2000: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2004:
    ctx->pc = 0x7F0B2004u;
    // 7F0B2004: addi    r4, r6, 1740
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(1740);

label_7F0B2008:
    ctx->pc = 0x7F0B2008u;
    // 7F0B2008: bl      0x7F014964
    {
            ctx->lr = 0x7F0B200Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B200C:
    ctx->pc = 0x7F0B200Cu;
    ctx->downcount -= 7;
    // 7F0B200C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2010:
    ctx->pc = 0x7F0B2010u;
    // 7F0B2010: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2014:
    ctx->pc = 0x7F0B2014u;
    // 7F0B2014: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B2018:
    ctx->pc = 0x7F0B2018u;
    // 7F0B2018: addi    r3, r30, 1152
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1152);

label_7F0B201C:
    ctx->pc = 0x7F0B201Cu;
    // 7F0B201C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2020:
    ctx->pc = 0x7F0B2020u;
    // 7F0B2020: addi    r4, r6, 2064
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(2064);

label_7F0B2024:
    ctx->pc = 0x7F0B2024u;
    // 7F0B2024: bl      0x7F014964
    {
            ctx->lr = 0x7F0B2028u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B2028:
    ctx->pc = 0x7F0B2028u;
    ctx->downcount -= 7;
    // 7F0B2028: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B202C:
    ctx->pc = 0x7F0B202Cu;
    // 7F0B202C: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2030:
    ctx->pc = 0x7F0B2030u;
    // 7F0B2030: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B2034:
    ctx->pc = 0x7F0B2034u;
    // 7F0B2034: addi    r3, r30, 1344
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1344);

label_7F0B2038:
    ctx->pc = 0x7F0B2038u;
    // 7F0B2038: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B203C:
    ctx->pc = 0x7F0B203Cu;
    // 7F0B203C: addi    r4, r6, 3036
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(3036);

label_7F0B2040:
    ctx->pc = 0x7F0B2040u;
    // 7F0B2040: bl      0x7F014964
    {
            ctx->lr = 0x7F0B2044u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B2044:
    ctx->pc = 0x7F0B2044u;
    ctx->downcount -= 7;
    // 7F0B2044: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2048:
    ctx->pc = 0x7F0B2048u;
    // 7F0B2048: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B204C:
    ctx->pc = 0x7F0B204Cu;
    // 7F0B204C: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B2050:
    ctx->pc = 0x7F0B2050u;
    // 7F0B2050: addi    r3, r30, 1536
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1536);

label_7F0B2054:
    ctx->pc = 0x7F0B2054u;
    // 7F0B2054: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2058:
    ctx->pc = 0x7F0B2058u;
    // 7F0B2058: addi    r4, r6, 3360
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(3360);

label_7F0B205C:
    ctx->pc = 0x7F0B205Cu;
    // 7F0B205C: bl      0x7F014964
    {
            ctx->lr = 0x7F0B2060u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B2060:
    ctx->pc = 0x7F0B2060u;
    ctx->downcount -= 7;
    // 7F0B2060: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2064:
    ctx->pc = 0x7F0B2064u;
    // 7F0B2064: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2068:
    ctx->pc = 0x7F0B2068u;
    // 7F0B2068: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B206C:
    ctx->pc = 0x7F0B206Cu;
    // 7F0B206C: addi    r3, r30, 1728
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1728);

label_7F0B2070:
    ctx->pc = 0x7F0B2070u;
    // 7F0B2070: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2074:
    ctx->pc = 0x7F0B2074u;
    // 7F0B2074: addi    r4, r6, 4656
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4656);

label_7F0B2078:
    ctx->pc = 0x7F0B2078u;
    // 7F0B2078: bl      0x7F014964
    {
            ctx->lr = 0x7F0B207Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B207C:
    ctx->pc = 0x7F0B207Cu;
    ctx->downcount -= 7;
    // 7F0B207C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2080:
    ctx->pc = 0x7F0B2080u;
    // 7F0B2080: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2084:
    ctx->pc = 0x7F0B2084u;
    // 7F0B2084: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B2088:
    ctx->pc = 0x7F0B2088u;
    // 7F0B2088: addi    r3, r30, 1920
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1920);

label_7F0B208C:
    ctx->pc = 0x7F0B208Cu;
    // 7F0B208C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2090:
    ctx->pc = 0x7F0B2090u;
    // 7F0B2090: addi    r4, r6, 4980
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4980);

label_7F0B2094:
    ctx->pc = 0x7F0B2094u;
    // 7F0B2094: bl      0x7F014964
    {
            ctx->lr = 0x7F0B2098u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B2098:
    ctx->pc = 0x7F0B2098u;
    ctx->downcount -= 7;
    // 7F0B2098: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B209C:
    ctx->pc = 0x7F0B209Cu;
    // 7F0B209C: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B20A0:
    ctx->pc = 0x7F0B20A0u;
    // 7F0B20A0: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B20A4:
    ctx->pc = 0x7F0B20A4u;
    // 7F0B20A4: addi    r3, r30, 2112
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2112);

label_7F0B20A8:
    ctx->pc = 0x7F0B20A8u;
    // 7F0B20A8: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B20AC:
    ctx->pc = 0x7F0B20ACu;
    // 7F0B20AC: addi    r4, r6, 5952
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(5952);

label_7F0B20B0:
    ctx->pc = 0x7F0B20B0u;
    // 7F0B20B0: bl      0x7F014964
    {
            ctx->lr = 0x7F0B20B4u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B20B4:
    ctx->pc = 0x7F0B20B4u;
    ctx->downcount -= 7;
    // 7F0B20B4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B20B8:
    ctx->pc = 0x7F0B20B8u;
    // 7F0B20B8: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B20BC:
    ctx->pc = 0x7F0B20BCu;
    // 7F0B20BC: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0B20C0:
    ctx->pc = 0x7F0B20C0u;
    // 7F0B20C0: addi    r3, r30, 2304
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2304);

label_7F0B20C4:
    ctx->pc = 0x7F0B20C4u;
    // 7F0B20C4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B20C8:
    ctx->pc = 0x7F0B20C8u;
    // 7F0B20C8: addi    r4, r6, 6276
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(6276);

label_7F0B20CC:
    ctx->pc = 0x7F0B20CCu;
    // 7F0B20CC: bl      0x7F014964
    {
            ctx->lr = 0x7F0B20D0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0B20D0:
    ctx->pc = 0x7F0B20D0u;
    ctx->downcount -= 16;
    // 7F0B20D0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B20D4:
    ctx->pc = 0x7F0B20D4u;
    // 7F0B20D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B20D8:
    ctx->pc = 0x7F0B20D8u;
    // 7F0B20D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B20DC:
    ctx->pc = 0x7F0B20DCu;
    // 7F0B20DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B20E0:
    ctx->pc = 0x7F0B20E0u;
    // 7F0B20E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B20E4:
    ctx->pc = 0x7F0B20E4u;
    ctx->downcount -= 6;
    // 7F0B20E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B20E8:
    ctx->pc = 0x7F0B20E8u;
    // 7F0B20E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B20EC:
    ctx->pc = 0x7F0B20ECu;
    // 7F0B20EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B20F0:
    ctx->pc = 0x7F0B20F0u;
    // 7F0B20F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B20F4:
    ctx->pc = 0x7F0B20F4u;
    // 7F0B20F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B20F8:
    ctx->pc = 0x7F0B20F8u;
    // 7F0B20F8: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B20FCu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B20FC:
    ctx->pc = 0x7F0B20FCu;
    ctx->downcount -= 2;
    // 7F0B20FC: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_7F0B2100:
    ctx->pc = 0x7F0B2100u;
    // 7F0B2100: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2104u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2104:
    ctx->pc = 0x7F0B2104u;
    ctx->downcount -= 2;
    // 7F0B2104: addi    r3, r31, 384
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(384);

label_7F0B2108:
    ctx->pc = 0x7F0B2108u;
    // 7F0B2108: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B210Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B210C:
    ctx->pc = 0x7F0B210Cu;
    ctx->downcount -= 2;
    // 7F0B210C: addi    r3, r31, 576
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(576);

label_7F0B2110:
    ctx->pc = 0x7F0B2110u;
    // 7F0B2110: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2114u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2114:
    ctx->pc = 0x7F0B2114u;
    ctx->downcount -= 2;
    // 7F0B2114: addi    r3, r31, 768
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(768);

label_7F0B2118:
    ctx->pc = 0x7F0B2118u;
    // 7F0B2118: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B211Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B211C:
    ctx->pc = 0x7F0B211Cu;
    ctx->downcount -= 2;
    // 7F0B211C: addi    r3, r31, 960
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(960);

label_7F0B2120:
    ctx->pc = 0x7F0B2120u;
    // 7F0B2120: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2124u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2124:
    ctx->pc = 0x7F0B2124u;
    ctx->downcount -= 2;
    // 7F0B2124: addi    r3, r31, 1152
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1152);

label_7F0B2128:
    ctx->pc = 0x7F0B2128u;
    // 7F0B2128: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B212Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B212C:
    ctx->pc = 0x7F0B212Cu;
    ctx->downcount -= 2;
    // 7F0B212C: addi    r3, r31, 1344
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1344);

label_7F0B2130:
    ctx->pc = 0x7F0B2130u;
    // 7F0B2130: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2134u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2134:
    ctx->pc = 0x7F0B2134u;
    ctx->downcount -= 2;
    // 7F0B2134: addi    r3, r31, 1536
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1536);

label_7F0B2138:
    ctx->pc = 0x7F0B2138u;
    // 7F0B2138: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B213Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B213C:
    ctx->pc = 0x7F0B213Cu;
    ctx->downcount -= 2;
    // 7F0B213C: addi    r3, r31, 1728
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1728);

label_7F0B2140:
    ctx->pc = 0x7F0B2140u;
    // 7F0B2140: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2144u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2144:
    ctx->pc = 0x7F0B2144u;
    ctx->downcount -= 2;
    // 7F0B2144: addi    r3, r31, 1920
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1920);

label_7F0B2148:
    ctx->pc = 0x7F0B2148u;
    // 7F0B2148: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B214Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B214C:
    ctx->pc = 0x7F0B214Cu;
    ctx->downcount -= 2;
    // 7F0B214C: addi    r3, r31, 2112
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2112);

label_7F0B2150:
    ctx->pc = 0x7F0B2150u;
    // 7F0B2150: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B2154u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B2154:
    ctx->pc = 0x7F0B2154u;
    ctx->downcount -= 2;
    // 7F0B2154: addi    r3, r31, 2304
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2304);

label_7F0B2158:
    ctx->pc = 0x7F0B2158u;
    // 7F0B2158: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B215Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B215C:
    ctx->pc = 0x7F0B215Cu;
    ctx->downcount -= 6;
    // 7F0B215C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2160:
    ctx->pc = 0x7F0B2160u;
    // 7F0B2160: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B2164:
    ctx->pc = 0x7F0B2164u;
    // 7F0B2164: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B2168:
    ctx->pc = 0x7F0B2168u;
    // 7F0B2168: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B216C:
    ctx->pc = 0x7F0B216Cu;
    // 7F0B216C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2170:
    ctx->pc = 0x7F0B2170u;
    ctx->downcount -= 2;
    // 7F0B2170: cmplwi  r3, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B2174:
    ctx->pc = 0x7F0B2174u;
    // 7F0B2174: bc    12, 1, 0x7F0B21F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B21F8;
        }
    }

label_7F0B2178:
    ctx->pc = 0x7F0B2178u;
    ctx->downcount -= 7;
    // 7F0B2178: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0B217C:
    ctx->pc = 0x7F0B217Cu;
    // 7F0B217C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F0B2180:
    ctx->pc = 0x7F0B2180u;
    // 7F0B2180: addi    r3, r4, -32244
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32244);

label_7F0B2184:
    ctx->pc = 0x7F0B2184u;
    // 7F0B2184: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2188:
    ctx->pc = 0x7F0B2188u;
    // 7F0B2188: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B218C:
    ctx->pc = 0x7F0B218Cu;
    // 7F0B218C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0B2190:
    ctx->pc = 0x7F0B2190u;
    ctx->downcount -= 2;
    // 7F0B2190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B2194:
    ctx->pc = 0x7F0B2194u;
    // 7F0B2194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2198:
    ctx->pc = 0x7F0B2198u;
    ctx->downcount -= 2;
    // 7F0B2198: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0B219C:
    ctx->pc = 0x7F0B219Cu;
    // 7F0B219C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21A0:
    ctx->pc = 0x7F0B21A0u;
    ctx->downcount -= 2;
    // 7F0B21A0: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F0B21A4:
    ctx->pc = 0x7F0B21A4u;
    // 7F0B21A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21A8:
    ctx->pc = 0x7F0B21A8u;
    ctx->downcount -= 2;
    // 7F0B21A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0B21AC:
    ctx->pc = 0x7F0B21ACu;
    // 7F0B21AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21B0:
    ctx->pc = 0x7F0B21B0u;
    ctx->downcount -= 2;
    // 7F0B21B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B21B4:
    ctx->pc = 0x7F0B21B4u;
    // 7F0B21B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21B8:
    ctx->pc = 0x7F0B21B8u;
    ctx->downcount -= 2;
    // 7F0B21B8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0B21BC:
    ctx->pc = 0x7F0B21BCu;
    // 7F0B21BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21C0:
    ctx->pc = 0x7F0B21C0u;
    ctx->downcount -= 2;
    // 7F0B21C0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0B21C4:
    ctx->pc = 0x7F0B21C4u;
    // 7F0B21C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21C8:
    ctx->pc = 0x7F0B21C8u;
    ctx->downcount -= 2;
    // 7F0B21C8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0B21CC:
    ctx->pc = 0x7F0B21CCu;
    // 7F0B21CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21D0:
    ctx->pc = 0x7F0B21D0u;
    ctx->downcount -= 2;
    // 7F0B21D0: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F0B21D4:
    ctx->pc = 0x7F0B21D4u;
    // 7F0B21D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21D8:
    ctx->pc = 0x7F0B21D8u;
    ctx->downcount -= 2;
    // 7F0B21D8: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F0B21DC:
    ctx->pc = 0x7F0B21DCu;
    // 7F0B21DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21E0:
    ctx->pc = 0x7F0B21E0u;
    ctx->downcount -= 2;
    // 7F0B21E0: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F0B21E4:
    ctx->pc = 0x7F0B21E4u;
    // 7F0B21E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21E8:
    ctx->pc = 0x7F0B21E8u;
    ctx->downcount -= 2;
    // 7F0B21E8: li      r3, 17
    ctx->gpr[3] = (u32)(s32)(17);

label_7F0B21EC:
    ctx->pc = 0x7F0B21ECu;
    // 7F0B21EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21F0:
    ctx->pc = 0x7F0B21F0u;
    ctx->downcount -= 2;
    // 7F0B21F0: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_7F0B21F4:
    ctx->pc = 0x7F0B21F4u;
    // 7F0B21F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B21F8:
    ctx->pc = 0x7F0B21F8u;
    ctx->downcount -= 2;
    // 7F0B21F8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B21FC:
    ctx->pc = 0x7F0B21FCu;
    // 7F0B21FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2200:
    ctx->pc = 0x7F0B2200u;
    ctx->downcount -= 10;
    // 7F0B2200: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2204:
    ctx->pc = 0x7F0B2204u;
    // 7F0B2204: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B2208:
    ctx->pc = 0x7F0B2208u;
    // 7F0B2208: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B220C:
    ctx->pc = 0x7F0B220Cu;
    // 7F0B220C: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F0B2210:
    ctx->pc = 0x7F0B2210u;
    // 7F0B2210: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F0B2214:
    ctx->pc = 0x7F0B2214u;
    // 7F0B2214: and   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] & ctx->gpr[5];
    }

label_7F0B2218:
    ctx->pc = 0x7F0B2218u;
    // 7F0B2218: xor   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F0B221C:
    ctx->pc = 0x7F0B221Cu;
    // 7F0B221C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F0B2220:
    ctx->pc = 0x7F0B2220u;
    // 7F0B2220: or.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2224:
    ctx->pc = 0x7F0B2224u;
    // 7F0B2224: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2228:
    ctx->pc = 0x7F0B2228u;
    ctx->downcount -= 3;
    // 7F0B2228: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B222C:
    ctx->pc = 0x7F0B222Cu;
    // 7F0B222C: rlwinm. r0, r0, 0, 24, 24
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

label_7F0B2230:
    ctx->pc = 0x7F0B2230u;
    // 7F0B2230: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2234:
    ctx->pc = 0x7F0B2234u;
    ctx->downcount -= 9;
    // 7F0B2234: lwz     r5, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2238:
    ctx->pc = 0x7F0B2238u;
    // 7F0B2238: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B223C:
    ctx->pc = 0x7F0B223Cu;
    // 7F0B223C: stw     r5, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B2240:
    ctx->pc = 0x7F0B2240u;
    // 7F0B2240: stw     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2244:
    ctx->pc = 0x7F0B2244u;
    // 7F0B2244: lwz     r5, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2248:
    ctx->pc = 0x7F0B2248u;
    // 7F0B2248: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B224C:
    ctx->pc = 0x7F0B224Cu;
    // 7F0B224C: stw     r5, 136(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B2250:
    ctx->pc = 0x7F0B2250u;
    // 7F0B2250: stw     r0, 140(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2254:
    ctx->pc = 0x7F0B2254u;
    // 7F0B2254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2258:
    ctx->pc = 0x7F0B2258u;
    ctx->downcount -= 26;
    // 7F0B2258: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B225C:
    ctx->pc = 0x7F0B225Cu;
    // 7F0B225C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B2260:
    ctx->pc = 0x7F0B2260u;
    // 7F0B2260: mulli   r5, r5, 324
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)324);

label_7F0B2264:
    ctx->pc = 0x7F0B2264u;
    // 7F0B2264: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2268:
    ctx->pc = 0x7F0B2268u;
    // 7F0B2268: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B226C:
    ctx->pc = 0x7F0B226Cu;
    // 7F0B226C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B2270:
    ctx->pc = 0x7F0B2270u;
    // 7F0B2270: addi    r4, r5, 444
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(444);

label_7F0B2274:
    ctx->pc = 0x7F0B2274u;
    // 7F0B2274: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B2278:
    ctx->pc = 0x7F0B2278u;
    // 7F0B2278: or   r5, r6, r6
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0B227C:
    ctx->pc = 0x7F0B227Cu;
    // 7F0B227C: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2280:
    ctx->pc = 0x7F0B2280u;
    // 7F0B2280: or   r6, r8, r8
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0B2284:
    ctx->pc = 0x7F0B2284u;
    // 7F0B2284: or   r8, r9, r9
    {
        ctx->gpr[8] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F0B2288:
    ctx->pc = 0x7F0B2288u;
    // 7F0B2288: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0B228C:
    ctx->pc = 0x7F0B228Cu;
    // 7F0B228C: bl      0x7F01D42C
    {
            ctx->lr = 0x7F0B2290u;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F0B2290:
    ctx->pc = 0x7F0B2290u;
    ctx->downcount -= 3;
    // 7F0B2290: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B2294:
    ctx->pc = 0x7F0B2294u;
    // 7F0B2294: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2298:
    ctx->pc = 0x7F0B2298u;
    // 7F0B2298: bl      0x7F01D46C
    {
            ctx->lr = 0x7F0B229Cu;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F0B229C:
    ctx->pc = 0x7F0B229Cu;
    ctx->downcount -= 2;
    // 7F0B229C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B22A0:
    ctx->pc = 0x7F0B22A0u;
    // 7F0B22A0: bl      0x7F01D474
    {
            ctx->lr = 0x7F0B22A4u;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F0B22A4:
    ctx->pc = 0x7F0B22A4u;
    ctx->downcount -= 16;
    // 7F0B22A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B22A8:
    ctx->pc = 0x7F0B22A8u;
    // 7F0B22A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B22AC:
    ctx->pc = 0x7F0B22ACu;
    // 7F0B22AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B22B0:
    ctx->pc = 0x7F0B22B0u;
    // 7F0B22B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B22B4:
    ctx->pc = 0x7F0B22B4u;
    // 7F0B22B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B22B8:
    ctx->pc = 0x7F0B22B8u;
    ctx->downcount -= 6;
    // 7F0B22B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B22BC:
    ctx->pc = 0x7F0B22BCu;
    // 7F0B22BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B22C0:
    ctx->pc = 0x7F0B22C0u;
    // 7F0B22C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B22C4:
    ctx->pc = 0x7F0B22C4u;
    // 7F0B22C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B22C8:
    ctx->pc = 0x7F0B22C8u;
    // 7F0B22C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B22CC:
    ctx->pc = 0x7F0B22CCu;
    // 7F0B22CC: bl      0x7F0B4F78
    {
            ctx->lr = 0x7F0B22D0u;
            ctx->pc = 0x7F0B4F78u;
            return;
    }

label_7F0B22D0:
    ctx->pc = 0x7F0B22D0u;
    ctx->downcount -= 27;
    // 7F0B22D0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B22D4:
    ctx->pc = 0x7F0B22D4u;
    // 7F0B22D4: li      r7, 24
    ctx->gpr[7] = (u32)(s32)(24);

label_7F0B22D8:
    ctx->pc = 0x7F0B22D8u;
    // 7F0B22D8: stw     r8, 3368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3368);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B22DC:
    ctx->pc = 0x7F0B22DCu;
    // 7F0B22DC: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F0B22E0:
    ctx->pc = 0x7F0B22E0u;
    // 7F0B22E0: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B22E4:
    ctx->pc = 0x7F0B22E4u;
    // 7F0B22E4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F0B22E8:
    ctx->pc = 0x7F0B22E8u;
    // 7F0B22E8: stw     r8, 3364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3364);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B22EC:
    ctx->pc = 0x7F0B22ECu;
    // 7F0B22EC: addi    r3, r31, 108
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(108);

label_7F0B22F0:
    ctx->pc = 0x7F0B22F0u;
    // 7F0B22F0: addi    r0, r31, 104
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(104);

label_7F0B22F4:
    ctx->pc = 0x7F0B22F4u;
    // 7F0B22F4: stw     r8, 3428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3428);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B22F8:
    ctx->pc = 0x7F0B22F8u;
    // 7F0B22F8: stw     r8, 3424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3424);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0B22FC:
    ctx->pc = 0x7F0B22FCu;
    // 7F0B22FC: stw     r7, 3356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3356);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B2300:
    ctx->pc = 0x7F0B2300u;
    // 7F0B2300: stw     r6, 3416(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3416);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B2304:
    ctx->pc = 0x7F0B2304u;
    // 7F0B2304: lha     r6, 3548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3548);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2308:
    ctx->pc = 0x7F0B2308u;
    // 7F0B2308: stw     r6, 3392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3392);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B230C:
    ctx->pc = 0x7F0B230Cu;
    // 7F0B230C: lha     r6, 3552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3552);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2310:
    ctx->pc = 0x7F0B2310u;
    // 7F0B2310: stw     r6, 3452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3452);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B2314:
    ctx->pc = 0x7F0B2314u;
    // 7F0B2314: stw     r5, 3396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3396);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B2318:
    ctx->pc = 0x7F0B2318u;
    // 7F0B2318: stw     r4, 3456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3456);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B231C:
    ctx->pc = 0x7F0B231Cu;
    // 7F0B231C: stw     r3, 3400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3400);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B2320:
    ctx->pc = 0x7F0B2320u;
    // 7F0B2320: stw     r0, 3460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2324:
    ctx->pc = 0x7F0B2324u;
    // 7F0B2324: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B2328:
    ctx->pc = 0x7F0B2328u;
    // 7F0B2328: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B232C:
    ctx->pc = 0x7F0B232Cu;
    // 7F0B232C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B2330:
    ctx->pc = 0x7F0B2330u;
    // 7F0B2330: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B2334:
    ctx->pc = 0x7F0B2334u;
    // 7F0B2334: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2338:
    ctx->pc = 0x7F0B2338u;
    ctx->downcount -= 19;
    // 7F0B2338: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B233C:
    ctx->pc = 0x7F0B233Cu;
    // 7F0B233C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B2340:
    ctx->pc = 0x7F0B2340u;
    // 7F0B2340: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2344:
    ctx->pc = 0x7F0B2344u;
    // 7F0B2344: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B2348:
    ctx->pc = 0x7F0B2348u;
    // 7F0B2348: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B234C:
    ctx->pc = 0x7F0B234Cu;
    // 7F0B234C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0B2350:
    ctx->pc = 0x7F0B2350u;
    // 7F0B2350: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0B2354:
    ctx->pc = 0x7F0B2354u;
    // 7F0B2354: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F0B2358:
    ctx->pc = 0x7F0B2358u;
    // 7F0B2358: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B235Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B235C:
    ctx->pc = 0x7F0B235Cu;
    ctx->downcount -= 2;
    // 7F0B235C: cmplwi  r3, 0x0000
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

label_7F0B2360:
    ctx->pc = 0x7F0B2360u;
    // 7F0B2360: bc    12, 2, 0x7F0B2394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2394;
        }
    }

label_7F0B2364:
    ctx->pc = 0x7F0B2364u;
    ctx->downcount -= 1;
    // 7F0B2364: addi    r31, r28, 3692
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(3692);

label_7F0B2368:
    ctx->downcount -= 1;
    // 7F0B2368: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B236Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B236C:
    ctx->downcount -= 2;
    // 7F0B236C: cmplwi  r3, 0x0000
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

label_7F0B2370:
    // 7F0B2370: bc    12, 2, 0x7F0B2394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2394;
        }
    }

label_7F0B2374:
    ctx->downcount -= 2;
    // 7F0B2374: cmpwi   r29, 32
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B2378:
    // 7F0B2378: bc    12, 2, 0x7F0B2394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2394;
        }
    }

label_7F0B237C:
    ctx->downcount -= 1;
    // 7F0B237C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B2380u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B2380:
    ctx->downcount -= 2;
    // 7F0B2380: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2384:
    // 7F0B2384: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F0B2388u;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F0B2388:
    ctx->downcount -= 3;
    // 7F0B2388: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0B238C:
    // 7F0B238C: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F0B2390:
    // 7F0B2390: b       0x7F0B2368
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2368u;
                return;
            }
            goto label_7F0B2368;
    }

label_7F0B2394:
    ctx->pc = 0x7F0B2394u;
    ctx->downcount -= 2;
    // 7F0B2394: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F0B2398:
    ctx->pc = 0x7F0B2398u;
    // 7F0B2398: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B239Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B239C:
    ctx->pc = 0x7F0B239Cu;
    ctx->downcount -= 2;
    // 7F0B239C: cmplwi  r3, 0x0000
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

label_7F0B23A0:
    ctx->pc = 0x7F0B23A0u;
    // 7F0B23A0: bc    12, 2, 0x7F0B23D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B23D0;
        }
    }

label_7F0B23A4:
    ctx->pc = 0x7F0B23A4u;
    ctx->downcount -= 1;
    // 7F0B23A4: addi    r31, r28, 3564
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(3564);

label_7F0B23A8:
    ctx->downcount -= 1;
    // 7F0B23A8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B23ACu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B23AC:
    ctx->downcount -= 2;
    // 7F0B23AC: cmplwi  r3, 0x0000
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

label_7F0B23B0:
    // 7F0B23B0: bc    12, 2, 0x7F0B23D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B23D0;
        }
    }

label_7F0B23B4:
    ctx->downcount -= 2;
    // 7F0B23B4: cmpwi   r30, 32
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B23B8:
    // 7F0B23B8: bc    12, 2, 0x7F0B23D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B23D0;
        }
    }

label_7F0B23BC:
    ctx->downcount -= 1;
    // 7F0B23BC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B23C0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B23C0:
    ctx->pc = 0x7F0B23C0u;
    ctx->downcount -= 4;
    // 7F0B23C0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B23C4:
    // 7F0B23C4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0B23C8:
    // 7F0B23C8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0B23CC:
    // 7F0B23CC: b       0x7F0B23A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B23A8u;
                return;
            }
            goto label_7F0B23A8;
    }

label_7F0B23D0:
    ctx->pc = 0x7F0B23D0u;
    ctx->downcount -= 20;
    // 7F0B23D0: stw     r29, 3556(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3556);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B23D4:
    ctx->pc = 0x7F0B23D4u;
    // 7F0B23D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B23D8:
    ctx->pc = 0x7F0B23D8u;
    // 7F0B23D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B23DC:
    ctx->pc = 0x7F0B23DCu;
    // 7F0B23DC: stw     r0, 3560(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B23E0:
    ctx->pc = 0x7F0B23E0u;
    // 7F0B23E0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B23E4:
    ctx->pc = 0x7F0B23E4u;
    // 7F0B23E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B23E8:
    ctx->pc = 0x7F0B23E8u;
    // 7F0B23E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B23EC:
    ctx->pc = 0x7F0B23ECu;
    // 7F0B23EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B23F0:
    ctx->pc = 0x7F0B23F0u;
    // 7F0B23F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B23F4:
    ctx->pc = 0x7F0B23F4u;
    ctx->downcount -= 21;
    // 7F0B23F4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B23F8:
    ctx->pc = 0x7F0B23F8u;
    // 7F0B23F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B23FC:
    ctx->pc = 0x7F0B23FCu;
    // 7F0B23FC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2400:
    ctx->pc = 0x7F0B2400u;
    // 7F0B2400: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B2404:
    ctx->pc = 0x7F0B2404u;
    // 7F0B2404: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B2408:
    ctx->pc = 0x7F0B2408u;
    // 7F0B2408: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B240C:
    ctx->pc = 0x7F0B240Cu;
    // 7F0B240C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B2410:
    ctx->pc = 0x7F0B2410u;
    // 7F0B2410: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B2414:
    ctx->pc = 0x7F0B2414u;
    // 7F0B2414: lwz     r31, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B2418:
    ctx->pc = 0x7F0B2418u;
    // 7F0B2418: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B241C:
    ctx->pc = 0x7F0B241Cu;
    // 7F0B241C: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B2420u;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B2420:
    ctx->pc = 0x7F0B2420u;
    ctx->downcount -= 2;
    // 7F0B2420: cmpwi   r3, 0
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

label_7F0B2424:
    ctx->pc = 0x7F0B2424u;
    // 7F0B2424: bc    12, 2, 0x7F0B2434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2434;
        }
    }

label_7F0B2428:
    ctx->pc = 0x7F0B2428u;
    ctx->downcount -= 2;
    // 7F0B2428: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B242C:
    ctx->pc = 0x7F0B242Cu;
    // 7F0B242C: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0B2430u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0B2430:
    ctx->pc = 0x7F0B2430u;
    ctx->downcount -= 1;
    // 7F0B2430: b       0x7F0B2708
    {
            goto label_7F0B2708;
    }

label_7F0B2434:
    ctx->pc = 0x7F0B2434u;
    ctx->downcount -= 5;
    // 7F0B2434: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F0B2438:
    ctx->pc = 0x7F0B2438u;
    // 7F0B2438: lwz     r0, 1356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B243C:
    ctx->pc = 0x7F0B243Cu;
    // 7F0B243C: lwz     r4, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2440:
    ctx->pc = 0x7F0B2440u;
    // 7F0B2440: cmpw    r0, r4
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

label_7F0B2444:
    ctx->pc = 0x7F0B2444u;
    // 7F0B2444: bc    12, 2, 0x7F0B2464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2464;
        }
    }

label_7F0B2448:
    ctx->pc = 0x7F0B2448u;
    ctx->downcount -= 7;
    // 7F0B2448: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B244C:
    ctx->pc = 0x7F0B244Cu;
    // 7F0B244C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B2450:
    ctx->pc = 0x7F0B2450u;
    // 7F0B2450: addi    r3, r3, -5776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5776);

label_7F0B2454:
    ctx->pc = 0x7F0B2454u;
    // 7F0B2454: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2458:
    ctx->pc = 0x7F0B2458u;
    // 7F0B2458: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B245C:
    ctx->pc = 0x7F0B245Cu;
    // 7F0B245C: stw     r4, 1356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1356);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B2460:
    ctx->pc = 0x7F0B2460u;
    // 7F0B2460: b       0x7F0B2498
    {
            goto label_7F0B2498;
    }

label_7F0B2464:
    ctx->pc = 0x7F0B2464u;
    ctx->downcount -= 10;
    // 7F0B2464: lwz     r3, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2468:
    ctx->pc = 0x7F0B2468u;
    // 7F0B2468: lis     r0, 16384
    ctx->gpr[0] = ((u32)(s32)(16384) << 16);

label_7F0B246C:
    ctx->pc = 0x7F0B246Cu;
    // 7F0B246C: lwz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2470:
    ctx->pc = 0x7F0B2470u;
    // 7F0B2470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B2474:
    ctx->pc = 0x7F0B2474u;
    // 7F0B2474: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0B2478:
    ctx->pc = 0x7F0B2478u;
    // 7F0B2478: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0B247C:
    ctx->pc = 0x7F0B247Cu;
    // 7F0B247C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0B2480:
    ctx->pc = 0x7F0B2480u;
    // 7F0B2480: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0B2484:
    ctx->pc = 0x7F0B2484u;
    // 7F0B2484: or.   r0, r3, r0
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

label_7F0B2488:
    ctx->pc = 0x7F0B2488u;
    // 7F0B2488: bc    12, 2, 0x7F0B2498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2498;
        }
    }

label_7F0B248C:
    ctx->pc = 0x7F0B248Cu;
    ctx->downcount -= 2;
    // 7F0B248C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B2490:
    ctx->pc = 0x7F0B2490u;
    // 7F0B2490: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0B2494u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0B2494:
    ctx->pc = 0x7F0B2494u;
    ctx->downcount -= 1;
    // 7F0B2494: b       0x7F0B2708
    {
            goto label_7F0B2708;
    }

label_7F0B2498:
    ctx->pc = 0x7F0B2498u;
    ctx->downcount -= 18;
    // 7F0B2498: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0B249C:
    ctx->pc = 0x7F0B249Cu;
    // 7F0B249C: lis     r3, -4128
    ctx->gpr[3] = ((u32)(s32)(-4128) << 16);

label_7F0B24A0:
    ctx->pc = 0x7F0B24A0u;
    // 7F0B24A0: addi    r8, r4, -5776
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-5776);

label_7F0B24A4:
    ctx->pc = 0x7F0B24A4u;
    // 7F0B24A4: lwz     r6, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B24A8:
    ctx->pc = 0x7F0B24A8u;
    // 7F0B24A8: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B24AC:
    ctx->pc = 0x7F0B24ACu;
    // 7F0B24AC: addi    r0, r3, -2049
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2049);

label_7F0B24B0:
    ctx->pc = 0x7F0B24B0u;
    // 7F0B24B0: lwz     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B24B4:
    ctx->pc = 0x7F0B24B4u;
    // 7F0B24B4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B24B8:
    ctx->pc = 0x7F0B24B8u;
    // 7F0B24B8: lwz     r7, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B24BC:
    ctx->pc = 0x7F0B24BCu;
    // 7F0B24BC: or   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[6];
    }

label_7F0B24C0:
    ctx->pc = 0x7F0B24C0u;
    // 7F0B24C0: and   r9, r6, r0
    {
        ctx->gpr[9] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F0B24C4:
    ctx->pc = 0x7F0B24C4u;
    // 7F0B24C4: or   r0, r5, r7
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[7];
    }

label_7F0B24C8:
    ctx->pc = 0x7F0B24C8u;
    // 7F0B24C8: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B24CC:
    ctx->pc = 0x7F0B24CCu;
    // 7F0B24CC: and   r4, r7, r3
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[3];
    }

label_7F0B24D0:
    ctx->pc = 0x7F0B24D0u;
    // 7F0B24D0: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B24D4:
    ctx->pc = 0x7F0B24D4u;
    // 7F0B24D4: lwz     r8, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0B24D8:
    ctx->pc = 0x7F0B24D8u;
    // 7F0B24D8: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B24DC:
    ctx->pc = 0x7F0B24DCu;
    // 7F0B24DC: bc    12, 2, 0x7F0B2504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2504;
        }
    }

label_7F0B24E0:
    ctx->pc = 0x7F0B24E0u;
    ctx->downcount -= 9;
    // 7F0B24E0: li      r3, -2049
    ctx->gpr[3] = (u32)(s32)(-2049);

label_7F0B24E4:
    ctx->pc = 0x7F0B24E4u;
    // 7F0B24E4: li      r0, -16385
    ctx->gpr[0] = (u32)(s32)(-16385);

label_7F0B24E8:
    ctx->pc = 0x7F0B24E8u;
    // 7F0B24E8: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F0B24EC:
    ctx->pc = 0x7F0B24ECu;
    // 7F0B24EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B24F0:
    ctx->pc = 0x7F0B24F0u;
    // 7F0B24F0: and   r0, r9, r0
    {
        ctx->gpr[0] = ctx->gpr[9] & ctx->gpr[0];
    }

label_7F0B24F4:
    ctx->pc = 0x7F0B24F4u;
    // 7F0B24F4: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F0B24F8:
    ctx->pc = 0x7F0B24F8u;
    // 7F0B24F8: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F0B24FC:
    ctx->pc = 0x7F0B24FCu;
    // 7F0B24FC: or.   r0, r3, r0
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

label_7F0B2500:
    ctx->pc = 0x7F0B2500u;
    // 7F0B2500: bc    4, 2, 0x7F0B2550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2550;
        }
    }

label_7F0B2504:
    ctx->pc = 0x7F0B2504u;
    ctx->downcount -= 6;
    // 7F0B2504: lwz     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2508:
    ctx->pc = 0x7F0B2508u;
    // 7F0B2508: lwz     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B250C:
    ctx->pc = 0x7F0B250Cu;
    // 7F0B250C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F0B2510:
    ctx->pc = 0x7F0B2510u;
    // 7F0B2510: xor   r3, r3, r7
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[7];
    }

label_7F0B2514:
    ctx->pc = 0x7F0B2514u;
    // 7F0B2514: or.   r0, r3, r0
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

label_7F0B2518:
    ctx->pc = 0x7F0B2518u;
    // 7F0B2518: bc    4, 2, 0x7F0B2524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2524;
        }
    }

label_7F0B251C:
    ctx->pc = 0x7F0B251Cu;
    ctx->downcount -= 2;
    // 7F0B251C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B2520:
    ctx->pc = 0x7F0B2520u;
    // 7F0B2520: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0B2524u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0B2524:
    ctx->pc = 0x7F0B2524u;
    ctx->downcount -= 11;
    // 7F0B2524: lwz     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2528:
    ctx->pc = 0x7F0B2528u;
    // 7F0B2528: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B252C:
    ctx->pc = 0x7F0B252Cu;
    // 7F0B252C: nor   r0, r0, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_7F0B2530:
    ctx->pc = 0x7F0B2530u;
    // 7F0B2530: lwz     r3, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2534:
    ctx->pc = 0x7F0B2534u;
    // 7F0B2534: lwz     r4, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2538:
    ctx->pc = 0x7F0B2538u;
    // 7F0B2538: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F0B253C:
    ctx->pc = 0x7F0B253Cu;
    // 7F0B253C: nor   r3, r3, r3
    {
        ctx->gpr[3] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F0B2540:
    ctx->pc = 0x7F0B2540u;
    // 7F0B2540: stw     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2544:
    ctx->pc = 0x7F0B2544u;
    // 7F0B2544: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F0B2548:
    ctx->pc = 0x7F0B2548u;
    // 7F0B2548: stw     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B254C:
    ctx->pc = 0x7F0B254Cu;
    // 7F0B254C: b       0x7F0B2708
    {
            goto label_7F0B2708;
    }

label_7F0B2550:
    ctx->pc = 0x7F0B2550u;
    ctx->downcount -= 9;
    // 7F0B2550: lwz     r0, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2554:
    ctx->pc = 0x7F0B2554u;
    // 7F0B2554: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B2558:
    ctx->pc = 0x7F0B2558u;
    // 7F0B2558: lwz     r4, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B255C:
    ctx->pc = 0x7F0B255Cu;
    // 7F0B255C: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F0B2560:
    ctx->pc = 0x7F0B2560u;
    // 7F0B2560: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F0B2564:
    ctx->pc = 0x7F0B2564u;
    // 7F0B2564: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F0B2568:
    ctx->pc = 0x7F0B2568u;
    // 7F0B2568: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F0B256C:
    ctx->pc = 0x7F0B256Cu;
    // 7F0B256C: or.   r0, r3, r0
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

label_7F0B2570:
    ctx->pc = 0x7F0B2570u;
    // 7F0B2570: bc    12, 2, 0x7F0B2700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2700;
        }
    }

label_7F0B2574:
    ctx->pc = 0x7F0B2574u;
    ctx->downcount -= 6;
    // 7F0B2574: lwz     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2578:
    ctx->pc = 0x7F0B2578u;
    // 7F0B2578: lwz     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B257C:
    ctx->pc = 0x7F0B257Cu;
    // 7F0B257C: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F0B2580:
    ctx->pc = 0x7F0B2580u;
    // 7F0B2580: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F0B2584:
    ctx->pc = 0x7F0B2584u;
    // 7F0B2584: or.   r0, r3, r0
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

label_7F0B2588:
    ctx->pc = 0x7F0B2588u;
    // 7F0B2588: bc    12, 2, 0x7F0B2700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2700;
        }
    }

label_7F0B258C:
    ctx->pc = 0x7F0B258Cu;
    ctx->downcount -= 15;
    // 7F0B258C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B2590:
    ctx->pc = 0x7F0B2590u;
    // 7F0B2590: lha     r30, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        ctx->gpr[30] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2594:
    ctx->pc = 0x7F0B2594u;
    // 7F0B2594: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B2598:
    ctx->pc = 0x7F0B2598u;
    // 7F0B2598: lwz     r7, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B259C:
    ctx->pc = 0x7F0B259Cu;
    // 7F0B259C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B25A0:
    ctx->pc = 0x7F0B25A0u;
    // 7F0B25A0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B25A4:
    ctx->pc = 0x7F0B25A4u;
    // 7F0B25A4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B25A8:
    ctx->pc = 0x7F0B25A8u;
    // 7F0B25A8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B25AC:
    ctx->pc = 0x7F0B25ACu;
    // 7F0B25AC: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B25B0:
    ctx->pc = 0x7F0B25B0u;
    // 7F0B25B0: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B25B4:
    ctx->pc = 0x7F0B25B4u;
    // 7F0B25B4: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B25B8:
    ctx->pc = 0x7F0B25B8u;
    // 7F0B25B8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B25BC:
    ctx->pc = 0x7F0B25BCu;
    // 7F0B25BC: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B25C0:
    ctx->pc = 0x7F0B25C0u;
    // 7F0B25C0: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B25C4:
    ctx->pc = 0x7F0B25C4u;
    // 7F0B25C4: bl      0x7F014DF8
    {
            ctx->lr = 0x7F0B25C8u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F0B25C8:
    ctx->pc = 0x7F0B25C8u;
    ctx->downcount -= 20;
    // 7F0B25C8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0B25CC:
    ctx->pc = 0x7F0B25CCu;
    // 7F0B25CC: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B25D0:
    ctx->pc = 0x7F0B25D0u;
    // 7F0B25D0: addi    r5, r4, 13880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F0B25D4:
    ctx->pc = 0x7F0B25D4u;
    // 7F0B25D4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B25D8:
    ctx->pc = 0x7F0B25D8u;
    // 7F0B25D8: lha     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B25DC:
    ctx->pc = 0x7F0B25DCu;
    // 7F0B25DC: lha     r3, 366(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(366);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B25E0:
    ctx->pc = 0x7F0B25E0u;
    // 7F0B25E0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0B25E4:
    ctx->pc = 0x7F0B25E4u;
    // 7F0B25E4: sth     r0, 366(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B25E8:
    ctx->pc = 0x7F0B25E8u;
    // 7F0B25E8: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B25EC:
    ctx->pc = 0x7F0B25ECu;
    // 7F0B25EC: lha     r0, 1160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1160);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B25F0:
    ctx->pc = 0x7F0B25F0u;
    // 7F0B25F0: lha     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B25F4:
    ctx->pc = 0x7F0B25F4u;
    // 7F0B25F4: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0B25F8:
    ctx->pc = 0x7F0B25F8u;
    // 7F0B25F8: sth     r0, 1160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1160);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B25FC:
    ctx->pc = 0x7F0B25FCu;
    // 7F0B25FC: lha     r0, 1160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1160);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2600:
    ctx->pc = 0x7F0B2600u;
    // 7F0B2600: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2604:
    ctx->pc = 0x7F0B2604u;
    // 7F0B2604: sth     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2608:
    ctx->pc = 0x7F0B2608u;
    // 7F0B2608: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B260C:
    ctx->pc = 0x7F0B260Cu;
    // 7F0B260C: lha     r0, 366(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(366);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2610:
    ctx->pc = 0x7F0B2610u;
    // 7F0B2610: cmpwi   r0, 30000
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

label_7F0B2614:
    ctx->pc = 0x7F0B2614u;
    // 7F0B2614: bc    4, 1, 0x7F0B2620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2620;
        }
    }

label_7F0B2618:
    ctx->pc = 0x7F0B2618u;
    ctx->downcount -= 2;
    // 7F0B2618: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F0B261C:
    ctx->pc = 0x7F0B261Cu;
    // 7F0B261C: sth     r0, 366(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(366);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2620:
    ctx->pc = 0x7F0B2620u;
    ctx->downcount -= 28;
    // 7F0B2620: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2624:
    ctx->pc = 0x7F0B2624u;
    // 7F0B2624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B2628:
    ctx->pc = 0x7F0B2628u;
    // 7F0B2628: li      r0, 20480
    ctx->gpr[0] = (u32)(s32)(20480);

label_7F0B262C:
    ctx->pc = 0x7F0B262Cu;
    // 7F0B262C: sth     r30, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F0B2630:
    ctx->pc = 0x7F0B2630u;
    // 7F0B2630: lwz     r6, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2634:
    ctx->pc = 0x7F0B2634u;
    // 7F0B2634: lfs     f3, 4056(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2634u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B2638:
    ctx->pc = 0x7F0B2638u;
    // 7F0B2638: stfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2638u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B263C:
    ctx->pc = 0x7F0B263Cu;
    // 7F0B263C: lfs     f2, 4060(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B263Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B2640:
    ctx->pc = 0x7F0B2640u;
    // 7F0B2640: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2640u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B2644:
    ctx->pc = 0x7F0B2644u;
    // 7F0B2644: lfs     f1, 4064(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2644u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B2648:
    ctx->pc = 0x7F0B2648u;
    // 7F0B2648: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B264C:
    ctx->pc = 0x7F0B264Cu;
    // 7F0B264C: lfs     f0, 80(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B264Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2650:
    ctx->pc = 0x7F0B2650u;
    // 7F0B2650: fsubs   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2650u)) return;
    ppc_fsubs(ctx, 0, 3, 0);

label_7F0B2654:
    ctx->pc = 0x7F0B2654u;
    // 7F0B2654: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2654u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2658:
    ctx->pc = 0x7F0B2658u;
    // 7F0B2658: lfs     f0, 84(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2658u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B265C:
    ctx->pc = 0x7F0B265Cu;
    // 7F0B265C: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B265Cu)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F0B2660:
    ctx->pc = 0x7F0B2660u;
    // 7F0B2660: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2664:
    ctx->pc = 0x7F0B2664u;
    // 7F0B2664: lfs     f0, 88(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2664u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2668:
    ctx->pc = 0x7F0B2668u;
    // 7F0B2668: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2668u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0B266C:
    ctx->pc = 0x7F0B266Cu;
    // 7F0B266C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B266Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2670:
    ctx->pc = 0x7F0B2670u;
    // 7F0B2670: lwz     r3, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2674:
    ctx->pc = 0x7F0B2674u;
    // 7F0B2674: lwz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2678:
    ctx->pc = 0x7F0B2678u;
    // 7F0B2678: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0B267C:
    ctx->pc = 0x7F0B267Cu;
    // 7F0B267C: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0B2680:
    ctx->pc = 0x7F0B2680u;
    // 7F0B2680: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0B2684:
    ctx->pc = 0x7F0B2684u;
    // 7F0B2684: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0B2688:
    ctx->pc = 0x7F0B2688u;
    // 7F0B2688: or.   r0, r3, r0
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

label_7F0B268C:
    ctx->pc = 0x7F0B268Cu;
    // 7F0B268C: bc    4, 2, 0x7F0B2708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2708;
        }
    }

label_7F0B2690:
    ctx->pc = 0x7F0B2690u;
    ctx->downcount -= 4;
    // 7F0B2690: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2694:
    ctx->pc = 0x7F0B2694u;
    // 7F0B2694: lha     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2698:
    ctx->pc = 0x7F0B2698u;
    // 7F0B2698: cmpwi   r0, 0
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

label_7F0B269C:
    ctx->pc = 0x7F0B269Cu;
    // 7F0B269C: bc    4, 1, 0x7F0B2708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2708;
        }
    }

label_7F0B26A0:
    ctx->pc = 0x7F0B26A0u;
    ctx->downcount -= 10;
    // 7F0B26A0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0B26A4:
    ctx->pc = 0x7F0B26A4u;
    // 7F0B26A4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B26A8:
    ctx->pc = 0x7F0B26A8u;
    // 7F0B26A8: addi    r5, r4, -6208
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6208);

label_7F0B26AC:
    ctx->pc = 0x7F0B26ACu;
    // 7F0B26AC: lwz     r4, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B26B0:
    ctx->pc = 0x7F0B26B0u;
    // 7F0B26B0: lwz     r0, -6212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B26B4:
    ctx->pc = 0x7F0B26B4u;
    // 7F0B26B4: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B26B8:
    ctx->pc = 0x7F0B26B8u;
    // 7F0B26B8: lha     r3, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B26BC:
    ctx->pc = 0x7F0B26BCu;
    // 7F0B26BC: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0B26C0:
    ctx->pc = 0x7F0B26C0u;
    // 7F0B26C0: add.   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
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

label_7F0B26C4:
    ctx->pc = 0x7F0B26C4u;
    // 7F0B26C4: bc    4, 1, 0x7F0B26E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B26E4;
        }
    }

label_7F0B26C8:
    ctx->pc = 0x7F0B26C8u;
    ctx->downcount -= 6;
    // 7F0B26C8: addi    r3, r6, 4008
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(4008);

label_7F0B26CC:
    ctx->pc = 0x7F0B26CCu;
    // 7F0B26CC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B26D0:
    ctx->pc = 0x7F0B26D0u;
    // 7F0B26D0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B26D4:
    ctx->pc = 0x7F0B26D4u;
    // 7F0B26D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B26D8:
    ctx->pc = 0x7F0B26D8u;
    // 7F0B26D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B26DC:
    ctx->pc = 0x7F0B26DCu;
    // 7F0B26DC: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0B26E0u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0B26E0:
    ctx->pc = 0x7F0B26E0u;
    ctx->downcount -= 1;
    // 7F0B26E0: b       0x7F0B2708
    {
            goto label_7F0B2708;
    }

label_7F0B26E4:
    ctx->pc = 0x7F0B26E4u;
    ctx->downcount -= 6;
    // 7F0B26E4: addi    r3, r6, 4008
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(4008);

label_7F0B26E8:
    ctx->pc = 0x7F0B26E8u;
    // 7F0B26E8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B26EC:
    ctx->pc = 0x7F0B26ECu;
    // 7F0B26EC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B26F0:
    ctx->pc = 0x7F0B26F0u;
    // 7F0B26F0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0B26F4:
    ctx->pc = 0x7F0B26F4u;
    // 7F0B26F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B26F8:
    ctx->pc = 0x7F0B26F8u;
    // 7F0B26F8: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0B26FCu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0B26FC:
    ctx->pc = 0x7F0B26FCu;
    ctx->downcount -= 1;
    // 7F0B26FC: b       0x7F0B2708
    {
            goto label_7F0B2708;
    }

label_7F0B2700:
    ctx->pc = 0x7F0B2700u;
    ctx->downcount -= 2;
    // 7F0B2700: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B2704:
    ctx->pc = 0x7F0B2704u;
    // 7F0B2704: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0B2708u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0B2708:
    ctx->pc = 0x7F0B2708u;
    ctx->downcount -= 16;
    // 7F0B2708: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B270C:
    ctx->pc = 0x7F0B270Cu;
    // 7F0B270C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2710:
    ctx->pc = 0x7F0B2710u;
    // 7F0B2710: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B2714:
    ctx->pc = 0x7F0B2714u;
    // 7F0B2714: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0B2718:
    ctx->pc = 0x7F0B2718u;
    // 7F0B2718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B271C:
    ctx->pc = 0x7F0B271Cu;
    ctx->downcount -= 17;
    // 7F0B271C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B2720:
    ctx->pc = 0x7F0B2720u;
    // 7F0B2720: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B2724:
    ctx->pc = 0x7F0B2724u;
    // 7F0B2724: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2728:
    ctx->pc = 0x7F0B2728u;
    // 7F0B2728: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B272C:
    ctx->pc = 0x7F0B272Cu;
    // 7F0B272C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B2730:
    ctx->pc = 0x7F0B2730u;
    // 7F0B2730: addic.  r31, r29, 1376
    {
        u64 a = ctx->gpr[29];
        u64 b = (u32)(s32)(1376);
        u64 res = a + b;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2734:
    ctx->pc = 0x7F0B2734u;
    // 7F0B2734: bc    4, 2, 0x7F0B2740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2740;
        }
    }

label_7F0B2738:
    ctx->pc = 0x7F0B2738u;
    ctx->downcount -= 2;
    // 7F0B2738: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B273C:
    ctx->pc = 0x7F0B273Cu;
    // 7F0B273C: b       0x7F0B27C8
    {
            goto label_7F0B27C8;
    }

label_7F0B2740:
    ctx->pc = 0x7F0B2740u;
    ctx->downcount -= 9;
    // 7F0B2740: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B2744:
    ctx->pc = 0x7F0B2744u;
    // 7F0B2744: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F0B2748:
    ctx->pc = 0x7F0B2748u;
    // 7F0B2748: addi    r7, r3, -31980
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-31980);

label_7F0B274C:
    ctx->pc = 0x7F0B274Cu;
    // 7F0B274C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0B2750:
    ctx->pc = 0x7F0B2750u;
    // 7F0B2750: addi    r8, r5, -31996
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-31996);

label_7F0B2754:
    ctx->pc = 0x7F0B2754u;
    // 7F0B2754: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B2758:
    ctx->pc = 0x7F0B2758u;
    // 7F0B2758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B275C:
    ctx->pc = 0x7F0B275Cu;
    // 7F0B275C: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_7F0B2760:
    ctx->pc = 0x7F0B2760u;
    // 7F0B2760: bl      0x7F014788
    {
            ctx->lr = 0x7F0B2764u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0B2764:
    ctx->pc = 0x7F0B2764u;
    ctx->downcount -= 13;
    // 7F0B2764: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B2768:
    ctx->pc = 0x7F0B2768u;
    // 7F0B2768: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0B276C:
    ctx->pc = 0x7F0B276Cu;
    // 7F0B276C: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0B2770:
    ctx->pc = 0x7F0B2770u;
    // 7F0B2770: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B2774:
    ctx->pc = 0x7F0B2774u;
    // 7F0B2774: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2778:
    ctx->pc = 0x7F0B2778u;
    // 7F0B2778: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0B277C:
    ctx->pc = 0x7F0B277Cu;
    // 7F0B277C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2780:
    ctx->pc = 0x7F0B2780u;
    // 7F0B2780: addi    r4, r29, 1568
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1568);

label_7F0B2784:
    ctx->pc = 0x7F0B2784u;
    // 7F0B2784: lha     r30, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[30] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2788:
    ctx->pc = 0x7F0B2788u;
    // 7F0B2788: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0B278C:
    ctx->pc = 0x7F0B278Cu;
    // 7F0B278C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B2790:
    ctx->pc = 0x7F0B2790u;
    // 7F0B2790: rlwinm r6, r30, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_7F0B2794:
    ctx->pc = 0x7F0B2794u;
    // 7F0B2794: bl      0x7F014B78
    {
            ctx->lr = 0x7F0B2798u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0B2798:
    ctx->pc = 0x7F0B2798u;
    ctx->downcount -= 2;
    // 7F0B2798: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B279C:
    ctx->pc = 0x7F0B279Cu;
    // 7F0B279C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0B27A0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0B27A0:
    ctx->pc = 0x7F0B27A0u;
    ctx->downcount -= 5;
    // 7F0B27A0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B27A4:
    ctx->pc = 0x7F0B27A4u;
    // 7F0B27A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B27A8:
    ctx->pc = 0x7F0B27A8u;
    // 7F0B27A8: addi    r4, r4, 9204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9204);

label_7F0B27AC:
    ctx->pc = 0x7F0B27ACu;
    // 7F0B27AC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B27B0:
    ctx->pc = 0x7F0B27B0u;
    // 7F0B27B0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0B27B4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0B27B4:
    ctx->pc = 0x7F0B27B4u;
    ctx->downcount -= 5;
    // 7F0B27B4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0B27B8:
    ctx->pc = 0x7F0B27B8u;
    // 7F0B27B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B27BC:
    ctx->pc = 0x7F0B27BCu;
    // 7F0B27BC: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F0B27C0:
    ctx->pc = 0x7F0B27C0u;
    // 7F0B27C0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B27C4:
    ctx->pc = 0x7F0B27C4u;
    // 7F0B27C4: sth     r30, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F0B27C8:
    ctx->pc = 0x7F0B27C8u;
    ctx->downcount -= 16;
    // 7F0B27C8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B27CC:
    ctx->pc = 0x7F0B27CCu;
    // 7F0B27CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B27D0:
    ctx->pc = 0x7F0B27D0u;
    // 7F0B27D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B27D4:
    ctx->pc = 0x7F0B27D4u;
    // 7F0B27D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B27D8:
    ctx->pc = 0x7F0B27D8u;
    // 7F0B27D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B27DC:
    ctx->pc = 0x7F0B27DCu;
    ctx->downcount -= 7;
    // 7F0B27DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B27E0:
    ctx->pc = 0x7F0B27E0u;
    // 7F0B27E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B27E4:
    ctx->pc = 0x7F0B27E4u;
    // 7F0B27E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B27E8:
    ctx->pc = 0x7F0B27E8u;
    // 7F0B27E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B27EC:
    ctx->pc = 0x7F0B27ECu;
    // 7F0B27EC: addi    r31, r3, 3532
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(3532);

label_7F0B27F0:
    ctx->pc = 0x7F0B27F0u;
    // 7F0B27F0: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F0B27F4:
    ctx->pc = 0x7F0B27F4u;
    // 7F0B27F4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B27F8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B27F8:
    ctx->pc = 0x7F0B27F8u;
    ctx->downcount -= 2;
    // 7F0B27F8: cmplwi  r3, 0x0000
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

label_7F0B27FC:
    ctx->pc = 0x7F0B27FCu;
    // 7F0B27FC: bc    12, 2, 0x7F0B280C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B280C;
        }
    }

label_7F0B2800:
    ctx->pc = 0x7F0B2800u;
    ctx->downcount -= 2;
    // 7F0B2800: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F0B2804:
    ctx->pc = 0x7F0B2804u;
    // 7F0B2804: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F0B2808u;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F0B2808:
    ctx->pc = 0x7F0B2808u;
    ctx->downcount -= 1;
    // 7F0B2808: b       0x7F0B281C
    {
            goto label_7F0B281C;
    }

label_7F0B280C:
    ctx->pc = 0x7F0B280Cu;
    ctx->downcount -= 4;
    // 7F0B280C: li      r3, 6000
    ctx->gpr[3] = (u32)(s32)(6000);

label_7F0B2810:
    ctx->pc = 0x7F0B2810u;
    // 7F0B2810: li      r0, 26000
    ctx->gpr[0] = (u32)(s32)(26000);

label_7F0B2814:
    ctx->pc = 0x7F0B2814u;
    // 7F0B2814: sth     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B2818:
    ctx->pc = 0x7F0B2818u;
    // 7F0B2818: sth     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B281C:
    ctx->pc = 0x7F0B281Cu;
    ctx->downcount -= 10;
    // 7F0B281C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2820:
    ctx->pc = 0x7F0B2820u;
    // 7F0B2820: lha     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2824:
    ctx->pc = 0x7F0B2824u;
    // 7F0B2824: addi    r4, r3, 29998
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29998);

label_7F0B2828:
    ctx->pc = 0x7F0B2828u;
    // 7F0B2828: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B282C:
    ctx->pc = 0x7F0B282Cu;
    // 7F0B282C: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2830:
    ctx->pc = 0x7F0B2830u;
    // 7F0B2830: addi    r4, r3, 29994
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29994);

label_7F0B2834:
    ctx->pc = 0x7F0B2834u;
    // 7F0B2834: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F0B2838:
    ctx->pc = 0x7F0B2838u;
    // 7F0B2838: lha     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B283C:
    ctx->pc = 0x7F0B283Cu;
    // 7F0B283C: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2840:
    ctx->pc = 0x7F0B2840u;
    // 7F0B2840: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B2844u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B2844:
    ctx->pc = 0x7F0B2844u;
    ctx->downcount -= 2;
    // 7F0B2844: cmplwi  r3, 0x0000
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

label_7F0B2848:
    ctx->pc = 0x7F0B2848u;
    // 7F0B2848: bc    12, 2, 0x7F0B2858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2858;
        }
    }

label_7F0B284C:
    ctx->pc = 0x7F0B284Cu;
    ctx->downcount -= 2;
    // 7F0B284C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2850:
    ctx->pc = 0x7F0B2850u;
    // 7F0B2850: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F0B2854u;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F0B2854:
    ctx->pc = 0x7F0B2854u;
    ctx->downcount -= 1;
    // 7F0B2854: b       0x7F0B2870
    {
            goto label_7F0B2870;
    }

label_7F0B2858:
    ctx->pc = 0x7F0B2858u;
    ctx->downcount -= 6;
    // 7F0B2858: li      r0, -7000
    ctx->gpr[0] = (u32)(s32)(-7000);

label_7F0B285C:
    ctx->pc = 0x7F0B285Cu;
    // 7F0B285C: li      r3, -12500
    ctx->gpr[3] = (u32)(s32)(-12500);

label_7F0B2860:
    ctx->pc = 0x7F0B2860u;
    // 7F0B2860: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2864:
    ctx->pc = 0x7F0B2864u;
    // 7F0B2864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B2868:
    ctx->pc = 0x7F0B2868u;
    // 7F0B2868: sth     r3, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B286C:
    ctx->pc = 0x7F0B286Cu;
    // 7F0B286C: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2870:
    ctx->pc = 0x7F0B2870u;
    ctx->downcount -= 10;
    // 7F0B2870: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2874:
    ctx->pc = 0x7F0B2874u;
    // 7F0B2874: lha     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2878:
    ctx->pc = 0x7F0B2878u;
    // 7F0B2878: addi    r4, r3, 29996
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29996);

label_7F0B287C:
    ctx->pc = 0x7F0B287Cu;
    // 7F0B287C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B2880:
    ctx->pc = 0x7F0B2880u;
    // 7F0B2880: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2884:
    ctx->pc = 0x7F0B2884u;
    // 7F0B2884: addi    r4, r3, 29992
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29992);

label_7F0B2888:
    ctx->pc = 0x7F0B2888u;
    // 7F0B2888: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F0B288C:
    ctx->pc = 0x7F0B288Cu;
    // 7F0B288C: lha     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2890:
    ctx->pc = 0x7F0B2890u;
    // 7F0B2890: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2894:
    ctx->pc = 0x7F0B2894u;
    // 7F0B2894: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B2898u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B2898:
    ctx->pc = 0x7F0B2898u;
    ctx->downcount -= 2;
    // 7F0B2898: cmplwi  r3, 0x0000
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

label_7F0B289C:
    ctx->pc = 0x7F0B289Cu;
    // 7F0B289C: bc    12, 2, 0x7F0B28AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B28AC;
        }
    }

label_7F0B28A0:
    ctx->pc = 0x7F0B28A0u;
    ctx->downcount -= 2;
    // 7F0B28A0: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0B28A4:
    ctx->pc = 0x7F0B28A4u;
    // 7F0B28A4: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F0B28A8u;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F0B28A8:
    ctx->pc = 0x7F0B28A8u;
    ctx->downcount -= 1;
    // 7F0B28A8: b       0x7F0B28C4
    {
            goto label_7F0B28C4;
    }

label_7F0B28AC:
    ctx->pc = 0x7F0B28ACu;
    ctx->downcount -= 6;
    // 7F0B28AC: li      r0, -3000
    ctx->gpr[0] = (u32)(s32)(-3000);

label_7F0B28B0:
    ctx->pc = 0x7F0B28B0u;
    // 7F0B28B0: li      r3, 30000
    ctx->gpr[3] = (u32)(s32)(30000);

label_7F0B28B4:
    ctx->pc = 0x7F0B28B4u;
    // 7F0B28B4: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B28B8:
    ctx->pc = 0x7F0B28B8u;
    // 7F0B28B8: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0B28BC:
    ctx->pc = 0x7F0B28BCu;
    // 7F0B28BC: sth     r3, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B28C0:
    ctx->pc = 0x7F0B28C0u;
    // 7F0B28C0: sth     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B28C4:
    ctx->pc = 0x7F0B28C4u;
    ctx->downcount -= 6;
    // 7F0B28C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B28C8:
    ctx->pc = 0x7F0B28C8u;
    // 7F0B28C8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B28CC:
    ctx->pc = 0x7F0B28CCu;
    // 7F0B28CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B28D0:
    ctx->pc = 0x7F0B28D0u;
    // 7F0B28D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B28D4:
    ctx->pc = 0x7F0B28D4u;
    // 7F0B28D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B28D8:
    ctx->pc = 0x7F0B28D8u;
    ctx->downcount -= 17;
    // 7F0B28D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B28DC:
    ctx->pc = 0x7F0B28DCu;
    // 7F0B28DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B28E0:
    ctx->pc = 0x7F0B28E0u;
    // 7F0B28E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B28E4:
    ctx->pc = 0x7F0B28E4u;
    // 7F0B28E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B28E8:
    ctx->pc = 0x7F0B28E8u;
    // 7F0B28E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B28EC:
    ctx->pc = 0x7F0B28ECu;
    // 7F0B28EC: li      r3, 119
    ctx->gpr[3] = (u32)(s32)(119);

label_7F0B28F0:
    ctx->pc = 0x7F0B28F0u;
    // 7F0B28F0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B28F4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B28F4:
    ctx->pc = 0x7F0B28F4u;
    ctx->downcount -= 2;
    // 7F0B28F4: cmplwi  r3, 0x0000
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

label_7F0B28F8:
    ctx->pc = 0x7F0B28F8u;
    // 7F0B28F8: bc    12, 2, 0x7F0B292C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B292C;
        }
    }

label_7F0B28FC:
    ctx->pc = 0x7F0B28FCu;
    ctx->downcount -= 2;
    // 7F0B28FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0B2900:
    ctx->pc = 0x7F0B2900u;
    // 7F0B2900: addi    r30, r30, 3972
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(3972);

label_7F0B2904:
    ctx->downcount -= 1;
    // 7F0B2904: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B2908u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B2908:
    ctx->downcount -= 2;
    // 7F0B2908: cmplwi  r3, 0x0000
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

label_7F0B290C:
    // 7F0B290C: bc    12, 2, 0x7F0B292C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B292C;
        }
    }

label_7F0B2910:
    ctx->downcount -= 2;
    // 7F0B2910: cmpwi   r31, 3
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

label_7F0B2914:
    // 7F0B2914: bc    12, 2, 0x7F0B292C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B292C;
        }
    }

label_7F0B2918:
    ctx->downcount -= 1;
    // 7F0B2918: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B291Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B291C:
    ctx->pc = 0x7F0B291Cu;
    ctx->downcount -= 4;
    // 7F0B291C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B2920:
    // 7F0B2920: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0B2924:
    // 7F0B2924: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0B2928:
    // 7F0B2928: b       0x7F0B2904
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2904u;
                return;
            }
            goto label_7F0B2904;
    }

label_7F0B292C:
    ctx->pc = 0x7F0B292Cu;
    ctx->downcount -= 16;
    // 7F0B292C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B2930:
    ctx->pc = 0x7F0B2930u;
    // 7F0B2930: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2934:
    ctx->pc = 0x7F0B2934u;
    // 7F0B2934: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B2938:
    ctx->pc = 0x7F0B2938u;
    // 7F0B2938: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B293C:
    ctx->pc = 0x7F0B293Cu;
    // 7F0B293C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2940:
    ctx->pc = 0x7F0B2940u;
    ctx->downcount -= 17;
    // 7F0B2940: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B2944:
    ctx->pc = 0x7F0B2944u;
    // 7F0B2944: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B2948:
    ctx->pc = 0x7F0B2948u;
    // 7F0B2948: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B294C:
    ctx->pc = 0x7F0B294Cu;
    // 7F0B294C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B2950:
    ctx->pc = 0x7F0B2950u;
    // 7F0B2950: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B2954:
    ctx->pc = 0x7F0B2954u;
    // 7F0B2954: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F0B2958:
    ctx->pc = 0x7F0B2958u;
    // 7F0B2958: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B295Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B295C:
    ctx->pc = 0x7F0B295Cu;
    ctx->downcount -= 2;
    // 7F0B295C: cmplwi  r3, 0x0000
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

label_7F0B2960:
    ctx->pc = 0x7F0B2960u;
    // 7F0B2960: bc    12, 2, 0x7F0B2994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2994;
        }
    }

label_7F0B2964:
    ctx->pc = 0x7F0B2964u;
    ctx->downcount -= 2;
    // 7F0B2964: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0B2968:
    ctx->pc = 0x7F0B2968u;
    // 7F0B2968: addi    r30, r30, 3984
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(3984);

label_7F0B296C:
    ctx->downcount -= 1;
    // 7F0B296C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B2970u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B2970:
    ctx->downcount -= 2;
    // 7F0B2970: cmplwi  r3, 0x0000
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

label_7F0B2974:
    // 7F0B2974: bc    12, 2, 0x7F0B2994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2994;
        }
    }

label_7F0B2978:
    ctx->downcount -= 2;
    // 7F0B2978: cmpwi   r31, 4
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

label_7F0B297C:
    // 7F0B297C: bc    12, 2, 0x7F0B2994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2994;
        }
    }

label_7F0B2980:
    ctx->downcount -= 1;
    // 7F0B2980: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B2984u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B2984:
    ctx->pc = 0x7F0B2984u;
    ctx->downcount -= 4;
    // 7F0B2984: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B2988:
    // 7F0B2988: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0B298C:
    // 7F0B298C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0B2990:
    // 7F0B2990: b       0x7F0B296C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B296Cu;
                return;
            }
            goto label_7F0B296C;
    }

label_7F0B2994:
    ctx->pc = 0x7F0B2994u;
    ctx->downcount -= 16;
    // 7F0B2994: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B2998:
    ctx->pc = 0x7F0B2998u;
    // 7F0B2998: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B299C:
    ctx->pc = 0x7F0B299Cu;
    // 7F0B299C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B29A0:
    ctx->pc = 0x7F0B29A0u;
    // 7F0B29A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B29A4:
    ctx->pc = 0x7F0B29A4u;
    // 7F0B29A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B29A8:
    ctx->pc = 0x7F0B29A8u;
    ctx->downcount -= 21;
    // 7F0B29A8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B29AC:
    ctx->pc = 0x7F0B29ACu;
    // 7F0B29AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B29B0:
    ctx->pc = 0x7F0B29B0u;
    // 7F0B29B0: lis     r4, 82
    ctx->gpr[4] = ((u32)(s32)(82) << 16);

label_7F0B29B4:
    ctx->pc = 0x7F0B29B4u;
    // 7F0B29B4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F0B29B8:
    ctx->pc = 0x7F0B29B8u;
    // 7F0B29B8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B29BC:
    ctx->pc = 0x7F0B29BCu;
    // 7F0B29BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B29C0:
    ctx->pc = 0x7F0B29C0u;
    // 7F0B29C0: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B29C4:
    ctx->pc = 0x7F0B29C4u;
    // 7F0B29C4: addi    r30, r3, 1616
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(1616);

label_7F0B29C8:
    ctx->pc = 0x7F0B29C8u;
    // 7F0B29C8: addi    r3, r4, 2
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2);

label_7F0B29CC:
    ctx->pc = 0x7F0B29CCu;
    // 7F0B29CC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0B29D0:
    ctx->pc = 0x7F0B29D0u;
    // 7F0B29D0: bl      0x7F3C2408
    {
            ctx->lr = 0x7F0B29D4u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F0B29D4:
    ctx->pc = 0x7F0B29D4u;
    ctx->downcount -= 4;
    // 7F0B29D4: li      r0, 1500
    ctx->gpr[0] = (u32)(s32)(1500);

label_7F0B29D8:
    ctx->pc = 0x7F0B29D8u;
    // 7F0B29D8: or.   r31, r3, r3
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

label_7F0B29DC:
    ctx->pc = 0x7F0B29DCu;
    // 7F0B29DC: stw     r0, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B29E0:
    ctx->pc = 0x7F0B29E0u;
    // 7F0B29E0: bc    4, 2, 0x7F0B29EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B29EC;
        }
    }

label_7F0B29E4:
    ctx->pc = 0x7F0B29E4u;
    ctx->downcount -= 2;
    // 7F0B29E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B29E8:
    ctx->pc = 0x7F0B29E8u;
    // 7F0B29E8: b       0x7F0B2D70
    {
            goto label_7F0B2D70;
    }

label_7F0B29EC:
    ctx->pc = 0x7F0B29ECu;
    ctx->downcount -= 3;
    // 7F0B29EC: lis     r3, 61
    ctx->gpr[3] = ((u32)(s32)(61) << 16);

label_7F0B29F0:
    ctx->pc = 0x7F0B29F0u;
    // 7F0B29F0: addi    r3, r3, 12965
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12965);

label_7F0B29F4:
    ctx->pc = 0x7F0B29F4u;
    // 7F0B29F4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F0B29F8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F0B29F8:
    ctx->pc = 0x7F0B29F8u;
    ctx->downcount -= 2;
    // 7F0B29F8: or.   r4, r3, r3
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

label_7F0B29FC:
    ctx->pc = 0x7F0B29FCu;
    // 7F0B29FC: bc    4, 2, 0x7F0B2A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2A08;
        }
    }

label_7F0B2A00:
    ctx->pc = 0x7F0B2A00u;
    ctx->downcount -= 2;
    // 7F0B2A00: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B2A04:
    ctx->pc = 0x7F0B2A04u;
    // 7F0B2A04: b       0x7F0B2D70
    {
            goto label_7F0B2D70;
    }

label_7F0B2A08:
    ctx->pc = 0x7F0B2A08u;
    ctx->downcount -= 2;
    // 7F0B2A08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2A0C:
    ctx->pc = 0x7F0B2A0Cu;
    // 7F0B2A0C: bl      0x7F3C2534
    {
            ctx->lr = 0x7F0B2A10u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F0B2A10:
    ctx->pc = 0x7F0B2A10u;
    ctx->downcount -= 16;
    // 7F0B2A10: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B2A14:
    ctx->pc = 0x7F0B2A14u;
    // 7F0B2A14: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B2A18:
    ctx->pc = 0x7F0B2A18u;
    // 7F0B2A18: addi    r8, r7, -4944
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-4944);

label_7F0B2A1C:
    ctx->pc = 0x7F0B2A1Cu;
    // 7F0B2A1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B2A20:
    ctx->pc = 0x7F0B2A20u;
    // 7F0B2A20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2A24:
    ctx->pc = 0x7F0B2A24u;
    // 7F0B2A24: addi    r7, r6, -4848
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-4848);

label_7F0B2A28:
    ctx->pc = 0x7F0B2A28u;
    // 7F0B2A28: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B2A2C:
    ctx->pc = 0x7F0B2A2Cu;
    // 7F0B2A2C: lfd     f5, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A2Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2A30:
    ctx->pc = 0x7F0B2A30u;
    // 7F0B2A30: addi    r6, r5, -4916
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4916);

label_7F0B2A34:
    ctx->pc = 0x7F0B2A34u;
    // 7F0B2A34: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A34u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B2A38:
    ctx->pc = 0x7F0B2A38u;
    // 7F0B2A38: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A38u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B2A3C:
    ctx->pc = 0x7F0B2A3Cu;
    // 7F0B2A3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B2A40:
    ctx->pc = 0x7F0B2A40u;
    // 7F0B2A40: lfs     f2, -4924(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B2A44:
    ctx->pc = 0x7F0B2A44u;
    // 7F0B2A44: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B2A48:
    ctx->pc = 0x7F0B2A48u;
    // 7F0B2A48: lfs     f1, -4920(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B2A4C:
    ctx->pc = 0x7F0B2A4Cu;
    // 7F0B2A4C: lis     r29, 17200
    ctx->gpr[29] = ((u32)(s32)(17200) << 16);

label_7F0B2A50:
    ctx->downcount -= 5;
    // 7F0B2A50: add   r27, r31, r9
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F0B2A54:
    // 7F0B2A54: li      r8, 500
    ctx->gpr[8] = (u32)(s32)(500);

label_7F0B2A58:
    ctx->pc = 0x7F0B2A58u;
    // 7F0B2A58: lwz     r3, 192(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2A5C:
    // 7F0B2A5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B2A60:
    ctx->pc = 0x7F0B2A60u;
    // 7F0B2A60: lwz     r4, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2A64:
    ctx->downcount -= 4;
    // 7F0B2A64: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0B2A68:
    // 7F0B2A68: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B2A6C:
    ctx->pc = 0x7F0B2A6Cu;
    // 7F0B2A6C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B2A70:
    ctx->downcount -= 3;
    // 7F0B2A70: rlwinm. r11, r7, 0, 31, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2A74:
    // 7F0B2A74: li      r0, -34
    ctx->gpr[0] = (u32)(s32)(-34);

label_7F0B2A78:
    // 7F0B2A78: bc    12, 2, 0x7F0B2A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2A80;
        }
    }

label_7F0B2A7C:
    ctx->downcount -= 1;
    // 7F0B2A7C: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_7F0B2A80:
    ctx->downcount -= 9;
    // 7F0B2A80: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B2A84:
    ctx->pc = 0x7F0B2A84u;
    // 7F0B2A84: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B2A88:
    // 7F0B2A88: rlwinm. r12, r7, 0, 30, 30
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[12];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2A8C:
    ctx->pc = 0x7F0B2A8Cu;
    // 7F0B2A8C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2A90:
    // 7F0B2A90: addi    r0, r8, -500
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(-500);

label_7F0B2A94:
    ctx->pc = 0x7F0B2A94u;
    // 7F0B2A94: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2A98:
    ctx->pc = 0x7F0B2A98u;
    // 7F0B2A98: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A98u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0B2A9C:
    ctx->pc = 0x7F0B2A9Cu;
    // 7F0B2A9C: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2A9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2AA0:
    // 7F0B2AA0: bc    12, 2, 0x7F0B2AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2AA8;
        }
    }

label_7F0B2AA4:
    ctx->downcount -= 1;
    // 7F0B2AA4: or   r0, r8, r8
    {
        ctx->gpr[0] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0B2AA8:
    ctx->downcount -= 29;
    // 7F0B2AA8: xoris   r10, r0, 0x8000
    ctx->gpr[10] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B2AAC:
    // 7F0B2AAC: subfic  r0, r11, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[11]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B2AB0:
    ctx->pc = 0x7F0B2AB0u;
    // 7F0B2AB0: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B2AB4:
    // 7F0B2AB4: subfe   r11, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[11] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B2AB8:
    // 7F0B2AB8: subfic  r0, r12, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[12]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B2ABC:
    // 7F0B2ABC: li      r10, 4096
    ctx->gpr[10] = (u32)(s32)(4096);

label_7F0B2AC0:
    ctx->pc = 0x7F0B2AC0u;
    // 7F0B2AC0: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B2AC4:
    // 7F0B2AC4: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B2AC8:
    // 7F0B2AC8: li      r28, 48
    ctx->gpr[28] = (u32)(s32)(48);

label_7F0B2ACC:
    // 7F0B2ACC: li      r12, 128
    ctx->gpr[12] = (u32)(s32)(128);

label_7F0B2AD0:
    ctx->pc = 0x7F0B2AD0u;
    // 7F0B2AD0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2AD4:
    // 7F0B2AD4: andc   r11, r10, r11
    {
        ctx->gpr[11] = ctx->gpr[10] & ~ctx->gpr[11];
    }

label_7F0B2AD8:
    // 7F0B2AD8: and   r0, r10, r0
    {
        ctx->gpr[0] = ctx->gpr[10] & ctx->gpr[0];
    }

label_7F0B2ADC:
    // 7F0B2ADC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B2AE0:
    ctx->pc = 0x7F0B2AE0u;
    // 7F0B2AE0: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0B2AE0u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0B2AE4:
    // 7F0B2AE4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F0B2AE8:
    ctx->pc = 0x7F0B2AE8u;
    // 7F0B2AE8: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2AE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2AEC:
    ctx->pc = 0x7F0B2AECu;
    // 7F0B2AEC: stfs     f4, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2AECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B2AF0:
    ctx->pc = 0x7F0B2AF0u;
    // 7F0B2AF0: stfs     f3, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2AF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B2AF4:
    // 7F0B2AF4: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F0B2AF8:
    ctx->pc = 0x7F0B2AF8u;
    // 7F0B2AF8: stb     r28, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F0B2AFC:
    ctx->pc = 0x7F0B2AFCu;
    // 7F0B2AFC: stb     r28, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F0B2B00:
    ctx->pc = 0x7F0B2B00u;
    // 7F0B2B00: stb     r28, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F0B2B04:
    ctx->pc = 0x7F0B2B04u;
    // 7F0B2B04: stb     r12, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F0B2B08:
    ctx->pc = 0x7F0B2B08u;
    // 7F0B2B08: sth     r10, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F0B2B0C:
    ctx->pc = 0x7F0B2B0Cu;
    // 7F0B2B0C: sth     r11, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F0B2B10:
    ctx->pc = 0x7F0B2B10u;
    // 7F0B2B10: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2B14:
    // 7F0B2B14: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_7F0B2B18:
    // 7F0B2B18: bc    16, 0, 0x7F0B2A70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2A70u;
                return;
            }
            goto label_7F0B2A70;
        }
    }

label_7F0B2B1C:
    ctx->downcount -= 4;
    // 7F0B2B1C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F0B2B20:
    // 7F0B2B20: addi    r8, r8, 500
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(500);

label_7F0B2B24:
    // 7F0B2B24: cmpwi   r6, 16
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B2B28:
    // 7F0B2B28: bc    12, 0, 0x7F0B2A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2A64u;
                return;
            }
            goto label_7F0B2A64;
        }
    }

label_7F0B2B2C:
    ctx->pc = 0x7F0B2B2Cu;
    ctx->downcount -= 19;
    // 7F0B2B2C: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2B30:
    // 7F0B2B30: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F0B2B34:
    // 7F0B2B34: cmpwi   r5, 2
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

label_7F0B2B38:
    // 7F0B2B38: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_7F0B2B3C:
    ctx->pc = 0x7F0B2B3Cu;
    // 7F0B2B3C: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B2B40:
    ctx->pc = 0x7F0B2B40u;
    // 7F0B2B40: stfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B2B44:
    ctx->pc = 0x7F0B2B44u;
    // 7F0B2B44: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2B48:
    ctx->pc = 0x7F0B2B48u;
    // 7F0B2B48: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B48u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2B4C:
    ctx->pc = 0x7F0B2B4Cu;
    // 7F0B2B4C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2B50:
    ctx->pc = 0x7F0B2B50u;
    // 7F0B2B50: lfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2B54:
    ctx->pc = 0x7F0B2B54u;
    // 7F0B2B54: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B54u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2B58:
    ctx->pc = 0x7F0B2B58u;
    // 7F0B2B58: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2B5C:
    ctx->pc = 0x7F0B2B5Cu;
    // 7F0B2B5C: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2B60:
    ctx->pc = 0x7F0B2B60u;
    // 7F0B2B60: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B60u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2B64:
    ctx->pc = 0x7F0B2B64u;
    // 7F0B2B64: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2B68:
    ctx->pc = 0x7F0B2B68u;
    // 7F0B2B68: lfs     f0, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2B6C:
    ctx->pc = 0x7F0B2B6Cu;
    // 7F0B2B6C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B6Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2B70:
    ctx->pc = 0x7F0B2B70u;
    // 7F0B2B70: stfs     f0, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2B70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2B74:
    // 7F0B2B74: bc    12, 0, 0x7F0B2A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2A50u;
                return;
            }
            goto label_7F0B2A50;
        }
    }

label_7F0B2B78:
    ctx->pc = 0x7F0B2B78u;
    ctx->downcount -= 7;
    // 7F0B2B78: lis     r3, 82
    ctx->gpr[3] = ((u32)(s32)(82) << 16);

label_7F0B2B7C:
    ctx->pc = 0x7F0B2B7Cu;
    // 7F0B2B7C: stw     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B2B80:
    ctx->pc = 0x7F0B2B80u;
    // 7F0B2B80: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_7F0B2B84:
    ctx->pc = 0x7F0B2B84u;
    // 7F0B2B84: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F0B2B88:
    ctx->pc = 0x7F0B2B88u;
    // 7F0B2B88: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F0B2B8C:
    ctx->pc = 0x7F0B2B8Cu;
    // 7F0B2B8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B2B90:
    ctx->pc = 0x7F0B2B90u;
    // 7F0B2B90: bl      0x7F3C2408
    {
            ctx->lr = 0x7F0B2B94u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F0B2B94:
    ctx->pc = 0x7F0B2B94u;
    ctx->downcount -= 2;
    // 7F0B2B94: or.   r31, r3, r3
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

label_7F0B2B98:
    ctx->pc = 0x7F0B2B98u;
    // 7F0B2B98: bc    4, 2, 0x7F0B2BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2BA4;
        }
    }

label_7F0B2B9C:
    ctx->pc = 0x7F0B2B9Cu;
    ctx->downcount -= 2;
    // 7F0B2B9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B2BA0:
    ctx->pc = 0x7F0B2BA0u;
    // 7F0B2BA0: b       0x7F0B2D70
    {
            goto label_7F0B2D70;
    }

label_7F0B2BA4:
    ctx->pc = 0x7F0B2BA4u;
    ctx->downcount -= 5;
    // 7F0B2BA4: li      r0, 1500
    ctx->gpr[0] = (u32)(s32)(1500);

label_7F0B2BA8:
    ctx->pc = 0x7F0B2BA8u;
    // 7F0B2BA8: lis     r3, 61
    ctx->gpr[3] = ((u32)(s32)(61) << 16);

label_7F0B2BAC:
    ctx->pc = 0x7F0B2BACu;
    // 7F0B2BAC: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2BB0:
    ctx->pc = 0x7F0B2BB0u;
    // 7F0B2BB0: addi    r3, r3, 12965
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12965);

label_7F0B2BB4:
    ctx->pc = 0x7F0B2BB4u;
    // 7F0B2BB4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F0B2BB8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F0B2BB8:
    ctx->pc = 0x7F0B2BB8u;
    ctx->downcount -= 2;
    // 7F0B2BB8: or.   r4, r3, r3
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

label_7F0B2BBC:
    ctx->pc = 0x7F0B2BBCu;
    // 7F0B2BBC: bc    4, 2, 0x7F0B2BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2BC8;
        }
    }

label_7F0B2BC0:
    ctx->pc = 0x7F0B2BC0u;
    ctx->downcount -= 2;
    // 7F0B2BC0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B2BC4:
    ctx->pc = 0x7F0B2BC4u;
    // 7F0B2BC4: b       0x7F0B2D70
    {
            goto label_7F0B2D70;
    }

label_7F0B2BC8:
    ctx->pc = 0x7F0B2BC8u;
    ctx->downcount -= 2;
    // 7F0B2BC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2BCC:
    ctx->pc = 0x7F0B2BCCu;
    // 7F0B2BCC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F0B2BD0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F0B2BD0:
    ctx->pc = 0x7F0B2BD0u;
    ctx->downcount -= 18;
    // 7F0B2BD0: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0B2BD4:
    ctx->pc = 0x7F0B2BD4u;
    // 7F0B2BD4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0B2BD8:
    ctx->pc = 0x7F0B2BD8u;
    // 7F0B2BD8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B2BDC:
    ctx->pc = 0x7F0B2BDCu;
    // 7F0B2BDC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B2BE0:
    ctx->pc = 0x7F0B2BE0u;
    // 7F0B2BE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2BE4:
    ctx->pc = 0x7F0B2BE4u;
    // 7F0B2BE4: addi    r8, r7, -4944
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-4944);

label_7F0B2BE8:
    ctx->pc = 0x7F0B2BE8u;
    // 7F0B2BE8: addi    r7, r6, -4844
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-4844);

label_7F0B2BEC:
    ctx->pc = 0x7F0B2BECu;
    // 7F0B2BEC: addi    r6, r5, -4916
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4916);

label_7F0B2BF0:
    ctx->pc = 0x7F0B2BF0u;
    // 7F0B2BF0: addi    r5, r4, -4924
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4924);

label_7F0B2BF4:
    ctx->pc = 0x7F0B2BF4u;
    // 7F0B2BF4: addi    r4, r3, -4920
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4920);

label_7F0B2BF8:
    ctx->pc = 0x7F0B2BF8u;
    // 7F0B2BF8: lfd     f5, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2BF8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2BFC:
    ctx->pc = 0x7F0B2BFCu;
    // 7F0B2BFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B2C00:
    ctx->pc = 0x7F0B2C00u;
    // 7F0B2C00: lfs     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C00u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0B2C04:
    ctx->pc = 0x7F0B2C04u;
    // 7F0B2C04: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B2C08:
    ctx->pc = 0x7F0B2C08u;
    // 7F0B2C08: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0B2C0C:
    ctx->pc = 0x7F0B2C0Cu;
    // 7F0B2C0C: lis     r28, 17200
    ctx->gpr[28] = ((u32)(s32)(17200) << 16);

label_7F0B2C10:
    ctx->pc = 0x7F0B2C10u;
    // 7F0B2C10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B2C14:
    ctx->pc = 0x7F0B2C14u;
    // 7F0B2C14: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B2C18:
    ctx->downcount -= 5;
    // 7F0B2C18: add   r27, r31, r9
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F0B2C1C:
    // 7F0B2C1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B2C20:
    ctx->pc = 0x7F0B2C20u;
    // 7F0B2C20: lwz     r5, 192(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2C24:
    // 7F0B2C24: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B2C28:
    ctx->pc = 0x7F0B2C28u;
    // 7F0B2C28: lwz     r6, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B2C2C:
    ctx->downcount -= 4;
    // 7F0B2C2C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0B2C30:
    // 7F0B2C30: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0B2C34:
    ctx->pc = 0x7F0B2C34u;
    // 7F0B2C34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B2C38:
    ctx->downcount -= 3;
    // 7F0B2C38: rlwinm. r11, r8, 0, 31, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2C3C:
    // 7F0B2C3C: li      r0, -34
    ctx->gpr[0] = (u32)(s32)(-34);

label_7F0B2C40:
    // 7F0B2C40: bc    12, 2, 0x7F0B2C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2C48;
        }
    }

label_7F0B2C44:
    ctx->downcount -= 1;
    // 7F0B2C44: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_7F0B2C48:
    ctx->downcount -= 9;
    // 7F0B2C48: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B2C4C:
    ctx->pc = 0x7F0B2C4Cu;
    // 7F0B2C4C: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0B2C50:
    // 7F0B2C50: rlwinm. r12, r8, 0, 30, 30
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[12];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2C54:
    ctx->pc = 0x7F0B2C54u;
    // 7F0B2C54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2C58:
    // 7F0B2C58: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B2C5C:
    ctx->pc = 0x7F0B2C5Cu;
    // 7F0B2C5C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2C60:
    ctx->pc = 0x7F0B2C60u;
    // 7F0B2C60: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C60u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0B2C64:
    ctx->pc = 0x7F0B2C64u;
    // 7F0B2C64: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C64u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2C68:
    // 7F0B2C68: bc    12, 2, 0x7F0B2C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2C70;
        }
    }

label_7F0B2C6C:
    ctx->downcount -= 1;
    // 7F0B2C6C: addi    r0, r4, -500
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-500);

label_7F0B2C70:
    ctx->downcount -= 29;
    // 7F0B2C70: xoris   r10, r0, 0x8000
    ctx->gpr[10] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0B2C74:
    // 7F0B2C74: subfic  r0, r11, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[11]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B2C78:
    ctx->pc = 0x7F0B2C78u;
    // 7F0B2C78: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B2C7C:
    // 7F0B2C7C: subfe   r11, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[11] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B2C80:
    // 7F0B2C80: subfic  r0, r12, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[12]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B2C84:
    // 7F0B2C84: li      r10, 4096
    ctx->gpr[10] = (u32)(s32)(4096);

label_7F0B2C88:
    ctx->pc = 0x7F0B2C88u;
    // 7F0B2C88: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0B2C8C:
    // 7F0B2C8C: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B2C90:
    // 7F0B2C90: li      r29, 48
    ctx->gpr[29] = (u32)(s32)(48);

label_7F0B2C94:
    // 7F0B2C94: li      r12, 128
    ctx->gpr[12] = (u32)(s32)(128);

label_7F0B2C98:
    ctx->pc = 0x7F0B2C98u;
    // 7F0B2C98: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2C98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2C9C:
    // 7F0B2C9C: and   r11, r10, r11
    {
        ctx->gpr[11] = ctx->gpr[10] & ctx->gpr[11];
    }

label_7F0B2CA0:
    // 7F0B2CA0: and   r0, r10, r0
    {
        ctx->gpr[0] = ctx->gpr[10] & ctx->gpr[0];
    }

label_7F0B2CA4:
    // 7F0B2CA4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0B2CA8:
    ctx->pc = 0x7F0B2CA8u;
    // 7F0B2CA8: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0B2CA8u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0B2CAC:
    // 7F0B2CAC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F0B2CB0:
    ctx->pc = 0x7F0B2CB0u;
    // 7F0B2CB0: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2CB0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2CB4:
    ctx->pc = 0x7F0B2CB4u;
    // 7F0B2CB4: stfs     f4, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2CB4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0B2CB8:
    ctx->pc = 0x7F0B2CB8u;
    // 7F0B2CB8: stfs     f3, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2CB8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0B2CBC:
    // 7F0B2CBC: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F0B2CC0:
    ctx->pc = 0x7F0B2CC0u;
    // 7F0B2CC0: stb     r29, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F0B2CC4:
    ctx->pc = 0x7F0B2CC4u;
    // 7F0B2CC4: stb     r29, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F0B2CC8:
    ctx->pc = 0x7F0B2CC8u;
    // 7F0B2CC8: stb     r29, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F0B2CCC:
    ctx->pc = 0x7F0B2CCCu;
    // 7F0B2CCC: stb     r12, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F0B2CD0:
    ctx->pc = 0x7F0B2CD0u;
    // 7F0B2CD0: sth     r10, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F0B2CD4:
    ctx->pc = 0x7F0B2CD4u;
    // 7F0B2CD4: sth     r11, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F0B2CD8:
    ctx->pc = 0x7F0B2CD8u;
    // 7F0B2CD8: sth     r0, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2CDC:
    // 7F0B2CDC: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F0B2CE0:
    // 7F0B2CE0: bc    16, 0, 0x7F0B2C38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2C38u;
                return;
            }
            goto label_7F0B2C38;
        }
    }

label_7F0B2CE4:
    ctx->downcount -= 4;
    // 7F0B2CE4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F0B2CE8:
    // 7F0B2CE8: addi    r4, r4, -500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-500);

label_7F0B2CEC:
    // 7F0B2CEC: cmpwi   r7, 32
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B2CF0:
    // 7F0B2CF0: bc    12, 0, 0x7F0B2C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2C2Cu;
                return;
            }
            goto label_7F0B2C2C;
        }
    }

label_7F0B2CF4:
    ctx->pc = 0x7F0B2CF4u;
    ctx->downcount -= 19;
    // 7F0B2CF4: lwz     r4, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2CF8:
    // 7F0B2CF8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B2CFC:
    // 7F0B2CFC: cmpwi   r3, 2
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

label_7F0B2D00:
    // 7F0B2D00: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_7F0B2D04:
    ctx->pc = 0x7F0B2D04u;
    // 7F0B2D04: stfs     f2, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B2D08:
    ctx->pc = 0x7F0B2D08u;
    // 7F0B2D08: stfs     f2, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B2D0C:
    ctx->pc = 0x7F0B2D0Cu;
    // 7F0B2D0C: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2D10:
    ctx->pc = 0x7F0B2D10u;
    // 7F0B2D10: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D10u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2D14:
    ctx->pc = 0x7F0B2D14u;
    // 7F0B2D14: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2D18:
    ctx->pc = 0x7F0B2D18u;
    // 7F0B2D18: lfs     f0, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2D1C:
    ctx->pc = 0x7F0B2D1Cu;
    // 7F0B2D1C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D1Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2D20:
    ctx->pc = 0x7F0B2D20u;
    // 7F0B2D20: stfs     f0, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2D24:
    ctx->pc = 0x7F0B2D24u;
    // 7F0B2D24: lfs     f0, 72(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2D28:
    ctx->pc = 0x7F0B2D28u;
    // 7F0B2D28: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D28u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2D2C:
    ctx->pc = 0x7F0B2D2Cu;
    // 7F0B2D2C: stfs     f0, 72(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2D30:
    ctx->pc = 0x7F0B2D30u;
    // 7F0B2D30: lfs     f0, 88(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2D34:
    ctx->pc = 0x7F0B2D34u;
    // 7F0B2D34: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D34u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0B2D38:
    ctx->pc = 0x7F0B2D38u;
    // 7F0B2D38: stfs     f0, 88(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2D38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2D3C:
    // 7F0B2D3C: bc    12, 0, 0x7F0B2C18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2C18u;
                return;
            }
            goto label_7F0B2C18;
        }
    }

label_7F0B2D40:
    ctx->pc = 0x7F0B2D40u;
    ctx->downcount -= 4;
    // 7F0B2D40: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0B2D44:
    ctx->pc = 0x7F0B2D44u;
    // 7F0B2D44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B2D48:
    ctx->pc = 0x7F0B2D48u;
    // 7F0B2D48: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B2D4C:
    loop_7F0B2D4C(ctx);
    if (ctx->pc == 0x7F0B2D5Cu) goto label_7F0B2D5C;
    return;
label_7F0B2D50:
    // 7F0B2D50: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0B2D54:
    ctx->pc = 0x7F0B2D54u;
    // 7F0B2D54: stwx    r10, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B2D58:
    // 7F0B2D58: bc    16, 0, 0x7F0B2D4C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2D4Cu;
                return;
            }
            goto label_7F0B2D4C;
        }
    }

label_7F0B2D5C:
    ctx->pc = 0x7F0B2D5Cu;
    ctx->downcount -= 5;
    // 7F0B2D5C: stw     r31, 516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B2D60:
    ctx->pc = 0x7F0B2D60u;
    // 7F0B2D60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B2D64:
    ctx->pc = 0x7F0B2D64u;
    // 7F0B2D64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B2D68:
    ctx->pc = 0x7F0B2D68u;
    // 7F0B2D68: stw     r0, 1676(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2D6C:
    ctx->pc = 0x7F0B2D6Cu;
    // 7F0B2D6C: stw     r0, 1672(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2D70:
    ctx->pc = 0x7F0B2D70u;
    ctx->downcount -= 16;
    // 7F0B2D70: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B2D74:
    ctx->pc = 0x7F0B2D74u;
    // 7F0B2D74: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2D78:
    ctx->pc = 0x7F0B2D78u;
    // 7F0B2D78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B2D7C:
    ctx->pc = 0x7F0B2D7Cu;
    // 7F0B2D7C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B2D80:
    ctx->pc = 0x7F0B2D80u;
    // 7F0B2D80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B2D84:
    ctx->pc = 0x7F0B2D84u;
    ctx->downcount -= 7;
    // 7F0B2D84: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B2D88:
    ctx->pc = 0x7F0B2D88u;
    // 7F0B2D88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B2D8C:
    ctx->pc = 0x7F0B2D8Cu;
    // 7F0B2D8C: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2D90:
    ctx->pc = 0x7F0B2D90u;
    // 7F0B2D90: stw     r31, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B2D94:
    ctx->pc = 0x7F0B2D94u;
    // 7F0B2D94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B2D98:
    ctx->pc = 0x7F0B2D98u;
    // 7F0B2D98: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B2D9C:
    ctx->pc = 0x7F0B2D9Cu;
    // 7F0B2D9C: bl      0x7F04291C
    {
            ctx->lr = 0x7F0B2DA0u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F0B2DA0:
    ctx->pc = 0x7F0B2DA0u;
    ctx->downcount -= 4;
    // 7F0B2DA0: lwz     r3, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2DA4:
    ctx->pc = 0x7F0B2DA4u;
    // 7F0B2DA4: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2DA8:
    ctx->pc = 0x7F0B2DA8u;
    // 7F0B2DA8: cmpwi   r0, 0
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

label_7F0B2DAC:
    ctx->pc = 0x7F0B2DACu;
    // 7F0B2DAC: bc    12, 1, 0x7F0B2DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2DBC;
        }
    }

label_7F0B2DB0:
    ctx->pc = 0x7F0B2DB0u;
    ctx->downcount -= 3;
    // 7F0B2DB0: lhz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B2DB4:
    ctx->pc = 0x7F0B2DB4u;
    // 7F0B2DB4: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F0B2DB8:
    ctx->pc = 0x7F0B2DB8u;
    // 7F0B2DB8: sth     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B2DBC:
    ctx->pc = 0x7F0B2DBCu;
    ctx->downcount -= 3;
    // 7F0B2DBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2DC0:
    ctx->pc = 0x7F0B2DC0u;
    // 7F0B2DC0: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F0B2DC4:
    ctx->pc = 0x7F0B2DC4u;
    // 7F0B2DC4: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B2DC8u;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B2DC8:
    ctx->pc = 0x7F0B2DC8u;
    ctx->downcount -= 2;
    // 7F0B2DC8: cmpwi   r3, 0
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

label_7F0B2DCC:
    ctx->pc = 0x7F0B2DCCu;
    // 7F0B2DCC: bc    12, 2, 0x7F0B2DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2DD8;
        }
    }

label_7F0B2DD0:
    ctx->pc = 0x7F0B2DD0u;
    ctx->downcount -= 2;
    // 7F0B2DD0: lfs     f0, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2DD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2DD4:
    ctx->pc = 0x7F0B2DD4u;
    // 7F0B2DD4: b       0x7F0B2DE0
    {
            goto label_7F0B2DE0;
    }

label_7F0B2DD8:
    ctx->pc = 0x7F0B2DD8u;
    ctx->downcount -= 2;
    // 7F0B2DD8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2DDC:
    ctx->pc = 0x7F0B2DDCu;
    // 7F0B2DDC: lfs     f0, -4840(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2DDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4840);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2DE0:
    ctx->pc = 0x7F0B2DE0u;
    ctx->downcount -= 4;
    // 7F0B2DE0: stfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2DE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2DE4:
    ctx->pc = 0x7F0B2DE4u;
    // 7F0B2DE4: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B2DE8:
    ctx->pc = 0x7F0B2DE8u;
    // 7F0B2DE8: addi    r4, r31, 464
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B2DEC:
    ctx->pc = 0x7F0B2DECu;
    // 7F0B2DEC: bl      0x7F0B4CD0
    {
            ctx->lr = 0x7F0B2DF0u;
            ctx->pc = 0x7F0B4CD0u;
            return;
    }

label_7F0B2DF0:
    ctx->pc = 0x7F0B2DF0u;
    ctx->downcount -= 18;
    // 7F0B2DF0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B2DF4:
    ctx->pc = 0x7F0B2DF4u;
    // 7F0B2DF4: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B2DF8:
    ctx->pc = 0x7F0B2DF8u;
    // 7F0B2DF8: addi    r6, r3, -5708
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0B2DFC:
    ctx->pc = 0x7F0B2DFCu;
    // 7F0B2DFC: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2E00:
    ctx->pc = 0x7F0B2E00u;
    // 7F0B2E00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B2E04:
    ctx->pc = 0x7F0B2E04u;
    // 7F0B2E04: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E08:
    ctx->pc = 0x7F0B2E08u;
    // 7F0B2E08: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2E0C:
    ctx->pc = 0x7F0B2E0Cu;
    // 7F0B2E0C: addi    r0, r3, 28076
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28076);

label_7F0B2E10:
    ctx->pc = 0x7F0B2E10u;
    // 7F0B2E10: lfs     f0, -4836(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2E10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4836);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2E14:
    ctx->pc = 0x7F0B2E14u;
    // 7F0B2E14: stw     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B2E18:
    ctx->pc = 0x7F0B2E18u;
    // 7F0B2E18: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2E1C:
    ctx->pc = 0x7F0B2E1Cu;
    // 7F0B2E1C: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2E20:
    ctx->pc = 0x7F0B2E20u;
    // 7F0B2E20: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B2E24:
    ctx->pc = 0x7F0B2E24u;
    // 7F0B2E24: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B2E28:
    ctx->pc = 0x7F0B2E28u;
    // 7F0B2E28: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2E28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2E2C:
    ctx->pc = 0x7F0B2E2Cu;
    // 7F0B2E2C: lwz     r4, 3316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2E30:
    ctx->pc = 0x7F0B2E30u;
    // 7F0B2E30: cmplw   r4, r0
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

label_7F0B2E34:
    ctx->pc = 0x7F0B2E34u;
    // 7F0B2E34: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E38:
    ctx->pc = 0x7F0B2E38u;
    ctx->downcount -= 4;
    // 7F0B2E38: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E3C:
    ctx->pc = 0x7F0B2E3Cu;
    // 7F0B2E3C: addi    r0, r3, 24764
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(24764);

label_7F0B2E40:
    ctx->pc = 0x7F0B2E40u;
    // 7F0B2E40: cmplw   r4, r0
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

label_7F0B2E44:
    ctx->pc = 0x7F0B2E44u;
    // 7F0B2E44: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E48:
    ctx->pc = 0x7F0B2E48u;
    ctx->downcount -= 4;
    // 7F0B2E48: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E4C:
    ctx->pc = 0x7F0B2E4Cu;
    // 7F0B2E4C: addi    r0, r3, 31496
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31496);

label_7F0B2E50:
    ctx->pc = 0x7F0B2E50u;
    // 7F0B2E50: cmplw   r4, r0
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

label_7F0B2E54:
    ctx->pc = 0x7F0B2E54u;
    // 7F0B2E54: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E58:
    ctx->pc = 0x7F0B2E58u;
    ctx->downcount -= 4;
    // 7F0B2E58: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E5C:
    ctx->pc = 0x7F0B2E5Cu;
    // 7F0B2E5C: addi    r0, r3, 30332
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30332);

label_7F0B2E60:
    ctx->pc = 0x7F0B2E60u;
    // 7F0B2E60: cmplw   r4, r0
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

label_7F0B2E64:
    ctx->pc = 0x7F0B2E64u;
    // 7F0B2E64: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E68:
    ctx->pc = 0x7F0B2E68u;
    ctx->downcount -= 4;
    // 7F0B2E68: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E6C:
    ctx->pc = 0x7F0B2E6Cu;
    // 7F0B2E6C: addi    r0, r3, 32156
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32156);

label_7F0B2E70:
    ctx->pc = 0x7F0B2E70u;
    // 7F0B2E70: cmplw   r4, r0
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

label_7F0B2E74:
    ctx->pc = 0x7F0B2E74u;
    // 7F0B2E74: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E78:
    ctx->pc = 0x7F0B2E78u;
    ctx->downcount -= 4;
    // 7F0B2E78: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B2E7C:
    ctx->pc = 0x7F0B2E7Cu;
    // 7F0B2E7C: addi    r0, r3, 32568
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32568);

label_7F0B2E80:
    ctx->pc = 0x7F0B2E80u;
    // 7F0B2E80: cmplw   r4, r0
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

label_7F0B2E84:
    ctx->pc = 0x7F0B2E84u;
    // 7F0B2E84: bc    12, 2, 0x7F0B2E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2E98;
        }
    }

label_7F0B2E88:
    ctx->pc = 0x7F0B2E88u;
    ctx->downcount -= 4;
    // 7F0B2E88: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B2E8C:
    ctx->pc = 0x7F0B2E8Cu;
    // 7F0B2E8C: lfs     f0, -32000(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2E8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2E90:
    ctx->pc = 0x7F0B2E90u;
    // 7F0B2E90: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2E90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2E94:
    ctx->pc = 0x7F0B2E94u;
    // 7F0B2E94: b       0x7F0B2EB8
    {
            goto label_7F0B2EB8;
    }

label_7F0B2E98:
    ctx->pc = 0x7F0B2E98u;
    ctx->downcount -= 5;
    // 7F0B2E98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2E9C:
    ctx->pc = 0x7F0B2E9Cu;
    // 7F0B2E9C: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2E9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B2EA0:
    ctx->pc = 0x7F0B2EA0u;
    // 7F0B2EA0: lfs     f0, -4836(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4836);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2EA4:
    ctx->pc = 0x7F0B2EA4u;
    // 7F0B2EA4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EA4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0B2EA8:
    ctx->pc = 0x7F0B2EA8u;
    // 7F0B2EA8: bc    4, 1, 0x7F0B2EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2EB0;
        }
    }

label_7F0B2EAC:
    ctx->pc = 0x7F0B2EACu;
    ctx->downcount -= 1;
    // 7F0B2EAC: b       0x7F0B2EB4
    {
            goto label_7F0B2EB4;
    }

label_7F0B2EB0:
    ctx->pc = 0x7F0B2EB0u;
    ctx->downcount -= 1;
    // 7F0B2EB0: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EB0u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F0B2EB4:
    ctx->pc = 0x7F0B2EB4u;
    ctx->downcount -= 1;
    // 7F0B2EB4: stfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B2EB8:
    ctx->pc = 0x7F0B2EB8u;
    ctx->downcount -= 5;
    // 7F0B2EB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2EBC:
    ctx->pc = 0x7F0B2EBCu;
    // 7F0B2EBC: lfs     f1, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B2EC0:
    ctx->pc = 0x7F0B2EC0u;
    // 7F0B2EC0: lfs     f0, -4832(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2EC4:
    ctx->pc = 0x7F0B2EC4u;
    // 7F0B2EC4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2EC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0B2EC8:
    ctx->pc = 0x7F0B2EC8u;
    // 7F0B2EC8: bc    4, 0, 0x7F0B2ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2ED0;
        }
    }

label_7F0B2ECC:
    ctx->pc = 0x7F0B2ECCu;
    ctx->downcount -= 1;
    // 7F0B2ECC: b       0x7F0B2ED4
    {
            goto label_7F0B2ED4;
    }

label_7F0B2ED0:
    ctx->pc = 0x7F0B2ED0u;
    ctx->downcount -= 1;
    // 7F0B2ED0: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2ED0u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F0B2ED4:
    ctx->pc = 0x7F0B2ED4u;
    ctx->downcount -= 4;
    // 7F0B2ED4: stfs     f1, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2ED4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B2ED8:
    ctx->pc = 0x7F0B2ED8u;
    // 7F0B2ED8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2EDC:
    ctx->pc = 0x7F0B2EDCu;
    // 7F0B2EDC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B2EE0:
    ctx->pc = 0x7F0B2EE0u;
    // 7F0B2EE0: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B2EE4u;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B2EE4:
    ctx->pc = 0x7F0B2EE4u;
    ctx->downcount -= 2;
    // 7F0B2EE4: cmpwi   r3, 0
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

label_7F0B2EE8:
    ctx->pc = 0x7F0B2EE8u;
    // 7F0B2EE8: bc    4, 2, 0x7F0B2F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2F14;
        }
    }

label_7F0B2EEC:
    ctx->pc = 0x7F0B2EECu;
    ctx->downcount -= 2;
    // 7F0B2EEC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B2EF0:
    ctx->pc = 0x7F0B2EF0u;
    // 7F0B2EF0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F0B2EF4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F0B2EF4:
    ctx->pc = 0x7F0B2EF4u;
    ctx->downcount -= 3;
    // 7F0B2EF4: lwz     r4, 1616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1616);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2EF8:
    ctx->pc = 0x7F0B2EF8u;
    // 7F0B2EF8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B2EFC:
    ctx->pc = 0x7F0B2EFCu;
    // 7F0B2EFC: bl      0x7F114E28
    {
            ctx->lr = 0x7F0B2F00u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F0B2F00:
    ctx->pc = 0x7F0B2F00u;
    ctx->downcount -= 2;
    // 7F0B2F00: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B2F04:
    ctx->pc = 0x7F0B2F04u;
    // 7F0B2F04: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F0B2F08u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F0B2F08:
    ctx->pc = 0x7F0B2F08u;
    ctx->downcount -= 3;
    // 7F0B2F08: lwz     r4, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B2F0C:
    ctx->pc = 0x7F0B2F0Cu;
    // 7F0B2F0C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0B2F10:
    ctx->pc = 0x7F0B2F10u;
    // 7F0B2F10: bl      0x7F114E28
    {
            ctx->lr = 0x7F0B2F14u;
            ctx->pc = 0x7F114E28u;
            return;
    }

label_7F0B2F14:
    ctx->pc = 0x7F0B2F14u;
    ctx->downcount -= 2;
    // 7F0B2F14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2F18:
    ctx->pc = 0x7F0B2F18u;
    // 7F0B2F18: bl      0x7F0B4D40
    {
            ctx->lr = 0x7F0B2F1Cu;
            ctx->pc = 0x7F0B4D40u;
            return;
    }

label_7F0B2F1C:
    ctx->pc = 0x7F0B2F1Cu;
    ctx->downcount -= 3;
    // 7F0B2F1C: lhz     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F0B2F20:
    ctx->pc = 0x7F0B2F20u;
    // 7F0B2F20: rlwinm. r0, r3, 0, 31, 31
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

label_7F0B2F24:
    ctx->pc = 0x7F0B2F24u;
    // 7F0B2F24: bc    4, 2, 0x7F0B2F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2F30;
        }
    }

label_7F0B2F28:
    ctx->pc = 0x7F0B2F28u;
    ctx->downcount -= 2;
    // 7F0B2F28: rlwinm. r0, r3, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B2F2C:
    ctx->pc = 0x7F0B2F2Cu;
    // 7F0B2F2C: bc    12, 2, 0x7F0B2F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2F3C;
        }
    }

label_7F0B2F30:
    ctx->pc = 0x7F0B2F30u;
    ctx->downcount -= 3;
    // 7F0B2F30: lha     r0, 3468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3468);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2F34:
    ctx->pc = 0x7F0B2F34u;
    // 7F0B2F34: cmpwi   r0, 0
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

label_7F0B2F38:
    ctx->pc = 0x7F0B2F38u;
    // 7F0B2F38: bc    4, 1, 0x7F0B2F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B2F90;
        }
    }

label_7F0B2F3C:
    ctx->pc = 0x7F0B2F3Cu;
    ctx->downcount -= 2;
    // 7F0B2F3C: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F0B2F40:
    ctx->pc = 0x7F0B2F40u;
    // 7F0B2F40: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F0B2F44u;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F0B2F44:
    ctx->pc = 0x7F0B2F44u;
    ctx->downcount -= 3;
    // 7F0B2F44: lha     r3, 3468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3468);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2F48:
    ctx->pc = 0x7F0B2F48u;
    // 7F0B2F48: lha     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2F4C:
    ctx->pc = 0x7F0B2F4Cu;
    // 7F0B2F4C: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F0B2F50u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F0B2F50:
    ctx->pc = 0x7F0B2F50u;
    ctx->downcount -= 16;
    // 7F0B2F50: sth     r3, 3468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3468);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B2F54:
    ctx->pc = 0x7F0B2F54u;
    // 7F0B2F54: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0B2F58:
    ctx->pc = 0x7F0B2F58u;
    // 7F0B2F58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B2F5C:
    ctx->pc = 0x7F0B2F5Cu;
    // 7F0B2F5C: lha     r5, 3468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3468);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B2F60:
    ctx->pc = 0x7F0B2F60u;
    // 7F0B2F60: addi    r4, r3, -4944
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4944);

label_7F0B2F64:
    ctx->pc = 0x7F0B2F64u;
    // 7F0B2F64: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2F68:
    ctx->pc = 0x7F0B2F68u;
    // 7F0B2F68: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F0B2F6C:
    ctx->pc = 0x7F0B2F6Cu;
    // 7F0B2F6C: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F0B2F70:
    ctx->pc = 0x7F0B2F70u;
    // 7F0B2F70: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2F74:
    ctx->pc = 0x7F0B2F74u;
    // 7F0B2F74: stw     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B2F78:
    ctx->pc = 0x7F0B2F78u;
    // 7F0B2F78: lfs     f2, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B2F7C:
    ctx->pc = 0x7F0B2F7Cu;
    // 7F0B2F7C: lfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B2F80:
    ctx->pc = 0x7F0B2F80u;
    // 7F0B2F80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B2F84:
    ctx->pc = 0x7F0B2F84u;
    // 7F0B2F84: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F84u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0B2F88:
    ctx->pc = 0x7F0B2F88u;
    // 7F0B2F88: stfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2F88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2F8C:
    ctx->pc = 0x7F0B2F8Cu;
    // 7F0B2F8C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0B2F90u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0B2F90:
    ctx->pc = 0x7F0B2F90u;
    ctx->downcount -= 2;
    // 7F0B2F90: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B2F94:
    ctx->pc = 0x7F0B2F94u;
    // 7F0B2F94: bl      0x7F0429C4
    {
            ctx->lr = 0x7F0B2F98u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F0B2F98:
    ctx->pc = 0x7F0B2F98u;
    ctx->downcount -= 5;
    // 7F0B2F98: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2F9C:
    ctx->pc = 0x7F0B2F9Cu;
    // 7F0B2F9C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B2FA0:
    ctx->pc = 0x7F0B2FA0u;
    // 7F0B2FA0: addi    r4, r31, 1004
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1004);

label_7F0B2FA4:
    ctx->pc = 0x7F0B2FA4u;
    // 7F0B2FA4: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0B2FA8:
    ctx->pc = 0x7F0B2FA8u;
    // 7F0B2FA8: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0B2FACu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0B2FAC:
    ctx->pc = 0x7F0B2FACu;
    ctx->downcount -= 6;
    // 7F0B2FAC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B2FB0:
    ctx->pc = 0x7F0B2FB0u;
    // 7F0B2FB0: addi    r3, r31, 1376
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1376);

label_7F0B2FB4:
    ctx->pc = 0x7F0B2FB4u;
    // 7F0B2FB4: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F0B2FB8:
    ctx->pc = 0x7F0B2FB8u;
    // 7F0B2FB8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B2FBC:
    ctx->pc = 0x7F0B2FBCu;
    // 7F0B2FBC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B2FC0:
    ctx->pc = 0x7F0B2FC0u;
    // 7F0B2FC0: bl      0x7F014944
    {
            ctx->lr = 0x7F0B2FC4u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F0B2FC4:
    ctx->pc = 0x7F0B2FC4u;
    ctx->downcount -= 3;
    // 7F0B2FC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B2FC8:
    ctx->pc = 0x7F0B2FC8u;
    // 7F0B2FC8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B2FCC:
    ctx->pc = 0x7F0B2FCCu;
    // 7F0B2FCC: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B2FD0u;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B2FD0:
    ctx->pc = 0x7F0B2FD0u;
    ctx->downcount -= 2;
    // 7F0B2FD0: cmpwi   r3, 0
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

label_7F0B2FD4:
    ctx->pc = 0x7F0B2FD4u;
    // 7F0B2FD4: bc    4, 2, 0x7F0B302C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B302C;
        }
    }

label_7F0B2FD8:
    ctx->pc = 0x7F0B2FD8u;
    ctx->downcount -= 3;
    // 7F0B2FD8: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2FDC:
    ctx->pc = 0x7F0B2FDCu;
    // 7F0B2FDC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B2FE0:
    ctx->pc = 0x7F0B2FE0u;
    // 7F0B2FE0: bl      0x7F0B4DB8
    {
            ctx->lr = 0x7F0B2FE4u;
            ctx->pc = 0x7F0B4DB8u;
            return;
    }

label_7F0B2FE4:
    ctx->pc = 0x7F0B2FE4u;
    ctx->downcount -= 18;
    // 7F0B2FE4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2FE8:
    ctx->pc = 0x7F0B2FE8u;
    // 7F0B2FE8: lwz     r3, 1616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2FEC:
    ctx->pc = 0x7F0B2FECu;
    // 7F0B2FEC: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2FECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2FF0:
    ctx->pc = 0x7F0B2FF0u;
    // 7F0B2FF0: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2FF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B2FF4:
    ctx->pc = 0x7F0B2FF4u;
    // 7F0B2FF4: lwz     r3, 1616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B2FF8:
    ctx->pc = 0x7F0B2FF8u;
    // 7F0B2FF8: stfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2FF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B2FFC:
    ctx->pc = 0x7F0B2FFCu;
    // 7F0B2FFC: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B2FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3000:
    ctx->pc = 0x7F0B3000u;
    // 7F0B3000: lwz     r3, 1616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3004:
    ctx->pc = 0x7F0B3004u;
    // 7F0B3004: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3004u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3008:
    ctx->pc = 0x7F0B3008u;
    // 7F0B3008: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B300C:
    ctx->pc = 0x7F0B300Cu;
    // 7F0B300C: lwz     r3, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3010:
    ctx->pc = 0x7F0B3010u;
    // 7F0B3010: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3010u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3014:
    ctx->pc = 0x7F0B3014u;
    // 7F0B3014: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3018:
    ctx->pc = 0x7F0B3018u;
    // 7F0B3018: lwz     r3, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B301C:
    ctx->pc = 0x7F0B301Cu;
    // 7F0B301C: stfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B301Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3020:
    ctx->pc = 0x7F0B3020u;
    // 7F0B3020: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3024:
    ctx->pc = 0x7F0B3024u;
    // 7F0B3024: lwz     r3, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3028:
    ctx->pc = 0x7F0B3028u;
    // 7F0B3028: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3028u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B302C:
    ctx->pc = 0x7F0B302Cu;
    ctx->downcount -= 35;
    // 7F0B302C: lwz     r9, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0B3030:
    ctx->pc = 0x7F0B3030u;
    // 7F0B3030: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3034:
    ctx->pc = 0x7F0B3034u;
    // 7F0B3034: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B3038:
    ctx->pc = 0x7F0B3038u;
    // 7F0B3038: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0B303C:
    ctx->pc = 0x7F0B303Cu;
    // 7F0B303C: lfs     f0, 4380(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F0B303Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3040:
    ctx->pc = 0x7F0B3040u;
    // 7F0B3040: addi    r8, r4, 21980
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(21980);

label_7F0B3044:
    ctx->pc = 0x7F0B3044u;
    // 7F0B3044: addi    r6, r3, -4828
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-4828);

label_7F0B3048:
    ctx->pc = 0x7F0B3048u;
    // 7F0B3048: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B304C:
    ctx->pc = 0x7F0B304Cu;
    // 7F0B304C: stfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B304Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3050:
    ctx->pc = 0x7F0B3050u;
    // 7F0B3050: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0B3054:
    ctx->pc = 0x7F0B3054u;
    // 7F0B3054: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3054u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3058:
    ctx->pc = 0x7F0B3058u;
    // 7F0B3058: addi    r7, r5, 21964
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(21964);

label_7F0B305C:
    ctx->pc = 0x7F0B305Cu;
    // 7F0B305C: lfs     f2, 4384(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F0B305Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B3060:
    ctx->pc = 0x7F0B3060u;
    // 7F0B3060: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B3064:
    ctx->pc = 0x7F0B3064u;
    // 7F0B3064: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3068:
    ctx->pc = 0x7F0B3068u;
    // 7F0B3068: stfs     f2, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3068u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0B306C:
    ctx->pc = 0x7F0B306Cu;
    // 7F0B306C: lfs     f1, 4388(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F0B306Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B3070:
    ctx->pc = 0x7F0B3070u;
    // 7F0B3070: stfs     f1, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3070u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B3074:
    ctx->pc = 0x7F0B3074u;
    // 7F0B3074: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B3074u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0B3078:
    ctx->pc = 0x7F0B3078u;
    // 7F0B3078: lfs     f1, 1492(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3078u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B307C:
    ctx->pc = 0x7F0B307Cu;
    // 7F0B307C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B307Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0B3080:
    ctx->pc = 0x7F0B3080u;
    // 7F0B3080: stfs     f0, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3080u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3084:
    ctx->pc = 0x7F0B3084u;
    // 7F0B3084: stfs     f1, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3084u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0B3088:
    ctx->pc = 0x7F0B3088u;
    // 7F0B3088: lwz     r5, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B308C:
    ctx->pc = 0x7F0B308Cu;
    // 7F0B308C: lwz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3090:
    ctx->pc = 0x7F0B3090u;
    // 7F0B3090: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3094:
    ctx->pc = 0x7F0B3094u;
    // 7F0B3094: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B3098:
    ctx->pc = 0x7F0B3098u;
    // 7F0B3098: sth     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0B309C:
    ctx->pc = 0x7F0B309Cu;
    // 7F0B309C: lwz     r5, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B30A0:
    ctx->pc = 0x7F0B30A0u;
    // 7F0B30A0: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B30A4:
    ctx->pc = 0x7F0B30A4u;
    // 7F0B30A4: sth     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B30A8:
    ctx->pc = 0x7F0B30A8u;
    // 7F0B30A8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B30AC:
    ctx->pc = 0x7F0B30ACu;
    // 7F0B30AC: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B30B0:
    ctx->pc = 0x7F0B30B0u;
    // 7F0B30B0: cmpwi   r0, 0
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

label_7F0B30B4:
    ctx->pc = 0x7F0B30B4u;
    // 7F0B30B4: bc    4, 0, 0x7F0B30BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B30BC;
        }
    }

label_7F0B30B8:
    ctx->pc = 0x7F0B30B8u;
    ctx->downcount -= 1;
    // 7F0B30B8: sth     r6, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0B30BC:
    ctx->pc = 0x7F0B30BCu;
    ctx->downcount -= 2;
    // 7F0B30BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B30C0:
    ctx->pc = 0x7F0B30C0u;
    // 7F0B30C0: bl      0x7F0B8038
    {
            ctx->lr = 0x7F0B30C4u;
            ctx->pc = 0x7F0B8038u;
            return;
    }

label_7F0B30C4:
    ctx->pc = 0x7F0B30C4u;
    ctx->downcount -= 2;
    // 7F0B30C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B30C8:
    ctx->pc = 0x7F0B30C8u;
    // 7F0B30C8: bl      0x7F296240
    {
            ctx->lr = 0x7F0B30CCu;
            ctx->pc = 0x7F296240u;
            return;
    }

label_7F0B30CC:
    ctx->pc = 0x7F0B30CCu;
    ctx->downcount -= 4;
    // 7F0B30CC: lbz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0B30D0:
    ctx->pc = 0x7F0B30D0u;
    // 7F0B30D0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F0B30D4:
    ctx->pc = 0x7F0B30D4u;
    // 7F0B30D4: cmpwi   r0, 3
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

label_7F0B30D8:
    ctx->pc = 0x7F0B30D8u;
    // 7F0B30D8: bc    4, 0, 0x7F0B3108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3108;
        }
    }

label_7F0B30DC:
    ctx->pc = 0x7F0B30DCu;
    ctx->downcount -= 6;
    // 7F0B30DC: lha     r3, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B30E0:
    ctx->pc = 0x7F0B30E0u;
    // 7F0B30E0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B30E4:
    ctx->pc = 0x7F0B30E4u;
    // 7F0B30E4: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B30E8:
    ctx->pc = 0x7F0B30E8u;
    // 7F0B30E8: lha     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B30EC:
    ctx->pc = 0x7F0B30ECu;
    // 7F0B30EC: cmpwi   r0, 600
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B30F0:
    ctx->pc = 0x7F0B30F0u;
    // 7F0B30F0: bc    12, 0, 0x7F0B3108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3108;
        }
    }

label_7F0B30F4:
    ctx->pc = 0x7F0B30F4u;
    ctx->downcount -= 5;
    // 7F0B30F4: lbz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F0B30F8:
    ctx->pc = 0x7F0B30F8u;
    // 7F0B30F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B30FC:
    ctx->pc = 0x7F0B30FCu;
    // 7F0B30FC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B3100:
    ctx->pc = 0x7F0B3100u;
    // 7F0B3100: stb     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F0B3104:
    ctx->pc = 0x7F0B3104u;
    // 7F0B3104: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3108:
    ctx->pc = 0x7F0B3108u;
    ctx->downcount -= 6;
    // 7F0B3108: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B310C:
    ctx->pc = 0x7F0B310Cu;
    // 7F0B310C: lwz     r31, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3110:
    ctx->pc = 0x7F0B3110u;
    // 7F0B3110: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3114:
    ctx->pc = 0x7F0B3114u;
    // 7F0B3114: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F0B3118:
    ctx->pc = 0x7F0B3118u;
    // 7F0B3118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B311C:
    ctx->pc = 0x7F0B311Cu;
    ctx->downcount -= 7;
    // 7F0B311C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3120:
    ctx->pc = 0x7F0B3120u;
    // 7F0B3120: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3124:
    ctx->pc = 0x7F0B3124u;
    // 7F0B3124: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3128:
    ctx->pc = 0x7F0B3128u;
    // 7F0B3128: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B312C:
    ctx->pc = 0x7F0B312Cu;
    // 7F0B312C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3130:
    ctx->pc = 0x7F0B3130u;
    // 7F0B3130: addi    r3, r31, 1136
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1136);

label_7F0B3134:
    ctx->pc = 0x7F0B3134u;
    // 7F0B3134: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F0B3138u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F0B3138:
    ctx->pc = 0x7F0B3138u;
    ctx->downcount -= 2;
    // 7F0B3138: addi    r3, r31, 1248
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1248);

label_7F0B313C:
    ctx->pc = 0x7F0B313Cu;
    // 7F0B313C: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F0B3140u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F0B3140:
    ctx->pc = 0x7F0B3140u;
    ctx->downcount -= 3;
    // 7F0B3140: lwz     r3, 1360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3144:
    ctx->pc = 0x7F0B3144u;
    // 7F0B3144: cmplwi  r3, 0x0000
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

label_7F0B3148:
    ctx->pc = 0x7F0B3148u;
    // 7F0B3148: bc    12, 2, 0x7F0B3150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3150;
        }
    }

label_7F0B314C:
    ctx->pc = 0x7F0B314Cu;
    ctx->downcount -= 1;
    // 7F0B314C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B3150u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B3150:
    ctx->pc = 0x7F0B3150u;
    ctx->downcount -= 2;
    // 7F0B3150: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B3154:
    ctx->pc = 0x7F0B3154u;
    // 7F0B3154: bl      0x7F023E10
    {
            ctx->lr = 0x7F0B3158u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0B3158:
    ctx->pc = 0x7F0B3158u;
    ctx->downcount -= 2;
    // 7F0B3158: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B315C:
    ctx->pc = 0x7F0B315Cu;
    // 7F0B315C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0B3160u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0B3160:
    ctx->pc = 0x7F0B3160u;
    ctx->downcount -= 2;
    // 7F0B3160: addi    r3, r31, 1376
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1376);

label_7F0B3164:
    ctx->pc = 0x7F0B3164u;
    // 7F0B3164: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0B3168u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0B3168:
    ctx->pc = 0x7F0B3168u;
    ctx->downcount -= 2;
    // 7F0B3168: lwz     r3, 1616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B316C:
    ctx->pc = 0x7F0B316Cu;
    // 7F0B316C: bl      0x7F3C2440
    {
            ctx->lr = 0x7F0B3170u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F0B3170:
    ctx->pc = 0x7F0B3170u;
    ctx->downcount -= 2;
    // 7F0B3170: lwz     r3, 2132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3174:
    ctx->pc = 0x7F0B3174u;
    // 7F0B3174: bl      0x7F3C2440
    {
            ctx->lr = 0x7F0B3178u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F0B3178:
    ctx->pc = 0x7F0B3178u;
    ctx->downcount -= 6;
    // 7F0B3178: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B317C:
    ctx->pc = 0x7F0B317Cu;
    // 7F0B317C: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0B3180:
    ctx->pc = 0x7F0B3180u;
    // 7F0B3180: addi    r4, r3, -5664
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F0B3184:
    ctx->pc = 0x7F0B3184u;
    // 7F0B3184: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3188:
    ctx->pc = 0x7F0B3188u;
    // 7F0B3188: cmplw   r3, r0
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

label_7F0B318C:
    ctx->pc = 0x7F0B318Cu;
    // 7F0B318C: bc    4, 2, 0x7F0B3198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3198;
        }
    }

label_7F0B3190:
    ctx->pc = 0x7F0B3190u;
    ctx->downcount -= 2;
    // 7F0B3190: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3194:
    ctx->pc = 0x7F0B3194u;
    // 7F0B3194: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3198:
    ctx->pc = 0x7F0B3198u;
    ctx->downcount -= 6;
    // 7F0B3198: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B319C:
    ctx->pc = 0x7F0B319Cu;
    // 7F0B319C: addi    r0, r31, 464
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B31A0:
    ctx->pc = 0x7F0B31A0u;
    // 7F0B31A0: addi    r4, r3, 22156
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F0B31A4:
    ctx->pc = 0x7F0B31A4u;
    // 7F0B31A4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B31A8:
    ctx->pc = 0x7F0B31A8u;
    // 7F0B31A8: cmplw   r3, r0
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

label_7F0B31AC:
    ctx->pc = 0x7F0B31ACu;
    // 7F0B31AC: bc    4, 2, 0x7F0B31B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B31B8;
        }
    }

label_7F0B31B0:
    ctx->pc = 0x7F0B31B0u;
    ctx->downcount -= 2;
    // 7F0B31B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B31B4:
    ctx->pc = 0x7F0B31B4u;
    // 7F0B31B4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B31B8:
    ctx->pc = 0x7F0B31B8u;
    ctx->downcount -= 1;
    // 7F0B31B8: bl      0x7F09116C
    {
            ctx->lr = 0x7F0B31BCu;
            ctx->pc = 0x7F09116Cu;
            return;
    }

label_7F0B31BC:
    ctx->pc = 0x7F0B31BCu;
    ctx->downcount -= 9;
    // 7F0B31BC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B31C0:
    ctx->pc = 0x7F0B31C0u;
    // 7F0B31C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B31C4:
    ctx->pc = 0x7F0B31C4u;
    // 7F0B31C4: stw     r0, 29980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B31C8:
    ctx->pc = 0x7F0B31C8u;
    // 7F0B31C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B31CC:
    ctx->pc = 0x7F0B31CCu;
    // 7F0B31CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B31D0:
    ctx->pc = 0x7F0B31D0u;
    // 7F0B31D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B31D4:
    ctx->pc = 0x7F0B31D4u;
    // 7F0B31D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B31D8:
    ctx->pc = 0x7F0B31D8u;
    // 7F0B31D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B31DC:
    ctx->pc = 0x7F0B31DCu;
    ctx->downcount -= 23;
    // 7F0B31DC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B31E0:
    ctx->pc = 0x7F0B31E0u;
    // 7F0B31E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B31E4:
    ctx->pc = 0x7F0B31E4u;
    // 7F0B31E4: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0B31E8:
    ctx->pc = 0x7F0B31E8u;
    // 7F0B31E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B31EC:
    ctx->pc = 0x7F0B31ECu;
    // 7F0B31EC: addi    r0, r6, 14256
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(14256);

label_7F0B31F0:
    ctx->pc = 0x7F0B31F0u;
    // 7F0B31F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B31F4:
    ctx->pc = 0x7F0B31F4u;
    // 7F0B31F4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B31F8:
    ctx->pc = 0x7F0B31F8u;
    // 7F0B31F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B31FC:
    ctx->pc = 0x7F0B31FCu;
    // 7F0B31FC: addi    r29, r30, 64
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(64);

label_7F0B3200:
    ctx->pc = 0x7F0B3200u;
    // 7F0B3200: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0B3204:
    ctx->pc = 0x7F0B3204u;
    // 7F0B3204: stw     r0, 3312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3208:
    ctx->pc = 0x7F0B3208u;
    // 7F0B3208: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B320C:
    ctx->pc = 0x7F0B320Cu;
    // 7F0B320C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0B3210u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0B3210:
    ctx->pc = 0x7F0B3210u;
    ctx->downcount -= 2;
    // 7F0B3210: cmpwi   r3, 0
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

label_7F0B3214:
    ctx->pc = 0x7F0B3214u;
    // 7F0B3214: bc    4, 0, 0x7F0B3220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3220;
        }
    }

label_7F0B3218:
    ctx->pc = 0x7F0B3218u;
    ctx->downcount -= 2;
    // 7F0B3218: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B321C:
    ctx->pc = 0x7F0B321Cu;
    // 7F0B321C: b       0x7F0B3530
    {
            goto label_7F0B3530;
    }

label_7F0B3220:
    ctx->pc = 0x7F0B3220u;
    ctx->downcount -= 3;
    // 7F0B3220: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B3224:
    ctx->pc = 0x7F0B3224u;
    // 7F0B3224: addi    r4, r30, 464
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(464);

label_7F0B3228:
    ctx->pc = 0x7F0B3228u;
    // 7F0B3228: bl      0x7F023E5C
    {
            ctx->lr = 0x7F0B322Cu;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F0B322C:
    ctx->pc = 0x7F0B322Cu;
    ctx->downcount -= 2;
    // 7F0B322C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F0B3230:
    ctx->pc = 0x7F0B3230u;
    // 7F0B3230: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B3234u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B3234:
    ctx->pc = 0x7F0B3234u;
    ctx->downcount -= 3;
    // 7F0B3234: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3238:
    ctx->pc = 0x7F0B3238u;
    // 7F0B3238: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F0B323C:
    ctx->pc = 0x7F0B323Cu;
    // 7F0B323C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B3240u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B3240:
    ctx->pc = 0x7F0B3240u;
    ctx->downcount -= 4;
    // 7F0B3240: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3244:
    ctx->pc = 0x7F0B3244u;
    // 7F0B3244: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B3248:
    ctx->pc = 0x7F0B3248u;
    // 7F0B3248: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B324C:
    ctx->pc = 0x7F0B324Cu;
    // 7F0B324C: bl      0x7F0242F4
    {
            ctx->lr = 0x7F0B3250u;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F0B3250:
    ctx->pc = 0x7F0B3250u;
    ctx->downcount -= 5;
    // 7F0B3250: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B3254:
    ctx->pc = 0x7F0B3254u;
    // 7F0B3254: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B3258:
    ctx->pc = 0x7F0B3258u;
    // 7F0B3258: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F0B325C:
    ctx->pc = 0x7F0B325Cu;
    // 7F0B325C: li      r6, 450
    ctx->gpr[6] = (u32)(s32)(450);

label_7F0B3260:
    ctx->pc = 0x7F0B3260u;
    // 7F0B3260: bl      0x7F023F7C
    {
            ctx->lr = 0x7F0B3264u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F0B3264:
    ctx->pc = 0x7F0B3264u;
    ctx->downcount -= 6;
    // 7F0B3264: li      r0, 450
    ctx->gpr[0] = (u32)(s32)(450);

label_7F0B3268:
    ctx->pc = 0x7F0B3268u;
    // 7F0B3268: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B326C:
    ctx->pc = 0x7F0B326Cu;
    // 7F0B326C: sth     r0, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3270:
    ctx->pc = 0x7F0B3270u;
    // 7F0B3270: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0B3274:
    ctx->pc = 0x7F0B3274u;
    // 7F0B3274: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B3278:
    ctx->pc = 0x7F0B3278u;
    // 7F0B3278: bl      0x7F023FC0
    {
            ctx->lr = 0x7F0B327Cu;
            ctx->pc = 0x7F023FC0u;
            return;
    }

label_7F0B327C:
    ctx->pc = 0x7F0B327Cu;
    ctx->downcount -= 3;
    // 7F0B327C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B3280:
    ctx->pc = 0x7F0B3280u;
    // 7F0B3280: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B3284:
    ctx->pc = 0x7F0B3284u;
    // 7F0B3284: bl      0x7F024060
    {
            ctx->lr = 0x7F0B3288u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F0B3288:
    ctx->pc = 0x7F0B3288u;
    ctx->downcount -= 2;
    // 7F0B3288: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B328C:
    ctx->pc = 0x7F0B328Cu;
    // 7F0B328C: bl      0x7F023FEC
    {
            ctx->lr = 0x7F0B3290u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F0B3290:
    ctx->pc = 0x7F0B3290u;
    ctx->downcount -= 18;
    // 7F0B3290: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0B3294:
    ctx->pc = 0x7F0B3294u;
    // 7F0B3294: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0B3298:
    ctx->pc = 0x7F0B3298u;
    // 7F0B3298: stw     r29, -5664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0B329C:
    ctx->pc = 0x7F0B329Cu;
    // 7F0B329C: lis     r4, 248
    ctx->gpr[4] = ((u32)(s32)(248) << 16);

label_7F0B32A0:
    ctx->pc = 0x7F0B32A0u;
    // 7F0B32A0: addi    r7, r3, -5708
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F0B32A4:
    ctx->pc = 0x7F0B32A4u;
    // 7F0B32A4: addi    r31, r30, 464
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(464);

label_7F0B32A8:
    ctx->pc = 0x7F0B32A8u;
    // 7F0B32A8: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B32AC:
    ctx->pc = 0x7F0B32ACu;
    // 7F0B32AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B32B0:
    ctx->pc = 0x7F0B32B0u;
    // 7F0B32B0: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B32B4:
    ctx->pc = 0x7F0B32B4u;
    // 7F0B32B4: addi    r4, r4, -23006
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23006);

label_7F0B32B8:
    ctx->pc = 0x7F0B32B8u;
    // 7F0B32B8: li      r5, 34
    ctx->gpr[5] = (u32)(s32)(34);

label_7F0B32BC:
    ctx->pc = 0x7F0B32BCu;
    // 7F0B32BC: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B32C0:
    ctx->pc = 0x7F0B32C0u;
    // 7F0B32C0: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B32C4:
    ctx->pc = 0x7F0B32C4u;
    // 7F0B32C4: lwz     r6, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B32C8:
    ctx->pc = 0x7F0B32C8u;
    // 7F0B32C8: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B32CC:
    ctx->pc = 0x7F0B32CCu;
    // 7F0B32CC: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B32D0:
    ctx->pc = 0x7F0B32D0u;
    // 7F0B32D0: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B32D4:
    ctx->pc = 0x7F0B32D4u;
    // 7F0B32D4: bl      0x7F04272C
    {
            ctx->lr = 0x7F0B32D8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0B32D8:
    ctx->pc = 0x7F0B32D8u;
    ctx->downcount -= 3;
    // 7F0B32D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B32DC:
    ctx->pc = 0x7F0B32DCu;
    // 7F0B32DC: addi    r4, r30, 4004
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4004);

label_7F0B32E0:
    ctx->pc = 0x7F0B32E0u;
    // 7F0B32E0: bl      0x7F042C1C
    {
            ctx->lr = 0x7F0B32E4u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F0B32E4:
    ctx->pc = 0x7F0B32E4u;
    ctx->downcount -= 6;
    // 7F0B32E4: lis     r4, 248
    ctx->gpr[4] = ((u32)(s32)(248) << 16);

label_7F0B32E8:
    ctx->pc = 0x7F0B32E8u;
    // 7F0B32E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B32EC:
    ctx->pc = 0x7F0B32ECu;
    // 7F0B32EC: addi    r5, r4, -8312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8312);

label_7F0B32F0:
    ctx->pc = 0x7F0B32F0u;
    // 7F0B32F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B32F4:
    ctx->pc = 0x7F0B32F4u;
    // 7F0B32F4: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0B32F8:
    ctx->pc = 0x7F0B32F8u;
    // 7F0B32F8: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0B32FCu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0B32FC:
    ctx->pc = 0x7F0B32FCu;
    ctx->downcount -= 3;
    // 7F0B32FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3300:
    ctx->pc = 0x7F0B3300u;
    // 7F0B3300: addi    r4, r30, 1004
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1004);

label_7F0B3304:
    ctx->pc = 0x7F0B3304u;
    // 7F0B3304: bl      0x7F042B20
    {
            ctx->lr = 0x7F0B3308u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0B3308:
    ctx->pc = 0x7F0B3308u;
    ctx->downcount -= 8;
    // 7F0B3308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B330C:
    ctx->pc = 0x7F0B330Cu;
    // 7F0B330C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B3310:
    ctx->pc = 0x7F0B3310u;
    // 7F0B3310: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0B3314:
    ctx->pc = 0x7F0B3314u;
    // 7F0B3314: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B3318:
    ctx->pc = 0x7F0B3318u;
    // 7F0B3318: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_7F0B331C:
    ctx->pc = 0x7F0B331Cu;
    // 7F0B331C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B3320:
    ctx->pc = 0x7F0B3320u;
    // 7F0B3320: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0B3324:
    ctx->pc = 0x7F0B3324u;
    // 7F0B3324: bl      0x7F042C94
    {
            ctx->lr = 0x7F0B3328u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0B3328:
    ctx->pc = 0x7F0B3328u;
    ctx->downcount -= 3;
    // 7F0B3328: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B332C:
    ctx->pc = 0x7F0B332Cu;
    // 7F0B332C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0B3330:
    ctx->pc = 0x7F0B3330u;
    // 7F0B3330: bl      0x7F0B271C
    {
            ctx->lr = 0x7F0B3334u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B271Cu;
                return;
            }
            goto label_7F0B271C;
    }

label_7F0B3334:
    ctx->pc = 0x7F0B3334u;
    ctx->downcount -= 2;
    // 7F0B3334: cmpwi   r3, 0
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

label_7F0B3338:
    ctx->pc = 0x7F0B3338u;
    // 7F0B3338: bc    4, 0, 0x7F0B3344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3344;
        }
    }

label_7F0B333C:
    ctx->pc = 0x7F0B333Cu;
    ctx->downcount -= 2;
    // 7F0B333C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B3340:
    ctx->pc = 0x7F0B3340u;
    // 7F0B3340: b       0x7F0B3530
    {
            goto label_7F0B3530;
    }

label_7F0B3344:
    ctx->pc = 0x7F0B3344u;
    ctx->downcount -= 2;
    // 7F0B3344: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3348:
    ctx->pc = 0x7F0B3348u;
    // 7F0B3348: bl      0x7F0B29A8
    {
            ctx->lr = 0x7F0B334Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B29A8u;
                return;
            }
            goto label_7F0B29A8;
    }

label_7F0B334C:
    ctx->pc = 0x7F0B334Cu;
    ctx->downcount -= 2;
    // 7F0B334C: cmpwi   r3, 0
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

label_7F0B3350:
    ctx->pc = 0x7F0B3350u;
    // 7F0B3350: bc    4, 0, 0x7F0B335C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B335C;
        }
    }

label_7F0B3354:
    ctx->pc = 0x7F0B3354u;
    ctx->downcount -= 2;
    // 7F0B3354: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B3358:
    ctx->pc = 0x7F0B3358u;
    // 7F0B3358: b       0x7F0B3530
    {
            goto label_7F0B3530;
    }

label_7F0B335C:
    ctx->pc = 0x7F0B335Cu;
    ctx->downcount -= 2;
    // 7F0B335C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3360:
    ctx->pc = 0x7F0B3360u;
    // 7F0B3360: bl      0x7F0B2338
    {
            ctx->lr = 0x7F0B3364u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2338u;
                return;
            }
            goto label_7F0B2338;
    }

label_7F0B3364:
    ctx->pc = 0x7F0B3364u;
    ctx->downcount -= 2;
    // 7F0B3364: cmpwi   r3, 0
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

label_7F0B3368:
    ctx->pc = 0x7F0B3368u;
    // 7F0B3368: bc    4, 0, 0x7F0B3374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3374;
        }
    }

label_7F0B336C:
    ctx->pc = 0x7F0B336Cu;
    ctx->downcount -= 2;
    // 7F0B336C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0B3370:
    ctx->pc = 0x7F0B3370u;
    // 7F0B3370: b       0x7F0B3530
    {
            goto label_7F0B3530;
    }

label_7F0B3374:
    ctx->pc = 0x7F0B3374u;
    ctx->downcount -= 2;
    // 7F0B3374: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3378:
    ctx->pc = 0x7F0B3378u;
    // 7F0B3378: bl      0x7F0B27DC
    {
            ctx->lr = 0x7F0B337Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B27DCu;
                return;
            }
            goto label_7F0B27DC;
    }

label_7F0B337C:
    ctx->pc = 0x7F0B337Cu;
    ctx->downcount -= 2;
    // 7F0B337C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3380:
    ctx->pc = 0x7F0B3380u;
    // 7F0B3380: bl      0x7F0B28D8
    {
            ctx->lr = 0x7F0B3384u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B28D8u;
                return;
            }
            goto label_7F0B28D8;
    }

label_7F0B3384:
    ctx->pc = 0x7F0B3384u;
    ctx->downcount -= 2;
    // 7F0B3384: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3388:
    ctx->pc = 0x7F0B3388u;
    // 7F0B3388: bl      0x7F0B2940
    {
            ctx->lr = 0x7F0B338Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B2940u;
                return;
            }
            goto label_7F0B2940;
    }

label_7F0B338C:
    ctx->pc = 0x7F0B338Cu;
    ctx->downcount -= 4;
    // 7F0B338C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3390:
    ctx->pc = 0x7F0B3390u;
    // 7F0B3390: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F0B3394:
    ctx->pc = 0x7F0B3394u;
    // 7F0B3394: stw     r0, 3304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3398:
    ctx->pc = 0x7F0B3398u;
    // 7F0B3398: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B339Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B339C:
    ctx->pc = 0x7F0B339Cu;
    ctx->downcount -= 2;
    // 7F0B339C: cmplwi  r3, 0x0000
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

label_7F0B33A0:
    ctx->pc = 0x7F0B33A0u;
    // 7F0B33A0: bc    12, 2, 0x7F0B33B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B33B4;
        }
    }

label_7F0B33A4:
    ctx->pc = 0x7F0B33A4u;
    ctx->downcount -= 1;
    // 7F0B33A4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B33A8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B33A8:
    ctx->pc = 0x7F0B33A8u;
    ctx->downcount -= 1;
    // 7F0B33A8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B33ACu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B33AC:
    ctx->pc = 0x7F0B33ACu;
    ctx->downcount -= 2;
    // 7F0B33AC: stw     r3, 3304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B33B0:
    ctx->pc = 0x7F0B33B0u;
    // 7F0B33B0: b       0x7F0B33BC
    {
            goto label_7F0B33BC;
    }

label_7F0B33B4:
    ctx->pc = 0x7F0B33B4u;
    ctx->downcount -= 2;
    // 7F0B33B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B33B8:
    ctx->pc = 0x7F0B33B8u;
    // 7F0B33B8: stw     r0, 3304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B33BC:
    ctx->pc = 0x7F0B33BCu;
    ctx->downcount -= 2;
    // 7F0B33BC: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F0B33C0:
    ctx->pc = 0x7F0B33C0u;
    // 7F0B33C0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0B33C4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0B33C4:
    ctx->pc = 0x7F0B33C4u;
    ctx->downcount -= 2;
    // 7F0B33C4: cmplwi  r3, 0x0000
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

label_7F0B33C8:
    ctx->pc = 0x7F0B33C8u;
    // 7F0B33C8: bc    12, 2, 0x7F0B33DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B33DC;
        }
    }

label_7F0B33CC:
    ctx->pc = 0x7F0B33CCu;
    ctx->downcount -= 1;
    // 7F0B33CC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0B33D0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0B33D0:
    ctx->pc = 0x7F0B33D0u;
    ctx->downcount -= 1;
    // 7F0B33D0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0B33D4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0B33D4:
    ctx->pc = 0x7F0B33D4u;
    ctx->downcount -= 2;
    // 7F0B33D4: stw     r3, 3968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3968);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B33D8:
    ctx->pc = 0x7F0B33D8u;
    // 7F0B33D8: b       0x7F0B33E4
    {
            goto label_7F0B33E4;
    }

label_7F0B33DC:
    ctx->pc = 0x7F0B33DCu;
    ctx->downcount -= 2;
    // 7F0B33DC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0B33E0:
    ctx->pc = 0x7F0B33E0u;
    // 7F0B33E0: stw     r0, 3968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3968);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B33E4:
    ctx->pc = 0x7F0B33E4u;
    ctx->downcount -= 13;
    // 7F0B33E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B33E8:
    ctx->pc = 0x7F0B33E8u;
    // 7F0B33E8: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0B33EC:
    ctx->pc = 0x7F0B33ECu;
    // 7F0B33EC: stw     r31, 22156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22156);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B33F0:
    ctx->pc = 0x7F0B33F0u;
    // 7F0B33F0: addi    r4, r3, 29748
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29748);

label_7F0B33F4:
    ctx->pc = 0x7F0B33F4u;
    // 7F0B33F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B33F8:
    ctx->pc = 0x7F0B33F8u;
    // 7F0B33F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B33FC:
    ctx->pc = 0x7F0B33FCu;
    // 7F0B33FC: stw     r4, 3316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3316);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B3400:
    ctx->pc = 0x7F0B3400u;
    // 7F0B3400: stw     r0, 3320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3404:
    ctx->pc = 0x7F0B3404u;
    // 7F0B3404: stw     r0, 3328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3408:
    ctx->pc = 0x7F0B3408u;
    // 7F0B3408: stw     r0, 3324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B340C:
    ctx->pc = 0x7F0B340Cu;
    // 7F0B340C: sth     r0, 3334(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3334);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3410:
    ctx->pc = 0x7F0B3410u;
    // 7F0B3410: sth     r0, 3332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3332);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3414:
    ctx->pc = 0x7F0B3414u;
    // 7F0B3414: bl      0x7F0B22B8
    {
            ctx->lr = 0x7F0B3418u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B22B8u;
                return;
            }
            goto label_7F0B22B8;
    }

label_7F0B3418:
    ctx->pc = 0x7F0B3418u;
    ctx->downcount -= 33;
    // 7F0B3418: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B341C:
    ctx->pc = 0x7F0B341Cu;
    // 7F0B341C: lwzu     r5, 12808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12808);
        ctx->gpr[5] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F0B3420:
    ctx->pc = 0x7F0B3420u;
    // 7F0B3420: li      r9, 10000
    ctx->gpr[9] = (u32)(s32)(10000);

label_7F0B3424:
    ctx->pc = 0x7F0B3424u;
    // 7F0B3424: li      r8, 450
    ctx->gpr[8] = (u32)(s32)(450);

label_7F0B3428:
    ctx->pc = 0x7F0B3428u;
    // 7F0B3428: lwz     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B342C:
    ctx->pc = 0x7F0B342Cu;
    // 7F0B342C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B3430:
    ctx->pc = 0x7F0B3430u;
    // 7F0B3430: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0B3434:
    ctx->pc = 0x7F0B3434u;
    // 7F0B3434: addi    r3, r30, 1136
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1136);

label_7F0B3438:
    ctx->pc = 0x7F0B3438u;
    // 7F0B3438: stw     r5, 3480(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3480);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B343C:
    ctx->pc = 0x7F0B343Cu;
    // 7F0B343C: addi    r4, r30, 1248
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1248);

label_7F0B3440:
    ctx->pc = 0x7F0B3440u;
    // 7F0B3440: addi    r5, r30, 1352
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(1352);

label_7F0B3444:
    ctx->pc = 0x7F0B3444u;
    // 7F0B3444: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0B3448:
    ctx->pc = 0x7F0B3448u;
    // 7F0B3448: stw     r10, 3484(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3484);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B344C:
    ctx->pc = 0x7F0B344Cu;
    // 7F0B344C: lwz     r11, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0B3450:
    ctx->pc = 0x7F0B3450u;
    // 7F0B3450: lwz     r10, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B3454:
    ctx->pc = 0x7F0B3454u;
    // 7F0B3454: stw     r11, 1600(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1600);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0B3458:
    ctx->pc = 0x7F0B3458u;
    // 7F0B3458: stw     r10, 1604(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1604);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B345C:
    ctx->pc = 0x7F0B345Cu;
    // 7F0B345C: lwz     r11, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F0B3460:
    ctx->pc = 0x7F0B3460u;
    // 7F0B3460: lwz     r10, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0B3464:
    ctx->pc = 0x7F0B3464u;
    // 7F0B3464: stw     r11, 1608(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1608);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0B3468:
    ctx->pc = 0x7F0B3468u;
    // 7F0B3468: stw     r10, 1612(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1612);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0B346C:
    ctx->pc = 0x7F0B346Cu;
    // 7F0B346C: stw     r9, 3464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3464);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0B3470:
    ctx->pc = 0x7F0B3470u;
    // 7F0B3470: sth     r8, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0B3474:
    ctx->pc = 0x7F0B3474u;
    // 7F0B3474: stw     r7, 3472(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3472);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3478:
    ctx->pc = 0x7F0B3478u;
    // 7F0B3478: stw     r0, 3476(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3476);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B347C:
    ctx->pc = 0x7F0B347Cu;
    // 7F0B347C: stw     r7, 3512(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3512);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3480:
    ctx->pc = 0x7F0B3480u;
    // 7F0B3480: stw     r7, 3516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3516);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3484:
    ctx->pc = 0x7F0B3484u;
    // 7F0B3484: stw     r7, 3520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3520);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3488:
    ctx->pc = 0x7F0B3488u;
    // 7F0B3488: stw     r7, 3524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3524);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B348C:
    ctx->pc = 0x7F0B348Cu;
    // 7F0B348C: stw     r7, 3496(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3496);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3490:
    ctx->pc = 0x7F0B3490u;
    // 7F0B3490: stw     r7, 3500(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3500);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3494:
    ctx->pc = 0x7F0B3494u;
    // 7F0B3494: stw     r7, 3504(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3504);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3498:
    ctx->pc = 0x7F0B3498u;
    // 7F0B3498: bl      0x7F2BAAD8
    {
            ctx->lr = 0x7F0B349Cu;
            ctx->pc = 0x7F2BAAD8u;
            return;
    }

label_7F0B349C:
    ctx->pc = 0x7F0B349Cu;
    ctx->downcount -= 2;
    // 7F0B349C: addi    r3, r30, 1248
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1248);

label_7F0B34A0:
    ctx->pc = 0x7F0B34A0u;
    // 7F0B34A0: bl      0x7F27E638
    {
            ctx->lr = 0x7F0B34A4u;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F0B34A4:
    ctx->pc = 0x7F0B34A4u;
    ctx->downcount -= 6;
    // 7F0B34A4: lis     r3, 210
    ctx->gpr[3] = ((u32)(s32)(210) << 16);

label_7F0B34A8:
    ctx->pc = 0x7F0B34A8u;
    // 7F0B34A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B34AC:
    ctx->pc = 0x7F0B34ACu;
    // 7F0B34AC: addi    r3, r3, -14244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14244);

label_7F0B34B0:
    ctx->pc = 0x7F0B34B0u;
    // 7F0B34B0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0B34B4:
    ctx->pc = 0x7F0B34B4u;
    // 7F0B34B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B34B8:
    ctx->pc = 0x7F0B34B8u;
    // 7F0B34B8: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F0B34BCu;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F0B34BC:
    ctx->pc = 0x7F0B34BCu;
    ctx->downcount -= 5;
    // 7F0B34BC: stw     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B34C0:
    ctx->pc = 0x7F0B34C0u;
    // 7F0B34C0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0B34C4:
    ctx->pc = 0x7F0B34C4u;
    // 7F0B34C4: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F0B34C8:
    ctx->pc = 0x7F0B34C8u;
    // 7F0B34C8: lwz     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B34CC:
    ctx->pc = 0x7F0B34CCu;
    // 7F0B34CC: bl      0x7F026EBC
    {
            ctx->lr = 0x7F0B34D0u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F0B34D0:
    ctx->pc = 0x7F0B34D0u;
    ctx->downcount -= 3;
    // 7F0B34D0: lwz     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B34D4:
    ctx->pc = 0x7F0B34D4u;
    // 7F0B34D4: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F0B34D8:
    ctx->pc = 0x7F0B34D8u;
    // 7F0B34D8: bl      0x7F026F30
    {
            ctx->lr = 0x7F0B34DCu;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F0B34DC:
    ctx->pc = 0x7F0B34DCu;
    ctx->downcount -= 3;
    // 7F0B34DC: lwz     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B34E0:
    ctx->pc = 0x7F0B34E0u;
    // 7F0B34E0: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F0B34E4:
    ctx->pc = 0x7F0B34E4u;
    // 7F0B34E4: bl      0x7F026F4C
    {
            ctx->lr = 0x7F0B34E8u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F0B34E8:
    ctx->pc = 0x7F0B34E8u;
    ctx->downcount -= 4;
    // 7F0B34E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0B34EC:
    ctx->pc = 0x7F0B34ECu;
    // 7F0B34EC: lwz     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B34F0:
    ctx->pc = 0x7F0B34F0u;
    // 7F0B34F0: lfs     f1, -4900(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0B34F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0B34F4:
    ctx->pc = 0x7F0B34F4u;
    // 7F0B34F4: bl      0x7F026F54
    {
            ctx->lr = 0x7F0B34F8u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F0B34F8:
    ctx->pc = 0x7F0B34F8u;
    ctx->downcount -= 6;
    // 7F0B34F8: lwz     r3, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B34FC:
    ctx->pc = 0x7F0B34FCu;
    // 7F0B34FC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0B3500:
    ctx->pc = 0x7F0B3500u;
    // 7F0B3500: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F0B3504:
    ctx->pc = 0x7F0B3504u;
    // 7F0B3504: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B3508:
    ctx->pc = 0x7F0B3508u;
    // 7F0B3508: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0B350C:
    ctx->pc = 0x7F0B350Cu;
    // 7F0B350C: bl      0x7F026928
    {
            ctx->lr = 0x7F0B3510u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F0B3510:
    ctx->pc = 0x7F0B3510u;
    ctx->downcount -= 8;
    // 7F0B3510: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3514:
    ctx->pc = 0x7F0B3514u;
    // 7F0B3514: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3518:
    ctx->pc = 0x7F0B3518u;
    // 7F0B3518: addi    r4, r3, 30000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(30000);

label_7F0B351C:
    ctx->pc = 0x7F0B351Cu;
    // 7F0B351C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3520:
    ctx->pc = 0x7F0B3520u;
    // 7F0B3520: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3524:
    ctx->pc = 0x7F0B3524u;
    // 7F0B3524: stb     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0B3528:
    ctx->pc = 0x7F0B3528u;
    // 7F0B3528: stb     r0, 49(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0B352C:
    ctx->pc = 0x7F0B352Cu;
    // 7F0B352C: sth     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3530:
    ctx->pc = 0x7F0B3530u;
    ctx->downcount -= 16;
    // 7F0B3530: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B3534:
    ctx->pc = 0x7F0B3534u;
    // 7F0B3534: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3538:
    ctx->pc = 0x7F0B3538u;
    // 7F0B3538: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B353C:
    ctx->pc = 0x7F0B353Cu;
    // 7F0B353C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B3540:
    ctx->pc = 0x7F0B3540u;
    // 7F0B3540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3544:
    ctx->pc = 0x7F0B3544u;
    ctx->downcount -= 6;
    // 7F0B3544: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3548:
    ctx->pc = 0x7F0B3548u;
    // 7F0B3548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B354C:
    ctx->pc = 0x7F0B354Cu;
    // 7F0B354C: addi    r3, r3, 29980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29980);

label_7F0B3550:
    ctx->pc = 0x7F0B3550u;
    // 7F0B3550: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3554:
    ctx->pc = 0x7F0B3554u;
    // 7F0B3554: cmplwi  r3, 0x0000
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

label_7F0B3558:
    ctx->pc = 0x7F0B3558u;
    // 7F0B3558: bc    12, 2, 0x7F0B3570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3570;
        }
    }

label_7F0B355C:
    ctx->pc = 0x7F0B355Cu;
    ctx->downcount -= 4;
    // 7F0B355C: lwz     r3, 4000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3560:
    ctx->pc = 0x7F0B3560u;
    // 7F0B3560: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3564:
    ctx->pc = 0x7F0B3564u;
    // 7F0B3564: cmplwi  r0, 0x0000
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

label_7F0B3568:
    ctx->pc = 0x7F0B3568u;
    // 7F0B3568: bc    12, 2, 0x7F0B3570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3570;
        }
    }

label_7F0B356C:
    ctx->pc = 0x7F0B356Cu;
    ctx->downcount -= 1;
    // 7F0B356C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B3570:
    ctx->pc = 0x7F0B3570u;
    ctx->downcount -= 3;
    // 7F0B3570: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0B3574:
    ctx->pc = 0x7F0B3574u;
    // 7F0B3574: subfe   r3, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0B3578:
    ctx->pc = 0x7F0B3578u;
    // 7F0B3578: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B357C:
    ctx->pc = 0x7F0B357Cu;
    ctx->downcount -= 21;
    // 7F0B357C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3580:
    ctx->pc = 0x7F0B3580u;
    // 7F0B3580: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3584:
    ctx->pc = 0x7F0B3584u;
    // 7F0B3584: li      r5, 4352
    ctx->gpr[5] = (u32)(s32)(4352);

label_7F0B3588:
    ctx->pc = 0x7F0B3588u;
    // 7F0B3588: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B358C:
    ctx->pc = 0x7F0B358Cu;
    // 7F0B358C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3590:
    ctx->pc = 0x7F0B3590u;
    // 7F0B3590: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B3594:
    ctx->pc = 0x7F0B3594u;
    // 7F0B3594: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3598:
    ctx->pc = 0x7F0B3598u;
    // 7F0B3598: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B359C:
    ctx->pc = 0x7F0B359Cu;
    // 7F0B359C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0B35A0:
    ctx->pc = 0x7F0B35A0u;
    // 7F0B35A0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B35A4:
    ctx->pc = 0x7F0B35A4u;
    // 7F0B35A4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0B35A8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0B35A8:
    ctx->pc = 0x7F0B35A8u;
    ctx->downcount -= 2;
    // 7F0B35A8: or.   r31, r3, r3
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

label_7F0B35AC:
    ctx->pc = 0x7F0B35ACu;
    // 7F0B35AC: bc    12, 2, 0x7F0B3614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3614;
        }
    }

label_7F0B35B0:
    ctx->pc = 0x7F0B35B0u;
    ctx->downcount -= 5;
    // 7F0B35B0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B35B4:
    ctx->pc = 0x7F0B35B4u;
    // 7F0B35B4: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0B35B8:
    ctx->pc = 0x7F0B35B8u;
    // 7F0B35B8: addi    r4, r4, 11652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11652);

label_7F0B35BC:
    ctx->pc = 0x7F0B35BCu;
    // 7F0B35BC: addi    r5, r5, 12572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12572);

label_7F0B35C0:
    ctx->pc = 0x7F0B35C0u;
    // 7F0B35C0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0B35C4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0B35C4:
    ctx->pc = 0x7F0B35C4u;
    ctx->downcount -= 14;
    // 7F0B35C4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B35C8:
    ctx->pc = 0x7F0B35C8u;
    // 7F0B35C8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F0B35CC:
    ctx->pc = 0x7F0B35CCu;
    // 7F0B35CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0B35D0:
    ctx->pc = 0x7F0B35D0u;
    // 7F0B35D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B35D4:
    ctx->pc = 0x7F0B35D4u;
    // 7F0B35D4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F0B35D8:
    ctx->pc = 0x7F0B35D8u;
    // 7F0B35D8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F0B35DC:
    ctx->pc = 0x7F0B35DCu;
    // 7F0B35DC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B35E0:
    ctx->pc = 0x7F0B35E0u;
    // 7F0B35E0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0B35E4:
    ctx->pc = 0x7F0B35E4u;
    // 7F0B35E4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B35E8:
    ctx->pc = 0x7F0B35E8u;
    // 7F0B35E8: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B35EC:
    ctx->pc = 0x7F0B35ECu;
    // 7F0B35EC: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B35F0:
    ctx->pc = 0x7F0B35F0u;
    // 7F0B35F0: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B35F4:
    ctx->pc = 0x7F0B35F4u;
    // 7F0B35F4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B35F8:
    ctx->pc = 0x7F0B35F8u;
    // 7F0B35F8: bl      0x7F0B31DC
    {
            ctx->lr = 0x7F0B35FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B31DCu;
                return;
            }
            goto label_7F0B31DC;
    }

label_7F0B35FC:
    ctx->pc = 0x7F0B35FCu;
    ctx->downcount -= 2;
    // 7F0B35FC: cmpwi   r3, 0
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

label_7F0B3600:
    ctx->pc = 0x7F0B3600u;
    // 7F0B3600: bc    4, 0, 0x7F0B3614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3614;
        }
    }

label_7F0B3604:
    ctx->pc = 0x7F0B3604u;
    ctx->downcount -= 2;
    // 7F0B3604: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3608:
    ctx->pc = 0x7F0B3608u;
    // 7F0B3608: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0B360Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0B360C:
    ctx->pc = 0x7F0B360Cu;
    ctx->downcount -= 2;
    // 7F0B360C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3610:
    ctx->pc = 0x7F0B3610u;
    // 7F0B3610: b       0x7F0B3640
    {
            goto label_7F0B3640;
    }

label_7F0B3614:
    ctx->pc = 0x7F0B3614u;
    ctx->downcount -= 7;
    // 7F0B3614: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3618:
    ctx->pc = 0x7F0B3618u;
    // 7F0B3618: lis     r4, 133
    ctx->gpr[4] = ((u32)(s32)(133) << 16);

label_7F0B361C:
    ctx->pc = 0x7F0B361Cu;
    // 7F0B361C: addi    r5, r3, 29980
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(29980);

label_7F0B3620:
    ctx->pc = 0x7F0B3620u;
    // 7F0B3620: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F0B3624:
    ctx->pc = 0x7F0B3624u;
    // 7F0B3624: stw     r31, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3628:
    ctx->pc = 0x7F0B3628u;
    // 7F0B3628: addi    r4, r4, 4787
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4787);

label_7F0B362C:
    ctx->pc = 0x7F0B362Cu;
    // 7F0B362C: bl      0x7F2C742C
    {
            ctx->lr = 0x7F0B3630u;
            ctx->pc = 0x7F2C742Cu;
            return;
    }

label_7F0B3630:
    ctx->pc = 0x7F0B3630u;
    ctx->downcount -= 3;
    // 7F0B3630: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3634:
    ctx->pc = 0x7F0B3634u;
    // 7F0B3634: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3638:
    ctx->pc = 0x7F0B3638u;
    // 7F0B3638: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0B363Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0B363C:
    ctx->pc = 0x7F0B363Cu;
    ctx->downcount -= 1;
    // 7F0B363C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3640:
    ctx->pc = 0x7F0B3640u;
    ctx->downcount -= 16;
    // 7F0B3640: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B3644:
    ctx->pc = 0x7F0B3644u;
    // 7F0B3644: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3648:
    ctx->pc = 0x7F0B3648u;
    // 7F0B3648: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B364C:
    ctx->pc = 0x7F0B364Cu;
    // 7F0B364C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B3650:
    ctx->pc = 0x7F0B3650u;
    // 7F0B3650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3654:
    ctx->pc = 0x7F0B3654u;
    ctx->downcount -= 6;
    // 7F0B3654: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0B3658:
    ctx->pc = 0x7F0B3658u;
    // 7F0B3658: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F0B365C:
    ctx->pc = 0x7F0B365Cu;
    // 7F0B365C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B3660:
    ctx->pc = 0x7F0B3660u;
    // 7F0B3660: lha     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3664:
    ctx->pc = 0x7F0B3664u;
    // 7F0B3664: rlwinm. r0, r0, 0, 19, 19
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

label_7F0B3668:
    ctx->pc = 0x7F0B3668u;
    // 7F0B3668: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B366C:
    ctx->pc = 0x7F0B366Cu;
    ctx->downcount -= 4;
    // 7F0B366C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3670:
    ctx->pc = 0x7F0B3670u;
    // 7F0B3670: lwz     r0, 19248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3674:
    ctx->pc = 0x7F0B3674u;
    // 7F0B3674: rlwinm. r0, r0, 0, 1, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x40000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3678:
    ctx->pc = 0x7F0B3678u;
    // 7F0B3678: bc    12, 2, 0x7F0B3680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3680;
        }
    }

label_7F0B367C:
    ctx->pc = 0x7F0B367Cu;
    ctx->downcount -= 1;
    // 7F0B367C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3680:
    ctx->pc = 0x7F0B3680u;
    ctx->downcount -= 7;
    // 7F0B3680: lhz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F0B3684:
    ctx->pc = 0x7F0B3684u;
    // 7F0B3684: li      r0, -20481
    ctx->gpr[0] = (u32)(s32)(-20481);

label_7F0B3688:
    ctx->pc = 0x7F0B3688u;
    // 7F0B3688: andi.   r5, r4, 0x5000
    {
        ctx->gpr[5] = ctx->gpr[4] & 0x5000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B368C:
    ctx->pc = 0x7F0B368Cu;
    // 7F0B368C: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F0B3690:
    ctx->pc = 0x7F0B3690u;
    // 7F0B3690: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3694:
    ctx->pc = 0x7F0B3694u;
    // 7F0B3694: rlwinm. r0, r5, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3698:
    ctx->pc = 0x7F0B3698u;
    // 7F0B3698: bc    12, 2, 0x7F0B36A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B36A8;
        }
    }

label_7F0B369C:
    ctx->pc = 0x7F0B369Cu;
    ctx->downcount -= 3;
    // 7F0B369C: lhz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B36A0:
    ctx->pc = 0x7F0B36A0u;
    // 7F0B36A0: ori     r0, r0, 0x4000
    ctx->gpr[0] = ctx->gpr[0] | 0x4000u;

label_7F0B36A4:
    ctx->pc = 0x7F0B36A4u;
    // 7F0B36A4: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B36A8:
    ctx->pc = 0x7F0B36A8u;
    ctx->downcount -= 2;
    // 7F0B36A8: rlwinm. r0, r5, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B36AC:
    ctx->pc = 0x7F0B36ACu;
    // 7F0B36AC: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B36B0:
    ctx->pc = 0x7F0B36B0u;
    ctx->downcount -= 4;
    // 7F0B36B0: lhz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B36B4:
    ctx->pc = 0x7F0B36B4u;
    // 7F0B36B4: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F0B36B8:
    ctx->pc = 0x7F0B36B8u;
    // 7F0B36B8: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B36BC:
    ctx->pc = 0x7F0B36BCu;
    // 7F0B36BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B36C0:
    ctx->pc = 0x7F0B36C0u;
    ctx->downcount -= 6;
    // 7F0B36C0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0B36C4:
    ctx->pc = 0x7F0B36C4u;
    // 7F0B36C4: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F0B36C8:
    ctx->pc = 0x7F0B36C8u;
    // 7F0B36C8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B36CC:
    ctx->pc = 0x7F0B36CCu;
    // 7F0B36CC: lha     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B36D0:
    ctx->pc = 0x7F0B36D0u;
    // 7F0B36D0: rlwinm. r0, r0, 0, 19, 19
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

label_7F0B36D4:
    ctx->pc = 0x7F0B36D4u;
    // 7F0B36D4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B36D8:
    ctx->pc = 0x7F0B36D8u;
    ctx->downcount -= 4;
    // 7F0B36D8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B36DC:
    ctx->pc = 0x7F0B36DCu;
    // 7F0B36DC: lwz     r0, 19248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B36E0:
    ctx->pc = 0x7F0B36E0u;
    // 7F0B36E0: rlwinm. r0, r0, 0, 1, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x40000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B36E4:
    ctx->pc = 0x7F0B36E4u;
    // 7F0B36E4: bc    12, 2, 0x7F0B36EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B36EC;
        }
    }

label_7F0B36E8:
    ctx->pc = 0x7F0B36E8u;
    ctx->downcount -= 1;
    // 7F0B36E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B36EC:
    ctx->pc = 0x7F0B36ECu;
    ctx->downcount -= 5;
    // 7F0B36EC: lbz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F0B36F0:
    ctx->pc = 0x7F0B36F0u;
    // 7F0B36F0: addi    r0, r4, -255
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-255);

label_7F0B36F4:
    ctx->pc = 0x7F0B36F4u;
    // 7F0B36F4: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0B36F8:
    ctx->pc = 0x7F0B36F8u;
    // 7F0B36F8: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0B36FC:
    ctx->pc = 0x7F0B36FCu;
    // 7F0B36FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3700:
    ctx->pc = 0x7F0B3700u;
    ctx->downcount -= 8;
    // 7F0B3700: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3704:
    ctx->pc = 0x7F0B3704u;
    // 7F0B3704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3708:
    ctx->pc = 0x7F0B3708u;
    // 7F0B3708: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B370C:
    ctx->pc = 0x7F0B370Cu;
    // 7F0B370C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3710:
    ctx->pc = 0x7F0B3710u;
    // 7F0B3710: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B3714:
    ctx->pc = 0x7F0B3714u;
    // 7F0B3714: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3718:
    ctx->pc = 0x7F0B3718u;
    // 7F0B3718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B371C:
    ctx->pc = 0x7F0B371Cu;
    // 7F0B371C: bl      0x7F0B4B60
    {
            ctx->lr = 0x7F0B3720u;
            ctx->pc = 0x7F0B4B60u;
            return;
    }

label_7F0B3720:
    ctx->pc = 0x7F0B3720u;
    ctx->downcount -= 12;
    // 7F0B3720: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F0B3724:
    ctx->pc = 0x7F0B3724u;
    // 7F0B3724: li      r0, -18
    ctx->gpr[0] = (u32)(s32)(-18);

label_7F0B3728:
    ctx->pc = 0x7F0B3728u;
    // 7F0B3728: stw     r3, 3524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3524);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B372C:
    ctx->pc = 0x7F0B372Cu;
    // 7F0B372C: lwz     r3, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3730:
    ctx->pc = 0x7F0B3730u;
    // 7F0B3730: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0B3734:
    ctx->pc = 0x7F0B3734u;
    // 7F0B3734: stw     r0, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3738:
    ctx->pc = 0x7F0B3738u;
    // 7F0B3738: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B373C:
    ctx->pc = 0x7F0B373Cu;
    // 7F0B373C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3740:
    ctx->pc = 0x7F0B3740u;
    // 7F0B3740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3744:
    ctx->pc = 0x7F0B3744u;
    // 7F0B3744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3748:
    ctx->pc = 0x7F0B3748u;
    // 7F0B3748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B374C:
    ctx->pc = 0x7F0B374Cu;
    ctx->downcount -= 19;
    // 7F0B374C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3750:
    ctx->pc = 0x7F0B3750u;
    // 7F0B3750: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3754:
    ctx->pc = 0x7F0B3754u;
    // 7F0B3754: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F0B3758:
    ctx->pc = 0x7F0B3758u;
    // 7F0B3758: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B375C:
    ctx->pc = 0x7F0B375Cu;
    // 7F0B375C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B3760:
    ctx->pc = 0x7F0B3760u;
    // 7F0B3760: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0B3764:
    ctx->pc = 0x7F0B3764u;
    // 7F0B3764: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3768:
    ctx->pc = 0x7F0B3768u;
    // 7F0B3768: addi    r4, r5, -32768
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-32768);

label_7F0B376C:
    ctx->pc = 0x7F0B376Cu;
    // 7F0B376C: bl      0x7F0B4B60
    {
            ctx->lr = 0x7F0B3770u;
            ctx->pc = 0x7F0B4B60u;
            return;
    }

label_7F0B3770:
    ctx->pc = 0x7F0B3770u;
    ctx->downcount -= 21;
    // 7F0B3770: stw     r31, 3524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3524);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3774:
    ctx->pc = 0x7F0B3774u;
    // 7F0B3774: li      r0, -18
    ctx->gpr[0] = (u32)(s32)(-18);

label_7F0B3778:
    ctx->pc = 0x7F0B3778u;
    // 7F0B3778: lwz     r3, 1380(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B377C:
    ctx->pc = 0x7F0B377Cu;
    // 7F0B377C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0B3780:
    ctx->pc = 0x7F0B3780u;
    // 7F0B3780: stw     r0, 1380(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3784:
    ctx->pc = 0x7F0B3784u;
    // 7F0B3784: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0B3788:
    ctx->pc = 0x7F0B3788u;
    // 7F0B3788: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B378C:
    ctx->pc = 0x7F0B378Cu;
    // 7F0B378C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3790:
    ctx->pc = 0x7F0B3790u;
    // 7F0B3790: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3794:
    ctx->pc = 0x7F0B3794u;
    // 7F0B3794: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3798:
    ctx->pc = 0x7F0B3798u;
    ctx->downcount -= 8;
    // 7F0B3798: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B379C:
    ctx->pc = 0x7F0B379Cu;
    // 7F0B379C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B37A0:
    ctx->pc = 0x7F0B37A0u;
    // 7F0B37A0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B37A4:
    ctx->pc = 0x7F0B37A4u;
    // 7F0B37A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B37A8:
    ctx->pc = 0x7F0B37A8u;
    // 7F0B37A8: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B37AC:
    ctx->pc = 0x7F0B37ACu;
    // 7F0B37AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B37B0:
    ctx->pc = 0x7F0B37B0u;
    // 7F0B37B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B37B4:
    ctx->pc = 0x7F0B37B4u;
    // 7F0B37B4: bl      0x7F0B4B70
    {
            ctx->lr = 0x7F0B37B8u;
            ctx->pc = 0x7F0B4B70u;
            return;
    }

label_7F0B37B8:
    ctx->pc = 0x7F0B37B8u;
    ctx->downcount -= 9;
    // 7F0B37B8: lwz     r0, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B37BC:
    ctx->pc = 0x7F0B37BCu;
    // 7F0B37BC: ori     r0, r0, 0x0011
    ctx->gpr[0] = ctx->gpr[0] | 0x0011u;

label_7F0B37C0:
    ctx->pc = 0x7F0B37C0u;
    // 7F0B37C0: stw     r0, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B37C4:
    ctx->pc = 0x7F0B37C4u;
    // 7F0B37C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B37C8:
    ctx->pc = 0x7F0B37C8u;
    // 7F0B37C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B37CC:
    ctx->pc = 0x7F0B37CCu;
    // 7F0B37CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B37D0:
    ctx->pc = 0x7F0B37D0u;
    // 7F0B37D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B37D4:
    ctx->pc = 0x7F0B37D4u;
    // 7F0B37D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B37D8:
    ctx->pc = 0x7F0B37D8u;
    ctx->downcount -= 7;
    // 7F0B37D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B37DC:
    ctx->pc = 0x7F0B37DCu;
    // 7F0B37DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B37E0:
    ctx->pc = 0x7F0B37E0u;
    // 7F0B37E0: lis     r4, 258
    ctx->gpr[4] = ((u32)(s32)(258) << 16);

label_7F0B37E4:
    ctx->pc = 0x7F0B37E4u;
    // 7F0B37E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B37E8:
    ctx->pc = 0x7F0B37E8u;
    // 7F0B37E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B37EC:
    ctx->pc = 0x7F0B37ECu;
    // 7F0B37EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B37F0:
    ctx->pc = 0x7F0B37F0u;
    // 7F0B37F0: bl      0x7F0B4BA4
    {
            ctx->lr = 0x7F0B37F4u;
            ctx->pc = 0x7F0B4BA4u;
            return;
    }

label_7F0B37F4:
    ctx->pc = 0x7F0B37F4u;
    ctx->downcount -= 3;
    // 7F0B37F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B37F8:
    ctx->pc = 0x7F0B37F8u;
    // 7F0B37F8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0B37FC:
    ctx->pc = 0x7F0B37FCu;
    // 7F0B37FC: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B3800u;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B3800:
    ctx->pc = 0x7F0B3800u;
    ctx->downcount -= 2;
    // 7F0B3800: cmpwi   r3, 0
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

label_7F0B3804:
    ctx->pc = 0x7F0B3804u;
    // 7F0B3804: bc    4, 2, 0x7F0B3810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3810;
        }
    }

label_7F0B3808:
    ctx->pc = 0x7F0B3808u;
    ctx->downcount -= 2;
    // 7F0B3808: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B380C:
    ctx->pc = 0x7F0B380Cu;
    // 7F0B380C: b       0x7F0B38D0
    {
            goto label_7F0B38D0;
    }

label_7F0B3810:
    ctx->pc = 0x7F0B3810u;
    ctx->downcount -= 3;
    // 7F0B3810: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3814:
    ctx->pc = 0x7F0B3814u;
    // 7F0B3814: lis     r4, 32
    ctx->gpr[4] = ((u32)(s32)(32) << 16);

label_7F0B3818:
    ctx->pc = 0x7F0B3818u;
    // 7F0B3818: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B381Cu;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B381C:
    ctx->pc = 0x7F0B381Cu;
    ctx->downcount -= 2;
    // 7F0B381C: cmpwi   r3, 0
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

label_7F0B3820:
    ctx->pc = 0x7F0B3820u;
    // 7F0B3820: bc    12, 2, 0x7F0B382C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B382C;
        }
    }

label_7F0B3824:
    ctx->pc = 0x7F0B3824u;
    ctx->downcount -= 2;
    // 7F0B3824: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3828:
    ctx->pc = 0x7F0B3828u;
    // 7F0B3828: b       0x7F0B38D0
    {
            goto label_7F0B38D0;
    }

label_7F0B382C:
    ctx->pc = 0x7F0B382Cu;
    ctx->downcount -= 3;
    // 7F0B382C: lwz     r0, 3508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3830:
    ctx->pc = 0x7F0B3830u;
    // 7F0B3830: cmpwi   r0, 0
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

label_7F0B3834:
    ctx->pc = 0x7F0B3834u;
    // 7F0B3834: bc    12, 0, 0x7F0B3840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3840;
        }
    }

label_7F0B3838:
    ctx->pc = 0x7F0B3838u;
    ctx->downcount -= 2;
    // 7F0B3838: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B383C:
    ctx->pc = 0x7F0B383Cu;
    // 7F0B383C: b       0x7F0B38D0
    {
            goto label_7F0B38D0;
    }

label_7F0B3840:
    ctx->pc = 0x7F0B3840u;
    ctx->downcount -= 3;
    // 7F0B3840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3844:
    ctx->pc = 0x7F0B3844u;
    // 7F0B3844: lis     r4, 32
    ctx->gpr[4] = ((u32)(s32)(32) << 16);

label_7F0B3848:
    ctx->pc = 0x7F0B3848u;
    // 7F0B3848: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B384Cu;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B384C:
    ctx->pc = 0x7F0B384Cu;
    ctx->downcount -= 6;
    // 7F0B384C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3850:
    ctx->pc = 0x7F0B3850u;
    // 7F0B3850: stw     r0, 3324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3854:
    ctx->pc = 0x7F0B3854u;
    // 7F0B3854: lwz     r3, 3312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3858:
    ctx->pc = 0x7F0B3858u;
    // 7F0B3858: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B385C:
    ctx->pc = 0x7F0B385Cu;
    // 7F0B385C: rlwinm. r0, r3, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3860:
    ctx->pc = 0x7F0B3860u;
    // 7F0B3860: bc    12, 2, 0x7F0B3870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3870;
        }
    }

label_7F0B3864:
    ctx->pc = 0x7F0B3864u;
    ctx->downcount -= 3;
    // 7F0B3864: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B3868:
    ctx->pc = 0x7F0B3868u;
    // 7F0B3868: stw     r0, 3324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B386C:
    ctx->pc = 0x7F0B386Cu;
    // 7F0B386C: b       0x7F0B3880
    {
            goto label_7F0B3880;
    }

label_7F0B3870:
    ctx->pc = 0x7F0B3870u;
    ctx->downcount -= 2;
    // 7F0B3870: rlwinm. r0, r3, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3874:
    ctx->pc = 0x7F0B3874u;
    // 7F0B3874: bc    12, 2, 0x7F0B3880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3880;
        }
    }

label_7F0B3878:
    ctx->pc = 0x7F0B3878u;
    ctx->downcount -= 2;
    // 7F0B3878: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0B387C:
    ctx->pc = 0x7F0B387Cu;
    // 7F0B387C: stw     r0, 3324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3880:
    ctx->pc = 0x7F0B3880u;
    ctx->downcount -= 4;
    // 7F0B3880: lwz     r3, 3312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3884:
    ctx->pc = 0x7F0B3884u;
    // 7F0B3884: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3888:
    ctx->pc = 0x7F0B3888u;
    // 7F0B3888: rlwinm. r0, r3, 0, 17, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00004000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B388C:
    ctx->pc = 0x7F0B388Cu;
    // 7F0B388C: bc    12, 2, 0x7F0B38A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B38A0;
        }
    }

label_7F0B3890:
    ctx->pc = 0x7F0B3890u;
    ctx->downcount -= 3;
    // 7F0B3890: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3894:
    ctx->pc = 0x7F0B3894u;
    // 7F0B3894: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0B3898:
    ctx->pc = 0x7F0B3898u;
    // 7F0B3898: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B389Cu;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B389C:
    ctx->pc = 0x7F0B389Cu;
    ctx->downcount -= 1;
    // 7F0B389C: b       0x7F0B38B4
    {
            goto label_7F0B38B4;
    }

label_7F0B38A0:
    ctx->pc = 0x7F0B38A0u;
    ctx->downcount -= 2;
    // 7F0B38A0: rlwinm. r0, r3, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B38A4:
    ctx->pc = 0x7F0B38A4u;
    // 7F0B38A4: bc    12, 2, 0x7F0B38B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B38B4;
        }
    }

label_7F0B38A8:
    ctx->pc = 0x7F0B38A8u;
    ctx->downcount -= 3;
    // 7F0B38A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B38AC:
    ctx->pc = 0x7F0B38ACu;
    // 7F0B38AC: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F0B38B0:
    ctx->pc = 0x7F0B38B0u;
    // 7F0B38B0: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B38B4u;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B38B4:
    ctx->pc = 0x7F0B38B4u;
    ctx->downcount -= 3;
    // 7F0B38B4: lwz     r0, 3524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B38B8:
    ctx->pc = 0x7F0B38B8u;
    // 7F0B38B8: cmpwi   r0, 0
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

label_7F0B38BC:
    ctx->pc = 0x7F0B38BCu;
    // 7F0B38BC: bc    4, 2, 0x7F0B38CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B38CC;
        }
    }

label_7F0B38C0:
    ctx->pc = 0x7F0B38C0u;
    ctx->downcount -= 3;
    // 7F0B38C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B38C4:
    ctx->pc = 0x7F0B38C4u;
    // 7F0B38C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B38C8:
    ctx->pc = 0x7F0B38C8u;
    // 7F0B38C8: bl      0x7F0B374C
    {
            ctx->lr = 0x7F0B38CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B374Cu;
                return;
            }
            goto label_7F0B374C;
    }

label_7F0B38CC:
    ctx->pc = 0x7F0B38CCu;
    ctx->downcount -= 1;
    // 7F0B38CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B38D0:
    ctx->pc = 0x7F0B38D0u;
    ctx->downcount -= 6;
    // 7F0B38D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B38D4:
    ctx->pc = 0x7F0B38D4u;
    // 7F0B38D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B38D8:
    ctx->pc = 0x7F0B38D8u;
    // 7F0B38D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B38DC:
    ctx->pc = 0x7F0B38DCu;
    // 7F0B38DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B38E0:
    ctx->pc = 0x7F0B38E0u;
    // 7F0B38E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B38E4:
    ctx->pc = 0x7F0B38E4u;
    ctx->downcount -= 7;
    // 7F0B38E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B38E8:
    ctx->pc = 0x7F0B38E8u;
    // 7F0B38E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B38EC:
    ctx->pc = 0x7F0B38ECu;
    // 7F0B38EC: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F0B38F0:
    ctx->pc = 0x7F0B38F0u;
    // 7F0B38F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B38F4:
    ctx->pc = 0x7F0B38F4u;
    // 7F0B38F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B38F8:
    ctx->pc = 0x7F0B38F8u;
    // 7F0B38F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B38FC:
    ctx->pc = 0x7F0B38FCu;
    // 7F0B38FC: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B3900u;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B3900:
    ctx->pc = 0x7F0B3900u;
    ctx->downcount -= 2;
    // 7F0B3900: cmpwi   r3, 0
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

label_7F0B3904:
    ctx->pc = 0x7F0B3904u;
    // 7F0B3904: bc    4, 2, 0x7F0B3910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3910;
        }
    }

label_7F0B3908:
    ctx->pc = 0x7F0B3908u;
    ctx->downcount -= 2;
    // 7F0B3908: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B390C:
    ctx->pc = 0x7F0B390Cu;
    // 7F0B390C: b       0x7F0B3970
    {
            goto label_7F0B3970;
    }

label_7F0B3910:
    ctx->pc = 0x7F0B3910u;
    ctx->downcount -= 3;
    // 7F0B3910: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3914:
    ctx->pc = 0x7F0B3914u;
    // 7F0B3914: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F0B3918:
    ctx->pc = 0x7F0B3918u;
    // 7F0B3918: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B391Cu;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B391C:
    ctx->pc = 0x7F0B391Cu;
    ctx->downcount -= 2;
    // 7F0B391C: cmpwi   r3, 0
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

label_7F0B3920:
    ctx->pc = 0x7F0B3920u;
    // 7F0B3920: bc    12, 2, 0x7F0B392C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B392C;
        }
    }

label_7F0B3924:
    ctx->pc = 0x7F0B3924u;
    ctx->downcount -= 2;
    // 7F0B3924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3928:
    ctx->pc = 0x7F0B3928u;
    // 7F0B3928: b       0x7F0B3970
    {
            goto label_7F0B3970;
    }

label_7F0B392C:
    ctx->pc = 0x7F0B392Cu;
    ctx->downcount -= 3;
    // 7F0B392C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3930:
    ctx->pc = 0x7F0B3930u;
    // 7F0B3930: lis     r4, 64
    ctx->gpr[4] = ((u32)(s32)(64) << 16);

label_7F0B3934:
    ctx->pc = 0x7F0B3934u;
    // 7F0B3934: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B3938u;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B3938:
    ctx->pc = 0x7F0B3938u;
    ctx->downcount -= 2;
    // 7F0B3938: cmpwi   r3, 0
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

label_7F0B393C:
    ctx->pc = 0x7F0B393Cu;
    // 7F0B393C: bc    12, 2, 0x7F0B3948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3948;
        }
    }

label_7F0B3940:
    ctx->pc = 0x7F0B3940u;
    ctx->downcount -= 2;
    // 7F0B3940: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3944:
    ctx->pc = 0x7F0B3944u;
    // 7F0B3944: b       0x7F0B3970
    {
            goto label_7F0B3970;
    }

label_7F0B3948:
    ctx->pc = 0x7F0B3948u;
    ctx->downcount -= 4;
    // 7F0B3948: lwz     r3, 3312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B394C:
    ctx->pc = 0x7F0B394Cu;
    // 7F0B394C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3950:
    ctx->pc = 0x7F0B3950u;
    // 7F0B3950: rlwinm. r0, r0, 0, 26, 26
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

label_7F0B3954:
    ctx->pc = 0x7F0B3954u;
    // 7F0B3954: bc    12, 2, 0x7F0B396C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B396C;
        }
    }

label_7F0B3958:
    ctx->pc = 0x7F0B3958u;
    ctx->downcount -= 3;
    // 7F0B3958: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B395C:
    ctx->pc = 0x7F0B395Cu;
    // 7F0B395C: lis     r4, 64
    ctx->gpr[4] = ((u32)(s32)(64) << 16);

label_7F0B3960:
    ctx->pc = 0x7F0B3960u;
    // 7F0B3960: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B3964u;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B3964:
    ctx->pc = 0x7F0B3964u;
    ctx->downcount -= 2;
    // 7F0B3964: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B3968:
    ctx->pc = 0x7F0B3968u;
    // 7F0B3968: b       0x7F0B3970
    {
            goto label_7F0B3970;
    }

label_7F0B396C:
    ctx->pc = 0x7F0B396Cu;
    ctx->downcount -= 1;
    // 7F0B396C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3970:
    ctx->pc = 0x7F0B3970u;
    ctx->downcount -= 6;
    // 7F0B3970: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3974:
    ctx->pc = 0x7F0B3974u;
    // 7F0B3974: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3978:
    ctx->pc = 0x7F0B3978u;
    // 7F0B3978: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B397C:
    ctx->pc = 0x7F0B397Cu;
    // 7F0B397C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3980:
    ctx->pc = 0x7F0B3980u;
    // 7F0B3980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3984:
    ctx->pc = 0x7F0B3984u;
    ctx->downcount -= 7;
    // 7F0B3984: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3988:
    ctx->pc = 0x7F0B3988u;
    // 7F0B3988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B398C:
    ctx->pc = 0x7F0B398Cu;
    // 7F0B398C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B3990:
    ctx->pc = 0x7F0B3990u;
    // 7F0B3990: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3994:
    ctx->pc = 0x7F0B3994u;
    // 7F0B3994: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3998:
    ctx->pc = 0x7F0B3998u;
    // 7F0B3998: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B399C:
    ctx->pc = 0x7F0B399Cu;
    // 7F0B399C: bl      0x7F0B4B90
    {
            ctx->lr = 0x7F0B39A0u;
            ctx->pc = 0x7F0B4B90u;
            return;
    }

label_7F0B39A0:
    ctx->pc = 0x7F0B39A0u;
    ctx->downcount -= 2;
    // 7F0B39A0: cmpwi   r3, 0
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

label_7F0B39A4:
    ctx->pc = 0x7F0B39A4u;
    // 7F0B39A4: bc    12, 2, 0x7F0B39B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B39B0;
        }
    }

label_7F0B39A8:
    ctx->pc = 0x7F0B39A8u;
    ctx->downcount -= 2;
    // 7F0B39A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B39AC:
    ctx->pc = 0x7F0B39ACu;
    // 7F0B39AC: b       0x7F0B39E8
    {
            goto label_7F0B39E8;
    }

label_7F0B39B0:
    ctx->pc = 0x7F0B39B0u;
    ctx->downcount -= 4;
    // 7F0B39B0: lwz     r3, 3312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B39B4:
    ctx->pc = 0x7F0B39B4u;
    // 7F0B39B4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B39B8:
    ctx->pc = 0x7F0B39B8u;
    // 7F0B39B8: andi.   r0, r3, 0xA000
    {
        ctx->gpr[0] = ctx->gpr[3] & 0xA000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B39BC:
    ctx->pc = 0x7F0B39BCu;
    // 7F0B39BC: bc    4, 2, 0x7F0B39C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B39C8;
        }
    }

label_7F0B39C0:
    ctx->pc = 0x7F0B39C0u;
    ctx->downcount -= 2;
    // 7F0B39C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B39C4:
    ctx->pc = 0x7F0B39C4u;
    // 7F0B39C4: b       0x7F0B39E8
    {
            goto label_7F0B39E8;
    }

label_7F0B39C8:
    ctx->pc = 0x7F0B39C8u;
    ctx->downcount -= 2;
    // 7F0B39C8: rlwinm. r0, r3, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B39CC:
    ctx->pc = 0x7F0B39CCu;
    // 7F0B39CC: bc    12, 2, 0x7F0B39DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B39DC;
        }
    }

label_7F0B39D0:
    ctx->pc = 0x7F0B39D0u;
    ctx->downcount -= 3;
    // 7F0B39D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B39D4:
    ctx->pc = 0x7F0B39D4u;
    // 7F0B39D4: stw     r0, 3324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B39D8:
    ctx->pc = 0x7F0B39D8u;
    // 7F0B39D8: b       0x7F0B39E4
    {
            goto label_7F0B39E4;
    }

label_7F0B39DC:
    ctx->pc = 0x7F0B39DCu;
    ctx->downcount -= 2;
    // 7F0B39DC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0B39E0:
    ctx->pc = 0x7F0B39E0u;
    // 7F0B39E0: stw     r0, 3324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B39E4:
    ctx->pc = 0x7F0B39E4u;
    ctx->downcount -= 1;
    // 7F0B39E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B39E8:
    ctx->pc = 0x7F0B39E8u;
    ctx->downcount -= 6;
    // 7F0B39E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B39EC:
    ctx->pc = 0x7F0B39ECu;
    // 7F0B39EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B39F0:
    ctx->pc = 0x7F0B39F0u;
    // 7F0B39F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B39F4:
    ctx->pc = 0x7F0B39F4u;
    // 7F0B39F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B39F8:
    ctx->pc = 0x7F0B39F8u;
    // 7F0B39F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B39FC:
    ctx->pc = 0x7F0B39FCu;
    ctx->downcount -= 4;
    // 7F0B39FC: lwz     r4, 3312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B3A00:
    ctx->pc = 0x7F0B3A00u;
    // 7F0B3A00: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B3A04:
    ctx->pc = 0x7F0B3A04u;
    // 7F0B3A04: andi.   r0, r4, 0xA000
    {
        ctx->gpr[0] = ctx->gpr[4] & 0xA000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3A08:
    ctx->pc = 0x7F0B3A08u;
    // 7F0B3A08: bc    4, 2, 0x7F0B3A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A14;
        }
    }

label_7F0B3A0C:
    ctx->pc = 0x7F0B3A0Cu;
    ctx->downcount -= 2;
    // 7F0B3A0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3A10:
    ctx->pc = 0x7F0B3A10u;
    // 7F0B3A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3A14:
    ctx->pc = 0x7F0B3A14u;
    ctx->downcount -= 2;
    // 7F0B3A14: rlwinm. r0, r4, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3A18:
    ctx->pc = 0x7F0B3A18u;
    // 7F0B3A18: bc    12, 2, 0x7F0B3A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A28;
        }
    }

label_7F0B3A1C:
    ctx->pc = 0x7F0B3A1Cu;
    ctx->downcount -= 3;
    // 7F0B3A1C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0B3A20:
    ctx->pc = 0x7F0B3A20u;
    // 7F0B3A20: stw     r0, 3324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3A24:
    ctx->pc = 0x7F0B3A24u;
    // 7F0B3A24: b       0x7F0B3A30
    {
            goto label_7F0B3A30;
    }

label_7F0B3A28:
    ctx->pc = 0x7F0B3A28u;
    ctx->downcount -= 2;
    // 7F0B3A28: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0B3A2C:
    ctx->pc = 0x7F0B3A2Cu;
    // 7F0B3A2C: stw     r0, 3324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3A30:
    ctx->pc = 0x7F0B3A30u;
    ctx->downcount -= 2;
    // 7F0B3A30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B3A34:
    ctx->pc = 0x7F0B3A34u;
    // 7F0B3A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3A38:
    ctx->pc = 0x7F0B3A38u;
    ctx->downcount -= 4;
    // 7F0B3A38: lwz     r4, 3312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B3A3C:
    ctx->pc = 0x7F0B3A3Cu;
    // 7F0B3A3C: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B3A40:
    ctx->pc = 0x7F0B3A40u;
    // 7F0B3A40: rlwinm. r0, r4, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3A44:
    ctx->pc = 0x7F0B3A44u;
    // 7F0B3A44: bc    4, 2, 0x7F0B3A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A5C;
        }
    }

label_7F0B3A48:
    ctx->pc = 0x7F0B3A48u;
    ctx->downcount -= 3;
    // 7F0B3A48: lwz     r0, 3324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3A4C:
    ctx->pc = 0x7F0B3A4Cu;
    // 7F0B3A4C: cmpwi   r0, 1
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

label_7F0B3A50:
    ctx->pc = 0x7F0B3A50u;
    // 7F0B3A50: bc    4, 2, 0x7F0B3A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A5C;
        }
    }

label_7F0B3A54:
    ctx->pc = 0x7F0B3A54u;
    ctx->downcount -= 2;
    // 7F0B3A54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B3A58:
    ctx->pc = 0x7F0B3A58u;
    // 7F0B3A58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3A5C:
    ctx->pc = 0x7F0B3A5Cu;
    ctx->downcount -= 2;
    // 7F0B3A5C: rlwinm. r0, r4, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3A60:
    ctx->pc = 0x7F0B3A60u;
    // 7F0B3A60: bc    4, 2, 0x7F0B3A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A78;
        }
    }

label_7F0B3A64:
    ctx->pc = 0x7F0B3A64u;
    ctx->downcount -= 3;
    // 7F0B3A64: lwz     r0, 3324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3A68:
    ctx->pc = 0x7F0B3A68u;
    // 7F0B3A68: cmpwi   r0, -1
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

label_7F0B3A6C:
    ctx->pc = 0x7F0B3A6Cu;
    // 7F0B3A6C: bc    4, 2, 0x7F0B3A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3A78;
        }
    }

label_7F0B3A70:
    ctx->pc = 0x7F0B3A70u;
    ctx->downcount -= 2;
    // 7F0B3A70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0B3A74:
    ctx->pc = 0x7F0B3A74u;
    // 7F0B3A74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3A78:
    ctx->pc = 0x7F0B3A78u;
    ctx->downcount -= 2;
    // 7F0B3A78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3A7C:
    ctx->pc = 0x7F0B3A7Cu;
    // 7F0B3A7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3A80:
    ctx->pc = 0x7F0B3A80u;
    ctx->downcount -= 7;
    // 7F0B3A80: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3A84:
    ctx->pc = 0x7F0B3A84u;
    // 7F0B3A84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3A88:
    ctx->pc = 0x7F0B3A88u;
    // 7F0B3A88: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0B3A8C:
    ctx->pc = 0x7F0B3A8Cu;
    // 7F0B3A8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3A90:
    ctx->pc = 0x7F0B3A90u;
    // 7F0B3A90: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3A94:
    ctx->pc = 0x7F0B3A94u;
    // 7F0B3A94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3A98:
    ctx->pc = 0x7F0B3A98u;
    // 7F0B3A98: bl      0x7F0B4BA4
    {
            ctx->lr = 0x7F0B3A9Cu;
            ctx->pc = 0x7F0B4BA4u;
            return;
    }

label_7F0B3A9C:
    ctx->pc = 0x7F0B3A9Cu;
    ctx->downcount -= 3;
    // 7F0B3A9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3AA0:
    ctx->pc = 0x7F0B3AA0u;
    // 7F0B3AA0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0B3AA4:
    ctx->pc = 0x7F0B3AA4u;
    // 7F0B3AA4: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3AA8u;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3AA8:
    ctx->pc = 0x7F0B3AA8u;
    ctx->downcount -= 2;
    // 7F0B3AA8: cmpwi   r3, 0
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

label_7F0B3AAC:
    ctx->pc = 0x7F0B3AACu;
    // 7F0B3AAC: bc    4, 2, 0x7F0B3AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3AF8;
        }
    }

label_7F0B3AB0:
    ctx->pc = 0x7F0B3AB0u;
    ctx->downcount -= 3;
    // 7F0B3AB0: lwz     r5, 3308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3AB4:
    ctx->pc = 0x7F0B3AB4u;
    // 7F0B3AB4: cmplwi  r5, 0x0000
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

label_7F0B3AB8:
    ctx->pc = 0x7F0B3AB8u;
    // 7F0B3AB8: bc    12, 2, 0x7F0B3AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3AF8;
        }
    }

label_7F0B3ABC:
    ctx->pc = 0x7F0B3ABCu;
    ctx->downcount -= 12;
    // 7F0B3ABC: lha     r4, 3536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3536);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3AC0:
    ctx->pc = 0x7F0B3AC0u;
    // 7F0B3AC0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0B3AC4:
    ctx->pc = 0x7F0B3AC4u;
    // 7F0B3AC4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3AC8:
    ctx->pc = 0x7F0B3AC8u;
    // 7F0B3AC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0B3ACC:
    ctx->pc = 0x7F0B3ACCu;
    // 7F0B3ACC: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0B3AD0:
    ctx->pc = 0x7F0B3AD0u;
    // 7F0B3AD0: lfd     f1, -4944(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3AD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4944);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B3AD4:
    ctx->pc = 0x7F0B3AD4u;
    // 7F0B3AD4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3AD8:
    ctx->pc = 0x7F0B3AD8u;
    // 7F0B3AD8: lfs     f2, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3AD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0B3ADC:
    ctx->pc = 0x7F0B3ADCu;
    // 7F0B3ADC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B3AE0:
    ctx->pc = 0x7F0B3AE0u;
    // 7F0B3AE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B3AE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0B3AE4:
    ctx->pc = 0x7F0B3AE4u;
    // 7F0B3AE4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B3AE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0B3AE8:
    ctx->pc = 0x7F0B3AE8u;
    // 7F0B3AE8: bc    4, 1, 0x7F0B3AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3AF8;
        }
    }

label_7F0B3AEC:
    ctx->pc = 0x7F0B3AECu;
    ctx->downcount -= 3;
    // 7F0B3AEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3AF0:
    ctx->pc = 0x7F0B3AF0u;
    // 7F0B3AF0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0B3AF4:
    ctx->pc = 0x7F0B3AF4u;
    // 7F0B3AF4: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B3AF8u;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B3AF8:
    ctx->pc = 0x7F0B3AF8u;
    ctx->downcount -= 6;
    // 7F0B3AF8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3AFC:
    ctx->pc = 0x7F0B3AFCu;
    // 7F0B3AFC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3B00:
    ctx->pc = 0x7F0B3B00u;
    // 7F0B3B00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3B04:
    ctx->pc = 0x7F0B3B04u;
    // 7F0B3B04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0B3B08:
    ctx->pc = 0x7F0B3B08u;
    // 7F0B3B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3B0C:
    ctx->pc = 0x7F0B3B0Cu;
    ctx->downcount -= 10;
    // 7F0B3B0C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3B10:
    ctx->pc = 0x7F0B3B10u;
    // 7F0B3B10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3B14:
    ctx->pc = 0x7F0B3B14u;
    // 7F0B3B14: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B3B18:
    ctx->pc = 0x7F0B3B18u;
    // 7F0B3B18: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3B1C:
    ctx->pc = 0x7F0B3B1Cu;
    // 7F0B3B1C: addi    r0, r4, 29748
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(29748);

label_7F0B3B20:
    ctx->pc = 0x7F0B3B20u;
    // 7F0B3B20: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3B24:
    ctx->pc = 0x7F0B3B24u;
    // 7F0B3B24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3B28:
    ctx->pc = 0x7F0B3B28u;
    // 7F0B3B28: lwz     r5, 3316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3316);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3B2C:
    ctx->pc = 0x7F0B3B2Cu;
    // 7F0B3B2C: cmplw   r5, r0
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

label_7F0B3B30:
    ctx->pc = 0x7F0B3B30u;
    // 7F0B3B30: bc    12, 2, 0x7F0B3CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3CCC;
        }
    }

label_7F0B3B34:
    ctx->pc = 0x7F0B3B34u;
    ctx->downcount -= 2;
    // 7F0B3B34: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F0B3B38:
    ctx->pc = 0x7F0B3B38u;
    // 7F0B3B38: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3B3Cu;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3B3C:
    ctx->pc = 0x7F0B3B3Cu;
    ctx->downcount -= 2;
    // 7F0B3B3C: cmpwi   r3, 0
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

label_7F0B3B40:
    ctx->pc = 0x7F0B3B40u;
    // 7F0B3B40: bc    4, 2, 0x7F0B3CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3CCC;
        }
    }

label_7F0B3B44:
    ctx->pc = 0x7F0B3B44u;
    ctx->downcount -= 6;
    // 7F0B3B44: lwz     r3, 3556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3B48:
    ctx->pc = 0x7F0B3B48u;
    // 7F0B3B48: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0B3B4C:
    ctx->pc = 0x7F0B3B4Cu;
    // 7F0B3B4C: lwz     r7, 3560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3560);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B3B50:
    ctx->pc = 0x7F0B3B50u;
    // 7F0B3B50: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0B3B54:
    ctx->pc = 0x7F0B3B54u;
    // 7F0B3B54: cmpw    r7, r0
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

label_7F0B3B58:
    ctx->pc = 0x7F0B3B58u;
    // 7F0B3B58: bc    12, 2, 0x7F0B3B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3B60;
        }
    }

label_7F0B3B5C:
    ctx->pc = 0x7F0B3B5Cu;
    ctx->downcount -= 1;
    // 7F0B3B5C: addi    r4, r7, 1
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(1);

label_7F0B3B60:
    ctx->pc = 0x7F0B3B60u;
    ctx->downcount -= 9;
    // 7F0B3B60: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3B60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3B64:
    ctx->pc = 0x7F0B3B64u;
    // 7F0B3B64: rlwinm r0, r7, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_7F0B3B68:
    ctx->pc = 0x7F0B3B68u;
    // 7F0B3B68: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0B3B6C:
    ctx->pc = 0x7F0B3B6Cu;
    // 7F0B3B6C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0B3B6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0B3B70:
    ctx->pc = 0x7F0B3B70u;
    // 7F0B3B70: lwz     r0, 3564(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3B74:
    ctx->pc = 0x7F0B3B74u;
    // 7F0B3B74: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0B3B78:
    ctx->pc = 0x7F0B3B78u;
    // 7F0B3B78: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3B7C:
    ctx->pc = 0x7F0B3B7Cu;
    // 7F0B3B7C: cmpw    r5, r0
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

label_7F0B3B80:
    ctx->pc = 0x7F0B3B80u;
    // 7F0B3B80: bc    4, 1, 0x7F0B3B94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3B94;
        }
    }

label_7F0B3B84:
    ctx->pc = 0x7F0B3B84u;
    ctx->downcount -= 2;
    // 7F0B3B84: cmpwi   r7, 0
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

label_7F0B3B88:
    ctx->pc = 0x7F0B3B88u;
    // 7F0B3B88: bc    4, 1, 0x7F0B3BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3BAC;
        }
    }

label_7F0B3B8C:
    ctx->pc = 0x7F0B3B8Cu;
    ctx->downcount -= 2;
    // 7F0B3B8C: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

label_7F0B3B90:
    ctx->pc = 0x7F0B3B90u;
    // 7F0B3B90: b       0x7F0B3BAC
    {
            goto label_7F0B3BAC;
    }

label_7F0B3B94:
    ctx->pc = 0x7F0B3B94u;
    ctx->downcount -= 2;
    // 7F0B3B94: cmpwi   r4, -1
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

label_7F0B3B98:
    ctx->pc = 0x7F0B3B98u;
    // 7F0B3B98: bc    12, 2, 0x7F0B3BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3BAC;
        }
    }

label_7F0B3B9C:
    ctx->pc = 0x7F0B3B9Cu;
    ctx->downcount -= 3;
    // 7F0B3B9C: lwz     r0, 3568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3BA0:
    ctx->pc = 0x7F0B3BA0u;
    // 7F0B3BA0: cmpw    r5, r0
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

label_7F0B3BA4:
    ctx->pc = 0x7F0B3BA4u;
    // 7F0B3BA4: bc    4, 0, 0x7F0B3BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3BAC;
        }
    }

label_7F0B3BA8:
    ctx->pc = 0x7F0B3BA8u;
    ctx->downcount -= 1;
    // 7F0B3BA8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F0B3BAC:
    ctx->pc = 0x7F0B3BACu;
    ctx->downcount -= 17;
    // 7F0B3BAC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3BB0:
    ctx->pc = 0x7F0B3BB0u;
    // 7F0B3BB0: stw     r7, 3560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3560);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0B3BB4:
    ctx->pc = 0x7F0B3BB4u;
    // 7F0B3BB4: addi    r6, r3, 21948
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(21948);

label_7F0B3BB8:
    ctx->pc = 0x7F0B3BB8u;
    // 7F0B3BB8: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3BBC:
    ctx->pc = 0x7F0B3BBCu;
    // 7F0B3BBC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3BC0:
    ctx->pc = 0x7F0B3BC0u;
    // 7F0B3BC0: addi    r4, r3, 21940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(21940);

label_7F0B3BC4:
    ctx->pc = 0x7F0B3BC4u;
    // 7F0B3BC4: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B3BC8:
    ctx->pc = 0x7F0B3BC8u;
    // 7F0B3BC8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3BCC:
    ctx->pc = 0x7F0B3BCCu;
    // 7F0B3BCC: rlwinm r3, r7, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 3u) & 0xFFFFFFF8u;
    }

label_7F0B3BD0:
    ctx->pc = 0x7F0B3BD0u;
    // 7F0B3BD0: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B3BD4:
    ctx->pc = 0x7F0B3BD4u;
    // 7F0B3BD4: addi    r3, r3, 3692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3692);

label_7F0B3BD8:
    ctx->pc = 0x7F0B3BD8u;
    // 7F0B3BD8: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0B3BDC:
    ctx->pc = 0x7F0B3BDCu;
    // 7F0B3BDC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3BE0:
    ctx->pc = 0x7F0B3BE0u;
    // 7F0B3BE0: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0B3BE4:
    ctx->pc = 0x7F0B3BE4u;
    // 7F0B3BE4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B3BE8:
    ctx->pc = 0x7F0B3BE8u;
    // 7F0B3BE8: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3BEC:
    ctx->pc = 0x7F0B3BECu;
    // 7F0B3BEC: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0B3BF0u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0B3BF0:
    ctx->pc = 0x7F0B3BF0u;
    ctx->downcount -= 4;
    // 7F0B3BF0: lha     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3BF4:
    ctx->pc = 0x7F0B3BF4u;
    // 7F0B3BF4: extsh. r0, r3
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

label_7F0B3BF8:
    ctx->pc = 0x7F0B3BF8u;
    // 7F0B3BF8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3BFC:
    ctx->pc = 0x7F0B3BFCu;
    // 7F0B3BFC: bc    4, 0, 0x7F0B3C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C04;
        }
    }

label_7F0B3C00:
    ctx->pc = 0x7F0B3C00u;
    ctx->downcount -= 1;
    // 7F0B3C00: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0B3C04:
    ctx->pc = 0x7F0B3C04u;
    ctx->downcount -= 2;
    // 7F0B3C04: cmpwi   r0, 64
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

label_7F0B3C08:
    ctx->pc = 0x7F0B3C08u;
    // 7F0B3C08: bc    4, 1, 0x7F0B3C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C20;
        }
    }

label_7F0B3C0C:
    ctx->pc = 0x7F0B3C0Cu;
    ctx->downcount -= 3;
    // 7F0B3C0C: extsh. r0, r3
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

label_7F0B3C10:
    ctx->pc = 0x7F0B3C10u;
    // 7F0B3C10: li      r0, -64
    ctx->gpr[0] = (u32)(s32)(-64);

label_7F0B3C14:
    ctx->pc = 0x7F0B3C14u;
    // 7F0B3C14: bc    4, 1, 0x7F0B3C1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C1C;
        }
    }

label_7F0B3C18:
    ctx->pc = 0x7F0B3C18u;
    ctx->downcount -= 1;
    // 7F0B3C18: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F0B3C1C:
    ctx->pc = 0x7F0B3C1Cu;
    ctx->downcount -= 1;
    // 7F0B3C1C: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3C20:
    ctx->pc = 0x7F0B3C20u;
    ctx->downcount -= 8;
    // 7F0B3C20: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3C24:
    ctx->pc = 0x7F0B3C24u;
    // 7F0B3C24: lha     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3C28:
    ctx->pc = 0x7F0B3C28u;
    // 7F0B3C28: addi    r5, r3, 21940
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(21940);

label_7F0B3C2C:
    ctx->pc = 0x7F0B3C2Cu;
    // 7F0B3C2C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3C30:
    ctx->pc = 0x7F0B3C30u;
    // 7F0B3C30: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0B3C34:
    ctx->pc = 0x7F0B3C34u;
    // 7F0B3C34: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0B3C38:
    ctx->pc = 0x7F0B3C38u;
    // 7F0B3C38: lwz     r3, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3C3C:
    ctx->pc = 0x7F0B3C3Cu;
    // 7F0B3C3C: bl      0x7F026F4C
    {
            ctx->lr = 0x7F0B3C40u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F0B3C40:
    ctx->pc = 0x7F0B3C40u;
    ctx->downcount -= 6;
    // 7F0B3C40: lha     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3C44:
    ctx->pc = 0x7F0B3C44u;
    // 7F0B3C44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3C48:
    ctx->pc = 0x7F0B3C48u;
    // 7F0B3C48: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3C4C:
    ctx->pc = 0x7F0B3C4Cu;
    // 7F0B3C4C: extsh. r0, r3
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

label_7F0B3C50:
    ctx->pc = 0x7F0B3C50u;
    // 7F0B3C50: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3C54:
    ctx->pc = 0x7F0B3C54u;
    // 7F0B3C54: bc    4, 0, 0x7F0B3C5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C5C;
        }
    }

label_7F0B3C58:
    ctx->pc = 0x7F0B3C58u;
    ctx->downcount -= 1;
    // 7F0B3C58: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0B3C5C:
    ctx->pc = 0x7F0B3C5Cu;
    ctx->downcount -= 2;
    // 7F0B3C5C: cmpwi   r0, 8
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

label_7F0B3C60:
    ctx->pc = 0x7F0B3C60u;
    // 7F0B3C60: bc    4, 1, 0x7F0B3C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C78;
        }
    }

label_7F0B3C64:
    ctx->pc = 0x7F0B3C64u;
    ctx->downcount -= 3;
    // 7F0B3C64: extsh. r0, r3
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

label_7F0B3C68:
    ctx->pc = 0x7F0B3C68u;
    // 7F0B3C68: li      r0, -8
    ctx->gpr[0] = (u32)(s32)(-8);

label_7F0B3C6C:
    ctx->pc = 0x7F0B3C6Cu;
    // 7F0B3C6C: bc    4, 1, 0x7F0B3C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C74;
        }
    }

label_7F0B3C70:
    ctx->pc = 0x7F0B3C70u;
    ctx->downcount -= 1;
    // 7F0B3C70: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0B3C74:
    ctx->pc = 0x7F0B3C74u;
    ctx->downcount -= 1;
    // 7F0B3C74: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3C78:
    ctx->pc = 0x7F0B3C78u;
    ctx->downcount -= 4;
    // 7F0B3C78: lha     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3C7C:
    ctx->pc = 0x7F0B3C7Cu;
    // 7F0B3C7C: extsh. r0, r3
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

label_7F0B3C80:
    ctx->pc = 0x7F0B3C80u;
    // 7F0B3C80: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3C84:
    ctx->pc = 0x7F0B3C84u;
    // 7F0B3C84: bc    4, 0, 0x7F0B3C8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3C8C;
        }
    }

label_7F0B3C88:
    ctx->pc = 0x7F0B3C88u;
    ctx->downcount -= 1;
    // 7F0B3C88: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F0B3C8C:
    ctx->pc = 0x7F0B3C8Cu;
    ctx->downcount -= 2;
    // 7F0B3C8C: cmpwi   r0, 8
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

label_7F0B3C90:
    ctx->pc = 0x7F0B3C90u;
    // 7F0B3C90: bc    4, 1, 0x7F0B3CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3CA8;
        }
    }

label_7F0B3C94:
    ctx->pc = 0x7F0B3C94u;
    ctx->downcount -= 3;
    // 7F0B3C94: extsh. r0, r3
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

label_7F0B3C98:
    ctx->pc = 0x7F0B3C98u;
    // 7F0B3C98: li      r0, -8
    ctx->gpr[0] = (u32)(s32)(-8);

label_7F0B3C9C:
    ctx->pc = 0x7F0B3C9Cu;
    // 7F0B3C9C: bc    4, 1, 0x7F0B3CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3CA4;
        }
    }

label_7F0B3CA0:
    ctx->pc = 0x7F0B3CA0u;
    ctx->downcount -= 1;
    // 7F0B3CA0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0B3CA4:
    ctx->pc = 0x7F0B3CA4u;
    ctx->downcount -= 1;
    // 7F0B3CA4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3CA8:
    ctx->pc = 0x7F0B3CA8u;
    ctx->downcount -= 5;
    // 7F0B3CA8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0B3CAC:
    ctx->pc = 0x7F0B3CACu;
    // 7F0B3CAC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0B3CB0:
    ctx->pc = 0x7F0B3CB0u;
    // 7F0B3CB0: addi    r3, r3, 21948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21948);

label_7F0B3CB4:
    ctx->pc = 0x7F0B3CB4u;
    // 7F0B3CB4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3CB8:
    ctx->pc = 0x7F0B3CB8u;
    // 7F0B3CB8: bl      0x7F3CCADC
    {
            ctx->lr = 0x7F0B3CBCu;
            ctx->pc = 0x7F3CCADCu;
            return;
    }

label_7F0B3CBC:
    ctx->pc = 0x7F0B3CBCu;
    ctx->downcount -= 4;
    // 7F0B3CBC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3CC0:
    ctx->pc = 0x7F0B3CC0u;
    // 7F0B3CC0: lwz     r3, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3CC4:
    ctx->pc = 0x7F0B3CC4u;
    // 7F0B3CC4: addi    r4, r4, 21948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21948);

label_7F0B3CC8:
    ctx->pc = 0x7F0B3CC8u;
    // 7F0B3CC8: bl      0x7F026F30
    {
            ctx->lr = 0x7F0B3CCCu;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F0B3CCC:
    ctx->pc = 0x7F0B3CCCu;
    ctx->downcount -= 6;
    // 7F0B3CCC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3CD0:
    ctx->pc = 0x7F0B3CD0u;
    // 7F0B3CD0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3CD4:
    ctx->pc = 0x7F0B3CD4u;
    // 7F0B3CD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3CD8:
    ctx->pc = 0x7F0B3CD8u;
    // 7F0B3CD8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0B3CDC:
    ctx->pc = 0x7F0B3CDCu;
    // 7F0B3CDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3CE0:
    ctx->pc = 0x7F0B3CE0u;
    ctx->downcount -= 51;
    // 7F0B3CE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3CE4:
    ctx->pc = 0x7F0B3CE4u;
    // 7F0B3CE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3CE8:
    ctx->pc = 0x7F0B3CE8u;
    // 7F0B3CE8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3CEC:
    ctx->pc = 0x7F0B3CECu;
    // 7F0B3CEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3CF0:
    ctx->pc = 0x7F0B3CF0u;
    // 7F0B3CF0: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_7F0B3CF4:
    ctx->pc = 0x7F0B3CF4u;
    // 7F0B3CF4: addi    r4, r4, 21948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21948);

label_7F0B3CF8:
    ctx->pc = 0x7F0B3CF8u;
    // 7F0B3CF8: lwz     r5, 3364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3364);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3CFC:
    ctx->pc = 0x7F0B3CFCu;
    // 7F0B3CFC: divw   r5, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0B3D00:
    ctx->pc = 0x7F0B3D00u;
    // 7F0B3D00: addi    r0, r5, 2048
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2048);

label_7F0B3D04:
    ctx->pc = 0x7F0B3D04u;
    // 7F0B3D04: sth     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3D08:
    ctx->pc = 0x7F0B3D08u;
    // 7F0B3D08: lwz     r3, 4000(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4000);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3D0C:
    ctx->pc = 0x7F0B3D0Cu;
    // 7F0B3D0C: bl      0x7F026F30
    {
            ctx->lr = 0x7F0B3D10u;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F0B3D10:
    ctx->pc = 0x7F0B3D10u;
    ctx->downcount -= 5;
    // 7F0B3D10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3D14:
    ctx->pc = 0x7F0B3D14u;
    // 7F0B3D14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3D18:
    ctx->pc = 0x7F0B3D18u;
    // 7F0B3D18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3D1C:
    ctx->pc = 0x7F0B3D1Cu;
    // 7F0B3D1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3D20:
    ctx->pc = 0x7F0B3D20u;
    ctx->downcount -= 8;
    // 7F0B3D20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3D24:
    ctx->pc = 0x7F0B3D24u;
    // 7F0B3D24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3D28:
    ctx->pc = 0x7F0B3D28u;
    // 7F0B3D28: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B3D2C:
    ctx->pc = 0x7F0B3D2Cu;
    // 7F0B3D2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3D30:
    ctx->pc = 0x7F0B3D30u;
    // 7F0B3D30: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B3D34:
    ctx->pc = 0x7F0B3D34u;
    // 7F0B3D34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3D38:
    ctx->pc = 0x7F0B3D38u;
    // 7F0B3D38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3D3C:
    ctx->pc = 0x7F0B3D3Cu;
    // 7F0B3D3C: bl      0x7F0B4BA4
    {
            ctx->lr = 0x7F0B3D40u;
            ctx->pc = 0x7F0B4BA4u;
            return;
    }

label_7F0B3D40:
    ctx->pc = 0x7F0B3D40u;
    ctx->downcount -= 4;
    // 7F0B3D40: lwz     r3, 3312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3D44:
    ctx->pc = 0x7F0B3D44u;
    // 7F0B3D44: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3D48:
    ctx->pc = 0x7F0B3D48u;
    // 7F0B3D48: cmpwi   r0, 0
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

label_7F0B3D4C:
    ctx->pc = 0x7F0B3D4Cu;
    // 7F0B3D4C: bc    12, 2, 0x7F0B3D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3D98;
        }
    }

label_7F0B3D50:
    ctx->pc = 0x7F0B3D50u;
    ctx->downcount -= 3;
    // 7F0B3D50: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3D54:
    ctx->pc = 0x7F0B3D54u;
    // 7F0B3D54: rlwinm. r0, r0, 0, 16, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000F000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3D58:
    ctx->pc = 0x7F0B3D58u;
    // 7F0B3D58: bc    12, 2, 0x7F0B3D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3D98;
        }
    }

label_7F0B3D5C:
    ctx->pc = 0x7F0B3D5Cu;
    ctx->downcount -= 4;
    // 7F0B3D5C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0B3D60:
    ctx->pc = 0x7F0B3D60u;
    // 7F0B3D60: addi    r3, r3, 20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20);

label_7F0B3D64:
    ctx->pc = 0x7F0B3D64u;
    // 7F0B3D64: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B3D68:
    ctx->pc = 0x7F0B3D68u;
    ctx->downcount -= 3;
    // 7F0B3D68: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0B3D6C:
    // 7F0B3D6C: cmplwi  r0, 0x007F
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

label_7F0B3D70:
    // 7F0B3D70: bc    12, 0, 0x7F0B3D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3D7C;
        }
    }

label_7F0B3D74:
    ctx->downcount -= 2;
    // 7F0B3D74: cmplwi  r0, 0x0081
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0081u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0B3D78:
    // 7F0B3D78: bc    4, 1, 0x7F0B3D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3D90;
        }
    }

label_7F0B3D7C:
    ctx->downcount -= 4;
    // 7F0B3D7C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B3D80:
    // 7F0B3D80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3D84:
    // 7F0B3D84: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B3D88:
    // 7F0B3D88: bl      0x7F0B4B80
    {
            ctx->lr = 0x7F0B3D8Cu;
            ctx->pc = 0x7F0B4B80u;
            return;
    }

label_7F0B3D8C:
    ctx->downcount -= 1;
    // 7F0B3D8C: b       0x7F0B3D98
    {
            goto label_7F0B3D98;
    }

label_7F0B3D90:
    ctx->downcount -= 2;
    // 7F0B3D90: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0B3D94:
    // 7F0B3D94: bc    16, 0, 0x7F0B3D68
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B3D68u;
                return;
            }
            goto label_7F0B3D68;
        }
    }

label_7F0B3D98:
    ctx->pc = 0x7F0B3D98u;
    ctx->downcount -= 6;
    // 7F0B3D98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3D9C:
    ctx->pc = 0x7F0B3D9Cu;
    // 7F0B3D9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3DA0:
    ctx->pc = 0x7F0B3DA0u;
    // 7F0B3DA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3DA4:
    ctx->pc = 0x7F0B3DA4u;
    // 7F0B3DA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3DA8:
    ctx->pc = 0x7F0B3DA8u;
    // 7F0B3DA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DAC:
    ctx->pc = 0x7F0B3DACu;
    ctx->downcount -= 3;
    // 7F0B3DAC: lwz     r5, 3520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3520);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3DB0:
    ctx->pc = 0x7F0B3DB0u;
    // 7F0B3DB0: cmpwi   r5, 0
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

label_7F0B3DB4:
    ctx->pc = 0x7F0B3DB4u;
    // 7F0B3DB4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DB8:
    ctx->pc = 0x7F0B3DB8u;
    ctx->downcount -= 1;
    // 7F0B3DB8: bc    4, 1, 0x7F0B3DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3DEC;
        }
    }

label_7F0B3DBC:
    ctx->pc = 0x7F0B3DBCu;
    ctx->downcount -= 4;
    // 7F0B3DBC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3DC0:
    ctx->pc = 0x7F0B3DC0u;
    // 7F0B3DC0: lwz     r0, 21932(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(21932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3DC4:
    ctx->pc = 0x7F0B3DC4u;
    // 7F0B3DC4: cmpwi   r0, 0
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

label_7F0B3DC8:
    ctx->pc = 0x7F0B3DC8u;
    // 7F0B3DC8: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DCC:
    ctx->pc = 0x7F0B3DCCu;
    ctx->downcount -= 3;
    // 7F0B3DCC: addic.  r0, r5, -1
    {
        u64 a = ctx->gpr[5];
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

label_7F0B3DD0:
    ctx->pc = 0x7F0B3DD0u;
    // 7F0B3DD0: stw     r0, 3520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3DD4:
    ctx->pc = 0x7F0B3DD4u;
    // 7F0B3DD4: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DD8:
    ctx->pc = 0x7F0B3DD8u;
    ctx->downcount -= 5;
    // 7F0B3DD8: lwz     r3, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3DDC:
    ctx->pc = 0x7F0B3DDCu;
    // 7F0B3DDC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3DE0:
    ctx->pc = 0x7F0B3DE0u;
    // 7F0B3DE0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0B3DE4:
    ctx->pc = 0x7F0B3DE4u;
    // 7F0B3DE4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3DE8:
    ctx->pc = 0x7F0B3DE8u;
    // 7F0B3DE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DEC:
    ctx->pc = 0x7F0B3DECu;
    ctx->downcount -= 4;
    // 7F0B3DEC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3DF0:
    ctx->pc = 0x7F0B3DF0u;
    // 7F0B3DF0: lwz     r0, 21932(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(21932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3DF4:
    ctx->pc = 0x7F0B3DF4u;
    // 7F0B3DF4: cmpwi   r0, 0
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

label_7F0B3DF8:
    ctx->pc = 0x7F0B3DF8u;
    // 7F0B3DF8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3DFC:
    ctx->pc = 0x7F0B3DFCu;
    ctx->downcount -= 3;
    // 7F0B3DFC: addic.  r0, r5, 1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(1);
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

label_7F0B3E00:
    ctx->pc = 0x7F0B3E00u;
    // 7F0B3E00: stw     r0, 3520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3E04:
    ctx->pc = 0x7F0B3E04u;
    // 7F0B3E04: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3E08:
    ctx->pc = 0x7F0B3E08u;
    ctx->downcount -= 5;
    // 7F0B3E08: lwz     r3, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3E0C:
    ctx->pc = 0x7F0B3E0Cu;
    // 7F0B3E0C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3E10:
    ctx->pc = 0x7F0B3E10u;
    // 7F0B3E10: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0B3E14:
    ctx->pc = 0x7F0B3E14u;
    // 7F0B3E14: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3E18:
    ctx->pc = 0x7F0B3E18u;
    // 7F0B3E18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3E1C:
    ctx->pc = 0x7F0B3E1Cu;
    ctx->downcount -= 8;
    // 7F0B3E1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3E20:
    ctx->pc = 0x7F0B3E20u;
    // 7F0B3E20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3E24:
    ctx->pc = 0x7F0B3E24u;
    // 7F0B3E24: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0B3E28:
    ctx->pc = 0x7F0B3E28u;
    // 7F0B3E28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3E2C:
    ctx->pc = 0x7F0B3E2Cu;
    // 7F0B3E2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0B3E30:
    ctx->pc = 0x7F0B3E30u;
    // 7F0B3E30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3E34:
    ctx->pc = 0x7F0B3E34u;
    // 7F0B3E34: addi    r3, r4, -32036
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32036);

label_7F0B3E38:
    ctx->pc = 0x7F0B3E38u;
    // 7F0B3E38: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F0B3E3Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F0B3E3C:
    ctx->pc = 0x7F0B3E3Cu;
    ctx->downcount -= 6;
    // 7F0B3E3C: lhz     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0B3E40:
    ctx->pc = 0x7F0B3E40u;
    // 7F0B3E40: addi    r4, r31, 312
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(312);

label_7F0B3E44:
    ctx->pc = 0x7F0B3E44u;
    // 7F0B3E44: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0B3E48:
    ctx->pc = 0x7F0B3E48u;
    // 7F0B3E48: cmpwi   r0, 0
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

label_7F0B3E4C:
    ctx->pc = 0x7F0B3E4Cu;
    // 7F0B3E4C: bc    4, 1, 0x7F0B3EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3EE8;
        }
    }

label_7F0B3E50:
    ctx->pc = 0x7F0B3E50u;
    ctx->downcount -= 3;
    // 7F0B3E50: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3E54:
    // 7F0B3E54: cmplw   r0, r3
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

label_7F0B3E58:
    // 7F0B3E58: bc    4, 2, 0x7F0B3EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3EE0;
        }
    }

label_7F0B3E5C:
    ctx->downcount -= 3;
    // 7F0B3E5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0B3E60:
    // 7F0B3E60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0B3E64:
    // 7F0B3E64: bl      0x7F0B374C
    {
            ctx->lr = 0x7F0B3E68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B374Cu;
                return;
            }
            goto label_7F0B374C;
    }

label_7F0B3E68:
    ctx->pc = 0x7F0B3E68u;
    ctx->downcount -= 30;
    // 7F0B3E68: lwz     r9, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0B3E6C:
    // 7F0B3E6C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B3E70:
    // 7F0B3E70: li      r6, -2
    ctx->gpr[6] = (u32)(s32)(-2);

label_7F0B3E74:
    // 7F0B3E74: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F0B3E78:
    ctx->pc = 0x7F0B3E78u;
    // 7F0B3E78: lha     r8, 18(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(18);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3E7C:
    // 7F0B3E7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B3E80:
    ctx->pc = 0x7F0B3E80u;
    // 7F0B3E80: lha     r7, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B3E84:
    // 7F0B3E84: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B3E88:
    // 7F0B3E88: add   r3, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0B3E8C:
    ctx->pc = 0x7F0B3E8Cu;
    // 7F0B3E8C: sth     r3, 18(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0B3E90:
    ctx->pc = 0x7F0B3E90u;
    // 7F0B3E90: lwz     r3, 1532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3E94:
    ctx->pc = 0x7F0B3E94u;
    // 7F0B3E94: lwz     r7, 1528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1528);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0B3E98:
    // 7F0B3E98: and   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[6];
    }

label_7F0B3E9C:
    ctx->pc = 0x7F0B3E9Cu;
    // 7F0B3E9C: stw     r3, 1532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1532);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B3EA0:
    // 7F0B3EA0: and   r3, r7, r5
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[5];
    }

label_7F0B3EA4:
    ctx->pc = 0x7F0B3EA4u;
    // 7F0B3EA4: stw     r3, 1528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1528);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B3EA8:
    ctx->pc = 0x7F0B3EA8u;
    // 7F0B3EA8: lwz     r3, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3EAC:
    ctx->pc = 0x7F0B3EACu;
    // 7F0B3EAC: sth     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3EB0:
    ctx->pc = 0x7F0B3EB0u;
    // 7F0B3EB0: lwz     r3, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3EB4:
    ctx->pc = 0x7F0B3EB4u;
    // 7F0B3EB4: sth     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B3EB8:
    ctx->pc = 0x7F0B3EB8u;
    // 7F0B3EB8: lwz     r5, 1540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1540);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B3EBC:
    ctx->pc = 0x7F0B3EBCu;
    // 7F0B3EBC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3EC0:
    ctx->pc = 0x7F0B3EC0u;
    // 7F0B3EC0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3EC4:
    ctx->pc = 0x7F0B3EC4u;
    // 7F0B3EC4: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B3EC8:
    ctx->pc = 0x7F0B3EC8u;
    // 7F0B3EC8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3ECC:
    ctx->pc = 0x7F0B3ECCu;
    // 7F0B3ECC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3ED0:
    ctx->pc = 0x7F0B3ED0u;
    // 7F0B3ED0: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3ED4:
    ctx->pc = 0x7F0B3ED4u;
    // 7F0B3ED4: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B3ED8:
    ctx->pc = 0x7F0B3ED8u;
    // 7F0B3ED8: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3EDC:
    // 7F0B3EDC: b       0x7F0B3EE8
    {
            goto label_7F0B3EE8;
    }

label_7F0B3EE0:
    ctx->downcount -= 2;
    // 7F0B3EE0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0B3EE4:
    // 7F0B3EE4: bc    16, 0, 0x7F0B3E50
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B3E50u;
                return;
            }
            goto label_7F0B3E50;
        }
    }

label_7F0B3EE8:
    ctx->pc = 0x7F0B3EE8u;
    ctx->downcount -= 6;
    // 7F0B3EE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3EEC:
    ctx->pc = 0x7F0B3EECu;
    // 7F0B3EEC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0B3EF0:
    ctx->pc = 0x7F0B3EF0u;
    // 7F0B3EF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0B3EF4:
    ctx->pc = 0x7F0B3EF4u;
    // 7F0B3EF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0B3EF8:
    ctx->pc = 0x7F0B3EF8u;
    // 7F0B3EF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0B00EC;
        }
    }

label_7F0B3EFC:
    ctx->pc = 0x7F0B3EFCu;
    ctx->downcount -= 18;
    // 7F0B3EFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0B3F00:
    ctx->pc = 0x7F0B3F00u;
    // 7F0B3F00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0B3F04:
    ctx->pc = 0x7F0B3F04u;
    // 7F0B3F04: li      r4, 8448
    ctx->gpr[4] = (u32)(s32)(8448);

label_7F0B3F08:
    ctx->pc = 0x7F0B3F08u;
    // 7F0B3F08: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3F0C:
    ctx->pc = 0x7F0B3F0Cu;
    // 7F0B3F0C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0B3F10:
    ctx->pc = 0x7F0B3F10u;
    // 7F0B3F10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0B3F14:
    ctx->pc = 0x7F0B3F14u;
    // 7F0B3F14: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0B3F18:
    ctx->pc = 0x7F0B3F18u;
    // 7F0B3F18: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3F1Cu;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3F1C:
    ctx->pc = 0x7F0B3F1Cu;
    ctx->downcount -= 2;
    // 7F0B3F1C: cmpwi   r3, 0
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

label_7F0B3F20:
    ctx->pc = 0x7F0B3F20u;
    // 7F0B3F20: bc    12, 2, 0x7F0B3F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3F2C;
        }
    }

label_7F0B3F24:
    ctx->pc = 0x7F0B3F24u;
    ctx->downcount -= 2;
    // 7F0B3F24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3F28:
    ctx->pc = 0x7F0B3F28u;
    // 7F0B3F28: b       0x7F0B4178
    {
            ctx->pc = 0x7F0B4178u;
            return;
    }

label_7F0B3F2C:
    ctx->pc = 0x7F0B3F2Cu;
    ctx->downcount -= 5;
    // 7F0B3F2C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0B3F30:
    ctx->pc = 0x7F0B3F30u;
    // 7F0B3F30: lwz     r29, 1532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1532);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F0B3F34:
    ctx->pc = 0x7F0B3F34u;
    // 7F0B3F34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3F38:
    ctx->pc = 0x7F0B3F38u;
    // 7F0B3F38: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0B3F3C:
    ctx->pc = 0x7F0B3F3Cu;
    // 7F0B3F3C: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3F40u;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3F40:
    ctx->pc = 0x7F0B3F40u;
    ctx->downcount -= 2;
    // 7F0B3F40: cmpwi   r3, 0
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

label_7F0B3F44:
    ctx->pc = 0x7F0B3F44u;
    // 7F0B3F44: bc    12, 2, 0x7F0B3FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FEC;
        }
    }

label_7F0B3F48:
    ctx->pc = 0x7F0B3F48u;
    ctx->downcount -= 3;
    // 7F0B3F48: lwz     r3, 3524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3524);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3F4C:
    ctx->pc = 0x7F0B3F4Cu;
    // 7F0B3F4C: cmpwi   r3, 0
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

label_7F0B3F50:
    ctx->pc = 0x7F0B3F50u;
    // 7F0B3F50: bc    4, 1, 0x7F0B3FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FEC;
        }
    }

label_7F0B3F54:
    ctx->pc = 0x7F0B3F54u;
    ctx->downcount -= 3;
    // 7F0B3F54: addic.  r0, r3, -1
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

label_7F0B3F58:
    ctx->pc = 0x7F0B3F58u;
    // 7F0B3F58: stw     r0, 3524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3F5C:
    ctx->pc = 0x7F0B3F5Cu;
    // 7F0B3F5C: bc    4, 1, 0x7F0B3FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FC0;
        }
    }

label_7F0B3F60:
    ctx->pc = 0x7F0B3F60u;
    ctx->downcount -= 3;
    // 7F0B3F60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3F64:
    ctx->pc = 0x7F0B3F64u;
    // 7F0B3F64: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F0B3F68:
    ctx->pc = 0x7F0B3F68u;
    // 7F0B3F68: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3F6Cu;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3F6C:
    ctx->pc = 0x7F0B3F6Cu;
    ctx->downcount -= 2;
    // 7F0B3F6C: cmpwi   r3, 0
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

label_7F0B3F70:
    ctx->pc = 0x7F0B3F70u;
    // 7F0B3F70: bc    12, 2, 0x7F0B3FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FB8;
        }
    }

label_7F0B3F74:
    ctx->pc = 0x7F0B3F74u;
    ctx->downcount -= 2;
    // 7F0B3F74: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F0B3F78:
    ctx->pc = 0x7F0B3F78u;
    // 7F0B3F78: bl      0x7F02A538
    {
            ctx->lr = 0x7F0B3F7Cu;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F0B3F7C:
    ctx->pc = 0x7F0B3F7Cu;
    ctx->downcount -= 19;
    // 7F0B3F7C: lwz     r6, 3524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3524);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0B3F80:
    ctx->pc = 0x7F0B3F80u;
    // 7F0B3F80: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0B3F84:
    ctx->pc = 0x7F0B3F84u;
    // 7F0B3F84: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0B3F88:
    ctx->pc = 0x7F0B3F88u;
    // 7F0B3F88: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3F8C:
    ctx->pc = 0x7F0B3F8Cu;
    // 7F0B3F8C: mullw   r6, r6, r3
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[6] = (u32)product;
    }

label_7F0B3F90:
    ctx->pc = 0x7F0B3F90u;
    // 7F0B3F90: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0B3F94:
    ctx->pc = 0x7F0B3F94u;
    // 7F0B3F94: lfd     f2, -4944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3F94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B3F98:
    ctx->pc = 0x7F0B3F98u;
    // 7F0B3F98: addi    r3, r4, 21980
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(21980);

label_7F0B3F9C:
    ctx->pc = 0x7F0B3F9Cu;
    // 7F0B3F9C: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3F9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0B3FA0:
    ctx->pc = 0x7F0B3FA0u;
    // 7F0B3FA0: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F0B3FA4:
    ctx->pc = 0x7F0B3FA4u;
    // 7F0B3FA4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3FA8:
    ctx->pc = 0x7F0B3FA8u;
    // 7F0B3FA8: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3FA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0B3FAC:
    ctx->pc = 0x7F0B3FACu;
    // 7F0B3FAC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0B3FACu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F0B3FB0:
    ctx->pc = 0x7F0B3FB0u;
    // 7F0B3FB0: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0B3FB0u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F0B3FB4:
    ctx->pc = 0x7F0B3FB4u;
    // 7F0B3FB4: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0B3FB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0B3FB8:
    ctx->pc = 0x7F0B3FB8u;
    ctx->downcount -= 2;
    // 7F0B3FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3FBC:
    ctx->pc = 0x7F0B3FBCu;
    // 7F0B3FBC: b       0x7F0B4178
    {
            ctx->pc = 0x7F0B4178u;
            return;
    }

label_7F0B3FC0:
    ctx->pc = 0x7F0B3FC0u;
    ctx->downcount -= 3;
    // 7F0B3FC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3FC4:
    ctx->pc = 0x7F0B3FC4u;
    // 7F0B3FC4: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F0B3FC8:
    ctx->pc = 0x7F0B3FC8u;
    // 7F0B3FC8: bl      0x7F0B4BB4
    {
            ctx->lr = 0x7F0B3FCCu;
            ctx->pc = 0x7F0B4BB4u;
            return;
    }

label_7F0B3FCC:
    ctx->pc = 0x7F0B3FCCu;
    ctx->downcount -= 2;
    // 7F0B3FCC: cmpwi   r3, 0
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

label_7F0B3FD0:
    ctx->pc = 0x7F0B3FD0u;
    // 7F0B3FD0: bc    4, 2, 0x7F0B3FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FE4;
        }
    }

label_7F0B3FD4:
    ctx->pc = 0x7F0B3FD4u;
    ctx->downcount -= 4;
    // 7F0B3FD4: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B3FD8:
    ctx->pc = 0x7F0B3FD8u;
    // 7F0B3FD8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B3FDC:
    ctx->pc = 0x7F0B3FDCu;
    // 7F0B3FDC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0B3FE0:
    ctx->pc = 0x7F0B3FE0u;
    // 7F0B3FE0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B3FE4:
    ctx->pc = 0x7F0B3FE4u;
    ctx->downcount -= 2;
    // 7F0B3FE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B3FE8:
    ctx->pc = 0x7F0B3FE8u;
    // 7F0B3FE8: bl      0x7F0B3798
    {
            ctx->lr = 0x7F0B3FECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0B3798u;
                return;
            }
            goto label_7F0B3798;
    }

label_7F0B3FEC:
    ctx->pc = 0x7F0B3FECu;
    ctx->downcount -= 2;
    // 7F0B3FEC: rlwinm. r0, r29, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0B3FF0:
    ctx->pc = 0x7F0B3FF0u;
    // 7F0B3FF0: bc    4, 2, 0x7F0B3FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B3FFC;
        }
    }

label_7F0B3FF4:
    ctx->pc = 0x7F0B3FF4u;
    ctx->downcount -= 2;
    // 7F0B3FF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0B3FF8:
    ctx->pc = 0x7F0B3FF8u;
    // 7F0B3FF8: b       0x7F0B4178
    {
            ctx->pc = 0x7F0B4178u;
            return;
    }

label_7F0B3FFC:
    ctx->pc = 0x7F0B3FFCu;
    ctx->downcount -= 9;
    // 7F0B3FFC: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F0B4000:
    ctx->pc = 0x7F0B4000u;
    // 7F0B4000: lwz     r4, 1520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1520);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0B4004:
    ctx->pc = 0x7F0B4004u;
    // 7F0B4004: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B4008:
    ctx->pc = 0x7F0B4008u;
    // 7F0B4008: lwz     r5, 1524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1524);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B400C:
    ctx->pc = 0x7F0B400Cu;
    // 7F0B400C: addi    r3, r3, 992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(992);

label_7F0B4010:
    ctx->pc = 0x7F0B4010u;
    // 7F0B4010: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F0B4014:
    ctx->pc = 0x7F0B4014u;
    // 7F0B4014: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0B4018:
    ctx->pc = 0x7F0B4018u;
    // 7F0B4018: or.   r0, r3, r0
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

label_7F0B401C:
    ctx->pc = 0x7F0B401Cu;
    // 7F0B401C: bc    4, 2, 0x7F0B4044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0B4044;
        }
    }

label_7F0B4020:
    ctx->pc = 0x7F0B4020u;
    ctx->downcount -= 4;
    // 7F0B4020: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B4024:
    ctx->pc = 0x7F0B4024u;
    // 7F0B4024: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B4028:
    ctx->pc = 0x7F0B4028u;
    // 7F0B4028: addi    r3, r3, -32128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32128);

label_7F0B402C:
    ctx->pc = 0x7F0B402Cu;
    // 7F0B402C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0B4030u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0B4030:
    ctx->pc = 0x7F0B4030u;
    ctx->downcount -= 4;
    // 7F0B4030: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B4034:
    ctx->pc = 0x7F0B4034u;
    // 7F0B4034: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0B4038:
    ctx->pc = 0x7F0B4038u;
    // 7F0B4038: addi    r3, r3, -32124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32124);

label_7F0B403C:
    ctx->pc = 0x7F0B403Cu;
    // 7F0B403C: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0B4040u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0B4040:
    ctx->pc = 0x7F0B4040u;
    ctx->downcount -= 1;
    // 7F0B4040: b       0x7F0B4068
    {
            goto label_7F0B4068;
    }

label_7F0B4044:
    ctx->pc = 0x7F0B4044u;
    ctx->downcount -= 4;
    // 7F0B4044: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B4048:
    ctx->pc = 0x7F0B4048u;
    // 7F0B4048: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0B404C:
    ctx->pc = 0x7F0B404Cu;
    // 7F0B404C: addi    r3, r3, -32116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32116);

label_7F0B4050:
    ctx->pc = 0x7F0B4050u;
    // 7F0B4050: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0B4054u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0B4054:
    ctx->pc = 0x7F0B4054u;
    ctx->downcount -= 4;
    // 7F0B4054: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0B4058:
    ctx->pc = 0x7F0B4058u;
    // 7F0B4058: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0B405C:
    ctx->pc = 0x7F0B405Cu;
    // 7F0B405C: addi    r3, r3, -32112
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32112);

label_7F0B4060:
    ctx->pc = 0x7F0B4060u;
    // 7F0B4060: bl      0x7F013B6C
    {
            ctx->lr = 0x7F0B4064u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F0B4064:
    ctx->pc = 0x7F0B4064u;
    ctx->downcount -= 1;
    // 7F0B4064: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F0B4068:
    ctx->pc = 0x7F0B4068u;
    ctx->downcount -= 3;
    // 7F0B4068: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0B406C:
    ctx->pc = 0x7F0B406Cu;
    // 7F0B406C: li      r4, 450
    ctx->gpr[4] = (u32)(s32)(450);

label_7F0B4070:
    ctx->pc = 0x7F0B4070u;
    // 7F0B4070: bl      0x7F0B4BD8
    {
            ctx->lr = 0x7F0B4074u;
            ctx->pc = 0x7F0B4BD8u;
            return;
    }

label_7F0B4074:
    ctx->pc = 0x7F0B4074u;
    ctx->downcount -= 28;
    // 7F0B4074: lwz     r3, 1532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B4078:
    ctx->pc = 0x7F0B4078u;
    // 7F0B4078: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F0B407C:
    ctx->pc = 0x7F0B407Cu;
    // 7F0B407C: lwz     r5, 1528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1528);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B4080:
    ctx->pc = 0x7F0B4080u;
    // 7F0B4080: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0B4084:
    ctx->pc = 0x7F0B4084u;
    // 7F0B4084: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0B4088:
    ctx->pc = 0x7F0B4088u;
    // 7F0B4088: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0B408C:
    ctx->pc = 0x7F0B408Cu;
    // 7F0B408C: stw     r0, 1532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B4090:
    ctx->pc = 0x7F0B4090u;
    // 7F0B4090: and   r5, r5, r4
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0B4094:
    ctx->pc = 0x7F0B4094u;
    // 7F0B4094: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0B4098:
    ctx->pc = 0x7F0B4098u;
    // 7F0B4098: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0B409C:
    ctx->pc = 0x7F0B409Cu;
    // 7F0B409C: stw     r5, 1528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1528);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0B40A0:
    ctx->pc = 0x7F0B40A0u;
    // 7F0B40A0: lwz     r3, 1540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B40A4:
    ctx->pc = 0x7F0B40A4u;
    // 7F0B40A4: sth     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B40A8:
    ctx->pc = 0x7F0B40A8u;
    // 7F0B40A8: lwz     r3, 1540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B40AC:
    ctx->pc = 0x7F0B40ACu;
    // 7F0B40AC: sth     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0B40B0:
    ctx->pc = 0x7F0B40B0u;
    // 7F0B40B0: lwz     r5, 1540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1540);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0B40B4:
    ctx->pc = 0x7F0B40B4u;
    // 7F0B40B4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B40B8:
    ctx->pc = 0x7F0B40B8u;
    // 7F0B40B8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B40BC:
    ctx->pc = 0x7F0B40BCu;
    // 7F0B40BC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B40C0:
    ctx->pc = 0x7F0B40C0u;
    // 7F0B40C0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B40C4:
    ctx->pc = 0x7F0B40C4u;
    // 7F0B40C4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B40C8:
    ctx->pc = 0x7F0B40C8u;
    // 7F0B40C8: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0B40CC:
    ctx->pc = 0x7F0B40CCu;
    // 7F0B40CC: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0B40D0:
    ctx->pc = 0x7F0B40D0u;
    // 7F0B40D0: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0B40D4:
    ctx->pc = 0x7F0B40D4u;
    // 7F0B40D4: lwz     r3, 1540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0B40D8:
    ctx->pc = 0x7F0B40D8u;
    // 7F0B40D8: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0B40DC:
    ctx->pc = 0x7F0B40DCu;
    // 7F0B40DC: cmpwi   r0, 0
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

label_7F0B40E0:
    ctx->pc = 0x7F0B40E0u;
    // 7F0B40E0: bc    12, 1, 0x7F0B410C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0B410Cu;
            return;
        }
    }

label_7F0B40E4:
    ctx->pc = 0x7F0B40E4u;
    ctx->downcount -= 2;
    // 7F0B40E4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0B40E8:
    ctx->pc = 0x7F0B40E8u;
    // 7F0B40E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

    ctx->pc = 0x7F0B40ECu;
    return;
return_dispatch_7F0B00EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0B0160u: goto label_7F0B0160;
    case 0x7F0B016Cu: goto label_7F0B016C;
    case 0x7F0B01A0u: goto label_7F0B01A0;
    case 0x7F0B01A8u: goto label_7F0B01A8;
    case 0x7F0B01B0u: goto label_7F0B01B0;
    case 0x7F0B01B4u: goto label_7F0B01B4;
    case 0x7F0B01F4u: goto label_7F0B01F4;
    case 0x7F0B0210u: goto label_7F0B0210;
    case 0x7F0B0228u: goto label_7F0B0228;
    case 0x7F0B0238u: goto label_7F0B0238;
    case 0x7F0B0260u: goto label_7F0B0260;
    case 0x7F0B02A8u: goto label_7F0B02A8;
    case 0x7F0B02D8u: goto label_7F0B02D8;
    case 0x7F0B0400u: goto label_7F0B0400;
    case 0x7F0B0410u: goto label_7F0B0410;
    case 0x7F0B0478u: goto label_7F0B0478;
    case 0x7F0B04BCu: goto label_7F0B04BC;
    case 0x7F0B04D4u: goto label_7F0B04D4;
    case 0x7F0B0514u: goto label_7F0B0514;
    case 0x7F0B0534u: goto label_7F0B0534;
    case 0x7F0B0570u: goto label_7F0B0570;
    case 0x7F0B0590u: goto label_7F0B0590;
    case 0x7F0B05B8u: goto label_7F0B05B8;
    case 0x7F0B05C8u: goto label_7F0B05C8;
    case 0x7F0B05FCu: goto label_7F0B05FC;
    case 0x7F0B060Cu: goto label_7F0B060C;
    case 0x7F0B0668u: goto label_7F0B0668;
    case 0x7F0B06C8u: goto label_7F0B06C8;
    case 0x7F0B06E0u: goto label_7F0B06E0;
    case 0x7F0B071Cu: goto label_7F0B071C;
    case 0x7F0B0768u: goto label_7F0B0768;
    case 0x7F0B0794u: goto label_7F0B0794;
    case 0x7F0B07DCu: goto label_7F0B07DC;
    case 0x7F0B07E8u: goto label_7F0B07E8;
    case 0x7F0B07F8u: goto label_7F0B07F8;
    case 0x7F0B0834u: goto label_7F0B0834;
    case 0x7F0B08ECu: goto label_7F0B08EC;
    case 0x7F0B0944u: goto label_7F0B0944;
    case 0x7F0B0968u: goto label_7F0B0968;
    case 0x7F0B09ACu: goto label_7F0B09AC;
    case 0x7F0B09C0u: goto label_7F0B09C0;
    case 0x7F0B09D8u: goto label_7F0B09D8;
    case 0x7F0B09F4u: goto label_7F0B09F4;
    case 0x7F0B0A10u: goto label_7F0B0A10;
    case 0x7F0B0A28u: goto label_7F0B0A28;
    case 0x7F0B0A40u: goto label_7F0B0A40;
    case 0x7F0B0A4Cu: goto label_7F0B0A4C;
    case 0x7F0B0A64u: goto label_7F0B0A64;
    case 0x7F0B0A74u: goto label_7F0B0A74;
    case 0x7F0B0A8Cu: goto label_7F0B0A8C;
    case 0x7F0B0A98u: goto label_7F0B0A98;
    case 0x7F0B0AC0u: goto label_7F0B0AC0;
    case 0x7F0B0B18u: goto label_7F0B0B18;
    case 0x7F0B0B34u: goto label_7F0B0B34;
    case 0x7F0B0BC8u: goto label_7F0B0BC8;
    case 0x7F0B0BE8u: goto label_7F0B0BE8;
    case 0x7F0B0BFCu: goto label_7F0B0BFC;
    case 0x7F0B0C14u: goto label_7F0B0C14;
    case 0x7F0B0C20u: goto label_7F0B0C20;
    case 0x7F0B0C3Cu: goto label_7F0B0C3C;
    case 0x7F0B0C58u: goto label_7F0B0C58;
    case 0x7F0B0C78u: goto label_7F0B0C78;
    case 0x7F0B0C8Cu: goto label_7F0B0C8C;
    case 0x7F0B0CA4u: goto label_7F0B0CA4;
    case 0x7F0B0CC4u: goto label_7F0B0CC4;
    case 0x7F0B0CF8u: goto label_7F0B0CF8;
    case 0x7F0B0D08u: goto label_7F0B0D08;
    case 0x7F0B0D20u: goto label_7F0B0D20;
    case 0x7F0B0D40u: goto label_7F0B0D40;
    case 0x7F0B0DBCu: goto label_7F0B0DBC;
    case 0x7F0B0DDCu: goto label_7F0B0DDC;
    case 0x7F0B0DF0u: goto label_7F0B0DF0;
    case 0x7F0B0E08u: goto label_7F0B0E08;
    case 0x7F0B0E14u: goto label_7F0B0E14;
    case 0x7F0B0E30u: goto label_7F0B0E30;
    case 0x7F0B0E40u: goto label_7F0B0E40;
    case 0x7F0B0E68u: goto label_7F0B0E68;
    case 0x7F0B0ED8u: goto label_7F0B0ED8;
    case 0x7F0B0EE0u: goto label_7F0B0EE0;
    case 0x7F0B0EF4u: goto label_7F0B0EF4;
    case 0x7F0B0EFCu: goto label_7F0B0EFC;
    case 0x7F0B0F28u: goto label_7F0B0F28;
    case 0x7F0B0F4Cu: goto label_7F0B0F4C;
    case 0x7F0B0F54u: goto label_7F0B0F54;
    case 0x7F0B0F60u: goto label_7F0B0F60;
    case 0x7F0B0F68u: goto label_7F0B0F68;
    case 0x7F0B0F90u: goto label_7F0B0F90;
    case 0x7F0B0F98u: goto label_7F0B0F98;
    case 0x7F0B0FACu: goto label_7F0B0FAC;
    case 0x7F0B0FC0u: goto label_7F0B0FC0;
    case 0x7F0B0FD8u: goto label_7F0B0FD8;
    case 0x7F0B0FF8u: goto label_7F0B0FF8;
    case 0x7F0B100Cu: goto label_7F0B100C;
    case 0x7F0B103Cu: goto label_7F0B103C;
    case 0x7F0B108Cu: goto label_7F0B108C;
    case 0x7F0B10ACu: goto label_7F0B10AC;
    case 0x7F0B10B4u: goto label_7F0B10B4;
    case 0x7F0B10BCu: goto label_7F0B10BC;
    case 0x7F0B10C4u: goto label_7F0B10C4;
    case 0x7F0B10CCu: goto label_7F0B10CC;
    case 0x7F0B10D4u: goto label_7F0B10D4;
    case 0x7F0B10DCu: goto label_7F0B10DC;
    case 0x7F0B10ECu: goto label_7F0B10EC;
    case 0x7F0B10FCu: goto label_7F0B10FC;
    case 0x7F0B1268u: goto label_7F0B1268;
    case 0x7F0B1278u: goto label_7F0B1278;
    case 0x7F0B12DCu: goto label_7F0B12DC;
    case 0x7F0B133Cu: goto label_7F0B133C;
    case 0x7F0B1354u: goto label_7F0B1354;
    case 0x7F0B1360u: goto label_7F0B1360;
    case 0x7F0B1394u: goto label_7F0B1394;
    case 0x7F0B13A4u: goto label_7F0B13A4;
    case 0x7F0B13BCu: goto label_7F0B13BC;
    case 0x7F0B13CCu: goto label_7F0B13CC;
    case 0x7F0B143Cu: goto label_7F0B143C;
    case 0x7F0B1460u: goto label_7F0B1460;
    case 0x7F0B1474u: goto label_7F0B1474;
    case 0x7F0B148Cu: goto label_7F0B148C;
    case 0x7F0B1498u: goto label_7F0B1498;
    case 0x7F0B14A0u: goto label_7F0B14A0;
    case 0x7F0B1508u: goto label_7F0B1508;
    case 0x7F0B1514u: goto label_7F0B1514;
    case 0x7F0B151Cu: goto label_7F0B151C;
    case 0x7F0B1548u: goto label_7F0B1548;
    case 0x7F0B1554u: goto label_7F0B1554;
    case 0x7F0B1558u: goto label_7F0B1558;
    case 0x7F0B1564u: goto label_7F0B1564;
    case 0x7F0B157Cu: goto label_7F0B157C;
    case 0x7F0B1588u: goto label_7F0B1588;
    case 0x7F0B1594u: goto label_7F0B1594;
    case 0x7F0B15ACu: goto label_7F0B15AC;
    case 0x7F0B15B8u: goto label_7F0B15B8;
    case 0x7F0B15C4u: goto label_7F0B15C4;
    case 0x7F0B15D8u: goto label_7F0B15D8;
    case 0x7F0B15E4u: goto label_7F0B15E4;
    case 0x7F0B1620u: goto label_7F0B1620;
    case 0x7F0B162Cu: goto label_7F0B162C;
    case 0x7F0B1638u: goto label_7F0B1638;
    case 0x7F0B1670u: goto label_7F0B1670;
    case 0x7F0B167Cu: goto label_7F0B167C;
    case 0x7F0B1688u: goto label_7F0B1688;
    case 0x7F0B16B0u: goto label_7F0B16B0;
    case 0x7F0B16BCu: goto label_7F0B16BC;
    case 0x7F0B16C0u: goto label_7F0B16C0;
    case 0x7F0B16CCu: goto label_7F0B16CC;
    case 0x7F0B16E0u: goto label_7F0B16E0;
    case 0x7F0B16ECu: goto label_7F0B16EC;
    case 0x7F0B17BCu: goto label_7F0B17BC;
    case 0x7F0B1800u: goto label_7F0B1800;
    case 0x7F0B181Cu: goto label_7F0B181C;
    case 0x7F0B182Cu: goto label_7F0B182C;
    case 0x7F0B183Cu: goto label_7F0B183C;
    case 0x7F0B1914u: goto label_7F0B1914;
    case 0x7F0B1924u: goto label_7F0B1924;
    case 0x7F0B1934u: goto label_7F0B1934;
    case 0x7F0B1944u: goto label_7F0B1944;
    case 0x7F0B195Cu: goto label_7F0B195C;
    case 0x7F0B1968u: goto label_7F0B1968;
    case 0x7F0B1978u: goto label_7F0B1978;
    case 0x7F0B1988u: goto label_7F0B1988;
    case 0x7F0B1998u: goto label_7F0B1998;
    case 0x7F0B19BCu: goto label_7F0B19BC;
    case 0x7F0B1B5Cu: goto label_7F0B1B5C;
    case 0x7F0B1B6Cu: goto label_7F0B1B6C;
    case 0x7F0B1B7Cu: goto label_7F0B1B7C;
    case 0x7F0B1B84u: goto label_7F0B1B84;
    case 0x7F0B1E54u: goto label_7F0B1E54;
    case 0x7F0B1E64u: goto label_7F0B1E64;
    case 0x7F0B1E8Cu: goto label_7F0B1E8C;
    case 0x7F0B1E9Cu: goto label_7F0B1E9C;
    case 0x7F0B1EC0u: goto label_7F0B1EC0;
    case 0x7F0B1EC8u: goto label_7F0B1EC8;
    case 0x7F0B1EE0u: goto label_7F0B1EE0;
    case 0x7F0B1F64u: goto label_7F0B1F64;
    case 0x7F0B1F80u: goto label_7F0B1F80;
    case 0x7F0B1F9Cu: goto label_7F0B1F9C;
    case 0x7F0B1FB8u: goto label_7F0B1FB8;
    case 0x7F0B1FD4u: goto label_7F0B1FD4;
    case 0x7F0B1FF0u: goto label_7F0B1FF0;
    case 0x7F0B200Cu: goto label_7F0B200C;
    case 0x7F0B2028u: goto label_7F0B2028;
    case 0x7F0B2044u: goto label_7F0B2044;
    case 0x7F0B2060u: goto label_7F0B2060;
    case 0x7F0B207Cu: goto label_7F0B207C;
    case 0x7F0B2098u: goto label_7F0B2098;
    case 0x7F0B20B4u: goto label_7F0B20B4;
    case 0x7F0B20D0u: goto label_7F0B20D0;
    case 0x7F0B20FCu: goto label_7F0B20FC;
    case 0x7F0B2104u: goto label_7F0B2104;
    case 0x7F0B210Cu: goto label_7F0B210C;
    case 0x7F0B2114u: goto label_7F0B2114;
    case 0x7F0B211Cu: goto label_7F0B211C;
    case 0x7F0B2124u: goto label_7F0B2124;
    case 0x7F0B212Cu: goto label_7F0B212C;
    case 0x7F0B2134u: goto label_7F0B2134;
    case 0x7F0B213Cu: goto label_7F0B213C;
    case 0x7F0B2144u: goto label_7F0B2144;
    case 0x7F0B214Cu: goto label_7F0B214C;
    case 0x7F0B2154u: goto label_7F0B2154;
    case 0x7F0B215Cu: goto label_7F0B215C;
    case 0x7F0B2290u: goto label_7F0B2290;
    case 0x7F0B229Cu: goto label_7F0B229C;
    case 0x7F0B22A4u: goto label_7F0B22A4;
    case 0x7F0B22D0u: goto label_7F0B22D0;
    case 0x7F0B235Cu: goto label_7F0B235C;
    case 0x7F0B236Cu: goto label_7F0B236C;
    case 0x7F0B2380u: goto label_7F0B2380;
    case 0x7F0B2388u: goto label_7F0B2388;
    case 0x7F0B239Cu: goto label_7F0B239C;
    case 0x7F0B23ACu: goto label_7F0B23AC;
    case 0x7F0B23C0u: goto label_7F0B23C0;
    case 0x7F0B2420u: goto label_7F0B2420;
    case 0x7F0B2430u: goto label_7F0B2430;
    case 0x7F0B2494u: goto label_7F0B2494;
    case 0x7F0B2524u: goto label_7F0B2524;
    case 0x7F0B25C8u: goto label_7F0B25C8;
    case 0x7F0B26E0u: goto label_7F0B26E0;
    case 0x7F0B26FCu: goto label_7F0B26FC;
    case 0x7F0B2708u: goto label_7F0B2708;
    case 0x7F0B2764u: goto label_7F0B2764;
    case 0x7F0B2798u: goto label_7F0B2798;
    case 0x7F0B27A0u: goto label_7F0B27A0;
    case 0x7F0B27B4u: goto label_7F0B27B4;
    case 0x7F0B27F8u: goto label_7F0B27F8;
    case 0x7F0B2808u: goto label_7F0B2808;
    case 0x7F0B2844u: goto label_7F0B2844;
    case 0x7F0B2854u: goto label_7F0B2854;
    case 0x7F0B2898u: goto label_7F0B2898;
    case 0x7F0B28A8u: goto label_7F0B28A8;
    case 0x7F0B28F4u: goto label_7F0B28F4;
    case 0x7F0B2908u: goto label_7F0B2908;
    case 0x7F0B291Cu: goto label_7F0B291C;
    case 0x7F0B295Cu: goto label_7F0B295C;
    case 0x7F0B2970u: goto label_7F0B2970;
    case 0x7F0B2984u: goto label_7F0B2984;
    case 0x7F0B29D4u: goto label_7F0B29D4;
    case 0x7F0B29F8u: goto label_7F0B29F8;
    case 0x7F0B2A10u: goto label_7F0B2A10;
    case 0x7F0B2B94u: goto label_7F0B2B94;
    case 0x7F0B2BB8u: goto label_7F0B2BB8;
    case 0x7F0B2BD0u: goto label_7F0B2BD0;
    case 0x7F0B2DA0u: goto label_7F0B2DA0;
    case 0x7F0B2DC8u: goto label_7F0B2DC8;
    case 0x7F0B2DF0u: goto label_7F0B2DF0;
    case 0x7F0B2EE4u: goto label_7F0B2EE4;
    case 0x7F0B2EF4u: goto label_7F0B2EF4;
    case 0x7F0B2F00u: goto label_7F0B2F00;
    case 0x7F0B2F08u: goto label_7F0B2F08;
    case 0x7F0B2F14u: goto label_7F0B2F14;
    case 0x7F0B2F1Cu: goto label_7F0B2F1C;
    case 0x7F0B2F44u: goto label_7F0B2F44;
    case 0x7F0B2F50u: goto label_7F0B2F50;
    case 0x7F0B2F90u: goto label_7F0B2F90;
    case 0x7F0B2F98u: goto label_7F0B2F98;
    case 0x7F0B2FACu: goto label_7F0B2FAC;
    case 0x7F0B2FC4u: goto label_7F0B2FC4;
    case 0x7F0B2FD0u: goto label_7F0B2FD0;
    case 0x7F0B2FE4u: goto label_7F0B2FE4;
    case 0x7F0B30C4u: goto label_7F0B30C4;
    case 0x7F0B30CCu: goto label_7F0B30CC;
    case 0x7F0B3138u: goto label_7F0B3138;
    case 0x7F0B3140u: goto label_7F0B3140;
    case 0x7F0B3150u: goto label_7F0B3150;
    case 0x7F0B3158u: goto label_7F0B3158;
    case 0x7F0B3160u: goto label_7F0B3160;
    case 0x7F0B3168u: goto label_7F0B3168;
    case 0x7F0B3170u: goto label_7F0B3170;
    case 0x7F0B3178u: goto label_7F0B3178;
    case 0x7F0B31BCu: goto label_7F0B31BC;
    case 0x7F0B3210u: goto label_7F0B3210;
    case 0x7F0B322Cu: goto label_7F0B322C;
    case 0x7F0B3234u: goto label_7F0B3234;
    case 0x7F0B3240u: goto label_7F0B3240;
    case 0x7F0B3250u: goto label_7F0B3250;
    case 0x7F0B3264u: goto label_7F0B3264;
    case 0x7F0B327Cu: goto label_7F0B327C;
    case 0x7F0B3288u: goto label_7F0B3288;
    case 0x7F0B3290u: goto label_7F0B3290;
    case 0x7F0B32D8u: goto label_7F0B32D8;
    case 0x7F0B32E4u: goto label_7F0B32E4;
    case 0x7F0B32FCu: goto label_7F0B32FC;
    case 0x7F0B3308u: goto label_7F0B3308;
    case 0x7F0B3328u: goto label_7F0B3328;
    case 0x7F0B3334u: goto label_7F0B3334;
    case 0x7F0B334Cu: goto label_7F0B334C;
    case 0x7F0B3364u: goto label_7F0B3364;
    case 0x7F0B337Cu: goto label_7F0B337C;
    case 0x7F0B3384u: goto label_7F0B3384;
    case 0x7F0B338Cu: goto label_7F0B338C;
    case 0x7F0B339Cu: goto label_7F0B339C;
    case 0x7F0B33A8u: goto label_7F0B33A8;
    case 0x7F0B33ACu: goto label_7F0B33AC;
    case 0x7F0B33C4u: goto label_7F0B33C4;
    case 0x7F0B33D0u: goto label_7F0B33D0;
    case 0x7F0B33D4u: goto label_7F0B33D4;
    case 0x7F0B3418u: goto label_7F0B3418;
    case 0x7F0B349Cu: goto label_7F0B349C;
    case 0x7F0B34A4u: goto label_7F0B34A4;
    case 0x7F0B34BCu: goto label_7F0B34BC;
    case 0x7F0B34D0u: goto label_7F0B34D0;
    case 0x7F0B34DCu: goto label_7F0B34DC;
    case 0x7F0B34E8u: goto label_7F0B34E8;
    case 0x7F0B34F8u: goto label_7F0B34F8;
    case 0x7F0B3510u: goto label_7F0B3510;
    case 0x7F0B35A8u: goto label_7F0B35A8;
    case 0x7F0B35C4u: goto label_7F0B35C4;
    case 0x7F0B35FCu: goto label_7F0B35FC;
    case 0x7F0B360Cu: goto label_7F0B360C;
    case 0x7F0B3630u: goto label_7F0B3630;
    case 0x7F0B363Cu: goto label_7F0B363C;
    case 0x7F0B3720u: goto label_7F0B3720;
    case 0x7F0B3770u: goto label_7F0B3770;
    case 0x7F0B37B8u: goto label_7F0B37B8;
    case 0x7F0B37F4u: goto label_7F0B37F4;
    case 0x7F0B3800u: goto label_7F0B3800;
    case 0x7F0B381Cu: goto label_7F0B381C;
    case 0x7F0B384Cu: goto label_7F0B384C;
    case 0x7F0B389Cu: goto label_7F0B389C;
    case 0x7F0B38B4u: goto label_7F0B38B4;
    case 0x7F0B38CCu: goto label_7F0B38CC;
    case 0x7F0B3900u: goto label_7F0B3900;
    case 0x7F0B391Cu: goto label_7F0B391C;
    case 0x7F0B3938u: goto label_7F0B3938;
    case 0x7F0B3964u: goto label_7F0B3964;
    case 0x7F0B39A0u: goto label_7F0B39A0;
    case 0x7F0B3A9Cu: goto label_7F0B3A9C;
    case 0x7F0B3AA8u: goto label_7F0B3AA8;
    case 0x7F0B3AF8u: goto label_7F0B3AF8;
    case 0x7F0B3B3Cu: goto label_7F0B3B3C;
    case 0x7F0B3BF0u: goto label_7F0B3BF0;
    case 0x7F0B3C40u: goto label_7F0B3C40;
    case 0x7F0B3CBCu: goto label_7F0B3CBC;
    case 0x7F0B3CCCu: goto label_7F0B3CCC;
    case 0x7F0B3D10u: goto label_7F0B3D10;
    case 0x7F0B3D40u: goto label_7F0B3D40;
    case 0x7F0B3D8Cu: goto label_7F0B3D8C;
    case 0x7F0B3E3Cu: goto label_7F0B3E3C;
    case 0x7F0B3E68u: goto label_7F0B3E68;
    case 0x7F0B3F1Cu: goto label_7F0B3F1C;
    case 0x7F0B3F40u: goto label_7F0B3F40;
    case 0x7F0B3F6Cu: goto label_7F0B3F6C;
    case 0x7F0B3F7Cu: goto label_7F0B3F7C;
    case 0x7F0B3FCCu: goto label_7F0B3FCC;
    case 0x7F0B3FECu: goto label_7F0B3FEC;
    case 0x7F0B4030u: goto label_7F0B4030;
    case 0x7F0B4040u: goto label_7F0B4040;
    case 0x7F0B4054u: goto label_7F0B4054;
    case 0x7F0B4064u: goto label_7F0B4064;
    case 0x7F0B4074u: goto label_7F0B4074;
    default: return;
    }
}

