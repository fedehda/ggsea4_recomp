// DolRecomp output
#include "../generated.h"

static void loop_7F310CD4(CPUState* ctx) {
label_7F310CD4:
    ctx->downcount -= 7;
    // 7F310CD4: addis   r4, r3, 3
    ctx->gpr[4] = ctx->gpr[3] + ((u32)(s32)(3) << 16);

    // 7F310CD8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F310CDC: addi    r4, r4, -25676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25676);

    ctx->pc = 0x7F310CE0u;
    // 7F310CE0: lwzx    r4, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F310CE4u;
    // 7F310CE4: lwz     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F310CE8u;
    // 7F310CE8: stw     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F310CEC: bc    16, 0, 0x7F310CD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310CD4u;
                return;
            }
            goto label_7F310CD4;
        }
    }

    ctx->pc = 0x7F310CF0u;
}

static void loop_7F3121FC(CPUState* ctx) {
label_7F3121FC:
    ctx->downcount -= 4;
    // 7F3121FC: addi    r0, r6, 6
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(6);

    // 7F312200: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    ctx->pc = 0x7F312204u;
    // 7F312204: stbx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    // 7F312208: bc    16, 0, 0x7F3121FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3121FCu;
                return;
            }
            goto label_7F3121FC;
        }
    }

    ctx->pc = 0x7F31220Cu;
}

static void loop_7F3128B0(CPUState* ctx) {
label_7F3128B0:
    ctx->downcount -= 4;
    // 7F3128B0: addi    r0, r5, 6
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(6);

    // 7F3128B4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    ctx->pc = 0x7F3128B8u;
    // 7F3128B8: stbx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    // 7F3128BC: bc    16, 0, 0x7F3128B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3128B0u;
                return;
            }
            goto label_7F3128B0;
        }
    }

    ctx->pc = 0x7F3128C0u;
}

void func_7F3100EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3100ECu: goto label_7F3100EC;
    case 0x7F3100F0u: goto label_7F3100F0;
    case 0x7F3100F4u: goto label_7F3100F4;
    case 0x7F3100F8u: goto label_7F3100F8;
    case 0x7F3100FCu: goto label_7F3100FC;
    case 0x7F310100u: goto label_7F310100;
    case 0x7F310104u: goto label_7F310104;
    case 0x7F310108u: goto label_7F310108;
    case 0x7F31010Cu: goto label_7F31010C;
    case 0x7F310110u: goto label_7F310110;
    case 0x7F310114u: goto label_7F310114;
    case 0x7F310118u: goto label_7F310118;
    case 0x7F31011Cu: goto label_7F31011C;
    case 0x7F310120u: goto label_7F310120;
    case 0x7F310124u: goto label_7F310124;
    case 0x7F310128u: goto label_7F310128;
    case 0x7F31012Cu: goto label_7F31012C;
    case 0x7F310130u: goto label_7F310130;
    case 0x7F310134u: goto label_7F310134;
    case 0x7F310138u: goto label_7F310138;
    case 0x7F31013Cu: goto label_7F31013C;
    case 0x7F310140u: goto label_7F310140;
    case 0x7F310144u: goto label_7F310144;
    case 0x7F310148u: goto label_7F310148;
    case 0x7F31014Cu: goto label_7F31014C;
    case 0x7F310150u: goto label_7F310150;
    case 0x7F310154u: goto label_7F310154;
    case 0x7F310158u: goto label_7F310158;
    case 0x7F31015Cu: goto label_7F31015C;
    case 0x7F310160u: goto label_7F310160;
    case 0x7F310164u: goto label_7F310164;
    case 0x7F310168u: goto label_7F310168;
    case 0x7F31016Cu: goto label_7F31016C;
    case 0x7F310170u: goto label_7F310170;
    case 0x7F310174u: goto label_7F310174;
    case 0x7F310178u: goto label_7F310178;
    case 0x7F31017Cu: goto label_7F31017C;
    case 0x7F310180u: goto label_7F310180;
    case 0x7F310184u: goto label_7F310184;
    case 0x7F310188u: goto label_7F310188;
    case 0x7F31018Cu: goto label_7F31018C;
    case 0x7F310190u: goto label_7F310190;
    case 0x7F310194u: goto label_7F310194;
    case 0x7F310198u: goto label_7F310198;
    case 0x7F31019Cu: goto label_7F31019C;
    case 0x7F3101A0u: goto label_7F3101A0;
    case 0x7F3101A4u: goto label_7F3101A4;
    case 0x7F3101A8u: goto label_7F3101A8;
    case 0x7F3101ACu: goto label_7F3101AC;
    case 0x7F3101B0u: goto label_7F3101B0;
    case 0x7F3101B4u: goto label_7F3101B4;
    case 0x7F3101B8u: goto label_7F3101B8;
    case 0x7F3101BCu: goto label_7F3101BC;
    case 0x7F3101C0u: goto label_7F3101C0;
    case 0x7F3101C4u: goto label_7F3101C4;
    case 0x7F3101C8u: goto label_7F3101C8;
    case 0x7F3101CCu: goto label_7F3101CC;
    case 0x7F3101D0u: goto label_7F3101D0;
    case 0x7F3101D4u: goto label_7F3101D4;
    case 0x7F3101D8u: goto label_7F3101D8;
    case 0x7F3101DCu: goto label_7F3101DC;
    case 0x7F3101E0u: goto label_7F3101E0;
    case 0x7F3101E4u: goto label_7F3101E4;
    case 0x7F3101E8u: goto label_7F3101E8;
    case 0x7F3101ECu: goto label_7F3101EC;
    case 0x7F3101F0u: goto label_7F3101F0;
    case 0x7F3101F4u: goto label_7F3101F4;
    case 0x7F3101F8u: goto label_7F3101F8;
    case 0x7F3101FCu: goto label_7F3101FC;
    case 0x7F310200u: goto label_7F310200;
    case 0x7F310204u: goto label_7F310204;
    case 0x7F310208u: goto label_7F310208;
    case 0x7F31020Cu: goto label_7F31020C;
    case 0x7F310210u: goto label_7F310210;
    case 0x7F310214u: goto label_7F310214;
    case 0x7F310218u: goto label_7F310218;
    case 0x7F31021Cu: goto label_7F31021C;
    case 0x7F310220u: goto label_7F310220;
    case 0x7F310224u: goto label_7F310224;
    case 0x7F310228u: goto label_7F310228;
    case 0x7F31022Cu: goto label_7F31022C;
    case 0x7F310230u: goto label_7F310230;
    case 0x7F310234u: goto label_7F310234;
    case 0x7F310238u: goto label_7F310238;
    case 0x7F31023Cu: goto label_7F31023C;
    case 0x7F310240u: goto label_7F310240;
    case 0x7F310244u: goto label_7F310244;
    case 0x7F310248u: goto label_7F310248;
    case 0x7F31024Cu: goto label_7F31024C;
    case 0x7F310250u: goto label_7F310250;
    case 0x7F310254u: goto label_7F310254;
    case 0x7F310258u: goto label_7F310258;
    case 0x7F31025Cu: goto label_7F31025C;
    case 0x7F310260u: goto label_7F310260;
    case 0x7F310264u: goto label_7F310264;
    case 0x7F310268u: goto label_7F310268;
    case 0x7F31026Cu: goto label_7F31026C;
    case 0x7F310270u: goto label_7F310270;
    case 0x7F310274u: goto label_7F310274;
    case 0x7F310278u: goto label_7F310278;
    case 0x7F31027Cu: goto label_7F31027C;
    case 0x7F310280u: goto label_7F310280;
    case 0x7F310284u: goto label_7F310284;
    case 0x7F310288u: goto label_7F310288;
    case 0x7F31028Cu: goto label_7F31028C;
    case 0x7F310290u: goto label_7F310290;
    case 0x7F310294u: goto label_7F310294;
    case 0x7F310298u: goto label_7F310298;
    case 0x7F31029Cu: goto label_7F31029C;
    case 0x7F3102A0u: goto label_7F3102A0;
    case 0x7F3102A4u: goto label_7F3102A4;
    case 0x7F3102A8u: goto label_7F3102A8;
    case 0x7F3102ACu: goto label_7F3102AC;
    case 0x7F3102B0u: goto label_7F3102B0;
    case 0x7F3102B4u: goto label_7F3102B4;
    case 0x7F3102B8u: goto label_7F3102B8;
    case 0x7F3102BCu: goto label_7F3102BC;
    case 0x7F3102C0u: goto label_7F3102C0;
    case 0x7F3102C4u: goto label_7F3102C4;
    case 0x7F3102C8u: goto label_7F3102C8;
    case 0x7F3102CCu: goto label_7F3102CC;
    case 0x7F3102D0u: goto label_7F3102D0;
    case 0x7F3102D4u: goto label_7F3102D4;
    case 0x7F3102D8u: goto label_7F3102D8;
    case 0x7F3102DCu: goto label_7F3102DC;
    case 0x7F3102E0u: goto label_7F3102E0;
    case 0x7F3102E4u: goto label_7F3102E4;
    case 0x7F3102E8u: goto label_7F3102E8;
    case 0x7F3102ECu: goto label_7F3102EC;
    case 0x7F3102F0u: goto label_7F3102F0;
    case 0x7F3102F4u: goto label_7F3102F4;
    case 0x7F3102F8u: goto label_7F3102F8;
    case 0x7F3102FCu: goto label_7F3102FC;
    case 0x7F310300u: goto label_7F310300;
    case 0x7F310304u: goto label_7F310304;
    case 0x7F310308u: goto label_7F310308;
    case 0x7F31030Cu: goto label_7F31030C;
    case 0x7F310310u: goto label_7F310310;
    case 0x7F310314u: goto label_7F310314;
    case 0x7F310318u: goto label_7F310318;
    case 0x7F31031Cu: goto label_7F31031C;
    case 0x7F310320u: goto label_7F310320;
    case 0x7F310324u: goto label_7F310324;
    case 0x7F310328u: goto label_7F310328;
    case 0x7F31032Cu: goto label_7F31032C;
    case 0x7F310330u: goto label_7F310330;
    case 0x7F310334u: goto label_7F310334;
    case 0x7F310338u: goto label_7F310338;
    case 0x7F31033Cu: goto label_7F31033C;
    case 0x7F310340u: goto label_7F310340;
    case 0x7F310344u: goto label_7F310344;
    case 0x7F310348u: goto label_7F310348;
    case 0x7F31034Cu: goto label_7F31034C;
    case 0x7F310350u: goto label_7F310350;
    case 0x7F310354u: goto label_7F310354;
    case 0x7F310358u: goto label_7F310358;
    case 0x7F31035Cu: goto label_7F31035C;
    case 0x7F310360u: goto label_7F310360;
    case 0x7F310364u: goto label_7F310364;
    case 0x7F310368u: goto label_7F310368;
    case 0x7F31036Cu: goto label_7F31036C;
    case 0x7F310370u: goto label_7F310370;
    case 0x7F310374u: goto label_7F310374;
    case 0x7F310378u: goto label_7F310378;
    case 0x7F31037Cu: goto label_7F31037C;
    case 0x7F310380u: goto label_7F310380;
    case 0x7F310384u: goto label_7F310384;
    case 0x7F310388u: goto label_7F310388;
    case 0x7F31038Cu: goto label_7F31038C;
    case 0x7F310390u: goto label_7F310390;
    case 0x7F310394u: goto label_7F310394;
    case 0x7F310398u: goto label_7F310398;
    case 0x7F31039Cu: goto label_7F31039C;
    case 0x7F3103A0u: goto label_7F3103A0;
    case 0x7F3103A4u: goto label_7F3103A4;
    case 0x7F3103A8u: goto label_7F3103A8;
    case 0x7F3103ACu: goto label_7F3103AC;
    case 0x7F3103B0u: goto label_7F3103B0;
    case 0x7F3103B4u: goto label_7F3103B4;
    case 0x7F3103B8u: goto label_7F3103B8;
    case 0x7F3103BCu: goto label_7F3103BC;
    case 0x7F3103C0u: goto label_7F3103C0;
    case 0x7F3103C4u: goto label_7F3103C4;
    case 0x7F3103C8u: goto label_7F3103C8;
    case 0x7F3103CCu: goto label_7F3103CC;
    case 0x7F3103D0u: goto label_7F3103D0;
    case 0x7F3103D4u: goto label_7F3103D4;
    case 0x7F3103D8u: goto label_7F3103D8;
    case 0x7F3103DCu: goto label_7F3103DC;
    case 0x7F3103E0u: goto label_7F3103E0;
    case 0x7F3103E4u: goto label_7F3103E4;
    case 0x7F3103E8u: goto label_7F3103E8;
    case 0x7F3103ECu: goto label_7F3103EC;
    case 0x7F3103F0u: goto label_7F3103F0;
    case 0x7F3103F4u: goto label_7F3103F4;
    case 0x7F3103F8u: goto label_7F3103F8;
    case 0x7F3103FCu: goto label_7F3103FC;
    case 0x7F310400u: goto label_7F310400;
    case 0x7F310404u: goto label_7F310404;
    case 0x7F310408u: goto label_7F310408;
    case 0x7F31040Cu: goto label_7F31040C;
    case 0x7F310410u: goto label_7F310410;
    case 0x7F310414u: goto label_7F310414;
    case 0x7F310418u: goto label_7F310418;
    case 0x7F31041Cu: goto label_7F31041C;
    case 0x7F310420u: goto label_7F310420;
    case 0x7F310424u: goto label_7F310424;
    case 0x7F310428u: goto label_7F310428;
    case 0x7F31042Cu: goto label_7F31042C;
    case 0x7F310430u: goto label_7F310430;
    case 0x7F310434u: goto label_7F310434;
    case 0x7F310438u: goto label_7F310438;
    case 0x7F31043Cu: goto label_7F31043C;
    case 0x7F310440u: goto label_7F310440;
    case 0x7F310444u: goto label_7F310444;
    case 0x7F310448u: goto label_7F310448;
    case 0x7F31044Cu: goto label_7F31044C;
    case 0x7F310450u: goto label_7F310450;
    case 0x7F310454u: goto label_7F310454;
    case 0x7F310458u: goto label_7F310458;
    case 0x7F31045Cu: goto label_7F31045C;
    case 0x7F310460u: goto label_7F310460;
    case 0x7F310464u: goto label_7F310464;
    case 0x7F310468u: goto label_7F310468;
    case 0x7F31046Cu: goto label_7F31046C;
    case 0x7F310470u: goto label_7F310470;
    case 0x7F310474u: goto label_7F310474;
    case 0x7F310478u: goto label_7F310478;
    case 0x7F31047Cu: goto label_7F31047C;
    case 0x7F310480u: goto label_7F310480;
    case 0x7F310484u: goto label_7F310484;
    case 0x7F310488u: goto label_7F310488;
    case 0x7F31048Cu: goto label_7F31048C;
    case 0x7F310490u: goto label_7F310490;
    case 0x7F310494u: goto label_7F310494;
    case 0x7F310498u: goto label_7F310498;
    case 0x7F31049Cu: goto label_7F31049C;
    case 0x7F3104A0u: goto label_7F3104A0;
    case 0x7F3104A4u: goto label_7F3104A4;
    case 0x7F3104A8u: goto label_7F3104A8;
    case 0x7F3104ACu: goto label_7F3104AC;
    case 0x7F3104B0u: goto label_7F3104B0;
    case 0x7F3104B4u: goto label_7F3104B4;
    case 0x7F3104B8u: goto label_7F3104B8;
    case 0x7F3104BCu: goto label_7F3104BC;
    case 0x7F3104C0u: goto label_7F3104C0;
    case 0x7F3104C4u: goto label_7F3104C4;
    case 0x7F3104C8u: goto label_7F3104C8;
    case 0x7F3104CCu: goto label_7F3104CC;
    case 0x7F3104D0u: goto label_7F3104D0;
    case 0x7F3104D4u: goto label_7F3104D4;
    case 0x7F3104D8u: goto label_7F3104D8;
    case 0x7F3104DCu: goto label_7F3104DC;
    case 0x7F3104E0u: goto label_7F3104E0;
    case 0x7F3104E4u: goto label_7F3104E4;
    case 0x7F3104E8u: goto label_7F3104E8;
    case 0x7F3104ECu: goto label_7F3104EC;
    case 0x7F3104F0u: goto label_7F3104F0;
    case 0x7F3104F4u: goto label_7F3104F4;
    case 0x7F3104F8u: goto label_7F3104F8;
    case 0x7F3104FCu: goto label_7F3104FC;
    case 0x7F310500u: goto label_7F310500;
    case 0x7F310504u: goto label_7F310504;
    case 0x7F310508u: goto label_7F310508;
    case 0x7F31050Cu: goto label_7F31050C;
    case 0x7F310510u: goto label_7F310510;
    case 0x7F310514u: goto label_7F310514;
    case 0x7F310518u: goto label_7F310518;
    case 0x7F31051Cu: goto label_7F31051C;
    case 0x7F310520u: goto label_7F310520;
    case 0x7F310524u: goto label_7F310524;
    case 0x7F310528u: goto label_7F310528;
    case 0x7F31052Cu: goto label_7F31052C;
    case 0x7F310530u: goto label_7F310530;
    case 0x7F310534u: goto label_7F310534;
    case 0x7F310538u: goto label_7F310538;
    case 0x7F31053Cu: goto label_7F31053C;
    case 0x7F310540u: goto label_7F310540;
    case 0x7F310544u: goto label_7F310544;
    case 0x7F310548u: goto label_7F310548;
    case 0x7F31054Cu: goto label_7F31054C;
    case 0x7F310550u: goto label_7F310550;
    case 0x7F310554u: goto label_7F310554;
    case 0x7F310558u: goto label_7F310558;
    case 0x7F31055Cu: goto label_7F31055C;
    case 0x7F310560u: goto label_7F310560;
    case 0x7F310564u: goto label_7F310564;
    case 0x7F310568u: goto label_7F310568;
    case 0x7F31056Cu: goto label_7F31056C;
    case 0x7F310570u: goto label_7F310570;
    case 0x7F310574u: goto label_7F310574;
    case 0x7F310578u: goto label_7F310578;
    case 0x7F31057Cu: goto label_7F31057C;
    case 0x7F310580u: goto label_7F310580;
    case 0x7F310584u: goto label_7F310584;
    case 0x7F310588u: goto label_7F310588;
    case 0x7F31058Cu: goto label_7F31058C;
    case 0x7F310590u: goto label_7F310590;
    case 0x7F310594u: goto label_7F310594;
    case 0x7F310598u: goto label_7F310598;
    case 0x7F31059Cu: goto label_7F31059C;
    case 0x7F3105A0u: goto label_7F3105A0;
    case 0x7F3105A4u: goto label_7F3105A4;
    case 0x7F3105A8u: goto label_7F3105A8;
    case 0x7F3105ACu: goto label_7F3105AC;
    case 0x7F3105B0u: goto label_7F3105B0;
    case 0x7F3105B4u: goto label_7F3105B4;
    case 0x7F3105B8u: goto label_7F3105B8;
    case 0x7F3105BCu: goto label_7F3105BC;
    case 0x7F3105C0u: goto label_7F3105C0;
    case 0x7F3105C4u: goto label_7F3105C4;
    case 0x7F3105C8u: goto label_7F3105C8;
    case 0x7F3105CCu: goto label_7F3105CC;
    case 0x7F3105D0u: goto label_7F3105D0;
    case 0x7F3105D4u: goto label_7F3105D4;
    case 0x7F3105D8u: goto label_7F3105D8;
    case 0x7F3105DCu: goto label_7F3105DC;
    case 0x7F3105E0u: goto label_7F3105E0;
    case 0x7F3105E4u: goto label_7F3105E4;
    case 0x7F3105E8u: goto label_7F3105E8;
    case 0x7F3105ECu: goto label_7F3105EC;
    case 0x7F3105F0u: goto label_7F3105F0;
    case 0x7F3105F4u: goto label_7F3105F4;
    case 0x7F3105F8u: goto label_7F3105F8;
    case 0x7F3105FCu: goto label_7F3105FC;
    case 0x7F310600u: goto label_7F310600;
    case 0x7F310604u: goto label_7F310604;
    case 0x7F310608u: goto label_7F310608;
    case 0x7F31060Cu: goto label_7F31060C;
    case 0x7F310610u: goto label_7F310610;
    case 0x7F310614u: goto label_7F310614;
    case 0x7F310618u: goto label_7F310618;
    case 0x7F31061Cu: goto label_7F31061C;
    case 0x7F310620u: goto label_7F310620;
    case 0x7F310624u: goto label_7F310624;
    case 0x7F310628u: goto label_7F310628;
    case 0x7F31062Cu: goto label_7F31062C;
    case 0x7F310630u: goto label_7F310630;
    case 0x7F310634u: goto label_7F310634;
    case 0x7F310638u: goto label_7F310638;
    case 0x7F31063Cu: goto label_7F31063C;
    case 0x7F310640u: goto label_7F310640;
    case 0x7F310644u: goto label_7F310644;
    case 0x7F310648u: goto label_7F310648;
    case 0x7F31064Cu: goto label_7F31064C;
    case 0x7F310650u: goto label_7F310650;
    case 0x7F310654u: goto label_7F310654;
    case 0x7F310658u: goto label_7F310658;
    case 0x7F31065Cu: goto label_7F31065C;
    case 0x7F310660u: goto label_7F310660;
    case 0x7F310664u: goto label_7F310664;
    case 0x7F310668u: goto label_7F310668;
    case 0x7F31066Cu: goto label_7F31066C;
    case 0x7F310670u: goto label_7F310670;
    case 0x7F310674u: goto label_7F310674;
    case 0x7F310678u: goto label_7F310678;
    case 0x7F31067Cu: goto label_7F31067C;
    case 0x7F310680u: goto label_7F310680;
    case 0x7F310684u: goto label_7F310684;
    case 0x7F310688u: goto label_7F310688;
    case 0x7F31068Cu: goto label_7F31068C;
    case 0x7F310690u: goto label_7F310690;
    case 0x7F310694u: goto label_7F310694;
    case 0x7F310698u: goto label_7F310698;
    case 0x7F31069Cu: goto label_7F31069C;
    case 0x7F3106A0u: goto label_7F3106A0;
    case 0x7F3106A4u: goto label_7F3106A4;
    case 0x7F3106A8u: goto label_7F3106A8;
    case 0x7F3106ACu: goto label_7F3106AC;
    case 0x7F3106B0u: goto label_7F3106B0;
    case 0x7F3106B4u: goto label_7F3106B4;
    case 0x7F3106B8u: goto label_7F3106B8;
    case 0x7F3106BCu: goto label_7F3106BC;
    case 0x7F3106C0u: goto label_7F3106C0;
    case 0x7F3106C4u: goto label_7F3106C4;
    case 0x7F3106C8u: goto label_7F3106C8;
    case 0x7F3106CCu: goto label_7F3106CC;
    case 0x7F3106D0u: goto label_7F3106D0;
    case 0x7F3106D4u: goto label_7F3106D4;
    case 0x7F3106D8u: goto label_7F3106D8;
    case 0x7F3106DCu: goto label_7F3106DC;
    case 0x7F3106E0u: goto label_7F3106E0;
    case 0x7F3106E4u: goto label_7F3106E4;
    case 0x7F3106E8u: goto label_7F3106E8;
    case 0x7F3106ECu: goto label_7F3106EC;
    case 0x7F3106F0u: goto label_7F3106F0;
    case 0x7F3106F4u: goto label_7F3106F4;
    case 0x7F3106F8u: goto label_7F3106F8;
    case 0x7F3106FCu: goto label_7F3106FC;
    case 0x7F310700u: goto label_7F310700;
    case 0x7F310704u: goto label_7F310704;
    case 0x7F310708u: goto label_7F310708;
    case 0x7F31070Cu: goto label_7F31070C;
    case 0x7F310710u: goto label_7F310710;
    case 0x7F310714u: goto label_7F310714;
    case 0x7F310718u: goto label_7F310718;
    case 0x7F31071Cu: goto label_7F31071C;
    case 0x7F310720u: goto label_7F310720;
    case 0x7F310724u: goto label_7F310724;
    case 0x7F310728u: goto label_7F310728;
    case 0x7F31072Cu: goto label_7F31072C;
    case 0x7F310730u: goto label_7F310730;
    case 0x7F310734u: goto label_7F310734;
    case 0x7F310738u: goto label_7F310738;
    case 0x7F31073Cu: goto label_7F31073C;
    case 0x7F310740u: goto label_7F310740;
    case 0x7F310744u: goto label_7F310744;
    case 0x7F310748u: goto label_7F310748;
    case 0x7F31074Cu: goto label_7F31074C;
    case 0x7F310750u: goto label_7F310750;
    case 0x7F310754u: goto label_7F310754;
    case 0x7F310758u: goto label_7F310758;
    case 0x7F31075Cu: goto label_7F31075C;
    case 0x7F310760u: goto label_7F310760;
    case 0x7F310764u: goto label_7F310764;
    case 0x7F310768u: goto label_7F310768;
    case 0x7F31076Cu: goto label_7F31076C;
    case 0x7F310770u: goto label_7F310770;
    case 0x7F310774u: goto label_7F310774;
    case 0x7F310778u: goto label_7F310778;
    case 0x7F31077Cu: goto label_7F31077C;
    case 0x7F310780u: goto label_7F310780;
    case 0x7F310784u: goto label_7F310784;
    case 0x7F310788u: goto label_7F310788;
    case 0x7F31078Cu: goto label_7F31078C;
    case 0x7F310790u: goto label_7F310790;
    case 0x7F310794u: goto label_7F310794;
    case 0x7F310798u: goto label_7F310798;
    case 0x7F31079Cu: goto label_7F31079C;
    case 0x7F3107A0u: goto label_7F3107A0;
    case 0x7F3107A4u: goto label_7F3107A4;
    case 0x7F3107A8u: goto label_7F3107A8;
    case 0x7F3107ACu: goto label_7F3107AC;
    case 0x7F3107B0u: goto label_7F3107B0;
    case 0x7F3107B4u: goto label_7F3107B4;
    case 0x7F3107B8u: goto label_7F3107B8;
    case 0x7F3107BCu: goto label_7F3107BC;
    case 0x7F3107C0u: goto label_7F3107C0;
    case 0x7F3107C4u: goto label_7F3107C4;
    case 0x7F3107C8u: goto label_7F3107C8;
    case 0x7F3107CCu: goto label_7F3107CC;
    case 0x7F3107D0u: goto label_7F3107D0;
    case 0x7F3107D4u: goto label_7F3107D4;
    case 0x7F3107D8u: goto label_7F3107D8;
    case 0x7F3107DCu: goto label_7F3107DC;
    case 0x7F3107E0u: goto label_7F3107E0;
    case 0x7F3107E4u: goto label_7F3107E4;
    case 0x7F3107E8u: goto label_7F3107E8;
    case 0x7F3107ECu: goto label_7F3107EC;
    case 0x7F3107F0u: goto label_7F3107F0;
    case 0x7F3107F4u: goto label_7F3107F4;
    case 0x7F3107F8u: goto label_7F3107F8;
    case 0x7F3107FCu: goto label_7F3107FC;
    case 0x7F310800u: goto label_7F310800;
    case 0x7F310804u: goto label_7F310804;
    case 0x7F310808u: goto label_7F310808;
    case 0x7F31080Cu: goto label_7F31080C;
    case 0x7F310810u: goto label_7F310810;
    case 0x7F310814u: goto label_7F310814;
    case 0x7F310818u: goto label_7F310818;
    case 0x7F31081Cu: goto label_7F31081C;
    case 0x7F310820u: goto label_7F310820;
    case 0x7F310824u: goto label_7F310824;
    case 0x7F310828u: goto label_7F310828;
    case 0x7F31082Cu: goto label_7F31082C;
    case 0x7F310830u: goto label_7F310830;
    case 0x7F310834u: goto label_7F310834;
    case 0x7F310838u: goto label_7F310838;
    case 0x7F31083Cu: goto label_7F31083C;
    case 0x7F310840u: goto label_7F310840;
    case 0x7F310844u: goto label_7F310844;
    case 0x7F310848u: goto label_7F310848;
    case 0x7F31084Cu: goto label_7F31084C;
    case 0x7F310850u: goto label_7F310850;
    case 0x7F310854u: goto label_7F310854;
    case 0x7F310858u: goto label_7F310858;
    case 0x7F31085Cu: goto label_7F31085C;
    case 0x7F310860u: goto label_7F310860;
    case 0x7F310864u: goto label_7F310864;
    case 0x7F310868u: goto label_7F310868;
    case 0x7F31086Cu: goto label_7F31086C;
    case 0x7F310870u: goto label_7F310870;
    case 0x7F310874u: goto label_7F310874;
    case 0x7F310878u: goto label_7F310878;
    case 0x7F31087Cu: goto label_7F31087C;
    case 0x7F310880u: goto label_7F310880;
    case 0x7F310884u: goto label_7F310884;
    case 0x7F310888u: goto label_7F310888;
    case 0x7F31088Cu: goto label_7F31088C;
    case 0x7F310890u: goto label_7F310890;
    case 0x7F310894u: goto label_7F310894;
    case 0x7F310898u: goto label_7F310898;
    case 0x7F31089Cu: goto label_7F31089C;
    case 0x7F3108A0u: goto label_7F3108A0;
    case 0x7F3108A4u: goto label_7F3108A4;
    case 0x7F3108A8u: goto label_7F3108A8;
    case 0x7F3108ACu: goto label_7F3108AC;
    case 0x7F3108B0u: goto label_7F3108B0;
    case 0x7F3108B4u: goto label_7F3108B4;
    case 0x7F3108B8u: goto label_7F3108B8;
    case 0x7F3108BCu: goto label_7F3108BC;
    case 0x7F3108C0u: goto label_7F3108C0;
    case 0x7F3108C4u: goto label_7F3108C4;
    case 0x7F3108C8u: goto label_7F3108C8;
    case 0x7F3108CCu: goto label_7F3108CC;
    case 0x7F3108D0u: goto label_7F3108D0;
    case 0x7F3108D4u: goto label_7F3108D4;
    case 0x7F3108D8u: goto label_7F3108D8;
    case 0x7F3108DCu: goto label_7F3108DC;
    case 0x7F3108E0u: goto label_7F3108E0;
    case 0x7F3108E4u: goto label_7F3108E4;
    case 0x7F3108E8u: goto label_7F3108E8;
    case 0x7F3108ECu: goto label_7F3108EC;
    case 0x7F3108F0u: goto label_7F3108F0;
    case 0x7F3108F4u: goto label_7F3108F4;
    case 0x7F3108F8u: goto label_7F3108F8;
    case 0x7F3108FCu: goto label_7F3108FC;
    case 0x7F310900u: goto label_7F310900;
    case 0x7F310904u: goto label_7F310904;
    case 0x7F310908u: goto label_7F310908;
    case 0x7F31090Cu: goto label_7F31090C;
    case 0x7F310910u: goto label_7F310910;
    case 0x7F310914u: goto label_7F310914;
    case 0x7F310918u: goto label_7F310918;
    case 0x7F31091Cu: goto label_7F31091C;
    case 0x7F310920u: goto label_7F310920;
    case 0x7F310924u: goto label_7F310924;
    case 0x7F310928u: goto label_7F310928;
    case 0x7F31092Cu: goto label_7F31092C;
    case 0x7F310930u: goto label_7F310930;
    case 0x7F310934u: goto label_7F310934;
    case 0x7F310938u: goto label_7F310938;
    case 0x7F31093Cu: goto label_7F31093C;
    case 0x7F310940u: goto label_7F310940;
    case 0x7F310944u: goto label_7F310944;
    case 0x7F310948u: goto label_7F310948;
    case 0x7F31094Cu: goto label_7F31094C;
    case 0x7F310950u: goto label_7F310950;
    case 0x7F310954u: goto label_7F310954;
    case 0x7F310958u: goto label_7F310958;
    case 0x7F31095Cu: goto label_7F31095C;
    case 0x7F310960u: goto label_7F310960;
    case 0x7F310964u: goto label_7F310964;
    case 0x7F310968u: goto label_7F310968;
    case 0x7F31096Cu: goto label_7F31096C;
    case 0x7F310970u: goto label_7F310970;
    case 0x7F310974u: goto label_7F310974;
    case 0x7F310978u: goto label_7F310978;
    case 0x7F31097Cu: goto label_7F31097C;
    case 0x7F310980u: goto label_7F310980;
    case 0x7F310984u: goto label_7F310984;
    case 0x7F310988u: goto label_7F310988;
    case 0x7F31098Cu: goto label_7F31098C;
    case 0x7F310990u: goto label_7F310990;
    case 0x7F310994u: goto label_7F310994;
    case 0x7F310998u: goto label_7F310998;
    case 0x7F31099Cu: goto label_7F31099C;
    case 0x7F3109A0u: goto label_7F3109A0;
    case 0x7F3109A4u: goto label_7F3109A4;
    case 0x7F3109A8u: goto label_7F3109A8;
    case 0x7F3109ACu: goto label_7F3109AC;
    case 0x7F3109B0u: goto label_7F3109B0;
    case 0x7F3109B4u: goto label_7F3109B4;
    case 0x7F3109B8u: goto label_7F3109B8;
    case 0x7F3109BCu: goto label_7F3109BC;
    case 0x7F3109C0u: goto label_7F3109C0;
    case 0x7F3109C4u: goto label_7F3109C4;
    case 0x7F3109C8u: goto label_7F3109C8;
    case 0x7F3109CCu: goto label_7F3109CC;
    case 0x7F3109D0u: goto label_7F3109D0;
    case 0x7F3109D4u: goto label_7F3109D4;
    case 0x7F3109D8u: goto label_7F3109D8;
    case 0x7F3109DCu: goto label_7F3109DC;
    case 0x7F3109E0u: goto label_7F3109E0;
    case 0x7F3109E4u: goto label_7F3109E4;
    case 0x7F3109E8u: goto label_7F3109E8;
    case 0x7F3109ECu: goto label_7F3109EC;
    case 0x7F3109F0u: goto label_7F3109F0;
    case 0x7F3109F4u: goto label_7F3109F4;
    case 0x7F3109F8u: goto label_7F3109F8;
    case 0x7F3109FCu: goto label_7F3109FC;
    case 0x7F310A00u: goto label_7F310A00;
    case 0x7F310A04u: goto label_7F310A04;
    case 0x7F310A08u: goto label_7F310A08;
    case 0x7F310A0Cu: goto label_7F310A0C;
    case 0x7F310A10u: goto label_7F310A10;
    case 0x7F310A14u: goto label_7F310A14;
    case 0x7F310A18u: goto label_7F310A18;
    case 0x7F310A1Cu: goto label_7F310A1C;
    case 0x7F310A20u: goto label_7F310A20;
    case 0x7F310A24u: goto label_7F310A24;
    case 0x7F310A28u: goto label_7F310A28;
    case 0x7F310A2Cu: goto label_7F310A2C;
    case 0x7F310A30u: goto label_7F310A30;
    case 0x7F310A34u: goto label_7F310A34;
    case 0x7F310A38u: goto label_7F310A38;
    case 0x7F310A3Cu: goto label_7F310A3C;
    case 0x7F310A40u: goto label_7F310A40;
    case 0x7F310A44u: goto label_7F310A44;
    case 0x7F310A48u: goto label_7F310A48;
    case 0x7F310A4Cu: goto label_7F310A4C;
    case 0x7F310A50u: goto label_7F310A50;
    case 0x7F310A54u: goto label_7F310A54;
    case 0x7F310A58u: goto label_7F310A58;
    case 0x7F310A5Cu: goto label_7F310A5C;
    case 0x7F310A60u: goto label_7F310A60;
    case 0x7F310A64u: goto label_7F310A64;
    case 0x7F310A68u: goto label_7F310A68;
    case 0x7F310A6Cu: goto label_7F310A6C;
    case 0x7F310A70u: goto label_7F310A70;
    case 0x7F310A74u: goto label_7F310A74;
    case 0x7F310A78u: goto label_7F310A78;
    case 0x7F310A7Cu: goto label_7F310A7C;
    case 0x7F310A80u: goto label_7F310A80;
    case 0x7F310A84u: goto label_7F310A84;
    case 0x7F310A88u: goto label_7F310A88;
    case 0x7F310A8Cu: goto label_7F310A8C;
    case 0x7F310A90u: goto label_7F310A90;
    case 0x7F310A94u: goto label_7F310A94;
    case 0x7F310A98u: goto label_7F310A98;
    case 0x7F310A9Cu: goto label_7F310A9C;
    case 0x7F310AA0u: goto label_7F310AA0;
    case 0x7F310AA4u: goto label_7F310AA4;
    case 0x7F310AA8u: goto label_7F310AA8;
    case 0x7F310AACu: goto label_7F310AAC;
    case 0x7F310AB0u: goto label_7F310AB0;
    case 0x7F310AB4u: goto label_7F310AB4;
    case 0x7F310AB8u: goto label_7F310AB8;
    case 0x7F310ABCu: goto label_7F310ABC;
    case 0x7F310AC0u: goto label_7F310AC0;
    case 0x7F310AC4u: goto label_7F310AC4;
    case 0x7F310AC8u: goto label_7F310AC8;
    case 0x7F310ACCu: goto label_7F310ACC;
    case 0x7F310AD0u: goto label_7F310AD0;
    case 0x7F310AD4u: goto label_7F310AD4;
    case 0x7F310AD8u: goto label_7F310AD8;
    case 0x7F310ADCu: goto label_7F310ADC;
    case 0x7F310AE0u: goto label_7F310AE0;
    case 0x7F310AE4u: goto label_7F310AE4;
    case 0x7F310AE8u: goto label_7F310AE8;
    case 0x7F310AECu: goto label_7F310AEC;
    case 0x7F310AF0u: goto label_7F310AF0;
    case 0x7F310AF4u: goto label_7F310AF4;
    case 0x7F310AF8u: goto label_7F310AF8;
    case 0x7F310AFCu: goto label_7F310AFC;
    case 0x7F310B00u: goto label_7F310B00;
    case 0x7F310B04u: goto label_7F310B04;
    case 0x7F310B08u: goto label_7F310B08;
    case 0x7F310B0Cu: goto label_7F310B0C;
    case 0x7F310B10u: goto label_7F310B10;
    case 0x7F310B14u: goto label_7F310B14;
    case 0x7F310B18u: goto label_7F310B18;
    case 0x7F310B1Cu: goto label_7F310B1C;
    case 0x7F310B20u: goto label_7F310B20;
    case 0x7F310B24u: goto label_7F310B24;
    case 0x7F310B28u: goto label_7F310B28;
    case 0x7F310B2Cu: goto label_7F310B2C;
    case 0x7F310B30u: goto label_7F310B30;
    case 0x7F310B34u: goto label_7F310B34;
    case 0x7F310B38u: goto label_7F310B38;
    case 0x7F310B3Cu: goto label_7F310B3C;
    case 0x7F310B40u: goto label_7F310B40;
    case 0x7F310B44u: goto label_7F310B44;
    case 0x7F310B48u: goto label_7F310B48;
    case 0x7F310B4Cu: goto label_7F310B4C;
    case 0x7F310B50u: goto label_7F310B50;
    case 0x7F310B54u: goto label_7F310B54;
    case 0x7F310B58u: goto label_7F310B58;
    case 0x7F310B5Cu: goto label_7F310B5C;
    case 0x7F310B60u: goto label_7F310B60;
    case 0x7F310B64u: goto label_7F310B64;
    case 0x7F310B68u: goto label_7F310B68;
    case 0x7F310B6Cu: goto label_7F310B6C;
    case 0x7F310B70u: goto label_7F310B70;
    case 0x7F310B74u: goto label_7F310B74;
    case 0x7F310B78u: goto label_7F310B78;
    case 0x7F310B7Cu: goto label_7F310B7C;
    case 0x7F310B80u: goto label_7F310B80;
    case 0x7F310B84u: goto label_7F310B84;
    case 0x7F310B88u: goto label_7F310B88;
    case 0x7F310B8Cu: goto label_7F310B8C;
    case 0x7F310B90u: goto label_7F310B90;
    case 0x7F310B94u: goto label_7F310B94;
    case 0x7F310B98u: goto label_7F310B98;
    case 0x7F310B9Cu: goto label_7F310B9C;
    case 0x7F310BA0u: goto label_7F310BA0;
    case 0x7F310BA4u: goto label_7F310BA4;
    case 0x7F310BA8u: goto label_7F310BA8;
    case 0x7F310BACu: goto label_7F310BAC;
    case 0x7F310BB0u: goto label_7F310BB0;
    case 0x7F310BB4u: goto label_7F310BB4;
    case 0x7F310BB8u: goto label_7F310BB8;
    case 0x7F310BBCu: goto label_7F310BBC;
    case 0x7F310BC0u: goto label_7F310BC0;
    case 0x7F310BC4u: goto label_7F310BC4;
    case 0x7F310BC8u: goto label_7F310BC8;
    case 0x7F310BCCu: goto label_7F310BCC;
    case 0x7F310BD0u: goto label_7F310BD0;
    case 0x7F310BD4u: goto label_7F310BD4;
    case 0x7F310BD8u: goto label_7F310BD8;
    case 0x7F310BDCu: goto label_7F310BDC;
    case 0x7F310BE0u: goto label_7F310BE0;
    case 0x7F310BE4u: goto label_7F310BE4;
    case 0x7F310BE8u: goto label_7F310BE8;
    case 0x7F310BECu: goto label_7F310BEC;
    case 0x7F310BF0u: goto label_7F310BF0;
    case 0x7F310BF4u: goto label_7F310BF4;
    case 0x7F310BF8u: goto label_7F310BF8;
    case 0x7F310BFCu: goto label_7F310BFC;
    case 0x7F310C00u: goto label_7F310C00;
    case 0x7F310C04u: goto label_7F310C04;
    case 0x7F310C08u: goto label_7F310C08;
    case 0x7F310C0Cu: goto label_7F310C0C;
    case 0x7F310C10u: goto label_7F310C10;
    case 0x7F310C14u: goto label_7F310C14;
    case 0x7F310C18u: goto label_7F310C18;
    case 0x7F310C1Cu: goto label_7F310C1C;
    case 0x7F310C20u: goto label_7F310C20;
    case 0x7F310C24u: goto label_7F310C24;
    case 0x7F310C28u: goto label_7F310C28;
    case 0x7F310C2Cu: goto label_7F310C2C;
    case 0x7F310C30u: goto label_7F310C30;
    case 0x7F310C34u: goto label_7F310C34;
    case 0x7F310C38u: goto label_7F310C38;
    case 0x7F310C3Cu: goto label_7F310C3C;
    case 0x7F310C40u: goto label_7F310C40;
    case 0x7F310C44u: goto label_7F310C44;
    case 0x7F310C48u: goto label_7F310C48;
    case 0x7F310C4Cu: goto label_7F310C4C;
    case 0x7F310C50u: goto label_7F310C50;
    case 0x7F310C54u: goto label_7F310C54;
    case 0x7F310C58u: goto label_7F310C58;
    case 0x7F310C5Cu: goto label_7F310C5C;
    case 0x7F310C60u: goto label_7F310C60;
    case 0x7F310C64u: goto label_7F310C64;
    case 0x7F310C68u: goto label_7F310C68;
    case 0x7F310C6Cu: goto label_7F310C6C;
    case 0x7F310C70u: goto label_7F310C70;
    case 0x7F310C74u: goto label_7F310C74;
    case 0x7F310C78u: goto label_7F310C78;
    case 0x7F310C7Cu: goto label_7F310C7C;
    case 0x7F310C80u: goto label_7F310C80;
    case 0x7F310C84u: goto label_7F310C84;
    case 0x7F310C88u: goto label_7F310C88;
    case 0x7F310C8Cu: goto label_7F310C8C;
    case 0x7F310C90u: goto label_7F310C90;
    case 0x7F310C94u: goto label_7F310C94;
    case 0x7F310C98u: goto label_7F310C98;
    case 0x7F310C9Cu: goto label_7F310C9C;
    case 0x7F310CA0u: goto label_7F310CA0;
    case 0x7F310CA4u: goto label_7F310CA4;
    case 0x7F310CA8u: goto label_7F310CA8;
    case 0x7F310CACu: goto label_7F310CAC;
    case 0x7F310CB0u: goto label_7F310CB0;
    case 0x7F310CB4u: goto label_7F310CB4;
    case 0x7F310CB8u: goto label_7F310CB8;
    case 0x7F310CBCu: goto label_7F310CBC;
    case 0x7F310CC0u: goto label_7F310CC0;
    case 0x7F310CC4u: goto label_7F310CC4;
    case 0x7F310CC8u: goto label_7F310CC8;
    case 0x7F310CCCu: goto label_7F310CCC;
    case 0x7F310CD0u: goto label_7F310CD0;
    case 0x7F310CD4u: goto label_7F310CD4;
    case 0x7F310CD8u: goto label_7F310CD8;
    case 0x7F310CDCu: goto label_7F310CDC;
    case 0x7F310CE0u: goto label_7F310CE0;
    case 0x7F310CE4u: goto label_7F310CE4;
    case 0x7F310CE8u: goto label_7F310CE8;
    case 0x7F310CECu: goto label_7F310CEC;
    case 0x7F310CF0u: goto label_7F310CF0;
    case 0x7F310CF4u: goto label_7F310CF4;
    case 0x7F310CF8u: goto label_7F310CF8;
    case 0x7F310CFCu: goto label_7F310CFC;
    case 0x7F310D00u: goto label_7F310D00;
    case 0x7F310D04u: goto label_7F310D04;
    case 0x7F310D08u: goto label_7F310D08;
    case 0x7F310D0Cu: goto label_7F310D0C;
    case 0x7F310D10u: goto label_7F310D10;
    case 0x7F310D14u: goto label_7F310D14;
    case 0x7F310D18u: goto label_7F310D18;
    case 0x7F310D1Cu: goto label_7F310D1C;
    case 0x7F310D20u: goto label_7F310D20;
    case 0x7F310D24u: goto label_7F310D24;
    case 0x7F310D28u: goto label_7F310D28;
    case 0x7F310D2Cu: goto label_7F310D2C;
    case 0x7F310D30u: goto label_7F310D30;
    case 0x7F310D34u: goto label_7F310D34;
    case 0x7F310D38u: goto label_7F310D38;
    case 0x7F310D3Cu: goto label_7F310D3C;
    case 0x7F310D40u: goto label_7F310D40;
    case 0x7F310D44u: goto label_7F310D44;
    case 0x7F310D48u: goto label_7F310D48;
    case 0x7F310D4Cu: goto label_7F310D4C;
    case 0x7F310D50u: goto label_7F310D50;
    case 0x7F310D54u: goto label_7F310D54;
    case 0x7F310D58u: goto label_7F310D58;
    case 0x7F310D5Cu: goto label_7F310D5C;
    case 0x7F310D60u: goto label_7F310D60;
    case 0x7F310D64u: goto label_7F310D64;
    case 0x7F310D68u: goto label_7F310D68;
    case 0x7F310D6Cu: goto label_7F310D6C;
    case 0x7F310D70u: goto label_7F310D70;
    case 0x7F310D74u: goto label_7F310D74;
    case 0x7F310D78u: goto label_7F310D78;
    case 0x7F310D7Cu: goto label_7F310D7C;
    case 0x7F310D80u: goto label_7F310D80;
    case 0x7F310D84u: goto label_7F310D84;
    case 0x7F310D88u: goto label_7F310D88;
    case 0x7F310D8Cu: goto label_7F310D8C;
    case 0x7F310D90u: goto label_7F310D90;
    case 0x7F310D94u: goto label_7F310D94;
    case 0x7F310D98u: goto label_7F310D98;
    case 0x7F310D9Cu: goto label_7F310D9C;
    case 0x7F310DA0u: goto label_7F310DA0;
    case 0x7F310DA4u: goto label_7F310DA4;
    case 0x7F310DA8u: goto label_7F310DA8;
    case 0x7F310DACu: goto label_7F310DAC;
    case 0x7F310DB0u: goto label_7F310DB0;
    case 0x7F310DB4u: goto label_7F310DB4;
    case 0x7F310DB8u: goto label_7F310DB8;
    case 0x7F310DBCu: goto label_7F310DBC;
    case 0x7F310DC0u: goto label_7F310DC0;
    case 0x7F310DC4u: goto label_7F310DC4;
    case 0x7F310DC8u: goto label_7F310DC8;
    case 0x7F310DCCu: goto label_7F310DCC;
    case 0x7F310DD0u: goto label_7F310DD0;
    case 0x7F310DD4u: goto label_7F310DD4;
    case 0x7F310DD8u: goto label_7F310DD8;
    case 0x7F310DDCu: goto label_7F310DDC;
    case 0x7F310DE0u: goto label_7F310DE0;
    case 0x7F310DE4u: goto label_7F310DE4;
    case 0x7F310DE8u: goto label_7F310DE8;
    case 0x7F310DECu: goto label_7F310DEC;
    case 0x7F310DF0u: goto label_7F310DF0;
    case 0x7F310DF4u: goto label_7F310DF4;
    case 0x7F310DF8u: goto label_7F310DF8;
    case 0x7F310DFCu: goto label_7F310DFC;
    case 0x7F310E00u: goto label_7F310E00;
    case 0x7F310E04u: goto label_7F310E04;
    case 0x7F310E08u: goto label_7F310E08;
    case 0x7F310E0Cu: goto label_7F310E0C;
    case 0x7F310E10u: goto label_7F310E10;
    case 0x7F310E14u: goto label_7F310E14;
    case 0x7F310E18u: goto label_7F310E18;
    case 0x7F310E1Cu: goto label_7F310E1C;
    case 0x7F310E20u: goto label_7F310E20;
    case 0x7F310E24u: goto label_7F310E24;
    case 0x7F310E28u: goto label_7F310E28;
    case 0x7F310E2Cu: goto label_7F310E2C;
    case 0x7F310E30u: goto label_7F310E30;
    case 0x7F310E34u: goto label_7F310E34;
    case 0x7F310E38u: goto label_7F310E38;
    case 0x7F310E3Cu: goto label_7F310E3C;
    case 0x7F310E40u: goto label_7F310E40;
    case 0x7F310E44u: goto label_7F310E44;
    case 0x7F310E48u: goto label_7F310E48;
    case 0x7F310E4Cu: goto label_7F310E4C;
    case 0x7F310E50u: goto label_7F310E50;
    case 0x7F310E54u: goto label_7F310E54;
    case 0x7F310E58u: goto label_7F310E58;
    case 0x7F310E5Cu: goto label_7F310E5C;
    case 0x7F310E60u: goto label_7F310E60;
    case 0x7F310E64u: goto label_7F310E64;
    case 0x7F310E68u: goto label_7F310E68;
    case 0x7F310E6Cu: goto label_7F310E6C;
    case 0x7F310E70u: goto label_7F310E70;
    case 0x7F310E74u: goto label_7F310E74;
    case 0x7F310E78u: goto label_7F310E78;
    case 0x7F310E7Cu: goto label_7F310E7C;
    case 0x7F310E80u: goto label_7F310E80;
    case 0x7F310E84u: goto label_7F310E84;
    case 0x7F310E88u: goto label_7F310E88;
    case 0x7F310E8Cu: goto label_7F310E8C;
    case 0x7F310E90u: goto label_7F310E90;
    case 0x7F310E94u: goto label_7F310E94;
    case 0x7F310E98u: goto label_7F310E98;
    case 0x7F310E9Cu: goto label_7F310E9C;
    case 0x7F310EA0u: goto label_7F310EA0;
    case 0x7F310EA4u: goto label_7F310EA4;
    case 0x7F310EA8u: goto label_7F310EA8;
    case 0x7F310EACu: goto label_7F310EAC;
    case 0x7F310EB0u: goto label_7F310EB0;
    case 0x7F310EB4u: goto label_7F310EB4;
    case 0x7F310EB8u: goto label_7F310EB8;
    case 0x7F310EBCu: goto label_7F310EBC;
    case 0x7F310EC0u: goto label_7F310EC0;
    case 0x7F310EC4u: goto label_7F310EC4;
    case 0x7F310EC8u: goto label_7F310EC8;
    case 0x7F310ECCu: goto label_7F310ECC;
    case 0x7F310ED0u: goto label_7F310ED0;
    case 0x7F310ED4u: goto label_7F310ED4;
    case 0x7F310ED8u: goto label_7F310ED8;
    case 0x7F310EDCu: goto label_7F310EDC;
    case 0x7F310EE0u: goto label_7F310EE0;
    case 0x7F310EE4u: goto label_7F310EE4;
    case 0x7F310EE8u: goto label_7F310EE8;
    case 0x7F310EECu: goto label_7F310EEC;
    case 0x7F310EF0u: goto label_7F310EF0;
    case 0x7F310EF4u: goto label_7F310EF4;
    case 0x7F310EF8u: goto label_7F310EF8;
    case 0x7F310EFCu: goto label_7F310EFC;
    case 0x7F310F00u: goto label_7F310F00;
    case 0x7F310F04u: goto label_7F310F04;
    case 0x7F310F08u: goto label_7F310F08;
    case 0x7F310F0Cu: goto label_7F310F0C;
    case 0x7F310F10u: goto label_7F310F10;
    case 0x7F310F14u: goto label_7F310F14;
    case 0x7F310F18u: goto label_7F310F18;
    case 0x7F310F1Cu: goto label_7F310F1C;
    case 0x7F310F20u: goto label_7F310F20;
    case 0x7F310F24u: goto label_7F310F24;
    case 0x7F310F28u: goto label_7F310F28;
    case 0x7F310F2Cu: goto label_7F310F2C;
    case 0x7F310F30u: goto label_7F310F30;
    case 0x7F310F34u: goto label_7F310F34;
    case 0x7F310F38u: goto label_7F310F38;
    case 0x7F310F3Cu: goto label_7F310F3C;
    case 0x7F310F40u: goto label_7F310F40;
    case 0x7F310F44u: goto label_7F310F44;
    case 0x7F310F48u: goto label_7F310F48;
    case 0x7F310F4Cu: goto label_7F310F4C;
    case 0x7F310F50u: goto label_7F310F50;
    case 0x7F310F54u: goto label_7F310F54;
    case 0x7F310F58u: goto label_7F310F58;
    case 0x7F310F5Cu: goto label_7F310F5C;
    case 0x7F310F60u: goto label_7F310F60;
    case 0x7F310F64u: goto label_7F310F64;
    case 0x7F310F68u: goto label_7F310F68;
    case 0x7F310F6Cu: goto label_7F310F6C;
    case 0x7F310F70u: goto label_7F310F70;
    case 0x7F310F74u: goto label_7F310F74;
    case 0x7F310F78u: goto label_7F310F78;
    case 0x7F310F7Cu: goto label_7F310F7C;
    case 0x7F310F80u: goto label_7F310F80;
    case 0x7F310F84u: goto label_7F310F84;
    case 0x7F310F88u: goto label_7F310F88;
    case 0x7F310F8Cu: goto label_7F310F8C;
    case 0x7F310F90u: goto label_7F310F90;
    case 0x7F310F94u: goto label_7F310F94;
    case 0x7F310F98u: goto label_7F310F98;
    case 0x7F310F9Cu: goto label_7F310F9C;
    case 0x7F310FA0u: goto label_7F310FA0;
    case 0x7F310FA4u: goto label_7F310FA4;
    case 0x7F310FA8u: goto label_7F310FA8;
    case 0x7F310FACu: goto label_7F310FAC;
    case 0x7F310FB0u: goto label_7F310FB0;
    case 0x7F310FB4u: goto label_7F310FB4;
    case 0x7F310FB8u: goto label_7F310FB8;
    case 0x7F310FBCu: goto label_7F310FBC;
    case 0x7F310FC0u: goto label_7F310FC0;
    case 0x7F310FC4u: goto label_7F310FC4;
    case 0x7F310FC8u: goto label_7F310FC8;
    case 0x7F310FCCu: goto label_7F310FCC;
    case 0x7F310FD0u: goto label_7F310FD0;
    case 0x7F310FD4u: goto label_7F310FD4;
    case 0x7F310FD8u: goto label_7F310FD8;
    case 0x7F310FDCu: goto label_7F310FDC;
    case 0x7F310FE0u: goto label_7F310FE0;
    case 0x7F310FE4u: goto label_7F310FE4;
    case 0x7F310FE8u: goto label_7F310FE8;
    case 0x7F310FECu: goto label_7F310FEC;
    case 0x7F310FF0u: goto label_7F310FF0;
    case 0x7F310FF4u: goto label_7F310FF4;
    case 0x7F310FF8u: goto label_7F310FF8;
    case 0x7F310FFCu: goto label_7F310FFC;
    case 0x7F311000u: goto label_7F311000;
    case 0x7F311004u: goto label_7F311004;
    case 0x7F311008u: goto label_7F311008;
    case 0x7F31100Cu: goto label_7F31100C;
    case 0x7F311010u: goto label_7F311010;
    case 0x7F311014u: goto label_7F311014;
    case 0x7F311018u: goto label_7F311018;
    case 0x7F31101Cu: goto label_7F31101C;
    case 0x7F311020u: goto label_7F311020;
    case 0x7F311024u: goto label_7F311024;
    case 0x7F311028u: goto label_7F311028;
    case 0x7F31102Cu: goto label_7F31102C;
    case 0x7F311030u: goto label_7F311030;
    case 0x7F311034u: goto label_7F311034;
    case 0x7F311038u: goto label_7F311038;
    case 0x7F31103Cu: goto label_7F31103C;
    case 0x7F311040u: goto label_7F311040;
    case 0x7F311044u: goto label_7F311044;
    case 0x7F311048u: goto label_7F311048;
    case 0x7F31104Cu: goto label_7F31104C;
    case 0x7F311050u: goto label_7F311050;
    case 0x7F311054u: goto label_7F311054;
    case 0x7F311058u: goto label_7F311058;
    case 0x7F31105Cu: goto label_7F31105C;
    case 0x7F311060u: goto label_7F311060;
    case 0x7F311064u: goto label_7F311064;
    case 0x7F311068u: goto label_7F311068;
    case 0x7F31106Cu: goto label_7F31106C;
    case 0x7F311070u: goto label_7F311070;
    case 0x7F311074u: goto label_7F311074;
    case 0x7F311078u: goto label_7F311078;
    case 0x7F31107Cu: goto label_7F31107C;
    case 0x7F311080u: goto label_7F311080;
    case 0x7F311084u: goto label_7F311084;
    case 0x7F311088u: goto label_7F311088;
    case 0x7F31108Cu: goto label_7F31108C;
    case 0x7F311090u: goto label_7F311090;
    case 0x7F311094u: goto label_7F311094;
    case 0x7F311098u: goto label_7F311098;
    case 0x7F31109Cu: goto label_7F31109C;
    case 0x7F3110A0u: goto label_7F3110A0;
    case 0x7F3110A4u: goto label_7F3110A4;
    case 0x7F3110A8u: goto label_7F3110A8;
    case 0x7F3110ACu: goto label_7F3110AC;
    case 0x7F3110B0u: goto label_7F3110B0;
    case 0x7F3110B4u: goto label_7F3110B4;
    case 0x7F3110B8u: goto label_7F3110B8;
    case 0x7F3110BCu: goto label_7F3110BC;
    case 0x7F3110C0u: goto label_7F3110C0;
    case 0x7F3110C4u: goto label_7F3110C4;
    case 0x7F3110C8u: goto label_7F3110C8;
    case 0x7F3110CCu: goto label_7F3110CC;
    case 0x7F3110D0u: goto label_7F3110D0;
    case 0x7F3110D4u: goto label_7F3110D4;
    case 0x7F3110D8u: goto label_7F3110D8;
    case 0x7F3110DCu: goto label_7F3110DC;
    case 0x7F3110E0u: goto label_7F3110E0;
    case 0x7F3110E4u: goto label_7F3110E4;
    case 0x7F3110E8u: goto label_7F3110E8;
    case 0x7F3110ECu: goto label_7F3110EC;
    case 0x7F3110F0u: goto label_7F3110F0;
    case 0x7F3110F4u: goto label_7F3110F4;
    case 0x7F3110F8u: goto label_7F3110F8;
    case 0x7F3110FCu: goto label_7F3110FC;
    case 0x7F311100u: goto label_7F311100;
    case 0x7F311104u: goto label_7F311104;
    case 0x7F311108u: goto label_7F311108;
    case 0x7F31110Cu: goto label_7F31110C;
    case 0x7F311110u: goto label_7F311110;
    case 0x7F311114u: goto label_7F311114;
    case 0x7F311118u: goto label_7F311118;
    case 0x7F31111Cu: goto label_7F31111C;
    case 0x7F311120u: goto label_7F311120;
    case 0x7F311124u: goto label_7F311124;
    case 0x7F311128u: goto label_7F311128;
    case 0x7F31112Cu: goto label_7F31112C;
    case 0x7F311130u: goto label_7F311130;
    case 0x7F311134u: goto label_7F311134;
    case 0x7F311138u: goto label_7F311138;
    case 0x7F31113Cu: goto label_7F31113C;
    case 0x7F311140u: goto label_7F311140;
    case 0x7F311144u: goto label_7F311144;
    case 0x7F311148u: goto label_7F311148;
    case 0x7F31114Cu: goto label_7F31114C;
    case 0x7F311150u: goto label_7F311150;
    case 0x7F311154u: goto label_7F311154;
    case 0x7F311158u: goto label_7F311158;
    case 0x7F31115Cu: goto label_7F31115C;
    case 0x7F311160u: goto label_7F311160;
    case 0x7F311164u: goto label_7F311164;
    case 0x7F311168u: goto label_7F311168;
    case 0x7F31116Cu: goto label_7F31116C;
    case 0x7F311170u: goto label_7F311170;
    case 0x7F311174u: goto label_7F311174;
    case 0x7F311178u: goto label_7F311178;
    case 0x7F31117Cu: goto label_7F31117C;
    case 0x7F311180u: goto label_7F311180;
    case 0x7F311184u: goto label_7F311184;
    case 0x7F311188u: goto label_7F311188;
    case 0x7F31118Cu: goto label_7F31118C;
    case 0x7F311190u: goto label_7F311190;
    case 0x7F311194u: goto label_7F311194;
    case 0x7F311198u: goto label_7F311198;
    case 0x7F31119Cu: goto label_7F31119C;
    case 0x7F3111A0u: goto label_7F3111A0;
    case 0x7F3111A4u: goto label_7F3111A4;
    case 0x7F3111A8u: goto label_7F3111A8;
    case 0x7F3111ACu: goto label_7F3111AC;
    case 0x7F3111B0u: goto label_7F3111B0;
    case 0x7F3111B4u: goto label_7F3111B4;
    case 0x7F3111B8u: goto label_7F3111B8;
    case 0x7F3111BCu: goto label_7F3111BC;
    case 0x7F3111C0u: goto label_7F3111C0;
    case 0x7F3111C4u: goto label_7F3111C4;
    case 0x7F3111C8u: goto label_7F3111C8;
    case 0x7F3111CCu: goto label_7F3111CC;
    case 0x7F3111D0u: goto label_7F3111D0;
    case 0x7F3111D4u: goto label_7F3111D4;
    case 0x7F3111D8u: goto label_7F3111D8;
    case 0x7F3111DCu: goto label_7F3111DC;
    case 0x7F3111E0u: goto label_7F3111E0;
    case 0x7F3111E4u: goto label_7F3111E4;
    case 0x7F3111E8u: goto label_7F3111E8;
    case 0x7F3111ECu: goto label_7F3111EC;
    case 0x7F3111F0u: goto label_7F3111F0;
    case 0x7F3111F4u: goto label_7F3111F4;
    case 0x7F3111F8u: goto label_7F3111F8;
    case 0x7F3111FCu: goto label_7F3111FC;
    case 0x7F311200u: goto label_7F311200;
    case 0x7F311204u: goto label_7F311204;
    case 0x7F311208u: goto label_7F311208;
    case 0x7F31120Cu: goto label_7F31120C;
    case 0x7F311210u: goto label_7F311210;
    case 0x7F311214u: goto label_7F311214;
    case 0x7F311218u: goto label_7F311218;
    case 0x7F31121Cu: goto label_7F31121C;
    case 0x7F311220u: goto label_7F311220;
    case 0x7F311224u: goto label_7F311224;
    case 0x7F311228u: goto label_7F311228;
    case 0x7F31122Cu: goto label_7F31122C;
    case 0x7F311230u: goto label_7F311230;
    case 0x7F311234u: goto label_7F311234;
    case 0x7F311238u: goto label_7F311238;
    case 0x7F31123Cu: goto label_7F31123C;
    case 0x7F311240u: goto label_7F311240;
    case 0x7F311244u: goto label_7F311244;
    case 0x7F311248u: goto label_7F311248;
    case 0x7F31124Cu: goto label_7F31124C;
    case 0x7F311250u: goto label_7F311250;
    case 0x7F311254u: goto label_7F311254;
    case 0x7F311258u: goto label_7F311258;
    case 0x7F31125Cu: goto label_7F31125C;
    case 0x7F311260u: goto label_7F311260;
    case 0x7F311264u: goto label_7F311264;
    case 0x7F311268u: goto label_7F311268;
    case 0x7F31126Cu: goto label_7F31126C;
    case 0x7F311270u: goto label_7F311270;
    case 0x7F311274u: goto label_7F311274;
    case 0x7F311278u: goto label_7F311278;
    case 0x7F31127Cu: goto label_7F31127C;
    case 0x7F311280u: goto label_7F311280;
    case 0x7F311284u: goto label_7F311284;
    case 0x7F311288u: goto label_7F311288;
    case 0x7F31128Cu: goto label_7F31128C;
    case 0x7F311290u: goto label_7F311290;
    case 0x7F311294u: goto label_7F311294;
    case 0x7F311298u: goto label_7F311298;
    case 0x7F31129Cu: goto label_7F31129C;
    case 0x7F3112A0u: goto label_7F3112A0;
    case 0x7F3112A4u: goto label_7F3112A4;
    case 0x7F3112A8u: goto label_7F3112A8;
    case 0x7F3112ACu: goto label_7F3112AC;
    case 0x7F3112B0u: goto label_7F3112B0;
    case 0x7F3112B4u: goto label_7F3112B4;
    case 0x7F3112B8u: goto label_7F3112B8;
    case 0x7F3112BCu: goto label_7F3112BC;
    case 0x7F3112C0u: goto label_7F3112C0;
    case 0x7F3112C4u: goto label_7F3112C4;
    case 0x7F3112C8u: goto label_7F3112C8;
    case 0x7F3112CCu: goto label_7F3112CC;
    case 0x7F3112D0u: goto label_7F3112D0;
    case 0x7F3112D4u: goto label_7F3112D4;
    case 0x7F3112D8u: goto label_7F3112D8;
    case 0x7F3112DCu: goto label_7F3112DC;
    case 0x7F3112E0u: goto label_7F3112E0;
    case 0x7F3112E4u: goto label_7F3112E4;
    case 0x7F3112E8u: goto label_7F3112E8;
    case 0x7F3112ECu: goto label_7F3112EC;
    case 0x7F3112F0u: goto label_7F3112F0;
    case 0x7F3112F4u: goto label_7F3112F4;
    case 0x7F3112F8u: goto label_7F3112F8;
    case 0x7F3112FCu: goto label_7F3112FC;
    case 0x7F311300u: goto label_7F311300;
    case 0x7F311304u: goto label_7F311304;
    case 0x7F311308u: goto label_7F311308;
    case 0x7F31130Cu: goto label_7F31130C;
    case 0x7F311310u: goto label_7F311310;
    case 0x7F311314u: goto label_7F311314;
    case 0x7F311318u: goto label_7F311318;
    case 0x7F31131Cu: goto label_7F31131C;
    case 0x7F311320u: goto label_7F311320;
    case 0x7F311324u: goto label_7F311324;
    case 0x7F311328u: goto label_7F311328;
    case 0x7F31132Cu: goto label_7F31132C;
    case 0x7F311330u: goto label_7F311330;
    case 0x7F311334u: goto label_7F311334;
    case 0x7F311338u: goto label_7F311338;
    case 0x7F31133Cu: goto label_7F31133C;
    case 0x7F311340u: goto label_7F311340;
    case 0x7F311344u: goto label_7F311344;
    case 0x7F311348u: goto label_7F311348;
    case 0x7F31134Cu: goto label_7F31134C;
    case 0x7F311350u: goto label_7F311350;
    case 0x7F311354u: goto label_7F311354;
    case 0x7F311358u: goto label_7F311358;
    case 0x7F31135Cu: goto label_7F31135C;
    case 0x7F311360u: goto label_7F311360;
    case 0x7F311364u: goto label_7F311364;
    case 0x7F311368u: goto label_7F311368;
    case 0x7F31136Cu: goto label_7F31136C;
    case 0x7F311370u: goto label_7F311370;
    case 0x7F311374u: goto label_7F311374;
    case 0x7F311378u: goto label_7F311378;
    case 0x7F31137Cu: goto label_7F31137C;
    case 0x7F311380u: goto label_7F311380;
    case 0x7F311384u: goto label_7F311384;
    case 0x7F311388u: goto label_7F311388;
    case 0x7F31138Cu: goto label_7F31138C;
    case 0x7F311390u: goto label_7F311390;
    case 0x7F311394u: goto label_7F311394;
    case 0x7F311398u: goto label_7F311398;
    case 0x7F31139Cu: goto label_7F31139C;
    case 0x7F3113A0u: goto label_7F3113A0;
    case 0x7F3113A4u: goto label_7F3113A4;
    case 0x7F3113A8u: goto label_7F3113A8;
    case 0x7F3113ACu: goto label_7F3113AC;
    case 0x7F3113B0u: goto label_7F3113B0;
    case 0x7F3113B4u: goto label_7F3113B4;
    case 0x7F3113B8u: goto label_7F3113B8;
    case 0x7F3113BCu: goto label_7F3113BC;
    case 0x7F3113C0u: goto label_7F3113C0;
    case 0x7F3113C4u: goto label_7F3113C4;
    case 0x7F3113C8u: goto label_7F3113C8;
    case 0x7F3113CCu: goto label_7F3113CC;
    case 0x7F3113D0u: goto label_7F3113D0;
    case 0x7F3113D4u: goto label_7F3113D4;
    case 0x7F3113D8u: goto label_7F3113D8;
    case 0x7F3113DCu: goto label_7F3113DC;
    case 0x7F3113E0u: goto label_7F3113E0;
    case 0x7F3113E4u: goto label_7F3113E4;
    case 0x7F3113E8u: goto label_7F3113E8;
    case 0x7F3113ECu: goto label_7F3113EC;
    case 0x7F3113F0u: goto label_7F3113F0;
    case 0x7F3113F4u: goto label_7F3113F4;
    case 0x7F3113F8u: goto label_7F3113F8;
    case 0x7F3113FCu: goto label_7F3113FC;
    case 0x7F311400u: goto label_7F311400;
    case 0x7F311404u: goto label_7F311404;
    case 0x7F311408u: goto label_7F311408;
    case 0x7F31140Cu: goto label_7F31140C;
    case 0x7F311410u: goto label_7F311410;
    case 0x7F311414u: goto label_7F311414;
    case 0x7F311418u: goto label_7F311418;
    case 0x7F31141Cu: goto label_7F31141C;
    case 0x7F311420u: goto label_7F311420;
    case 0x7F311424u: goto label_7F311424;
    case 0x7F311428u: goto label_7F311428;
    case 0x7F31142Cu: goto label_7F31142C;
    case 0x7F311430u: goto label_7F311430;
    case 0x7F311434u: goto label_7F311434;
    case 0x7F311438u: goto label_7F311438;
    case 0x7F31143Cu: goto label_7F31143C;
    case 0x7F311440u: goto label_7F311440;
    case 0x7F311444u: goto label_7F311444;
    case 0x7F311448u: goto label_7F311448;
    case 0x7F31144Cu: goto label_7F31144C;
    case 0x7F311450u: goto label_7F311450;
    case 0x7F311454u: goto label_7F311454;
    case 0x7F311458u: goto label_7F311458;
    case 0x7F31145Cu: goto label_7F31145C;
    case 0x7F311460u: goto label_7F311460;
    case 0x7F311464u: goto label_7F311464;
    case 0x7F311468u: goto label_7F311468;
    case 0x7F31146Cu: goto label_7F31146C;
    case 0x7F311470u: goto label_7F311470;
    case 0x7F311474u: goto label_7F311474;
    case 0x7F311478u: goto label_7F311478;
    case 0x7F31147Cu: goto label_7F31147C;
    case 0x7F311480u: goto label_7F311480;
    case 0x7F311484u: goto label_7F311484;
    case 0x7F311488u: goto label_7F311488;
    case 0x7F31148Cu: goto label_7F31148C;
    case 0x7F311490u: goto label_7F311490;
    case 0x7F311494u: goto label_7F311494;
    case 0x7F311498u: goto label_7F311498;
    case 0x7F31149Cu: goto label_7F31149C;
    case 0x7F3114A0u: goto label_7F3114A0;
    case 0x7F3114A4u: goto label_7F3114A4;
    case 0x7F3114A8u: goto label_7F3114A8;
    case 0x7F3114ACu: goto label_7F3114AC;
    case 0x7F3114B0u: goto label_7F3114B0;
    case 0x7F3114B4u: goto label_7F3114B4;
    case 0x7F3114B8u: goto label_7F3114B8;
    case 0x7F3114BCu: goto label_7F3114BC;
    case 0x7F3114C0u: goto label_7F3114C0;
    case 0x7F3114C4u: goto label_7F3114C4;
    case 0x7F3114C8u: goto label_7F3114C8;
    case 0x7F3114CCu: goto label_7F3114CC;
    case 0x7F3114D0u: goto label_7F3114D0;
    case 0x7F3114D4u: goto label_7F3114D4;
    case 0x7F3114D8u: goto label_7F3114D8;
    case 0x7F3114DCu: goto label_7F3114DC;
    case 0x7F3114E0u: goto label_7F3114E0;
    case 0x7F3114E4u: goto label_7F3114E4;
    case 0x7F3114E8u: goto label_7F3114E8;
    case 0x7F3114ECu: goto label_7F3114EC;
    case 0x7F3114F0u: goto label_7F3114F0;
    case 0x7F3114F4u: goto label_7F3114F4;
    case 0x7F3114F8u: goto label_7F3114F8;
    case 0x7F3114FCu: goto label_7F3114FC;
    case 0x7F311500u: goto label_7F311500;
    case 0x7F311504u: goto label_7F311504;
    case 0x7F311508u: goto label_7F311508;
    case 0x7F31150Cu: goto label_7F31150C;
    case 0x7F311510u: goto label_7F311510;
    case 0x7F311514u: goto label_7F311514;
    case 0x7F311518u: goto label_7F311518;
    case 0x7F31151Cu: goto label_7F31151C;
    case 0x7F311520u: goto label_7F311520;
    case 0x7F311524u: goto label_7F311524;
    case 0x7F311528u: goto label_7F311528;
    case 0x7F31152Cu: goto label_7F31152C;
    case 0x7F311530u: goto label_7F311530;
    case 0x7F311534u: goto label_7F311534;
    case 0x7F311538u: goto label_7F311538;
    case 0x7F31153Cu: goto label_7F31153C;
    case 0x7F311540u: goto label_7F311540;
    case 0x7F311544u: goto label_7F311544;
    case 0x7F311548u: goto label_7F311548;
    case 0x7F31154Cu: goto label_7F31154C;
    case 0x7F311550u: goto label_7F311550;
    case 0x7F311554u: goto label_7F311554;
    case 0x7F311558u: goto label_7F311558;
    case 0x7F31155Cu: goto label_7F31155C;
    case 0x7F311560u: goto label_7F311560;
    case 0x7F311564u: goto label_7F311564;
    case 0x7F311568u: goto label_7F311568;
    case 0x7F31156Cu: goto label_7F31156C;
    case 0x7F311570u: goto label_7F311570;
    case 0x7F311574u: goto label_7F311574;
    case 0x7F311578u: goto label_7F311578;
    case 0x7F31157Cu: goto label_7F31157C;
    case 0x7F311580u: goto label_7F311580;
    case 0x7F311584u: goto label_7F311584;
    case 0x7F311588u: goto label_7F311588;
    case 0x7F31158Cu: goto label_7F31158C;
    case 0x7F311590u: goto label_7F311590;
    case 0x7F311594u: goto label_7F311594;
    case 0x7F311598u: goto label_7F311598;
    case 0x7F31159Cu: goto label_7F31159C;
    case 0x7F3115A0u: goto label_7F3115A0;
    case 0x7F3115A4u: goto label_7F3115A4;
    case 0x7F3115A8u: goto label_7F3115A8;
    case 0x7F3115ACu: goto label_7F3115AC;
    case 0x7F3115B0u: goto label_7F3115B0;
    case 0x7F3115B4u: goto label_7F3115B4;
    case 0x7F3115B8u: goto label_7F3115B8;
    case 0x7F3115BCu: goto label_7F3115BC;
    case 0x7F3115C0u: goto label_7F3115C0;
    case 0x7F3115C4u: goto label_7F3115C4;
    case 0x7F3115C8u: goto label_7F3115C8;
    case 0x7F3115CCu: goto label_7F3115CC;
    case 0x7F3115D0u: goto label_7F3115D0;
    case 0x7F3115D4u: goto label_7F3115D4;
    case 0x7F3115D8u: goto label_7F3115D8;
    case 0x7F3115DCu: goto label_7F3115DC;
    case 0x7F3115E0u: goto label_7F3115E0;
    case 0x7F3115E4u: goto label_7F3115E4;
    case 0x7F3115E8u: goto label_7F3115E8;
    case 0x7F3115ECu: goto label_7F3115EC;
    case 0x7F3115F0u: goto label_7F3115F0;
    case 0x7F3115F4u: goto label_7F3115F4;
    case 0x7F3115F8u: goto label_7F3115F8;
    case 0x7F3115FCu: goto label_7F3115FC;
    case 0x7F311600u: goto label_7F311600;
    case 0x7F311604u: goto label_7F311604;
    case 0x7F311608u: goto label_7F311608;
    case 0x7F31160Cu: goto label_7F31160C;
    case 0x7F311610u: goto label_7F311610;
    case 0x7F311614u: goto label_7F311614;
    case 0x7F311618u: goto label_7F311618;
    case 0x7F31161Cu: goto label_7F31161C;
    case 0x7F311620u: goto label_7F311620;
    case 0x7F311624u: goto label_7F311624;
    case 0x7F311628u: goto label_7F311628;
    case 0x7F31162Cu: goto label_7F31162C;
    case 0x7F311630u: goto label_7F311630;
    case 0x7F311634u: goto label_7F311634;
    case 0x7F311638u: goto label_7F311638;
    case 0x7F31163Cu: goto label_7F31163C;
    case 0x7F311640u: goto label_7F311640;
    case 0x7F311644u: goto label_7F311644;
    case 0x7F311648u: goto label_7F311648;
    case 0x7F31164Cu: goto label_7F31164C;
    case 0x7F311650u: goto label_7F311650;
    case 0x7F311654u: goto label_7F311654;
    case 0x7F311658u: goto label_7F311658;
    case 0x7F31165Cu: goto label_7F31165C;
    case 0x7F311660u: goto label_7F311660;
    case 0x7F311664u: goto label_7F311664;
    case 0x7F311668u: goto label_7F311668;
    case 0x7F31166Cu: goto label_7F31166C;
    case 0x7F311670u: goto label_7F311670;
    case 0x7F311674u: goto label_7F311674;
    case 0x7F311678u: goto label_7F311678;
    case 0x7F31167Cu: goto label_7F31167C;
    case 0x7F311680u: goto label_7F311680;
    case 0x7F311684u: goto label_7F311684;
    case 0x7F311688u: goto label_7F311688;
    case 0x7F31168Cu: goto label_7F31168C;
    case 0x7F311690u: goto label_7F311690;
    case 0x7F311694u: goto label_7F311694;
    case 0x7F311698u: goto label_7F311698;
    case 0x7F31169Cu: goto label_7F31169C;
    case 0x7F3116A0u: goto label_7F3116A0;
    case 0x7F3116A4u: goto label_7F3116A4;
    case 0x7F3116A8u: goto label_7F3116A8;
    case 0x7F3116ACu: goto label_7F3116AC;
    case 0x7F3116B0u: goto label_7F3116B0;
    case 0x7F3116B4u: goto label_7F3116B4;
    case 0x7F3116B8u: goto label_7F3116B8;
    case 0x7F3116BCu: goto label_7F3116BC;
    case 0x7F3116C0u: goto label_7F3116C0;
    case 0x7F3116C4u: goto label_7F3116C4;
    case 0x7F3116C8u: goto label_7F3116C8;
    case 0x7F3116CCu: goto label_7F3116CC;
    case 0x7F3116D0u: goto label_7F3116D0;
    case 0x7F3116D4u: goto label_7F3116D4;
    case 0x7F3116D8u: goto label_7F3116D8;
    case 0x7F3116DCu: goto label_7F3116DC;
    case 0x7F3116E0u: goto label_7F3116E0;
    case 0x7F3116E4u: goto label_7F3116E4;
    case 0x7F3116E8u: goto label_7F3116E8;
    case 0x7F3116ECu: goto label_7F3116EC;
    case 0x7F3116F0u: goto label_7F3116F0;
    case 0x7F3116F4u: goto label_7F3116F4;
    case 0x7F3116F8u: goto label_7F3116F8;
    case 0x7F3116FCu: goto label_7F3116FC;
    case 0x7F311700u: goto label_7F311700;
    case 0x7F311704u: goto label_7F311704;
    case 0x7F311708u: goto label_7F311708;
    case 0x7F31170Cu: goto label_7F31170C;
    case 0x7F311710u: goto label_7F311710;
    case 0x7F311714u: goto label_7F311714;
    case 0x7F311718u: goto label_7F311718;
    case 0x7F31171Cu: goto label_7F31171C;
    case 0x7F311720u: goto label_7F311720;
    case 0x7F311724u: goto label_7F311724;
    case 0x7F311728u: goto label_7F311728;
    case 0x7F31172Cu: goto label_7F31172C;
    case 0x7F311730u: goto label_7F311730;
    case 0x7F311734u: goto label_7F311734;
    case 0x7F311738u: goto label_7F311738;
    case 0x7F31173Cu: goto label_7F31173C;
    case 0x7F311740u: goto label_7F311740;
    case 0x7F311744u: goto label_7F311744;
    case 0x7F311748u: goto label_7F311748;
    case 0x7F31174Cu: goto label_7F31174C;
    case 0x7F311750u: goto label_7F311750;
    case 0x7F311754u: goto label_7F311754;
    case 0x7F311758u: goto label_7F311758;
    case 0x7F31175Cu: goto label_7F31175C;
    case 0x7F311760u: goto label_7F311760;
    case 0x7F311764u: goto label_7F311764;
    case 0x7F311768u: goto label_7F311768;
    case 0x7F31176Cu: goto label_7F31176C;
    case 0x7F311770u: goto label_7F311770;
    case 0x7F311774u: goto label_7F311774;
    case 0x7F311778u: goto label_7F311778;
    case 0x7F31177Cu: goto label_7F31177C;
    case 0x7F311780u: goto label_7F311780;
    case 0x7F311784u: goto label_7F311784;
    case 0x7F311788u: goto label_7F311788;
    case 0x7F31178Cu: goto label_7F31178C;
    case 0x7F311790u: goto label_7F311790;
    case 0x7F311794u: goto label_7F311794;
    case 0x7F311798u: goto label_7F311798;
    case 0x7F31179Cu: goto label_7F31179C;
    case 0x7F3117A0u: goto label_7F3117A0;
    case 0x7F3117A4u: goto label_7F3117A4;
    case 0x7F3117A8u: goto label_7F3117A8;
    case 0x7F3117ACu: goto label_7F3117AC;
    case 0x7F3117B0u: goto label_7F3117B0;
    case 0x7F3117B4u: goto label_7F3117B4;
    case 0x7F3117B8u: goto label_7F3117B8;
    case 0x7F3117BCu: goto label_7F3117BC;
    case 0x7F3117C0u: goto label_7F3117C0;
    case 0x7F3117C4u: goto label_7F3117C4;
    case 0x7F3117C8u: goto label_7F3117C8;
    case 0x7F3117CCu: goto label_7F3117CC;
    case 0x7F3117D0u: goto label_7F3117D0;
    case 0x7F3117D4u: goto label_7F3117D4;
    case 0x7F3117D8u: goto label_7F3117D8;
    case 0x7F3117DCu: goto label_7F3117DC;
    case 0x7F3117E0u: goto label_7F3117E0;
    case 0x7F3117E4u: goto label_7F3117E4;
    case 0x7F3117E8u: goto label_7F3117E8;
    case 0x7F3117ECu: goto label_7F3117EC;
    case 0x7F3117F0u: goto label_7F3117F0;
    case 0x7F3117F4u: goto label_7F3117F4;
    case 0x7F3117F8u: goto label_7F3117F8;
    case 0x7F3117FCu: goto label_7F3117FC;
    case 0x7F311800u: goto label_7F311800;
    case 0x7F311804u: goto label_7F311804;
    case 0x7F311808u: goto label_7F311808;
    case 0x7F31180Cu: goto label_7F31180C;
    case 0x7F311810u: goto label_7F311810;
    case 0x7F311814u: goto label_7F311814;
    case 0x7F311818u: goto label_7F311818;
    case 0x7F31181Cu: goto label_7F31181C;
    case 0x7F311820u: goto label_7F311820;
    case 0x7F311824u: goto label_7F311824;
    case 0x7F311828u: goto label_7F311828;
    case 0x7F31182Cu: goto label_7F31182C;
    case 0x7F311830u: goto label_7F311830;
    case 0x7F311834u: goto label_7F311834;
    case 0x7F311838u: goto label_7F311838;
    case 0x7F31183Cu: goto label_7F31183C;
    case 0x7F311840u: goto label_7F311840;
    case 0x7F311844u: goto label_7F311844;
    case 0x7F311848u: goto label_7F311848;
    case 0x7F31184Cu: goto label_7F31184C;
    case 0x7F311850u: goto label_7F311850;
    case 0x7F311854u: goto label_7F311854;
    case 0x7F311858u: goto label_7F311858;
    case 0x7F31185Cu: goto label_7F31185C;
    case 0x7F311860u: goto label_7F311860;
    case 0x7F311864u: goto label_7F311864;
    case 0x7F311868u: goto label_7F311868;
    case 0x7F31186Cu: goto label_7F31186C;
    case 0x7F311870u: goto label_7F311870;
    case 0x7F311874u: goto label_7F311874;
    case 0x7F311878u: goto label_7F311878;
    case 0x7F31187Cu: goto label_7F31187C;
    case 0x7F311880u: goto label_7F311880;
    case 0x7F311884u: goto label_7F311884;
    case 0x7F311888u: goto label_7F311888;
    case 0x7F31188Cu: goto label_7F31188C;
    case 0x7F311890u: goto label_7F311890;
    case 0x7F311894u: goto label_7F311894;
    case 0x7F311898u: goto label_7F311898;
    case 0x7F31189Cu: goto label_7F31189C;
    case 0x7F3118A0u: goto label_7F3118A0;
    case 0x7F3118A4u: goto label_7F3118A4;
    case 0x7F3118A8u: goto label_7F3118A8;
    case 0x7F3118ACu: goto label_7F3118AC;
    case 0x7F3118B0u: goto label_7F3118B0;
    case 0x7F3118B4u: goto label_7F3118B4;
    case 0x7F3118B8u: goto label_7F3118B8;
    case 0x7F3118BCu: goto label_7F3118BC;
    case 0x7F3118C0u: goto label_7F3118C0;
    case 0x7F3118C4u: goto label_7F3118C4;
    case 0x7F3118C8u: goto label_7F3118C8;
    case 0x7F3118CCu: goto label_7F3118CC;
    case 0x7F3118D0u: goto label_7F3118D0;
    case 0x7F3118D4u: goto label_7F3118D4;
    case 0x7F3118D8u: goto label_7F3118D8;
    case 0x7F3118DCu: goto label_7F3118DC;
    case 0x7F3118E0u: goto label_7F3118E0;
    case 0x7F3118E4u: goto label_7F3118E4;
    case 0x7F3118E8u: goto label_7F3118E8;
    case 0x7F3118ECu: goto label_7F3118EC;
    case 0x7F3118F0u: goto label_7F3118F0;
    case 0x7F3118F4u: goto label_7F3118F4;
    case 0x7F3118F8u: goto label_7F3118F8;
    case 0x7F3118FCu: goto label_7F3118FC;
    case 0x7F311900u: goto label_7F311900;
    case 0x7F311904u: goto label_7F311904;
    case 0x7F311908u: goto label_7F311908;
    case 0x7F31190Cu: goto label_7F31190C;
    case 0x7F311910u: goto label_7F311910;
    case 0x7F311914u: goto label_7F311914;
    case 0x7F311918u: goto label_7F311918;
    case 0x7F31191Cu: goto label_7F31191C;
    case 0x7F311920u: goto label_7F311920;
    case 0x7F311924u: goto label_7F311924;
    case 0x7F311928u: goto label_7F311928;
    case 0x7F31192Cu: goto label_7F31192C;
    case 0x7F311930u: goto label_7F311930;
    case 0x7F311934u: goto label_7F311934;
    case 0x7F311938u: goto label_7F311938;
    case 0x7F31193Cu: goto label_7F31193C;
    case 0x7F311940u: goto label_7F311940;
    case 0x7F311944u: goto label_7F311944;
    case 0x7F311948u: goto label_7F311948;
    case 0x7F31194Cu: goto label_7F31194C;
    case 0x7F311950u: goto label_7F311950;
    case 0x7F311954u: goto label_7F311954;
    case 0x7F311958u: goto label_7F311958;
    case 0x7F31195Cu: goto label_7F31195C;
    case 0x7F311960u: goto label_7F311960;
    case 0x7F311964u: goto label_7F311964;
    case 0x7F311968u: goto label_7F311968;
    case 0x7F31196Cu: goto label_7F31196C;
    case 0x7F311970u: goto label_7F311970;
    case 0x7F311974u: goto label_7F311974;
    case 0x7F311978u: goto label_7F311978;
    case 0x7F31197Cu: goto label_7F31197C;
    case 0x7F311980u: goto label_7F311980;
    case 0x7F311984u: goto label_7F311984;
    case 0x7F311988u: goto label_7F311988;
    case 0x7F31198Cu: goto label_7F31198C;
    case 0x7F311990u: goto label_7F311990;
    case 0x7F311994u: goto label_7F311994;
    case 0x7F311998u: goto label_7F311998;
    case 0x7F31199Cu: goto label_7F31199C;
    case 0x7F3119A0u: goto label_7F3119A0;
    case 0x7F3119A4u: goto label_7F3119A4;
    case 0x7F3119A8u: goto label_7F3119A8;
    case 0x7F3119ACu: goto label_7F3119AC;
    case 0x7F3119B0u: goto label_7F3119B0;
    case 0x7F3119B4u: goto label_7F3119B4;
    case 0x7F3119B8u: goto label_7F3119B8;
    case 0x7F3119BCu: goto label_7F3119BC;
    case 0x7F3119C0u: goto label_7F3119C0;
    case 0x7F3119C4u: goto label_7F3119C4;
    case 0x7F3119C8u: goto label_7F3119C8;
    case 0x7F3119CCu: goto label_7F3119CC;
    case 0x7F3119D0u: goto label_7F3119D0;
    case 0x7F3119D4u: goto label_7F3119D4;
    case 0x7F3119D8u: goto label_7F3119D8;
    case 0x7F3119DCu: goto label_7F3119DC;
    case 0x7F3119E0u: goto label_7F3119E0;
    case 0x7F3119E4u: goto label_7F3119E4;
    case 0x7F3119E8u: goto label_7F3119E8;
    case 0x7F3119ECu: goto label_7F3119EC;
    case 0x7F3119F0u: goto label_7F3119F0;
    case 0x7F3119F4u: goto label_7F3119F4;
    case 0x7F3119F8u: goto label_7F3119F8;
    case 0x7F3119FCu: goto label_7F3119FC;
    case 0x7F311A00u: goto label_7F311A00;
    case 0x7F311A04u: goto label_7F311A04;
    case 0x7F311A08u: goto label_7F311A08;
    case 0x7F311A0Cu: goto label_7F311A0C;
    case 0x7F311A10u: goto label_7F311A10;
    case 0x7F311A14u: goto label_7F311A14;
    case 0x7F311A18u: goto label_7F311A18;
    case 0x7F311A1Cu: goto label_7F311A1C;
    case 0x7F311A20u: goto label_7F311A20;
    case 0x7F311A24u: goto label_7F311A24;
    case 0x7F311A28u: goto label_7F311A28;
    case 0x7F311A2Cu: goto label_7F311A2C;
    case 0x7F311A30u: goto label_7F311A30;
    case 0x7F311A34u: goto label_7F311A34;
    case 0x7F311A38u: goto label_7F311A38;
    case 0x7F311A3Cu: goto label_7F311A3C;
    case 0x7F311A40u: goto label_7F311A40;
    case 0x7F311A44u: goto label_7F311A44;
    case 0x7F311A48u: goto label_7F311A48;
    case 0x7F311A4Cu: goto label_7F311A4C;
    case 0x7F311A50u: goto label_7F311A50;
    case 0x7F311A54u: goto label_7F311A54;
    case 0x7F311A58u: goto label_7F311A58;
    case 0x7F311A5Cu: goto label_7F311A5C;
    case 0x7F311A60u: goto label_7F311A60;
    case 0x7F311A64u: goto label_7F311A64;
    case 0x7F311A68u: goto label_7F311A68;
    case 0x7F311A6Cu: goto label_7F311A6C;
    case 0x7F311A70u: goto label_7F311A70;
    case 0x7F311A74u: goto label_7F311A74;
    case 0x7F311A78u: goto label_7F311A78;
    case 0x7F311A7Cu: goto label_7F311A7C;
    case 0x7F311A80u: goto label_7F311A80;
    case 0x7F311A84u: goto label_7F311A84;
    case 0x7F311A88u: goto label_7F311A88;
    case 0x7F311A8Cu: goto label_7F311A8C;
    case 0x7F311A90u: goto label_7F311A90;
    case 0x7F311A94u: goto label_7F311A94;
    case 0x7F311A98u: goto label_7F311A98;
    case 0x7F311A9Cu: goto label_7F311A9C;
    case 0x7F311AA0u: goto label_7F311AA0;
    case 0x7F311AA4u: goto label_7F311AA4;
    case 0x7F311AA8u: goto label_7F311AA8;
    case 0x7F311AACu: goto label_7F311AAC;
    case 0x7F311AB0u: goto label_7F311AB0;
    case 0x7F311AB4u: goto label_7F311AB4;
    case 0x7F311AB8u: goto label_7F311AB8;
    case 0x7F311ABCu: goto label_7F311ABC;
    case 0x7F311AC0u: goto label_7F311AC0;
    case 0x7F311AC4u: goto label_7F311AC4;
    case 0x7F311AC8u: goto label_7F311AC8;
    case 0x7F311ACCu: goto label_7F311ACC;
    case 0x7F311AD0u: goto label_7F311AD0;
    case 0x7F311AD4u: goto label_7F311AD4;
    case 0x7F311AD8u: goto label_7F311AD8;
    case 0x7F311ADCu: goto label_7F311ADC;
    case 0x7F311AE0u: goto label_7F311AE0;
    case 0x7F311AE4u: goto label_7F311AE4;
    case 0x7F311AE8u: goto label_7F311AE8;
    case 0x7F311AECu: goto label_7F311AEC;
    case 0x7F311AF0u: goto label_7F311AF0;
    case 0x7F311AF4u: goto label_7F311AF4;
    case 0x7F311AF8u: goto label_7F311AF8;
    case 0x7F311AFCu: goto label_7F311AFC;
    case 0x7F311B00u: goto label_7F311B00;
    case 0x7F311B04u: goto label_7F311B04;
    case 0x7F311B08u: goto label_7F311B08;
    case 0x7F311B0Cu: goto label_7F311B0C;
    case 0x7F311B10u: goto label_7F311B10;
    case 0x7F311B14u: goto label_7F311B14;
    case 0x7F311B18u: goto label_7F311B18;
    case 0x7F311B1Cu: goto label_7F311B1C;
    case 0x7F311B20u: goto label_7F311B20;
    case 0x7F311B24u: goto label_7F311B24;
    case 0x7F311B28u: goto label_7F311B28;
    case 0x7F311B2Cu: goto label_7F311B2C;
    case 0x7F311B30u: goto label_7F311B30;
    case 0x7F311B34u: goto label_7F311B34;
    case 0x7F311B38u: goto label_7F311B38;
    case 0x7F311B3Cu: goto label_7F311B3C;
    case 0x7F311B40u: goto label_7F311B40;
    case 0x7F311B44u: goto label_7F311B44;
    case 0x7F311B48u: goto label_7F311B48;
    case 0x7F311B4Cu: goto label_7F311B4C;
    case 0x7F311B50u: goto label_7F311B50;
    case 0x7F311B54u: goto label_7F311B54;
    case 0x7F311B58u: goto label_7F311B58;
    case 0x7F311B5Cu: goto label_7F311B5C;
    case 0x7F311B60u: goto label_7F311B60;
    case 0x7F311B64u: goto label_7F311B64;
    case 0x7F311B68u: goto label_7F311B68;
    case 0x7F311B6Cu: goto label_7F311B6C;
    case 0x7F311B70u: goto label_7F311B70;
    case 0x7F311B74u: goto label_7F311B74;
    case 0x7F311B78u: goto label_7F311B78;
    case 0x7F311B7Cu: goto label_7F311B7C;
    case 0x7F311B80u: goto label_7F311B80;
    case 0x7F311B84u: goto label_7F311B84;
    case 0x7F311B88u: goto label_7F311B88;
    case 0x7F311B8Cu: goto label_7F311B8C;
    case 0x7F311B90u: goto label_7F311B90;
    case 0x7F311B94u: goto label_7F311B94;
    case 0x7F311B98u: goto label_7F311B98;
    case 0x7F311B9Cu: goto label_7F311B9C;
    case 0x7F311BA0u: goto label_7F311BA0;
    case 0x7F311BA4u: goto label_7F311BA4;
    case 0x7F311BA8u: goto label_7F311BA8;
    case 0x7F311BACu: goto label_7F311BAC;
    case 0x7F311BB0u: goto label_7F311BB0;
    case 0x7F311BB4u: goto label_7F311BB4;
    case 0x7F311BB8u: goto label_7F311BB8;
    case 0x7F311BBCu: goto label_7F311BBC;
    case 0x7F311BC0u: goto label_7F311BC0;
    case 0x7F311BC4u: goto label_7F311BC4;
    case 0x7F311BC8u: goto label_7F311BC8;
    case 0x7F311BCCu: goto label_7F311BCC;
    case 0x7F311BD0u: goto label_7F311BD0;
    case 0x7F311BD4u: goto label_7F311BD4;
    case 0x7F311BD8u: goto label_7F311BD8;
    case 0x7F311BDCu: goto label_7F311BDC;
    case 0x7F311BE0u: goto label_7F311BE0;
    case 0x7F311BE4u: goto label_7F311BE4;
    case 0x7F311BE8u: goto label_7F311BE8;
    case 0x7F311BECu: goto label_7F311BEC;
    case 0x7F311BF0u: goto label_7F311BF0;
    case 0x7F311BF4u: goto label_7F311BF4;
    case 0x7F311BF8u: goto label_7F311BF8;
    case 0x7F311BFCu: goto label_7F311BFC;
    case 0x7F311C00u: goto label_7F311C00;
    case 0x7F311C04u: goto label_7F311C04;
    case 0x7F311C08u: goto label_7F311C08;
    case 0x7F311C0Cu: goto label_7F311C0C;
    case 0x7F311C10u: goto label_7F311C10;
    case 0x7F311C14u: goto label_7F311C14;
    case 0x7F311C18u: goto label_7F311C18;
    case 0x7F311C1Cu: goto label_7F311C1C;
    case 0x7F311C20u: goto label_7F311C20;
    case 0x7F311C24u: goto label_7F311C24;
    case 0x7F311C28u: goto label_7F311C28;
    case 0x7F311C2Cu: goto label_7F311C2C;
    case 0x7F311C30u: goto label_7F311C30;
    case 0x7F311C34u: goto label_7F311C34;
    case 0x7F311C38u: goto label_7F311C38;
    case 0x7F311C3Cu: goto label_7F311C3C;
    case 0x7F311C40u: goto label_7F311C40;
    case 0x7F311C44u: goto label_7F311C44;
    case 0x7F311C48u: goto label_7F311C48;
    case 0x7F311C4Cu: goto label_7F311C4C;
    case 0x7F311C50u: goto label_7F311C50;
    case 0x7F311C54u: goto label_7F311C54;
    case 0x7F311C58u: goto label_7F311C58;
    case 0x7F311C5Cu: goto label_7F311C5C;
    case 0x7F311C60u: goto label_7F311C60;
    case 0x7F311C64u: goto label_7F311C64;
    case 0x7F311C68u: goto label_7F311C68;
    case 0x7F311C6Cu: goto label_7F311C6C;
    case 0x7F311C70u: goto label_7F311C70;
    case 0x7F311C74u: goto label_7F311C74;
    case 0x7F311C78u: goto label_7F311C78;
    case 0x7F311C7Cu: goto label_7F311C7C;
    case 0x7F311C80u: goto label_7F311C80;
    case 0x7F311C84u: goto label_7F311C84;
    case 0x7F311C88u: goto label_7F311C88;
    case 0x7F311C8Cu: goto label_7F311C8C;
    case 0x7F311C90u: goto label_7F311C90;
    case 0x7F311C94u: goto label_7F311C94;
    case 0x7F311C98u: goto label_7F311C98;
    case 0x7F311C9Cu: goto label_7F311C9C;
    case 0x7F311CA0u: goto label_7F311CA0;
    case 0x7F311CA4u: goto label_7F311CA4;
    case 0x7F311CA8u: goto label_7F311CA8;
    case 0x7F311CACu: goto label_7F311CAC;
    case 0x7F311CB0u: goto label_7F311CB0;
    case 0x7F311CB4u: goto label_7F311CB4;
    case 0x7F311CB8u: goto label_7F311CB8;
    case 0x7F311CBCu: goto label_7F311CBC;
    case 0x7F311CC0u: goto label_7F311CC0;
    case 0x7F311CC4u: goto label_7F311CC4;
    case 0x7F311CC8u: goto label_7F311CC8;
    case 0x7F311CCCu: goto label_7F311CCC;
    case 0x7F311CD0u: goto label_7F311CD0;
    case 0x7F311CD4u: goto label_7F311CD4;
    case 0x7F311CD8u: goto label_7F311CD8;
    case 0x7F311CDCu: goto label_7F311CDC;
    case 0x7F311CE0u: goto label_7F311CE0;
    case 0x7F311CE4u: goto label_7F311CE4;
    case 0x7F311CE8u: goto label_7F311CE8;
    case 0x7F311CECu: goto label_7F311CEC;
    case 0x7F311CF0u: goto label_7F311CF0;
    case 0x7F311CF4u: goto label_7F311CF4;
    case 0x7F311CF8u: goto label_7F311CF8;
    case 0x7F311CFCu: goto label_7F311CFC;
    case 0x7F311D00u: goto label_7F311D00;
    case 0x7F311D04u: goto label_7F311D04;
    case 0x7F311D08u: goto label_7F311D08;
    case 0x7F311D0Cu: goto label_7F311D0C;
    case 0x7F311D10u: goto label_7F311D10;
    case 0x7F311D14u: goto label_7F311D14;
    case 0x7F311D18u: goto label_7F311D18;
    case 0x7F311D1Cu: goto label_7F311D1C;
    case 0x7F311D20u: goto label_7F311D20;
    case 0x7F311D24u: goto label_7F311D24;
    case 0x7F311D28u: goto label_7F311D28;
    case 0x7F311D2Cu: goto label_7F311D2C;
    case 0x7F311D30u: goto label_7F311D30;
    case 0x7F311D34u: goto label_7F311D34;
    case 0x7F311D38u: goto label_7F311D38;
    case 0x7F311D3Cu: goto label_7F311D3C;
    case 0x7F311D40u: goto label_7F311D40;
    case 0x7F311D44u: goto label_7F311D44;
    case 0x7F311D48u: goto label_7F311D48;
    case 0x7F311D4Cu: goto label_7F311D4C;
    case 0x7F311D50u: goto label_7F311D50;
    case 0x7F311D54u: goto label_7F311D54;
    case 0x7F311D58u: goto label_7F311D58;
    case 0x7F311D5Cu: goto label_7F311D5C;
    case 0x7F311D60u: goto label_7F311D60;
    case 0x7F311D64u: goto label_7F311D64;
    case 0x7F311D68u: goto label_7F311D68;
    case 0x7F311D6Cu: goto label_7F311D6C;
    case 0x7F311D70u: goto label_7F311D70;
    case 0x7F311D74u: goto label_7F311D74;
    case 0x7F311D78u: goto label_7F311D78;
    case 0x7F311D7Cu: goto label_7F311D7C;
    case 0x7F311D80u: goto label_7F311D80;
    case 0x7F311D84u: goto label_7F311D84;
    case 0x7F311D88u: goto label_7F311D88;
    case 0x7F311D8Cu: goto label_7F311D8C;
    case 0x7F311D90u: goto label_7F311D90;
    case 0x7F311D94u: goto label_7F311D94;
    case 0x7F311D98u: goto label_7F311D98;
    case 0x7F311D9Cu: goto label_7F311D9C;
    case 0x7F311DA0u: goto label_7F311DA0;
    case 0x7F311DA4u: goto label_7F311DA4;
    case 0x7F311DA8u: goto label_7F311DA8;
    case 0x7F311DACu: goto label_7F311DAC;
    case 0x7F311DB0u: goto label_7F311DB0;
    case 0x7F311DB4u: goto label_7F311DB4;
    case 0x7F311DB8u: goto label_7F311DB8;
    case 0x7F311DBCu: goto label_7F311DBC;
    case 0x7F311DC0u: goto label_7F311DC0;
    case 0x7F311DC4u: goto label_7F311DC4;
    case 0x7F311DC8u: goto label_7F311DC8;
    case 0x7F311DCCu: goto label_7F311DCC;
    case 0x7F311DD0u: goto label_7F311DD0;
    case 0x7F311DD4u: goto label_7F311DD4;
    case 0x7F311DD8u: goto label_7F311DD8;
    case 0x7F311DDCu: goto label_7F311DDC;
    case 0x7F311DE0u: goto label_7F311DE0;
    case 0x7F311DE4u: goto label_7F311DE4;
    case 0x7F311DE8u: goto label_7F311DE8;
    case 0x7F311DECu: goto label_7F311DEC;
    case 0x7F311DF0u: goto label_7F311DF0;
    case 0x7F311DF4u: goto label_7F311DF4;
    case 0x7F311DF8u: goto label_7F311DF8;
    case 0x7F311DFCu: goto label_7F311DFC;
    case 0x7F311E00u: goto label_7F311E00;
    case 0x7F311E04u: goto label_7F311E04;
    case 0x7F311E08u: goto label_7F311E08;
    case 0x7F311E0Cu: goto label_7F311E0C;
    case 0x7F311E10u: goto label_7F311E10;
    case 0x7F311E14u: goto label_7F311E14;
    case 0x7F311E18u: goto label_7F311E18;
    case 0x7F311E1Cu: goto label_7F311E1C;
    case 0x7F311E20u: goto label_7F311E20;
    case 0x7F311E24u: goto label_7F311E24;
    case 0x7F311E28u: goto label_7F311E28;
    case 0x7F311E2Cu: goto label_7F311E2C;
    case 0x7F311E30u: goto label_7F311E30;
    case 0x7F311E34u: goto label_7F311E34;
    case 0x7F311E38u: goto label_7F311E38;
    case 0x7F311E3Cu: goto label_7F311E3C;
    case 0x7F311E40u: goto label_7F311E40;
    case 0x7F311E44u: goto label_7F311E44;
    case 0x7F311E48u: goto label_7F311E48;
    case 0x7F311E4Cu: goto label_7F311E4C;
    case 0x7F311E50u: goto label_7F311E50;
    case 0x7F311E54u: goto label_7F311E54;
    case 0x7F311E58u: goto label_7F311E58;
    case 0x7F311E5Cu: goto label_7F311E5C;
    case 0x7F311E60u: goto label_7F311E60;
    case 0x7F311E64u: goto label_7F311E64;
    case 0x7F311E68u: goto label_7F311E68;
    case 0x7F311E6Cu: goto label_7F311E6C;
    case 0x7F311E70u: goto label_7F311E70;
    case 0x7F311E74u: goto label_7F311E74;
    case 0x7F311E78u: goto label_7F311E78;
    case 0x7F311E7Cu: goto label_7F311E7C;
    case 0x7F311E80u: goto label_7F311E80;
    case 0x7F311E84u: goto label_7F311E84;
    case 0x7F311E88u: goto label_7F311E88;
    case 0x7F311E8Cu: goto label_7F311E8C;
    case 0x7F311E90u: goto label_7F311E90;
    case 0x7F311E94u: goto label_7F311E94;
    case 0x7F311E98u: goto label_7F311E98;
    case 0x7F311E9Cu: goto label_7F311E9C;
    case 0x7F311EA0u: goto label_7F311EA0;
    case 0x7F311EA4u: goto label_7F311EA4;
    case 0x7F311EA8u: goto label_7F311EA8;
    case 0x7F311EACu: goto label_7F311EAC;
    case 0x7F311EB0u: goto label_7F311EB0;
    case 0x7F311EB4u: goto label_7F311EB4;
    case 0x7F311EB8u: goto label_7F311EB8;
    case 0x7F311EBCu: goto label_7F311EBC;
    case 0x7F311EC0u: goto label_7F311EC0;
    case 0x7F311EC4u: goto label_7F311EC4;
    case 0x7F311EC8u: goto label_7F311EC8;
    case 0x7F311ECCu: goto label_7F311ECC;
    case 0x7F311ED0u: goto label_7F311ED0;
    case 0x7F311ED4u: goto label_7F311ED4;
    case 0x7F311ED8u: goto label_7F311ED8;
    case 0x7F311EDCu: goto label_7F311EDC;
    case 0x7F311EE0u: goto label_7F311EE0;
    case 0x7F311EE4u: goto label_7F311EE4;
    case 0x7F311EE8u: goto label_7F311EE8;
    case 0x7F311EECu: goto label_7F311EEC;
    case 0x7F311EF0u: goto label_7F311EF0;
    case 0x7F311EF4u: goto label_7F311EF4;
    case 0x7F311EF8u: goto label_7F311EF8;
    case 0x7F311EFCu: goto label_7F311EFC;
    case 0x7F311F00u: goto label_7F311F00;
    case 0x7F311F04u: goto label_7F311F04;
    case 0x7F311F08u: goto label_7F311F08;
    case 0x7F311F0Cu: goto label_7F311F0C;
    case 0x7F311F10u: goto label_7F311F10;
    case 0x7F311F14u: goto label_7F311F14;
    case 0x7F311F18u: goto label_7F311F18;
    case 0x7F311F1Cu: goto label_7F311F1C;
    case 0x7F311F20u: goto label_7F311F20;
    case 0x7F311F24u: goto label_7F311F24;
    case 0x7F311F28u: goto label_7F311F28;
    case 0x7F311F2Cu: goto label_7F311F2C;
    case 0x7F311F30u: goto label_7F311F30;
    case 0x7F311F34u: goto label_7F311F34;
    case 0x7F311F38u: goto label_7F311F38;
    case 0x7F311F3Cu: goto label_7F311F3C;
    case 0x7F311F40u: goto label_7F311F40;
    case 0x7F311F44u: goto label_7F311F44;
    case 0x7F311F48u: goto label_7F311F48;
    case 0x7F311F4Cu: goto label_7F311F4C;
    case 0x7F311F50u: goto label_7F311F50;
    case 0x7F311F54u: goto label_7F311F54;
    case 0x7F311F58u: goto label_7F311F58;
    case 0x7F311F5Cu: goto label_7F311F5C;
    case 0x7F311F60u: goto label_7F311F60;
    case 0x7F311F64u: goto label_7F311F64;
    case 0x7F311F68u: goto label_7F311F68;
    case 0x7F311F6Cu: goto label_7F311F6C;
    case 0x7F311F70u: goto label_7F311F70;
    case 0x7F311F74u: goto label_7F311F74;
    case 0x7F311F78u: goto label_7F311F78;
    case 0x7F311F7Cu: goto label_7F311F7C;
    case 0x7F311F80u: goto label_7F311F80;
    case 0x7F311F84u: goto label_7F311F84;
    case 0x7F311F88u: goto label_7F311F88;
    case 0x7F311F8Cu: goto label_7F311F8C;
    case 0x7F311F90u: goto label_7F311F90;
    case 0x7F311F94u: goto label_7F311F94;
    case 0x7F311F98u: goto label_7F311F98;
    case 0x7F311F9Cu: goto label_7F311F9C;
    case 0x7F311FA0u: goto label_7F311FA0;
    case 0x7F311FA4u: goto label_7F311FA4;
    case 0x7F311FA8u: goto label_7F311FA8;
    case 0x7F311FACu: goto label_7F311FAC;
    case 0x7F311FB0u: goto label_7F311FB0;
    case 0x7F311FB4u: goto label_7F311FB4;
    case 0x7F311FB8u: goto label_7F311FB8;
    case 0x7F311FBCu: goto label_7F311FBC;
    case 0x7F311FC0u: goto label_7F311FC0;
    case 0x7F311FC4u: goto label_7F311FC4;
    case 0x7F311FC8u: goto label_7F311FC8;
    case 0x7F311FCCu: goto label_7F311FCC;
    case 0x7F311FD0u: goto label_7F311FD0;
    case 0x7F311FD4u: goto label_7F311FD4;
    case 0x7F311FD8u: goto label_7F311FD8;
    case 0x7F311FDCu: goto label_7F311FDC;
    case 0x7F311FE0u: goto label_7F311FE0;
    case 0x7F311FE4u: goto label_7F311FE4;
    case 0x7F311FE8u: goto label_7F311FE8;
    case 0x7F311FECu: goto label_7F311FEC;
    case 0x7F311FF0u: goto label_7F311FF0;
    case 0x7F311FF4u: goto label_7F311FF4;
    case 0x7F311FF8u: goto label_7F311FF8;
    case 0x7F311FFCu: goto label_7F311FFC;
    case 0x7F312000u: goto label_7F312000;
    case 0x7F312004u: goto label_7F312004;
    case 0x7F312008u: goto label_7F312008;
    case 0x7F31200Cu: goto label_7F31200C;
    case 0x7F312010u: goto label_7F312010;
    case 0x7F312014u: goto label_7F312014;
    case 0x7F312018u: goto label_7F312018;
    case 0x7F31201Cu: goto label_7F31201C;
    case 0x7F312020u: goto label_7F312020;
    case 0x7F312024u: goto label_7F312024;
    case 0x7F312028u: goto label_7F312028;
    case 0x7F31202Cu: goto label_7F31202C;
    case 0x7F312030u: goto label_7F312030;
    case 0x7F312034u: goto label_7F312034;
    case 0x7F312038u: goto label_7F312038;
    case 0x7F31203Cu: goto label_7F31203C;
    case 0x7F312040u: goto label_7F312040;
    case 0x7F312044u: goto label_7F312044;
    case 0x7F312048u: goto label_7F312048;
    case 0x7F31204Cu: goto label_7F31204C;
    case 0x7F312050u: goto label_7F312050;
    case 0x7F312054u: goto label_7F312054;
    case 0x7F312058u: goto label_7F312058;
    case 0x7F31205Cu: goto label_7F31205C;
    case 0x7F312060u: goto label_7F312060;
    case 0x7F312064u: goto label_7F312064;
    case 0x7F312068u: goto label_7F312068;
    case 0x7F31206Cu: goto label_7F31206C;
    case 0x7F312070u: goto label_7F312070;
    case 0x7F312074u: goto label_7F312074;
    case 0x7F312078u: goto label_7F312078;
    case 0x7F31207Cu: goto label_7F31207C;
    case 0x7F312080u: goto label_7F312080;
    case 0x7F312084u: goto label_7F312084;
    case 0x7F312088u: goto label_7F312088;
    case 0x7F31208Cu: goto label_7F31208C;
    case 0x7F312090u: goto label_7F312090;
    case 0x7F312094u: goto label_7F312094;
    case 0x7F312098u: goto label_7F312098;
    case 0x7F31209Cu: goto label_7F31209C;
    case 0x7F3120A0u: goto label_7F3120A0;
    case 0x7F3120A4u: goto label_7F3120A4;
    case 0x7F3120A8u: goto label_7F3120A8;
    case 0x7F3120ACu: goto label_7F3120AC;
    case 0x7F3120B0u: goto label_7F3120B0;
    case 0x7F3120B4u: goto label_7F3120B4;
    case 0x7F3120B8u: goto label_7F3120B8;
    case 0x7F3120BCu: goto label_7F3120BC;
    case 0x7F3120C0u: goto label_7F3120C0;
    case 0x7F3120C4u: goto label_7F3120C4;
    case 0x7F3120C8u: goto label_7F3120C8;
    case 0x7F3120CCu: goto label_7F3120CC;
    case 0x7F3120D0u: goto label_7F3120D0;
    case 0x7F3120D4u: goto label_7F3120D4;
    case 0x7F3120D8u: goto label_7F3120D8;
    case 0x7F3120DCu: goto label_7F3120DC;
    case 0x7F3120E0u: goto label_7F3120E0;
    case 0x7F3120E4u: goto label_7F3120E4;
    case 0x7F3120E8u: goto label_7F3120E8;
    case 0x7F3120ECu: goto label_7F3120EC;
    case 0x7F3120F0u: goto label_7F3120F0;
    case 0x7F3120F4u: goto label_7F3120F4;
    case 0x7F3120F8u: goto label_7F3120F8;
    case 0x7F3120FCu: goto label_7F3120FC;
    case 0x7F312100u: goto label_7F312100;
    case 0x7F312104u: goto label_7F312104;
    case 0x7F312108u: goto label_7F312108;
    case 0x7F31210Cu: goto label_7F31210C;
    case 0x7F312110u: goto label_7F312110;
    case 0x7F312114u: goto label_7F312114;
    case 0x7F312118u: goto label_7F312118;
    case 0x7F31211Cu: goto label_7F31211C;
    case 0x7F312120u: goto label_7F312120;
    case 0x7F312124u: goto label_7F312124;
    case 0x7F312128u: goto label_7F312128;
    case 0x7F31212Cu: goto label_7F31212C;
    case 0x7F312130u: goto label_7F312130;
    case 0x7F312134u: goto label_7F312134;
    case 0x7F312138u: goto label_7F312138;
    case 0x7F31213Cu: goto label_7F31213C;
    case 0x7F312140u: goto label_7F312140;
    case 0x7F312144u: goto label_7F312144;
    case 0x7F312148u: goto label_7F312148;
    case 0x7F31214Cu: goto label_7F31214C;
    case 0x7F312150u: goto label_7F312150;
    case 0x7F312154u: goto label_7F312154;
    case 0x7F312158u: goto label_7F312158;
    case 0x7F31215Cu: goto label_7F31215C;
    case 0x7F312160u: goto label_7F312160;
    case 0x7F312164u: goto label_7F312164;
    case 0x7F312168u: goto label_7F312168;
    case 0x7F31216Cu: goto label_7F31216C;
    case 0x7F312170u: goto label_7F312170;
    case 0x7F312174u: goto label_7F312174;
    case 0x7F312178u: goto label_7F312178;
    case 0x7F31217Cu: goto label_7F31217C;
    case 0x7F312180u: goto label_7F312180;
    case 0x7F312184u: goto label_7F312184;
    case 0x7F312188u: goto label_7F312188;
    case 0x7F31218Cu: goto label_7F31218C;
    case 0x7F312190u: goto label_7F312190;
    case 0x7F312194u: goto label_7F312194;
    case 0x7F312198u: goto label_7F312198;
    case 0x7F31219Cu: goto label_7F31219C;
    case 0x7F3121A0u: goto label_7F3121A0;
    case 0x7F3121A4u: goto label_7F3121A4;
    case 0x7F3121A8u: goto label_7F3121A8;
    case 0x7F3121ACu: goto label_7F3121AC;
    case 0x7F3121B0u: goto label_7F3121B0;
    case 0x7F3121B4u: goto label_7F3121B4;
    case 0x7F3121B8u: goto label_7F3121B8;
    case 0x7F3121BCu: goto label_7F3121BC;
    case 0x7F3121C0u: goto label_7F3121C0;
    case 0x7F3121C4u: goto label_7F3121C4;
    case 0x7F3121C8u: goto label_7F3121C8;
    case 0x7F3121CCu: goto label_7F3121CC;
    case 0x7F3121D0u: goto label_7F3121D0;
    case 0x7F3121D4u: goto label_7F3121D4;
    case 0x7F3121D8u: goto label_7F3121D8;
    case 0x7F3121DCu: goto label_7F3121DC;
    case 0x7F3121E0u: goto label_7F3121E0;
    case 0x7F3121E4u: goto label_7F3121E4;
    case 0x7F3121E8u: goto label_7F3121E8;
    case 0x7F3121ECu: goto label_7F3121EC;
    case 0x7F3121F0u: goto label_7F3121F0;
    case 0x7F3121F4u: goto label_7F3121F4;
    case 0x7F3121F8u: goto label_7F3121F8;
    case 0x7F3121FCu: goto label_7F3121FC;
    case 0x7F312200u: goto label_7F312200;
    case 0x7F312204u: goto label_7F312204;
    case 0x7F312208u: goto label_7F312208;
    case 0x7F31220Cu: goto label_7F31220C;
    case 0x7F312210u: goto label_7F312210;
    case 0x7F312214u: goto label_7F312214;
    case 0x7F312218u: goto label_7F312218;
    case 0x7F31221Cu: goto label_7F31221C;
    case 0x7F312220u: goto label_7F312220;
    case 0x7F312224u: goto label_7F312224;
    case 0x7F312228u: goto label_7F312228;
    case 0x7F31222Cu: goto label_7F31222C;
    case 0x7F312230u: goto label_7F312230;
    case 0x7F312234u: goto label_7F312234;
    case 0x7F312238u: goto label_7F312238;
    case 0x7F31223Cu: goto label_7F31223C;
    case 0x7F312240u: goto label_7F312240;
    case 0x7F312244u: goto label_7F312244;
    case 0x7F312248u: goto label_7F312248;
    case 0x7F31224Cu: goto label_7F31224C;
    case 0x7F312250u: goto label_7F312250;
    case 0x7F312254u: goto label_7F312254;
    case 0x7F312258u: goto label_7F312258;
    case 0x7F31225Cu: goto label_7F31225C;
    case 0x7F312260u: goto label_7F312260;
    case 0x7F312264u: goto label_7F312264;
    case 0x7F312268u: goto label_7F312268;
    case 0x7F31226Cu: goto label_7F31226C;
    case 0x7F312270u: goto label_7F312270;
    case 0x7F312274u: goto label_7F312274;
    case 0x7F312278u: goto label_7F312278;
    case 0x7F31227Cu: goto label_7F31227C;
    case 0x7F312280u: goto label_7F312280;
    case 0x7F312284u: goto label_7F312284;
    case 0x7F312288u: goto label_7F312288;
    case 0x7F31228Cu: goto label_7F31228C;
    case 0x7F312290u: goto label_7F312290;
    case 0x7F312294u: goto label_7F312294;
    case 0x7F312298u: goto label_7F312298;
    case 0x7F31229Cu: goto label_7F31229C;
    case 0x7F3122A0u: goto label_7F3122A0;
    case 0x7F3122A4u: goto label_7F3122A4;
    case 0x7F3122A8u: goto label_7F3122A8;
    case 0x7F3122ACu: goto label_7F3122AC;
    case 0x7F3122B0u: goto label_7F3122B0;
    case 0x7F3122B4u: goto label_7F3122B4;
    case 0x7F3122B8u: goto label_7F3122B8;
    case 0x7F3122BCu: goto label_7F3122BC;
    case 0x7F3122C0u: goto label_7F3122C0;
    case 0x7F3122C4u: goto label_7F3122C4;
    case 0x7F3122C8u: goto label_7F3122C8;
    case 0x7F3122CCu: goto label_7F3122CC;
    case 0x7F3122D0u: goto label_7F3122D0;
    case 0x7F3122D4u: goto label_7F3122D4;
    case 0x7F3122D8u: goto label_7F3122D8;
    case 0x7F3122DCu: goto label_7F3122DC;
    case 0x7F3122E0u: goto label_7F3122E0;
    case 0x7F3122E4u: goto label_7F3122E4;
    case 0x7F3122E8u: goto label_7F3122E8;
    case 0x7F3122ECu: goto label_7F3122EC;
    case 0x7F3122F0u: goto label_7F3122F0;
    case 0x7F3122F4u: goto label_7F3122F4;
    case 0x7F3122F8u: goto label_7F3122F8;
    case 0x7F3122FCu: goto label_7F3122FC;
    case 0x7F312300u: goto label_7F312300;
    case 0x7F312304u: goto label_7F312304;
    case 0x7F312308u: goto label_7F312308;
    case 0x7F31230Cu: goto label_7F31230C;
    case 0x7F312310u: goto label_7F312310;
    case 0x7F312314u: goto label_7F312314;
    case 0x7F312318u: goto label_7F312318;
    case 0x7F31231Cu: goto label_7F31231C;
    case 0x7F312320u: goto label_7F312320;
    case 0x7F312324u: goto label_7F312324;
    case 0x7F312328u: goto label_7F312328;
    case 0x7F31232Cu: goto label_7F31232C;
    case 0x7F312330u: goto label_7F312330;
    case 0x7F312334u: goto label_7F312334;
    case 0x7F312338u: goto label_7F312338;
    case 0x7F31233Cu: goto label_7F31233C;
    case 0x7F312340u: goto label_7F312340;
    case 0x7F312344u: goto label_7F312344;
    case 0x7F312348u: goto label_7F312348;
    case 0x7F31234Cu: goto label_7F31234C;
    case 0x7F312350u: goto label_7F312350;
    case 0x7F312354u: goto label_7F312354;
    case 0x7F312358u: goto label_7F312358;
    case 0x7F31235Cu: goto label_7F31235C;
    case 0x7F312360u: goto label_7F312360;
    case 0x7F312364u: goto label_7F312364;
    case 0x7F312368u: goto label_7F312368;
    case 0x7F31236Cu: goto label_7F31236C;
    case 0x7F312370u: goto label_7F312370;
    case 0x7F312374u: goto label_7F312374;
    case 0x7F312378u: goto label_7F312378;
    case 0x7F31237Cu: goto label_7F31237C;
    case 0x7F312380u: goto label_7F312380;
    case 0x7F312384u: goto label_7F312384;
    case 0x7F312388u: goto label_7F312388;
    case 0x7F31238Cu: goto label_7F31238C;
    case 0x7F312390u: goto label_7F312390;
    case 0x7F312394u: goto label_7F312394;
    case 0x7F312398u: goto label_7F312398;
    case 0x7F31239Cu: goto label_7F31239C;
    case 0x7F3123A0u: goto label_7F3123A0;
    case 0x7F3123A4u: goto label_7F3123A4;
    case 0x7F3123A8u: goto label_7F3123A8;
    case 0x7F3123ACu: goto label_7F3123AC;
    case 0x7F3123B0u: goto label_7F3123B0;
    case 0x7F3123B4u: goto label_7F3123B4;
    case 0x7F3123B8u: goto label_7F3123B8;
    case 0x7F3123BCu: goto label_7F3123BC;
    case 0x7F3123C0u: goto label_7F3123C0;
    case 0x7F3123C4u: goto label_7F3123C4;
    case 0x7F3123C8u: goto label_7F3123C8;
    case 0x7F3123CCu: goto label_7F3123CC;
    case 0x7F3123D0u: goto label_7F3123D0;
    case 0x7F3123D4u: goto label_7F3123D4;
    case 0x7F3123D8u: goto label_7F3123D8;
    case 0x7F3123DCu: goto label_7F3123DC;
    case 0x7F3123E0u: goto label_7F3123E0;
    case 0x7F3123E4u: goto label_7F3123E4;
    case 0x7F3123E8u: goto label_7F3123E8;
    case 0x7F3123ECu: goto label_7F3123EC;
    case 0x7F3123F0u: goto label_7F3123F0;
    case 0x7F3123F4u: goto label_7F3123F4;
    case 0x7F3123F8u: goto label_7F3123F8;
    case 0x7F3123FCu: goto label_7F3123FC;
    case 0x7F312400u: goto label_7F312400;
    case 0x7F312404u: goto label_7F312404;
    case 0x7F312408u: goto label_7F312408;
    case 0x7F31240Cu: goto label_7F31240C;
    case 0x7F312410u: goto label_7F312410;
    case 0x7F312414u: goto label_7F312414;
    case 0x7F312418u: goto label_7F312418;
    case 0x7F31241Cu: goto label_7F31241C;
    case 0x7F312420u: goto label_7F312420;
    case 0x7F312424u: goto label_7F312424;
    case 0x7F312428u: goto label_7F312428;
    case 0x7F31242Cu: goto label_7F31242C;
    case 0x7F312430u: goto label_7F312430;
    case 0x7F312434u: goto label_7F312434;
    case 0x7F312438u: goto label_7F312438;
    case 0x7F31243Cu: goto label_7F31243C;
    case 0x7F312440u: goto label_7F312440;
    case 0x7F312444u: goto label_7F312444;
    case 0x7F312448u: goto label_7F312448;
    case 0x7F31244Cu: goto label_7F31244C;
    case 0x7F312450u: goto label_7F312450;
    case 0x7F312454u: goto label_7F312454;
    case 0x7F312458u: goto label_7F312458;
    case 0x7F31245Cu: goto label_7F31245C;
    case 0x7F312460u: goto label_7F312460;
    case 0x7F312464u: goto label_7F312464;
    case 0x7F312468u: goto label_7F312468;
    case 0x7F31246Cu: goto label_7F31246C;
    case 0x7F312470u: goto label_7F312470;
    case 0x7F312474u: goto label_7F312474;
    case 0x7F312478u: goto label_7F312478;
    case 0x7F31247Cu: goto label_7F31247C;
    case 0x7F312480u: goto label_7F312480;
    case 0x7F312484u: goto label_7F312484;
    case 0x7F312488u: goto label_7F312488;
    case 0x7F31248Cu: goto label_7F31248C;
    case 0x7F312490u: goto label_7F312490;
    case 0x7F312494u: goto label_7F312494;
    case 0x7F312498u: goto label_7F312498;
    case 0x7F31249Cu: goto label_7F31249C;
    case 0x7F3124A0u: goto label_7F3124A0;
    case 0x7F3124A4u: goto label_7F3124A4;
    case 0x7F3124A8u: goto label_7F3124A8;
    case 0x7F3124ACu: goto label_7F3124AC;
    case 0x7F3124B0u: goto label_7F3124B0;
    case 0x7F3124B4u: goto label_7F3124B4;
    case 0x7F3124B8u: goto label_7F3124B8;
    case 0x7F3124BCu: goto label_7F3124BC;
    case 0x7F3124C0u: goto label_7F3124C0;
    case 0x7F3124C4u: goto label_7F3124C4;
    case 0x7F3124C8u: goto label_7F3124C8;
    case 0x7F3124CCu: goto label_7F3124CC;
    case 0x7F3124D0u: goto label_7F3124D0;
    case 0x7F3124D4u: goto label_7F3124D4;
    case 0x7F3124D8u: goto label_7F3124D8;
    case 0x7F3124DCu: goto label_7F3124DC;
    case 0x7F3124E0u: goto label_7F3124E0;
    case 0x7F3124E4u: goto label_7F3124E4;
    case 0x7F3124E8u: goto label_7F3124E8;
    case 0x7F3124ECu: goto label_7F3124EC;
    case 0x7F3124F0u: goto label_7F3124F0;
    case 0x7F3124F4u: goto label_7F3124F4;
    case 0x7F3124F8u: goto label_7F3124F8;
    case 0x7F3124FCu: goto label_7F3124FC;
    case 0x7F312500u: goto label_7F312500;
    case 0x7F312504u: goto label_7F312504;
    case 0x7F312508u: goto label_7F312508;
    case 0x7F31250Cu: goto label_7F31250C;
    case 0x7F312510u: goto label_7F312510;
    case 0x7F312514u: goto label_7F312514;
    case 0x7F312518u: goto label_7F312518;
    case 0x7F31251Cu: goto label_7F31251C;
    case 0x7F312520u: goto label_7F312520;
    case 0x7F312524u: goto label_7F312524;
    case 0x7F312528u: goto label_7F312528;
    case 0x7F31252Cu: goto label_7F31252C;
    case 0x7F312530u: goto label_7F312530;
    case 0x7F312534u: goto label_7F312534;
    case 0x7F312538u: goto label_7F312538;
    case 0x7F31253Cu: goto label_7F31253C;
    case 0x7F312540u: goto label_7F312540;
    case 0x7F312544u: goto label_7F312544;
    case 0x7F312548u: goto label_7F312548;
    case 0x7F31254Cu: goto label_7F31254C;
    case 0x7F312550u: goto label_7F312550;
    case 0x7F312554u: goto label_7F312554;
    case 0x7F312558u: goto label_7F312558;
    case 0x7F31255Cu: goto label_7F31255C;
    case 0x7F312560u: goto label_7F312560;
    case 0x7F312564u: goto label_7F312564;
    case 0x7F312568u: goto label_7F312568;
    case 0x7F31256Cu: goto label_7F31256C;
    case 0x7F312570u: goto label_7F312570;
    case 0x7F312574u: goto label_7F312574;
    case 0x7F312578u: goto label_7F312578;
    case 0x7F31257Cu: goto label_7F31257C;
    case 0x7F312580u: goto label_7F312580;
    case 0x7F312584u: goto label_7F312584;
    case 0x7F312588u: goto label_7F312588;
    case 0x7F31258Cu: goto label_7F31258C;
    case 0x7F312590u: goto label_7F312590;
    case 0x7F312594u: goto label_7F312594;
    case 0x7F312598u: goto label_7F312598;
    case 0x7F31259Cu: goto label_7F31259C;
    case 0x7F3125A0u: goto label_7F3125A0;
    case 0x7F3125A4u: goto label_7F3125A4;
    case 0x7F3125A8u: goto label_7F3125A8;
    case 0x7F3125ACu: goto label_7F3125AC;
    case 0x7F3125B0u: goto label_7F3125B0;
    case 0x7F3125B4u: goto label_7F3125B4;
    case 0x7F3125B8u: goto label_7F3125B8;
    case 0x7F3125BCu: goto label_7F3125BC;
    case 0x7F3125C0u: goto label_7F3125C0;
    case 0x7F3125C4u: goto label_7F3125C4;
    case 0x7F3125C8u: goto label_7F3125C8;
    case 0x7F3125CCu: goto label_7F3125CC;
    case 0x7F3125D0u: goto label_7F3125D0;
    case 0x7F3125D4u: goto label_7F3125D4;
    case 0x7F3125D8u: goto label_7F3125D8;
    case 0x7F3125DCu: goto label_7F3125DC;
    case 0x7F3125E0u: goto label_7F3125E0;
    case 0x7F3125E4u: goto label_7F3125E4;
    case 0x7F3125E8u: goto label_7F3125E8;
    case 0x7F3125ECu: goto label_7F3125EC;
    case 0x7F3125F0u: goto label_7F3125F0;
    case 0x7F3125F4u: goto label_7F3125F4;
    case 0x7F3125F8u: goto label_7F3125F8;
    case 0x7F3125FCu: goto label_7F3125FC;
    case 0x7F312600u: goto label_7F312600;
    case 0x7F312604u: goto label_7F312604;
    case 0x7F312608u: goto label_7F312608;
    case 0x7F31260Cu: goto label_7F31260C;
    case 0x7F312610u: goto label_7F312610;
    case 0x7F312614u: goto label_7F312614;
    case 0x7F312618u: goto label_7F312618;
    case 0x7F31261Cu: goto label_7F31261C;
    case 0x7F312620u: goto label_7F312620;
    case 0x7F312624u: goto label_7F312624;
    case 0x7F312628u: goto label_7F312628;
    case 0x7F31262Cu: goto label_7F31262C;
    case 0x7F312630u: goto label_7F312630;
    case 0x7F312634u: goto label_7F312634;
    case 0x7F312638u: goto label_7F312638;
    case 0x7F31263Cu: goto label_7F31263C;
    case 0x7F312640u: goto label_7F312640;
    case 0x7F312644u: goto label_7F312644;
    case 0x7F312648u: goto label_7F312648;
    case 0x7F31264Cu: goto label_7F31264C;
    case 0x7F312650u: goto label_7F312650;
    case 0x7F312654u: goto label_7F312654;
    case 0x7F312658u: goto label_7F312658;
    case 0x7F31265Cu: goto label_7F31265C;
    case 0x7F312660u: goto label_7F312660;
    case 0x7F312664u: goto label_7F312664;
    case 0x7F312668u: goto label_7F312668;
    case 0x7F31266Cu: goto label_7F31266C;
    case 0x7F312670u: goto label_7F312670;
    case 0x7F312674u: goto label_7F312674;
    case 0x7F312678u: goto label_7F312678;
    case 0x7F31267Cu: goto label_7F31267C;
    case 0x7F312680u: goto label_7F312680;
    case 0x7F312684u: goto label_7F312684;
    case 0x7F312688u: goto label_7F312688;
    case 0x7F31268Cu: goto label_7F31268C;
    case 0x7F312690u: goto label_7F312690;
    case 0x7F312694u: goto label_7F312694;
    case 0x7F312698u: goto label_7F312698;
    case 0x7F31269Cu: goto label_7F31269C;
    case 0x7F3126A0u: goto label_7F3126A0;
    case 0x7F3126A4u: goto label_7F3126A4;
    case 0x7F3126A8u: goto label_7F3126A8;
    case 0x7F3126ACu: goto label_7F3126AC;
    case 0x7F3126B0u: goto label_7F3126B0;
    case 0x7F3126B4u: goto label_7F3126B4;
    case 0x7F3126B8u: goto label_7F3126B8;
    case 0x7F3126BCu: goto label_7F3126BC;
    case 0x7F3126C0u: goto label_7F3126C0;
    case 0x7F3126C4u: goto label_7F3126C4;
    case 0x7F3126C8u: goto label_7F3126C8;
    case 0x7F3126CCu: goto label_7F3126CC;
    case 0x7F3126D0u: goto label_7F3126D0;
    case 0x7F3126D4u: goto label_7F3126D4;
    case 0x7F3126D8u: goto label_7F3126D8;
    case 0x7F3126DCu: goto label_7F3126DC;
    case 0x7F3126E0u: goto label_7F3126E0;
    case 0x7F3126E4u: goto label_7F3126E4;
    case 0x7F3126E8u: goto label_7F3126E8;
    case 0x7F3126ECu: goto label_7F3126EC;
    case 0x7F3126F0u: goto label_7F3126F0;
    case 0x7F3126F4u: goto label_7F3126F4;
    case 0x7F3126F8u: goto label_7F3126F8;
    case 0x7F3126FCu: goto label_7F3126FC;
    case 0x7F312700u: goto label_7F312700;
    case 0x7F312704u: goto label_7F312704;
    case 0x7F312708u: goto label_7F312708;
    case 0x7F31270Cu: goto label_7F31270C;
    case 0x7F312710u: goto label_7F312710;
    case 0x7F312714u: goto label_7F312714;
    case 0x7F312718u: goto label_7F312718;
    case 0x7F31271Cu: goto label_7F31271C;
    case 0x7F312720u: goto label_7F312720;
    case 0x7F312724u: goto label_7F312724;
    case 0x7F312728u: goto label_7F312728;
    case 0x7F31272Cu: goto label_7F31272C;
    case 0x7F312730u: goto label_7F312730;
    case 0x7F312734u: goto label_7F312734;
    case 0x7F312738u: goto label_7F312738;
    case 0x7F31273Cu: goto label_7F31273C;
    case 0x7F312740u: goto label_7F312740;
    case 0x7F312744u: goto label_7F312744;
    case 0x7F312748u: goto label_7F312748;
    case 0x7F31274Cu: goto label_7F31274C;
    case 0x7F312750u: goto label_7F312750;
    case 0x7F312754u: goto label_7F312754;
    case 0x7F312758u: goto label_7F312758;
    case 0x7F31275Cu: goto label_7F31275C;
    case 0x7F312760u: goto label_7F312760;
    case 0x7F312764u: goto label_7F312764;
    case 0x7F312768u: goto label_7F312768;
    case 0x7F31276Cu: goto label_7F31276C;
    case 0x7F312770u: goto label_7F312770;
    case 0x7F312774u: goto label_7F312774;
    case 0x7F312778u: goto label_7F312778;
    case 0x7F31277Cu: goto label_7F31277C;
    case 0x7F312780u: goto label_7F312780;
    case 0x7F312784u: goto label_7F312784;
    case 0x7F312788u: goto label_7F312788;
    case 0x7F31278Cu: goto label_7F31278C;
    case 0x7F312790u: goto label_7F312790;
    case 0x7F312794u: goto label_7F312794;
    case 0x7F312798u: goto label_7F312798;
    case 0x7F31279Cu: goto label_7F31279C;
    case 0x7F3127A0u: goto label_7F3127A0;
    case 0x7F3127A4u: goto label_7F3127A4;
    case 0x7F3127A8u: goto label_7F3127A8;
    case 0x7F3127ACu: goto label_7F3127AC;
    case 0x7F3127B0u: goto label_7F3127B0;
    case 0x7F3127B4u: goto label_7F3127B4;
    case 0x7F3127B8u: goto label_7F3127B8;
    case 0x7F3127BCu: goto label_7F3127BC;
    case 0x7F3127C0u: goto label_7F3127C0;
    case 0x7F3127C4u: goto label_7F3127C4;
    case 0x7F3127C8u: goto label_7F3127C8;
    case 0x7F3127CCu: goto label_7F3127CC;
    case 0x7F3127D0u: goto label_7F3127D0;
    case 0x7F3127D4u: goto label_7F3127D4;
    case 0x7F3127D8u: goto label_7F3127D8;
    case 0x7F3127DCu: goto label_7F3127DC;
    case 0x7F3127E0u: goto label_7F3127E0;
    case 0x7F3127E4u: goto label_7F3127E4;
    case 0x7F3127E8u: goto label_7F3127E8;
    case 0x7F3127ECu: goto label_7F3127EC;
    case 0x7F3127F0u: goto label_7F3127F0;
    case 0x7F3127F4u: goto label_7F3127F4;
    case 0x7F3127F8u: goto label_7F3127F8;
    case 0x7F3127FCu: goto label_7F3127FC;
    case 0x7F312800u: goto label_7F312800;
    case 0x7F312804u: goto label_7F312804;
    case 0x7F312808u: goto label_7F312808;
    case 0x7F31280Cu: goto label_7F31280C;
    case 0x7F312810u: goto label_7F312810;
    case 0x7F312814u: goto label_7F312814;
    case 0x7F312818u: goto label_7F312818;
    case 0x7F31281Cu: goto label_7F31281C;
    case 0x7F312820u: goto label_7F312820;
    case 0x7F312824u: goto label_7F312824;
    case 0x7F312828u: goto label_7F312828;
    case 0x7F31282Cu: goto label_7F31282C;
    case 0x7F312830u: goto label_7F312830;
    case 0x7F312834u: goto label_7F312834;
    case 0x7F312838u: goto label_7F312838;
    case 0x7F31283Cu: goto label_7F31283C;
    case 0x7F312840u: goto label_7F312840;
    case 0x7F312844u: goto label_7F312844;
    case 0x7F312848u: goto label_7F312848;
    case 0x7F31284Cu: goto label_7F31284C;
    case 0x7F312850u: goto label_7F312850;
    case 0x7F312854u: goto label_7F312854;
    case 0x7F312858u: goto label_7F312858;
    case 0x7F31285Cu: goto label_7F31285C;
    case 0x7F312860u: goto label_7F312860;
    case 0x7F312864u: goto label_7F312864;
    case 0x7F312868u: goto label_7F312868;
    case 0x7F31286Cu: goto label_7F31286C;
    case 0x7F312870u: goto label_7F312870;
    case 0x7F312874u: goto label_7F312874;
    case 0x7F312878u: goto label_7F312878;
    case 0x7F31287Cu: goto label_7F31287C;
    case 0x7F312880u: goto label_7F312880;
    case 0x7F312884u: goto label_7F312884;
    case 0x7F312888u: goto label_7F312888;
    case 0x7F31288Cu: goto label_7F31288C;
    case 0x7F312890u: goto label_7F312890;
    case 0x7F312894u: goto label_7F312894;
    case 0x7F312898u: goto label_7F312898;
    case 0x7F31289Cu: goto label_7F31289C;
    case 0x7F3128A0u: goto label_7F3128A0;
    case 0x7F3128A4u: goto label_7F3128A4;
    case 0x7F3128A8u: goto label_7F3128A8;
    case 0x7F3128ACu: goto label_7F3128AC;
    case 0x7F3128B0u: goto label_7F3128B0;
    case 0x7F3128B4u: goto label_7F3128B4;
    case 0x7F3128B8u: goto label_7F3128B8;
    case 0x7F3128BCu: goto label_7F3128BC;
    case 0x7F3128C0u: goto label_7F3128C0;
    case 0x7F3128C4u: goto label_7F3128C4;
    case 0x7F3128C8u: goto label_7F3128C8;
    case 0x7F3128CCu: goto label_7F3128CC;
    case 0x7F3128D0u: goto label_7F3128D0;
    case 0x7F3128D4u: goto label_7F3128D4;
    case 0x7F3128D8u: goto label_7F3128D8;
    case 0x7F3128DCu: goto label_7F3128DC;
    case 0x7F3128E0u: goto label_7F3128E0;
    case 0x7F3128E4u: goto label_7F3128E4;
    case 0x7F3128E8u: goto label_7F3128E8;
    case 0x7F3128ECu: goto label_7F3128EC;
    case 0x7F3128F0u: goto label_7F3128F0;
    case 0x7F3128F4u: goto label_7F3128F4;
    case 0x7F3128F8u: goto label_7F3128F8;
    case 0x7F3128FCu: goto label_7F3128FC;
    case 0x7F312900u: goto label_7F312900;
    case 0x7F312904u: goto label_7F312904;
    case 0x7F312908u: goto label_7F312908;
    case 0x7F31290Cu: goto label_7F31290C;
    case 0x7F312910u: goto label_7F312910;
    case 0x7F312914u: goto label_7F312914;
    case 0x7F312918u: goto label_7F312918;
    case 0x7F31291Cu: goto label_7F31291C;
    case 0x7F312920u: goto label_7F312920;
    case 0x7F312924u: goto label_7F312924;
    case 0x7F312928u: goto label_7F312928;
    case 0x7F31292Cu: goto label_7F31292C;
    case 0x7F312930u: goto label_7F312930;
    case 0x7F312934u: goto label_7F312934;
    case 0x7F312938u: goto label_7F312938;
    case 0x7F31293Cu: goto label_7F31293C;
    case 0x7F312940u: goto label_7F312940;
    case 0x7F312944u: goto label_7F312944;
    case 0x7F312948u: goto label_7F312948;
    case 0x7F31294Cu: goto label_7F31294C;
    case 0x7F312950u: goto label_7F312950;
    case 0x7F312954u: goto label_7F312954;
    case 0x7F312958u: goto label_7F312958;
    case 0x7F31295Cu: goto label_7F31295C;
    case 0x7F312960u: goto label_7F312960;
    case 0x7F312964u: goto label_7F312964;
    case 0x7F312968u: goto label_7F312968;
    case 0x7F31296Cu: goto label_7F31296C;
    case 0x7F312970u: goto label_7F312970;
    case 0x7F312974u: goto label_7F312974;
    case 0x7F312978u: goto label_7F312978;
    case 0x7F31297Cu: goto label_7F31297C;
    case 0x7F312980u: goto label_7F312980;
    case 0x7F312984u: goto label_7F312984;
    case 0x7F312988u: goto label_7F312988;
    case 0x7F31298Cu: goto label_7F31298C;
    case 0x7F312990u: goto label_7F312990;
    case 0x7F312994u: goto label_7F312994;
    case 0x7F312998u: goto label_7F312998;
    case 0x7F31299Cu: goto label_7F31299C;
    case 0x7F3129A0u: goto label_7F3129A0;
    case 0x7F3129A4u: goto label_7F3129A4;
    case 0x7F3129A8u: goto label_7F3129A8;
    case 0x7F3129ACu: goto label_7F3129AC;
    case 0x7F3129B0u: goto label_7F3129B0;
    case 0x7F3129B4u: goto label_7F3129B4;
    case 0x7F3129B8u: goto label_7F3129B8;
    case 0x7F3129BCu: goto label_7F3129BC;
    case 0x7F3129C0u: goto label_7F3129C0;
    case 0x7F3129C4u: goto label_7F3129C4;
    case 0x7F3129C8u: goto label_7F3129C8;
    case 0x7F3129CCu: goto label_7F3129CC;
    case 0x7F3129D0u: goto label_7F3129D0;
    case 0x7F3129D4u: goto label_7F3129D4;
    case 0x7F3129D8u: goto label_7F3129D8;
    case 0x7F3129DCu: goto label_7F3129DC;
    case 0x7F3129E0u: goto label_7F3129E0;
    case 0x7F3129E4u: goto label_7F3129E4;
    case 0x7F3129E8u: goto label_7F3129E8;
    case 0x7F3129ECu: goto label_7F3129EC;
    case 0x7F3129F0u: goto label_7F3129F0;
    case 0x7F3129F4u: goto label_7F3129F4;
    case 0x7F3129F8u: goto label_7F3129F8;
    case 0x7F3129FCu: goto label_7F3129FC;
    case 0x7F312A00u: goto label_7F312A00;
    case 0x7F312A04u: goto label_7F312A04;
    case 0x7F312A08u: goto label_7F312A08;
    case 0x7F312A0Cu: goto label_7F312A0C;
    case 0x7F312A10u: goto label_7F312A10;
    case 0x7F312A14u: goto label_7F312A14;
    case 0x7F312A18u: goto label_7F312A18;
    case 0x7F312A1Cu: goto label_7F312A1C;
    case 0x7F312A20u: goto label_7F312A20;
    case 0x7F312A24u: goto label_7F312A24;
    case 0x7F312A28u: goto label_7F312A28;
    case 0x7F312A2Cu: goto label_7F312A2C;
    case 0x7F312A30u: goto label_7F312A30;
    case 0x7F312A34u: goto label_7F312A34;
    case 0x7F312A38u: goto label_7F312A38;
    case 0x7F312A3Cu: goto label_7F312A3C;
    case 0x7F312A40u: goto label_7F312A40;
    case 0x7F312A44u: goto label_7F312A44;
    case 0x7F312A48u: goto label_7F312A48;
    case 0x7F312A4Cu: goto label_7F312A4C;
    case 0x7F312A50u: goto label_7F312A50;
    case 0x7F312A54u: goto label_7F312A54;
    case 0x7F312A58u: goto label_7F312A58;
    case 0x7F312A5Cu: goto label_7F312A5C;
    case 0x7F312A60u: goto label_7F312A60;
    case 0x7F312A64u: goto label_7F312A64;
    case 0x7F312A68u: goto label_7F312A68;
    case 0x7F312A6Cu: goto label_7F312A6C;
    case 0x7F312A70u: goto label_7F312A70;
    case 0x7F312A74u: goto label_7F312A74;
    case 0x7F312A78u: goto label_7F312A78;
    case 0x7F312A7Cu: goto label_7F312A7C;
    case 0x7F312A80u: goto label_7F312A80;
    case 0x7F312A84u: goto label_7F312A84;
    case 0x7F312A88u: goto label_7F312A88;
    case 0x7F312A8Cu: goto label_7F312A8C;
    case 0x7F312A90u: goto label_7F312A90;
    case 0x7F312A94u: goto label_7F312A94;
    case 0x7F312A98u: goto label_7F312A98;
    case 0x7F312A9Cu: goto label_7F312A9C;
    case 0x7F312AA0u: goto label_7F312AA0;
    case 0x7F312AA4u: goto label_7F312AA4;
    case 0x7F312AA8u: goto label_7F312AA8;
    case 0x7F312AACu: goto label_7F312AAC;
    case 0x7F312AB0u: goto label_7F312AB0;
    case 0x7F312AB4u: goto label_7F312AB4;
    case 0x7F312AB8u: goto label_7F312AB8;
    case 0x7F312ABCu: goto label_7F312ABC;
    case 0x7F312AC0u: goto label_7F312AC0;
    case 0x7F312AC4u: goto label_7F312AC4;
    case 0x7F312AC8u: goto label_7F312AC8;
    case 0x7F312ACCu: goto label_7F312ACC;
    case 0x7F312AD0u: goto label_7F312AD0;
    case 0x7F312AD4u: goto label_7F312AD4;
    case 0x7F312AD8u: goto label_7F312AD8;
    case 0x7F312ADCu: goto label_7F312ADC;
    case 0x7F312AE0u: goto label_7F312AE0;
    case 0x7F312AE4u: goto label_7F312AE4;
    case 0x7F312AE8u: goto label_7F312AE8;
    case 0x7F312AECu: goto label_7F312AEC;
    case 0x7F312AF0u: goto label_7F312AF0;
    case 0x7F312AF4u: goto label_7F312AF4;
    case 0x7F312AF8u: goto label_7F312AF8;
    case 0x7F312AFCu: goto label_7F312AFC;
    case 0x7F312B00u: goto label_7F312B00;
    case 0x7F312B04u: goto label_7F312B04;
    case 0x7F312B08u: goto label_7F312B08;
    case 0x7F312B0Cu: goto label_7F312B0C;
    case 0x7F312B10u: goto label_7F312B10;
    case 0x7F312B14u: goto label_7F312B14;
    case 0x7F312B18u: goto label_7F312B18;
    case 0x7F312B1Cu: goto label_7F312B1C;
    case 0x7F312B20u: goto label_7F312B20;
    case 0x7F312B24u: goto label_7F312B24;
    case 0x7F312B28u: goto label_7F312B28;
    case 0x7F312B2Cu: goto label_7F312B2C;
    case 0x7F312B30u: goto label_7F312B30;
    case 0x7F312B34u: goto label_7F312B34;
    case 0x7F312B38u: goto label_7F312B38;
    case 0x7F312B3Cu: goto label_7F312B3C;
    case 0x7F312B40u: goto label_7F312B40;
    case 0x7F312B44u: goto label_7F312B44;
    case 0x7F312B48u: goto label_7F312B48;
    case 0x7F312B4Cu: goto label_7F312B4C;
    case 0x7F312B50u: goto label_7F312B50;
    case 0x7F312B54u: goto label_7F312B54;
    case 0x7F312B58u: goto label_7F312B58;
    case 0x7F312B5Cu: goto label_7F312B5C;
    case 0x7F312B60u: goto label_7F312B60;
    case 0x7F312B64u: goto label_7F312B64;
    case 0x7F312B68u: goto label_7F312B68;
    case 0x7F312B6Cu: goto label_7F312B6C;
    case 0x7F312B70u: goto label_7F312B70;
    case 0x7F312B74u: goto label_7F312B74;
    case 0x7F312B78u: goto label_7F312B78;
    case 0x7F312B7Cu: goto label_7F312B7C;
    case 0x7F312B80u: goto label_7F312B80;
    case 0x7F312B84u: goto label_7F312B84;
    case 0x7F312B88u: goto label_7F312B88;
    case 0x7F312B8Cu: goto label_7F312B8C;
    case 0x7F312B90u: goto label_7F312B90;
    case 0x7F312B94u: goto label_7F312B94;
    case 0x7F312B98u: goto label_7F312B98;
    case 0x7F312B9Cu: goto label_7F312B9C;
    case 0x7F312BA0u: goto label_7F312BA0;
    case 0x7F312BA4u: goto label_7F312BA4;
    case 0x7F312BA8u: goto label_7F312BA8;
    case 0x7F312BACu: goto label_7F312BAC;
    case 0x7F312BB0u: goto label_7F312BB0;
    case 0x7F312BB4u: goto label_7F312BB4;
    case 0x7F312BB8u: goto label_7F312BB8;
    case 0x7F312BBCu: goto label_7F312BBC;
    case 0x7F312BC0u: goto label_7F312BC0;
    case 0x7F312BC4u: goto label_7F312BC4;
    case 0x7F312BC8u: goto label_7F312BC8;
    case 0x7F312BCCu: goto label_7F312BCC;
    case 0x7F312BD0u: goto label_7F312BD0;
    case 0x7F312BD4u: goto label_7F312BD4;
    case 0x7F312BD8u: goto label_7F312BD8;
    case 0x7F312BDCu: goto label_7F312BDC;
    case 0x7F312BE0u: goto label_7F312BE0;
    case 0x7F312BE4u: goto label_7F312BE4;
    case 0x7F312BE8u: goto label_7F312BE8;
    case 0x7F312BECu: goto label_7F312BEC;
    case 0x7F312BF0u: goto label_7F312BF0;
    case 0x7F312BF4u: goto label_7F312BF4;
    case 0x7F312BF8u: goto label_7F312BF8;
    case 0x7F312BFCu: goto label_7F312BFC;
    case 0x7F312C00u: goto label_7F312C00;
    case 0x7F312C04u: goto label_7F312C04;
    case 0x7F312C08u: goto label_7F312C08;
    case 0x7F312C0Cu: goto label_7F312C0C;
    case 0x7F312C10u: goto label_7F312C10;
    case 0x7F312C14u: goto label_7F312C14;
    case 0x7F312C18u: goto label_7F312C18;
    case 0x7F312C1Cu: goto label_7F312C1C;
    case 0x7F312C20u: goto label_7F312C20;
    case 0x7F312C24u: goto label_7F312C24;
    case 0x7F312C28u: goto label_7F312C28;
    case 0x7F312C2Cu: goto label_7F312C2C;
    case 0x7F312C30u: goto label_7F312C30;
    case 0x7F312C34u: goto label_7F312C34;
    case 0x7F312C38u: goto label_7F312C38;
    case 0x7F312C3Cu: goto label_7F312C3C;
    case 0x7F312C40u: goto label_7F312C40;
    case 0x7F312C44u: goto label_7F312C44;
    case 0x7F312C48u: goto label_7F312C48;
    case 0x7F312C4Cu: goto label_7F312C4C;
    case 0x7F312C50u: goto label_7F312C50;
    case 0x7F312C54u: goto label_7F312C54;
    case 0x7F312C58u: goto label_7F312C58;
    case 0x7F312C5Cu: goto label_7F312C5C;
    case 0x7F312C60u: goto label_7F312C60;
    case 0x7F312C64u: goto label_7F312C64;
    case 0x7F312C68u: goto label_7F312C68;
    case 0x7F312C6Cu: goto label_7F312C6C;
    case 0x7F312C70u: goto label_7F312C70;
    case 0x7F312C74u: goto label_7F312C74;
    case 0x7F312C78u: goto label_7F312C78;
    case 0x7F312C7Cu: goto label_7F312C7C;
    case 0x7F312C80u: goto label_7F312C80;
    case 0x7F312C84u: goto label_7F312C84;
    case 0x7F312C88u: goto label_7F312C88;
    case 0x7F312C8Cu: goto label_7F312C8C;
    case 0x7F312C90u: goto label_7F312C90;
    case 0x7F312C94u: goto label_7F312C94;
    case 0x7F312C98u: goto label_7F312C98;
    case 0x7F312C9Cu: goto label_7F312C9C;
    case 0x7F312CA0u: goto label_7F312CA0;
    case 0x7F312CA4u: goto label_7F312CA4;
    case 0x7F312CA8u: goto label_7F312CA8;
    case 0x7F312CACu: goto label_7F312CAC;
    case 0x7F312CB0u: goto label_7F312CB0;
    case 0x7F312CB4u: goto label_7F312CB4;
    case 0x7F312CB8u: goto label_7F312CB8;
    case 0x7F312CBCu: goto label_7F312CBC;
    case 0x7F312CC0u: goto label_7F312CC0;
    case 0x7F312CC4u: goto label_7F312CC4;
    case 0x7F312CC8u: goto label_7F312CC8;
    case 0x7F312CCCu: goto label_7F312CCC;
    case 0x7F312CD0u: goto label_7F312CD0;
    case 0x7F312CD4u: goto label_7F312CD4;
    case 0x7F312CD8u: goto label_7F312CD8;
    case 0x7F312CDCu: goto label_7F312CDC;
    case 0x7F312CE0u: goto label_7F312CE0;
    case 0x7F312CE4u: goto label_7F312CE4;
    case 0x7F312CE8u: goto label_7F312CE8;
    case 0x7F312CECu: goto label_7F312CEC;
    case 0x7F312CF0u: goto label_7F312CF0;
    case 0x7F312CF4u: goto label_7F312CF4;
    case 0x7F312CF8u: goto label_7F312CF8;
    case 0x7F312CFCu: goto label_7F312CFC;
    case 0x7F312D00u: goto label_7F312D00;
    case 0x7F312D04u: goto label_7F312D04;
    case 0x7F312D08u: goto label_7F312D08;
    case 0x7F312D0Cu: goto label_7F312D0C;
    case 0x7F312D10u: goto label_7F312D10;
    case 0x7F312D14u: goto label_7F312D14;
    case 0x7F312D18u: goto label_7F312D18;
    case 0x7F312D1Cu: goto label_7F312D1C;
    case 0x7F312D20u: goto label_7F312D20;
    case 0x7F312D24u: goto label_7F312D24;
    case 0x7F312D28u: goto label_7F312D28;
    case 0x7F312D2Cu: goto label_7F312D2C;
    case 0x7F312D30u: goto label_7F312D30;
    case 0x7F312D34u: goto label_7F312D34;
    case 0x7F312D38u: goto label_7F312D38;
    case 0x7F312D3Cu: goto label_7F312D3C;
    case 0x7F312D40u: goto label_7F312D40;
    case 0x7F312D44u: goto label_7F312D44;
    case 0x7F312D48u: goto label_7F312D48;
    case 0x7F312D4Cu: goto label_7F312D4C;
    case 0x7F312D50u: goto label_7F312D50;
    case 0x7F312D54u: goto label_7F312D54;
    case 0x7F312D58u: goto label_7F312D58;
    case 0x7F312D5Cu: goto label_7F312D5C;
    case 0x7F312D60u: goto label_7F312D60;
    case 0x7F312D64u: goto label_7F312D64;
    case 0x7F312D68u: goto label_7F312D68;
    case 0x7F312D6Cu: goto label_7F312D6C;
    case 0x7F312D70u: goto label_7F312D70;
    case 0x7F312D74u: goto label_7F312D74;
    case 0x7F312D78u: goto label_7F312D78;
    case 0x7F312D7Cu: goto label_7F312D7C;
    case 0x7F312D80u: goto label_7F312D80;
    case 0x7F312D84u: goto label_7F312D84;
    case 0x7F312D88u: goto label_7F312D88;
    case 0x7F312D8Cu: goto label_7F312D8C;
    case 0x7F312D90u: goto label_7F312D90;
    case 0x7F312D94u: goto label_7F312D94;
    case 0x7F312D98u: goto label_7F312D98;
    case 0x7F312D9Cu: goto label_7F312D9C;
    case 0x7F312DA0u: goto label_7F312DA0;
    case 0x7F312DA4u: goto label_7F312DA4;
    case 0x7F312DA8u: goto label_7F312DA8;
    case 0x7F312DACu: goto label_7F312DAC;
    case 0x7F312DB0u: goto label_7F312DB0;
    case 0x7F312DB4u: goto label_7F312DB4;
    case 0x7F312DB8u: goto label_7F312DB8;
    case 0x7F312DBCu: goto label_7F312DBC;
    case 0x7F312DC0u: goto label_7F312DC0;
    case 0x7F312DC4u: goto label_7F312DC4;
    case 0x7F312DC8u: goto label_7F312DC8;
    case 0x7F312DCCu: goto label_7F312DCC;
    case 0x7F312DD0u: goto label_7F312DD0;
    case 0x7F312DD4u: goto label_7F312DD4;
    case 0x7F312DD8u: goto label_7F312DD8;
    case 0x7F312DDCu: goto label_7F312DDC;
    case 0x7F312DE0u: goto label_7F312DE0;
    case 0x7F312DE4u: goto label_7F312DE4;
    case 0x7F312DE8u: goto label_7F312DE8;
    case 0x7F312DECu: goto label_7F312DEC;
    case 0x7F312DF0u: goto label_7F312DF0;
    case 0x7F312DF4u: goto label_7F312DF4;
    case 0x7F312DF8u: goto label_7F312DF8;
    case 0x7F312DFCu: goto label_7F312DFC;
    case 0x7F312E00u: goto label_7F312E00;
    case 0x7F312E04u: goto label_7F312E04;
    case 0x7F312E08u: goto label_7F312E08;
    case 0x7F312E0Cu: goto label_7F312E0C;
    case 0x7F312E10u: goto label_7F312E10;
    case 0x7F312E14u: goto label_7F312E14;
    case 0x7F312E18u: goto label_7F312E18;
    case 0x7F312E1Cu: goto label_7F312E1C;
    case 0x7F312E20u: goto label_7F312E20;
    case 0x7F312E24u: goto label_7F312E24;
    case 0x7F312E28u: goto label_7F312E28;
    case 0x7F312E2Cu: goto label_7F312E2C;
    case 0x7F312E30u: goto label_7F312E30;
    case 0x7F312E34u: goto label_7F312E34;
    case 0x7F312E38u: goto label_7F312E38;
    case 0x7F312E3Cu: goto label_7F312E3C;
    case 0x7F312E40u: goto label_7F312E40;
    case 0x7F312E44u: goto label_7F312E44;
    case 0x7F312E48u: goto label_7F312E48;
    case 0x7F312E4Cu: goto label_7F312E4C;
    case 0x7F312E50u: goto label_7F312E50;
    case 0x7F312E54u: goto label_7F312E54;
    case 0x7F312E58u: goto label_7F312E58;
    case 0x7F312E5Cu: goto label_7F312E5C;
    case 0x7F312E60u: goto label_7F312E60;
    case 0x7F312E64u: goto label_7F312E64;
    case 0x7F312E68u: goto label_7F312E68;
    case 0x7F312E6Cu: goto label_7F312E6C;
    case 0x7F312E70u: goto label_7F312E70;
    case 0x7F312E74u: goto label_7F312E74;
    case 0x7F312E78u: goto label_7F312E78;
    case 0x7F312E7Cu: goto label_7F312E7C;
    case 0x7F312E80u: goto label_7F312E80;
    case 0x7F312E84u: goto label_7F312E84;
    case 0x7F312E88u: goto label_7F312E88;
    case 0x7F312E8Cu: goto label_7F312E8C;
    case 0x7F312E90u: goto label_7F312E90;
    case 0x7F312E94u: goto label_7F312E94;
    case 0x7F312E98u: goto label_7F312E98;
    case 0x7F312E9Cu: goto label_7F312E9C;
    case 0x7F312EA0u: goto label_7F312EA0;
    case 0x7F312EA4u: goto label_7F312EA4;
    case 0x7F312EA8u: goto label_7F312EA8;
    case 0x7F312EACu: goto label_7F312EAC;
    case 0x7F312EB0u: goto label_7F312EB0;
    case 0x7F312EB4u: goto label_7F312EB4;
    case 0x7F312EB8u: goto label_7F312EB8;
    case 0x7F312EBCu: goto label_7F312EBC;
    case 0x7F312EC0u: goto label_7F312EC0;
    case 0x7F312EC4u: goto label_7F312EC4;
    case 0x7F312EC8u: goto label_7F312EC8;
    case 0x7F312ECCu: goto label_7F312ECC;
    case 0x7F312ED0u: goto label_7F312ED0;
    case 0x7F312ED4u: goto label_7F312ED4;
    case 0x7F312ED8u: goto label_7F312ED8;
    case 0x7F312EDCu: goto label_7F312EDC;
    case 0x7F312EE0u: goto label_7F312EE0;
    case 0x7F312EE4u: goto label_7F312EE4;
    case 0x7F312EE8u: goto label_7F312EE8;
    case 0x7F312EECu: goto label_7F312EEC;
    case 0x7F312EF0u: goto label_7F312EF0;
    case 0x7F312EF4u: goto label_7F312EF4;
    case 0x7F312EF8u: goto label_7F312EF8;
    case 0x7F312EFCu: goto label_7F312EFC;
    case 0x7F312F00u: goto label_7F312F00;
    case 0x7F312F04u: goto label_7F312F04;
    case 0x7F312F08u: goto label_7F312F08;
    case 0x7F312F0Cu: goto label_7F312F0C;
    case 0x7F312F10u: goto label_7F312F10;
    case 0x7F312F14u: goto label_7F312F14;
    case 0x7F312F18u: goto label_7F312F18;
    case 0x7F312F1Cu: goto label_7F312F1C;
    case 0x7F312F20u: goto label_7F312F20;
    case 0x7F312F24u: goto label_7F312F24;
    case 0x7F312F28u: goto label_7F312F28;
    case 0x7F312F2Cu: goto label_7F312F2C;
    case 0x7F312F30u: goto label_7F312F30;
    case 0x7F312F34u: goto label_7F312F34;
    case 0x7F312F38u: goto label_7F312F38;
    case 0x7F312F3Cu: goto label_7F312F3C;
    case 0x7F312F40u: goto label_7F312F40;
    case 0x7F312F44u: goto label_7F312F44;
    case 0x7F312F48u: goto label_7F312F48;
    case 0x7F312F4Cu: goto label_7F312F4C;
    case 0x7F312F50u: goto label_7F312F50;
    case 0x7F312F54u: goto label_7F312F54;
    case 0x7F312F58u: goto label_7F312F58;
    case 0x7F312F5Cu: goto label_7F312F5C;
    case 0x7F312F60u: goto label_7F312F60;
    case 0x7F312F64u: goto label_7F312F64;
    case 0x7F312F68u: goto label_7F312F68;
    case 0x7F312F6Cu: goto label_7F312F6C;
    case 0x7F312F70u: goto label_7F312F70;
    case 0x7F312F74u: goto label_7F312F74;
    case 0x7F312F78u: goto label_7F312F78;
    case 0x7F312F7Cu: goto label_7F312F7C;
    case 0x7F312F80u: goto label_7F312F80;
    case 0x7F312F84u: goto label_7F312F84;
    case 0x7F312F88u: goto label_7F312F88;
    case 0x7F312F8Cu: goto label_7F312F8C;
    case 0x7F312F90u: goto label_7F312F90;
    case 0x7F312F94u: goto label_7F312F94;
    case 0x7F312F98u: goto label_7F312F98;
    case 0x7F312F9Cu: goto label_7F312F9C;
    case 0x7F312FA0u: goto label_7F312FA0;
    case 0x7F312FA4u: goto label_7F312FA4;
    case 0x7F312FA8u: goto label_7F312FA8;
    case 0x7F312FACu: goto label_7F312FAC;
    case 0x7F312FB0u: goto label_7F312FB0;
    case 0x7F312FB4u: goto label_7F312FB4;
    case 0x7F312FB8u: goto label_7F312FB8;
    case 0x7F312FBCu: goto label_7F312FBC;
    case 0x7F312FC0u: goto label_7F312FC0;
    case 0x7F312FC4u: goto label_7F312FC4;
    case 0x7F312FC8u: goto label_7F312FC8;
    case 0x7F312FCCu: goto label_7F312FCC;
    case 0x7F312FD0u: goto label_7F312FD0;
    case 0x7F312FD4u: goto label_7F312FD4;
    case 0x7F312FD8u: goto label_7F312FD8;
    case 0x7F312FDCu: goto label_7F312FDC;
    case 0x7F312FE0u: goto label_7F312FE0;
    case 0x7F312FE4u: goto label_7F312FE4;
    case 0x7F312FE8u: goto label_7F312FE8;
    case 0x7F312FECu: goto label_7F312FEC;
    case 0x7F312FF0u: goto label_7F312FF0;
    case 0x7F312FF4u: goto label_7F312FF4;
    case 0x7F312FF8u: goto label_7F312FF8;
    case 0x7F312FFCu: goto label_7F312FFC;
    case 0x7F313000u: goto label_7F313000;
    case 0x7F313004u: goto label_7F313004;
    case 0x7F313008u: goto label_7F313008;
    case 0x7F31300Cu: goto label_7F31300C;
    case 0x7F313010u: goto label_7F313010;
    case 0x7F313014u: goto label_7F313014;
    case 0x7F313018u: goto label_7F313018;
    case 0x7F31301Cu: goto label_7F31301C;
    case 0x7F313020u: goto label_7F313020;
    case 0x7F313024u: goto label_7F313024;
    case 0x7F313028u: goto label_7F313028;
    case 0x7F31302Cu: goto label_7F31302C;
    case 0x7F313030u: goto label_7F313030;
    case 0x7F313034u: goto label_7F313034;
    case 0x7F313038u: goto label_7F313038;
    case 0x7F31303Cu: goto label_7F31303C;
    case 0x7F313040u: goto label_7F313040;
    case 0x7F313044u: goto label_7F313044;
    case 0x7F313048u: goto label_7F313048;
    case 0x7F31304Cu: goto label_7F31304C;
    case 0x7F313050u: goto label_7F313050;
    case 0x7F313054u: goto label_7F313054;
    case 0x7F313058u: goto label_7F313058;
    case 0x7F31305Cu: goto label_7F31305C;
    case 0x7F313060u: goto label_7F313060;
    case 0x7F313064u: goto label_7F313064;
    case 0x7F313068u: goto label_7F313068;
    case 0x7F31306Cu: goto label_7F31306C;
    case 0x7F313070u: goto label_7F313070;
    case 0x7F313074u: goto label_7F313074;
    case 0x7F313078u: goto label_7F313078;
    case 0x7F31307Cu: goto label_7F31307C;
    case 0x7F313080u: goto label_7F313080;
    case 0x7F313084u: goto label_7F313084;
    case 0x7F313088u: goto label_7F313088;
    case 0x7F31308Cu: goto label_7F31308C;
    case 0x7F313090u: goto label_7F313090;
    case 0x7F313094u: goto label_7F313094;
    case 0x7F313098u: goto label_7F313098;
    case 0x7F31309Cu: goto label_7F31309C;
    case 0x7F3130A0u: goto label_7F3130A0;
    case 0x7F3130A4u: goto label_7F3130A4;
    case 0x7F3130A8u: goto label_7F3130A8;
    case 0x7F3130ACu: goto label_7F3130AC;
    case 0x7F3130B0u: goto label_7F3130B0;
    case 0x7F3130B4u: goto label_7F3130B4;
    case 0x7F3130B8u: goto label_7F3130B8;
    case 0x7F3130BCu: goto label_7F3130BC;
    case 0x7F3130C0u: goto label_7F3130C0;
    case 0x7F3130C4u: goto label_7F3130C4;
    case 0x7F3130C8u: goto label_7F3130C8;
    case 0x7F3130CCu: goto label_7F3130CC;
    case 0x7F3130D0u: goto label_7F3130D0;
    case 0x7F3130D4u: goto label_7F3130D4;
    case 0x7F3130D8u: goto label_7F3130D8;
    case 0x7F3130DCu: goto label_7F3130DC;
    case 0x7F3130E0u: goto label_7F3130E0;
    case 0x7F3130E4u: goto label_7F3130E4;
    case 0x7F3130E8u: goto label_7F3130E8;
    case 0x7F3130ECu: goto label_7F3130EC;
    case 0x7F3130F0u: goto label_7F3130F0;
    case 0x7F3130F4u: goto label_7F3130F4;
    case 0x7F3130F8u: goto label_7F3130F8;
    case 0x7F3130FCu: goto label_7F3130FC;
    case 0x7F313100u: goto label_7F313100;
    case 0x7F313104u: goto label_7F313104;
    case 0x7F313108u: goto label_7F313108;
    case 0x7F31310Cu: goto label_7F31310C;
    case 0x7F313110u: goto label_7F313110;
    case 0x7F313114u: goto label_7F313114;
    case 0x7F313118u: goto label_7F313118;
    case 0x7F31311Cu: goto label_7F31311C;
    case 0x7F313120u: goto label_7F313120;
    case 0x7F313124u: goto label_7F313124;
    case 0x7F313128u: goto label_7F313128;
    case 0x7F31312Cu: goto label_7F31312C;
    case 0x7F313130u: goto label_7F313130;
    case 0x7F313134u: goto label_7F313134;
    case 0x7F313138u: goto label_7F313138;
    case 0x7F31313Cu: goto label_7F31313C;
    case 0x7F313140u: goto label_7F313140;
    case 0x7F313144u: goto label_7F313144;
    case 0x7F313148u: goto label_7F313148;
    case 0x7F31314Cu: goto label_7F31314C;
    case 0x7F313150u: goto label_7F313150;
    case 0x7F313154u: goto label_7F313154;
    case 0x7F313158u: goto label_7F313158;
    case 0x7F31315Cu: goto label_7F31315C;
    case 0x7F313160u: goto label_7F313160;
    case 0x7F313164u: goto label_7F313164;
    case 0x7F313168u: goto label_7F313168;
    case 0x7F31316Cu: goto label_7F31316C;
    case 0x7F313170u: goto label_7F313170;
    case 0x7F313174u: goto label_7F313174;
    case 0x7F313178u: goto label_7F313178;
    case 0x7F31317Cu: goto label_7F31317C;
    case 0x7F313180u: goto label_7F313180;
    case 0x7F313184u: goto label_7F313184;
    case 0x7F313188u: goto label_7F313188;
    case 0x7F31318Cu: goto label_7F31318C;
    case 0x7F313190u: goto label_7F313190;
    case 0x7F313194u: goto label_7F313194;
    case 0x7F313198u: goto label_7F313198;
    case 0x7F31319Cu: goto label_7F31319C;
    case 0x7F3131A0u: goto label_7F3131A0;
    case 0x7F3131A4u: goto label_7F3131A4;
    case 0x7F3131A8u: goto label_7F3131A8;
    case 0x7F3131ACu: goto label_7F3131AC;
    case 0x7F3131B0u: goto label_7F3131B0;
    case 0x7F3131B4u: goto label_7F3131B4;
    case 0x7F3131B8u: goto label_7F3131B8;
    case 0x7F3131BCu: goto label_7F3131BC;
    case 0x7F3131C0u: goto label_7F3131C0;
    case 0x7F3131C4u: goto label_7F3131C4;
    case 0x7F3131C8u: goto label_7F3131C8;
    case 0x7F3131CCu: goto label_7F3131CC;
    case 0x7F3131D0u: goto label_7F3131D0;
    case 0x7F3131D4u: goto label_7F3131D4;
    case 0x7F3131D8u: goto label_7F3131D8;
    case 0x7F3131DCu: goto label_7F3131DC;
    case 0x7F3131E0u: goto label_7F3131E0;
    case 0x7F3131E4u: goto label_7F3131E4;
    case 0x7F3131E8u: goto label_7F3131E8;
    case 0x7F3131ECu: goto label_7F3131EC;
    case 0x7F3131F0u: goto label_7F3131F0;
    case 0x7F3131F4u: goto label_7F3131F4;
    case 0x7F3131F8u: goto label_7F3131F8;
    case 0x7F3131FCu: goto label_7F3131FC;
    case 0x7F313200u: goto label_7F313200;
    case 0x7F313204u: goto label_7F313204;
    case 0x7F313208u: goto label_7F313208;
    case 0x7F31320Cu: goto label_7F31320C;
    case 0x7F313210u: goto label_7F313210;
    case 0x7F313214u: goto label_7F313214;
    case 0x7F313218u: goto label_7F313218;
    case 0x7F31321Cu: goto label_7F31321C;
    case 0x7F313220u: goto label_7F313220;
    case 0x7F313224u: goto label_7F313224;
    case 0x7F313228u: goto label_7F313228;
    case 0x7F31322Cu: goto label_7F31322C;
    case 0x7F313230u: goto label_7F313230;
    case 0x7F313234u: goto label_7F313234;
    case 0x7F313238u: goto label_7F313238;
    case 0x7F31323Cu: goto label_7F31323C;
    case 0x7F313240u: goto label_7F313240;
    case 0x7F313244u: goto label_7F313244;
    case 0x7F313248u: goto label_7F313248;
    case 0x7F31324Cu: goto label_7F31324C;
    case 0x7F313250u: goto label_7F313250;
    case 0x7F313254u: goto label_7F313254;
    case 0x7F313258u: goto label_7F313258;
    case 0x7F31325Cu: goto label_7F31325C;
    case 0x7F313260u: goto label_7F313260;
    case 0x7F313264u: goto label_7F313264;
    case 0x7F313268u: goto label_7F313268;
    case 0x7F31326Cu: goto label_7F31326C;
    case 0x7F313270u: goto label_7F313270;
    case 0x7F313274u: goto label_7F313274;
    case 0x7F313278u: goto label_7F313278;
    case 0x7F31327Cu: goto label_7F31327C;
    case 0x7F313280u: goto label_7F313280;
    case 0x7F313284u: goto label_7F313284;
    case 0x7F313288u: goto label_7F313288;
    case 0x7F31328Cu: goto label_7F31328C;
    case 0x7F313290u: goto label_7F313290;
    case 0x7F313294u: goto label_7F313294;
    case 0x7F313298u: goto label_7F313298;
    case 0x7F31329Cu: goto label_7F31329C;
    case 0x7F3132A0u: goto label_7F3132A0;
    case 0x7F3132A4u: goto label_7F3132A4;
    case 0x7F3132A8u: goto label_7F3132A8;
    case 0x7F3132ACu: goto label_7F3132AC;
    case 0x7F3132B0u: goto label_7F3132B0;
    case 0x7F3132B4u: goto label_7F3132B4;
    case 0x7F3132B8u: goto label_7F3132B8;
    case 0x7F3132BCu: goto label_7F3132BC;
    case 0x7F3132C0u: goto label_7F3132C0;
    case 0x7F3132C4u: goto label_7F3132C4;
    case 0x7F3132C8u: goto label_7F3132C8;
    case 0x7F3132CCu: goto label_7F3132CC;
    case 0x7F3132D0u: goto label_7F3132D0;
    case 0x7F3132D4u: goto label_7F3132D4;
    case 0x7F3132D8u: goto label_7F3132D8;
    case 0x7F3132DCu: goto label_7F3132DC;
    case 0x7F3132E0u: goto label_7F3132E0;
    case 0x7F3132E4u: goto label_7F3132E4;
    case 0x7F3132E8u: goto label_7F3132E8;
    case 0x7F3132ECu: goto label_7F3132EC;
    case 0x7F3132F0u: goto label_7F3132F0;
    case 0x7F3132F4u: goto label_7F3132F4;
    case 0x7F3132F8u: goto label_7F3132F8;
    case 0x7F3132FCu: goto label_7F3132FC;
    case 0x7F313300u: goto label_7F313300;
    case 0x7F313304u: goto label_7F313304;
    case 0x7F313308u: goto label_7F313308;
    case 0x7F31330Cu: goto label_7F31330C;
    case 0x7F313310u: goto label_7F313310;
    case 0x7F313314u: goto label_7F313314;
    case 0x7F313318u: goto label_7F313318;
    case 0x7F31331Cu: goto label_7F31331C;
    case 0x7F313320u: goto label_7F313320;
    case 0x7F313324u: goto label_7F313324;
    case 0x7F313328u: goto label_7F313328;
    case 0x7F31332Cu: goto label_7F31332C;
    case 0x7F313330u: goto label_7F313330;
    case 0x7F313334u: goto label_7F313334;
    case 0x7F313338u: goto label_7F313338;
    case 0x7F31333Cu: goto label_7F31333C;
    case 0x7F313340u: goto label_7F313340;
    case 0x7F313344u: goto label_7F313344;
    case 0x7F313348u: goto label_7F313348;
    case 0x7F31334Cu: goto label_7F31334C;
    case 0x7F313350u: goto label_7F313350;
    case 0x7F313354u: goto label_7F313354;
    case 0x7F313358u: goto label_7F313358;
    case 0x7F31335Cu: goto label_7F31335C;
    case 0x7F313360u: goto label_7F313360;
    case 0x7F313364u: goto label_7F313364;
    case 0x7F313368u: goto label_7F313368;
    case 0x7F31336Cu: goto label_7F31336C;
    case 0x7F313370u: goto label_7F313370;
    case 0x7F313374u: goto label_7F313374;
    case 0x7F313378u: goto label_7F313378;
    case 0x7F31337Cu: goto label_7F31337C;
    case 0x7F313380u: goto label_7F313380;
    case 0x7F313384u: goto label_7F313384;
    case 0x7F313388u: goto label_7F313388;
    case 0x7F31338Cu: goto label_7F31338C;
    case 0x7F313390u: goto label_7F313390;
    case 0x7F313394u: goto label_7F313394;
    case 0x7F313398u: goto label_7F313398;
    case 0x7F31339Cu: goto label_7F31339C;
    case 0x7F3133A0u: goto label_7F3133A0;
    case 0x7F3133A4u: goto label_7F3133A4;
    case 0x7F3133A8u: goto label_7F3133A8;
    case 0x7F3133ACu: goto label_7F3133AC;
    case 0x7F3133B0u: goto label_7F3133B0;
    case 0x7F3133B4u: goto label_7F3133B4;
    case 0x7F3133B8u: goto label_7F3133B8;
    case 0x7F3133BCu: goto label_7F3133BC;
    case 0x7F3133C0u: goto label_7F3133C0;
    case 0x7F3133C4u: goto label_7F3133C4;
    case 0x7F3133C8u: goto label_7F3133C8;
    case 0x7F3133CCu: goto label_7F3133CC;
    case 0x7F3133D0u: goto label_7F3133D0;
    case 0x7F3133D4u: goto label_7F3133D4;
    case 0x7F3133D8u: goto label_7F3133D8;
    case 0x7F3133DCu: goto label_7F3133DC;
    case 0x7F3133E0u: goto label_7F3133E0;
    case 0x7F3133E4u: goto label_7F3133E4;
    case 0x7F3133E8u: goto label_7F3133E8;
    case 0x7F3133ECu: goto label_7F3133EC;
    case 0x7F3133F0u: goto label_7F3133F0;
    case 0x7F3133F4u: goto label_7F3133F4;
    case 0x7F3133F8u: goto label_7F3133F8;
    case 0x7F3133FCu: goto label_7F3133FC;
    case 0x7F313400u: goto label_7F313400;
    case 0x7F313404u: goto label_7F313404;
    case 0x7F313408u: goto label_7F313408;
    case 0x7F31340Cu: goto label_7F31340C;
    case 0x7F313410u: goto label_7F313410;
    case 0x7F313414u: goto label_7F313414;
    case 0x7F313418u: goto label_7F313418;
    case 0x7F31341Cu: goto label_7F31341C;
    case 0x7F313420u: goto label_7F313420;
    case 0x7F313424u: goto label_7F313424;
    case 0x7F313428u: goto label_7F313428;
    case 0x7F31342Cu: goto label_7F31342C;
    case 0x7F313430u: goto label_7F313430;
    case 0x7F313434u: goto label_7F313434;
    case 0x7F313438u: goto label_7F313438;
    case 0x7F31343Cu: goto label_7F31343C;
    case 0x7F313440u: goto label_7F313440;
    case 0x7F313444u: goto label_7F313444;
    case 0x7F313448u: goto label_7F313448;
    case 0x7F31344Cu: goto label_7F31344C;
    case 0x7F313450u: goto label_7F313450;
    case 0x7F313454u: goto label_7F313454;
    case 0x7F313458u: goto label_7F313458;
    case 0x7F31345Cu: goto label_7F31345C;
    case 0x7F313460u: goto label_7F313460;
    case 0x7F313464u: goto label_7F313464;
    case 0x7F313468u: goto label_7F313468;
    case 0x7F31346Cu: goto label_7F31346C;
    case 0x7F313470u: goto label_7F313470;
    case 0x7F313474u: goto label_7F313474;
    case 0x7F313478u: goto label_7F313478;
    case 0x7F31347Cu: goto label_7F31347C;
    case 0x7F313480u: goto label_7F313480;
    case 0x7F313484u: goto label_7F313484;
    case 0x7F313488u: goto label_7F313488;
    case 0x7F31348Cu: goto label_7F31348C;
    case 0x7F313490u: goto label_7F313490;
    case 0x7F313494u: goto label_7F313494;
    case 0x7F313498u: goto label_7F313498;
    case 0x7F31349Cu: goto label_7F31349C;
    case 0x7F3134A0u: goto label_7F3134A0;
    case 0x7F3134A4u: goto label_7F3134A4;
    case 0x7F3134A8u: goto label_7F3134A8;
    case 0x7F3134ACu: goto label_7F3134AC;
    case 0x7F3134B0u: goto label_7F3134B0;
    case 0x7F3134B4u: goto label_7F3134B4;
    case 0x7F3134B8u: goto label_7F3134B8;
    case 0x7F3134BCu: goto label_7F3134BC;
    case 0x7F3134C0u: goto label_7F3134C0;
    case 0x7F3134C4u: goto label_7F3134C4;
    case 0x7F3134C8u: goto label_7F3134C8;
    case 0x7F3134CCu: goto label_7F3134CC;
    case 0x7F3134D0u: goto label_7F3134D0;
    case 0x7F3134D4u: goto label_7F3134D4;
    case 0x7F3134D8u: goto label_7F3134D8;
    case 0x7F3134DCu: goto label_7F3134DC;
    case 0x7F3134E0u: goto label_7F3134E0;
    case 0x7F3134E4u: goto label_7F3134E4;
    case 0x7F3134E8u: goto label_7F3134E8;
    case 0x7F3134ECu: goto label_7F3134EC;
    case 0x7F3134F0u: goto label_7F3134F0;
    case 0x7F3134F4u: goto label_7F3134F4;
    case 0x7F3134F8u: goto label_7F3134F8;
    case 0x7F3134FCu: goto label_7F3134FC;
    case 0x7F313500u: goto label_7F313500;
    case 0x7F313504u: goto label_7F313504;
    case 0x7F313508u: goto label_7F313508;
    case 0x7F31350Cu: goto label_7F31350C;
    case 0x7F313510u: goto label_7F313510;
    case 0x7F313514u: goto label_7F313514;
    case 0x7F313518u: goto label_7F313518;
    case 0x7F31351Cu: goto label_7F31351C;
    case 0x7F313520u: goto label_7F313520;
    case 0x7F313524u: goto label_7F313524;
    case 0x7F313528u: goto label_7F313528;
    case 0x7F31352Cu: goto label_7F31352C;
    case 0x7F313530u: goto label_7F313530;
    case 0x7F313534u: goto label_7F313534;
    case 0x7F313538u: goto label_7F313538;
    case 0x7F31353Cu: goto label_7F31353C;
    case 0x7F313540u: goto label_7F313540;
    case 0x7F313544u: goto label_7F313544;
    case 0x7F313548u: goto label_7F313548;
    case 0x7F31354Cu: goto label_7F31354C;
    case 0x7F313550u: goto label_7F313550;
    case 0x7F313554u: goto label_7F313554;
    case 0x7F313558u: goto label_7F313558;
    case 0x7F31355Cu: goto label_7F31355C;
    case 0x7F313560u: goto label_7F313560;
    case 0x7F313564u: goto label_7F313564;
    case 0x7F313568u: goto label_7F313568;
    case 0x7F31356Cu: goto label_7F31356C;
    case 0x7F313570u: goto label_7F313570;
    case 0x7F313574u: goto label_7F313574;
    case 0x7F313578u: goto label_7F313578;
    case 0x7F31357Cu: goto label_7F31357C;
    case 0x7F313580u: goto label_7F313580;
    case 0x7F313584u: goto label_7F313584;
    case 0x7F313588u: goto label_7F313588;
    case 0x7F31358Cu: goto label_7F31358C;
    case 0x7F313590u: goto label_7F313590;
    case 0x7F313594u: goto label_7F313594;
    case 0x7F313598u: goto label_7F313598;
    case 0x7F31359Cu: goto label_7F31359C;
    case 0x7F3135A0u: goto label_7F3135A0;
    case 0x7F3135A4u: goto label_7F3135A4;
    case 0x7F3135A8u: goto label_7F3135A8;
    case 0x7F3135ACu: goto label_7F3135AC;
    case 0x7F3135B0u: goto label_7F3135B0;
    case 0x7F3135B4u: goto label_7F3135B4;
    case 0x7F3135B8u: goto label_7F3135B8;
    case 0x7F3135BCu: goto label_7F3135BC;
    case 0x7F3135C0u: goto label_7F3135C0;
    case 0x7F3135C4u: goto label_7F3135C4;
    case 0x7F3135C8u: goto label_7F3135C8;
    case 0x7F3135CCu: goto label_7F3135CC;
    case 0x7F3135D0u: goto label_7F3135D0;
    case 0x7F3135D4u: goto label_7F3135D4;
    case 0x7F3135D8u: goto label_7F3135D8;
    case 0x7F3135DCu: goto label_7F3135DC;
    case 0x7F3135E0u: goto label_7F3135E0;
    case 0x7F3135E4u: goto label_7F3135E4;
    case 0x7F3135E8u: goto label_7F3135E8;
    case 0x7F3135ECu: goto label_7F3135EC;
    case 0x7F3135F0u: goto label_7F3135F0;
    case 0x7F3135F4u: goto label_7F3135F4;
    case 0x7F3135F8u: goto label_7F3135F8;
    case 0x7F3135FCu: goto label_7F3135FC;
    case 0x7F313600u: goto label_7F313600;
    case 0x7F313604u: goto label_7F313604;
    case 0x7F313608u: goto label_7F313608;
    case 0x7F31360Cu: goto label_7F31360C;
    case 0x7F313610u: goto label_7F313610;
    case 0x7F313614u: goto label_7F313614;
    case 0x7F313618u: goto label_7F313618;
    case 0x7F31361Cu: goto label_7F31361C;
    case 0x7F313620u: goto label_7F313620;
    case 0x7F313624u: goto label_7F313624;
    case 0x7F313628u: goto label_7F313628;
    case 0x7F31362Cu: goto label_7F31362C;
    case 0x7F313630u: goto label_7F313630;
    case 0x7F313634u: goto label_7F313634;
    case 0x7F313638u: goto label_7F313638;
    case 0x7F31363Cu: goto label_7F31363C;
    case 0x7F313640u: goto label_7F313640;
    case 0x7F313644u: goto label_7F313644;
    case 0x7F313648u: goto label_7F313648;
    case 0x7F31364Cu: goto label_7F31364C;
    case 0x7F313650u: goto label_7F313650;
    case 0x7F313654u: goto label_7F313654;
    case 0x7F313658u: goto label_7F313658;
    case 0x7F31365Cu: goto label_7F31365C;
    case 0x7F313660u: goto label_7F313660;
    case 0x7F313664u: goto label_7F313664;
    case 0x7F313668u: goto label_7F313668;
    case 0x7F31366Cu: goto label_7F31366C;
    case 0x7F313670u: goto label_7F313670;
    case 0x7F313674u: goto label_7F313674;
    case 0x7F313678u: goto label_7F313678;
    case 0x7F31367Cu: goto label_7F31367C;
    case 0x7F313680u: goto label_7F313680;
    case 0x7F313684u: goto label_7F313684;
    case 0x7F313688u: goto label_7F313688;
    case 0x7F31368Cu: goto label_7F31368C;
    case 0x7F313690u: goto label_7F313690;
    case 0x7F313694u: goto label_7F313694;
    case 0x7F313698u: goto label_7F313698;
    case 0x7F31369Cu: goto label_7F31369C;
    case 0x7F3136A0u: goto label_7F3136A0;
    case 0x7F3136A4u: goto label_7F3136A4;
    case 0x7F3136A8u: goto label_7F3136A8;
    case 0x7F3136ACu: goto label_7F3136AC;
    case 0x7F3136B0u: goto label_7F3136B0;
    case 0x7F3136B4u: goto label_7F3136B4;
    case 0x7F3136B8u: goto label_7F3136B8;
    case 0x7F3136BCu: goto label_7F3136BC;
    case 0x7F3136C0u: goto label_7F3136C0;
    case 0x7F3136C4u: goto label_7F3136C4;
    case 0x7F3136C8u: goto label_7F3136C8;
    case 0x7F3136CCu: goto label_7F3136CC;
    case 0x7F3136D0u: goto label_7F3136D0;
    case 0x7F3136D4u: goto label_7F3136D4;
    case 0x7F3136D8u: goto label_7F3136D8;
    case 0x7F3136DCu: goto label_7F3136DC;
    case 0x7F3136E0u: goto label_7F3136E0;
    case 0x7F3136E4u: goto label_7F3136E4;
    case 0x7F3136E8u: goto label_7F3136E8;
    case 0x7F3136ECu: goto label_7F3136EC;
    case 0x7F3136F0u: goto label_7F3136F0;
    case 0x7F3136F4u: goto label_7F3136F4;
    case 0x7F3136F8u: goto label_7F3136F8;
    case 0x7F3136FCu: goto label_7F3136FC;
    case 0x7F313700u: goto label_7F313700;
    case 0x7F313704u: goto label_7F313704;
    case 0x7F313708u: goto label_7F313708;
    case 0x7F31370Cu: goto label_7F31370C;
    case 0x7F313710u: goto label_7F313710;
    case 0x7F313714u: goto label_7F313714;
    case 0x7F313718u: goto label_7F313718;
    case 0x7F31371Cu: goto label_7F31371C;
    case 0x7F313720u: goto label_7F313720;
    case 0x7F313724u: goto label_7F313724;
    case 0x7F313728u: goto label_7F313728;
    case 0x7F31372Cu: goto label_7F31372C;
    case 0x7F313730u: goto label_7F313730;
    case 0x7F313734u: goto label_7F313734;
    case 0x7F313738u: goto label_7F313738;
    case 0x7F31373Cu: goto label_7F31373C;
    case 0x7F313740u: goto label_7F313740;
    case 0x7F313744u: goto label_7F313744;
    case 0x7F313748u: goto label_7F313748;
    case 0x7F31374Cu: goto label_7F31374C;
    case 0x7F313750u: goto label_7F313750;
    case 0x7F313754u: goto label_7F313754;
    case 0x7F313758u: goto label_7F313758;
    case 0x7F31375Cu: goto label_7F31375C;
    case 0x7F313760u: goto label_7F313760;
    case 0x7F313764u: goto label_7F313764;
    case 0x7F313768u: goto label_7F313768;
    case 0x7F31376Cu: goto label_7F31376C;
    case 0x7F313770u: goto label_7F313770;
    case 0x7F313774u: goto label_7F313774;
    case 0x7F313778u: goto label_7F313778;
    case 0x7F31377Cu: goto label_7F31377C;
    case 0x7F313780u: goto label_7F313780;
    case 0x7F313784u: goto label_7F313784;
    case 0x7F313788u: goto label_7F313788;
    case 0x7F31378Cu: goto label_7F31378C;
    case 0x7F313790u: goto label_7F313790;
    case 0x7F313794u: goto label_7F313794;
    case 0x7F313798u: goto label_7F313798;
    case 0x7F31379Cu: goto label_7F31379C;
    case 0x7F3137A0u: goto label_7F3137A0;
    case 0x7F3137A4u: goto label_7F3137A4;
    case 0x7F3137A8u: goto label_7F3137A8;
    case 0x7F3137ACu: goto label_7F3137AC;
    case 0x7F3137B0u: goto label_7F3137B0;
    case 0x7F3137B4u: goto label_7F3137B4;
    case 0x7F3137B8u: goto label_7F3137B8;
    case 0x7F3137BCu: goto label_7F3137BC;
    case 0x7F3137C0u: goto label_7F3137C0;
    case 0x7F3137C4u: goto label_7F3137C4;
    case 0x7F3137C8u: goto label_7F3137C8;
    case 0x7F3137CCu: goto label_7F3137CC;
    case 0x7F3137D0u: goto label_7F3137D0;
    case 0x7F3137D4u: goto label_7F3137D4;
    case 0x7F3137D8u: goto label_7F3137D8;
    case 0x7F3137DCu: goto label_7F3137DC;
    case 0x7F3137E0u: goto label_7F3137E0;
    case 0x7F3137E4u: goto label_7F3137E4;
    case 0x7F3137E8u: goto label_7F3137E8;
    case 0x7F3137ECu: goto label_7F3137EC;
    case 0x7F3137F0u: goto label_7F3137F0;
    case 0x7F3137F4u: goto label_7F3137F4;
    case 0x7F3137F8u: goto label_7F3137F8;
    case 0x7F3137FCu: goto label_7F3137FC;
    case 0x7F313800u: goto label_7F313800;
    case 0x7F313804u: goto label_7F313804;
    case 0x7F313808u: goto label_7F313808;
    case 0x7F31380Cu: goto label_7F31380C;
    case 0x7F313810u: goto label_7F313810;
    case 0x7F313814u: goto label_7F313814;
    case 0x7F313818u: goto label_7F313818;
    case 0x7F31381Cu: goto label_7F31381C;
    case 0x7F313820u: goto label_7F313820;
    case 0x7F313824u: goto label_7F313824;
    case 0x7F313828u: goto label_7F313828;
    case 0x7F31382Cu: goto label_7F31382C;
    case 0x7F313830u: goto label_7F313830;
    case 0x7F313834u: goto label_7F313834;
    case 0x7F313838u: goto label_7F313838;
    case 0x7F31383Cu: goto label_7F31383C;
    case 0x7F313840u: goto label_7F313840;
    case 0x7F313844u: goto label_7F313844;
    case 0x7F313848u: goto label_7F313848;
    case 0x7F31384Cu: goto label_7F31384C;
    case 0x7F313850u: goto label_7F313850;
    case 0x7F313854u: goto label_7F313854;
    case 0x7F313858u: goto label_7F313858;
    case 0x7F31385Cu: goto label_7F31385C;
    case 0x7F313860u: goto label_7F313860;
    case 0x7F313864u: goto label_7F313864;
    case 0x7F313868u: goto label_7F313868;
    case 0x7F31386Cu: goto label_7F31386C;
    case 0x7F313870u: goto label_7F313870;
    case 0x7F313874u: goto label_7F313874;
    case 0x7F313878u: goto label_7F313878;
    case 0x7F31387Cu: goto label_7F31387C;
    case 0x7F313880u: goto label_7F313880;
    case 0x7F313884u: goto label_7F313884;
    case 0x7F313888u: goto label_7F313888;
    case 0x7F31388Cu: goto label_7F31388C;
    case 0x7F313890u: goto label_7F313890;
    case 0x7F313894u: goto label_7F313894;
    case 0x7F313898u: goto label_7F313898;
    case 0x7F31389Cu: goto label_7F31389C;
    case 0x7F3138A0u: goto label_7F3138A0;
    case 0x7F3138A4u: goto label_7F3138A4;
    case 0x7F3138A8u: goto label_7F3138A8;
    case 0x7F3138ACu: goto label_7F3138AC;
    case 0x7F3138B0u: goto label_7F3138B0;
    case 0x7F3138B4u: goto label_7F3138B4;
    case 0x7F3138B8u: goto label_7F3138B8;
    case 0x7F3138BCu: goto label_7F3138BC;
    case 0x7F3138C0u: goto label_7F3138C0;
    case 0x7F3138C4u: goto label_7F3138C4;
    case 0x7F3138C8u: goto label_7F3138C8;
    case 0x7F3138CCu: goto label_7F3138CC;
    case 0x7F3138D0u: goto label_7F3138D0;
    case 0x7F3138D4u: goto label_7F3138D4;
    case 0x7F3138D8u: goto label_7F3138D8;
    case 0x7F3138DCu: goto label_7F3138DC;
    case 0x7F3138E0u: goto label_7F3138E0;
    case 0x7F3138E4u: goto label_7F3138E4;
    case 0x7F3138E8u: goto label_7F3138E8;
    case 0x7F3138ECu: goto label_7F3138EC;
    case 0x7F3138F0u: goto label_7F3138F0;
    case 0x7F3138F4u: goto label_7F3138F4;
    case 0x7F3138F8u: goto label_7F3138F8;
    case 0x7F3138FCu: goto label_7F3138FC;
    case 0x7F313900u: goto label_7F313900;
    case 0x7F313904u: goto label_7F313904;
    case 0x7F313908u: goto label_7F313908;
    case 0x7F31390Cu: goto label_7F31390C;
    case 0x7F313910u: goto label_7F313910;
    case 0x7F313914u: goto label_7F313914;
    case 0x7F313918u: goto label_7F313918;
    case 0x7F31391Cu: goto label_7F31391C;
    case 0x7F313920u: goto label_7F313920;
    case 0x7F313924u: goto label_7F313924;
    case 0x7F313928u: goto label_7F313928;
    case 0x7F31392Cu: goto label_7F31392C;
    case 0x7F313930u: goto label_7F313930;
    case 0x7F313934u: goto label_7F313934;
    case 0x7F313938u: goto label_7F313938;
    case 0x7F31393Cu: goto label_7F31393C;
    case 0x7F313940u: goto label_7F313940;
    case 0x7F313944u: goto label_7F313944;
    case 0x7F313948u: goto label_7F313948;
    case 0x7F31394Cu: goto label_7F31394C;
    case 0x7F313950u: goto label_7F313950;
    case 0x7F313954u: goto label_7F313954;
    case 0x7F313958u: goto label_7F313958;
    case 0x7F31395Cu: goto label_7F31395C;
    case 0x7F313960u: goto label_7F313960;
    case 0x7F313964u: goto label_7F313964;
    case 0x7F313968u: goto label_7F313968;
    case 0x7F31396Cu: goto label_7F31396C;
    case 0x7F313970u: goto label_7F313970;
    case 0x7F313974u: goto label_7F313974;
    case 0x7F313978u: goto label_7F313978;
    case 0x7F31397Cu: goto label_7F31397C;
    case 0x7F313980u: goto label_7F313980;
    case 0x7F313984u: goto label_7F313984;
    case 0x7F313988u: goto label_7F313988;
    case 0x7F31398Cu: goto label_7F31398C;
    case 0x7F313990u: goto label_7F313990;
    case 0x7F313994u: goto label_7F313994;
    case 0x7F313998u: goto label_7F313998;
    case 0x7F31399Cu: goto label_7F31399C;
    case 0x7F3139A0u: goto label_7F3139A0;
    case 0x7F3139A4u: goto label_7F3139A4;
    case 0x7F3139A8u: goto label_7F3139A8;
    case 0x7F3139ACu: goto label_7F3139AC;
    case 0x7F3139B0u: goto label_7F3139B0;
    case 0x7F3139B4u: goto label_7F3139B4;
    case 0x7F3139B8u: goto label_7F3139B8;
    case 0x7F3139BCu: goto label_7F3139BC;
    case 0x7F3139C0u: goto label_7F3139C0;
    case 0x7F3139C4u: goto label_7F3139C4;
    case 0x7F3139C8u: goto label_7F3139C8;
    case 0x7F3139CCu: goto label_7F3139CC;
    case 0x7F3139D0u: goto label_7F3139D0;
    case 0x7F3139D4u: goto label_7F3139D4;
    case 0x7F3139D8u: goto label_7F3139D8;
    case 0x7F3139DCu: goto label_7F3139DC;
    case 0x7F3139E0u: goto label_7F3139E0;
    case 0x7F3139E4u: goto label_7F3139E4;
    case 0x7F3139E8u: goto label_7F3139E8;
    case 0x7F3139ECu: goto label_7F3139EC;
    case 0x7F3139F0u: goto label_7F3139F0;
    case 0x7F3139F4u: goto label_7F3139F4;
    case 0x7F3139F8u: goto label_7F3139F8;
    case 0x7F3139FCu: goto label_7F3139FC;
    case 0x7F313A00u: goto label_7F313A00;
    case 0x7F313A04u: goto label_7F313A04;
    case 0x7F313A08u: goto label_7F313A08;
    case 0x7F313A0Cu: goto label_7F313A0C;
    case 0x7F313A10u: goto label_7F313A10;
    case 0x7F313A14u: goto label_7F313A14;
    case 0x7F313A18u: goto label_7F313A18;
    case 0x7F313A1Cu: goto label_7F313A1C;
    case 0x7F313A20u: goto label_7F313A20;
    case 0x7F313A24u: goto label_7F313A24;
    case 0x7F313A28u: goto label_7F313A28;
    case 0x7F313A2Cu: goto label_7F313A2C;
    case 0x7F313A30u: goto label_7F313A30;
    case 0x7F313A34u: goto label_7F313A34;
    case 0x7F313A38u: goto label_7F313A38;
    case 0x7F313A3Cu: goto label_7F313A3C;
    case 0x7F313A40u: goto label_7F313A40;
    case 0x7F313A44u: goto label_7F313A44;
    case 0x7F313A48u: goto label_7F313A48;
    case 0x7F313A4Cu: goto label_7F313A4C;
    case 0x7F313A50u: goto label_7F313A50;
    case 0x7F313A54u: goto label_7F313A54;
    case 0x7F313A58u: goto label_7F313A58;
    case 0x7F313A5Cu: goto label_7F313A5C;
    case 0x7F313A60u: goto label_7F313A60;
    case 0x7F313A64u: goto label_7F313A64;
    case 0x7F313A68u: goto label_7F313A68;
    case 0x7F313A6Cu: goto label_7F313A6C;
    case 0x7F313A70u: goto label_7F313A70;
    case 0x7F313A74u: goto label_7F313A74;
    case 0x7F313A78u: goto label_7F313A78;
    case 0x7F313A7Cu: goto label_7F313A7C;
    case 0x7F313A80u: goto label_7F313A80;
    case 0x7F313A84u: goto label_7F313A84;
    case 0x7F313A88u: goto label_7F313A88;
    case 0x7F313A8Cu: goto label_7F313A8C;
    case 0x7F313A90u: goto label_7F313A90;
    case 0x7F313A94u: goto label_7F313A94;
    case 0x7F313A98u: goto label_7F313A98;
    case 0x7F313A9Cu: goto label_7F313A9C;
    case 0x7F313AA0u: goto label_7F313AA0;
    case 0x7F313AA4u: goto label_7F313AA4;
    case 0x7F313AA8u: goto label_7F313AA8;
    case 0x7F313AACu: goto label_7F313AAC;
    case 0x7F313AB0u: goto label_7F313AB0;
    case 0x7F313AB4u: goto label_7F313AB4;
    case 0x7F313AB8u: goto label_7F313AB8;
    case 0x7F313ABCu: goto label_7F313ABC;
    case 0x7F313AC0u: goto label_7F313AC0;
    case 0x7F313AC4u: goto label_7F313AC4;
    case 0x7F313AC8u: goto label_7F313AC8;
    case 0x7F313ACCu: goto label_7F313ACC;
    case 0x7F313AD0u: goto label_7F313AD0;
    case 0x7F313AD4u: goto label_7F313AD4;
    case 0x7F313AD8u: goto label_7F313AD8;
    case 0x7F313ADCu: goto label_7F313ADC;
    case 0x7F313AE0u: goto label_7F313AE0;
    case 0x7F313AE4u: goto label_7F313AE4;
    case 0x7F313AE8u: goto label_7F313AE8;
    case 0x7F313AECu: goto label_7F313AEC;
    case 0x7F313AF0u: goto label_7F313AF0;
    case 0x7F313AF4u: goto label_7F313AF4;
    case 0x7F313AF8u: goto label_7F313AF8;
    case 0x7F313AFCu: goto label_7F313AFC;
    case 0x7F313B00u: goto label_7F313B00;
    case 0x7F313B04u: goto label_7F313B04;
    case 0x7F313B08u: goto label_7F313B08;
    case 0x7F313B0Cu: goto label_7F313B0C;
    case 0x7F313B10u: goto label_7F313B10;
    case 0x7F313B14u: goto label_7F313B14;
    case 0x7F313B18u: goto label_7F313B18;
    case 0x7F313B1Cu: goto label_7F313B1C;
    case 0x7F313B20u: goto label_7F313B20;
    case 0x7F313B24u: goto label_7F313B24;
    case 0x7F313B28u: goto label_7F313B28;
    case 0x7F313B2Cu: goto label_7F313B2C;
    case 0x7F313B30u: goto label_7F313B30;
    case 0x7F313B34u: goto label_7F313B34;
    case 0x7F313B38u: goto label_7F313B38;
    case 0x7F313B3Cu: goto label_7F313B3C;
    case 0x7F313B40u: goto label_7F313B40;
    case 0x7F313B44u: goto label_7F313B44;
    case 0x7F313B48u: goto label_7F313B48;
    case 0x7F313B4Cu: goto label_7F313B4C;
    case 0x7F313B50u: goto label_7F313B50;
    case 0x7F313B54u: goto label_7F313B54;
    case 0x7F313B58u: goto label_7F313B58;
    case 0x7F313B5Cu: goto label_7F313B5C;
    case 0x7F313B60u: goto label_7F313B60;
    case 0x7F313B64u: goto label_7F313B64;
    case 0x7F313B68u: goto label_7F313B68;
    case 0x7F313B6Cu: goto label_7F313B6C;
    case 0x7F313B70u: goto label_7F313B70;
    case 0x7F313B74u: goto label_7F313B74;
    case 0x7F313B78u: goto label_7F313B78;
    case 0x7F313B7Cu: goto label_7F313B7C;
    case 0x7F313B80u: goto label_7F313B80;
    case 0x7F313B84u: goto label_7F313B84;
    case 0x7F313B88u: goto label_7F313B88;
    case 0x7F313B8Cu: goto label_7F313B8C;
    case 0x7F313B90u: goto label_7F313B90;
    case 0x7F313B94u: goto label_7F313B94;
    case 0x7F313B98u: goto label_7F313B98;
    case 0x7F313B9Cu: goto label_7F313B9C;
    case 0x7F313BA0u: goto label_7F313BA0;
    case 0x7F313BA4u: goto label_7F313BA4;
    case 0x7F313BA8u: goto label_7F313BA8;
    case 0x7F313BACu: goto label_7F313BAC;
    case 0x7F313BB0u: goto label_7F313BB0;
    case 0x7F313BB4u: goto label_7F313BB4;
    case 0x7F313BB8u: goto label_7F313BB8;
    case 0x7F313BBCu: goto label_7F313BBC;
    case 0x7F313BC0u: goto label_7F313BC0;
    case 0x7F313BC4u: goto label_7F313BC4;
    case 0x7F313BC8u: goto label_7F313BC8;
    case 0x7F313BCCu: goto label_7F313BCC;
    case 0x7F313BD0u: goto label_7F313BD0;
    case 0x7F313BD4u: goto label_7F313BD4;
    case 0x7F313BD8u: goto label_7F313BD8;
    case 0x7F313BDCu: goto label_7F313BDC;
    case 0x7F313BE0u: goto label_7F313BE0;
    case 0x7F313BE4u: goto label_7F313BE4;
    case 0x7F313BE8u: goto label_7F313BE8;
    case 0x7F313BECu: goto label_7F313BEC;
    case 0x7F313BF0u: goto label_7F313BF0;
    case 0x7F313BF4u: goto label_7F313BF4;
    case 0x7F313BF8u: goto label_7F313BF8;
    case 0x7F313BFCu: goto label_7F313BFC;
    case 0x7F313C00u: goto label_7F313C00;
    case 0x7F313C04u: goto label_7F313C04;
    case 0x7F313C08u: goto label_7F313C08;
    case 0x7F313C0Cu: goto label_7F313C0C;
    case 0x7F313C10u: goto label_7F313C10;
    case 0x7F313C14u: goto label_7F313C14;
    case 0x7F313C18u: goto label_7F313C18;
    case 0x7F313C1Cu: goto label_7F313C1C;
    case 0x7F313C20u: goto label_7F313C20;
    case 0x7F313C24u: goto label_7F313C24;
    case 0x7F313C28u: goto label_7F313C28;
    case 0x7F313C2Cu: goto label_7F313C2C;
    case 0x7F313C30u: goto label_7F313C30;
    case 0x7F313C34u: goto label_7F313C34;
    case 0x7F313C38u: goto label_7F313C38;
    case 0x7F313C3Cu: goto label_7F313C3C;
    case 0x7F313C40u: goto label_7F313C40;
    case 0x7F313C44u: goto label_7F313C44;
    case 0x7F313C48u: goto label_7F313C48;
    case 0x7F313C4Cu: goto label_7F313C4C;
    case 0x7F313C50u: goto label_7F313C50;
    case 0x7F313C54u: goto label_7F313C54;
    case 0x7F313C58u: goto label_7F313C58;
    case 0x7F313C5Cu: goto label_7F313C5C;
    case 0x7F313C60u: goto label_7F313C60;
    case 0x7F313C64u: goto label_7F313C64;
    case 0x7F313C68u: goto label_7F313C68;
    case 0x7F313C6Cu: goto label_7F313C6C;
    case 0x7F313C70u: goto label_7F313C70;
    case 0x7F313C74u: goto label_7F313C74;
    case 0x7F313C78u: goto label_7F313C78;
    case 0x7F313C7Cu: goto label_7F313C7C;
    case 0x7F313C80u: goto label_7F313C80;
    case 0x7F313C84u: goto label_7F313C84;
    case 0x7F313C88u: goto label_7F313C88;
    case 0x7F313C8Cu: goto label_7F313C8C;
    case 0x7F313C90u: goto label_7F313C90;
    case 0x7F313C94u: goto label_7F313C94;
    case 0x7F313C98u: goto label_7F313C98;
    case 0x7F313C9Cu: goto label_7F313C9C;
    case 0x7F313CA0u: goto label_7F313CA0;
    case 0x7F313CA4u: goto label_7F313CA4;
    case 0x7F313CA8u: goto label_7F313CA8;
    case 0x7F313CACu: goto label_7F313CAC;
    case 0x7F313CB0u: goto label_7F313CB0;
    case 0x7F313CB4u: goto label_7F313CB4;
    case 0x7F313CB8u: goto label_7F313CB8;
    case 0x7F313CBCu: goto label_7F313CBC;
    case 0x7F313CC0u: goto label_7F313CC0;
    case 0x7F313CC4u: goto label_7F313CC4;
    case 0x7F313CC8u: goto label_7F313CC8;
    case 0x7F313CCCu: goto label_7F313CCC;
    case 0x7F313CD0u: goto label_7F313CD0;
    case 0x7F313CD4u: goto label_7F313CD4;
    case 0x7F313CD8u: goto label_7F313CD8;
    case 0x7F313CDCu: goto label_7F313CDC;
    case 0x7F313CE0u: goto label_7F313CE0;
    case 0x7F313CE4u: goto label_7F313CE4;
    case 0x7F313CE8u: goto label_7F313CE8;
    case 0x7F313CECu: goto label_7F313CEC;
    case 0x7F313CF0u: goto label_7F313CF0;
    case 0x7F313CF4u: goto label_7F313CF4;
    case 0x7F313CF8u: goto label_7F313CF8;
    case 0x7F313CFCu: goto label_7F313CFC;
    case 0x7F313D00u: goto label_7F313D00;
    case 0x7F313D04u: goto label_7F313D04;
    case 0x7F313D08u: goto label_7F313D08;
    case 0x7F313D0Cu: goto label_7F313D0C;
    case 0x7F313D10u: goto label_7F313D10;
    case 0x7F313D14u: goto label_7F313D14;
    case 0x7F313D18u: goto label_7F313D18;
    case 0x7F313D1Cu: goto label_7F313D1C;
    case 0x7F313D20u: goto label_7F313D20;
    case 0x7F313D24u: goto label_7F313D24;
    case 0x7F313D28u: goto label_7F313D28;
    case 0x7F313D2Cu: goto label_7F313D2C;
    case 0x7F313D30u: goto label_7F313D30;
    case 0x7F313D34u: goto label_7F313D34;
    case 0x7F313D38u: goto label_7F313D38;
    case 0x7F313D3Cu: goto label_7F313D3C;
    case 0x7F313D40u: goto label_7F313D40;
    case 0x7F313D44u: goto label_7F313D44;
    case 0x7F313D48u: goto label_7F313D48;
    case 0x7F313D4Cu: goto label_7F313D4C;
    case 0x7F313D50u: goto label_7F313D50;
    case 0x7F313D54u: goto label_7F313D54;
    case 0x7F313D58u: goto label_7F313D58;
    case 0x7F313D5Cu: goto label_7F313D5C;
    case 0x7F313D60u: goto label_7F313D60;
    case 0x7F313D64u: goto label_7F313D64;
    case 0x7F313D68u: goto label_7F313D68;
    case 0x7F313D6Cu: goto label_7F313D6C;
    case 0x7F313D70u: goto label_7F313D70;
    case 0x7F313D74u: goto label_7F313D74;
    case 0x7F313D78u: goto label_7F313D78;
    case 0x7F313D7Cu: goto label_7F313D7C;
    case 0x7F313D80u: goto label_7F313D80;
    case 0x7F313D84u: goto label_7F313D84;
    case 0x7F313D88u: goto label_7F313D88;
    case 0x7F313D8Cu: goto label_7F313D8C;
    case 0x7F313D90u: goto label_7F313D90;
    case 0x7F313D94u: goto label_7F313D94;
    case 0x7F313D98u: goto label_7F313D98;
    case 0x7F313D9Cu: goto label_7F313D9C;
    case 0x7F313DA0u: goto label_7F313DA0;
    case 0x7F313DA4u: goto label_7F313DA4;
    case 0x7F313DA8u: goto label_7F313DA8;
    case 0x7F313DACu: goto label_7F313DAC;
    case 0x7F313DB0u: goto label_7F313DB0;
    case 0x7F313DB4u: goto label_7F313DB4;
    case 0x7F313DB8u: goto label_7F313DB8;
    case 0x7F313DBCu: goto label_7F313DBC;
    case 0x7F313DC0u: goto label_7F313DC0;
    case 0x7F313DC4u: goto label_7F313DC4;
    case 0x7F313DC8u: goto label_7F313DC8;
    case 0x7F313DCCu: goto label_7F313DCC;
    case 0x7F313DD0u: goto label_7F313DD0;
    case 0x7F313DD4u: goto label_7F313DD4;
    case 0x7F313DD8u: goto label_7F313DD8;
    case 0x7F313DDCu: goto label_7F313DDC;
    case 0x7F313DE0u: goto label_7F313DE0;
    case 0x7F313DE4u: goto label_7F313DE4;
    case 0x7F313DE8u: goto label_7F313DE8;
    case 0x7F313DECu: goto label_7F313DEC;
    case 0x7F313DF0u: goto label_7F313DF0;
    case 0x7F313DF4u: goto label_7F313DF4;
    case 0x7F313DF8u: goto label_7F313DF8;
    case 0x7F313DFCu: goto label_7F313DFC;
    case 0x7F313E00u: goto label_7F313E00;
    case 0x7F313E04u: goto label_7F313E04;
    case 0x7F313E08u: goto label_7F313E08;
    case 0x7F313E0Cu: goto label_7F313E0C;
    case 0x7F313E10u: goto label_7F313E10;
    case 0x7F313E14u: goto label_7F313E14;
    case 0x7F313E18u: goto label_7F313E18;
    case 0x7F313E1Cu: goto label_7F313E1C;
    case 0x7F313E20u: goto label_7F313E20;
    case 0x7F313E24u: goto label_7F313E24;
    case 0x7F313E28u: goto label_7F313E28;
    case 0x7F313E2Cu: goto label_7F313E2C;
    case 0x7F313E30u: goto label_7F313E30;
    case 0x7F313E34u: goto label_7F313E34;
    case 0x7F313E38u: goto label_7F313E38;
    case 0x7F313E3Cu: goto label_7F313E3C;
    case 0x7F313E40u: goto label_7F313E40;
    case 0x7F313E44u: goto label_7F313E44;
    case 0x7F313E48u: goto label_7F313E48;
    case 0x7F313E4Cu: goto label_7F313E4C;
    case 0x7F313E50u: goto label_7F313E50;
    case 0x7F313E54u: goto label_7F313E54;
    case 0x7F313E58u: goto label_7F313E58;
    case 0x7F313E5Cu: goto label_7F313E5C;
    case 0x7F313E60u: goto label_7F313E60;
    case 0x7F313E64u: goto label_7F313E64;
    case 0x7F313E68u: goto label_7F313E68;
    case 0x7F313E6Cu: goto label_7F313E6C;
    case 0x7F313E70u: goto label_7F313E70;
    case 0x7F313E74u: goto label_7F313E74;
    case 0x7F313E78u: goto label_7F313E78;
    case 0x7F313E7Cu: goto label_7F313E7C;
    case 0x7F313E80u: goto label_7F313E80;
    case 0x7F313E84u: goto label_7F313E84;
    case 0x7F313E88u: goto label_7F313E88;
    case 0x7F313E8Cu: goto label_7F313E8C;
    case 0x7F313E90u: goto label_7F313E90;
    case 0x7F313E94u: goto label_7F313E94;
    case 0x7F313E98u: goto label_7F313E98;
    case 0x7F313E9Cu: goto label_7F313E9C;
    case 0x7F313EA0u: goto label_7F313EA0;
    case 0x7F313EA4u: goto label_7F313EA4;
    case 0x7F313EA8u: goto label_7F313EA8;
    case 0x7F313EACu: goto label_7F313EAC;
    case 0x7F313EB0u: goto label_7F313EB0;
    case 0x7F313EB4u: goto label_7F313EB4;
    case 0x7F313EB8u: goto label_7F313EB8;
    case 0x7F313EBCu: goto label_7F313EBC;
    case 0x7F313EC0u: goto label_7F313EC0;
    case 0x7F313EC4u: goto label_7F313EC4;
    case 0x7F313EC8u: goto label_7F313EC8;
    case 0x7F313ECCu: goto label_7F313ECC;
    case 0x7F313ED0u: goto label_7F313ED0;
    case 0x7F313ED4u: goto label_7F313ED4;
    case 0x7F313ED8u: goto label_7F313ED8;
    case 0x7F313EDCu: goto label_7F313EDC;
    case 0x7F313EE0u: goto label_7F313EE0;
    case 0x7F313EE4u: goto label_7F313EE4;
    case 0x7F313EE8u: goto label_7F313EE8;
    case 0x7F313EECu: goto label_7F313EEC;
    case 0x7F313EF0u: goto label_7F313EF0;
    case 0x7F313EF4u: goto label_7F313EF4;
    case 0x7F313EF8u: goto label_7F313EF8;
    case 0x7F313EFCu: goto label_7F313EFC;
    case 0x7F313F00u: goto label_7F313F00;
    case 0x7F313F04u: goto label_7F313F04;
    case 0x7F313F08u: goto label_7F313F08;
    case 0x7F313F0Cu: goto label_7F313F0C;
    case 0x7F313F10u: goto label_7F313F10;
    case 0x7F313F14u: goto label_7F313F14;
    case 0x7F313F18u: goto label_7F313F18;
    case 0x7F313F1Cu: goto label_7F313F1C;
    case 0x7F313F20u: goto label_7F313F20;
    case 0x7F313F24u: goto label_7F313F24;
    case 0x7F313F28u: goto label_7F313F28;
    case 0x7F313F2Cu: goto label_7F313F2C;
    case 0x7F313F30u: goto label_7F313F30;
    case 0x7F313F34u: goto label_7F313F34;
    case 0x7F313F38u: goto label_7F313F38;
    case 0x7F313F3Cu: goto label_7F313F3C;
    case 0x7F313F40u: goto label_7F313F40;
    case 0x7F313F44u: goto label_7F313F44;
    case 0x7F313F48u: goto label_7F313F48;
    case 0x7F313F4Cu: goto label_7F313F4C;
    case 0x7F313F50u: goto label_7F313F50;
    case 0x7F313F54u: goto label_7F313F54;
    case 0x7F313F58u: goto label_7F313F58;
    case 0x7F313F5Cu: goto label_7F313F5C;
    case 0x7F313F60u: goto label_7F313F60;
    case 0x7F313F64u: goto label_7F313F64;
    case 0x7F313F68u: goto label_7F313F68;
    case 0x7F313F6Cu: goto label_7F313F6C;
    case 0x7F313F70u: goto label_7F313F70;
    case 0x7F313F74u: goto label_7F313F74;
    case 0x7F313F78u: goto label_7F313F78;
    case 0x7F313F7Cu: goto label_7F313F7C;
    case 0x7F313F80u: goto label_7F313F80;
    case 0x7F313F84u: goto label_7F313F84;
    case 0x7F313F88u: goto label_7F313F88;
    case 0x7F313F8Cu: goto label_7F313F8C;
    case 0x7F313F90u: goto label_7F313F90;
    case 0x7F313F94u: goto label_7F313F94;
    case 0x7F313F98u: goto label_7F313F98;
    case 0x7F313F9Cu: goto label_7F313F9C;
    case 0x7F313FA0u: goto label_7F313FA0;
    case 0x7F313FA4u: goto label_7F313FA4;
    case 0x7F313FA8u: goto label_7F313FA8;
    case 0x7F313FACu: goto label_7F313FAC;
    case 0x7F313FB0u: goto label_7F313FB0;
    case 0x7F313FB4u: goto label_7F313FB4;
    case 0x7F313FB8u: goto label_7F313FB8;
    case 0x7F313FBCu: goto label_7F313FBC;
    case 0x7F313FC0u: goto label_7F313FC0;
    case 0x7F313FC4u: goto label_7F313FC4;
    case 0x7F313FC8u: goto label_7F313FC8;
    case 0x7F313FCCu: goto label_7F313FCC;
    case 0x7F313FD0u: goto label_7F313FD0;
    case 0x7F313FD4u: goto label_7F313FD4;
    case 0x7F313FD8u: goto label_7F313FD8;
    case 0x7F313FDCu: goto label_7F313FDC;
    case 0x7F313FE0u: goto label_7F313FE0;
    case 0x7F313FE4u: goto label_7F313FE4;
    case 0x7F313FE8u: goto label_7F313FE8;
    case 0x7F313FECu: goto label_7F313FEC;
    case 0x7F313FF0u: goto label_7F313FF0;
    case 0x7F313FF4u: goto label_7F313FF4;
    case 0x7F313FF8u: goto label_7F313FF8;
    case 0x7F313FFCu: goto label_7F313FFC;
    case 0x7F314000u: goto label_7F314000;
    case 0x7F314004u: goto label_7F314004;
    case 0x7F314008u: goto label_7F314008;
    case 0x7F31400Cu: goto label_7F31400C;
    case 0x7F314010u: goto label_7F314010;
    case 0x7F314014u: goto label_7F314014;
    case 0x7F314018u: goto label_7F314018;
    case 0x7F31401Cu: goto label_7F31401C;
    case 0x7F314020u: goto label_7F314020;
    case 0x7F314024u: goto label_7F314024;
    case 0x7F314028u: goto label_7F314028;
    case 0x7F31402Cu: goto label_7F31402C;
    case 0x7F314030u: goto label_7F314030;
    case 0x7F314034u: goto label_7F314034;
    case 0x7F314038u: goto label_7F314038;
    case 0x7F31403Cu: goto label_7F31403C;
    case 0x7F314040u: goto label_7F314040;
    case 0x7F314044u: goto label_7F314044;
    case 0x7F314048u: goto label_7F314048;
    case 0x7F31404Cu: goto label_7F31404C;
    case 0x7F314050u: goto label_7F314050;
    case 0x7F314054u: goto label_7F314054;
    case 0x7F314058u: goto label_7F314058;
    case 0x7F31405Cu: goto label_7F31405C;
    case 0x7F314060u: goto label_7F314060;
    case 0x7F314064u: goto label_7F314064;
    case 0x7F314068u: goto label_7F314068;
    case 0x7F31406Cu: goto label_7F31406C;
    case 0x7F314070u: goto label_7F314070;
    case 0x7F314074u: goto label_7F314074;
    case 0x7F314078u: goto label_7F314078;
    case 0x7F31407Cu: goto label_7F31407C;
    case 0x7F314080u: goto label_7F314080;
    case 0x7F314084u: goto label_7F314084;
    case 0x7F314088u: goto label_7F314088;
    case 0x7F31408Cu: goto label_7F31408C;
    case 0x7F314090u: goto label_7F314090;
    case 0x7F314094u: goto label_7F314094;
    case 0x7F314098u: goto label_7F314098;
    case 0x7F31409Cu: goto label_7F31409C;
    case 0x7F3140A0u: goto label_7F3140A0;
    case 0x7F3140A4u: goto label_7F3140A4;
    case 0x7F3140A8u: goto label_7F3140A8;
    case 0x7F3140ACu: goto label_7F3140AC;
    case 0x7F3140B0u: goto label_7F3140B0;
    case 0x7F3140B4u: goto label_7F3140B4;
    case 0x7F3140B8u: goto label_7F3140B8;
    case 0x7F3140BCu: goto label_7F3140BC;
    case 0x7F3140C0u: goto label_7F3140C0;
    case 0x7F3140C4u: goto label_7F3140C4;
    case 0x7F3140C8u: goto label_7F3140C8;
    case 0x7F3140CCu: goto label_7F3140CC;
    case 0x7F3140D0u: goto label_7F3140D0;
    case 0x7F3140D4u: goto label_7F3140D4;
    case 0x7F3140D8u: goto label_7F3140D8;
    case 0x7F3140DCu: goto label_7F3140DC;
    case 0x7F3140E0u: goto label_7F3140E0;
    case 0x7F3140E4u: goto label_7F3140E4;
    case 0x7F3140E8u: goto label_7F3140E8;
    default: return;
    }
label_7F3100EC:
    ctx->pc = 0x7F3100ECu;
    ctx->downcount -= 3;
    // 7F3100EC: andi.   r0, r3, 0x5000
    {
        ctx->gpr[0] = ctx->gpr[3] & 0x5000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3100F0:
    ctx->pc = 0x7F3100F0u;
    // 7F3100F0: cmpwi   r0, 16384
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3100F4:
    ctx->pc = 0x7F3100F4u;
    // 7F3100F4: bc    12, 2, 0x7F310160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310160;
        }
    }

label_7F3100F8:
    ctx->pc = 0x7F3100F8u;
    ctx->downcount -= 1;
    // 7F3100F8: bc    4, 0, 0x7F3103D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3103D4;
        }
    }

label_7F3100FC:
    ctx->pc = 0x7F3100FCu;
    ctx->downcount -= 2;
    // 7F3100FC: cmpwi   r0, 4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310100:
    ctx->pc = 0x7F310100u;
    // 7F310100: bc    12, 2, 0x7F310108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310108;
        }
    }

label_7F310104:
    ctx->pc = 0x7F310104u;
    ctx->downcount -= 1;
    // 7F310104: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F310108:
    ctx->pc = 0x7F310108u;
    ctx->downcount -= 9;
    // 7F310108: lwz     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31010C:
    ctx->pc = 0x7F31010Cu;
    // 7F31010C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F310110:
    ctx->pc = 0x7F310110u;
    // 7F310110: addi    r3, r3, -30480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30480);

label_7F310114:
    ctx->pc = 0x7F310114u;
    // 7F310114: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310118:
    ctx->pc = 0x7F310118u;
    // 7F310118: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31011C:
    ctx->pc = 0x7F31011Cu;
    // 7F31011C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310120:
    ctx->pc = 0x7F310120u;
    // 7F310120: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310124:
    ctx->pc = 0x7F310124u;
    // 7F310124: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310128:
    ctx->pc = 0x7F310128u;
    // 7F310128: bl      0x7F31435C
    {
            ctx->lr = 0x7F31012Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31012C:
    ctx->pc = 0x7F31012Cu;
    ctx->downcount -= 6;
    // 7F31012C: lwz     r3, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310130:
    ctx->pc = 0x7F310130u;
    // 7F310130: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F310134:
    ctx->pc = 0x7F310134u;
    // 7F310134: stw     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310138:
    ctx->pc = 0x7F310138u;
    // 7F310138: lwz     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31013C:
    ctx->pc = 0x7F31013Cu;
    // 7F31013C: cmpwi   r0, 0
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

label_7F310140:
    ctx->pc = 0x7F310140u;
    // 7F310140: bc    4, 0, 0x7F31014C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31014C;
        }
    }

label_7F310144:
    ctx->pc = 0x7F310144u;
    ctx->downcount -= 2;
    // 7F310144: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F310148:
    ctx->pc = 0x7F310148u;
    // 7F310148: stw     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31014C:
    ctx->pc = 0x7F31014Cu;
    ctx->downcount -= 4;
    // 7F31014C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F310150:
    ctx->pc = 0x7F310150u;
    // 7F310150: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F310154:
    ctx->pc = 0x7F310154u;
    // 7F310154: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F310158:
    ctx->pc = 0x7F310158u;
    // 7F310158: bl      0x7F011698
    {
            ctx->lr = 0x7F31015Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31015C:
    ctx->pc = 0x7F31015Cu;
    ctx->downcount -= 1;
    // 7F31015C: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F310160:
    ctx->pc = 0x7F310160u;
    ctx->downcount -= 9;
    // 7F310160: lwz     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310164:
    ctx->pc = 0x7F310164u;
    // 7F310164: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F310168:
    ctx->pc = 0x7F310168u;
    // 7F310168: addi    r3, r3, -30468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30468);

label_7F31016C:
    ctx->pc = 0x7F31016Cu;
    // 7F31016C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310170:
    ctx->pc = 0x7F310170u;
    // 7F310170: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310174:
    ctx->pc = 0x7F310174u;
    // 7F310174: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310178:
    ctx->pc = 0x7F310178u;
    // 7F310178: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31017C:
    ctx->pc = 0x7F31017Cu;
    // 7F31017C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310180:
    ctx->pc = 0x7F310180u;
    // 7F310180: bl      0x7F31435C
    {
            ctx->lr = 0x7F310184u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310184:
    ctx->pc = 0x7F310184u;
    ctx->downcount -= 6;
    // 7F310184: lwz     r3, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310188:
    ctx->pc = 0x7F310188u;
    // 7F310188: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31018C:
    ctx->pc = 0x7F31018Cu;
    // 7F31018C: stw     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310190:
    ctx->pc = 0x7F310190u;
    // 7F310190: lwz     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310194:
    ctx->pc = 0x7F310194u;
    // 7F310194: cmpwi   r0, 2
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

label_7F310198:
    ctx->pc = 0x7F310198u;
    // 7F310198: bc    4, 1, 0x7F3101A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3101A4;
        }
    }

label_7F31019C:
    ctx->pc = 0x7F31019Cu;
    ctx->downcount -= 2;
    // 7F31019C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3101A0:
    ctx->pc = 0x7F3101A0u;
    // 7F3101A0: stw     r0, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3101A4:
    ctx->pc = 0x7F3101A4u;
    ctx->downcount -= 4;
    // 7F3101A4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3101A8:
    ctx->pc = 0x7F3101A8u;
    // 7F3101A8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3101AC:
    ctx->pc = 0x7F3101ACu;
    // 7F3101AC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F3101B0:
    ctx->pc = 0x7F3101B0u;
    // 7F3101B0: bl      0x7F011698
    {
            ctx->lr = 0x7F3101B4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3101B4:
    ctx->pc = 0x7F3101B4u;
    ctx->downcount -= 1;
    // 7F3101B4: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F3101B8:
    ctx->pc = 0x7F3101B8u;
    ctx->downcount -= 3;
    // 7F3101B8: lwz     r4, -25936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3101BC:
    ctx->pc = 0x7F3101BCu;
    // 7F3101BC: cmpwi   r4, 8192
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3101C0:
    ctx->pc = 0x7F3101C0u;
    // 7F3101C0: bc    12, 2, 0x7F31028C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31028C;
        }
    }

label_7F3101C4:
    ctx->pc = 0x7F3101C4u;
    ctx->downcount -= 1;
    // 7F3101C4: bc    4, 0, 0x7F3101E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3101E0;
        }
    }

label_7F3101C8:
    ctx->pc = 0x7F3101C8u;
    ctx->downcount -= 2;
    // 7F3101C8: cmpwi   r4, 128
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

label_7F3101CC:
    ctx->pc = 0x7F3101CCu;
    // 7F3101CC: bc    12, 2, 0x7F310228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310228;
        }
    }

label_7F3101D0:
    ctx->pc = 0x7F3101D0u;
    ctx->downcount -= 1;
    // 7F3101D0: bc    4, 0, 0x7F3103D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3103D4;
        }
    }

label_7F3101D4:
    ctx->pc = 0x7F3101D4u;
    ctx->downcount -= 2;
    // 7F3101D4: cmpwi   r4, 32
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

label_7F3101D8:
    ctx->pc = 0x7F3101D8u;
    // 7F3101D8: bc    12, 2, 0x7F3101F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3101F4;
        }
    }

label_7F3101DC:
    ctx->pc = 0x7F3101DCu;
    ctx->downcount -= 1;
    // 7F3101DC: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F3101E0:
    ctx->pc = 0x7F3101E0u;
    ctx->downcount -= 4;
    // 7F3101E0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F3101E4:
    ctx->pc = 0x7F3101E4u;
    // 7F3101E4: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F3101E8:
    ctx->pc = 0x7F3101E8u;
    // 7F3101E8: cmpw    r4, r0
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

label_7F3101EC:
    ctx->pc = 0x7F3101ECu;
    // 7F3101EC: bc    12, 2, 0x7F31028C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31028C;
        }
    }

label_7F3101F0:
    ctx->pc = 0x7F3101F0u;
    ctx->downcount -= 1;
    // 7F3101F0: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F3101F4:
    ctx->pc = 0x7F3101F4u;
    ctx->downcount -= 6;
    // 7F3101F4: lis     r3, 223
    ctx->gpr[3] = ((u32)(s32)(223) << 16);

label_7F3101F8:
    ctx->pc = 0x7F3101F8u;
    // 7F3101F8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3101FC:
    ctx->pc = 0x7F3101FCu;
    // 7F3101FC: addi    r3, r3, -28775
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28775);

label_7F310200:
    ctx->pc = 0x7F310200u;
    // 7F310200: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310204:
    ctx->pc = 0x7F310204u;
    // 7F310204: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310208:
    ctx->pc = 0x7F310208u;
    // 7F310208: bl      0x7F31435C
    {
            ctx->lr = 0x7F31020Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31020C:
    ctx->pc = 0x7F31020Cu;
    ctx->downcount -= 6;
    // 7F31020C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310210:
    ctx->pc = 0x7F310210u;
    // 7F310210: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F310214:
    ctx->pc = 0x7F310214u;
    // 7F310214: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310218:
    ctx->pc = 0x7F310218u;
    // 7F310218: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31021C:
    ctx->pc = 0x7F31021Cu;
    // 7F31021C: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F310220:
    ctx->pc = 0x7F310220u;
    // 7F310220: bl      0x7F011698
    {
            ctx->lr = 0x7F310224u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F310224:
    ctx->pc = 0x7F310224u;
    ctx->downcount -= 1;
    // 7F310224: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F310228:
    ctx->pc = 0x7F310228u;
    ctx->downcount -= 3;
    // 7F310228: lwz     r0, -26016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31022C:
    ctx->pc = 0x7F31022Cu;
    // 7F31022C: cmpwi   r0, 0
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

label_7F310230:
    ctx->pc = 0x7F310230u;
    // 7F310230: bc    4, 2, 0x7F310258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310258;
        }
    }

label_7F310234:
    ctx->pc = 0x7F310234u;
    ctx->downcount -= 6;
    // 7F310234: lis     r3, 58
    ctx->gpr[3] = ((u32)(s32)(58) << 16);

label_7F310238:
    ctx->pc = 0x7F310238u;
    // 7F310238: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F31023C:
    ctx->pc = 0x7F31023Cu;
    // 7F31023C: addi    r3, r3, -28096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28096);

label_7F310240:
    ctx->pc = 0x7F310240u;
    // 7F310240: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310244:
    ctx->pc = 0x7F310244u;
    // 7F310244: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310248:
    ctx->pc = 0x7F310248u;
    // 7F310248: bl      0x7F31435C
    {
            ctx->lr = 0x7F31024Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31024C:
    ctx->pc = 0x7F31024Cu;
    ctx->downcount -= 3;
    // 7F31024C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F310250:
    ctx->pc = 0x7F310250u;
    // 7F310250: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310254:
    ctx->pc = 0x7F310254u;
    // 7F310254: b       0x7F310278
    {
            goto label_7F310278;
    }

label_7F310258:
    ctx->pc = 0x7F310258u;
    ctx->downcount -= 6;
    // 7F310258: lis     r3, 223
    ctx->gpr[3] = ((u32)(s32)(223) << 16);

label_7F31025C:
    ctx->pc = 0x7F31025Cu;
    // 7F31025C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310260:
    ctx->pc = 0x7F310260u;
    // 7F310260: addi    r3, r3, -28775
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28775);

label_7F310264:
    ctx->pc = 0x7F310264u;
    // 7F310264: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310268:
    ctx->pc = 0x7F310268u;
    // 7F310268: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F31026C:
    ctx->pc = 0x7F31026Cu;
    // 7F31026C: bl      0x7F31435C
    {
            ctx->lr = 0x7F310270u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310270:
    ctx->pc = 0x7F310270u;
    ctx->downcount -= 2;
    // 7F310270: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310274:
    ctx->pc = 0x7F310274u;
    // 7F310274: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310278:
    ctx->pc = 0x7F310278u;
    ctx->downcount -= 4;
    // 7F310278: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31027C:
    ctx->pc = 0x7F31027Cu;
    // 7F31027C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F310280:
    ctx->pc = 0x7F310280u;
    // 7F310280: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F310284:
    ctx->pc = 0x7F310284u;
    // 7F310284: bl      0x7F011698
    {
            ctx->lr = 0x7F310288u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F310288:
    ctx->pc = 0x7F310288u;
    ctx->downcount -= 1;
    // 7F310288: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F31028C:
    ctx->pc = 0x7F31028Cu;
    ctx->downcount -= 9;
    // 7F31028C: lwz     r0, -26016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310290:
    ctx->pc = 0x7F310290u;
    // 7F310290: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F310294:
    ctx->pc = 0x7F310294u;
    // 7F310294: addi    r3, r3, -30456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30456);

label_7F310298:
    ctx->pc = 0x7F310298u;
    // 7F310298: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F31029C:
    ctx->pc = 0x7F31029Cu;
    // 7F31029C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3102A0:
    ctx->pc = 0x7F3102A0u;
    // 7F3102A0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3102A4:
    ctx->pc = 0x7F3102A4u;
    // 7F3102A4: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3102A8:
    ctx->pc = 0x7F3102A8u;
    // 7F3102A8: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3102AC:
    ctx->pc = 0x7F3102ACu;
    // 7F3102AC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3102B0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3102B0:
    ctx->pc = 0x7F3102B0u;
    ctx->downcount -= 7;
    // 7F3102B0: lwz     r0, -26016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3102B4:
    ctx->pc = 0x7F3102B4u;
    // 7F3102B4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3102B8:
    ctx->pc = 0x7F3102B8u;
    // 7F3102B8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3102BC:
    ctx->pc = 0x7F3102BCu;
    // 7F3102BC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F3102C0:
    ctx->pc = 0x7F3102C0u;
    // 7F3102C0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F3102C4:
    ctx->pc = 0x7F3102C4u;
    // 7F3102C4: stw     r0, -26016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3102C8:
    ctx->pc = 0x7F3102C8u;
    // 7F3102C8: bl      0x7F011698
    {
            ctx->lr = 0x7F3102CCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3102CC:
    ctx->pc = 0x7F3102CCu;
    ctx->downcount -= 1;
    // 7F3102CC: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F3102D0:
    ctx->pc = 0x7F3102D0u;
    ctx->downcount -= 7;
    // 7F3102D0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3102D4:
    ctx->pc = 0x7F3102D4u;
    // 7F3102D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3102D8:
    ctx->pc = 0x7F3102D8u;
    // 7F3102D8: addi    r5, r4, -10344
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10344);

label_7F3102DC:
    ctx->pc = 0x7F3102DCu;
    // 7F3102DC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3102E0:
    ctx->pc = 0x7F3102E0u;
    // 7F3102E0: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3102E4:
    ctx->pc = 0x7F3102E4u;
    // 7F3102E4: lwz     r5, -26020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26020);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3102E8:
    ctx->pc = 0x7F3102E8u;
    // 7F3102E8: bl      0x7F30C1A4
    {
            ctx->lr = 0x7F3102ECu;
            ctx->pc = 0x7F30C1A4u;
            return;
    }

label_7F3102EC:
    ctx->pc = 0x7F3102ECu;
    ctx->downcount -= 2;
    // 7F3102EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3102F0:
    ctx->pc = 0x7F3102F0u;
    // 7F3102F0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3102F4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3102F4:
    ctx->pc = 0x7F3102F4u;
    ctx->downcount -= 1;
    // 7F3102F4: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F3102F8:
    ctx->pc = 0x7F3102F8u;
    ctx->downcount -= 5;
    // 7F3102F8: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3102FC:
    ctx->pc = 0x7F3102FCu;
    // 7F3102FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310300:
    ctx->pc = 0x7F310300u;
    // 7F310300: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F310304:
    ctx->pc = 0x7F310304u;
    // 7F310304: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310308:
    ctx->pc = 0x7F310308u;
    // 7F310308: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F31030C:
    ctx->pc = 0x7F31030Cu;
    ctx->downcount -= 3;
    // 7F31030C: lwz     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310310:
    ctx->pc = 0x7F310310u;
    // 7F310310: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F310314:
    ctx->pc = 0x7F310314u;
    // 7F310314: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F310318u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F310318:
    ctx->pc = 0x7F310318u;
    ctx->downcount -= 5;
    // 7F310318: lwz     r0, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31031C:
    ctx->pc = 0x7F31031Cu;
    // 7F31031C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F310320:
    ctx->pc = 0x7F310320u;
    // 7F310320: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310324:
    ctx->pc = 0x7F310324u;
    // 7F310324: lwz     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310328:
    ctx->pc = 0x7F310328u;
    // 7F310328: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F31032Cu;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F31032C:
    ctx->pc = 0x7F31032Cu;
    ctx->downcount -= 3;
    // 7F31032C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310330:
    ctx->pc = 0x7F310330u;
    // 7F310330: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310334:
    ctx->pc = 0x7F310334u;
    // 7F310334: b       0x7F3103D4
    {
            goto label_7F3103D4;
    }

label_7F310338:
    ctx->pc = 0x7F310338u;
    ctx->downcount -= 3;
    // 7F310338: lwz     r0, -26008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31033C:
    ctx->pc = 0x7F31033Cu;
    // 7F31033C: cmpwi   r0, 3
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

label_7F310340:
    ctx->pc = 0x7F310340u;
    // 7F310340: bc    4, 2, 0x7F31035C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31035C;
        }
    }

label_7F310344:
    ctx->pc = 0x7F310344u;
    ctx->downcount -= 6;
    // 7F310344: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F310348:
    ctx->pc = 0x7F310348u;
    // 7F310348: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31034C:
    ctx->pc = 0x7F31034Cu;
    // 7F31034C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310350:
    ctx->pc = 0x7F310350u;
    // 7F310350: addi    r3, r3, -9476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9476);

label_7F310354:
    ctx->pc = 0x7F310354u;
    // 7F310354: addi    r4, r4, -9472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9472);

label_7F310358:
    ctx->pc = 0x7F310358u;
    // 7F310358: bl      0x7F07BB50
    {
            ctx->lr = 0x7F31035Cu;
            ctx->pc = 0x7F07BB50u;
            return;
    }

label_7F31035C:
    ctx->pc = 0x7F31035Cu;
    ctx->downcount -= 4;
    // 7F31035C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F310360:
    ctx->pc = 0x7F310360u;
    // 7F310360: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310364:
    ctx->pc = 0x7F310364u;
    // 7F310364: andi.   r0, r0, 0x00A0
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x00A0u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310368:
    ctx->pc = 0x7F310368u;
    // 7F310368: bc    12, 2, 0x7F3103D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3103D4;
        }
    }

label_7F31036C:
    ctx->pc = 0x7F31036Cu;
    ctx->downcount -= 4;
    // 7F31036C: lis     r4, 38
    ctx->gpr[4] = ((u32)(s32)(38) << 16);

label_7F310370:
    ctx->pc = 0x7F310370u;
    // 7F310370: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310374:
    ctx->pc = 0x7F310374u;
    // 7F310374: addi    r4, r4, 26495
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26495);

label_7F310378:
    ctx->pc = 0x7F310378u;
    // 7F310378: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31037Cu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31037C:
    ctx->pc = 0x7F31037Cu;
    ctx->downcount -= 10;
    // 7F31037C: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F310380:
    ctx->pc = 0x7F310380u;
    // 7F310380: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F310384:
    ctx->pc = 0x7F310384u;
    // 7F310384: lwz     r0, -26020(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310388:
    ctx->pc = 0x7F310388u;
    // 7F310388: addi    r3, r3, -31008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31008);

label_7F31038C:
    ctx->pc = 0x7F31038Cu;
    // 7F31038C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310390:
    ctx->pc = 0x7F310390u;
    // 7F310390: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310394:
    ctx->pc = 0x7F310394u;
    // 7F310394: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310398:
    ctx->pc = 0x7F310398u;
    // 7F310398: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F31039C:
    ctx->pc = 0x7F31039Cu;
    // 7F31039C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3103A0:
    ctx->pc = 0x7F3103A0u;
    // 7F3103A0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3103A4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3103A4:
    ctx->pc = 0x7F3103A4u;
    ctx->downcount -= 6;
    // 7F3103A4: lis     r3, 59
    ctx->gpr[3] = ((u32)(s32)(59) << 16);

label_7F3103A8:
    ctx->pc = 0x7F3103A8u;
    // 7F3103A8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3103AC:
    ctx->pc = 0x7F3103ACu;
    // 7F3103AC: addi    r3, r3, -17393
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17393);

label_7F3103B0:
    ctx->pc = 0x7F3103B0u;
    // 7F3103B0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3103B4:
    ctx->pc = 0x7F3103B4u;
    // 7F3103B4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3103B8:
    ctx->pc = 0x7F3103B8u;
    // 7F3103B8: bl      0x7F31435C
    {
            ctx->lr = 0x7F3103BCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3103BC:
    ctx->pc = 0x7F3103BCu;
    ctx->downcount -= 6;
    // 7F3103BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3103C0:
    ctx->pc = 0x7F3103C0u;
    // 7F3103C0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3103C4:
    ctx->pc = 0x7F3103C4u;
    // 7F3103C4: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3103C8:
    ctx->pc = 0x7F3103C8u;
    // 7F3103C8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3103CC:
    ctx->pc = 0x7F3103CCu;
    // 7F3103CC: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F3103D0:
    ctx->pc = 0x7F3103D0u;
    // 7F3103D0: bl      0x7F011698
    {
            ctx->lr = 0x7F3103D4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3103D4:
    ctx->pc = 0x7F3103D4u;
    ctx->downcount -= 16;
    // 7F3103D4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3103D8:
    ctx->pc = 0x7F3103D8u;
    // 7F3103D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3103DC:
    ctx->pc = 0x7F3103DCu;
    // 7F3103DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3103E0:
    ctx->pc = 0x7F3103E0u;
    // 7F3103E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3103E4:
    ctx->pc = 0x7F3103E4u;
    // 7F3103E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3103E8:
    ctx->pc = 0x7F3103E8u;
    ctx->downcount -= 19;
    // 7F3103E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3103EC:
    ctx->pc = 0x7F3103ECu;
    // 7F3103EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3103F0:
    ctx->pc = 0x7F3103F0u;
    // 7F3103F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3103F4:
    ctx->pc = 0x7F3103F4u;
    // 7F3103F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3103F8:
    ctx->pc = 0x7F3103F8u;
    // 7F3103F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3103FC:
    ctx->pc = 0x7F3103FCu;
    // 7F3103FC: addis   r31, r30, 3
    ctx->gpr[31] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F310400:
    ctx->pc = 0x7F310400u;
    // 7F310400: lwz     r0, -25960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25960);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310404:
    ctx->pc = 0x7F310404u;
    // 7F310404: cmpwi   r0, 1
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

label_7F310408:
    ctx->pc = 0x7F310408u;
    // 7F310408: bc    12, 2, 0x7F310540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310540;
        }
    }

label_7F31040C:
    ctx->pc = 0x7F31040Cu;
    ctx->downcount -= 1;
    // 7F31040C: bc    4, 0, 0x7F31041C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31041C;
        }
    }

label_7F310410:
    ctx->pc = 0x7F310410u;
    ctx->downcount -= 2;
    // 7F310410: cmpwi   r0, 0
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

label_7F310414:
    ctx->pc = 0x7F310414u;
    // 7F310414: bc    4, 0, 0x7F310428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310428;
        }
    }

label_7F310418:
    ctx->pc = 0x7F310418u;
    ctx->downcount -= 1;
    // 7F310418: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F31041C:
    ctx->pc = 0x7F31041Cu;
    ctx->downcount -= 2;
    // 7F31041C: cmpwi   r0, 3
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

label_7F310420:
    ctx->pc = 0x7F310420u;
    // 7F310420: bc    4, 0, 0x7F310568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310568;
        }
    }

label_7F310424:
    ctx->pc = 0x7F310424u;
    ctx->downcount -= 1;
    // 7F310424: b       0x7F310558
    {
            goto label_7F310558;
    }

label_7F310428:
    ctx->pc = 0x7F310428u;
    ctx->downcount -= 3;
    // 7F310428: lwz     r0, -25936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31042C:
    ctx->pc = 0x7F31042Cu;
    // 7F31042C: cmpwi   r0, 4096
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310430:
    ctx->pc = 0x7F310430u;
    // 7F310430: bc    12, 2, 0x7F3104FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3104FC;
        }
    }

label_7F310434:
    ctx->pc = 0x7F310434u;
    ctx->downcount -= 1;
    // 7F310434: bc    4, 0, 0x7F310450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310450;
        }
    }

label_7F310438:
    ctx->pc = 0x7F310438u;
    ctx->downcount -= 2;
    // 7F310438: cmpwi   r0, 128
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

label_7F31043C:
    ctx->pc = 0x7F31043Cu;
    // 7F31043C: bc    12, 2, 0x7F310490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310490;
        }
    }

label_7F310440:
    ctx->pc = 0x7F310440u;
    ctx->downcount -= 1;
    // 7F310440: bc    4, 0, 0x7F310568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310568;
        }
    }

label_7F310444:
    ctx->pc = 0x7F310444u;
    ctx->downcount -= 2;
    // 7F310444: cmpwi   r0, 32
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

label_7F310448:
    ctx->pc = 0x7F310448u;
    // 7F310448: bc    12, 2, 0x7F31045C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31045C;
        }
    }

label_7F31044C:
    ctx->pc = 0x7F31044Cu;
    ctx->downcount -= 1;
    // 7F31044C: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F310450:
    ctx->pc = 0x7F310450u;
    ctx->downcount -= 2;
    // 7F310450: cmpwi   r0, 16384
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310454:
    ctx->pc = 0x7F310454u;
    // 7F310454: bc    12, 2, 0x7F3104FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3104FC;
        }
    }

label_7F310458:
    ctx->pc = 0x7F310458u;
    ctx->downcount -= 1;
    // 7F310458: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F31045C:
    ctx->pc = 0x7F31045Cu;
    ctx->downcount -= 6;
    // 7F31045C: lis     r3, 245
    ctx->gpr[3] = ((u32)(s32)(245) << 16);

label_7F310460:
    ctx->pc = 0x7F310460u;
    // 7F310460: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310464:
    ctx->pc = 0x7F310464u;
    // 7F310464: addi    r3, r3, 4244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4244);

label_7F310468:
    ctx->pc = 0x7F310468u;
    // 7F310468: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F31046C:
    ctx->pc = 0x7F31046Cu;
    // 7F31046C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310470:
    ctx->pc = 0x7F310470u;
    // 7F310470: bl      0x7F31435C
    {
            ctx->lr = 0x7F310474u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310474:
    ctx->pc = 0x7F310474u;
    ctx->downcount -= 6;
    // 7F310474: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F310478:
    ctx->pc = 0x7F310478u;
    // 7F310478: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31047C:
    ctx->pc = 0x7F31047Cu;
    // 7F31047C: stw     r0, -25960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310480:
    ctx->pc = 0x7F310480u;
    // 7F310480: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F310484:
    ctx->pc = 0x7F310484u;
    // 7F310484: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F310488:
    ctx->pc = 0x7F310488u;
    // 7F310488: bl      0x7F011698
    {
            ctx->lr = 0x7F31048Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31048C:
    ctx->pc = 0x7F31048Cu;
    ctx->downcount -= 1;
    // 7F31048C: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F310490:
    ctx->pc = 0x7F310490u;
    ctx->downcount -= 5;
    // 7F310490: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310494:
    ctx->pc = 0x7F310494u;
    // 7F310494: stw     r0, -25952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310498:
    ctx->pc = 0x7F310498u;
    // 7F310498: lwz     r0, -25956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31049C:
    ctx->pc = 0x7F31049Cu;
    // 7F31049C: cmpwi   r0, 0
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

label_7F3104A0:
    ctx->pc = 0x7F3104A0u;
    // 7F3104A0: bc    4, 2, 0x7F3104C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3104C8;
        }
    }

label_7F3104A4:
    ctx->pc = 0x7F3104A4u;
    ctx->downcount -= 6;
    // 7F3104A4: lis     r3, 129
    ctx->gpr[3] = ((u32)(s32)(129) << 16);

label_7F3104A8:
    ctx->pc = 0x7F3104A8u;
    // 7F3104A8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3104AC:
    ctx->pc = 0x7F3104ACu;
    // 7F3104AC: addi    r3, r3, 26494
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26494);

label_7F3104B0:
    ctx->pc = 0x7F3104B0u;
    // 7F3104B0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3104B4:
    ctx->pc = 0x7F3104B4u;
    // 7F3104B4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3104B8:
    ctx->pc = 0x7F3104B8u;
    // 7F3104B8: bl      0x7F31435C
    {
            ctx->lr = 0x7F3104BCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3104BC:
    ctx->pc = 0x7F3104BCu;
    ctx->downcount -= 3;
    // 7F3104BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3104C0:
    ctx->pc = 0x7F3104C0u;
    // 7F3104C0: stw     r0, -25960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3104C4:
    ctx->pc = 0x7F3104C4u;
    // 7F3104C4: b       0x7F3104E8
    {
            goto label_7F3104E8;
    }

label_7F3104C8:
    ctx->pc = 0x7F3104C8u;
    ctx->downcount -= 6;
    // 7F3104C8: lis     r3, 158
    ctx->gpr[3] = ((u32)(s32)(158) << 16);

label_7F3104CC:
    ctx->pc = 0x7F3104CCu;
    // 7F3104CC: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3104D0:
    ctx->pc = 0x7F3104D0u;
    // 7F3104D0: addi    r3, r3, 55
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(55);

label_7F3104D4:
    ctx->pc = 0x7F3104D4u;
    // 7F3104D4: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3104D8:
    ctx->pc = 0x7F3104D8u;
    // 7F3104D8: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3104DC:
    ctx->pc = 0x7F3104DCu;
    // 7F3104DC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3104E0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3104E0:
    ctx->pc = 0x7F3104E0u;
    ctx->downcount -= 2;
    // 7F3104E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3104E4:
    ctx->pc = 0x7F3104E4u;
    // 7F3104E4: stw     r0, -25960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3104E8:
    ctx->pc = 0x7F3104E8u;
    ctx->downcount -= 4;
    // 7F3104E8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3104EC:
    ctx->pc = 0x7F3104ECu;
    // 7F3104EC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3104F0:
    ctx->pc = 0x7F3104F0u;
    // 7F3104F0: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F3104F4:
    ctx->pc = 0x7F3104F4u;
    // 7F3104F4: bl      0x7F011698
    {
            ctx->lr = 0x7F3104F8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3104F8:
    ctx->pc = 0x7F3104F8u;
    ctx->downcount -= 1;
    // 7F3104F8: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F3104FC:
    ctx->pc = 0x7F3104FCu;
    ctx->downcount -= 9;
    // 7F3104FC: lwz     r0, -25956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310500:
    ctx->pc = 0x7F310500u;
    // 7F310500: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F310504:
    ctx->pc = 0x7F310504u;
    // 7F310504: addi    r3, r3, -30448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30448);

label_7F310508:
    ctx->pc = 0x7F310508u;
    // 7F310508: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F31050C:
    ctx->pc = 0x7F31050Cu;
    // 7F31050C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310510:
    ctx->pc = 0x7F310510u;
    // 7F310510: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310514:
    ctx->pc = 0x7F310514u;
    // 7F310514: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310518:
    ctx->pc = 0x7F310518u;
    // 7F310518: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F31051C:
    ctx->pc = 0x7F31051Cu;
    // 7F31051C: bl      0x7F31435C
    {
            ctx->lr = 0x7F310520u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310520:
    ctx->pc = 0x7F310520u;
    ctx->downcount -= 7;
    // 7F310520: lwz     r0, -25956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310524:
    ctx->pc = 0x7F310524u;
    // 7F310524: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F310528:
    ctx->pc = 0x7F310528u;
    // 7F310528: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31052C:
    ctx->pc = 0x7F31052Cu;
    // 7F31052C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F310530:
    ctx->pc = 0x7F310530u;
    // 7F310530: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F310534:
    ctx->pc = 0x7F310534u;
    // 7F310534: stw     r0, -25956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310538:
    ctx->pc = 0x7F310538u;
    // 7F310538: bl      0x7F011698
    {
            ctx->lr = 0x7F31053Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31053C:
    ctx->pc = 0x7F31053Cu;
    ctx->downcount -= 1;
    // 7F31053C: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F310540:
    ctx->pc = 0x7F310540u;
    ctx->downcount -= 3;
    // 7F310540: lwz     r5, -25956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25956);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F310544:
    ctx->pc = 0x7F310544u;
    // 7F310544: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F310548:
    ctx->pc = 0x7F310548u;
    // 7F310548: bl      0x7F30C1A4
    {
            ctx->lr = 0x7F31054Cu;
            ctx->pc = 0x7F30C1A4u;
            return;
    }

label_7F31054C:
    ctx->pc = 0x7F31054Cu;
    ctx->downcount -= 2;
    // 7F31054C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F310550:
    ctx->pc = 0x7F310550u;
    // 7F310550: bl      0x7F3C8210
    {
            ctx->lr = 0x7F310554u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F310554:
    ctx->pc = 0x7F310554u;
    ctx->downcount -= 1;
    // 7F310554: b       0x7F310568
    {
            goto label_7F310568;
    }

label_7F310558:
    ctx->pc = 0x7F310558u;
    ctx->downcount -= 4;
    // 7F310558: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31055C:
    ctx->pc = 0x7F31055Cu;
    // 7F31055C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310560:
    ctx->pc = 0x7F310560u;
    // 7F310560: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F310564:
    ctx->pc = 0x7F310564u;
    // 7F310564: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310568:
    ctx->pc = 0x7F310568u;
    ctx->downcount -= 16;
    // 7F310568: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31056C:
    ctx->pc = 0x7F31056Cu;
    // 7F31056C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310570:
    ctx->pc = 0x7F310570u;
    // 7F310570: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310574:
    ctx->pc = 0x7F310574u;
    // 7F310574: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310578:
    ctx->pc = 0x7F310578u;
    // 7F310578: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31057C:
    ctx->pc = 0x7F31057Cu;
    ctx->downcount -= 19;
    // 7F31057C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310580:
    ctx->pc = 0x7F310580u;
    // 7F310580: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310584:
    ctx->pc = 0x7F310584u;
    // 7F310584: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310588:
    ctx->pc = 0x7F310588u;
    // 7F310588: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31058C:
    ctx->pc = 0x7F31058Cu;
    // 7F31058C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310590:
    ctx->pc = 0x7F310590u;
    // 7F310590: addis   r31, r30, 3
    ctx->gpr[31] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F310594:
    ctx->pc = 0x7F310594u;
    // 7F310594: lwz     r0, -25948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25948);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310598:
    ctx->pc = 0x7F310598u;
    // 7F310598: cmpwi   r0, 1
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

label_7F31059C:
    ctx->pc = 0x7F31059Cu;
    // 7F31059C: bc    12, 2, 0x7F3108F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3108F8;
        }
    }

label_7F3105A0:
    ctx->pc = 0x7F3105A0u;
    ctx->downcount -= 1;
    // 7F3105A0: bc    4, 0, 0x7F3105B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3105B0;
        }
    }

label_7F3105A4:
    ctx->pc = 0x7F3105A4u;
    ctx->downcount -= 2;
    // 7F3105A4: cmpwi   r0, 0
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

label_7F3105A8:
    ctx->pc = 0x7F3105A8u;
    // 7F3105A8: bc    4, 0, 0x7F3105BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3105BC;
        }
    }

label_7F3105AC:
    ctx->pc = 0x7F3105ACu;
    ctx->downcount -= 1;
    // 7F3105AC: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F3105B0:
    ctx->pc = 0x7F3105B0u;
    ctx->downcount -= 2;
    // 7F3105B0: cmpwi   r0, 3
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

label_7F3105B4:
    ctx->pc = 0x7F3105B4u;
    // 7F3105B4: bc    4, 0, 0x7F310910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310910;
        }
    }

label_7F3105B8:
    ctx->pc = 0x7F3105B8u;
    ctx->downcount -= 1;
    // 7F3105B8: b       0x7F310908
    {
            goto label_7F310908;
    }

label_7F3105BC:
    ctx->pc = 0x7F3105BCu;
    ctx->downcount -= 3;
    // 7F3105BC: lwz     r0, -25936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3105C0:
    ctx->pc = 0x7F3105C0u;
    // 7F3105C0: cmpwi   r0, 128
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

label_7F3105C4:
    ctx->pc = 0x7F3105C4u;
    // 7F3105C4: bc    12, 2, 0x7F310624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310624;
        }
    }

label_7F3105C8:
    ctx->pc = 0x7F3105C8u;
    ctx->downcount -= 1;
    // 7F3105C8: bc    4, 0, 0x7F310664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310664;
        }
    }

label_7F3105CC:
    ctx->pc = 0x7F3105CCu;
    ctx->downcount -= 2;
    // 7F3105CC: cmpwi   r0, 32
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

label_7F3105D0:
    ctx->pc = 0x7F3105D0u;
    // 7F3105D0: bc    12, 2, 0x7F3105D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3105D8;
        }
    }

label_7F3105D4:
    ctx->pc = 0x7F3105D4u;
    ctx->downcount -= 1;
    // 7F3105D4: b       0x7F310664
    {
            goto label_7F310664;
    }

label_7F3105D8:
    ctx->pc = 0x7F3105D8u;
    ctx->downcount -= 6;
    // 7F3105D8: lis     r3, 59
    ctx->gpr[3] = ((u32)(s32)(59) << 16);

label_7F3105DC:
    ctx->pc = 0x7F3105DCu;
    // 7F3105DC: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3105E0:
    ctx->pc = 0x7F3105E0u;
    // 7F3105E0: addi    r3, r3, 21059
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21059);

label_7F3105E4:
    ctx->pc = 0x7F3105E4u;
    // 7F3105E4: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3105E8:
    ctx->pc = 0x7F3105E8u;
    // 7F3105E8: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3105EC:
    ctx->pc = 0x7F3105ECu;
    // 7F3105EC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3105F0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3105F0:
    ctx->pc = 0x7F3105F0u;
    ctx->downcount -= 6;
    // 7F3105F0: lis     r3, 49
    ctx->gpr[3] = ((u32)(s32)(49) << 16);

label_7F3105F4:
    ctx->pc = 0x7F3105F4u;
    // 7F3105F4: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3105F8:
    ctx->pc = 0x7F3105F8u;
    // 7F3105F8: addi    r3, r3, 26547
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26547);

label_7F3105FC:
    ctx->pc = 0x7F3105FCu;
    // 7F3105FC: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F310600:
    ctx->pc = 0x7F310600u;
    // 7F310600: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310604:
    ctx->pc = 0x7F310604u;
    // 7F310604: bl      0x7F31435C
    {
            ctx->lr = 0x7F310608u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310608:
    ctx->pc = 0x7F310608u;
    ctx->downcount -= 6;
    // 7F310608: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31060C:
    ctx->pc = 0x7F31060Cu;
    // 7F31060C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F310610:
    ctx->pc = 0x7F310610u;
    // 7F310610: stw     r0, -25948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310614:
    ctx->pc = 0x7F310614u;
    // 7F310614: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F310618:
    ctx->pc = 0x7F310618u;
    // 7F310618: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31061C:
    ctx->pc = 0x7F31061Cu;
    // 7F31061C: bl      0x7F011698
    {
            ctx->lr = 0x7F310620u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F310620:
    ctx->pc = 0x7F310620u;
    ctx->downcount -= 1;
    // 7F310620: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F310624:
    ctx->pc = 0x7F310624u;
    ctx->downcount -= 9;
    // 7F310624: lwz     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310628:
    ctx->pc = 0x7F310628u;
    // 7F310628: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31062C:
    ctx->pc = 0x7F31062Cu;
    // 7F31062C: addi    r3, r3, -30440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30440);

label_7F310630:
    ctx->pc = 0x7F310630u;
    // 7F310630: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310634:
    ctx->pc = 0x7F310634u;
    // 7F310634: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310638:
    ctx->pc = 0x7F310638u;
    // 7F310638: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F31063C:
    ctx->pc = 0x7F31063Cu;
    // 7F31063C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310640:
    ctx->pc = 0x7F310640u;
    // 7F310640: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310644:
    ctx->pc = 0x7F310644u;
    // 7F310644: bl      0x7F31435C
    {
            ctx->lr = 0x7F310648u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310648:
    ctx->pc = 0x7F310648u;
    ctx->downcount -= 6;
    // 7F310648: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31064C:
    ctx->pc = 0x7F31064Cu;
    // 7F31064C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F310650:
    ctx->pc = 0x7F310650u;
    // 7F310650: stw     r0, -25948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310654:
    ctx->pc = 0x7F310654u;
    // 7F310654: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F310658:
    ctx->pc = 0x7F310658u;
    // 7F310658: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31065C:
    ctx->pc = 0x7F31065Cu;
    // 7F31065C: bl      0x7F011698
    {
            ctx->lr = 0x7F310660u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F310660:
    ctx->pc = 0x7F310660u;
    ctx->downcount -= 1;
    // 7F310660: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F310664:
    ctx->pc = 0x7F310664u;
    ctx->downcount -= 1;
    // 7F310664: bl      0x7F31225C
    {
            ctx->lr = 0x7F310668u;
            goto label_7F31225C;
    }

label_7F310668:
    ctx->pc = 0x7F310668u;
    ctx->downcount -= 8;
    // 7F310668: addis   r5, r30, 3
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F31066C:
    ctx->pc = 0x7F31066Cu;
    // 7F31066C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F310670:
    ctx->pc = 0x7F310670u;
    // 7F310670: lwz     r5, -25932(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F310674:
    ctx->pc = 0x7F310674u;
    // 7F310674: addi    r0, r4, -32768
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F310678:
    ctx->pc = 0x7F310678u;
    // 7F310678: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31067C:
    ctx->pc = 0x7F31067Cu;
    // 7F31067C: andi.   r4, r5, 0xA000
    {
        ctx->gpr[4] = ctx->gpr[5] & 0xA000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310680:
    ctx->pc = 0x7F310680u;
    // 7F310680: cmpw    r4, r0
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

label_7F310684:
    ctx->pc = 0x7F310684u;
    // 7F310684: bc    12, 2, 0x7F310698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310698;
        }
    }

label_7F310688:
    ctx->pc = 0x7F310688u;
    ctx->downcount -= 1;
    // 7F310688: bc    4, 0, 0x7F310910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310910;
        }
    }

label_7F31068C:
    ctx->pc = 0x7F31068Cu;
    ctx->downcount -= 2;
    // 7F31068C: cmpwi   r4, 8192
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310690:
    ctx->pc = 0x7F310690u;
    // 7F310690: bc    12, 2, 0x7F3107C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3107C8;
        }
    }

label_7F310694:
    ctx->pc = 0x7F310694u;
    ctx->downcount -= 1;
    // 7F310694: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F310698:
    ctx->pc = 0x7F310698u;
    ctx->downcount -= 3;
    // 7F310698: lwz     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31069C:
    ctx->pc = 0x7F31069Cu;
    // 7F31069C: cmpwi   r0, 2
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

label_7F3106A0:
    ctx->pc = 0x7F3106A0u;
    // 7F3106A0: bc    12, 2, 0x7F310730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310730;
        }
    }

label_7F3106A4:
    ctx->pc = 0x7F3106A4u;
    ctx->downcount -= 1;
    // 7F3106A4: bc    4, 0, 0x7F3106B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3106B8;
        }
    }

label_7F3106A8:
    ctx->pc = 0x7F3106A8u;
    ctx->downcount -= 2;
    // 7F3106A8: cmpwi   r0, 0
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

label_7F3106AC:
    ctx->pc = 0x7F3106ACu;
    // 7F3106AC: bc    12, 2, 0x7F3106C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3106C4;
        }
    }

label_7F3106B0:
    ctx->pc = 0x7F3106B0u;
    ctx->downcount -= 1;
    // 7F3106B0: bc    4, 0, 0x7F31071C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31071C;
        }
    }

label_7F3106B4:
    ctx->pc = 0x7F3106B4u;
    ctx->downcount -= 1;
    // 7F3106B4: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F3106B8:
    ctx->pc = 0x7F3106B8u;
    ctx->downcount -= 2;
    // 7F3106B8: cmpwi   r0, 4
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

label_7F3106BC:
    ctx->pc = 0x7F3106BCu;
    // 7F3106BC: bc    4, 0, 0x7F310798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310798;
        }
    }

label_7F3106C0:
    ctx->pc = 0x7F3106C0u;
    ctx->downcount -= 1;
    // 7F3106C0: b       0x7F310788
    {
            goto label_7F310788;
    }

label_7F3106C4:
    ctx->pc = 0x7F3106C4u;
    ctx->downcount -= 3;
    // 7F3106C4: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3106C8:
    ctx->pc = 0x7F3106C8u;
    // 7F3106C8: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F3106CC:
    ctx->pc = 0x7F3106CCu;
    // 7F3106CC: bc    12, 2, 0x7F3106E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3106E4;
        }
    }

label_7F3106D0:
    ctx->pc = 0x7F3106D0u;
    ctx->downcount -= 5;
    // 7F3106D0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3106D4:
    ctx->pc = 0x7F3106D4u;
    // 7F3106D4: lis     r3, 62
    ctx->gpr[3] = ((u32)(s32)(62) << 16);

label_7F3106D8:
    ctx->pc = 0x7F3106D8u;
    // 7F3106D8: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3106DC:
    ctx->pc = 0x7F3106DCu;
    // 7F3106DC: addi    r6, r3, -15772
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-15772);

label_7F3106E0:
    ctx->pc = 0x7F3106E0u;
    // 7F3106E0: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F3106E4:
    ctx->pc = 0x7F3106E4u;
    ctx->downcount -= 2;
    // 7F3106E4: rlwinm. r0, r3, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3106E8:
    ctx->pc = 0x7F3106E8u;
    // 7F3106E8: bc    12, 2, 0x7F310700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310700;
        }
    }

label_7F3106EC:
    ctx->pc = 0x7F3106ECu;
    ctx->downcount -= 5;
    // 7F3106EC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3106F0:
    ctx->pc = 0x7F3106F0u;
    // 7F3106F0: lis     r3, 158
    ctx->gpr[3] = ((u32)(s32)(158) << 16);

label_7F3106F4:
    ctx->pc = 0x7F3106F4u;
    // 7F3106F4: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3106F8:
    ctx->pc = 0x7F3106F8u;
    // 7F3106F8: addi    r6, r3, 30675
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(30675);

label_7F3106FC:
    ctx->pc = 0x7F3106FCu;
    // 7F3106FC: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F310700:
    ctx->pc = 0x7F310700u;
    ctx->downcount -= 2;
    // 7F310700: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310704:
    ctx->pc = 0x7F310704u;
    // 7F310704: bc    12, 2, 0x7F310798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310798;
        }
    }

label_7F310708:
    ctx->pc = 0x7F310708u;
    ctx->downcount -= 5;
    // 7F310708: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31070C:
    ctx->pc = 0x7F31070Cu;
    // 7F31070C: lis     r3, 168
    ctx->gpr[3] = ((u32)(s32)(168) << 16);

label_7F310710:
    ctx->pc = 0x7F310710u;
    // 7F310710: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310714:
    ctx->pc = 0x7F310714u;
    // 7F310714: addi    r6, r3, -13032
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-13032);

label_7F310718:
    ctx->pc = 0x7F310718u;
    // 7F310718: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F31071C:
    ctx->pc = 0x7F31071Cu;
    ctx->downcount -= 5;
    // 7F31071C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310720:
    ctx->pc = 0x7F310720u;
    // 7F310720: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F310724:
    ctx->pc = 0x7F310724u;
    // 7F310724: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310728:
    ctx->pc = 0x7F310728u;
    // 7F310728: addi    r6, r3, -26629
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-26629);

label_7F31072C:
    ctx->pc = 0x7F31072Cu;
    // 7F31072C: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F310730:
    ctx->pc = 0x7F310730u;
    ctx->downcount -= 3;
    // 7F310730: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310734:
    ctx->pc = 0x7F310734u;
    // 7F310734: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F310738:
    ctx->pc = 0x7F310738u;
    // 7F310738: bc    12, 2, 0x7F310750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310750;
        }
    }

label_7F31073C:
    ctx->pc = 0x7F31073Cu;
    ctx->downcount -= 5;
    // 7F31073C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F310740:
    ctx->pc = 0x7F310740u;
    // 7F310740: lis     r3, 102
    ctx->gpr[3] = ((u32)(s32)(102) << 16);

label_7F310744:
    ctx->pc = 0x7F310744u;
    // 7F310744: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310748:
    ctx->pc = 0x7F310748u;
    // 7F310748: addi    r6, r3, 13965
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13965);

label_7F31074C:
    ctx->pc = 0x7F31074Cu;
    // 7F31074C: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F310750:
    ctx->pc = 0x7F310750u;
    ctx->downcount -= 2;
    // 7F310750: rlwinm. r0, r3, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310754:
    ctx->pc = 0x7F310754u;
    // 7F310754: bc    12, 2, 0x7F31076C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31076C;
        }
    }

label_7F310758:
    ctx->pc = 0x7F310758u;
    ctx->downcount -= 5;
    // 7F310758: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31075C:
    ctx->pc = 0x7F31075Cu;
    // 7F31075C: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F310760:
    ctx->pc = 0x7F310760u;
    // 7F310760: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310764:
    ctx->pc = 0x7F310764u;
    // 7F310764: addi    r6, r3, -5799
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5799);

label_7F310768:
    ctx->pc = 0x7F310768u;
    // 7F310768: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F31076C:
    ctx->pc = 0x7F31076Cu;
    ctx->downcount -= 2;
    // 7F31076C: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310770:
    ctx->pc = 0x7F310770u;
    // 7F310770: bc    12, 2, 0x7F310798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310798;
        }
    }

label_7F310774:
    ctx->pc = 0x7F310774u;
    ctx->downcount -= 5;
    // 7F310774: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F310778:
    ctx->pc = 0x7F310778u;
    // 7F310778: lis     r3, 195
    ctx->gpr[3] = ((u32)(s32)(195) << 16);

label_7F31077C:
    ctx->pc = 0x7F31077Cu;
    // 7F31077C: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310780:
    ctx->pc = 0x7F310780u;
    // 7F310780: addi    r6, r3, -6601
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6601);

label_7F310784:
    ctx->pc = 0x7F310784u;
    // 7F310784: b       0x7F310798
    {
            goto label_7F310798;
    }

label_7F310788:
    ctx->pc = 0x7F310788u;
    ctx->downcount -= 4;
    // 7F310788: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31078C:
    ctx->pc = 0x7F31078Cu;
    // 7F31078C: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F310790:
    ctx->pc = 0x7F310790u;
    // 7F310790: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310794:
    ctx->pc = 0x7F310794u;
    // 7F310794: addi    r6, r3, -13002
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-13002);

label_7F310798:
    ctx->pc = 0x7F310798u;
    ctx->downcount -= 2;
    // 7F310798: cmpwi   r6, 0
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

label_7F31079C:
    ctx->pc = 0x7F31079Cu;
    // 7F31079C: bc    12, 2, 0x7F310910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310910;
        }
    }

label_7F3107A0:
    ctx->pc = 0x7F3107A0u;
    ctx->downcount -= 5;
    // 7F3107A0: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3107A4:
    ctx->pc = 0x7F3107A4u;
    // 7F3107A4: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3107A8:
    ctx->pc = 0x7F3107A8u;
    // 7F3107A8: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3107AC:
    ctx->pc = 0x7F3107ACu;
    // 7F3107AC: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3107B0:
    ctx->pc = 0x7F3107B0u;
    // 7F3107B0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3107B4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3107B4:
    ctx->pc = 0x7F3107B4u;
    ctx->downcount -= 4;
    // 7F3107B4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3107B8:
    ctx->pc = 0x7F3107B8u;
    // 7F3107B8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3107BC:
    ctx->pc = 0x7F3107BCu;
    // 7F3107BC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F3107C0:
    ctx->pc = 0x7F3107C0u;
    // 7F3107C0: bl      0x7F011698
    {
            ctx->lr = 0x7F3107C4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3107C4:
    ctx->pc = 0x7F3107C4u;
    ctx->downcount -= 1;
    // 7F3107C4: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F3107C8:
    ctx->pc = 0x7F3107C8u;
    ctx->downcount -= 3;
    // 7F3107C8: lwz     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3107CC:
    ctx->pc = 0x7F3107CCu;
    // 7F3107CC: cmpwi   r0, 2
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

label_7F3107D0:
    ctx->pc = 0x7F3107D0u;
    // 7F3107D0: bc    12, 2, 0x7F310860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310860;
        }
    }

label_7F3107D4:
    ctx->pc = 0x7F3107D4u;
    ctx->downcount -= 1;
    // 7F3107D4: bc    4, 0, 0x7F3107E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3107E8;
        }
    }

label_7F3107D8:
    ctx->pc = 0x7F3107D8u;
    ctx->downcount -= 2;
    // 7F3107D8: cmpwi   r0, 0
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

label_7F3107DC:
    ctx->pc = 0x7F3107DCu;
    // 7F3107DC: bc    12, 2, 0x7F3107F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3107F4;
        }
    }

label_7F3107E0:
    ctx->pc = 0x7F3107E0u;
    ctx->downcount -= 1;
    // 7F3107E0: bc    4, 0, 0x7F310830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310830;
        }
    }

label_7F3107E4:
    ctx->pc = 0x7F3107E4u;
    ctx->downcount -= 1;
    // 7F3107E4: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F3107E8:
    ctx->pc = 0x7F3107E8u;
    ctx->downcount -= 2;
    // 7F3107E8: cmpwi   r0, 4
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

label_7F3107EC:
    ctx->pc = 0x7F3107ECu;
    // 7F3107EC: bc    4, 0, 0x7F3108C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3108C8;
        }
    }

label_7F3107F0:
    ctx->pc = 0x7F3107F0u;
    ctx->downcount -= 1;
    // 7F3107F0: b       0x7F31089C
    {
            goto label_7F31089C;
    }

label_7F3107F4:
    ctx->pc = 0x7F3107F4u;
    ctx->downcount -= 3;
    // 7F3107F4: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3107F8:
    ctx->pc = 0x7F3107F8u;
    // 7F3107F8: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F3107FC:
    ctx->pc = 0x7F3107FCu;
    // 7F3107FC: bc    12, 2, 0x7F310814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310814;
        }
    }

label_7F310800:
    ctx->pc = 0x7F310800u;
    ctx->downcount -= 5;
    // 7F310800: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F310804:
    ctx->pc = 0x7F310804u;
    // 7F310804: lis     r3, 168
    ctx->gpr[3] = ((u32)(s32)(168) << 16);

label_7F310808:
    ctx->pc = 0x7F310808u;
    // 7F310808: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31080C:
    ctx->pc = 0x7F31080Cu;
    // 7F31080C: addi    r6, r3, -13032
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-13032);

label_7F310810:
    ctx->pc = 0x7F310810u;
    // 7F310810: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F310814:
    ctx->pc = 0x7F310814u;
    ctx->downcount -= 2;
    // 7F310814: rlwinm. r0, r3, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310818:
    ctx->pc = 0x7F310818u;
    // 7F310818: bc    12, 2, 0x7F3108C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3108C8;
        }
    }

label_7F31081C:
    ctx->pc = 0x7F31081Cu;
    ctx->downcount -= 5;
    // 7F31081C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F310820:
    ctx->pc = 0x7F310820u;
    // 7F310820: lis     r3, 105
    ctx->gpr[3] = ((u32)(s32)(105) << 16);

label_7F310824:
    ctx->pc = 0x7F310824u;
    // 7F310824: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310828:
    ctx->pc = 0x7F310828u;
    // 7F310828: addi    r6, r3, 8502
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(8502);

label_7F31082C:
    ctx->pc = 0x7F31082Cu;
    // 7F31082C: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F310830:
    ctx->pc = 0x7F310830u;
    ctx->downcount -= 2;
    // 7F310830: rlwinm. r0, r3, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310834:
    ctx->pc = 0x7F310834u;
    // 7F310834: bc    12, 2, 0x7F31084C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31084C;
        }
    }

label_7F310838:
    ctx->pc = 0x7F310838u;
    ctx->downcount -= 5;
    // 7F310838: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31083C:
    ctx->pc = 0x7F31083Cu;
    // 7F31083C: lis     r3, 246
    ctx->gpr[3] = ((u32)(s32)(246) << 16);

label_7F310840:
    ctx->pc = 0x7F310840u;
    // 7F310840: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310844:
    ctx->pc = 0x7F310844u;
    // 7F310844: addi    r6, r3, -29370
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29370);

label_7F310848:
    ctx->pc = 0x7F310848u;
    // 7F310848: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F31084C:
    ctx->pc = 0x7F31084Cu;
    ctx->downcount -= 5;
    // 7F31084C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310850:
    ctx->pc = 0x7F310850u;
    // 7F310850: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F310854:
    ctx->pc = 0x7F310854u;
    // 7F310854: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310858:
    ctx->pc = 0x7F310858u;
    // 7F310858: addi    r6, r3, -26629
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-26629);

label_7F31085C:
    ctx->pc = 0x7F31085Cu;
    // 7F31085C: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F310860:
    ctx->pc = 0x7F310860u;
    ctx->downcount -= 3;
    // 7F310860: rlwinm. r0, r3, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310864:
    ctx->pc = 0x7F310864u;
    // 7F310864: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F310868:
    ctx->pc = 0x7F310868u;
    // 7F310868: bc    12, 2, 0x7F310880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310880;
        }
    }

label_7F31086C:
    ctx->pc = 0x7F31086Cu;
    ctx->downcount -= 5;
    // 7F31086C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F310870:
    ctx->pc = 0x7F310870u;
    // 7F310870: lis     r3, 195
    ctx->gpr[3] = ((u32)(s32)(195) << 16);

label_7F310874:
    ctx->pc = 0x7F310874u;
    // 7F310874: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310878:
    ctx->pc = 0x7F310878u;
    // 7F310878: addi    r6, r3, -6601
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-6601);

label_7F31087C:
    ctx->pc = 0x7F31087Cu;
    // 7F31087C: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F310880:
    ctx->pc = 0x7F310880u;
    ctx->downcount -= 2;
    // 7F310880: rlwinm. r0, r3, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310884:
    ctx->pc = 0x7F310884u;
    // 7F310884: bc    12, 2, 0x7F3108C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3108C8;
        }
    }

label_7F310888:
    ctx->pc = 0x7F310888u;
    ctx->downcount -= 5;
    // 7F310888: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31088C:
    ctx->pc = 0x7F31088Cu;
    // 7F31088C: lis     r3, 148
    ctx->gpr[3] = ((u32)(s32)(148) << 16);

label_7F310890:
    ctx->pc = 0x7F310890u;
    // 7F310890: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310894:
    ctx->pc = 0x7F310894u;
    // 7F310894: addi    r6, r3, -7329
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-7329);

label_7F310898:
    ctx->pc = 0x7F310898u;
    // 7F310898: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F31089C:
    ctx->pc = 0x7F31089Cu;
    ctx->downcount -= 2;
    // 7F31089C: rlwinm. r0, r3, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3108A0:
    ctx->pc = 0x7F3108A0u;
    // 7F3108A0: bc    12, 2, 0x7F3108B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3108B8;
        }
    }

label_7F3108A4:
    ctx->pc = 0x7F3108A4u;
    ctx->downcount -= 5;
    // 7F3108A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3108A8:
    ctx->pc = 0x7F3108A8u;
    // 7F3108A8: lis     r3, 111
    ctx->gpr[3] = ((u32)(s32)(111) << 16);

label_7F3108AC:
    ctx->pc = 0x7F3108ACu;
    // 7F3108AC: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3108B0:
    ctx->pc = 0x7F3108B0u;
    // 7F3108B0: addi    r6, r3, 7564
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(7564);

label_7F3108B4:
    ctx->pc = 0x7F3108B4u;
    // 7F3108B4: b       0x7F3108C8
    {
            goto label_7F3108C8;
    }

label_7F3108B8:
    ctx->pc = 0x7F3108B8u;
    ctx->downcount -= 4;
    // 7F3108B8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3108BC:
    ctx->pc = 0x7F3108BCu;
    // 7F3108BC: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F3108C0:
    ctx->pc = 0x7F3108C0u;
    // 7F3108C0: stw     r0, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3108C4:
    ctx->pc = 0x7F3108C4u;
    // 7F3108C4: addi    r6, r3, -13002
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-13002);

label_7F3108C8:
    ctx->pc = 0x7F3108C8u;
    ctx->downcount -= 2;
    // 7F3108C8: cmpwi   r6, 0
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

label_7F3108CC:
    ctx->pc = 0x7F3108CCu;
    // 7F3108CC: bc    12, 2, 0x7F310910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310910;
        }
    }

label_7F3108D0:
    ctx->pc = 0x7F3108D0u;
    ctx->downcount -= 5;
    // 7F3108D0: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3108D4:
    ctx->pc = 0x7F3108D4u;
    // 7F3108D4: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3108D8:
    ctx->pc = 0x7F3108D8u;
    // 7F3108D8: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3108DC:
    ctx->pc = 0x7F3108DCu;
    // 7F3108DC: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3108E0:
    ctx->pc = 0x7F3108E0u;
    // 7F3108E0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3108E4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3108E4:
    ctx->pc = 0x7F3108E4u;
    ctx->downcount -= 4;
    // 7F3108E4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3108E8:
    ctx->pc = 0x7F3108E8u;
    // 7F3108E8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3108EC:
    ctx->pc = 0x7F3108ECu;
    // 7F3108EC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F3108F0:
    ctx->pc = 0x7F3108F0u;
    // 7F3108F0: bl      0x7F011698
    {
            ctx->lr = 0x7F3108F4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3108F4:
    ctx->pc = 0x7F3108F4u;
    ctx->downcount -= 1;
    // 7F3108F4: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F3108F8:
    ctx->pc = 0x7F3108F8u;
    ctx->downcount -= 3;
    // 7F3108F8: lwz     r5, -25944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25944);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3108FC:
    ctx->pc = 0x7F3108FCu;
    // 7F3108FC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F310900:
    ctx->pc = 0x7F310900u;
    // 7F310900: bl      0x7F30C1A4
    {
            ctx->lr = 0x7F310904u;
            ctx->pc = 0x7F30C1A4u;
            return;
    }

label_7F310904:
    ctx->pc = 0x7F310904u;
    ctx->downcount -= 1;
    // 7F310904: b       0x7F310910
    {
            goto label_7F310910;
    }

label_7F310908:
    ctx->pc = 0x7F310908u;
    ctx->downcount -= 2;
    // 7F310908: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31090C:
    ctx->pc = 0x7F31090Cu;
    // 7F31090C: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310910:
    ctx->pc = 0x7F310910u;
    ctx->downcount -= 16;
    // 7F310910: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F310914:
    ctx->pc = 0x7F310914u;
    // 7F310914: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310918:
    ctx->pc = 0x7F310918u;
    // 7F310918: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31091C:
    ctx->pc = 0x7F31091Cu;
    // 7F31091C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310920:
    ctx->pc = 0x7F310920u;
    // 7F310920: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F310924:
    ctx->pc = 0x7F310924u;
    ctx->downcount -= 60;
    // 7F310924: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310928:
    ctx->pc = 0x7F310928u;
    // 7F310928: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31092C:
    ctx->pc = 0x7F31092Cu;
    // 7F31092C: lis     r4, -32623
    ctx->gpr[4] = ((u32)(s32)(-32623) << 16);

label_7F310930:
    ctx->pc = 0x7F310930u;
    // 7F310930: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F310934:
    ctx->pc = 0x7F310934u;
    // 7F310934: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310938:
    ctx->pc = 0x7F310938u;
    // 7F310938: addi    r9, r4, -28528
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-28528);

label_7F31093C:
    ctx->pc = 0x7F31093Cu;
    // 7F31093C: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F310940:
    ctx->pc = 0x7F310940u;
    // 7F310940: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F310944:
    ctx->pc = 0x7F310944u;
    // 7F310944: lwz     r6, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F310948:
    ctx->pc = 0x7F310948u;
    // 7F310948: li      r5, 355
    ctx->gpr[5] = (u32)(s32)(355);

label_7F31094C:
    ctx->pc = 0x7F31094Cu;
    // 7F31094C: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F310950:
    ctx->pc = 0x7F310950u;
    // 7F310950: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F310954:
    ctx->pc = 0x7F310954u;
    // 7F310954: li      r6, 611
    ctx->gpr[6] = (u32)(s32)(611);

label_7F310958:
    ctx->pc = 0x7F310958u;
    // 7F310958: rlwinm r7, r8, 4, 0, 27
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F31095C:
    ctx->pc = 0x7F31095Cu;
    // 7F31095C: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F310960:
    ctx->pc = 0x7F310960u;
    // 7F310960: divw   r7, r7, r0
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F310964:
    ctx->pc = 0x7F310964u;
    // 7F310964: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F310968:
    ctx->pc = 0x7F310968u;
    // 7F310968: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F31096C:
    ctx->pc = 0x7F31096Cu;
    // 7F31096C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F310970:
    ctx->pc = 0x7F310970u;
    // 7F310970: addi    r7, r7, 355
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(355);

label_7F310974:
    ctx->pc = 0x7F310974u;
    // 7F310974: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F310978u;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F310978:
    ctx->pc = 0x7F310978u;
    ctx->downcount -= 5;
    // 7F310978: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31097C:
    ctx->pc = 0x7F31097Cu;
    // 7F31097C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310980:
    ctx->pc = 0x7F310980u;
    // 7F310980: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310984:
    ctx->pc = 0x7F310984u;
    // 7F310984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F310988:
    ctx->pc = 0x7F310988u;
    ctx->downcount -= 60;
    // 7F310988: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31098C:
    ctx->pc = 0x7F31098Cu;
    // 7F31098C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310990:
    ctx->pc = 0x7F310990u;
    // 7F310990: lis     r4, -32623
    ctx->gpr[4] = ((u32)(s32)(-32623) << 16);

label_7F310994:
    ctx->pc = 0x7F310994u;
    // 7F310994: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F310998:
    ctx->pc = 0x7F310998u;
    // 7F310998: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31099C:
    ctx->pc = 0x7F31099Cu;
    // 7F31099C: addi    r9, r4, -28528
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-28528);

label_7F3109A0:
    ctx->pc = 0x7F3109A0u;
    // 7F3109A0: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F3109A4:
    ctx->pc = 0x7F3109A4u;
    // 7F3109A4: li      r4, 44
    ctx->gpr[4] = (u32)(s32)(44);

label_7F3109A8:
    ctx->pc = 0x7F3109A8u;
    // 7F3109A8: lwz     r6, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3109AC:
    ctx->pc = 0x7F3109ACu;
    // 7F3109AC: li      r5, 375
    ctx->gpr[5] = (u32)(s32)(375);

label_7F3109B0:
    ctx->pc = 0x7F3109B0u;
    // 7F3109B0: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F3109B4:
    ctx->pc = 0x7F3109B4u;
    // 7F3109B4: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F3109B8:
    ctx->pc = 0x7F3109B8u;
    // 7F3109B8: li      r6, 524
    ctx->gpr[6] = (u32)(s32)(524);

label_7F3109BC:
    ctx->pc = 0x7F3109BCu;
    // 7F3109BC: rlwinm r7, r8, 4, 0, 27
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F3109C0:
    ctx->pc = 0x7F3109C0u;
    // 7F3109C0: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3109C4:
    ctx->pc = 0x7F3109C4u;
    // 7F3109C4: divw   r7, r7, r0
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3109C8:
    ctx->pc = 0x7F3109C8u;
    // 7F3109C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3109CC:
    ctx->pc = 0x7F3109CCu;
    // 7F3109CC: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3109D0:
    ctx->pc = 0x7F3109D0u;
    // 7F3109D0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3109D4:
    ctx->pc = 0x7F3109D4u;
    // 7F3109D4: addi    r7, r7, 375
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(375);

label_7F3109D8:
    ctx->pc = 0x7F3109D8u;
    // 7F3109D8: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F3109DCu;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F3109DC:
    ctx->pc = 0x7F3109DCu;
    ctx->downcount -= 5;
    // 7F3109DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3109E0:
    ctx->pc = 0x7F3109E0u;
    // 7F3109E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3109E4:
    ctx->pc = 0x7F3109E4u;
    // 7F3109E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3109E8:
    ctx->pc = 0x7F3109E8u;
    // 7F3109E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3109EC:
    ctx->pc = 0x7F3109ECu;
    ctx->downcount -= 8;
    // 7F3109EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3109F0:
    ctx->pc = 0x7F3109F0u;
    // 7F3109F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3109F4:
    ctx->pc = 0x7F3109F4u;
    // 7F3109F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3109F8:
    ctx->pc = 0x7F3109F8u;
    // 7F3109F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3109FC:
    ctx->pc = 0x7F3109FCu;
    // 7F3109FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310A00:
    ctx->pc = 0x7F310A00u;
    // 7F310A00: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310A04:
    ctx->pc = 0x7F310A04u;
    // 7F310A04: cmpwi   r0, 0
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

label_7F310A08:
    ctx->pc = 0x7F310A08u;
    // 7F310A08: bc    4, 2, 0x7F310AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310AA8;
        }
    }

label_7F310A0C:
    ctx->pc = 0x7F310A0Cu;
    ctx->downcount -= 6;
    // 7F310A0C: addis   r5, r31, 4
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310A10:
    ctx->pc = 0x7F310A10u;
    // 7F310A10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310A14:
    ctx->pc = 0x7F310A14u;
    // 7F310A14: stw     r0, -10656(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310A18:
    ctx->pc = 0x7F310A18u;
    // 7F310A18: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310A1C:
    ctx->pc = 0x7F310A1Cu;
    // 7F310A1C: cmplwi  r0, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310A20:
    ctx->pc = 0x7F310A20u;
    // 7F310A20: bc    12, 1, 0x7F310AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310AA8;
        }
    }

label_7F310A24:
    ctx->pc = 0x7F310A24u;
    ctx->downcount -= 7;
    // 7F310A24: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F310A28:
    ctx->pc = 0x7F310A28u;
    // 7F310A28: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310A2C:
    ctx->pc = 0x7F310A2Cu;
    // 7F310A2C: addi    r4, r4, -26652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26652);

label_7F310A30:
    ctx->pc = 0x7F310A30u;
    // 7F310A30: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310A34:
    ctx->pc = 0x7F310A34u;
    // 7F310A34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F310A38:
    ctx->pc = 0x7F310A38u;
    // 7F310A38: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F310A3C:
    ctx->pc = 0x7F310A3Cu;
    ctx->downcount -= 1;
    // 7F310A3C: bl      0x7F30C2D4
    {
            ctx->lr = 0x7F310A40u;
            ctx->pc = 0x7F30C2D4u;
            return;
    }

label_7F310A40:
    ctx->pc = 0x7F310A40u;
    ctx->downcount -= 2;
    // 7F310A40: cmpwi   r3, 0
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

label_7F310A44:
    ctx->pc = 0x7F310A44u;
    // 7F310A44: bc    12, 2, 0x7F310AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310AA8;
        }
    }

label_7F310A48:
    ctx->pc = 0x7F310A48u;
    ctx->downcount -= 3;
    // 7F310A48: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F310A4C:
    ctx->pc = 0x7F310A4Cu;
    // 7F310A4C: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310A50:
    ctx->pc = 0x7F310A50u;
    // 7F310A50: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A54:
    ctx->pc = 0x7F310A54u;
    ctx->downcount -= 1;
    // 7F310A54: bl      0x7F30F144
    {
            ctx->lr = 0x7F310A58u;
            ctx->pc = 0x7F30F144u;
            return;
    }

label_7F310A58:
    ctx->pc = 0x7F310A58u;
    ctx->downcount -= 1;
    // 7F310A58: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A5C:
    ctx->pc = 0x7F310A5Cu;
    ctx->downcount -= 1;
    // 7F310A5C: bl      0x7F30D034
    {
            ctx->lr = 0x7F310A60u;
            ctx->pc = 0x7F30D034u;
            return;
    }

label_7F310A60:
    ctx->pc = 0x7F310A60u;
    ctx->downcount -= 1;
    // 7F310A60: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A64:
    ctx->pc = 0x7F310A64u;
    ctx->downcount -= 1;
    // 7F310A64: bl      0x7F310020
    {
            ctx->lr = 0x7F310A68u;
            ctx->pc = 0x7F310020u;
            return;
    }

label_7F310A68:
    ctx->pc = 0x7F310A68u;
    ctx->downcount -= 1;
    // 7F310A68: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A6C:
    ctx->pc = 0x7F310A6Cu;
    ctx->downcount -= 1;
    // 7F310A6C: bl      0x7F3103E8
    {
            ctx->lr = 0x7F310A70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3103E8u;
                return;
            }
            goto label_7F3103E8;
    }

label_7F310A70:
    ctx->pc = 0x7F310A70u;
    ctx->downcount -= 1;
    // 7F310A70: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A74:
    ctx->pc = 0x7F310A74u;
    ctx->downcount -= 1;
    // 7F310A74: bl      0x7F31057C
    {
            ctx->lr = 0x7F310A78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31057Cu;
                return;
            }
            goto label_7F31057C;
    }

label_7F310A78:
    ctx->pc = 0x7F310A78u;
    ctx->downcount -= 1;
    // 7F310A78: b       0x7F310AA8
    {
            goto label_7F310AA8;
    }

label_7F310A7C:
    ctx->pc = 0x7F310A7Cu;
    ctx->downcount -= 6;
    // 7F310A7C: lwz     r4, -10640(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F310A80:
    ctx->pc = 0x7F310A80u;
    // 7F310A80: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F310A84:
    ctx->pc = 0x7F310A84u;
    // 7F310A84: stw     r0, -10640(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310A88:
    ctx->pc = 0x7F310A88u;
    // 7F310A88: lwz     r0, -10640(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310A8C:
    ctx->pc = 0x7F310A8Cu;
    // 7F310A8C: cmpwi   r0, 0
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

label_7F310A90:
    ctx->pc = 0x7F310A90u;
    // 7F310A90: bc    12, 1, 0x7F310AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310AA8;
        }
    }

label_7F310A94:
    ctx->pc = 0x7F310A94u;
    ctx->downcount -= 3;
    // 7F310A94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F310A98:
    ctx->pc = 0x7F310A98u;
    // 7F310A98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F310A9C:
    ctx->pc = 0x7F310A9Cu;
    // 7F310A9C: bl      0x7F30C1A4
    {
            ctx->lr = 0x7F310AA0u;
            ctx->pc = 0x7F30C1A4u;
            return;
    }

label_7F310AA0:
    ctx->pc = 0x7F310AA0u;
    ctx->downcount -= 2;
    // 7F310AA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310AA4:
    ctx->pc = 0x7F310AA4u;
    // 7F310AA4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F310AA8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F310AA8:
    ctx->pc = 0x7F310AA8u;
    ctx->downcount -= 3;
    // 7F310AA8: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310AAC:
    ctx->pc = 0x7F310AACu;
    // 7F310AAC: cmpwi   r0, 2
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

label_7F310AB0:
    ctx->pc = 0x7F310AB0u;
    // 7F310AB0: bc    12, 2, 0x7F310B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310B00;
        }
    }

label_7F310AB4:
    ctx->pc = 0x7F310AB4u;
    ctx->downcount -= 1;
    // 7F310AB4: bc    4, 0, 0x7F310B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310B30;
        }
    }

label_7F310AB8:
    ctx->pc = 0x7F310AB8u;
    ctx->downcount -= 2;
    // 7F310AB8: cmpwi   r0, 0
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

label_7F310ABC:
    ctx->pc = 0x7F310ABCu;
    // 7F310ABC: bc    12, 2, 0x7F310B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310B30;
        }
    }

label_7F310AC0:
    ctx->pc = 0x7F310AC0u;
    ctx->downcount -= 1;
    // 7F310AC0: bc    4, 0, 0x7F310ACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310ACC;
        }
    }

label_7F310AC4:
    ctx->pc = 0x7F310AC4u;
    ctx->downcount -= 1;
    // 7F310AC4: b       0x7F310B30
    {
            goto label_7F310B30;
    }

label_7F310AC8:
    ctx->pc = 0x7F310AC8u;
    ctx->downcount -= 1;
    // 7F310AC8: b       0x7F310B30
    {
            goto label_7F310B30;
    }

label_7F310ACC:
    ctx->pc = 0x7F310ACCu;
    ctx->downcount -= 4;
    // 7F310ACC: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310AD0:
    ctx->pc = 0x7F310AD0u;
    // 7F310AD0: lbz     r0, -10652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10652);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F310AD4:
    ctx->pc = 0x7F310AD4u;
    // 7F310AD4: cmplwi  r0, 0x0000
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

label_7F310AD8:
    ctx->pc = 0x7F310AD8u;
    // 7F310AD8: bc    12, 2, 0x7F310AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310AE4;
        }
    }

label_7F310ADC:
    ctx->pc = 0x7F310ADCu;
    ctx->downcount -= 2;
    // 7F310ADC: lwz     r3, -10648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310AE0:
    ctx->pc = 0x7F310AE0u;
    // 7F310AE0: bl      0x7F310924
    {
            ctx->lr = 0x7F310AE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310924u;
                return;
            }
            goto label_7F310924;
    }

label_7F310AE4:
    ctx->pc = 0x7F310AE4u;
    ctx->downcount -= 4;
    // 7F310AE4: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310AE8:
    ctx->pc = 0x7F310AE8u;
    // 7F310AE8: lwz     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310AEC:
    ctx->pc = 0x7F310AECu;
    // 7F310AEC: cmpwi   r0, 0
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

label_7F310AF0:
    ctx->pc = 0x7F310AF0u;
    // 7F310AF0: bc    12, 2, 0x7F310B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310B30;
        }
    }

label_7F310AF4:
    ctx->pc = 0x7F310AF4u;
    ctx->downcount -= 2;
    // 7F310AF4: lwz     r3, -10648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310AF8:
    ctx->pc = 0x7F310AF8u;
    // 7F310AF8: bl      0x7F310988
    {
            ctx->lr = 0x7F310AFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310988u;
                return;
            }
            goto label_7F310988;
    }

label_7F310AFC:
    ctx->pc = 0x7F310AFCu;
    ctx->downcount -= 1;
    // 7F310AFC: b       0x7F310B30
    {
            goto label_7F310B30;
    }

label_7F310B00:
    ctx->pc = 0x7F310B00u;
    ctx->downcount -= 4;
    // 7F310B00: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310B04:
    ctx->pc = 0x7F310B04u;
    // 7F310B04: lbz     r0, -10652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10652);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F310B08:
    ctx->pc = 0x7F310B08u;
    // 7F310B08: cmplwi  r0, 0x0000
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

label_7F310B0C:
    ctx->pc = 0x7F310B0Cu;
    // 7F310B0C: bc    12, 2, 0x7F310B18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310B18;
        }
    }

label_7F310B10:
    ctx->pc = 0x7F310B10u;
    ctx->downcount -= 2;
    // 7F310B10: lwz     r3, -10648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310B14:
    ctx->pc = 0x7F310B14u;
    // 7F310B14: bl      0x7F310924
    {
            ctx->lr = 0x7F310B18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310924u;
                return;
            }
            goto label_7F310924;
    }

label_7F310B18:
    ctx->pc = 0x7F310B18u;
    ctx->downcount -= 4;
    // 7F310B18: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310B1C:
    ctx->pc = 0x7F310B1Cu;
    // 7F310B1C: lwz     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310B20:
    ctx->pc = 0x7F310B20u;
    // 7F310B20: cmpwi   r0, 0
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

label_7F310B24:
    ctx->pc = 0x7F310B24u;
    // 7F310B24: bc    12, 2, 0x7F310B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310B30;
        }
    }

label_7F310B28:
    ctx->pc = 0x7F310B28u;
    ctx->downcount -= 2;
    // 7F310B28: lwz     r3, -10648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310B2C:
    ctx->pc = 0x7F310B2Cu;
    // 7F310B2C: bl      0x7F310988
    {
            ctx->lr = 0x7F310B30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310988u;
                return;
            }
            goto label_7F310988;
    }

label_7F310B30:
    ctx->pc = 0x7F310B30u;
    ctx->downcount -= 6;
    // 7F310B30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310B34:
    ctx->pc = 0x7F310B34u;
    // 7F310B34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F310B38:
    ctx->pc = 0x7F310B38u;
    // 7F310B38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310B3C:
    ctx->pc = 0x7F310B3Cu;
    // 7F310B3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310B40:
    ctx->pc = 0x7F310B40u;
    // 7F310B40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F310B44:
    ctx->pc = 0x7F310B44u;
    ctx->downcount -= 7;
    // 7F310B44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310B48:
    ctx->pc = 0x7F310B48u;
    // 7F310B48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310B4C:
    ctx->pc = 0x7F310B4Cu;
    // 7F310B4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310B50:
    ctx->pc = 0x7F310B50u;
    // 7F310B50: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F310B54:
    ctx->pc = 0x7F310B54u;
    // 7F310B54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310B58:
    ctx->pc = 0x7F310B58u;
    // 7F310B58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F310B5C:
    ctx->pc = 0x7F310B5Cu;
    // 7F310B5C: bl      0x7F312524
    {
            ctx->lr = 0x7F310B60u;
            goto label_7F312524;
    }

label_7F310B60:
    ctx->pc = 0x7F310B60u;
    ctx->downcount -= 2;
    // 7F310B60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F310B64:
    ctx->pc = 0x7F310B64u;
    // 7F310B64: bl      0x7F312524
    {
            ctx->lr = 0x7F310B68u;
            goto label_7F312524;
    }

label_7F310B68:
    ctx->pc = 0x7F310B68u;
    ctx->downcount -= 3;
    // 7F310B68: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310B6C:
    ctx->pc = 0x7F310B6Cu;
    // 7F310B6C: cmpwi   r3, 0
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

label_7F310B70:
    ctx->pc = 0x7F310B70u;
    // 7F310B70: bc    12, 0, 0x7F310BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310BF8;
        }
    }

label_7F310B74:
    ctx->pc = 0x7F310B74u;
    ctx->downcount -= 1;
    // 7F310B74: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F310B78u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F310B78:
    ctx->pc = 0x7F310B78u;
    ctx->downcount -= 2;
    // 7F310B78: cmpwi   r3, 0
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

label_7F310B7C:
    ctx->pc = 0x7F310B7Cu;
    // 7F310B7C: bc    4, 2, 0x7F310BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310BBC;
        }
    }

label_7F310B80:
    ctx->pc = 0x7F310B80u;
    ctx->downcount -= 6;
    // 7F310B80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310B84:
    ctx->pc = 0x7F310B84u;
    // 7F310B84: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310B88:
    ctx->pc = 0x7F310B88u;
    // 7F310B88: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310B8C:
    ctx->pc = 0x7F310B8Cu;
    // 7F310B8C: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310B90:
    ctx->pc = 0x7F310B90u;
    // 7F310B90: cmpw    r3, r0
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

label_7F310B94:
    ctx->pc = 0x7F310B94u;
    // 7F310B94: bc    12, 2, 0x7F310C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310C00;
        }
    }

label_7F310B98:
    ctx->pc = 0x7F310B98u;
    ctx->downcount -= 3;
    // 7F310B98: addi    r3, r31, 72
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(72);

label_7F310B9C:
    ctx->pc = 0x7F310B9Cu;
    // 7F310B9C: addi    r4, r31, 116
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(116);

label_7F310BA0:
    ctx->pc = 0x7F310BA0u;
    // 7F310BA0: bl      0x7F31438C
    {
            ctx->lr = 0x7F310BA4u;
            ctx->pc = 0x7F31438Cu;
            return;
    }

label_7F310BA4:
    ctx->pc = 0x7F310BA4u;
    ctx->downcount -= 3;
    // 7F310BA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310BA8:
    ctx->pc = 0x7F310BA8u;
    // 7F310BA8: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310BAC:
    ctx->pc = 0x7F310BACu;
    // 7F310BAC: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F310BB0u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F310BB0:
    ctx->pc = 0x7F310BB0u;
    ctx->downcount -= 3;
    // 7F310BB0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F310BB4:
    ctx->pc = 0x7F310BB4u;
    // 7F310BB4: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310BB8:
    ctx->pc = 0x7F310BB8u;
    // 7F310BB8: b       0x7F310C00
    {
            goto label_7F310C00;
    }

label_7F310BBC:
    ctx->pc = 0x7F310BBCu;
    ctx->downcount -= 3;
    // 7F310BBC: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310BC0:
    ctx->pc = 0x7F310BC0u;
    // 7F310BC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F310BC4:
    ctx->pc = 0x7F310BC4u;
    // 7F310BC4: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F310BC8u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F310BC8:
    ctx->pc = 0x7F310BC8u;
    ctx->downcount -= 3;
    // 7F310BC8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310BCC:
    ctx->pc = 0x7F310BCCu;
    // 7F310BCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F310BD0:
    ctx->pc = 0x7F310BD0u;
    // 7F310BD0: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F310BD4u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F310BD4:
    ctx->pc = 0x7F310BD4u;
    ctx->downcount -= 3;
    // 7F310BD4: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310BD8:
    ctx->pc = 0x7F310BD8u;
    // 7F310BD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F310BDC:
    ctx->pc = 0x7F310BDCu;
    // 7F310BDC: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F310BE0u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F310BE0:
    ctx->pc = 0x7F310BE0u;
    ctx->downcount -= 3;
    // 7F310BE0: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310BE4:
    ctx->pc = 0x7F310BE4u;
    // 7F310BE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F310BE8:
    ctx->pc = 0x7F310BE8u;
    // 7F310BE8: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F310BECu;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F310BEC:
    ctx->pc = 0x7F310BECu;
    ctx->downcount -= 3;
    // 7F310BEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F310BF0:
    ctx->pc = 0x7F310BF0u;
    // 7F310BF0: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310BF4:
    ctx->pc = 0x7F310BF4u;
    // 7F310BF4: b       0x7F310C00
    {
            goto label_7F310C00;
    }

label_7F310BF8:
    ctx->pc = 0x7F310BF8u;
    ctx->downcount -= 2;
    // 7F310BF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F310BFC:
    ctx->pc = 0x7F310BFCu;
    // 7F310BFC: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310C00:
    ctx->pc = 0x7F310C00u;
    ctx->downcount -= 6;
    // 7F310C00: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310C04:
    ctx->pc = 0x7F310C04u;
    // 7F310C04: lwz     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F310C08:
    ctx->pc = 0x7F310C08u;
    // 7F310C08: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F310C0C:
    ctx->pc = 0x7F310C0Cu;
    // 7F310C0C: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F310C10:
    ctx->pc = 0x7F310C10u;
    // 7F310C10: addi    r3, r3, -25940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25940);

label_7F310C14:
    ctx->pc = 0x7F310C14u;
    // 7F310C14: bl      0x7F306FA4
    {
            ctx->lr = 0x7F310C18u;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F310C18:
    ctx->pc = 0x7F310C18u;
    ctx->downcount -= 2;
    // 7F310C18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310C1C:
    ctx->pc = 0x7F310C1Cu;
    // 7F310C1C: bl      0x7F3109EC
    {
            ctx->lr = 0x7F310C20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3109ECu;
                return;
            }
            goto label_7F3109EC;
    }

label_7F310C20:
    ctx->pc = 0x7F310C20u;
    ctx->downcount -= 3;
    // 7F310C20: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310C24:
    ctx->pc = 0x7F310C24u;
    // 7F310C24: cmpwi   r0, 3
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

label_7F310C28:
    ctx->pc = 0x7F310C28u;
    // 7F310C28: bc    4, 0, 0x7F310C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310C64;
        }
    }

label_7F310C2C:
    ctx->pc = 0x7F310C2Cu;
    ctx->downcount -= 2;
    // 7F310C2C: cmpwi   r0, 1
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

label_7F310C30:
    ctx->pc = 0x7F310C30u;
    // 7F310C30: bc    4, 0, 0x7F310C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310C38;
        }
    }

label_7F310C34:
    ctx->pc = 0x7F310C34u;
    ctx->downcount -= 1;
    // 7F310C34: b       0x7F310C64
    {
            goto label_7F310C64;
    }

label_7F310C38:
    ctx->pc = 0x7F310C38u;
    ctx->downcount -= 4;
    // 7F310C38: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F310C3C:
    ctx->pc = 0x7F310C3Cu;
    // 7F310C3C: lbz     r0, -10559(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10559);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F310C40:
    ctx->pc = 0x7F310C40u;
    // 7F310C40: cmplwi  r0, 0x0000
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

label_7F310C44:
    ctx->pc = 0x7F310C44u;
    // 7F310C44: bc    12, 2, 0x7F310C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310C54;
        }
    }

label_7F310C48:
    ctx->pc = 0x7F310C48u;
    ctx->downcount -= 2;
    // 7F310C48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310C4C:
    ctx->pc = 0x7F310C4Cu;
    // 7F310C4C: bl      0x7F30B6C4
    {
            ctx->lr = 0x7F310C50u;
            ctx->pc = 0x7F30B6C4u;
            return;
    }

label_7F310C50:
    ctx->pc = 0x7F310C50u;
    ctx->downcount -= 1;
    // 7F310C50: b       0x7F310C64
    {
            goto label_7F310C64;
    }

label_7F310C54:
    ctx->pc = 0x7F310C54u;
    ctx->downcount -= 4;
    // 7F310C54: lwz     r3, -10564(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10564);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310C58:
    ctx->pc = 0x7F310C58u;
    // 7F310C58: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310C5C:
    ctx->pc = 0x7F310C5Cu;
    // 7F310C5C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F310C60:
    ctx->pc = 0x7F310C60u;
    // 7F310C60: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310C64:
    ctx->pc = 0x7F310C64u;
    ctx->downcount -= 6;
    // 7F310C64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310C68:
    ctx->pc = 0x7F310C68u;
    // 7F310C68: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F310C6C:
    ctx->pc = 0x7F310C6Cu;
    // 7F310C6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310C70:
    ctx->pc = 0x7F310C70u;
    // 7F310C70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310C74:
    ctx->pc = 0x7F310C74u;
    // 7F310C74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F310C78:
    ctx->pc = 0x7F310C78u;
    ctx->downcount -= 19;
    // 7F310C78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310C7C:
    ctx->pc = 0x7F310C7Cu;
    // 7F310C7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310C80:
    ctx->pc = 0x7F310C80u;
    // 7F310C80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310C84:
    ctx->pc = 0x7F310C84u;
    // 7F310C84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F310C88:
    ctx->pc = 0x7F310C88u;
    // 7F310C88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310C8C:
    ctx->pc = 0x7F310C8Cu;
    // 7F310C8C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F310C90:
    ctx->pc = 0x7F310C90u;
    // 7F310C90: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310C94:
    ctx->pc = 0x7F310C94u;
    // 7F310C94: cmplwi  r3, 0x0000
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

label_7F310C98:
    ctx->pc = 0x7F310C98u;
    // 7F310C98: bc    12, 2, 0x7F310CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310CA4;
        }
    }

label_7F310C9C:
    ctx->pc = 0x7F310C9Cu;
    ctx->downcount -= 2;
    // 7F310C9C: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310CA0:
    ctx->pc = 0x7F310CA0u;
    // 7F310CA0: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310CA4:
    ctx->pc = 0x7F310CA4u;
    ctx->downcount -= 3;
    // 7F310CA4: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310CA8:
    ctx->pc = 0x7F310CA8u;
    // 7F310CA8: cmplwi  r3, 0x0000
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

label_7F310CAC:
    ctx->pc = 0x7F310CACu;
    // 7F310CAC: bc    12, 2, 0x7F310CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310CB8;
        }
    }

label_7F310CB0:
    ctx->pc = 0x7F310CB0u;
    ctx->downcount -= 2;
    // 7F310CB0: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310CB4:
    ctx->pc = 0x7F310CB4u;
    // 7F310CB4: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310CB8:
    ctx->pc = 0x7F310CB8u;
    ctx->downcount -= 1;
    // 7F310CB8: bl      0x8004DB8C
    {
            ctx->lr = 0x7F310CBCu;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F310CBC:
    ctx->pc = 0x7F310CBCu;
    ctx->downcount -= 3;
    // 7F310CBC: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F310CC0:
    ctx->pc = 0x7F310CC0u;
    // 7F310CC0: cmpwi   r0, 74
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(74);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310CC4:
    ctx->pc = 0x7F310CC4u;
    // 7F310CC4: bc    4, 2, 0x7F310CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310CF0;
        }
    }

label_7F310CC8:
    ctx->pc = 0x7F310CC8u;
    ctx->downcount -= 4;
    // 7F310CC8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F310CCC:
    ctx->pc = 0x7F310CCCu;
    // 7F310CCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F310CD0:
    ctx->pc = 0x7F310CD0u;
    // 7F310CD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F310CD4:
    loop_7F310CD4(ctx);
    if (ctx->pc == 0x7F310CF0u) goto label_7F310CF0;
    return;
label_7F310CD8:
    // 7F310CD8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F310CDC:
    // 7F310CDC: addi    r4, r4, -25676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25676);

label_7F310CE0:
    ctx->pc = 0x7F310CE0u;
    // 7F310CE0: lwzx    r4, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F310CE4:
    ctx->pc = 0x7F310CE4u;
    // 7F310CE4: lwz     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310CE8:
    ctx->pc = 0x7F310CE8u;
    // 7F310CE8: stw     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310CEC:
    // 7F310CEC: bc    16, 0, 0x7F310CD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F310CD4u;
                return;
            }
            goto label_7F310CD4;
        }
    }

label_7F310CF0:
    ctx->pc = 0x7F310CF0u;
    ctx->downcount -= 3;
    // 7F310CF0: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310CF4:
    ctx->pc = 0x7F310CF4u;
    // 7F310CF4: cmpwi   r0, 2
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

label_7F310CF8:
    ctx->pc = 0x7F310CF8u;
    // 7F310CF8: bc    12, 2, 0x7F310DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310DEC;
        }
    }

label_7F310CFC:
    ctx->pc = 0x7F310CFCu;
    ctx->downcount -= 1;
    // 7F310CFC: bc    4, 0, 0x7F310D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310D10;
        }
    }

label_7F310D00:
    ctx->pc = 0x7F310D00u;
    ctx->downcount -= 2;
    // 7F310D00: cmpwi   r0, 0
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

label_7F310D04:
    ctx->pc = 0x7F310D04u;
    // 7F310D04: bc    12, 2, 0x7F310DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310DEC;
        }
    }

label_7F310D08:
    ctx->pc = 0x7F310D08u;
    ctx->downcount -= 1;
    // 7F310D08: bc    4, 0, 0x7F310D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310D1C;
        }
    }

label_7F310D0C:
    ctx->pc = 0x7F310D0Cu;
    ctx->downcount -= 1;
    // 7F310D0C: b       0x7F310DEC
    {
            goto label_7F310DEC;
    }

label_7F310D10:
    ctx->pc = 0x7F310D10u;
    ctx->downcount -= 2;
    // 7F310D10: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310D14:
    ctx->pc = 0x7F310D14u;
    // 7F310D14: bc    4, 0, 0x7F310DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310DEC;
        }
    }

label_7F310D18:
    ctx->pc = 0x7F310D18u;
    ctx->downcount -= 1;
    // 7F310D18: b       0x7F310DEC
    {
            goto label_7F310DEC;
    }

label_7F310D1C:
    ctx->pc = 0x7F310D1Cu;
    ctx->downcount -= 4;
    // 7F310D1C: lis     r4, 220
    ctx->gpr[4] = ((u32)(s32)(220) << 16);

label_7F310D20:
    ctx->pc = 0x7F310D20u;
    // 7F310D20: addi    r0, r4, -9293
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-9293);

label_7F310D24:
    ctx->pc = 0x7F310D24u;
    // 7F310D24: cmpw    r30, r0
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

label_7F310D28:
    ctx->pc = 0x7F310D28u;
    // 7F310D28: bc    4, 0, 0x7F310D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310D60;
        }
    }

label_7F310D2C:
    ctx->pc = 0x7F310D2Cu;
    ctx->downcount -= 4;
    // 7F310D2C: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F310D30:
    ctx->pc = 0x7F310D30u;
    // 7F310D30: addi    r0, r3, 32352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32352);

label_7F310D34:
    ctx->pc = 0x7F310D34u;
    // 7F310D34: cmpw    r30, r0
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

label_7F310D38:
    ctx->pc = 0x7F310D38u;
    // 7F310D38: bc    4, 0, 0x7F310D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310D50;
        }
    }

label_7F310D3C:
    ctx->pc = 0x7F310D3Cu;
    ctx->downcount -= 4;
    // 7F310D3C: lis     r3, 80
    ctx->gpr[3] = ((u32)(s32)(80) << 16);

label_7F310D40:
    ctx->pc = 0x7F310D40u;
    // 7F310D40: addi    r0, r3, 10213
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10213);

label_7F310D44:
    ctx->pc = 0x7F310D44u;
    // 7F310D44: cmpw    r30, r0
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

label_7F310D48:
    ctx->pc = 0x7F310D48u;
    // 7F310D48: bc    12, 2, 0x7F310D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310D94;
        }
    }

label_7F310D4C:
    ctx->pc = 0x7F310D4Cu;
    ctx->downcount -= 1;
    // 7F310D4C: b       0x7F310DAC
    {
            goto label_7F310DAC;
    }

label_7F310D50:
    ctx->pc = 0x7F310D50u;
    ctx->downcount -= 3;
    // 7F310D50: addi    r0, r3, 32354
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32354);

label_7F310D54:
    ctx->pc = 0x7F310D54u;
    // 7F310D54: cmpw    r30, r0
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

label_7F310D58:
    ctx->pc = 0x7F310D58u;
    // 7F310D58: bc    4, 0, 0x7F310DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310DAC;
        }
    }

label_7F310D5C:
    ctx->pc = 0x7F310D5Cu;
    ctx->downcount -= 1;
    // 7F310D5C: b       0x7F310D84
    {
            goto label_7F310D84;
    }

label_7F310D60:
    ctx->pc = 0x7F310D60u;
    ctx->downcount -= 4;
    // 7F310D60: lis     r3, 246
    ctx->gpr[3] = ((u32)(s32)(246) << 16);

label_7F310D64:
    ctx->pc = 0x7F310D64u;
    // 7F310D64: addi    r0, r3, -2148
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2148);

label_7F310D68:
    ctx->pc = 0x7F310D68u;
    // 7F310D68: cmpw    r30, r0
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

label_7F310D6C:
    ctx->pc = 0x7F310D6Cu;
    // 7F310D6C: bc    12, 2, 0x7F310D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310D94;
        }
    }

label_7F310D70:
    ctx->pc = 0x7F310D70u;
    ctx->downcount -= 1;
    // 7F310D70: bc    4, 0, 0x7F310DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310DAC;
        }
    }

label_7F310D74:
    ctx->pc = 0x7F310D74u;
    ctx->downcount -= 3;
    // 7F310D74: addi    r0, r4, -9291
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-9291);

label_7F310D78:
    ctx->pc = 0x7F310D78u;
    // 7F310D78: cmpw    r30, r0
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

label_7F310D7C:
    ctx->pc = 0x7F310D7Cu;
    // 7F310D7C: bc    4, 0, 0x7F310DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310DAC;
        }
    }

label_7F310D80:
    ctx->pc = 0x7F310D80u;
    ctx->downcount -= 1;
    // 7F310D80: b       0x7F310D94
    {
            goto label_7F310D94;
    }

label_7F310D84:
    ctx->pc = 0x7F310D84u;
    ctx->downcount -= 3;
    // 7F310D84: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310D88:
    ctx->pc = 0x7F310D88u;
    // 7F310D88: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F310D8C:
    ctx->pc = 0x7F310D8Cu;
    // 7F310D8C: bl      0x7F3147A8
    {
            ctx->lr = 0x7F310D90u;
            ctx->pc = 0x7F3147A8u;
            return;
    }

label_7F310D90:
    ctx->pc = 0x7F310D90u;
    ctx->downcount -= 1;
    // 7F310D90: b       0x7F310DEC
    {
            goto label_7F310DEC;
    }

label_7F310D94:
    ctx->pc = 0x7F310D94u;
    ctx->downcount -= 3;
    // 7F310D94: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310D98:
    ctx->pc = 0x7F310D98u;
    // 7F310D98: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F310D9C:
    ctx->pc = 0x7F310D9Cu;
    // 7F310D9C: bl      0x7F3147A8
    {
            ctx->lr = 0x7F310DA0u;
            ctx->pc = 0x7F3147A8u;
            return;
    }

label_7F310DA0:
    ctx->pc = 0x7F310DA0u;
    ctx->downcount -= 2;
    // 7F310DA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310DA4:
    ctx->pc = 0x7F310DA4u;
    // 7F310DA4: bl      0x7F30EF44
    {
            ctx->lr = 0x7F310DA8u;
            ctx->pc = 0x7F30EF44u;
            return;
    }

label_7F310DA8:
    ctx->pc = 0x7F310DA8u;
    ctx->downcount -= 1;
    // 7F310DA8: b       0x7F310DEC
    {
            goto label_7F310DEC;
    }

label_7F310DAC:
    ctx->pc = 0x7F310DACu;
    ctx->downcount -= 4;
    // 7F310DAC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310DB0:
    ctx->pc = 0x7F310DB0u;
    // 7F310DB0: lwz     r0, -26372(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310DB4:
    ctx->pc = 0x7F310DB4u;
    // 7F310DB4: cmplwi  r0, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310DB8:
    ctx->pc = 0x7F310DB8u;
    // 7F310DB8: bc    12, 1, 0x7F310DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310DEC;
        }
    }

label_7F310DBC:
    ctx->pc = 0x7F310DBCu;
    ctx->downcount -= 7;
    // 7F310DBC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F310DC0:
    ctx->pc = 0x7F310DC0u;
    // 7F310DC0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310DC4:
    ctx->pc = 0x7F310DC4u;
    // 7F310DC4: addi    r3, r3, -26624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26624);

label_7F310DC8:
    ctx->pc = 0x7F310DC8u;
    // 7F310DC8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310DCC:
    ctx->pc = 0x7F310DCCu;
    // 7F310DCC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F310DD0:
    ctx->pc = 0x7F310DD0u;
    // 7F310DD0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F310DD4:
    ctx->pc = 0x7F310DD4u;
    ctx->downcount -= 3;
    // 7F310DD4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310DD8:
    ctx->pc = 0x7F310DD8u;
    // 7F310DD8: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F310DDC:
    ctx->pc = 0x7F310DDCu;
    // 7F310DDC: bl      0x7F3147A8
    {
            ctx->lr = 0x7F310DE0u;
            ctx->pc = 0x7F3147A8u;
            return;
    }

label_7F310DE0:
    ctx->pc = 0x7F310DE0u;
    ctx->downcount -= 1;
    // 7F310DE0: b       0x7F310DEC
    {
            goto label_7F310DEC;
    }

label_7F310DE4:
    ctx->pc = 0x7F310DE4u;
    ctx->downcount -= 2;
    // 7F310DE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310DE8:
    ctx->pc = 0x7F310DE8u;
    // 7F310DE8: bl      0x7F30EF44
    {
            ctx->lr = 0x7F310DECu;
            ctx->pc = 0x7F30EF44u;
            return;
    }

label_7F310DEC:
    ctx->pc = 0x7F310DECu;
    ctx->downcount -= 16;
    // 7F310DEC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F310DF0:
    ctx->pc = 0x7F310DF0u;
    // 7F310DF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310DF4:
    ctx->pc = 0x7F310DF4u;
    // 7F310DF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310DF8:
    ctx->pc = 0x7F310DF8u;
    // 7F310DF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F310DFC:
    ctx->pc = 0x7F310DFCu;
    // 7F310DFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F310E00:
    ctx->pc = 0x7F310E00u;
    ctx->downcount -= 8;
    // 7F310E00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310E04:
    ctx->pc = 0x7F310E04u;
    // 7F310E04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310E08:
    ctx->pc = 0x7F310E08u;
    // 7F310E08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310E0C:
    ctx->pc = 0x7F310E0Cu;
    // 7F310E0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F310E10:
    ctx->pc = 0x7F310E10u;
    // 7F310E10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310E14:
    ctx->pc = 0x7F310E14u;
    // 7F310E14: lwz     r3, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310E18:
    ctx->pc = 0x7F310E18u;
    // 7F310E18: cmplwi  r3, 0x0000
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

label_7F310E1C:
    ctx->pc = 0x7F310E1Cu;
    // 7F310E1C: bc    12, 2, 0x7F310E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310E28;
        }
    }

label_7F310E20:
    ctx->pc = 0x7F310E20u;
    ctx->downcount -= 2;
    // 7F310E20: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310E24:
    ctx->pc = 0x7F310E24u;
    // 7F310E24: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310E28:
    ctx->pc = 0x7F310E28u;
    ctx->downcount -= 3;
    // 7F310E28: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310E2C:
    ctx->pc = 0x7F310E2Cu;
    // 7F310E2C: cmplwi  r3, 0x0000
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

label_7F310E30:
    ctx->pc = 0x7F310E30u;
    // 7F310E30: bc    12, 2, 0x7F310E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310E3C;
        }
    }

label_7F310E34:
    ctx->pc = 0x7F310E34u;
    ctx->downcount -= 2;
    // 7F310E34: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310E38:
    ctx->pc = 0x7F310E38u;
    // 7F310E38: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310E3C:
    ctx->pc = 0x7F310E3Cu;
    ctx->downcount -= 3;
    // 7F310E3C: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310E40:
    ctx->pc = 0x7F310E40u;
    // 7F310E40: cmpwi   r0, 2
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

label_7F310E44:
    ctx->pc = 0x7F310E44u;
    // 7F310E44: bc    12, 2, 0x7F310E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310E5C;
        }
    }

label_7F310E48:
    ctx->pc = 0x7F310E48u;
    ctx->downcount -= 1;
    // 7F310E48: bc    4, 0, 0x7F310E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310E50;
        }
    }

label_7F310E4C:
    ctx->pc = 0x7F310E4Cu;
    ctx->downcount -= 1;
    // 7F310E4C: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F310E50:
    ctx->pc = 0x7F310E50u;
    ctx->downcount -= 2;
    // 7F310E50: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310E54:
    ctx->pc = 0x7F310E54u;
    // 7F310E54: bc    4, 0, 0x7F311160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311160;
        }
    }

label_7F310E58:
    ctx->pc = 0x7F310E58u;
    ctx->downcount -= 1;
    // 7F310E58: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F310E5C:
    ctx->pc = 0x7F310E5Cu;
    ctx->downcount -= 4;
    // 7F310E5C: lis     r3, 137
    ctx->gpr[3] = ((u32)(s32)(137) << 16);

label_7F310E60:
    ctx->pc = 0x7F310E60u;
    // 7F310E60: addi    r0, r3, 3906
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3906);

label_7F310E64:
    ctx->pc = 0x7F310E64u;
    // 7F310E64: cmpw    r4, r0
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

label_7F310E68:
    ctx->pc = 0x7F310E68u;
    // 7F310E68: bc    12, 2, 0x7F310F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F2C;
        }
    }

label_7F310E6C:
    ctx->pc = 0x7F310E6Cu;
    ctx->downcount -= 1;
    // 7F310E6C: bc    4, 0, 0x7F310EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310EC4;
        }
    }

label_7F310E70:
    ctx->pc = 0x7F310E70u;
    ctx->downcount -= 4;
    // 7F310E70: lis     r3, 92
    ctx->gpr[3] = ((u32)(s32)(92) << 16);

label_7F310E74:
    ctx->pc = 0x7F310E74u;
    // 7F310E74: addi    r0, r3, -3600
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3600);

label_7F310E78:
    ctx->pc = 0x7F310E78u;
    // 7F310E78: cmpw    r4, r0
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

label_7F310E7C:
    ctx->pc = 0x7F310E7Cu;
    // 7F310E7C: bc    12, 2, 0x7F310F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F18;
        }
    }

label_7F310E80:
    ctx->pc = 0x7F310E80u;
    ctx->downcount -= 1;
    // 7F310E80: bc    4, 0, 0x7F310EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310EB0;
        }
    }

label_7F310E84:
    ctx->pc = 0x7F310E84u;
    ctx->downcount -= 4;
    // 7F310E84: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F310E88:
    ctx->pc = 0x7F310E88u;
    // 7F310E88: addi    r0, r3, 32352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32352);

label_7F310E8C:
    ctx->pc = 0x7F310E8Cu;
    // 7F310E8C: cmpw    r4, r0
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

label_7F310E90:
    ctx->pc = 0x7F310E90u;
    // 7F310E90: bc    4, 0, 0x7F310EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310EA0;
        }
    }

label_7F310E94:
    ctx->pc = 0x7F310E94u;
    ctx->downcount -= 2;
    // 7F310E94: cmpwi   r4, 26508
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(26508);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310E98:
    ctx->pc = 0x7F310E98u;
    // 7F310E98: bc    12, 2, 0x7F310F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F34;
        }
    }

label_7F310E9C:
    ctx->pc = 0x7F310E9Cu;
    ctx->downcount -= 1;
    // 7F310E9C: b       0x7F310FE4
    {
            goto label_7F310FE4;
    }

label_7F310EA0:
    ctx->pc = 0x7F310EA0u;
    ctx->downcount -= 3;
    // 7F310EA0: addi    r0, r3, 32354
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32354);

label_7F310EA4:
    ctx->pc = 0x7F310EA4u;
    // 7F310EA4: cmpw    r4, r0
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

label_7F310EA8:
    ctx->pc = 0x7F310EA8u;
    // 7F310EA8: bc    4, 0, 0x7F310FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310FE4;
        }
    }

label_7F310EAC:
    ctx->pc = 0x7F310EACu;
    ctx->downcount -= 1;
    // 7F310EAC: b       0x7F310F3C
    {
            goto label_7F310F3C;
    }

label_7F310EB0:
    ctx->pc = 0x7F310EB0u;
    ctx->downcount -= 4;
    // 7F310EB0: lis     r3, 134
    ctx->gpr[3] = ((u32)(s32)(134) << 16);

label_7F310EB4:
    ctx->pc = 0x7F310EB4u;
    // 7F310EB4: addi    r0, r3, 2704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2704);

label_7F310EB8:
    ctx->pc = 0x7F310EB8u;
    // 7F310EB8: cmpw    r4, r0
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

label_7F310EBC:
    ctx->pc = 0x7F310EBCu;
    // 7F310EBC: bc    12, 2, 0x7F310F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F34;
        }
    }

label_7F310EC0:
    ctx->pc = 0x7F310EC0u;
    ctx->downcount -= 1;
    // 7F310EC0: b       0x7F310FE4
    {
            goto label_7F310FE4;
    }

label_7F310EC4:
    ctx->pc = 0x7F310EC4u;
    ctx->downcount -= 4;
    // 7F310EC4: lis     r5, 165
    ctx->gpr[5] = ((u32)(s32)(165) << 16);

label_7F310EC8:
    ctx->pc = 0x7F310EC8u;
    // 7F310EC8: addi    r0, r5, -5821
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-5821);

label_7F310ECC:
    ctx->pc = 0x7F310ECCu;
    // 7F310ECC: cmpw    r4, r0
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

label_7F310ED0:
    ctx->pc = 0x7F310ED0u;
    // 7F310ED0: bc    4, 0, 0x7F310EF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310EF8;
        }
    }

label_7F310ED4:
    ctx->pc = 0x7F310ED4u;
    ctx->downcount -= 4;
    // 7F310ED4: lis     r3, 157
    ctx->gpr[3] = ((u32)(s32)(157) << 16);

label_7F310ED8:
    ctx->pc = 0x7F310ED8u;
    // 7F310ED8: addi    r0, r3, 10116
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10116);

label_7F310EDC:
    ctx->pc = 0x7F310EDCu;
    // 7F310EDC: cmpw    r4, r0
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

label_7F310EE0:
    ctx->pc = 0x7F310EE0u;
    // 7F310EE0: bc    12, 2, 0x7F310F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F2C;
        }
    }

label_7F310EE4:
    ctx->pc = 0x7F310EE4u;
    ctx->downcount -= 1;
    // 7F310EE4: bc    12, 0, 0x7F310FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310FE4;
        }
    }

label_7F310EE8:
    ctx->pc = 0x7F310EE8u;
    ctx->downcount -= 3;
    // 7F310EE8: addi    r0, r5, -5830
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-5830);

label_7F310EEC:
    ctx->pc = 0x7F310EECu;
    // 7F310EEC: cmpw    r4, r0
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

label_7F310EF0:
    ctx->pc = 0x7F310EF0u;
    // 7F310EF0: bc    4, 0, 0x7F310F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310F2C;
        }
    }

label_7F310EF4:
    ctx->pc = 0x7F310EF4u;
    ctx->downcount -= 1;
    // 7F310EF4: b       0x7F310FE4
    {
            goto label_7F310FE4;
    }

label_7F310EF8:
    ctx->pc = 0x7F310EF8u;
    ctx->downcount -= 4;
    // 7F310EF8: lis     r3, 187
    ctx->gpr[3] = ((u32)(s32)(187) << 16);

label_7F310EFC:
    ctx->pc = 0x7F310EFCu;
    // 7F310EFC: addi    r0, r3, 3862
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3862);

label_7F310F00:
    ctx->pc = 0x7F310F00u;
    // 7F310F00: cmpw    r4, r0
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

label_7F310F04:
    ctx->pc = 0x7F310F04u;
    // 7F310F04: bc    4, 0, 0x7F310FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310FE4;
        }
    }

label_7F310F08:
    ctx->pc = 0x7F310F08u;
    ctx->downcount -= 3;
    // 7F310F08: addi    r0, r3, 3860
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3860);

label_7F310F0C:
    ctx->pc = 0x7F310F0Cu;
    // 7F310F0C: cmpw    r4, r0
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

label_7F310F10:
    ctx->pc = 0x7F310F10u;
    // 7F310F10: bc    4, 0, 0x7F310F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310F2C;
        }
    }

label_7F310F14:
    ctx->pc = 0x7F310F14u;
    ctx->downcount -= 1;
    // 7F310F14: b       0x7F310FE4
    {
            goto label_7F310FE4;
    }

label_7F310F18:
    ctx->pc = 0x7F310F18u;
    ctx->downcount -= 2;
    // 7F310F18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310F1C:
    ctx->pc = 0x7F310F1Cu;
    // 7F310F1C: bl      0x7F30CC08
    {
            ctx->lr = 0x7F310F20u;
            ctx->pc = 0x7F30CC08u;
            return;
    }

label_7F310F20:
    ctx->pc = 0x7F310F20u;
    ctx->downcount -= 2;
    // 7F310F20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310F24:
    ctx->pc = 0x7F310F24u;
    // 7F310F24: bl      0x7F30CA8C
    {
            ctx->lr = 0x7F310F28u;
            ctx->pc = 0x7F30CA8Cu;
            return;
    }

label_7F310F28:
    ctx->pc = 0x7F310F28u;
    ctx->downcount -= 1;
    // 7F310F28: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F310F2C:
    ctx->pc = 0x7F310F2Cu;
    ctx->downcount -= 2;
    // 7F310F2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310F30:
    ctx->pc = 0x7F310F30u;
    // 7F310F30: bl      0x7F30CC08
    {
            ctx->lr = 0x7F310F34u;
            ctx->pc = 0x7F30CC08u;
            return;
    }

label_7F310F34:
    ctx->pc = 0x7F310F34u;
    ctx->downcount -= 2;
    // 7F310F34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F310F38:
    ctx->pc = 0x7F310F38u;
    // 7F310F38: bl      0x7F30CA8C
    {
            ctx->lr = 0x7F310F3Cu;
            ctx->pc = 0x7F30CA8Cu;
            return;
    }

label_7F310F3C:
    ctx->pc = 0x7F310F3Cu;
    ctx->downcount -= 3;
    // 7F310F3C: lbz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F310F40:
    ctx->pc = 0x7F310F40u;
    // 7F310F40: cmplwi  r0, 0x0000
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

label_7F310F44:
    ctx->pc = 0x7F310F44u;
    // 7F310F44: bc    12, 2, 0x7F310F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F310F90;
        }
    }

label_7F310F48:
    ctx->pc = 0x7F310F48u;
    ctx->downcount -= 18;
    // 7F310F48: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310F4C:
    ctx->pc = 0x7F310F4Cu;
    // 7F310F4C: lwz     r3, -26440(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310F50:
    ctx->pc = 0x7F310F50u;
    // 7F310F50: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310F54:
    ctx->pc = 0x7F310F54u;
    // 7F310F54: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F310F58:
    ctx->pc = 0x7F310F58u;
    // 7F310F58: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310F5C:
    ctx->pc = 0x7F310F5Cu;
    // 7F310F5C: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310F60:
    ctx->pc = 0x7F310F60u;
    // 7F310F60: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310F64:
    ctx->pc = 0x7F310F64u;
    // 7F310F64: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F310F68:
    ctx->pc = 0x7F310F68u;
    // 7F310F68: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310F6C:
    ctx->pc = 0x7F310F6Cu;
    // 7F310F6C: lwz     r3, -26432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310F70:
    ctx->pc = 0x7F310F70u;
    // 7F310F70: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310F74:
    ctx->pc = 0x7F310F74u;
    // 7F310F74: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F310F78:
    ctx->pc = 0x7F310F78u;
    // 7F310F78: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310F7C:
    ctx->pc = 0x7F310F7Cu;
    // 7F310F7C: lwz     r3, -26428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310F80:
    ctx->pc = 0x7F310F80u;
    // 7F310F80: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310F84:
    ctx->pc = 0x7F310F84u;
    // 7F310F84: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F310F88:
    ctx->pc = 0x7F310F88u;
    // 7F310F88: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310F8C:
    ctx->pc = 0x7F310F8Cu;
    // 7F310F8C: b       0x7F310FD4
    {
            goto label_7F310FD4;
    }

label_7F310F90:
    ctx->pc = 0x7F310F90u;
    ctx->downcount -= 17;
    // 7F310F90: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310F94:
    ctx->pc = 0x7F310F94u;
    // 7F310F94: lwz     r3, -26440(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310F98:
    ctx->pc = 0x7F310F98u;
    // 7F310F98: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310F9C:
    ctx->pc = 0x7F310F9Cu;
    // 7F310F9C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F310FA0:
    ctx->pc = 0x7F310FA0u;
    // 7F310FA0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310FA4:
    ctx->pc = 0x7F310FA4u;
    // 7F310FA4: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310FA8:
    ctx->pc = 0x7F310FA8u;
    // 7F310FA8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310FAC:
    ctx->pc = 0x7F310FACu;
    // 7F310FAC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F310FB0:
    ctx->pc = 0x7F310FB0u;
    // 7F310FB0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310FB4:
    ctx->pc = 0x7F310FB4u;
    // 7F310FB4: lwz     r3, -26432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310FB8:
    ctx->pc = 0x7F310FB8u;
    // 7F310FB8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310FBC:
    ctx->pc = 0x7F310FBCu;
    // 7F310FBC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F310FC0:
    ctx->pc = 0x7F310FC0u;
    // 7F310FC0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310FC4:
    ctx->pc = 0x7F310FC4u;
    // 7F310FC4: lwz     r3, -26428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310FC8:
    ctx->pc = 0x7F310FC8u;
    // 7F310FC8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310FCC:
    ctx->pc = 0x7F310FCCu;
    // 7F310FCC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F310FD0:
    ctx->pc = 0x7F310FD0u;
    // 7F310FD0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310FD4:
    ctx->pc = 0x7F310FD4u;
    ctx->downcount -= 3;
    // 7F310FD4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F310FD8:
    ctx->pc = 0x7F310FD8u;
    // 7F310FD8: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F310FDC:
    ctx->pc = 0x7F310FDCu;
    // 7F310FDC: bl      0x7F314578
    {
            ctx->lr = 0x7F310FE0u;
            ctx->pc = 0x7F314578u;
            return;
    }

label_7F310FE0:
    ctx->pc = 0x7F310FE0u;
    ctx->downcount -= 1;
    // 7F310FE0: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F310FE4:
    ctx->pc = 0x7F310FE4u;
    ctx->downcount -= 3;
    // 7F310FE4: lwz     r0, 6176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310FE8:
    ctx->pc = 0x7F310FE8u;
    // 7F310FE8: cmplwi  r0, 0x0011
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0011u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F310FEC:
    ctx->pc = 0x7F310FECu;
    // 7F310FEC: bc    12, 1, 0x7F311160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311160;
        }
    }

label_7F310FF0:
    ctx->pc = 0x7F310FF0u;
    ctx->downcount -= 7;
    // 7F310FF0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F310FF4:
    ctx->pc = 0x7F310FF4u;
    // 7F310FF4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F310FF8:
    ctx->pc = 0x7F310FF8u;
    // 7F310FF8: addi    r3, r3, -26572
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26572);

label_7F310FFC:
    ctx->pc = 0x7F310FFCu;
    // 7F310FFC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311000:
    ctx->pc = 0x7F311000u;
    // 7F311000: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F311004:
    ctx->pc = 0x7F311004u;
    // 7F311004: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F311008:
    ctx->pc = 0x7F311008u;
    ctx->downcount -= 3;
    // 7F311008: lbz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31100C:
    ctx->pc = 0x7F31100Cu;
    // 7F31100C: cmplwi  r0, 0x0000
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

label_7F311010:
    ctx->pc = 0x7F311010u;
    // 7F311010: bc    12, 2, 0x7F311160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311160;
        }
    }

label_7F311014:
    ctx->pc = 0x7F311014u;
    ctx->downcount -= 18;
    // 7F311014: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311018:
    ctx->pc = 0x7F311018u;
    // 7F311018: lwz     r3, -26440(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31101C:
    ctx->pc = 0x7F31101Cu;
    // 7F31101C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311020:
    ctx->pc = 0x7F311020u;
    // 7F311020: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F311024:
    ctx->pc = 0x7F311024u;
    // 7F311024: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311028:
    ctx->pc = 0x7F311028u;
    // 7F311028: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31102C:
    ctx->pc = 0x7F31102Cu;
    // 7F31102C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311030:
    ctx->pc = 0x7F311030u;
    // 7F311030: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F311034:
    ctx->pc = 0x7F311034u;
    // 7F311034: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311038:
    ctx->pc = 0x7F311038u;
    // 7F311038: lwz     r3, -26432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31103C:
    ctx->pc = 0x7F31103Cu;
    // 7F31103C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311040:
    ctx->pc = 0x7F311040u;
    // 7F311040: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F311044:
    ctx->pc = 0x7F311044u;
    // 7F311044: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311048:
    ctx->pc = 0x7F311048u;
    // 7F311048: lwz     r3, -26428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31104C:
    ctx->pc = 0x7F31104Cu;
    // 7F31104C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311050:
    ctx->pc = 0x7F311050u;
    // 7F311050: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F311054:
    ctx->pc = 0x7F311054u;
    // 7F311054: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311058:
    ctx->pc = 0x7F311058u;
    // 7F311058: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F31105C:
    ctx->pc = 0x7F31105Cu;
    ctx->downcount -= 19;
    // 7F31105C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311060:
    ctx->pc = 0x7F311060u;
    // 7F311060: lwz     r4, -26440(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26440);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311064:
    ctx->pc = 0x7F311064u;
    // 7F311064: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311068:
    ctx->pc = 0x7F311068u;
    // 7F311068: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F31106C:
    ctx->pc = 0x7F31106Cu;
    // 7F31106C: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311070:
    ctx->pc = 0x7F311070u;
    // 7F311070: lwz     r4, -26436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26436);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311074:
    ctx->pc = 0x7F311074u;
    // 7F311074: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311078:
    ctx->pc = 0x7F311078u;
    // 7F311078: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F31107C:
    ctx->pc = 0x7F31107Cu;
    // 7F31107C: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311080:
    ctx->pc = 0x7F311080u;
    // 7F311080: lwz     r4, -26432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311084:
    ctx->pc = 0x7F311084u;
    // 7F311084: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311088:
    ctx->pc = 0x7F311088u;
    // 7F311088: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F31108C:
    ctx->pc = 0x7F31108Cu;
    // 7F31108C: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311090:
    ctx->pc = 0x7F311090u;
    // 7F311090: lwz     r4, -26428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26428);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311094:
    ctx->pc = 0x7F311094u;
    // 7F311094: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F311098:
    ctx->pc = 0x7F311098u;
    // 7F311098: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31109C:
    ctx->pc = 0x7F31109Cu;
    // 7F31109C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F3110A0:
    ctx->pc = 0x7F3110A0u;
    // 7F3110A0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3110A4:
    ctx->pc = 0x7F3110A4u;
    // 7F3110A4: bl      0x7F314578
    {
            ctx->lr = 0x7F3110A8u;
            ctx->pc = 0x7F314578u;
            return;
    }

label_7F3110A8:
    ctx->pc = 0x7F3110A8u;
    ctx->downcount -= 1;
    // 7F3110A8: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F3110AC:
    ctx->pc = 0x7F3110ACu;
    ctx->downcount -= 18;
    // 7F3110AC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3110B0:
    ctx->pc = 0x7F3110B0u;
    // 7F3110B0: lwz     r3, -26440(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3110B4:
    ctx->pc = 0x7F3110B4u;
    // 7F3110B4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3110B8:
    ctx->pc = 0x7F3110B8u;
    // 7F3110B8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F3110BC:
    ctx->pc = 0x7F3110BCu;
    // 7F3110BC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3110C0:
    ctx->pc = 0x7F3110C0u;
    // 7F3110C0: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3110C4:
    ctx->pc = 0x7F3110C4u;
    // 7F3110C4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3110C8:
    ctx->pc = 0x7F3110C8u;
    // 7F3110C8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F3110CC:
    ctx->pc = 0x7F3110CCu;
    // 7F3110CC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3110D0:
    ctx->pc = 0x7F3110D0u;
    // 7F3110D0: lwz     r3, -26432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3110D4:
    ctx->pc = 0x7F3110D4u;
    // 7F3110D4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3110D8:
    ctx->pc = 0x7F3110D8u;
    // 7F3110D8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F3110DC:
    ctx->pc = 0x7F3110DCu;
    // 7F3110DC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3110E0:
    ctx->pc = 0x7F3110E0u;
    // 7F3110E0: lwz     r3, -26428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3110E4:
    ctx->pc = 0x7F3110E4u;
    // 7F3110E4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3110E8:
    ctx->pc = 0x7F3110E8u;
    // 7F3110E8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F3110EC:
    ctx->pc = 0x7F3110ECu;
    // 7F3110EC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3110F0:
    ctx->pc = 0x7F3110F0u;
    // 7F3110F0: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F3110F4:
    ctx->pc = 0x7F3110F4u;
    ctx->downcount -= 7;
    // 7F3110F4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3110F8:
    ctx->pc = 0x7F3110F8u;
    // 7F3110F8: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3110FC:
    ctx->pc = 0x7F3110FCu;
    // 7F3110FC: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F311100:
    ctx->pc = 0x7F311100u;
    // 7F311100: lwz     r3, -26452(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311104:
    ctx->pc = 0x7F311104u;
    // 7F311104: lbz     r4, -26522(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26522);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F311108:
    ctx->pc = 0x7F311108u;
    // 7F311108: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F31110C:
    ctx->pc = 0x7F31110Cu;
    // 7F31110C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F311110u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F311110:
    ctx->pc = 0x7F311110u;
    ctx->downcount -= 7;
    // 7F311110: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F311114:
    ctx->pc = 0x7F311114u;
    // 7F311114: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311118:
    ctx->pc = 0x7F311118u;
    // 7F311118: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F31111C:
    ctx->pc = 0x7F31111Cu;
    // 7F31111C: lwz     r3, -26448(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311120:
    ctx->pc = 0x7F311120u;
    // 7F311120: lbz     r4, -26521(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26521);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F311124:
    ctx->pc = 0x7F311124u;
    // 7F311124: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F311128:
    ctx->pc = 0x7F311128u;
    // 7F311128: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F31112Cu;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F31112C:
    ctx->pc = 0x7F31112Cu;
    ctx->downcount -= 7;
    // 7F31112C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F311130:
    ctx->pc = 0x7F311130u;
    // 7F311130: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311134:
    ctx->pc = 0x7F311134u;
    // 7F311134: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F311138:
    ctx->pc = 0x7F311138u;
    // 7F311138: lwz     r3, -26444(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31113C:
    ctx->pc = 0x7F31113Cu;
    // 7F31113C: lbz     r4, -26520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26520);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F311140:
    ctx->pc = 0x7F311140u;
    // 7F311140: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F311144:
    ctx->pc = 0x7F311144u;
    // 7F311144: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F311148u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F311148:
    ctx->pc = 0x7F311148u;
    ctx->downcount -= 2;
    // 7F311148: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31114C:
    ctx->pc = 0x7F31114Cu;
    // 7F31114C: bl      0x7F30CA8C
    {
            ctx->lr = 0x7F311150u;
            ctx->pc = 0x7F30CA8Cu;
            return;
    }

label_7F311150:
    ctx->pc = 0x7F311150u;
    ctx->downcount -= 1;
    // 7F311150: b       0x7F311160
    {
            goto label_7F311160;
    }

label_7F311154:
    ctx->pc = 0x7F311154u;
    ctx->downcount -= 3;
    // 7F311154: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311158:
    ctx->pc = 0x7F311158u;
    // 7F311158: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F31115C:
    ctx->pc = 0x7F31115Cu;
    // 7F31115C: bl      0x7F314578
    {
            ctx->lr = 0x7F311160u;
            ctx->pc = 0x7F314578u;
            return;
    }

label_7F311160:
    ctx->pc = 0x7F311160u;
    ctx->downcount -= 6;
    // 7F311160: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311164:
    ctx->pc = 0x7F311164u;
    // 7F311164: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F311168:
    ctx->pc = 0x7F311168u;
    // 7F311168: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31116C:
    ctx->pc = 0x7F31116Cu;
    // 7F31116C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F311170:
    ctx->pc = 0x7F311170u;
    // 7F311170: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F311174:
    ctx->pc = 0x7F311174u;
    ctx->downcount -= 8;
    // 7F311174: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F311178:
    ctx->pc = 0x7F311178u;
    // 7F311178: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31117C:
    ctx->pc = 0x7F31117Cu;
    // 7F31117C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311180:
    ctx->pc = 0x7F311180u;
    // 7F311180: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F311184:
    ctx->pc = 0x7F311184u;
    // 7F311184: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311188:
    ctx->pc = 0x7F311188u;
    // 7F311188: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31118C:
    ctx->pc = 0x7F31118Cu;
    // 7F31118C: cmplwi  r3, 0x0000
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

label_7F311190:
    ctx->pc = 0x7F311190u;
    // 7F311190: bc    12, 2, 0x7F31119C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31119C;
        }
    }

label_7F311194:
    ctx->pc = 0x7F311194u;
    ctx->downcount -= 2;
    // 7F311194: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311198:
    ctx->pc = 0x7F311198u;
    // 7F311198: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31119C:
    ctx->pc = 0x7F31119Cu;
    ctx->downcount -= 3;
    // 7F31119C: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3111A0:
    ctx->pc = 0x7F3111A0u;
    // 7F3111A0: cmplwi  r3, 0x0000
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

label_7F3111A4:
    ctx->pc = 0x7F3111A4u;
    // 7F3111A4: bc    12, 2, 0x7F3111B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3111B0;
        }
    }

label_7F3111A8:
    ctx->pc = 0x7F3111A8u;
    ctx->downcount -= 2;
    // 7F3111A8: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3111AC:
    ctx->pc = 0x7F3111ACu;
    // 7F3111AC: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3111B0:
    ctx->pc = 0x7F3111B0u;
    ctx->downcount -= 3;
    // 7F3111B0: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3111B4:
    ctx->pc = 0x7F3111B4u;
    // 7F3111B4: cmpwi   r0, 4
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

label_7F3111B8:
    ctx->pc = 0x7F3111B8u;
    // 7F3111B8: bc    12, 2, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F3111BC:
    ctx->pc = 0x7F3111BCu;
    ctx->downcount -= 1;
    // 7F3111BC: bc    4, 0, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F3111C0:
    ctx->pc = 0x7F3111C0u;
    ctx->downcount -= 2;
    // 7F3111C0: cmpwi   r0, 3
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

label_7F3111C4:
    ctx->pc = 0x7F3111C4u;
    // 7F3111C4: bc    4, 0, 0x7F3111CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3111CC;
        }
    }

label_7F3111C8:
    ctx->pc = 0x7F3111C8u;
    ctx->downcount -= 1;
    // 7F3111C8: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F3111CC:
    ctx->pc = 0x7F3111CCu;
    ctx->downcount -= 4;
    // 7F3111CC: lis     r3, 141
    ctx->gpr[3] = ((u32)(s32)(141) << 16);

label_7F3111D0:
    ctx->pc = 0x7F3111D0u;
    // 7F3111D0: addi    r0, r3, -32307
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32307);

label_7F3111D4:
    ctx->pc = 0x7F3111D4u;
    // 7F3111D4: cmpw    r4, r0
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

label_7F3111D8:
    ctx->pc = 0x7F3111D8u;
    // 7F3111D8: bc    12, 2, 0x7F311310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311310;
        }
    }

label_7F3111DC:
    ctx->pc = 0x7F3111DCu;
    ctx->downcount -= 1;
    // 7F3111DC: bc    4, 0, 0x7F311244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311244;
        }
    }

label_7F3111E0:
    ctx->pc = 0x7F3111E0u;
    ctx->downcount -= 4;
    // 7F3111E0: lis     r3, 78
    ctx->gpr[3] = ((u32)(s32)(78) << 16);

label_7F3111E4:
    ctx->pc = 0x7F3111E4u;
    // 7F3111E4: addi    r0, r3, -23754
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23754);

label_7F3111E8:
    ctx->pc = 0x7F3111E8u;
    // 7F3111E8: cmpw    r4, r0
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

label_7F3111EC:
    ctx->pc = 0x7F3111ECu;
    // 7F3111EC: bc    12, 2, 0x7F311310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311310;
        }
    }

label_7F3111F0:
    ctx->pc = 0x7F3111F0u;
    ctx->downcount -= 1;
    // 7F3111F0: bc    4, 0, 0x7F31121C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31121C;
        }
    }

label_7F3111F4:
    ctx->pc = 0x7F3111F4u;
    ctx->downcount -= 4;
    // 7F3111F4: lis     r3, 59
    ctx->gpr[3] = ((u32)(s32)(59) << 16);

label_7F3111F8:
    ctx->pc = 0x7F3111F8u;
    // 7F3111F8: addi    r0, r3, -17393
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-17393);

label_7F3111FC:
    ctx->pc = 0x7F3111FCu;
    // 7F3111FC: cmpw    r4, r0
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

label_7F311200:
    ctx->pc = 0x7F311200u;
    // 7F311200: bc    12, 2, 0x7F311308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311308;
        }
    }

label_7F311204:
    ctx->pc = 0x7F311204u;
    ctx->downcount -= 1;
    // 7F311204: bc    4, 0, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F311208:
    ctx->pc = 0x7F311208u;
    ctx->downcount -= 4;
    // 7F311208: lis     r3, 58
    ctx->gpr[3] = ((u32)(s32)(58) << 16);

label_7F31120C:
    ctx->pc = 0x7F31120Cu;
    // 7F31120C: addi    r0, r3, -28096
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28096);

label_7F311210:
    ctx->pc = 0x7F311210u;
    // 7F311210: cmpw    r4, r0
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

label_7F311214:
    ctx->pc = 0x7F311214u;
    // 7F311214: bc    12, 2, 0x7F311294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311294;
        }
    }

label_7F311218:
    ctx->pc = 0x7F311218u;
    ctx->downcount -= 1;
    // 7F311218: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F31121C:
    ctx->pc = 0x7F31121Cu;
    ctx->downcount -= 4;
    // 7F31121C: lis     r3, 126
    ctx->gpr[3] = ((u32)(s32)(126) << 16);

label_7F311220:
    ctx->pc = 0x7F311220u;
    // 7F311220: addi    r0, r3, -29295
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29295);

label_7F311224:
    ctx->pc = 0x7F311224u;
    // 7F311224: cmpw    r4, r0
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

label_7F311228:
    ctx->pc = 0x7F311228u;
    // 7F311228: bc    12, 2, 0x7F311308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311308;
        }
    }

label_7F31122C:
    ctx->pc = 0x7F31122Cu;
    ctx->downcount -= 1;
    // 7F31122C: bc    4, 0, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F311230:
    ctx->pc = 0x7F311230u;
    ctx->downcount -= 4;
    // 7F311230: lis     r3, 100
    ctx->gpr[3] = ((u32)(s32)(100) << 16);

label_7F311234:
    ctx->pc = 0x7F311234u;
    // 7F311234: addi    r0, r3, 12958
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12958);

label_7F311238:
    ctx->pc = 0x7F311238u;
    // 7F311238: cmpw    r4, r0
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

label_7F31123C:
    ctx->pc = 0x7F31123Cu;
    // 7F31123C: bc    12, 2, 0x7F311294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311294;
        }
    }

label_7F311240:
    ctx->pc = 0x7F311240u;
    ctx->downcount -= 1;
    // 7F311240: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F311244:
    ctx->pc = 0x7F311244u;
    ctx->downcount -= 4;
    // 7F311244: lis     r3, 186
    ctx->gpr[3] = ((u32)(s32)(186) << 16);

label_7F311248:
    ctx->pc = 0x7F311248u;
    // 7F311248: addi    r0, r3, 29416
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29416);

label_7F31124C:
    ctx->pc = 0x7F31124Cu;
    // 7F31124C: cmpw    r4, r0
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

label_7F311250:
    ctx->pc = 0x7F311250u;
    // 7F311250: bc    12, 2, 0x7F311310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311310;
        }
    }

label_7F311254:
    ctx->pc = 0x7F311254u;
    ctx->downcount -= 1;
    // 7F311254: bc    4, 0, 0x7F311280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311280;
        }
    }

label_7F311258:
    ctx->pc = 0x7F311258u;
    ctx->downcount -= 4;
    // 7F311258: lis     r3, 185
    ctx->gpr[3] = ((u32)(s32)(185) << 16);

label_7F31125C:
    ctx->pc = 0x7F31125Cu;
    // 7F31125C: addi    r0, r3, -3299
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3299);

label_7F311260:
    ctx->pc = 0x7F311260u;
    // 7F311260: cmpw    r4, r0
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

label_7F311264:
    ctx->pc = 0x7F311264u;
    // 7F311264: bc    12, 2, 0x7F311310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311310;
        }
    }

label_7F311268:
    ctx->pc = 0x7F311268u;
    ctx->downcount -= 1;
    // 7F311268: bc    4, 0, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F31126C:
    ctx->pc = 0x7F31126Cu;
    ctx->downcount -= 4;
    // 7F31126C: lis     r3, 172
    ctx->gpr[3] = ((u32)(s32)(172) << 16);

label_7F311270:
    ctx->pc = 0x7F311270u;
    // 7F311270: addi    r0, r3, -11390
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11390);

label_7F311274:
    ctx->pc = 0x7F311274u;
    // 7F311274: cmpw    r4, r0
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

label_7F311278:
    ctx->pc = 0x7F311278u;
    // 7F311278: bc    12, 2, 0x7F311310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311310;
        }
    }

label_7F31127C:
    ctx->pc = 0x7F31127Cu;
    ctx->downcount -= 1;
    // 7F31127C: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F311280:
    ctx->pc = 0x7F311280u;
    ctx->downcount -= 4;
    // 7F311280: lis     r3, 223
    ctx->gpr[3] = ((u32)(s32)(223) << 16);

label_7F311284:
    ctx->pc = 0x7F311284u;
    // 7F311284: addi    r0, r3, -28775
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28775);

label_7F311288:
    ctx->pc = 0x7F311288u;
    // 7F311288: cmpw    r4, r0
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

label_7F31128C:
    ctx->pc = 0x7F31128Cu;
    // 7F31128C: bc    12, 2, 0x7F311294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311294;
        }
    }

label_7F311290:
    ctx->pc = 0x7F311290u;
    ctx->downcount -= 1;
    // 7F311290: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F311294:
    ctx->pc = 0x7F311294u;
    ctx->downcount -= 4;
    // 7F311294: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311298:
    ctx->pc = 0x7F311298u;
    // 7F311298: lwz     r0, -26016(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31129C:
    ctx->pc = 0x7F31129Cu;
    // 7F31129C: cmpwi   r0, 0
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

label_7F3112A0:
    ctx->pc = 0x7F3112A0u;
    // 7F3112A0: bc    4, 2, 0x7F3112D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3112D8;
        }
    }

label_7F3112A4:
    ctx->pc = 0x7F3112A4u;
    ctx->downcount -= 6;
    // 7F3112A4: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F3112A8:
    ctx->pc = 0x7F3112A8u;
    // 7F3112A8: lis     r5, 101
    ctx->gpr[5] = ((u32)(s32)(101) << 16);

label_7F3112AC:
    ctx->pc = 0x7F3112ACu;
    // 7F3112AC: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3112B0:
    ctx->pc = 0x7F3112B0u;
    // 7F3112B0: addi    r4, r4, -7575
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7575);

label_7F3112B4:
    ctx->pc = 0x7F3112B4u;
    // 7F3112B4: addi    r5, r5, -25152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25152);

label_7F3112B8:
    ctx->pc = 0x7F3112B8u;
    // 7F3112B8: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3112BCu;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3112BC:
    ctx->pc = 0x7F3112BCu;
    ctx->downcount -= 6;
    // 7F3112BC: lis     r4, 92
    ctx->gpr[4] = ((u32)(s32)(92) << 16);

label_7F3112C0:
    ctx->pc = 0x7F3112C0u;
    // 7F3112C0: lis     r5, 107
    ctx->gpr[5] = ((u32)(s32)(107) << 16);

label_7F3112C4:
    ctx->pc = 0x7F3112C4u;
    // 7F3112C4: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3112C8:
    ctx->pc = 0x7F3112C8u;
    // 7F3112C8: addi    r4, r4, 19610
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19610);

label_7F3112CC:
    ctx->pc = 0x7F3112CCu;
    // 7F3112CC: addi    r5, r5, 9108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9108);

label_7F3112D0:
    ctx->pc = 0x7F3112D0u;
    // 7F3112D0: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3112D4u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3112D4:
    ctx->pc = 0x7F3112D4u;
    ctx->downcount -= 1;
    // 7F3112D4: b       0x7F311308
    {
            goto label_7F311308;
    }

label_7F3112D8:
    ctx->pc = 0x7F3112D8u;
    ctx->downcount -= 6;
    // 7F3112D8: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F3112DC:
    ctx->pc = 0x7F3112DCu;
    // 7F3112DC: lis     r5, 107
    ctx->gpr[5] = ((u32)(s32)(107) << 16);

label_7F3112E0:
    ctx->pc = 0x7F3112E0u;
    // 7F3112E0: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3112E4:
    ctx->pc = 0x7F3112E4u;
    // 7F3112E4: addi    r4, r4, -7575
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7575);

label_7F3112E8:
    ctx->pc = 0x7F3112E8u;
    // 7F3112E8: addi    r5, r5, 9108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9108);

label_7F3112EC:
    ctx->pc = 0x7F3112ECu;
    // 7F3112EC: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3112F0u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3112F0:
    ctx->pc = 0x7F3112F0u;
    ctx->downcount -= 6;
    // 7F3112F0: lis     r4, 92
    ctx->gpr[4] = ((u32)(s32)(92) << 16);

label_7F3112F4:
    ctx->pc = 0x7F3112F4u;
    // 7F3112F4: lis     r5, 101
    ctx->gpr[5] = ((u32)(s32)(101) << 16);

label_7F3112F8:
    ctx->pc = 0x7F3112F8u;
    // 7F3112F8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3112FC:
    ctx->pc = 0x7F3112FCu;
    // 7F3112FC: addi    r4, r4, 19610
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19610);

label_7F311300:
    ctx->pc = 0x7F311300u;
    // 7F311300: addi    r5, r5, -25152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25152);

label_7F311304:
    ctx->pc = 0x7F311304u;
    // 7F311304: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F311308u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F311308:
    ctx->pc = 0x7F311308u;
    ctx->downcount -= 2;
    // 7F311308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31130C:
    ctx->pc = 0x7F31130Cu;
    // 7F31130C: bl      0x7F30FD7C
    {
            ctx->lr = 0x7F311310u;
            ctx->pc = 0x7F30FD7Cu;
            return;
    }

label_7F311310:
    ctx->pc = 0x7F311310u;
    ctx->downcount -= 4;
    // 7F311310: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311314:
    ctx->pc = 0x7F311314u;
    // 7F311314: lwz     r0, -26020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311318:
    ctx->pc = 0x7F311318u;
    // 7F311318: cmpwi   r0, 1
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

label_7F31131C:
    ctx->pc = 0x7F31131Cu;
    // 7F31131C: bc    12, 2, 0x7F311388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311388;
        }
    }

label_7F311320:
    ctx->pc = 0x7F311320u;
    ctx->downcount -= 1;
    // 7F311320: bc    4, 0, 0x7F311330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311330;
        }
    }

label_7F311324:
    ctx->pc = 0x7F311324u;
    ctx->downcount -= 2;
    // 7F311324: cmpwi   r0, 0
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

label_7F311328:
    ctx->pc = 0x7F311328u;
    // 7F311328: bc    4, 0, 0x7F31133C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31133C;
        }
    }

label_7F31132C:
    ctx->pc = 0x7F31132Cu;
    ctx->downcount -= 1;
    // 7F31132C: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F311330:
    ctx->pc = 0x7F311330u;
    ctx->downcount -= 2;
    // 7F311330: cmpwi   r0, 3
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

label_7F311334:
    ctx->pc = 0x7F311334u;
    // 7F311334: bc    4, 0, 0x7F31141C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31141C;
        }
    }

label_7F311338:
    ctx->pc = 0x7F311338u;
    ctx->downcount -= 1;
    // 7F311338: b       0x7F3113D4
    {
            goto label_7F3113D4;
    }

label_7F31133C:
    ctx->pc = 0x7F31133Cu;
    ctx->downcount -= 6;
    // 7F31133C: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F311340:
    ctx->pc = 0x7F311340u;
    // 7F311340: lis     r5, 138
    ctx->gpr[5] = ((u32)(s32)(138) << 16);

label_7F311344:
    ctx->pc = 0x7F311344u;
    // 7F311344: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311348:
    ctx->pc = 0x7F311348u;
    // 7F311348: addi    r4, r4, 6652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6652);

label_7F31134C:
    ctx->pc = 0x7F31134Cu;
    // 7F31134C: addi    r5, r5, -22395
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22395);

label_7F311350:
    ctx->pc = 0x7F311350u;
    // 7F311350: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F311354u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F311354:
    ctx->pc = 0x7F311354u;
    ctx->downcount -= 6;
    // 7F311354: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F311358:
    ctx->pc = 0x7F311358u;
    // 7F311358: lis     r5, 129
    ctx->gpr[5] = ((u32)(s32)(129) << 16);

label_7F31135C:
    ctx->pc = 0x7F31135Cu;
    // 7F31135C: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311360:
    ctx->pc = 0x7F311360u;
    // 7F311360: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F311364:
    ctx->pc = 0x7F311364u;
    // 7F311364: addi    r5, r5, 29381
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29381);

label_7F311368:
    ctx->pc = 0x7F311368u;
    // 7F311368: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F31136Cu;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F31136C:
    ctx->pc = 0x7F31136Cu;
    ctx->downcount -= 6;
    // 7F31136C: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F311370:
    ctx->pc = 0x7F311370u;
    // 7F311370: lis     r5, 139
    ctx->gpr[5] = ((u32)(s32)(139) << 16);

label_7F311374:
    ctx->pc = 0x7F311374u;
    // 7F311374: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311378:
    ctx->pc = 0x7F311378u;
    // 7F311378: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F31137C:
    ctx->pc = 0x7F31137Cu;
    // 7F31137C: addi    r5, r5, 10320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10320);

label_7F311380:
    ctx->pc = 0x7F311380u;
    // 7F311380: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F311384u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F311384:
    ctx->pc = 0x7F311384u;
    ctx->downcount -= 1;
    // 7F311384: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F311388:
    ctx->pc = 0x7F311388u;
    ctx->downcount -= 6;
    // 7F311388: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F31138C:
    ctx->pc = 0x7F31138Cu;
    // 7F31138C: lis     r5, 138
    ctx->gpr[5] = ((u32)(s32)(138) << 16);

label_7F311390:
    ctx->pc = 0x7F311390u;
    // 7F311390: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311394:
    ctx->pc = 0x7F311394u;
    // 7F311394: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F311398:
    ctx->pc = 0x7F311398u;
    // 7F311398: addi    r5, r5, -22395
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22395);

label_7F31139C:
    ctx->pc = 0x7F31139Cu;
    // 7F31139C: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3113A0u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3113A0:
    ctx->pc = 0x7F3113A0u;
    ctx->downcount -= 6;
    // 7F3113A0: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F3113A4:
    ctx->pc = 0x7F3113A4u;
    // 7F3113A4: lis     r5, 129
    ctx->gpr[5] = ((u32)(s32)(129) << 16);

label_7F3113A8:
    ctx->pc = 0x7F3113A8u;
    // 7F3113A8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3113AC:
    ctx->pc = 0x7F3113ACu;
    // 7F3113AC: addi    r4, r4, 6652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6652);

label_7F3113B0:
    ctx->pc = 0x7F3113B0u;
    // 7F3113B0: addi    r5, r5, 29381
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29381);

label_7F3113B4:
    ctx->pc = 0x7F3113B4u;
    // 7F3113B4: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3113B8u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3113B8:
    ctx->pc = 0x7F3113B8u;
    ctx->downcount -= 6;
    // 7F3113B8: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F3113BC:
    ctx->pc = 0x7F3113BCu;
    // 7F3113BC: lis     r5, 139
    ctx->gpr[5] = ((u32)(s32)(139) << 16);

label_7F3113C0:
    ctx->pc = 0x7F3113C0u;
    // 7F3113C0: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3113C4:
    ctx->pc = 0x7F3113C4u;
    // 7F3113C4: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F3113C8:
    ctx->pc = 0x7F3113C8u;
    // 7F3113C8: addi    r5, r5, 10320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10320);

label_7F3113CC:
    ctx->pc = 0x7F3113CCu;
    // 7F3113CC: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3113D0u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3113D0:
    ctx->pc = 0x7F3113D0u;
    ctx->downcount -= 1;
    // 7F3113D0: b       0x7F31141C
    {
            goto label_7F31141C;
    }

label_7F3113D4:
    ctx->pc = 0x7F3113D4u;
    ctx->downcount -= 6;
    // 7F3113D4: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F3113D8:
    ctx->pc = 0x7F3113D8u;
    // 7F3113D8: lis     r5, 138
    ctx->gpr[5] = ((u32)(s32)(138) << 16);

label_7F3113DC:
    ctx->pc = 0x7F3113DCu;
    // 7F3113DC: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3113E0:
    ctx->pc = 0x7F3113E0u;
    // 7F3113E0: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F3113E4:
    ctx->pc = 0x7F3113E4u;
    // 7F3113E4: addi    r5, r5, -22395
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22395);

label_7F3113E8:
    ctx->pc = 0x7F3113E8u;
    // 7F3113E8: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F3113ECu;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F3113EC:
    ctx->pc = 0x7F3113ECu;
    ctx->downcount -= 6;
    // 7F3113EC: lis     r4, 163
    ctx->gpr[4] = ((u32)(s32)(163) << 16);

label_7F3113F0:
    ctx->pc = 0x7F3113F0u;
    // 7F3113F0: lis     r5, 129
    ctx->gpr[5] = ((u32)(s32)(129) << 16);

label_7F3113F4:
    ctx->pc = 0x7F3113F4u;
    // 7F3113F4: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3113F8:
    ctx->pc = 0x7F3113F8u;
    // 7F3113F8: addi    r4, r4, 16108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16108);

label_7F3113FC:
    ctx->pc = 0x7F3113FCu;
    // 7F3113FC: addi    r5, r5, 29381
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29381);

label_7F311400:
    ctx->pc = 0x7F311400u;
    // 7F311400: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F311404u;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F311404:
    ctx->pc = 0x7F311404u;
    ctx->downcount -= 6;
    // 7F311404: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F311408:
    ctx->pc = 0x7F311408u;
    // 7F311408: lis     r5, 139
    ctx->gpr[5] = ((u32)(s32)(139) << 16);

label_7F31140C:
    ctx->pc = 0x7F31140Cu;
    // 7F31140C: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311410:
    ctx->pc = 0x7F311410u;
    // 7F311410: addi    r4, r4, 6652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6652);

label_7F311414:
    ctx->pc = 0x7F311414u;
    // 7F311414: addi    r5, r5, 10320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10320);

label_7F311418:
    ctx->pc = 0x7F311418u;
    // 7F311418: bl      0x7F30ADE8
    {
            ctx->lr = 0x7F31141Cu;
            ctx->pc = 0x7F30ADE8u;
            return;
    }

label_7F31141C:
    ctx->pc = 0x7F31141Cu;
    ctx->downcount -= 6;
    // 7F31141C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311420:
    ctx->pc = 0x7F311420u;
    // 7F311420: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F311424:
    ctx->pc = 0x7F311424u;
    // 7F311424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F311428:
    ctx->pc = 0x7F311428u;
    // 7F311428: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31142C:
    ctx->pc = 0x7F31142Cu;
    // 7F31142C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F311430:
    ctx->pc = 0x7F311430u;
    ctx->downcount -= 17;
    // 7F311430: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F311434:
    ctx->pc = 0x7F311434u;
    // 7F311434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F311438:
    ctx->pc = 0x7F311438u;
    // 7F311438: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31143C:
    ctx->pc = 0x7F31143Cu;
    // 7F31143C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F311440:
    ctx->pc = 0x7F311440u;
    // 7F311440: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311444:
    ctx->pc = 0x7F311444u;
    // 7F311444: lwz     r3, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311448:
    ctx->pc = 0x7F311448u;
    // 7F311448: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F31144Cu;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F31144C:
    ctx->pc = 0x7F31144Cu;
    ctx->downcount -= 2;
    // 7F31144C: lwz     r3, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311450:
    ctx->pc = 0x7F311450u;
    // 7F311450: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F311454u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F311454:
    ctx->pc = 0x7F311454u;
    ctx->downcount -= 2;
    // 7F311454: lwz     r3, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311458:
    ctx->pc = 0x7F311458u;
    // 7F311458: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F31145Cu;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F31145C:
    ctx->pc = 0x7F31145Cu;
    ctx->downcount -= 6;
    // 7F31145C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F311460:
    ctx->pc = 0x7F311460u;
    // 7F311460: stw     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311464:
    ctx->pc = 0x7F311464u;
    // 7F311464: stw     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311468:
    ctx->pc = 0x7F311468u;
    // 7F311468: stw     r0, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31146C:
    ctx->pc = 0x7F31146Cu;
    // 7F31146C: stw     r0, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311470:
    ctx->pc = 0x7F311470u;
    // 7F311470: bl      0x7F312224
    {
            ctx->lr = 0x7F311474u;
            goto label_7F312224;
    }

label_7F311474:
    ctx->pc = 0x7F311474u;
    ctx->downcount -= 4;
    // 7F311474: addis   r3, r28, 4
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(4) << 16);

label_7F311478:
    ctx->pc = 0x7F311478u;
    // 7F311478: lwz     r3, -10584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10584);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31147C:
    ctx->pc = 0x7F31147Cu;
    // 7F31147C: cmplwi  r3, 0x0000
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

label_7F311480:
    ctx->pc = 0x7F311480u;
    // 7F311480: bc    12, 2, 0x7F311488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311488;
        }
    }

label_7F311484:
    ctx->pc = 0x7F311484u;
    ctx->downcount -= 1;
    // 7F311484: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F311488u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F311488:
    ctx->pc = 0x7F311488u;
    ctx->downcount -= 4;
    // 7F311488: addis   r3, r28, 4
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(4) << 16);

label_7F31148C:
    ctx->pc = 0x7F31148Cu;
    // 7F31148C: lwz     r3, -10648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311490:
    ctx->pc = 0x7F311490u;
    // 7F311490: cmplwi  r3, 0x0000
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

label_7F311494:
    ctx->pc = 0x7F311494u;
    // 7F311494: bc    12, 2, 0x7F31149C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31149C;
        }
    }

label_7F311498:
    ctx->pc = 0x7F311498u;
    ctx->downcount -= 1;
    // 7F311498: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F31149Cu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F31149C:
    ctx->pc = 0x7F31149Cu;
    ctx->downcount -= 2;
    // 7F31149C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3114A0:
    ctx->pc = 0x7F3114A0u;
    // 7F3114A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3114A4:
    ctx->downcount -= 4;
    // 7F3114A4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3114A8:
    // 7F3114A8: addi    r3, r3, -26348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26348);

label_7F3114AC:
    ctx->pc = 0x7F3114ACu;
    // 7F3114AC: lwzx    r3, r28, r3
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3114B0:
    // 7F3114B0: b       0x7F3114C0
    {
            goto label_7F3114C0;
    }

label_7F3114B4:
    ctx->pc = 0x7F3114B4u;
    ctx->downcount -= 2;
    // 7F3114B4: lwz     r29, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3114B8:
    // 7F3114B8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3114BCu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3114BC:
    ctx->downcount -= 1;
    // 7F3114BC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3114C0:
    ctx->downcount -= 2;
    // 7F3114C0: cmplwi  r3, 0x0000
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

label_7F3114C4:
    // 7F3114C4: bc    4, 2, 0x7F3114B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3114B4u;
                return;
            }
            goto label_7F3114B4;
        }
    }

label_7F3114C8:
    ctx->downcount -= 4;
    // 7F3114C8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3114CC:
    // 7F3114CC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3114D0:
    // 7F3114D0: cmpwi   r30, 5
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

label_7F3114D4:
    // 7F3114D4: bc    12, 0, 0x7F3114A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3114A4u;
                return;
            }
            goto label_7F3114A4;
        }
    }

label_7F3114D8:
    ctx->pc = 0x7F3114D8u;
    ctx->downcount -= 3;
    // 7F3114D8: addis   r3, r28, 4
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(4) << 16);

label_7F3114DC:
    ctx->pc = 0x7F3114DCu;
    // 7F3114DC: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F3114E0:
    ctx->pc = 0x7F3114E0u;
    // 7F3114E0: bl      0x7F319298
    {
            ctx->lr = 0x7F3114E4u;
            ctx->pc = 0x7F319298u;
            return;
    }

label_7F3114E4:
    ctx->pc = 0x7F3114E4u;
    ctx->downcount -= 16;
    // 7F3114E4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3114E8:
    ctx->pc = 0x7F3114E8u;
    // 7F3114E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3114EC:
    ctx->pc = 0x7F3114ECu;
    // 7F3114EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3114F0:
    ctx->pc = 0x7F3114F0u;
    // 7F3114F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3114F4:
    ctx->pc = 0x7F3114F4u;
    // 7F3114F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3114F8:
    ctx->pc = 0x7F3114F8u;
    ctx->downcount -= 18;
    // 7F3114F8: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3114FC:
    ctx->pc = 0x7F3114FCu;
    // 7F3114FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F311500:
    ctx->pc = 0x7F311500u;
    // 7F311500: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311504:
    ctx->pc = 0x7F311504u;
    // 7F311504: stmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F311508:
    ctx->pc = 0x7F311508u;
    // 7F311508: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31150C:
    ctx->pc = 0x7F31150Cu;
    // 7F31150C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F311510:
    ctx->pc = 0x7F311510u;
    // 7F311510: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F311514:
    ctx->pc = 0x7F311514u;
    // 7F311514: bl      0x7F3C664C
    {
            ctx->lr = 0x7F311518u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F311518:
    ctx->pc = 0x7F311518u;
    ctx->downcount -= 2;
    // 7F311518: cmplwi  r3, 0x0000
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

label_7F31151C:
    ctx->pc = 0x7F31151Cu;
    // 7F31151C: bc    12, 2, 0x7F311530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311530;
        }
    }

label_7F311520:
    ctx->pc = 0x7F311520u;
    ctx->downcount -= 1;
    // 7F311520: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311524u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311524:
    ctx->pc = 0x7F311524u;
    ctx->downcount -= 2;
    // 7F311524: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311528:
    ctx->pc = 0x7F311528u;
    // 7F311528: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31152Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31152C:
    ctx->pc = 0x7F31152Cu;
    ctx->downcount -= 1;
    // 7F31152C: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311530:
    ctx->pc = 0x7F311530u;
    ctx->downcount -= 3;
    // 7F311530: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311534:
    ctx->pc = 0x7F311534u;
    // 7F311534: cmpwi   r0, 3
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

label_7F311538:
    ctx->pc = 0x7F311538u;
    // 7F311538: bc    12, 2, 0x7F311638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311638;
        }
    }

label_7F31153C:
    ctx->pc = 0x7F31153Cu;
    ctx->downcount -= 1;
    // 7F31153C: bc    4, 0, 0x7F311558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311558;
        }
    }

label_7F311540:
    ctx->pc = 0x7F311540u;
    ctx->downcount -= 2;
    // 7F311540: cmpwi   r0, 1
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

label_7F311544:
    ctx->pc = 0x7F311544u;
    // 7F311544: bc    12, 2, 0x7F311598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311598;
        }
    }

label_7F311548:
    ctx->pc = 0x7F311548u;
    ctx->downcount -= 1;
    // 7F311548: bc    4, 0, 0x7F3115E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3115E8;
        }
    }

label_7F31154C:
    ctx->pc = 0x7F31154Cu;
    ctx->downcount -= 2;
    // 7F31154C: cmpwi   r0, 0
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

label_7F311550:
    ctx->pc = 0x7F311550u;
    // 7F311550: bc    4, 0, 0x7F311568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311568;
        }
    }

label_7F311554:
    ctx->pc = 0x7F311554u;
    ctx->downcount -= 1;
    // 7F311554: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F311558:
    ctx->pc = 0x7F311558u;
    ctx->downcount -= 2;
    // 7F311558: cmpwi   r0, 5
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

label_7F31155C:
    ctx->pc = 0x7F31155Cu;
    // 7F31155C: bc    12, 2, 0x7F3119C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3119C0;
        }
    }

label_7F311560:
    ctx->pc = 0x7F311560u;
    ctx->downcount -= 1;
    // 7F311560: bc    4, 0, 0x7F311A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311A04;
        }
    }

label_7F311564:
    ctx->pc = 0x7F311564u;
    ctx->downcount -= 1;
    // 7F311564: b       0x7F311954
    {
            goto label_7F311954;
    }

label_7F311568:
    ctx->pc = 0x7F311568u;
    ctx->downcount -= 11;
    // 7F311568: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F31156C:
    ctx->pc = 0x7F31156Cu;
    // 7F31156C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311570:
    ctx->pc = 0x7F311570u;
    // 7F311570: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311574:
    ctx->pc = 0x7F311574u;
    // 7F311574: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F311578:
    ctx->pc = 0x7F311578u;
    // 7F311578: addi    r3, r3, 8506
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8506);

label_7F31157C:
    ctx->pc = 0x7F31157Cu;
    // 7F31157C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F311580:
    ctx->pc = 0x7F311580u;
    // 7F311580: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311584:
    ctx->pc = 0x7F311584u;
    // 7F311584: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311588:
    ctx->pc = 0x7F311588u;
    // 7F311588: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F31158C:
    ctx->pc = 0x7F31158Cu;
    // 7F31158C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311590:
    ctx->pc = 0x7F311590u;
    // 7F311590: bl      0x7F31435C
    {
            ctx->lr = 0x7F311594u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F311594:
    ctx->pc = 0x7F311594u;
    ctx->downcount -= 1;
    // 7F311594: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F311598:
    ctx->pc = 0x7F311598u;
    ctx->downcount -= 11;
    // 7F311598: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F31159C:
    ctx->pc = 0x7F31159Cu;
    // 7F31159C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3115A0:
    ctx->pc = 0x7F3115A0u;
    // 7F3115A0: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3115A4:
    ctx->pc = 0x7F3115A4u;
    // 7F3115A4: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F3115A8:
    ctx->pc = 0x7F3115A8u;
    // 7F3115A8: addi    r3, r3, 8506
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8506);

label_7F3115AC:
    ctx->pc = 0x7F3115ACu;
    // 7F3115AC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F3115B0:
    ctx->pc = 0x7F3115B0u;
    // 7F3115B0: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3115B4:
    ctx->pc = 0x7F3115B4u;
    // 7F3115B4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F3115B8:
    ctx->pc = 0x7F3115B8u;
    // 7F3115B8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F3115BC:
    ctx->pc = 0x7F3115BCu;
    // 7F3115BC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3115C0:
    ctx->pc = 0x7F3115C0u;
    // 7F3115C0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3115C4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3115C4:
    ctx->pc = 0x7F3115C4u;
    ctx->downcount -= 8;
    // 7F3115C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3115C8:
    ctx->pc = 0x7F3115C8u;
    // 7F3115C8: lis     r3, 164
    ctx->gpr[3] = ((u32)(s32)(164) << 16);

label_7F3115CC:
    ctx->pc = 0x7F3115CCu;
    // 7F3115CC: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3115D0:
    ctx->pc = 0x7F3115D0u;
    // 7F3115D0: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F3115D4:
    ctx->pc = 0x7F3115D4u;
    // 7F3115D4: addi    r5, r3, 631
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(631);

label_7F3115D8:
    ctx->pc = 0x7F3115D8u;
    // 7F3115D8: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3115DC:
    ctx->pc = 0x7F3115DCu;
    // 7F3115DC: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F3115E0:
    ctx->pc = 0x7F3115E0u;
    // 7F3115E0: bl      0x7F319418
    {
            ctx->lr = 0x7F3115E4u;
            ctx->pc = 0x7F319418u;
            return;
    }

label_7F3115E4:
    ctx->pc = 0x7F3115E4u;
    ctx->downcount -= 1;
    // 7F3115E4: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F3115E8:
    ctx->pc = 0x7F3115E8u;
    ctx->downcount -= 11;
    // 7F3115E8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F3115EC:
    ctx->pc = 0x7F3115ECu;
    // 7F3115EC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3115F0:
    ctx->pc = 0x7F3115F0u;
    // 7F3115F0: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3115F4:
    ctx->pc = 0x7F3115F4u;
    // 7F3115F4: lis     r3, 81
    ctx->gpr[3] = ((u32)(s32)(81) << 16);

label_7F3115F8:
    ctx->pc = 0x7F3115F8u;
    // 7F3115F8: addi    r3, r3, 8506
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8506);

label_7F3115FC:
    ctx->pc = 0x7F3115FCu;
    // 7F3115FC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F311600:
    ctx->pc = 0x7F311600u;
    // 7F311600: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311604:
    ctx->pc = 0x7F311604u;
    // 7F311604: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311608:
    ctx->pc = 0x7F311608u;
    // 7F311608: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F31160C:
    ctx->pc = 0x7F31160Cu;
    // 7F31160C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311610:
    ctx->pc = 0x7F311610u;
    // 7F311610: bl      0x7F31435C
    {
            ctx->lr = 0x7F311614u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F311614:
    ctx->pc = 0x7F311614u;
    ctx->downcount -= 8;
    // 7F311614: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F311618:
    ctx->pc = 0x7F311618u;
    // 7F311618: lis     r3, 164
    ctx->gpr[3] = ((u32)(s32)(164) << 16);

label_7F31161C:
    ctx->pc = 0x7F31161Cu;
    // 7F31161C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311620:
    ctx->pc = 0x7F311620u;
    // 7F311620: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311624:
    ctx->pc = 0x7F311624u;
    // 7F311624: addi    r5, r3, 631
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(631);

label_7F311628:
    ctx->pc = 0x7F311628u;
    // 7F311628: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31162C:
    ctx->pc = 0x7F31162Cu;
    // 7F31162C: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F311630:
    ctx->pc = 0x7F311630u;
    // 7F311630: bl      0x7F319418
    {
            ctx->lr = 0x7F311634u;
            ctx->pc = 0x7F319418u;
            return;
    }

label_7F311634:
    ctx->pc = 0x7F311634u;
    ctx->downcount -= 1;
    // 7F311634: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F311638:
    ctx->pc = 0x7F311638u;
    ctx->downcount -= 15;
    // 7F311638: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F31163C:
    ctx->pc = 0x7F31163Cu;
    // 7F31163C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F311640:
    ctx->pc = 0x7F311640u;
    // 7F311640: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311644:
    ctx->pc = 0x7F311644u;
    // 7F311644: lis     r3, 126
    ctx->gpr[3] = ((u32)(s32)(126) << 16);

label_7F311648:
    ctx->pc = 0x7F311648u;
    // 7F311648: addis   r6, r31, 3
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F31164C:
    ctx->pc = 0x7F31164Cu;
    // 7F31164C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F311650:
    ctx->pc = 0x7F311650u;
    // 7F311650: stw     r0, -26024(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311654:
    ctx->pc = 0x7F311654u;
    // 7F311654: addi    r3, r3, -29295
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29295);

label_7F311658:
    ctx->pc = 0x7F311658u;
    // 7F311658: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F31165C:
    ctx->pc = 0x7F31165Cu;
    // 7F31165C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311660:
    ctx->pc = 0x7F311660u;
    // 7F311660: stw     r22, -26020(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F311664:
    ctx->pc = 0x7F311664u;
    // 7F311664: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F311668:
    ctx->pc = 0x7F311668u;
    // 7F311668: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31166C:
    ctx->pc = 0x7F31166Cu;
    // 7F31166C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311670:
    ctx->pc = 0x7F311670u;
    // 7F311670: bl      0x7F31435C
    {
            ctx->lr = 0x7F311674u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F311674:
    ctx->pc = 0x7F311674u;
    ctx->downcount -= 3;
    // 7F311674: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F311678:
    ctx->pc = 0x7F311678u;
    // 7F311678: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31167C:
    ctx->pc = 0x7F31167Cu;
    // 7F31167C: bl      0x7F3CA8C4
    {
            ctx->lr = 0x7F311680u;
            ctx->pc = 0x7F3CA8C4u;
            return;
    }

label_7F311680:
    ctx->pc = 0x7F311680u;
    ctx->downcount -= 5;
    // 7F311680: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311684:
    ctx->pc = 0x7F311684u;
    // 7F311684: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311688:
    ctx->pc = 0x7F311688u;
    // 7F311688: addi    r4, r4, -9472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9472);

label_7F31168C:
    ctx->pc = 0x7F31168Cu;
    // 7F31168C: addi    r3, r3, -9476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9476);

label_7F311690:
    ctx->pc = 0x7F311690u;
    // 7F311690: bl      0x7F07B92C
    {
            ctx->lr = 0x7F311694u;
            ctx->pc = 0x7F07B92Cu;
            return;
    }

label_7F311694:
    ctx->pc = 0x7F311694u;
    ctx->downcount -= 10;
    // 7F311694: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F311698:
    ctx->pc = 0x7F311698u;
    // 7F311698: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F31169C:
    ctx->pc = 0x7F31169Cu;
    // 7F31169C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3116A0:
    ctx->pc = 0x7F3116A0u;
    // 7F3116A0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F3116A4:
    ctx->pc = 0x7F3116A4u;
    // 7F3116A4: stw     r5, -26012(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26012);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3116A8:
    ctx->pc = 0x7F3116A8u;
    // 7F3116A8: addi    r4, r3, -3392
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3392);

label_7F3116AC:
    ctx->pc = 0x7F3116ACu;
    // 7F3116AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3116B0:
    ctx->pc = 0x7F3116B0u;
    // 7F3116B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3116B4:
    ctx->pc = 0x7F3116B4u;
    // 7F3116B4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3116B8:
    ctx->pc = 0x7F3116B8u;
    ctx->downcount -= 3;
    // 7F3116B8: lwzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3116BC:
    // 7F3116BC: cmplwi  r0, 0x0000
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

label_7F3116C0:
    // 7F3116C0: bc    4, 2, 0x7F3116D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3116D8;
        }
    }

label_7F3116C4:
    ctx->downcount -= 5;
    // 7F3116C4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3116C8:
    // 7F3116C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3116CC:
    ctx->pc = 0x7F3116CCu;
    // 7F3116CC: stw     r5, -26008(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26008);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3116D0:
    ctx->pc = 0x7F3116D0u;
    // 7F3116D0: stw     r0, -26012(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3116D4:
    // 7F3116D4: b       0x7F3116E4
    {
            goto label_7F3116E4;
    }

label_7F3116D8:
    ctx->downcount -= 3;
    // 7F3116D8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3116DC:
    // 7F3116DC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3116E0:
    // 7F3116E0: bc    16, 0, 0x7F3116B8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3116B8u;
                return;
            }
            goto label_7F3116B8;
        }
    }

label_7F3116E4:
    ctx->pc = 0x7F3116E4u;
    ctx->downcount -= 4;
    // 7F3116E4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3116E8:
    ctx->pc = 0x7F3116E8u;
    // 7F3116E8: lwz     r0, -26012(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3116EC:
    ctx->pc = 0x7F3116ECu;
    // 7F3116EC: cmpwi   r0, 0
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

label_7F3116F0:
    ctx->pc = 0x7F3116F0u;
    // 7F3116F0: bc    12, 2, 0x7F311A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311A04;
        }
    }

label_7F3116F4:
    ctx->pc = 0x7F3116F4u;
    ctx->downcount -= 1;
    // 7F3116F4: bl      0x8004DB8C
    {
            ctx->lr = 0x7F3116F8u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F3116F8:
    ctx->pc = 0x7F3116F8u;
    ctx->downcount -= 5;
    // 7F3116F8: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3116FC:
    ctx->pc = 0x7F3116FCu;
    // 7F3116FC: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F311700:
    ctx->pc = 0x7F311700u;
    // 7F311700: addi    r0, r3, -69
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-69);

label_7F311704:
    ctx->pc = 0x7F311704u;
    // 7F311704: cmplwi  r0, 0x0012
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0012u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F311708:
    ctx->pc = 0x7F311708u;
    // 7F311708: bc    12, 1, 0x7F31177C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31177C;
        }
    }

label_7F31170C:
    ctx->pc = 0x7F31170Cu;
    ctx->downcount -= 7;
    // 7F31170C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F311710:
    ctx->pc = 0x7F311710u;
    // 7F311710: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F311714:
    ctx->pc = 0x7F311714u;
    // 7F311714: addi    r3, r3, -26500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26500);

label_7F311718:
    ctx->pc = 0x7F311718u;
    // 7F311718: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31171C:
    ctx->pc = 0x7F31171Cu;
    // 7F31171C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F311720:
    ctx->pc = 0x7F311720u;
    // 7F311720: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F311724:
    ctx->pc = 0x7F311724u;
    ctx->downcount -= 5;
    // 7F311724: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311728:
    ctx->pc = 0x7F311728u;
    // 7F311728: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31172C:
    ctx->pc = 0x7F31172Cu;
    // 7F31172C: stw     r0, -10572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311730:
    ctx->pc = 0x7F311730u;
    // 7F311730: stw     r0, -10576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311734:
    ctx->pc = 0x7F311734u;
    // 7F311734: b       0x7F31177C
    {
            goto label_7F31177C;
    }

label_7F311738:
    ctx->pc = 0x7F311738u;
    ctx->downcount -= 6;
    // 7F311738: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F31173C:
    ctx->pc = 0x7F31173Cu;
    // 7F31173C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F311740:
    ctx->pc = 0x7F311740u;
    // 7F311740: stw     r0, -10572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311744:
    ctx->pc = 0x7F311744u;
    // 7F311744: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311748:
    ctx->pc = 0x7F311748u;
    // 7F311748: stw     r0, -10576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31174C:
    ctx->pc = 0x7F31174Cu;
    // 7F31174C: b       0x7F31177C
    {
            goto label_7F31177C;
    }

label_7F311750:
    ctx->pc = 0x7F311750u;
    ctx->downcount -= 6;
    // 7F311750: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311754:
    ctx->pc = 0x7F311754u;
    // 7F311754: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F311758:
    ctx->pc = 0x7F311758u;
    // 7F311758: stw     r0, -10572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31175C:
    ctx->pc = 0x7F31175Cu;
    // 7F31175C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311760:
    ctx->pc = 0x7F311760u;
    // 7F311760: stw     r0, -10576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311764:
    ctx->pc = 0x7F311764u;
    // 7F311764: b       0x7F31177C
    {
            goto label_7F31177C;
    }

label_7F311768:
    ctx->pc = 0x7F311768u;
    ctx->downcount -= 5;
    // 7F311768: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F31176C:
    ctx->pc = 0x7F31176Cu;
    // 7F31176C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F311770:
    ctx->pc = 0x7F311770u;
    // 7F311770: stw     r0, -10572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311774:
    ctx->pc = 0x7F311774u;
    // 7F311774: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311778:
    ctx->pc = 0x7F311778u;
    // 7F311778: stw     r0, -10576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31177C:
    ctx->pc = 0x7F31177Cu;
    ctx->downcount -= 11;
    // 7F31177C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311780:
    ctx->pc = 0x7F311780u;
    // 7F311780: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F311784:
    ctx->pc = 0x7F311784u;
    // 7F311784: lwz     r24, -26020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26020);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F311788:
    ctx->pc = 0x7F311788u;
    // 7F311788: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31178C:
    ctx->pc = 0x7F31178Cu;
    // 7F31178C: addi    r23, r4, -3392
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-3392);

label_7F311790:
    ctx->pc = 0x7F311790u;
    // 7F311790: addi    r20, r1, 76
    ctx->gpr[20] = ctx->gpr[1] + (u32)(s32)(76);

label_7F311794:
    ctx->pc = 0x7F311794u;
    // 7F311794: srawi r21, r24, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[24];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[21] = value;
        } else if (sh > 31) {
            ctx->gpr[21] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[21] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F311798:
    ctx->pc = 0x7F311798u;
    // 7F311798: addi    r19, r3, -3432
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(-3432);

label_7F31179C:
    ctx->pc = 0x7F31179Cu;
    // 7F31179C: addi    r18, r1, 36
    ctx->gpr[18] = ctx->gpr[1] + (u32)(s32)(36);

label_7F3117A0:
    ctx->pc = 0x7F3117A0u;
    // 7F3117A0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F3117A4:
    ctx->pc = 0x7F3117A4u;
    // 7F3117A4: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F3117A8:
    ctx->pc = 0x7F3117A8u;
    ctx->downcount -= 2;
    // 7F3117A8: lwzx    r3, r23, r22
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[22];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3117AC:
    // 7F3117AC: bl      0x7F30FD60
    {
            ctx->lr = 0x7F3117B0u;
            ctx->pc = 0x7F30FD60u;
            return;
    }

label_7F3117B0:
    ctx->pc = 0x7F3117B0u;
    ctx->downcount -= 8;
    // 7F3117B0: lwzx    r0, r19, r22
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[22];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3117B4:
    // 7F3117B4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F3117B8:
    // 7F3117B8: cmpwi   r25, 10
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3117BC:
    ctx->pc = 0x7F3117BCu;
    // 7F3117BC: stwx    r3, r20, r22
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3117C0:
    // 7F3117C0: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F3117C4:
    ctx->pc = 0x7F3117C4u;
    // 7F3117C4: stwx    r0, r18, r22
    {
        u32 ea = ctx->gpr[18] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3117C8:
    // 7F3117C8: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F3117CC:
    // 7F3117CC: bc    12, 0, 0x7F3117A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3117A8u;
                return;
            }
            goto label_7F3117A8;
        }
    }

label_7F3117D0:
    ctx->pc = 0x7F3117D0u;
    ctx->downcount -= 5;
    // 7F3117D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3117D4:
    ctx->pc = 0x7F3117D4u;
    // 7F3117D4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3117D8:
    ctx->pc = 0x7F3117D8u;
    // 7F3117D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3117DC:
    ctx->pc = 0x7F3117DCu;
    // 7F3117DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3117E0:
    ctx->pc = 0x7F3117E0u;
    // 7F3117E0: bl      0x7F012018
    {
            ctx->lr = 0x7F3117E4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F3117E4:
    ctx->pc = 0x7F3117E4u;
    ctx->downcount -= 79;
    // 7F3117E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3117E8:
    ctx->pc = 0x7F3117E8u;
    // 7F3117E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3117EC:
    ctx->pc = 0x7F3117ECu;
    // 7F3117EC: lwz     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3117F0:
    ctx->pc = 0x7F3117F0u;
    // 7F3117F0: addc   r8, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F3117F4:
    ctx->pc = 0x7F3117F4u;
    // 7F3117F4: lwz     r22, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F3117F8:
    ctx->pc = 0x7F3117F8u;
    // 7F3117F8: rlwinm r0, r0, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0xFFFFFC00u;
    }

label_7F3117FC:
    ctx->pc = 0x7F3117FCu;
    // 7F3117FC: rlwinm r4, r4, 11, 0, 20
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 11u) & 0xFFFFF800u;
    }

label_7F311800:
    ctx->pc = 0x7F311800u;
    // 7F311800: lwz     r26, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F311804:
    ctx->pc = 0x7F311804u;
    // 7F311804: rlwinm r3, r22, 25, 7, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 25u) & 0x01FFFFFFu;
    }

label_7F311808:
    ctx->pc = 0x7F311808u;
    // 7F311808: lwz     r25, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F31180C:
    ctx->pc = 0x7F31180Cu;
    // 7F31180C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F311810:
    ctx->pc = 0x7F311810u;
    // 7F311810: lwz     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F311814:
    ctx->pc = 0x7F311814u;
    // 7F311814: or   r20, r4, r0
    {
        ctx->gpr[20] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F311818:
    ctx->pc = 0x7F311818u;
    // 7F311818: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31181C:
    ctx->pc = 0x7F31181Cu;
    // 7F31181C: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311820:
    ctx->pc = 0x7F311820u;
    // 7F311820: rlwinm r28, r5, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F311824:
    ctx->pc = 0x7F311824u;
    // 7F311824: rlwinm r19, r0, 12, 0, 19
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F311828:
    ctx->pc = 0x7F311828u;
    // 7F311828: lwz     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F31182C:
    ctx->pc = 0x7F31182Cu;
    // 7F31182C: or   r21, r19, r20
    {
        ctx->gpr[21] = ctx->gpr[19] | ctx->gpr[20];
    }

label_7F311830:
    ctx->pc = 0x7F311830u;
    // 7F311830: lwz     r23, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F311834:
    ctx->pc = 0x7F311834u;
    // 7F311834: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311838:
    ctx->pc = 0x7F311838u;
    // 7F311838: rlwinm r30, r4, 4, 0, 27
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F31183C:
    ctx->pc = 0x7F31183Cu;
    // 7F31183C: lwz     r7, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F311840:
    ctx->pc = 0x7F311840u;
    // 7F311840: rlwinm r27, r26, 17, 15, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[26], 17u) & 0x0001FFFFu;
    }

label_7F311844:
    ctx->pc = 0x7F311844u;
    // 7F311844: lwz     r18, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F311848:
    ctx->pc = 0x7F311848u;
    // 7F311848: rlwinm r19, r26, 17, 0, 14
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[26], 17u) & 0xFFFE0000u;
    }

label_7F31184C:
    ctx->pc = 0x7F31184Cu;
    // 7F31184C: rlwinm r11, r3, 6, 0, 25
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_7F311850:
    ctx->pc = 0x7F311850u;
    // 7F311850: rlwinm r12, r24, 21, 11, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[24], 21u) & 0x001FFFFFu;
    }

label_7F311854:
    ctx->pc = 0x7F311854u;
    // 7F311854: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311858:
    ctx->pc = 0x7F311858u;
    // 7F311858: rlwinm r9, r7, 8, 0, 23
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0xFFFFFF00u;
    }

label_7F31185C:
    ctx->pc = 0x7F31185Cu;
    // 7F31185C: rlwinm r10, r23, 23, 9, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[23], 23u) & 0x007FFFFFu;
    }

label_7F311860:
    ctx->pc = 0x7F311860u;
    // 7F311860: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311864:
    ctx->pc = 0x7F311864u;
    // 7F311864: or   r12, r12, r11
    {
        ctx->gpr[12] = ctx->gpr[12] | ctx->gpr[11];
    }

label_7F311868:
    ctx->pc = 0x7F311868u;
    // 7F311868: lwz     r20, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F31186C:
    ctx->pc = 0x7F31186Cu;
    // 7F31186C: rlwinm r29, r25, 19, 13, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[25], 19u) & 0x0007FFFFu;
    }

label_7F311870:
    ctx->pc = 0x7F311870u;
    // 7F311870: rlwinm r26, r25, 19, 0, 12
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[25], 19u) & 0xFFF80000u;
    }

label_7F311874:
    ctx->pc = 0x7F311874u;
    // 7F311874: or   r25, r27, r28
    {
        ctx->gpr[25] = ctx->gpr[27] | ctx->gpr[28];
    }

label_7F311878:
    ctx->pc = 0x7F311878u;
    // 7F311878: or   r27, r20, r19
    {
        ctx->gpr[27] = ctx->gpr[20] | ctx->gpr[19];
    }

label_7F31187C:
    ctx->pc = 0x7F31187Cu;
    // 7F31187C: or   r19, r29, r30
    {
        ctx->gpr[19] = ctx->gpr[29] | ctx->gpr[30];
    }

label_7F311880:
    ctx->pc = 0x7F311880u;
    // 7F311880: rlwinm r20, r24, 21, 0, 10
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[24], 21u) & 0xFFE00000u;
    }

label_7F311884:
    ctx->pc = 0x7F311884u;
    // 7F311884: or   r30, r20, r19
    {
        ctx->gpr[30] = ctx->gpr[20] | ctx->gpr[19];
    }

label_7F311888:
    ctx->pc = 0x7F311888u;
    // 7F311888: or   r29, r26, r25
    {
        ctx->gpr[29] = ctx->gpr[26] | ctx->gpr[25];
    }

label_7F31188C:
    ctx->pc = 0x7F31188Cu;
    // 7F31188C: rlwinm r19, r23, 23, 0, 8
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[23], 23u) & 0xFF800000u;
    }

label_7F311890:
    ctx->pc = 0x7F311890u;
    // 7F311890: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311894:
    ctx->pc = 0x7F311894u;
    // 7F311894: or   r10, r10, r9
    {
        ctx->gpr[10] = ctx->gpr[10] | ctx->gpr[9];
    }

label_7F311898:
    ctx->pc = 0x7F311898u;
    // 7F311898: rlwinm r11, r22, 25, 0, 6
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[22], 25u) & 0xFE000000u;
    }

label_7F31189C:
    ctx->pc = 0x7F31189Cu;
    // 7F31189C: or   r12, r19, r12
    {
        ctx->gpr[12] = ctx->gpr[19] | ctx->gpr[12];
    }

label_7F3118A0:
    ctx->pc = 0x7F3118A0u;
    // 7F3118A0: rlwinm r18, r18, 13, 0, 18
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[18], 13u) & 0xFFFFE000u;
    }

label_7F3118A4:
    ctx->pc = 0x7F3118A4u;
    // 7F3118A4: rlwinm r9, r0, 14, 0, 17
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[0], 14u) & 0xFFFFC000u;
    }

label_7F3118A8:
    ctx->pc = 0x7F3118A8u;
    // 7F3118A8: or   r10, r11, r10
    {
        ctx->gpr[10] = ctx->gpr[11] | ctx->gpr[10];
    }

label_7F3118AC:
    ctx->pc = 0x7F3118ACu;
    // 7F3118AC: or   r0, r18, r21
    {
        ctx->gpr[0] = ctx->gpr[18] | ctx->gpr[21];
    }

label_7F3118B0:
    ctx->pc = 0x7F3118B0u;
    // 7F3118B0: lwz     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3118B4:
    ctx->pc = 0x7F3118B4u;
    // 7F3118B4: or   r0, r9, r0
    {
        ctx->gpr[0] = ctx->gpr[9] | ctx->gpr[0];
    }

label_7F3118B8:
    ctx->pc = 0x7F3118B8u;
    // 7F3118B8: rlwinm r3, r3, 15, 0, 16
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 15u) & 0xFFFF8000u;
    }

label_7F3118BC:
    ctx->pc = 0x7F3118BCu;
    // 7F3118BC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F3118C0:
    ctx->pc = 0x7F3118C0u;
    // 7F3118C0: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F3118C4:
    ctx->pc = 0x7F3118C4u;
    // 7F3118C4: lwz     r6, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3118C8:
    ctx->pc = 0x7F3118C8u;
    // 7F3118C8: rlwinm r3, r5, 17, 0, 14
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 17u) & 0xFFFE0000u;
    }

label_7F3118CC:
    ctx->pc = 0x7F3118CCu;
    // 7F3118CC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F3118D0:
    ctx->pc = 0x7F3118D0u;
    // 7F3118D0: stw     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3118D4:
    ctx->pc = 0x7F3118D4u;
    // 7F3118D4: lwz     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3118D8:
    ctx->pc = 0x7F3118D8u;
    // 7F3118D8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F3118DC:
    ctx->pc = 0x7F3118DCu;
    // 7F3118DC: rlwinm r5, r6, 18, 0, 13
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0xFFFC0000u;
    }

label_7F3118E0:
    ctx->pc = 0x7F3118E0u;
    // 7F3118E0: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3118E4:
    ctx->pc = 0x7F3118E4u;
    // 7F3118E4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F3118E8:
    ctx->pc = 0x7F3118E8u;
    // 7F3118E8: rlwinm r3, r7, 19, 0, 12
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 19u) & 0xFFF80000u;
    }

label_7F3118EC:
    ctx->pc = 0x7F3118ECu;
    // 7F3118EC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F3118F0:
    ctx->pc = 0x7F3118F0u;
    // 7F3118F0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3118F4:
    ctx->pc = 0x7F3118F4u;
    // 7F3118F4: addis   r9, r31, 4
    ctx->gpr[9] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F3118F8:
    ctx->pc = 0x7F3118F8u;
    // 7F3118F8: rlwinm r5, r8, 22, 0, 9
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[8], 22u) & 0xFFC00000u;
    }

label_7F3118FC:
    ctx->pc = 0x7F3118FCu;
    // 7F3118FC: stw     r12, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F311900:
    ctx->pc = 0x7F311900u;
    // 7F311900: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F311904:
    ctx->pc = 0x7F311904u;
    // 7F311904: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F311908:
    ctx->pc = 0x7F311908u;
    // 7F311908: lwz     r4, -10572(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-10572);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31190C:
    ctx->pc = 0x7F31190Cu;
    // 7F31190C: rlwinm r4, r4, 20, 0, 11
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 20u) & 0xFFF00000u;
    }

label_7F311910:
    ctx->pc = 0x7F311910u;
    // 7F311910: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F311914:
    ctx->pc = 0x7F311914u;
    // 7F311914: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F311918:
    ctx->pc = 0x7F311918u;
    // 7F311918: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31191C:
    ctx->pc = 0x7F31191Cu;
    // 7F31191C: bl      0x7F2F84B8
    {
            ctx->lr = 0x7F311920u;
            ctx->pc = 0x7F2F84B8u;
            return;
    }

label_7F311920:
    ctx->pc = 0x7F311920u;
    ctx->downcount -= 6;
    // 7F311920: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311924:
    ctx->pc = 0x7F311924u;
    // 7F311924: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F311928:
    ctx->pc = 0x7F311928u;
    // 7F311928: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F31192C:
    ctx->pc = 0x7F31192Cu;
    // 7F31192C: li      r6, 42
    ctx->gpr[6] = (u32)(s32)(42);

label_7F311930:
    ctx->pc = 0x7F311930u;
    // 7F311930: addi    r4, r4, -26004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26004);

label_7F311934:
    ctx->pc = 0x7F311934u;
    // 7F311934: bl      0x7F2F8584
    {
            ctx->lr = 0x7F311938u;
            ctx->pc = 0x7F2F8584u;
            return;
    }

label_7F311938:
    ctx->pc = 0x7F311938u;
    ctx->downcount -= 6;
    // 7F311938: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F31193C:
    ctx->pc = 0x7F31193Cu;
    // 7F31193C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311940:
    ctx->pc = 0x7F311940u;
    // 7F311940: stb     r0, -25962(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25962);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F311944:
    ctx->pc = 0x7F311944u;
    // 7F311944: li      r4, 42
    ctx->gpr[4] = (u32)(s32)(42);

label_7F311948:
    ctx->pc = 0x7F311948u;
    // 7F311948: addi    r3, r3, -26004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26004);

label_7F31194C:
    ctx->pc = 0x7F31194Cu;
    // 7F31194C: bl      0x7F2F8648
    {
            ctx->lr = 0x7F311950u;
            ctx->pc = 0x7F2F8648u;
            return;
    }

label_7F311950:
    ctx->pc = 0x7F311950u;
    ctx->downcount -= 1;
    // 7F311950: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F311954:
    ctx->pc = 0x7F311954u;
    ctx->downcount -= 9;
    // 7F311954: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311958:
    ctx->pc = 0x7F311958u;
    // 7F311958: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31195C:
    ctx->pc = 0x7F31195Cu;
    // 7F31195C: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311960:
    ctx->pc = 0x7F311960u;
    // 7F311960: cmpwi   r22, 1
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F311964:
    ctx->pc = 0x7F311964u;
    // 7F311964: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311968:
    ctx->pc = 0x7F311968u;
    // 7F311968: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31196C:
    ctx->pc = 0x7F31196Cu;
    // 7F31196C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311970:
    ctx->pc = 0x7F311970u;
    // 7F311970: stw     r22, -25956(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25956);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F311974:
    ctx->pc = 0x7F311974u;
    // 7F311974: bc    12, 2, 0x7F3119A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3119A4;
        }
    }

label_7F311978:
    ctx->pc = 0x7F311978u;
    ctx->downcount -= 1;
    // 7F311978: bc    4, 0, 0x7F311A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311A04;
        }
    }

label_7F31197C:
    ctx->pc = 0x7F31197Cu;
    ctx->downcount -= 2;
    // 7F31197C: cmpwi   r22, 0
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

label_7F311980:
    ctx->pc = 0x7F311980u;
    // 7F311980: bc    4, 0, 0x7F311988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F311988;
        }
    }

label_7F311984:
    ctx->pc = 0x7F311984u;
    ctx->downcount -= 1;
    // 7F311984: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F311988:
    ctx->pc = 0x7F311988u;
    ctx->downcount -= 6;
    // 7F311988: lis     r3, 205
    ctx->gpr[3] = ((u32)(s32)(205) << 16);

label_7F31198C:
    ctx->pc = 0x7F31198Cu;
    // 7F31198C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F311990:
    ctx->pc = 0x7F311990u;
    // 7F311990: addi    r3, r3, 1773
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1773);

label_7F311994:
    ctx->pc = 0x7F311994u;
    // 7F311994: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311998:
    ctx->pc = 0x7F311998u;
    // 7F311998: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F31199C:
    ctx->pc = 0x7F31199Cu;
    // 7F31199C: bl      0x7F31435C
    {
            ctx->lr = 0x7F3119A0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3119A0:
    ctx->pc = 0x7F3119A0u;
    ctx->downcount -= 1;
    // 7F3119A0: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F3119A4:
    ctx->pc = 0x7F3119A4u;
    ctx->downcount -= 6;
    // 7F3119A4: lis     r3, 28
    ctx->gpr[3] = ((u32)(s32)(28) << 16);

label_7F3119A8:
    ctx->pc = 0x7F3119A8u;
    // 7F3119A8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F3119AC:
    ctx->pc = 0x7F3119ACu;
    // 7F3119AC: addi    r3, r3, -17050
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17050);

label_7F3119B0:
    ctx->pc = 0x7F3119B0u;
    // 7F3119B0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F3119B4:
    ctx->pc = 0x7F3119B4u;
    // 7F3119B4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F3119B8:
    ctx->pc = 0x7F3119B8u;
    // 7F3119B8: bl      0x7F31435C
    {
            ctx->lr = 0x7F3119BCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3119BC:
    ctx->pc = 0x7F3119BCu;
    ctx->downcount -= 1;
    // 7F3119BC: b       0x7F311A04
    {
            goto label_7F311A04;
    }

label_7F3119C0:
    ctx->pc = 0x7F3119C0u;
    ctx->downcount -= 17;
    // 7F3119C0: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F3119C4:
    ctx->pc = 0x7F3119C4u;
    // 7F3119C4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3119C8:
    ctx->pc = 0x7F3119C8u;
    // 7F3119C8: stw     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3119CC:
    ctx->pc = 0x7F3119CCu;
    // 7F3119CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3119D0:
    ctx->pc = 0x7F3119D0u;
    // 7F3119D0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F3119D4:
    ctx->pc = 0x7F3119D4u;
    // 7F3119D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3119D8:
    ctx->pc = 0x7F3119D8u;
    // 7F3119D8: stw     r0, -25948(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3119DC:
    ctx->pc = 0x7F3119DCu;
    // 7F3119DC: rlwinm r0, r22, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[22], 2u) & 0xFFFFFFFCu;
    }

label_7F3119E0:
    ctx->pc = 0x7F3119E0u;
    // 7F3119E0: addi    r3, r3, -30424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30424);

label_7F3119E4:
    ctx->pc = 0x7F3119E4u;
    // 7F3119E4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F3119E8:
    ctx->pc = 0x7F3119E8u;
    // 7F3119E8: stw     r22, -25944(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F3119EC:
    ctx->pc = 0x7F3119ECu;
    // 7F3119EC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F3119F0:
    ctx->pc = 0x7F3119F0u;
    // 7F3119F0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3119F4:
    ctx->pc = 0x7F3119F4u;
    // 7F3119F4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F3119F8:
    ctx->pc = 0x7F3119F8u;
    // 7F3119F8: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3119FC:
    ctx->pc = 0x7F3119FCu;
    // 7F3119FC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311A00:
    ctx->pc = 0x7F311A00u;
    // 7F311A00: bl      0x7F31435C
    {
            ctx->lr = 0x7F311A04u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F311A04:
    ctx->pc = 0x7F311A04u;
    ctx->downcount -= 16;
    // 7F311A04: lmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F311A08:
    ctx->pc = 0x7F311A08u;
    // 7F311A08: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311A0C:
    ctx->pc = 0x7F311A0Cu;
    // 7F311A0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F311A10:
    ctx->pc = 0x7F311A10u;
    // 7F311A10: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F311A14:
    ctx->pc = 0x7F311A14u;
    // 7F311A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F311A18:
    ctx->pc = 0x7F311A18u;
    ctx->downcount -= 25;
    // 7F311A18: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F311A1C:
    ctx->pc = 0x7F311A1Cu;
    // 7F311A1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F311A20:
    ctx->pc = 0x7F311A20u;
    // 7F311A20: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F311A24:
    ctx->pc = 0x7F311A24u;
    // 7F311A24: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311A28:
    ctx->pc = 0x7F311A28u;
    // 7F311A28: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F311A2C:
    ctx->pc = 0x7F311A2Cu;
    // 7F311A2C: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F311A30:
    ctx->pc = 0x7F311A30u;
    // 7F311A30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311A34:
    ctx->pc = 0x7F311A34u;
    // 7F311A34: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311A38:
    ctx->pc = 0x7F311A38u;
    // 7F311A38: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311A3C:
    ctx->pc = 0x7F311A3Cu;
    // 7F311A3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311A40:
    ctx->pc = 0x7F311A40u;
    // 7F311A40: stw     r4, -26020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26020);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F311A44:
    ctx->pc = 0x7F311A44u;
    // 7F311A44: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F311A48:
    ctx->pc = 0x7F311A48u;
    // 7F311A48: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311A4C:
    ctx->pc = 0x7F311A4Cu;
    // 7F311A4C: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F311A50:
    ctx->pc = 0x7F311A50u;
    // 7F311A50: bl      0x7F3C664C
    {
            ctx->lr = 0x7F311A54u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F311A54:
    ctx->pc = 0x7F311A54u;
    ctx->downcount -= 2;
    // 7F311A54: cmplwi  r3, 0x0000
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

label_7F311A58:
    ctx->pc = 0x7F311A58u;
    // 7F311A58: bc    12, 2, 0x7F311AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311AA4;
        }
    }

label_7F311A5C:
    ctx->pc = 0x7F311A5Cu;
    ctx->downcount -= 1;
    // 7F311A5C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311A60u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311A60:
    ctx->pc = 0x7F311A60u;
    ctx->downcount -= 4;
    // 7F311A60: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F311A64:
    ctx->pc = 0x7F311A64u;
    // 7F311A64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F311A68:
    ctx->pc = 0x7F311A68u;
    // 7F311A68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F311A6C:
    ctx->pc = 0x7F311A6Cu;
    // 7F311A6C: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F311A70u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F311A70:
    ctx->pc = 0x7F311A70u;
    ctx->downcount -= 2;
    // 7F311A70: stw     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311A74:
    ctx->pc = 0x7F311A74u;
    // 7F311A74: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311A78u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311A78:
    ctx->pc = 0x7F311A78u;
    ctx->downcount -= 4;
    // 7F311A78: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F311A7C:
    ctx->pc = 0x7F311A7Cu;
    // 7F311A7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F311A80:
    ctx->pc = 0x7F311A80u;
    // 7F311A80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F311A84:
    ctx->pc = 0x7F311A84u;
    // 7F311A84: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F311A88u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F311A88:
    ctx->pc = 0x7F311A88u;
    ctx->downcount -= 2;
    // 7F311A88: stw     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311A8C:
    ctx->pc = 0x7F311A8Cu;
    // 7F311A8C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311A90u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311A90:
    ctx->pc = 0x7F311A90u;
    ctx->downcount -= 4;
    // 7F311A90: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F311A94:
    ctx->pc = 0x7F311A94u;
    // 7F311A94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F311A98:
    ctx->pc = 0x7F311A98u;
    // 7F311A98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F311A9C:
    ctx->pc = 0x7F311A9Cu;
    // 7F311A9C: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F311AA0u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F311AA0:
    ctx->pc = 0x7F311AA0u;
    ctx->downcount -= 1;
    // 7F311AA0: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311AA4:
    ctx->pc = 0x7F311AA4u;
    ctx->downcount -= 2;
    // 7F311AA4: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AA8:
    ctx->pc = 0x7F311AA8u;
    // 7F311AA8: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F311AACu;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F311AAC:
    ctx->pc = 0x7F311AACu;
    ctx->downcount -= 2;
    // 7F311AAC: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AB0:
    ctx->pc = 0x7F311AB0u;
    // 7F311AB0: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F311AB4u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F311AB4:
    ctx->pc = 0x7F311AB4u;
    ctx->downcount -= 2;
    // 7F311AB4: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AB8:
    ctx->pc = 0x7F311AB8u;
    // 7F311AB8: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F311ABCu;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F311ABC:
    ctx->pc = 0x7F311ABCu;
    ctx->downcount -= 5;
    // 7F311ABC: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311AC0:
    ctx->pc = 0x7F311AC0u;
    // 7F311AC0: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AC4:
    ctx->pc = 0x7F311AC4u;
    // 7F311AC4: addi    r5, r4, 3584
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(3584);

label_7F311AC8:
    ctx->pc = 0x7F311AC8u;
    // 7F311AC8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311ACC:
    ctx->pc = 0x7F311ACCu;
    // 7F311ACC: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F311AD0u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F311AD0:
    ctx->pc = 0x7F311AD0u;
    ctx->downcount -= 5;
    // 7F311AD0: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311AD4:
    ctx->pc = 0x7F311AD4u;
    // 7F311AD4: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AD8:
    ctx->pc = 0x7F311AD8u;
    // 7F311AD8: addi    r5, r4, 4468
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4468);

label_7F311ADC:
    ctx->pc = 0x7F311ADCu;
    // 7F311ADC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311AE0:
    ctx->pc = 0x7F311AE0u;
    // 7F311AE0: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F311AE4u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F311AE4:
    ctx->pc = 0x7F311AE4u;
    ctx->downcount -= 5;
    // 7F311AE4: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311AE8:
    ctx->pc = 0x7F311AE8u;
    // 7F311AE8: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311AEC:
    ctx->pc = 0x7F311AECu;
    // 7F311AEC: addi    r5, r4, 3192
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(3192);

label_7F311AF0:
    ctx->pc = 0x7F311AF0u;
    // 7F311AF0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311AF4:
    ctx->pc = 0x7F311AF4u;
    // 7F311AF4: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F311AF8u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F311AF8:
    ctx->pc = 0x7F311AF8u;
    ctx->downcount -= 3;
    // 7F311AF8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F311AFC:
    ctx->pc = 0x7F311AFCu;
    // 7F311AFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F311B00:
    ctx->pc = 0x7F311B00u;
    // 7F311B00: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F311B04u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F311B04:
    ctx->pc = 0x7F311B04u;
    ctx->downcount -= 5;
    // 7F311B04: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311B08:
    ctx->pc = 0x7F311B08u;
    // 7F311B08: lis     r3, 132
    ctx->gpr[3] = ((u32)(s32)(132) << 16);

label_7F311B0C:
    ctx->pc = 0x7F311B0Cu;
    // 7F311B0C: addi    r4, r3, 1751
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(1751);

label_7F311B10:
    ctx->pc = 0x7F311B10u;
    // 7F311B10: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311B14:
    ctx->pc = 0x7F311B14u;
    // 7F311B14: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311B18u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311B18:
    ctx->pc = 0x7F311B18u;
    ctx->downcount -= 6;
    // 7F311B18: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311B1C:
    ctx->pc = 0x7F311B1Cu;
    // 7F311B1C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F311B20:
    ctx->pc = 0x7F311B20u;
    // 7F311B20: stw     r3, -26268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311B24:
    ctx->pc = 0x7F311B24u;
    // 7F311B24: addi    r28, r4, -30408
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-30408);

label_7F311B28:
    ctx->pc = 0x7F311B28u;
    // 7F311B28: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F311B2C:
    ctx->pc = 0x7F311B2Cu;
    // 7F311B2C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F311B30:
    ctx->downcount -= 4;
    // 7F311B30: add   r27, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F311B34:
    // 7F311B34: add   r26, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F311B38:
    // 7F311B38: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F311B3C:
    // 7F311B3C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F311B40:
    ctx->pc = 0x7F311B40u;
    ctx->downcount -= 3;
    // 7F311B40: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311B44:
    ctx->pc = 0x7F311B44u;
    // 7F311B44: lwzx    r4, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311B48:
    // 7F311B48: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311B4Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311B4C:
    ctx->downcount -= 7;
    // 7F311B4C: addis   r4, r29, 3
    ctx->gpr[4] = ctx->gpr[29] + ((u32)(s32)(3) << 16);

label_7F311B50:
    // 7F311B50: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F311B54:
    // 7F311B54: addi    r4, r4, -26264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26264);

label_7F311B58:
    // 7F311B58: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F311B5C:
    // 7F311B5C: cmpwi   r24, 5
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F311B60:
    ctx->pc = 0x7F311B60u;
    // 7F311B60: stwx    r3, r26, r4
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311B64:
    // 7F311B64: bc    12, 0, 0x7F311B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F311B40u;
                return;
            }
            goto label_7F311B40;
        }
    }

label_7F311B68:
    ctx->downcount -= 4;
    // 7F311B68: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F311B6C:
    // 7F311B6C: addi    r30, r30, 20
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(20);

label_7F311B70:
    // 7F311B70: cmpwi   r25, 12
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F311B74:
    // 7F311B74: bc    12, 0, 0x7F311B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F311B30u;
                return;
            }
            goto label_7F311B30;
        }
    }

label_7F311B78:
    ctx->pc = 0x7F311B78u;
    ctx->downcount -= 6;
    // 7F311B78: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F311B7C:
    ctx->pc = 0x7F311B7Cu;
    // 7F311B7C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F311B80:
    ctx->pc = 0x7F311B80u;
    // 7F311B80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311B84:
    ctx->pc = 0x7F311B84u;
    // 7F311B84: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F311B88:
    ctx->pc = 0x7F311B88u;
    // 7F311B88: rlwinm. r0, r0, 0, 31, 31
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

label_7F311B8C:
    ctx->pc = 0x7F311B8Cu;
    // 7F311B8C: bc    12, 2, 0x7F311C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311C08;
        }
    }

label_7F311B90:
    ctx->pc = 0x7F311B90u;
    ctx->downcount -= 4;
    // 7F311B90: lis     r4, 255
    ctx->gpr[4] = ((u32)(s32)(255) << 16);

label_7F311B94:
    ctx->pc = 0x7F311B94u;
    // 7F311B94: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311B98:
    ctx->pc = 0x7F311B98u;
    // 7F311B98: addi    r4, r4, 29796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29796);

label_7F311B9C:
    ctx->pc = 0x7F311B9Cu;
    // 7F311B9C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311BA0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311BA0:
    ctx->pc = 0x7F311BA0u;
    ctx->downcount -= 5;
    // 7F311BA0: stw     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311BA4:
    ctx->pc = 0x7F311BA4u;
    // 7F311BA4: lis     r3, 255
    ctx->gpr[3] = ((u32)(s32)(255) << 16);

label_7F311BA8:
    ctx->pc = 0x7F311BA8u;
    // 7F311BA8: addi    r4, r3, 29796
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29796);

label_7F311BAC:
    ctx->pc = 0x7F311BACu;
    // 7F311BAC: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311BB0:
    ctx->pc = 0x7F311BB0u;
    // 7F311BB0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311BB4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311BB4:
    ctx->pc = 0x7F311BB4u;
    ctx->downcount -= 5;
    // 7F311BB4: stw     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311BB8:
    ctx->pc = 0x7F311BB8u;
    // 7F311BB8: lis     r3, 255
    ctx->gpr[3] = ((u32)(s32)(255) << 16);

label_7F311BBC:
    ctx->pc = 0x7F311BBCu;
    // 7F311BBC: addi    r4, r3, 29796
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29796);

label_7F311BC0:
    ctx->pc = 0x7F311BC0u;
    // 7F311BC0: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311BC4:
    ctx->pc = 0x7F311BC4u;
    // 7F311BC4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311BC8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311BC8:
    ctx->pc = 0x7F311BC8u;
    ctx->downcount -= 5;
    // 7F311BC8: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311BCC:
    ctx->pc = 0x7F311BCCu;
    // 7F311BCC: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F311BD0:
    ctx->pc = 0x7F311BD0u;
    // 7F311BD0: addi    r4, r3, -22499
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22499);

label_7F311BD4:
    ctx->pc = 0x7F311BD4u;
    // 7F311BD4: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311BD8:
    ctx->pc = 0x7F311BD8u;
    // 7F311BD8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311BDCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311BDC:
    ctx->pc = 0x7F311BDCu;
    ctx->downcount -= 5;
    // 7F311BDC: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311BE0:
    ctx->pc = 0x7F311BE0u;
    // 7F311BE0: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F311BE4:
    ctx->pc = 0x7F311BE4u;
    // 7F311BE4: addi    r4, r3, -22499
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22499);

label_7F311BE8:
    ctx->pc = 0x7F311BE8u;
    // 7F311BE8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311BEC:
    ctx->pc = 0x7F311BECu;
    // 7F311BEC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311BF0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311BF0:
    ctx->pc = 0x7F311BF0u;
    ctx->downcount -= 5;
    // 7F311BF0: stw     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311BF4:
    ctx->pc = 0x7F311BF4u;
    // 7F311BF4: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F311BF8:
    ctx->pc = 0x7F311BF8u;
    // 7F311BF8: addi    r4, r3, -22499
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22499);

label_7F311BFC:
    ctx->pc = 0x7F311BFCu;
    // 7F311BFC: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C00:
    ctx->pc = 0x7F311C00u;
    // 7F311C00: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C04u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C04:
    ctx->pc = 0x7F311C04u;
    ctx->downcount -= 1;
    // 7F311C04: stw     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C08:
    ctx->pc = 0x7F311C08u;
    ctx->downcount -= 4;
    // 7F311C08: lis     r4, 160
    ctx->gpr[4] = ((u32)(s32)(160) << 16);

label_7F311C0C:
    ctx->pc = 0x7F311C0Cu;
    // 7F311C0C: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C10:
    ctx->pc = 0x7F311C10u;
    // 7F311C10: addi    r4, r4, -7039
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7039);

label_7F311C14:
    ctx->pc = 0x7F311C14u;
    // 7F311C14: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C18u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C18:
    ctx->pc = 0x7F311C18u;
    ctx->downcount -= 6;
    // 7F311C18: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C1C:
    ctx->pc = 0x7F311C1Cu;
    // 7F311C1C: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F311C20:
    ctx->pc = 0x7F311C20u;
    // 7F311C20: stw     r3, -26476(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26476);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C24:
    ctx->pc = 0x7F311C24u;
    // 7F311C24: addi    r4, r4, 316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(316);

label_7F311C28:
    ctx->pc = 0x7F311C28u;
    // 7F311C28: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C2C:
    ctx->pc = 0x7F311C2Cu;
    // 7F311C2C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C30u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C30:
    ctx->pc = 0x7F311C30u;
    ctx->downcount -= 6;
    // 7F311C30: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C34:
    ctx->pc = 0x7F311C34u;
    // 7F311C34: lis     r4, 213
    ctx->gpr[4] = ((u32)(s32)(213) << 16);

label_7F311C38:
    ctx->pc = 0x7F311C38u;
    // 7F311C38: stw     r3, -26472(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26472);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C3C:
    ctx->pc = 0x7F311C3Cu;
    // 7F311C3C: addi    r4, r4, 7704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7704);

label_7F311C40:
    ctx->pc = 0x7F311C40u;
    // 7F311C40: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C44:
    ctx->pc = 0x7F311C44u;
    // 7F311C44: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C48u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C48:
    ctx->pc = 0x7F311C48u;
    ctx->downcount -= 6;
    // 7F311C48: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C4C:
    ctx->pc = 0x7F311C4Cu;
    // 7F311C4C: lis     r4, 188
    ctx->gpr[4] = ((u32)(s32)(188) << 16);

label_7F311C50:
    ctx->pc = 0x7F311C50u;
    // 7F311C50: stw     r3, -26468(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26468);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C54:
    ctx->pc = 0x7F311C54u;
    // 7F311C54: addi    r4, r4, 10356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10356);

label_7F311C58:
    ctx->pc = 0x7F311C58u;
    // 7F311C58: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C5C:
    ctx->pc = 0x7F311C5Cu;
    // 7F311C5C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C60u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C60:
    ctx->pc = 0x7F311C60u;
    ctx->downcount -= 6;
    // 7F311C60: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C64:
    ctx->pc = 0x7F311C64u;
    // 7F311C64: lis     r4, 73
    ctx->gpr[4] = ((u32)(s32)(73) << 16);

label_7F311C68:
    ctx->pc = 0x7F311C68u;
    // 7F311C68: stw     r3, -26464(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26464);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C6C:
    ctx->pc = 0x7F311C6Cu;
    // 7F311C6C: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_7F311C70:
    ctx->pc = 0x7F311C70u;
    // 7F311C70: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C74:
    ctx->pc = 0x7F311C74u;
    // 7F311C74: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C78u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C78:
    ctx->pc = 0x7F311C78u;
    ctx->downcount -= 6;
    // 7F311C78: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C7C:
    ctx->pc = 0x7F311C7Cu;
    // 7F311C7C: lis     r4, 214
    ctx->gpr[4] = ((u32)(s32)(214) << 16);

label_7F311C80:
    ctx->pc = 0x7F311C80u;
    // 7F311C80: stw     r3, -26460(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26460);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C84:
    ctx->pc = 0x7F311C84u;
    // 7F311C84: addi    r4, r4, 32242
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32242);

label_7F311C88:
    ctx->pc = 0x7F311C88u;
    // 7F311C88: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311C8C:
    ctx->pc = 0x7F311C8Cu;
    // 7F311C8C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311C90u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311C90:
    ctx->pc = 0x7F311C90u;
    ctx->downcount -= 6;
    // 7F311C90: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311C94:
    ctx->pc = 0x7F311C94u;
    // 7F311C94: lis     r4, 55
    ctx->gpr[4] = ((u32)(s32)(55) << 16);

label_7F311C98:
    ctx->pc = 0x7F311C98u;
    // 7F311C98: stw     r3, -26456(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26456);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311C9C:
    ctx->pc = 0x7F311C9Cu;
    // 7F311C9C: addi    r4, r4, 5874
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5874);

label_7F311CA0:
    ctx->pc = 0x7F311CA0u;
    // 7F311CA0: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311CA4:
    ctx->pc = 0x7F311CA4u;
    // 7F311CA4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311CA8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311CA8:
    ctx->pc = 0x7F311CA8u;
    ctx->downcount -= 6;
    // 7F311CA8: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311CAC:
    ctx->pc = 0x7F311CACu;
    // 7F311CAC: lis     r4, 76
    ctx->gpr[4] = ((u32)(s32)(76) << 16);

label_7F311CB0:
    ctx->pc = 0x7F311CB0u;
    // 7F311CB0: stw     r3, -26452(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26452);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311CB4:
    ctx->pc = 0x7F311CB4u;
    // 7F311CB4: addi    r4, r4, 12404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12404);

label_7F311CB8:
    ctx->pc = 0x7F311CB8u;
    // 7F311CB8: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311CBC:
    ctx->pc = 0x7F311CBCu;
    // 7F311CBC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311CC0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311CC0:
    ctx->pc = 0x7F311CC0u;
    ctx->downcount -= 6;
    // 7F311CC0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311CC4:
    ctx->pc = 0x7F311CC4u;
    // 7F311CC4: lis     r4, 93
    ctx->gpr[4] = ((u32)(s32)(93) << 16);

label_7F311CC8:
    ctx->pc = 0x7F311CC8u;
    // 7F311CC8: stw     r3, -26448(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311CCC:
    ctx->pc = 0x7F311CCCu;
    // 7F311CCC: addi    r4, r4, 13362
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13362);

label_7F311CD0:
    ctx->pc = 0x7F311CD0u;
    // 7F311CD0: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311CD4:
    ctx->pc = 0x7F311CD4u;
    // 7F311CD4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311CD8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311CD8:
    ctx->pc = 0x7F311CD8u;
    ctx->downcount -= 6;
    // 7F311CD8: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311CDC:
    ctx->pc = 0x7F311CDCu;
    // 7F311CDC: lis     r4, 188
    ctx->gpr[4] = ((u32)(s32)(188) << 16);

label_7F311CE0:
    ctx->pc = 0x7F311CE0u;
    // 7F311CE0: stw     r3, -26444(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26444);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311CE4:
    ctx->pc = 0x7F311CE4u;
    // 7F311CE4: addi    r4, r4, 10356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10356);

label_7F311CE8:
    ctx->pc = 0x7F311CE8u;
    // 7F311CE8: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311CEC:
    ctx->pc = 0x7F311CECu;
    // 7F311CEC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311CF0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311CF0:
    ctx->pc = 0x7F311CF0u;
    ctx->downcount -= 6;
    // 7F311CF0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311CF4:
    ctx->pc = 0x7F311CF4u;
    // 7F311CF4: lis     r4, 149
    ctx->gpr[4] = ((u32)(s32)(149) << 16);

label_7F311CF8:
    ctx->pc = 0x7F311CF8u;
    // 7F311CF8: stw     r3, -26440(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26440);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311CFC:
    ctx->pc = 0x7F311CFCu;
    // 7F311CFC: addi    r4, r4, -26863
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26863);

label_7F311D00:
    ctx->pc = 0x7F311D00u;
    // 7F311D00: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311D04:
    ctx->pc = 0x7F311D04u;
    // 7F311D04: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311D08u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311D08:
    ctx->pc = 0x7F311D08u;
    ctx->downcount -= 6;
    // 7F311D08: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311D0C:
    ctx->pc = 0x7F311D0Cu;
    // 7F311D0C: lis     r4, 187
    ctx->gpr[4] = ((u32)(s32)(187) << 16);

label_7F311D10:
    ctx->pc = 0x7F311D10u;
    // 7F311D10: stw     r3, -26436(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311D14:
    ctx->pc = 0x7F311D14u;
    // 7F311D14: addi    r4, r4, 15216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15216);

label_7F311D18:
    ctx->pc = 0x7F311D18u;
    // 7F311D18: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311D1C:
    ctx->pc = 0x7F311D1Cu;
    // 7F311D1C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311D20u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311D20:
    ctx->pc = 0x7F311D20u;
    ctx->downcount -= 6;
    // 7F311D20: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311D24:
    ctx->pc = 0x7F311D24u;
    // 7F311D24: lis     r4, 222
    ctx->gpr[4] = ((u32)(s32)(222) << 16);

label_7F311D28:
    ctx->pc = 0x7F311D28u;
    // 7F311D28: stw     r3, -26432(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26432);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311D2C:
    ctx->pc = 0x7F311D2Cu;
    // 7F311D2C: addi    r4, r4, -3803
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3803);

label_7F311D30:
    ctx->pc = 0x7F311D30u;
    // 7F311D30: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F311D34:
    ctx->pc = 0x7F311D34u;
    // 7F311D34: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F311D38u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F311D38:
    ctx->pc = 0x7F311D38u;
    ctx->downcount -= 8;
    // 7F311D38: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311D3C:
    ctx->pc = 0x7F311D3Cu;
    // 7F311D3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F311D40:
    ctx->pc = 0x7F311D40u;
    // 7F311D40: stw     r3, -26428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26428);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311D44:
    ctx->pc = 0x7F311D44u;
    // 7F311D44: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F311D48:
    ctx->pc = 0x7F311D48u;
    // 7F311D48: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_7F311D4C:
    ctx->pc = 0x7F311D4Cu;
    // 7F311D4C: stb     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F311D50:
    ctx->pc = 0x7F311D50u;
    // 7F311D50: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F311D54:
    ctx->pc = 0x7F311D54u;
    // 7F311D54: bl      0x7F319320
    {
            ctx->lr = 0x7F311D58u;
            ctx->pc = 0x7F319320u;
            return;
    }

label_7F311D58:
    ctx->pc = 0x7F311D58u;
    ctx->downcount -= 16;
    // 7F311D58: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F311D5C:
    ctx->pc = 0x7F311D5Cu;
    // 7F311D5C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311D60:
    ctx->pc = 0x7F311D60u;
    // 7F311D60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F311D64:
    ctx->pc = 0x7F311D64u;
    // 7F311D64: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F311D68:
    ctx->pc = 0x7F311D68u;
    // 7F311D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F311D6C:
    ctx->pc = 0x7F311D6Cu;
    ctx->downcount -= 23;
    // 7F311D6C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F311D70:
    ctx->pc = 0x7F311D70u;
    // 7F311D70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F311D74:
    ctx->pc = 0x7F311D74u;
    // 7F311D74: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311D78:
    ctx->pc = 0x7F311D78u;
    // 7F311D78: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F311D78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F311D7C:
    ctx->pc = 0x7F311D7Cu;
    // 7F311D7C: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F311D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F311D7Cu);
        if (ctx->exception) return;
    }

label_7F311D80:
    ctx->pc = 0x7F311D80u;
    // 7F311D80: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F311D84:
    ctx->pc = 0x7F311D84u;
    // 7F311D84: lis     r5, 111
    ctx->gpr[5] = ((u32)(s32)(111) << 16);

label_7F311D88:
    ctx->pc = 0x7F311D88u;
    // 7F311D88: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F311D8C:
    ctx->pc = 0x7F311D8Cu;
    // 7F311D8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311D90:
    ctx->pc = 0x7F311D90u;
    // 7F311D90: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F311D94:
    ctx->pc = 0x7F311D94u;
    // 7F311D94: addi    r3, r5, 10396
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10396);

label_7F311D98:
    ctx->pc = 0x7F311D98u;
    // 7F311D98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F311D9C:
    ctx->pc = 0x7F311D9Cu;
    // 7F311D9C: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F311DA0u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F311DA0:
    ctx->pc = 0x7F311DA0u;
    ctx->downcount -= 2;
    // 7F311DA0: cmplwi  r3, 0x0000
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

label_7F311DA4:
    ctx->pc = 0x7F311DA4u;
    // 7F311DA4: bc    12, 2, 0x7F311E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311E74;
        }
    }

label_7F311DA8:
    ctx->pc = 0x7F311DA8u;
    ctx->downcount -= 1;
    // 7F311DA8: bl      0x7F3C6640
    {
            ctx->lr = 0x7F311DACu;
            ctx->pc = 0x7F3C6640u;
            return;
    }

label_7F311DAC:
    ctx->pc = 0x7F311DACu;
    ctx->downcount -= 4;
    // 7F311DAC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F311DB0:
    ctx->pc = 0x7F311DB0u;
    // 7F311DB0: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F311DB4:
    ctx->pc = 0x7F311DB4u;
    // 7F311DB4: lfd     f31, -31752(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F311DB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-31752);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F311DB8:
    ctx->pc = 0x7F311DB8u;
    // 7F311DB8: b       0x7F311E68
    {
            goto label_7F311E68;
    }

label_7F311DBC:
    ctx->downcount -= 1;
    // 7F311DBC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F311DC0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F311DC0:
    ctx->downcount -= 2;
    // 7F311DC0: cmpwi   r28, 0
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

label_7F311DC4:
    // 7F311DC4: bc    12, 2, 0x7F311DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F311DDC;
        }
    }

label_7F311DC8:
    ctx->downcount -= 5;
    // 7F311DC8: lis     r6, 166
    ctx->gpr[6] = ((u32)(s32)(166) << 16);

label_7F311DCC:
    // 7F311DCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311DD0:
    // 7F311DD0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F311DD4:
    // 7F311DD4: addi    r3, r6, -13606
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-13606);

label_7F311DD8:
    // 7F311DD8: bl      0x7F3B671C
    {
            ctx->lr = 0x7F311DDCu;
            ctx->pc = 0x7F3B671Cu;
            return;
    }

label_7F311DDC:
    ctx->downcount -= 1;
    // 7F311DDC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311DE0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311DE0:
    ctx->pc = 0x7F311DE0u;
    ctx->downcount -= 2;
    // 7F311DE0: sth     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F311DE4:
    // 7F311DE4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311DE8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311DE8:
    ctx->downcount -= 7;
    // 7F311DE8: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F311DEC:
    ctx->pc = 0x7F311DECu;
    // 7F311DEC: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F311DF0:
    ctx->pc = 0x7F311DF0u;
    // 7F311DF0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311DF4:
    ctx->pc = 0x7F311DF4u;
    // 7F311DF4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F311DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F311DF8:
    ctx->pc = 0x7F311DF8u;
    // 7F311DF8: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F311DF8u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F311DFC:
    ctx->pc = 0x7F311DFCu;
    // 7F311DFC: stfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F311DFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F311E00:
    // 7F311E00: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E04u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E04:
    ctx->downcount -= 7;
    // 7F311E04: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F311E08:
    ctx->pc = 0x7F311E08u;
    // 7F311E08: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F311E0C:
    ctx->pc = 0x7F311E0Cu;
    // 7F311E0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311E10:
    ctx->pc = 0x7F311E10u;
    // 7F311E10: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F311E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F311E14:
    ctx->pc = 0x7F311E14u;
    // 7F311E14: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F311E14u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F311E18:
    ctx->pc = 0x7F311E18u;
    // 7F311E18: stfs     f0, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F311E18u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F311E1C:
    // 7F311E1C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E20u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E20:
    ctx->downcount -= 7;
    // 7F311E20: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F311E24:
    ctx->pc = 0x7F311E24u;
    // 7F311E24: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F311E28:
    ctx->pc = 0x7F311E28u;
    // 7F311E28: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311E2C:
    ctx->pc = 0x7F311E2Cu;
    // 7F311E2C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F311E2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F311E30:
    ctx->pc = 0x7F311E30u;
    // 7F311E30: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F311E30u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F311E34:
    ctx->pc = 0x7F311E34u;
    // 7F311E34: stfs     f0, 64(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F311E34u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F311E38:
    // 7F311E38: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E3Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E3C:
    ctx->pc = 0x7F311E3Cu;
    ctx->downcount -= 2;
    // 7F311E3C: sth     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F311E40:
    // 7F311E40: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E44u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E44:
    ctx->pc = 0x7F311E44u;
    ctx->downcount -= 2;
    // 7F311E44: sth     r3, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F311E48:
    // 7F311E48: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E4Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E4C:
    ctx->pc = 0x7F311E4Cu;
    ctx->downcount -= 4;
    // 7F311E4C: sth     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F311E50:
    // 7F311E50: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F311E54:
    ctx->pc = 0x7F311E54u;
    // 7F311E54: sth     r0, 74(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(74);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F311E58:
    // 7F311E58: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F311E5Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F311E5C:
    ctx->pc = 0x7F311E5Cu;
    ctx->downcount -= 3;
    // 7F311E5C: stw     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F311E60:
    // 7F311E60: addi    r30, r30, 80
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(80);

label_7F311E64:
    // 7F311E64: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F311E68:
    ctx->downcount -= 1;
    // 7F311E68: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F311E6Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F311E6C:
    ctx->downcount -= 2;
    // 7F311E6C: cmplwi  r3, 0x0000
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

label_7F311E70:
    // 7F311E70: bc    4, 2, 0x7F311DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F311DBCu;
                return;
            }
            goto label_7F311DBC;
        }
    }

label_7F311E74:
    ctx->pc = 0x7F311E74u;
    ctx->downcount -= 19;
    // 7F311E74: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F311E78:
    ctx->pc = 0x7F311E78u;
    // 7F311E78: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F311E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F311E78u);
        if (ctx->exception) return;
    }

label_7F311E7C:
    ctx->pc = 0x7F311E7Cu;
    // 7F311E7C: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F311E7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F311E80:
    ctx->pc = 0x7F311E80u;
    // 7F311E80: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F311E84:
    ctx->pc = 0x7F311E84u;
    // 7F311E84: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311E88:
    ctx->pc = 0x7F311E88u;
    // 7F311E88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F311E8C:
    ctx->pc = 0x7F311E8Cu;
    // 7F311E8C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F311E90:
    ctx->pc = 0x7F311E90u;
    // 7F311E90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F311E94:
    ctx->pc = 0x7F311E94u;
    ctx->downcount -= 21;
    // 7F311E94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F311E98:
    ctx->pc = 0x7F311E98u;
    // 7F311E98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F311E9C:
    ctx->pc = 0x7F311E9Cu;
    // 7F311E9C: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F311EA0:
    ctx->pc = 0x7F311EA0u;
    // 7F311EA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F311EA4:
    ctx->pc = 0x7F311EA4u;
    // 7F311EA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311EA8:
    ctx->pc = 0x7F311EA8u;
    // 7F311EA8: addi    r5, r4, -9440
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9440);

label_7F311EAC:
    ctx->pc = 0x7F311EACu;
    // 7F311EAC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F311EB0:
    ctx->pc = 0x7F311EB0u;
    // 7F311EB0: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F311EB4:
    ctx->pc = 0x7F311EB4u;
    // 7F311EB4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311EB8:
    ctx->pc = 0x7F311EB8u;
    // 7F311EB8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F311EBC:
    ctx->pc = 0x7F311EBCu;
    // 7F311EBC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F311EC0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F311EC0:
    ctx->pc = 0x7F311EC0u;
    ctx->downcount -= 2;
    // 7F311EC0: or.   r31, r3, r3
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

label_7F311EC4:
    ctx->pc = 0x7F311EC4u;
    // 7F311EC4: bc    12, 2, 0x7F312084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312084;
        }
    }

label_7F311EC8:
    ctx->pc = 0x7F311EC8u;
    ctx->downcount -= 6;
    // 7F311EC8: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311ECC:
    ctx->pc = 0x7F311ECCu;
    // 7F311ECC: lis     r5, 32561
    ctx->gpr[5] = ((u32)(s32)(32561) << 16);

label_7F311ED0:
    ctx->pc = 0x7F311ED0u;
    // 7F311ED0: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F311ED4:
    ctx->pc = 0x7F311ED4u;
    // 7F311ED4: addi    r4, r4, 2884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2884);

label_7F311ED8:
    ctx->pc = 0x7F311ED8u;
    // 7F311ED8: addi    r5, r5, 5168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(5168);

label_7F311EDC:
    ctx->pc = 0x7F311EDCu;
    // 7F311EDC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F311EE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F311EE0:
    ctx->pc = 0x7F311EE0u;
    ctx->downcount -= 13;
    // 7F311EE0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F311EE4:
    ctx->pc = 0x7F311EE4u;
    // 7F311EE4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F311EE8:
    ctx->pc = 0x7F311EE8u;
    // 7F311EE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F311EEC:
    ctx->pc = 0x7F311EECu;
    // 7F311EEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311EF0:
    ctx->pc = 0x7F311EF0u;
    // 7F311EF0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F311EF4:
    ctx->pc = 0x7F311EF4u;
    // 7F311EF4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F311EF8:
    ctx->pc = 0x7F311EF8u;
    // 7F311EF8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F311EFC:
    ctx->pc = 0x7F311EFCu;
    // 7F311EFC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F311F00:
    ctx->pc = 0x7F311F00u;
    // 7F311F00: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F311F04:
    ctx->pc = 0x7F311F04u;
    // 7F311F04: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F311F08:
    ctx->pc = 0x7F311F08u;
    // 7F311F08: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F311F0C:
    ctx->pc = 0x7F311F0Cu;
    // 7F311F0C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311F10:
    ctx->pc = 0x7F311F10u;
    // 7F311F10: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F311F14u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F311F14:
    ctx->pc = 0x7F311F14u;
    ctx->downcount -= 2;
    // 7F311F14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311F18:
    ctx->pc = 0x7F311F18u;
    // 7F311F18: bl      0x7F311A18
    {
            ctx->lr = 0x7F311F1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F311A18u;
                return;
            }
            goto label_7F311A18;
    }

label_7F311F1C:
    ctx->pc = 0x7F311F1Cu;
    ctx->downcount -= 8;
    // 7F311F1C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311F20:
    ctx->pc = 0x7F311F20u;
    // 7F311F20: li      r6, 103
    ctx->gpr[6] = (u32)(s32)(103);

label_7F311F24:
    ctx->pc = 0x7F311F24u;
    // 7F311F24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311F28:
    ctx->pc = 0x7F311F28u;
    // 7F311F28: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311F2C:
    ctx->pc = 0x7F311F2Cu;
    // 7F311F2C: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F311F30:
    ctx->pc = 0x7F311F30u;
    // 7F311F30: addi    r4, r4, -24704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24704);

label_7F311F34:
    ctx->pc = 0x7F311F34u;
    // 7F311F34: addi    r5, r5, -25940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25940);

label_7F311F38:
    ctx->pc = 0x7F311F38u;
    // 7F311F38: bl      0x7F318E44
    {
            ctx->lr = 0x7F311F3Cu;
            ctx->pc = 0x7F318E44u;
            return;
    }

label_7F311F3C:
    ctx->pc = 0x7F311F3Cu;
    ctx->downcount -= 13;
    // 7F311F3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F311F40:
    ctx->pc = 0x7F311F40u;
    // 7F311F40: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F311F44:
    ctx->pc = 0x7F311F44u;
    // 7F311F44: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311F48:
    ctx->pc = 0x7F311F48u;
    // 7F311F48: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311F4C:
    ctx->pc = 0x7F311F4Cu;
    // 7F311F4C: addi    r8, r4, -31648
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-31648);

label_7F311F50:
    ctx->pc = 0x7F311F50u;
    // 7F311F50: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_7F311F54:
    ctx->pc = 0x7F311F54u;
    // 7F311F54: lwz     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311F58:
    ctx->pc = 0x7F311F58u;
    // 7F311F58: addi    r6, r31, 112
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311F5C:
    ctx->pc = 0x7F311F5Cu;
    // 7F311F5C: addi    r7, r31, 116
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(116);

label_7F311F60:
    ctx->pc = 0x7F311F60u;
    // 7F311F60: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F311F64:
    ctx->pc = 0x7F311F64u;
    // 7F311F64: li      r10, 9
    ctx->gpr[10] = (u32)(s32)(9);

label_7F311F68:
    ctx->pc = 0x7F311F68u;
    // 7F311F68: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F311F6C:
    ctx->pc = 0x7F311F6Cu;
    // 7F311F6C: bl      0x7F318E70
    {
            ctx->lr = 0x7F311F70u;
            ctx->pc = 0x7F318E70u;
            return;
    }

label_7F311F70:
    ctx->pc = 0x7F311F70u;
    ctx->downcount -= 6;
    // 7F311F70: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311F74:
    ctx->pc = 0x7F311F74u;
    // 7F311F74: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311F78:
    ctx->pc = 0x7F311F78u;
    // 7F311F78: addi    r4, r4, 18344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18344);

label_7F311F7C:
    ctx->pc = 0x7F311F7Cu;
    // 7F311F7C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F311F80:
    ctx->pc = 0x7F311F80u;
    // 7F311F80: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F311F84:
    ctx->pc = 0x7F311F84u;
    // 7F311F84: bl      0x7F318EE8
    {
            ctx->lr = 0x7F311F88u;
            ctx->pc = 0x7F318EE8u;
            return;
    }

label_7F311F88:
    ctx->pc = 0x7F311F88u;
    ctx->downcount -= 8;
    // 7F311F88: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311F8C:
    ctx->pc = 0x7F311F8Cu;
    // 7F311F8C: li      r6, 112
    ctx->gpr[6] = (u32)(s32)(112);

label_7F311F90:
    ctx->pc = 0x7F311F90u;
    // 7F311F90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311F94:
    ctx->pc = 0x7F311F94u;
    // 7F311F94: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F311F98:
    ctx->pc = 0x7F311F98u;
    // 7F311F98: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F311F9C:
    ctx->pc = 0x7F311F9Cu;
    // 7F311F9C: addi    r4, r4, -24704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24704);

label_7F311FA0:
    ctx->pc = 0x7F311FA0u;
    // 7F311FA0: addi    r5, r5, -25940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25940);

label_7F311FA4:
    ctx->pc = 0x7F311FA4u;
    // 7F311FA4: bl      0x7F318E44
    {
            ctx->lr = 0x7F311FA8u;
            ctx->pc = 0x7F318E44u;
            return;
    }

label_7F311FA8:
    ctx->pc = 0x7F311FA8u;
    ctx->downcount -= 13;
    // 7F311FA8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F311FAC:
    ctx->pc = 0x7F311FACu;
    // 7F311FAC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F311FB0:
    ctx->pc = 0x7F311FB0u;
    // 7F311FB0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F311FB4:
    ctx->pc = 0x7F311FB4u;
    // 7F311FB4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311FB8:
    ctx->pc = 0x7F311FB8u;
    // 7F311FB8: addi    r8, r4, -31328
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-31328);

label_7F311FBC:
    ctx->pc = 0x7F311FBCu;
    // 7F311FBC: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_7F311FC0:
    ctx->pc = 0x7F311FC0u;
    // 7F311FC0: lwz     r4, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F311FC4:
    ctx->pc = 0x7F311FC4u;
    // 7F311FC4: addi    r6, r31, 112
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(112);

label_7F311FC8:
    ctx->pc = 0x7F311FC8u;
    // 7F311FC8: addi    r7, r31, 116
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(116);

label_7F311FCC:
    ctx->pc = 0x7F311FCCu;
    // 7F311FCC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F311FD0:
    ctx->pc = 0x7F311FD0u;
    // 7F311FD0: li      r10, 10
    ctx->gpr[10] = (u32)(s32)(10);

label_7F311FD4:
    ctx->pc = 0x7F311FD4u;
    // 7F311FD4: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F311FD8:
    ctx->pc = 0x7F311FD8u;
    // 7F311FD8: bl      0x7F318E70
    {
            ctx->lr = 0x7F311FDCu;
            ctx->pc = 0x7F318E70u;
            return;
    }

label_7F311FDC:
    ctx->pc = 0x7F311FDCu;
    ctx->downcount -= 6;
    // 7F311FDC: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F311FE0:
    ctx->pc = 0x7F311FE0u;
    // 7F311FE0: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F311FE4:
    ctx->pc = 0x7F311FE4u;
    // 7F311FE4: addi    r4, r4, 17784
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17784);

label_7F311FE8:
    ctx->pc = 0x7F311FE8u;
    // 7F311FE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F311FEC:
    ctx->pc = 0x7F311FECu;
    // 7F311FEC: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F311FF0:
    ctx->pc = 0x7F311FF0u;
    // 7F311FF0: bl      0x7F318EE8
    {
            ctx->lr = 0x7F311FF4u;
            ctx->pc = 0x7F318EE8u;
            return;
    }

label_7F311FF4:
    ctx->pc = 0x7F311FF4u;
    ctx->downcount -= 2;
    // 7F311FF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F311FF8:
    ctx->pc = 0x7F311FF8u;
    // 7F311FF8: bl      0x7F3114F8
    {
            ctx->lr = 0x7F311FFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3114F8u;
                return;
            }
            goto label_7F3114F8;
    }

label_7F311FFC:
    ctx->pc = 0x7F311FFCu;
    ctx->downcount -= 1;
    // 7F311FFC: bl      0x7F19CF4C
    {
            ctx->lr = 0x7F312000u;
            ctx->pc = 0x7F19CF4Cu;
            return;
    }

label_7F312000:
    ctx->pc = 0x7F312000u;
    ctx->downcount -= 4;
    // 7F312000: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F312004:
    ctx->pc = 0x7F312004u;
    // 7F312004: cmplwi  r3, 0x0000
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

label_7F312008:
    ctx->pc = 0x7F312008u;
    // 7F312008: stw     r3, -10648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31200C:
    ctx->pc = 0x7F31200Cu;
    // 7F31200C: bc    4, 2, 0x7F312020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312020;
        }
    }

label_7F312010:
    ctx->pc = 0x7F312010u;
    ctx->downcount -= 2;
    // 7F312010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312014:
    ctx->pc = 0x7F312014u;
    // 7F312014: bl      0x7F3C8210
    {
            ctx->lr = 0x7F312018u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F312018:
    ctx->pc = 0x7F312018u;
    ctx->downcount -= 2;
    // 7F312018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31201C:
    ctx->pc = 0x7F31201Cu;
    // 7F31201C: b       0x7F312088
    {
            goto label_7F312088;
    }

label_7F312020:
    ctx->pc = 0x7F312020u;
    ctx->downcount -= 3;
    // 7F312020: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F312024:
    ctx->pc = 0x7F312024u;
    // 7F312024: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F312028:
    ctx->pc = 0x7F312028u;
    // 7F312028: bl      0x7F3121BC
    {
            ctx->lr = 0x7F31202Cu;
            goto label_7F3121BC;
    }

label_7F31202C:
    ctx->pc = 0x7F31202Cu;
    ctx->downcount -= 2;
    // 7F31202C: lis     r3, 14
    ctx->gpr[3] = ((u32)(s32)(14) << 16);

label_7F312030:
    ctx->pc = 0x7F312030u;
    // 7F312030: bl      0x7F3C9148
    {
            ctx->lr = 0x7F312034u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F312034:
    ctx->pc = 0x7F312034u;
    ctx->downcount -= 4;
    // 7F312034: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F312038:
    ctx->pc = 0x7F312038u;
    // 7F312038: stw     r3, -10584(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10584);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31203C:
    ctx->pc = 0x7F31203Cu;
    // 7F31203C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F312040:
    ctx->pc = 0x7F312040u;
    // 7F312040: bl      0x7F0208E4
    {
            ctx->lr = 0x7F312044u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F312044:
    ctx->pc = 0x7F312044u;
    ctx->downcount -= 3;
    // 7F312044: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F312048:
    ctx->pc = 0x7F312048u;
    // 7F312048: addi    r3, r3, -26372
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26372);

label_7F31204C:
    ctx->pc = 0x7F31204Cu;
    // 7F31204C: bl      0x7F30EDBC
    {
            ctx->lr = 0x7F312050u;
            ctx->pc = 0x7F30EDBCu;
            return;
    }

label_7F312050:
    ctx->pc = 0x7F312050u;
    ctx->downcount -= 3;
    // 7F312050: addi    r3, r31, 172
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(172);

label_7F312054:
    ctx->pc = 0x7F312054u;
    // 7F312054: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F312058:
    ctx->pc = 0x7F312058u;
    // 7F312058: bl      0x7F311D6C
    {
            ctx->lr = 0x7F31205Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F311D6Cu;
                return;
            }
            goto label_7F311D6C;
    }

label_7F31205C:
    ctx->pc = 0x7F31205Cu;
    ctx->downcount -= 8;
    // 7F31205C: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F312060:
    ctx->pc = 0x7F312060u;
    // 7F312060: lis     r4, 254
    ctx->gpr[4] = ((u32)(s32)(254) << 16);

label_7F312064:
    ctx->pc = 0x7F312064u;
    // 7F312064: stw     r3, 6172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F312068:
    ctx->pc = 0x7F312068u;
    // 7F312068: lis     r3, 166
    ctx->gpr[3] = ((u32)(s32)(166) << 16);

label_7F31206C:
    ctx->pc = 0x7F31206Cu;
    // 7F31206C: addi    r3, r3, -13606
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13606);

label_7F312070:
    ctx->pc = 0x7F312070u;
    // 7F312070: addi    r4, r4, -27485
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27485);

label_7F312074:
    ctx->pc = 0x7F312074u;
    // 7F312074: addi    r5, r5, -26424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26424);

label_7F312078:
    ctx->pc = 0x7F312078u;
    // 7F312078: bl      0x7F3B671C
    {
            ctx->lr = 0x7F31207Cu;
            ctx->pc = 0x7F3B671Cu;
            return;
    }

label_7F31207C:
    ctx->pc = 0x7F31207Cu;
    ctx->downcount -= 2;
    // 7F31207C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F312080:
    ctx->pc = 0x7F312080u;
    // 7F312080: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F312084u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F312084:
    ctx->pc = 0x7F312084u;
    ctx->downcount -= 1;
    // 7F312084: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312088:
    ctx->pc = 0x7F312088u;
    ctx->downcount -= 16;
    // 7F312088: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31208C:
    ctx->pc = 0x7F31208Cu;
    // 7F31208C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312090:
    ctx->pc = 0x7F312090u;
    // 7F312090: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312094:
    ctx->pc = 0x7F312094u;
    // 7F312094: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312098:
    ctx->pc = 0x7F312098u;
    // 7F312098: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31209C:
    ctx->pc = 0x7F31209Cu;
    ctx->downcount -= 20;
    // 7F31209C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3120A0:
    ctx->pc = 0x7F3120A0u;
    // 7F3120A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3120A4:
    ctx->pc = 0x7F3120A4u;
    // 7F3120A4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3120A8:
    ctx->pc = 0x7F3120A8u;
    // 7F3120A8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3120AC:
    ctx->pc = 0x7F3120ACu;
    // 7F3120AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3120B0:
    ctx->pc = 0x7F3120B0u;
    // 7F3120B0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3120B4:
    ctx->pc = 0x7F3120B4u;
    // 7F3120B4: addi    r29, r4, -3392
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-3392);

label_7F3120B8:
    ctx->pc = 0x7F3120B8u;
    // 7F3120B8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3120BC:
    ctx->pc = 0x7F3120BCu;
    // 7F3120BC: addi    r30, r3, -3432
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-3432);

label_7F3120C0:
    ctx->pc = 0x7F3120C0u;
    // 7F3120C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3120C4:
    ctx->downcount -= 4;
    // 7F3120C4: addi    r0, r28, 97
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(97);

label_7F3120C8:
    // 7F3120C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3120CC:
    // 7F3120CC: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3120D0:
    // 7F3120D0: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F3120D4u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F3120D4:
    ctx->pc = 0x7F3120D4u;
    ctx->downcount -= 5;
    // 7F3120D4: stwx    r3, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3120D8:
    // 7F3120D8: addi    r0, r28, 107
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(107);

label_7F3120DC:
    // 7F3120DC: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3120E0:
    // 7F3120E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3120E4:
    // 7F3120E4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F3120E8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F3120E8:
    ctx->downcount -= 5;
    // 7F3120E8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3120EC:
    ctx->pc = 0x7F3120ECu;
    // 7F3120EC: stwx    r3, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3120F0:
    // 7F3120F0: cmpwi   r28, 10
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3120F4:
    // 7F3120F4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3120F8:
    // 7F3120F8: bc    12, 0, 0x7F3120C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3120C4u;
                return;
            }
            goto label_7F3120C4;
        }
    }

label_7F3120FC:
    ctx->pc = 0x7F3120FCu;
    ctx->downcount -= 16;
    // 7F3120FC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312100:
    ctx->pc = 0x7F312100u;
    // 7F312100: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312104:
    ctx->pc = 0x7F312104u;
    // 7F312104: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312108:
    ctx->pc = 0x7F312108u;
    // 7F312108: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31210C:
    ctx->pc = 0x7F31210Cu;
    // 7F31210C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312110:
    ctx->pc = 0x7F312110u;
    ctx->downcount -= 18;
    // 7F312110: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312114:
    ctx->pc = 0x7F312114u;
    // 7F312114: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312118:
    ctx->pc = 0x7F312118u;
    // 7F312118: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31211C:
    ctx->pc = 0x7F31211Cu;
    // 7F31211C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312120:
    ctx->pc = 0x7F312120u;
    // 7F312120: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312124:
    ctx->pc = 0x7F312124u;
    // 7F312124: lbz     r0, -3351(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3351);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312128:
    ctx->pc = 0x7F312128u;
    // 7F312128: cmplwi  r0, 0x0000
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

label_7F31212C:
    ctx->pc = 0x7F31212Cu;
    // 7F31212C: bc    4, 2, 0x7F3121A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3121A8;
        }
    }

label_7F312130:
    ctx->pc = 0x7F312130u;
    ctx->downcount -= 1;
    // 7F312130: bl      0x80039A10
    {
            ctx->lr = 0x7F312134u;
            ctx->pc = 0x80039A10u;
            return;
    }

label_7F312134:
    ctx->pc = 0x7F312134u;
    ctx->downcount -= 29;
    // 7F312134: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F312138:
    ctx->pc = 0x7F312138u;
    // 7F312138: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F31213C:
    ctx->pc = 0x7F31213Cu;
    // 7F31213C: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F312140:
    ctx->pc = 0x7F312140u;
    // 7F312140: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F312144:
    ctx->pc = 0x7F312144u;
    // 7F312144: addi    r30, r10, -3328
    ctx->gpr[30] = ctx->gpr[10] + (u32)(s32)(-3328);

label_7F312148:
    ctx->pc = 0x7F312148u;
    // 7F312148: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31214C:
    ctx->pc = 0x7F31214Cu;
    // 7F31214C: addi    r31, r9, -3332
    ctx->gpr[31] = ctx->gpr[9] + (u32)(s32)(-3332);

label_7F312150:
    ctx->pc = 0x7F312150u;
    // 7F312150: addi    r10, r8, -3352
    ctx->gpr[10] = ctx->gpr[8] + (u32)(s32)(-3352);

label_7F312154:
    ctx->pc = 0x7F312154u;
    // 7F312154: addi    r9, r7, -3324
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-3324);

label_7F312158:
    ctx->pc = 0x7F312158u;
    // 7F312158: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F31215C:
    ctx->pc = 0x7F31215Cu;
    // 7F31215C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F312160:
    ctx->pc = 0x7F312160u;
    // 7F312160: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F312164:
    ctx->pc = 0x7F312164u;
    // 7F312164: li      r12, 1
    ctx->gpr[12] = (u32)(s32)(1);

label_7F312168:
    ctx->pc = 0x7F312168u;
    // 7F312168: addi    r7, r6, -3344
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-3344);

label_7F31216C:
    ctx->pc = 0x7F31216Cu;
    // 7F31216C: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F312170:
    ctx->pc = 0x7F312170u;
    // 7F312170: addi    r6, r5, -3348
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-3348);

label_7F312174:
    ctx->pc = 0x7F312174u;
    // 7F312174: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312178:
    ctx->pc = 0x7F312178u;
    // 7F312178: li      r5, 14240
    ctx->gpr[5] = (u32)(s32)(14240);

label_7F31217C:
    ctx->pc = 0x7F31217Cu;
    // 7F31217C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312180:
    ctx->pc = 0x7F312180u;
    // 7F312180: li      r0, 16383
    ctx->gpr[0] = (u32)(s32)(16383);

label_7F312184:
    ctx->pc = 0x7F312184u;
    // 7F312184: stw     r29, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F312188:
    ctx->pc = 0x7F312188u;
    // 7F312188: stb     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F31218C:
    ctx->pc = 0x7F31218Cu;
    // 7F31218C: stb     r12, -3351(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-3351);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F312190:
    ctx->pc = 0x7F312190u;
    // 7F312190: stb     r29, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F312194:
    ctx->pc = 0x7F312194u;
    // 7F312194: stw     r29, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F312198:
    ctx->pc = 0x7F312198u;
    // 7F312198: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31219C:
    ctx->pc = 0x7F31219Cu;
    // 7F31219C: stw     r8, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3121A0:
    ctx->pc = 0x7F3121A0u;
    // 7F3121A0: stw     r5, -3336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3336);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3121A4:
    ctx->pc = 0x7F3121A4u;
    // 7F3121A4: stw     r0, -3340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3121A8:
    ctx->pc = 0x7F3121A8u;
    ctx->downcount -= 16;
    // 7F3121A8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3121AC:
    ctx->pc = 0x7F3121ACu;
    // 7F3121AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3121B0:
    ctx->pc = 0x7F3121B0u;
    // 7F3121B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3121B4:
    ctx->pc = 0x7F3121B4u;
    // 7F3121B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3121B8:
    ctx->pc = 0x7F3121B8u;
    // 7F3121B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3121BC:
    ctx->pc = 0x7F3121BCu;
    ctx->downcount -= 17;
    // 7F3121BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3121C0:
    ctx->pc = 0x7F3121C0u;
    // 7F3121C0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3121C4:
    ctx->pc = 0x7F3121C4u;
    // 7F3121C4: stb     r5, 16397(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16397);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121C8:
    ctx->pc = 0x7F3121C8u;
    // 7F3121C8: li      r0, 127
    ctx->gpr[0] = (u32)(s32)(127);

label_7F3121CC:
    ctx->pc = 0x7F3121CCu;
    // 7F3121CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3121D0:
    ctx->pc = 0x7F3121D0u;
    // 7F3121D0: stb     r5, 16398(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16398);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121D4:
    ctx->pc = 0x7F3121D4u;
    // 7F3121D4: stb     r5, 16395(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16395);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121D8:
    ctx->pc = 0x7F3121D8u;
    // 7F3121D8: stb     r5, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121DC:
    ctx->pc = 0x7F3121DCu;
    // 7F3121DC: stb     r5, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121E0:
    ctx->pc = 0x7F3121E0u;
    // 7F3121E0: stb     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3121E4:
    ctx->pc = 0x7F3121E4u;
    // 7F3121E4: stb     r4, 16399(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16399);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3121E8:
    ctx->pc = 0x7F3121E8u;
    // 7F3121E8: stb     r5, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121EC:
    ctx->pc = 0x7F3121ECu;
    // 7F3121EC: stb     r5, 16392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16392);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121F0:
    ctx->pc = 0x7F3121F0u;
    // 7F3121F0: stb     r5, 16393(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16393);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121F4:
    ctx->pc = 0x7F3121F4u;
    // 7F3121F4: stb     r5, 16394(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16394);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3121F8:
    ctx->pc = 0x7F3121F8u;
    // 7F3121F8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3121FC:
    loop_7F3121FC(ctx);
    if (ctx->pc == 0x7F31220Cu) goto label_7F31220C;
    return;
label_7F312200:
    // 7F312200: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F312204:
    ctx->pc = 0x7F312204u;
    // 7F312204: stbx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F312208:
    // 7F312208: bc    16, 0, 0x7F3121FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3121FCu;
                return;
            }
            goto label_7F3121FC;
        }
    }

label_7F31220C:
    ctx->pc = 0x7F31220Cu;
    ctx->downcount -= 6;
    // 7F31220C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F312210:
    ctx->pc = 0x7F312210u;
    // 7F312210: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312214:
    ctx->pc = 0x7F312214u;
    // 7F312214: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F312218:
    ctx->pc = 0x7F312218u;
    // 7F312218: stw     r3, -3324(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31221C:
    ctx->pc = 0x7F31221Cu;
    // 7F31221C: stb     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312220:
    ctx->pc = 0x7F312220u;
    // 7F312220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312224:
    ctx->pc = 0x7F312224u;
    ctx->downcount -= 6;
    // 7F312224: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312228:
    ctx->pc = 0x7F312228u;
    // 7F312228: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31222C:
    ctx->pc = 0x7F31222Cu;
    // 7F31222C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312230:
    ctx->pc = 0x7F312230u;
    // 7F312230: stw     r0, -3324(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312234:
    ctx->pc = 0x7F312234u;
    // 7F312234: stb     r0, -3352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3352);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312238:
    ctx->pc = 0x7F312238u;
    // 7F312238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31223C:
    ctx->pc = 0x7F31223Cu;
    ctx->downcount -= 4;
    // 7F31223C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312240:
    ctx->pc = 0x7F312240u;
    // 7F312240: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_7F312244:
    ctx->pc = 0x7F312244u;
    // 7F312244: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F312248:
    ctx->pc = 0x7F312248u;
    // 7F312248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31224C:
    ctx->pc = 0x7F31224Cu;
    ctx->downcount -= 4;
    // 7F31224C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312250:
    ctx->pc = 0x7F312250u;
    // 7F312250: stw     r3, -3328(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F312254:
    ctx->pc = 0x7F312254u;
    // 7F312254: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F312258:
    ctx->pc = 0x7F312258u;
    // 7F312258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31225C:
    ctx->pc = 0x7F31225Cu;
    ctx->downcount -= 4;
    // 7F31225C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312260:
    ctx->pc = 0x7F312260u;
    // 7F312260: addi    r3, r3, -3332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3332);

label_7F312264:
    ctx->pc = 0x7F312264u;
    // 7F312264: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312268:
    ctx->pc = 0x7F312268u;
    // 7F312268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31226C:
    ctx->pc = 0x7F31226Cu;
    ctx->downcount -= 3;
    // 7F31226C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312270:
    ctx->pc = 0x7F312270u;
    // 7F312270: stb     r3, -3332(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3332);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F312274:
    ctx->pc = 0x7F312274u;
    // 7F312274: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312278:
    ctx->pc = 0x7F312278u;
    ctx->downcount -= 10;
    // 7F312278: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31227C:
    ctx->pc = 0x7F31227Cu;
    // 7F31227C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312280:
    ctx->pc = 0x7F312280u;
    // 7F312280: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F312284:
    ctx->pc = 0x7F312284u;
    // 7F312284: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F312288:
    ctx->pc = 0x7F312288u;
    // 7F312288: addi    r5, r4, -3332
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3332);

label_7F31228C:
    ctx->pc = 0x7F31228Cu;
    // 7F31228C: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F312290:
    ctx->pc = 0x7F312290u;
    // 7F312290: lha     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F312294:
    ctx->pc = 0x7F312294u;
    // 7F312294: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F312298:
    ctx->pc = 0x7F312298u;
    // 7F312298: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31229C:
    ctx->pc = 0x7F31229Cu;
    // 7F31229C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3122A0:
    ctx->pc = 0x7F3122A0u;
    ctx->downcount -= 20;
    // 7F3122A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3122A4:
    ctx->pc = 0x7F3122A4u;
    // 7F3122A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3122A8:
    ctx->pc = 0x7F3122A8u;
    // 7F3122A8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3122AC:
    ctx->pc = 0x7F3122ACu;
    // 7F3122AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3122B0:
    ctx->pc = 0x7F3122B0u;
    // 7F3122B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3122B4:
    ctx->pc = 0x7F3122B4u;
    // 7F3122B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3122B8:
    ctx->pc = 0x7F3122B8u;
    // 7F3122B8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3122BC:
    ctx->pc = 0x7F3122BCu;
    // 7F3122BC: lbz     r0, -3352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3122C0:
    ctx->pc = 0x7F3122C0u;
    // 7F3122C0: cmplwi  r0, 0x0000
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

label_7F3122C4:
    ctx->pc = 0x7F3122C4u;
    // 7F3122C4: bc    12, 2, 0x7F312318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312318;
        }
    }

label_7F3122C8:
    ctx->pc = 0x7F3122C8u;
    ctx->downcount -= 1;
    // 7F3122C8: bl      0x7F3125F4
    {
            ctx->lr = 0x7F3122CCu;
            goto label_7F3125F4;
    }

label_7F3122CC:
    ctx->pc = 0x7F3122CCu;
    ctx->downcount -= 2;
    // 7F3122CC: cmpwi   r3, -6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3122D0:
    ctx->pc = 0x7F3122D0u;
    // 7F3122D0: bc    4, 0, 0x7F3122EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3122EC;
        }
    }

label_7F3122D4:
    ctx->pc = 0x7F3122D4u;
    ctx->downcount -= 2;
    // 7F3122D4: cmpwi   r3, -13
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3122D8:
    ctx->pc = 0x7F3122D8u;
    // 7F3122D8: bc    12, 2, 0x7F312310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312310;
        }
    }

label_7F3122DC:
    ctx->pc = 0x7F3122DCu;
    ctx->downcount -= 1;
    // 7F3122DC: bc    4, 0, 0x7F312310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312310;
        }
    }

label_7F3122E0:
    ctx->pc = 0x7F3122E0u;
    ctx->downcount -= 2;
    // 7F3122E0: cmpwi   r3, -128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3122E4:
    ctx->pc = 0x7F3122E4u;
    // 7F3122E4: bc    12, 2, 0x7F312310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312310;
        }
    }

label_7F3122E8:
    ctx->pc = 0x7F3122E8u;
    ctx->downcount -= 1;
    // 7F3122E8: b       0x7F312310
    {
            goto label_7F312310;
    }

label_7F3122EC:
    ctx->pc = 0x7F3122ECu;
    ctx->downcount -= 2;
    // 7F3122EC: cmpwi   r3, 0
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

label_7F3122F0:
    ctx->pc = 0x7F3122F0u;
    // 7F3122F0: bc    12, 2, 0x7F312304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312304;
        }
    }

label_7F3122F4:
    ctx->pc = 0x7F3122F4u;
    ctx->downcount -= 1;
    // 7F3122F4: bc    4, 0, 0x7F312310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312310;
        }
    }

label_7F3122F8:
    ctx->pc = 0x7F3122F8u;
    ctx->downcount -= 2;
    // 7F3122F8: cmpwi   r3, -4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3122FC:
    ctx->pc = 0x7F3122FCu;
    // 7F3122FC: bc    12, 2, 0x7F312310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312310;
        }
    }

label_7F312300:
    ctx->pc = 0x7F312300u;
    ctx->downcount -= 1;
    // 7F312300: b       0x7F312310
    {
            goto label_7F312310;
    }

label_7F312304:
    ctx->pc = 0x7F312304u;
    ctx->downcount -= 3;
    // 7F312304: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312308:
    ctx->pc = 0x7F312308u;
    // 7F312308: addi    r4, r30, 16408
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16408);

label_7F31230C:
    ctx->pc = 0x7F31230Cu;
    // 7F31230C: bl      0x8003F6B0
    {
            ctx->lr = 0x7F312310u;
            ctx->pc = 0x8003F6B0u;
            return;
    }

label_7F312310:
    ctx->pc = 0x7F312310u;
    ctx->downcount -= 2;
    // 7F312310: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312314:
    ctx->pc = 0x7F312314u;
    // 7F312314: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312318u;
            goto label_7F3126D8;
    }

label_7F312318:
    ctx->pc = 0x7F312318u;
    ctx->downcount -= 16;
    // 7F312318: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31231C:
    ctx->pc = 0x7F31231Cu;
    // 7F31231C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312320:
    ctx->pc = 0x7F312320u;
    // 7F312320: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312324:
    ctx->pc = 0x7F312324u;
    // 7F312324: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312328:
    ctx->pc = 0x7F312328u;
    // 7F312328: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31232C:
    ctx->pc = 0x7F31232Cu;
    ctx->downcount -= 21;
    // 7F31232C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312330:
    ctx->pc = 0x7F312330u;
    // 7F312330: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312334:
    ctx->pc = 0x7F312334u;
    // 7F312334: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F312338:
    ctx->pc = 0x7F312338u;
    // 7F312338: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31233C:
    ctx->pc = 0x7F31233Cu;
    // 7F31233C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312340:
    ctx->pc = 0x7F312340u;
    // 7F312340: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312344:
    ctx->pc = 0x7F312344u;
    // 7F312344: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312348:
    ctx->pc = 0x7F312348u;
    // 7F312348: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F31234C:
    ctx->pc = 0x7F31234Cu;
    // 7F31234C: lbz     r0, -3352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312350:
    ctx->pc = 0x7F312350u;
    // 7F312350: cmplwi  r0, 0x0000
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

label_7F312354:
    ctx->pc = 0x7F312354u;
    // 7F312354: bc    12, 2, 0x7F3123D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D8;
        }
    }

label_7F312358:
    ctx->pc = 0x7F312358u;
    ctx->downcount -= 1;
    // 7F312358: bl      0x7F3125F4
    {
            ctx->lr = 0x7F31235Cu;
            goto label_7F3125F4;
    }

label_7F31235C:
    ctx->pc = 0x7F31235Cu;
    ctx->downcount -= 3;
    // 7F31235C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312360:
    ctx->pc = 0x7F312360u;
    // 7F312360: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312364:
    ctx->pc = 0x7F312364u;
    // 7F312364: bc    4, 0, 0x7F312380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312380;
        }
    }

label_7F312368:
    ctx->pc = 0x7F312368u;
    ctx->downcount -= 2;
    // 7F312368: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31236C:
    ctx->pc = 0x7F31236Cu;
    // 7F31236C: bc    12, 2, 0x7F3123D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D0;
        }
    }

label_7F312370:
    ctx->pc = 0x7F312370u;
    ctx->downcount -= 1;
    // 7F312370: bc    4, 0, 0x7F3123D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D0;
        }
    }

label_7F312374:
    ctx->pc = 0x7F312374u;
    ctx->downcount -= 2;
    // 7F312374: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312378:
    ctx->pc = 0x7F312378u;
    // 7F312378: bc    12, 2, 0x7F3123D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D0;
        }
    }

label_7F31237C:
    ctx->pc = 0x7F31237Cu;
    ctx->downcount -= 1;
    // 7F31237C: b       0x7F3123D0
    {
            goto label_7F3123D0;
    }

label_7F312380:
    ctx->pc = 0x7F312380u;
    ctx->downcount -= 2;
    // 7F312380: cmpwi   r31, 0
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

label_7F312384:
    ctx->pc = 0x7F312384u;
    // 7F312384: bc    12, 2, 0x7F312398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312398;
        }
    }

label_7F312388:
    ctx->pc = 0x7F312388u;
    ctx->downcount -= 1;
    // 7F312388: bc    4, 0, 0x7F3123D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D0;
        }
    }

label_7F31238C:
    ctx->pc = 0x7F31238Cu;
    ctx->downcount -= 2;
    // 7F31238C: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312390:
    ctx->pc = 0x7F312390u;
    // 7F312390: bc    12, 2, 0x7F3123D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3123D0;
        }
    }

label_7F312394:
    ctx->pc = 0x7F312394u;
    ctx->downcount -= 1;
    // 7F312394: b       0x7F3123D0
    {
            goto label_7F3123D0;
    }

label_7F312398:
    ctx->pc = 0x7F312398u;
    ctx->downcount -= 3;
    // 7F312398: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31239C:
    ctx->pc = 0x7F31239Cu;
    // 7F31239C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3123A0:
    ctx->pc = 0x7F3123A0u;
    // 7F3123A0: bl      0x8003F6B0
    {
            ctx->lr = 0x7F3123A4u;
            ctx->pc = 0x8003F6B0u;
            return;
    }

label_7F3123A4:
    ctx->pc = 0x7F3123A4u;
    ctx->downcount -= 8;
    // 7F3123A4: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3123A8:
    ctx->pc = 0x7F3123A8u;
    // 7F3123A8: lwz     r0, 16408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3123AC:
    ctx->pc = 0x7F3123ACu;
    // 7F3123AC: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3123B0:
    ctx->pc = 0x7F3123B0u;
    // 7F3123B0: lwz     r3, 16412(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16412);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3123B4:
    ctx->pc = 0x7F3123B4u;
    // 7F3123B4: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3123B8:
    ctx->pc = 0x7F3123B8u;
    // 7F3123B8: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F3123BC:
    ctx->pc = 0x7F3123BCu;
    // 7F3123BC: or.   r0, r3, r0
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

label_7F3123C0:
    ctx->pc = 0x7F3123C0u;
    // 7F3123C0: bc    12, 2, 0x7F3123CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3123CC;
        }
    }

label_7F3123C4:
    ctx->pc = 0x7F3123C4u;
    ctx->downcount -= 2;
    // 7F3123C4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3123C8:
    ctx->pc = 0x7F3123C8u;
    // 7F3123C8: b       0x7F3123D0
    {
            goto label_7F3123D0;
    }

label_7F3123CC:
    ctx->pc = 0x7F3123CCu;
    ctx->downcount -= 1;
    // 7F3123CC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3123D0:
    ctx->pc = 0x7F3123D0u;
    ctx->downcount -= 2;
    // 7F3123D0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3123D4:
    ctx->pc = 0x7F3123D4u;
    // 7F3123D4: bl      0x7F3126D8
    {
            ctx->lr = 0x7F3123D8u;
            goto label_7F3126D8;
    }

label_7F3123D8:
    ctx->pc = 0x7F3123D8u;
    ctx->downcount -= 17;
    // 7F3123D8: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_7F3123DC:
    ctx->pc = 0x7F3123DCu;
    // 7F3123DC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3123E0:
    ctx->pc = 0x7F3123E0u;
    // 7F3123E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3123E4:
    ctx->pc = 0x7F3123E4u;
    // 7F3123E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3123E8:
    ctx->pc = 0x7F3123E8u;
    // 7F3123E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3123EC:
    ctx->pc = 0x7F3123ECu;
    // 7F3123EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3123F0:
    ctx->pc = 0x7F3123F0u;
    ctx->downcount -= 18;
    // 7F3123F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3123F4:
    ctx->pc = 0x7F3123F4u;
    // 7F3123F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3123F8:
    ctx->pc = 0x7F3123F8u;
    // 7F3123F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3123FC:
    ctx->pc = 0x7F3123FCu;
    // 7F3123FC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312400:
    ctx->pc = 0x7F312400u;
    // 7F312400: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312404:
    ctx->pc = 0x7F312404u;
    // 7F312404: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312408:
    ctx->pc = 0x7F312408u;
    // 7F312408: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31240C:
    ctx->pc = 0x7F31240Cu;
    // 7F31240C: bl      0x7F312524
    {
            ctx->lr = 0x7F312410u;
            goto label_7F312524;
    }

label_7F312410:
    ctx->pc = 0x7F312410u;
    ctx->downcount -= 2;
    // 7F312410: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312414:
    ctx->pc = 0x7F312414u;
    // 7F312414: bc    12, 2, 0x7F312444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312444;
        }
    }

label_7F312418:
    ctx->pc = 0x7F312418u;
    ctx->downcount -= 1;
    // 7F312418: bc    4, 0, 0x7F312434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312434;
        }
    }

label_7F31241C:
    ctx->pc = 0x7F31241Cu;
    ctx->downcount -= 2;
    // 7F31241C: cmpwi   r3, -128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312420:
    ctx->pc = 0x7F312420u;
    // 7F312420: bc    12, 2, 0x7F312454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312454;
        }
    }

label_7F312424:
    ctx->pc = 0x7F312424u;
    ctx->downcount -= 1;
    // 7F312424: bc    12, 0, 0x7F312460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312460;
        }
    }

label_7F312428:
    ctx->pc = 0x7F312428u;
    ctx->downcount -= 2;
    // 7F312428: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31242C:
    ctx->pc = 0x7F31242Cu;
    // 7F31242C: bc    4, 0, 0x7F312454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312454;
        }
    }

label_7F312430:
    ctx->pc = 0x7F312430u;
    ctx->downcount -= 1;
    // 7F312430: b       0x7F312460
    {
            goto label_7F312460;
    }

label_7F312434:
    ctx->pc = 0x7F312434u;
    ctx->downcount -= 2;
    // 7F312434: cmpwi   r3, 0
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

label_7F312438:
    ctx->pc = 0x7F312438u;
    // 7F312438: bc    12, 2, 0x7F312444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312444;
        }
    }

label_7F31243C:
    ctx->pc = 0x7F31243Cu;
    ctx->downcount -= 1;
    // 7F31243C: bc    4, 0, 0x7F312460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312460;
        }
    }

label_7F312440:
    ctx->pc = 0x7F312440u;
    ctx->downcount -= 1;
    // 7F312440: b       0x7F312454
    {
            goto label_7F312454;
    }

label_7F312444:
    ctx->pc = 0x7F312444u;
    ctx->downcount -= 4;
    // 7F312444: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312448:
    ctx->pc = 0x7F312448u;
    // 7F312448: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31244C:
    ctx->pc = 0x7F31244Cu;
    // 7F31244C: stb     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312450:
    ctx->pc = 0x7F312450u;
    // 7F312450: b       0x7F312460
    {
            goto label_7F312460;
    }

label_7F312454:
    ctx->pc = 0x7F312454u;
    ctx->downcount -= 3;
    // 7F312454: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312458:
    ctx->pc = 0x7F312458u;
    // 7F312458: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31245C:
    ctx->pc = 0x7F31245Cu;
    // 7F31245C: stb     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312460:
    ctx->pc = 0x7F312460u;
    ctx->downcount -= 16;
    // 7F312460: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312464:
    ctx->pc = 0x7F312464u;
    // 7F312464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312468:
    ctx->pc = 0x7F312468u;
    // 7F312468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31246C:
    ctx->pc = 0x7F31246Cu;
    // 7F31246C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312470:
    ctx->pc = 0x7F312470u;
    // 7F312470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312474:
    ctx->pc = 0x7F312474u;
    ctx->downcount -= 19;
    // 7F312474: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312478:
    ctx->pc = 0x7F312478u;
    // 7F312478: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31247C:
    ctx->pc = 0x7F31247Cu;
    // 7F31247C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312480:
    ctx->pc = 0x7F312480u;
    // 7F312480: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312484:
    ctx->pc = 0x7F312484u;
    // 7F312484: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312488:
    ctx->pc = 0x7F312488u;
    // 7F312488: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31248C:
    ctx->pc = 0x7F31248Cu;
    // 7F31248C: lbz     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312490:
    ctx->pc = 0x7F312490u;
    // 7F312490: cmplwi  r0, 0x0000
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

label_7F312494:
    ctx->pc = 0x7F312494u;
    // 7F312494: bc    12, 2, 0x7F312510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312510;
        }
    }

label_7F312498:
    ctx->pc = 0x7F312498u;
    ctx->downcount -= 2;
    // 7F312498: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31249C:
    ctx->pc = 0x7F31249Cu;
    // 7F31249C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3124A0:
    ctx->downcount -= 2;
    // 7F3124A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3124A4:
    // 7F3124A4: bl      0x7F312524
    {
            ctx->lr = 0x7F3124A8u;
            goto label_7F312524;
    }

label_7F3124A8:
    ctx->downcount -= 2;
    // 7F3124A8: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3124AC:
    // 7F3124AC: bc    12, 2, 0x7F3124DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3124DC;
        }
    }

label_7F3124B0:
    ctx->downcount -= 1;
    // 7F3124B0: bc    4, 0, 0x7F3124CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3124CC;
        }
    }

label_7F3124B4:
    ctx->downcount -= 2;
    // 7F3124B4: cmpwi   r3, -128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3124B8:
    // 7F3124B8: bc    12, 2, 0x7F3124EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3124EC;
        }
    }

label_7F3124BC:
    ctx->downcount -= 1;
    // 7F3124BC: bc    12, 0, 0x7F3124F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3124F8;
        }
    }

label_7F3124C0:
    ctx->downcount -= 2;
    // 7F3124C0: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3124C4:
    // 7F3124C4: bc    4, 0, 0x7F3124EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3124EC;
        }
    }

label_7F3124C8:
    ctx->downcount -= 1;
    // 7F3124C8: b       0x7F3124F8
    {
            goto label_7F3124F8;
    }

label_7F3124CC:
    ctx->downcount -= 2;
    // 7F3124CC: cmpwi   r3, 0
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

label_7F3124D0:
    // 7F3124D0: bc    12, 2, 0x7F3124DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3124DC;
        }
    }

label_7F3124D4:
    ctx->downcount -= 1;
    // 7F3124D4: bc    4, 0, 0x7F3124F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3124F8;
        }
    }

label_7F3124D8:
    ctx->downcount -= 1;
    // 7F3124D8: b       0x7F3124EC
    {
            goto label_7F3124EC;
    }

label_7F3124DC:
    ctx->downcount -= 4;
    // 7F3124DC: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3124E0:
    // 7F3124E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3124E4:
    ctx->pc = 0x7F3124E4u;
    // 7F3124E4: stbx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3124E8:
    // 7F3124E8: b       0x7F3124F8
    {
            goto label_7F3124F8;
    }

label_7F3124EC:
    ctx->downcount -= 3;
    // 7F3124EC: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3124F0:
    // 7F3124F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3124F4:
    ctx->pc = 0x7F3124F4u;
    // 7F3124F4: stbx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3124F8:
    ctx->downcount -= 6;
    // 7F3124F8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3124FC:
    // 7F3124FC: addi    r0, r31, 30848
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(30848);

label_7F312500:
    // 7F312500: cmpwi   r30, 2
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

label_7F312504:
    ctx->pc = 0x7F312504u;
    // 7F312504: sthx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F312508:
    // 7F312508: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_7F31250C:
    // 7F31250C: bc    12, 0, 0x7F3124A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3124A0u;
                return;
            }
            goto label_7F3124A0;
        }
    }

label_7F312510:
    ctx->pc = 0x7F312510u;
    ctx->downcount -= 16;
    // 7F312510: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312514:
    ctx->pc = 0x7F312514u;
    // 7F312514: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312518:
    ctx->pc = 0x7F312518u;
    // 7F312518: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31251C:
    ctx->pc = 0x7F31251Cu;
    // 7F31251C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312520:
    ctx->pc = 0x7F312520u;
    // 7F312520: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312524:
    ctx->pc = 0x7F312524u;
    ctx->downcount -= 20;
    // 7F312524: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312528:
    ctx->pc = 0x7F312528u;
    // 7F312528: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31252C:
    ctx->pc = 0x7F31252Cu;
    // 7F31252C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312530:
    ctx->pc = 0x7F312530u;
    // 7F312530: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312534:
    ctx->pc = 0x7F312534u;
    // 7F312534: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312538:
    ctx->pc = 0x7F312538u;
    // 7F312538: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31253C:
    ctx->pc = 0x7F31253Cu;
    // 7F31253C: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_7F312540:
    ctx->pc = 0x7F312540u;
    // 7F312540: lbz     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312544:
    ctx->pc = 0x7F312544u;
    // 7F312544: cmplwi  r0, 0x0000
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

label_7F312548:
    ctx->pc = 0x7F312548u;
    // 7F312548: bc    12, 2, 0x7F312574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312574;
        }
    }

label_7F31254C:
    ctx->pc = 0x7F31254Cu;
    ctx->downcount -= 1;
    // 7F31254C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F312550:
    ctx->downcount -= 4;
    // 7F312550: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312554:
    // 7F312554: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F312558:
    // 7F312558: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31255C:
    // 7F31255C: bl      0x8003CA50
    {
            ctx->lr = 0x7F312560u;
            ctx->pc = 0x8003CA50u;
            return;
    }

label_7F312560:
    ctx->downcount -= 2;
    // 7F312560: cmpwi   r3, 0
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

label_7F312564:
    // 7F312564: bc    12, 2, 0x7F312574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312574;
        }
    }

label_7F312568:
    ctx->downcount -= 3;
    // 7F312568: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F31256C:
    // 7F31256C: cmpwi   r31, 100
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312570:
    // 7F312570: bc    12, 0, 0x7F312550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F312550u;
                return;
            }
            goto label_7F312550;
        }
    }

label_7F312574:
    ctx->pc = 0x7F312574u;
    ctx->downcount -= 16;
    // 7F312574: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312578:
    ctx->pc = 0x7F312578u;
    // 7F312578: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31257C:
    ctx->pc = 0x7F31257Cu;
    // 7F31257C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312580:
    ctx->pc = 0x7F312580u;
    // 7F312580: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312584:
    ctx->pc = 0x7F312584u;
    // 7F312584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312588:
    ctx->pc = 0x7F312588u;
    ctx->downcount -= 22;
    // 7F312588: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31258C:
    ctx->pc = 0x7F31258Cu;
    // 7F31258C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312590:
    ctx->pc = 0x7F312590u;
    // 7F312590: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F312594:
    ctx->pc = 0x7F312594u;
    // 7F312594: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312598:
    ctx->pc = 0x7F312598u;
    // 7F312598: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31259C:
    ctx->pc = 0x7F31259Cu;
    // 7F31259C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3125A0:
    ctx->pc = 0x7F3125A0u;
    // 7F3125A0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3125A4:
    ctx->pc = 0x7F3125A4u;
    // 7F3125A4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3125A8:
    ctx->pc = 0x7F3125A8u;
    // 7F3125A8: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_7F3125AC:
    ctx->pc = 0x7F3125ACu;
    // 7F3125AC: lbz     r0, -3352(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3125B0:
    ctx->pc = 0x7F3125B0u;
    // 7F3125B0: cmplwi  r0, 0x0000
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

label_7F3125B4:
    ctx->pc = 0x7F3125B4u;
    // 7F3125B4: bc    12, 2, 0x7F3125E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3125E0;
        }
    }

label_7F3125B8:
    ctx->pc = 0x7F3125B8u;
    ctx->downcount -= 1;
    // 7F3125B8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3125BC:
    ctx->downcount -= 4;
    // 7F3125BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3125C0:
    // 7F3125C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3125C4:
    // 7F3125C4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3125C8:
    // 7F3125C8: bl      0x8003CA50
    {
            ctx->lr = 0x7F3125CCu;
            ctx->pc = 0x8003CA50u;
            return;
    }

label_7F3125CC:
    ctx->downcount -= 2;
    // 7F3125CC: cmpwi   r3, 0
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

label_7F3125D0:
    // 7F3125D0: bc    12, 2, 0x7F3125E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3125E0;
        }
    }

label_7F3125D4:
    ctx->downcount -= 3;
    // 7F3125D4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F3125D8:
    // 7F3125D8: cmpwi   r31, 100
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3125DC:
    // 7F3125DC: bc    12, 0, 0x7F3125BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125BCu;
                return;
            }
            goto label_7F3125BC;
        }
    }

label_7F3125E0:
    ctx->pc = 0x7F3125E0u;
    ctx->downcount -= 16;
    // 7F3125E0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3125E4:
    ctx->pc = 0x7F3125E4u;
    // 7F3125E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3125E8:
    ctx->pc = 0x7F3125E8u;
    // 7F3125E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3125EC:
    ctx->pc = 0x7F3125ECu;
    // 7F3125EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3125F0:
    ctx->pc = 0x7F3125F0u;
    // 7F3125F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3125F4:
    ctx->pc = 0x7F3125F4u;
    ctx->downcount -= 20;
    // 7F3125F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3125F8:
    ctx->pc = 0x7F3125F8u;
    // 7F3125F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3125FC:
    ctx->pc = 0x7F3125FCu;
    // 7F3125FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312600:
    ctx->pc = 0x7F312600u;
    // 7F312600: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312604:
    ctx->pc = 0x7F312604u;
    // 7F312604: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312608:
    ctx->pc = 0x7F312608u;
    // 7F312608: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31260C:
    ctx->pc = 0x7F31260Cu;
    // 7F31260C: li      r31, -128
    ctx->gpr[31] = (u32)(s32)(-128);

label_7F312610:
    ctx->pc = 0x7F312610u;
    // 7F312610: lbz     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312614:
    ctx->pc = 0x7F312614u;
    // 7F312614: cmplwi  r0, 0x0000
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

label_7F312618:
    ctx->pc = 0x7F312618u;
    // 7F312618: bc    12, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F31261C:
    ctx->pc = 0x7F31261Cu;
    ctx->downcount -= 3;
    // 7F31261C: lbz     r0, 16398(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16398);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312620:
    ctx->pc = 0x7F312620u;
    // 7F312620: extsb. r0, r0
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

label_7F312624:
    ctx->pc = 0x7F312624u;
    // 7F312624: bc    4, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F312628:
    ctx->pc = 0x7F312628u;
    ctx->downcount -= 3;
    // 7F312628: lbz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31262C:
    ctx->pc = 0x7F31262Cu;
    // 7F31262C: extsb. r0, r3
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

label_7F312630:
    ctx->pc = 0x7F312630u;
    // 7F312630: bc    12, 2, 0x7F312640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312640;
        }
    }

label_7F312634:
    ctx->pc = 0x7F312634u;
    ctx->downcount -= 3;
    // 7F312634: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312638:
    ctx->pc = 0x7F312638u;
    // 7F312638: cmpwi   r0, 1
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

label_7F31263C:
    ctx->pc = 0x7F31263Cu;
    // 7F31263C: bc    4, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F312640:
    ctx->pc = 0x7F312640u;
    ctx->downcount -= 4;
    // 7F312640: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312644:
    ctx->pc = 0x7F312644u;
    // 7F312644: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F312648:
    ctx->pc = 0x7F312648u;
    // 7F312648: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31264C:
    ctx->pc = 0x7F31264Cu;
    // 7F31264C: bl      0x7F312588
    {
            ctx->lr = 0x7F312650u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F312588u;
                return;
            }
            goto label_7F312588;
    }

label_7F312650:
    ctx->pc = 0x7F312650u;
    ctx->downcount -= 2;
    // 7F312650: or.   r31, r3, r3
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

label_7F312654:
    ctx->pc = 0x7F312654u;
    // 7F312654: bc    4, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F312658:
    ctx->pc = 0x7F312658u;
    ctx->downcount -= 7;
    // 7F312658: lbz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31265C:
    ctx->pc = 0x7F31265Cu;
    // 7F31265C: lis     r5, 32561
    ctx->gpr[5] = ((u32)(s32)(32561) << 16);

label_7F312660:
    ctx->pc = 0x7F312660u;
    // 7F312660: addis   r4, r30, 1
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F312664:
    ctx->pc = 0x7F312664u;
    // 7F312664: addi    r5, r5, 16632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16632);

label_7F312668:
    ctx->pc = 0x7F312668u;
    // 7F312668: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F31266C:
    ctx->pc = 0x7F31266Cu;
    // 7F31266C: addi    r4, r4, -26912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26912);

label_7F312670:
    ctx->pc = 0x7F312670u;
    // 7F312670: bl      0x8003D2B4
    {
            ctx->lr = 0x7F312674u;
            ctx->pc = 0x8003D2B4u;
            return;
    }

label_7F312674:
    ctx->pc = 0x7F312674u;
    ctx->downcount -= 2;
    // 7F312674: or.   r31, r3, r3
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

label_7F312678:
    ctx->pc = 0x7F312678u;
    // 7F312678: bc    12, 2, 0x7F31268C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31268C;
        }
    }

label_7F31267C:
    ctx->pc = 0x7F31267Cu;
    ctx->downcount -= 2;
    // 7F31267C: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312680:
    ctx->pc = 0x7F312680u;
    // 7F312680: bc    12, 2, 0x7F31268C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31268C;
        }
    }

label_7F312684:
    ctx->pc = 0x7F312684u;
    ctx->downcount -= 2;
    // 7F312684: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312688:
    ctx->pc = 0x7F312688u;
    // 7F312688: bc    4, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F31268C:
    ctx->pc = 0x7F31268Cu;
    ctx->downcount -= 7;
    // 7F31268C: lbz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312690:
    ctx->pc = 0x7F312690u;
    // 7F312690: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F312694:
    ctx->pc = 0x7F312694u;
    // 7F312694: stb     r3, 16397(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16397);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F312698:
    ctx->pc = 0x7F312698u;
    // 7F312698: stb     r0, 16398(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16398);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31269C:
    ctx->pc = 0x7F31269Cu;
    // 7F31269C: lbz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3126A0:
    ctx->pc = 0x7F3126A0u;
    // 7F3126A0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3126A4:
    ctx->pc = 0x7F3126A4u;
    // 7F3126A4: bl      0x8003C930
    {
            ctx->lr = 0x7F3126A8u;
            ctx->pc = 0x8003C930u;
            return;
    }

label_7F3126A8:
    ctx->pc = 0x7F3126A8u;
    ctx->downcount -= 2;
    // 7F3126A8: or.   r31, r3, r3
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

label_7F3126AC:
    ctx->pc = 0x7F3126ACu;
    // 7F3126AC: bc    4, 2, 0x7F3126C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3126C0;
        }
    }

label_7F3126B0:
    ctx->pc = 0x7F3126B0u;
    ctx->downcount -= 4;
    // 7F3126B0: lbz     r3, 16397(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3126B4:
    ctx->pc = 0x7F3126B4u;
    // 7F3126B4: addi    r4, r30, 16580
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16580);

label_7F3126B8:
    ctx->pc = 0x7F3126B8u;
    // 7F3126B8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3126BC:
    ctx->pc = 0x7F3126BCu;
    // 7F3126BC: bl      0x80039D68
    {
            ctx->lr = 0x7F3126C0u;
            ctx->pc = 0x80039D68u;
            return;
    }

label_7F3126C0:
    ctx->pc = 0x7F3126C0u;
    ctx->downcount -= 17;
    // 7F3126C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3126C4:
    ctx->pc = 0x7F3126C4u;
    // 7F3126C4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3126C8:
    ctx->pc = 0x7F3126C8u;
    // 7F3126C8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3126CC:
    ctx->pc = 0x7F3126CCu;
    // 7F3126CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3126D0:
    ctx->pc = 0x7F3126D0u;
    // 7F3126D0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3126D4:
    ctx->pc = 0x7F3126D4u;
    // 7F3126D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3126D8:
    ctx->pc = 0x7F3126D8u;
    ctx->downcount -= 9;
    // 7F3126D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3126DC:
    ctx->pc = 0x7F3126DCu;
    // 7F3126DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3126E0:
    ctx->pc = 0x7F3126E0u;
    // 7F3126E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3126E4:
    ctx->pc = 0x7F3126E4u;
    // 7F3126E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3126E8:
    ctx->pc = 0x7F3126E8u;
    // 7F3126E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3126EC:
    ctx->pc = 0x7F3126ECu;
    // 7F3126EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3126F0:
    ctx->pc = 0x7F3126F0u;
    // 7F3126F0: lbz     r0, 16398(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16398);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3126F4:
    ctx->pc = 0x7F3126F4u;
    // 7F3126F4: extsb. r0, r0
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

label_7F3126F8:
    ctx->pc = 0x7F3126F8u;
    // 7F3126F8: bc    12, 2, 0x7F312708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312708;
        }
    }

label_7F3126FC:
    ctx->pc = 0x7F3126FCu;
    ctx->downcount -= 3;
    // 7F3126FC: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312700:
    ctx->pc = 0x7F312700u;
    // 7F312700: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312704:
    ctx->pc = 0x7F312704u;
    // 7F312704: bl      0x8003D398
    {
            ctx->lr = 0x7F312708u;
            ctx->pc = 0x8003D398u;
            return;
    }

label_7F312708:
    ctx->pc = 0x7F312708u;
    ctx->downcount -= 10;
    // 7F312708: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31270C:
    ctx->pc = 0x7F31270Cu;
    // 7F31270C: stb     r0, 16398(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16398);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312710:
    ctx->pc = 0x7F312710u;
    // 7F312710: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312714:
    ctx->pc = 0x7F312714u;
    // 7F312714: stb     r0, 16576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16576);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312718:
    ctx->pc = 0x7F312718u;
    // 7F312718: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31271C:
    ctx->pc = 0x7F31271Cu;
    // 7F31271C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F312720:
    ctx->pc = 0x7F312720u;
    // 7F312720: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312724:
    ctx->pc = 0x7F312724u;
    // 7F312724: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312728:
    ctx->pc = 0x7F312728u;
    // 7F312728: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31272C:
    ctx->pc = 0x7F31272Cu;
    ctx->downcount -= 16;
    // 7F31272C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312730:
    ctx->pc = 0x7F312730u;
    // 7F312730: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312734:
    ctx->pc = 0x7F312734u;
    // 7F312734: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312738:
    ctx->pc = 0x7F312738u;
    // 7F312738: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31273C:
    ctx->pc = 0x7F31273Cu;
    // 7F31273C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312740:
    ctx->pc = 0x7F312740u;
    // 7F312740: bl      0x7F3125F4
    {
            ctx->lr = 0x7F312744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F312744:
    ctx->pc = 0x7F312744u;
    ctx->downcount -= 3;
    // 7F312744: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312748:
    ctx->pc = 0x7F312748u;
    // 7F312748: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31274C:
    ctx->pc = 0x7F31274Cu;
    // 7F31274C: bc    12, 2, 0x7F312784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312784;
        }
    }

label_7F312750:
    ctx->pc = 0x7F312750u;
    ctx->downcount -= 1;
    // 7F312750: bc    4, 0, 0x7F31276C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31276C;
        }
    }

label_7F312754:
    ctx->pc = 0x7F312754u;
    ctx->downcount -= 2;
    // 7F312754: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312758:
    ctx->pc = 0x7F312758u;
    // 7F312758: bc    12, 2, 0x7F312784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312784;
        }
    }

label_7F31275C:
    ctx->pc = 0x7F31275Cu;
    ctx->downcount -= 1;
    // 7F31275C: bc    4, 0, 0x7F312790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312790;
        }
    }

label_7F312760:
    ctx->pc = 0x7F312760u;
    ctx->downcount -= 2;
    // 7F312760: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312764:
    ctx->pc = 0x7F312764u;
    // 7F312764: bc    12, 2, 0x7F312790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312790;
        }
    }

label_7F312768:
    ctx->pc = 0x7F312768u;
    ctx->downcount -= 1;
    // 7F312768: b       0x7F312790
    {
            goto label_7F312790;
    }

label_7F31276C:
    ctx->pc = 0x7F31276Cu;
    ctx->downcount -= 2;
    // 7F31276C: cmpwi   r31, 0
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

label_7F312770:
    ctx->pc = 0x7F312770u;
    // 7F312770: bc    12, 2, 0x7F312784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312784;
        }
    }

label_7F312774:
    ctx->pc = 0x7F312774u;
    ctx->downcount -= 1;
    // 7F312774: bc    4, 0, 0x7F312790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312790;
        }
    }

label_7F312778:
    ctx->pc = 0x7F312778u;
    ctx->downcount -= 2;
    // 7F312778: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31277C:
    ctx->pc = 0x7F31277Cu;
    // 7F31277C: bc    12, 2, 0x7F312790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312790;
        }
    }

label_7F312780:
    ctx->pc = 0x7F312780u;
    ctx->downcount -= 1;
    // 7F312780: b       0x7F312790
    {
            goto label_7F312790;
    }

label_7F312784:
    ctx->pc = 0x7F312784u;
    ctx->downcount -= 2;
    // 7F312784: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312788:
    ctx->pc = 0x7F312788u;
    // 7F312788: bl      0x7F3127B0
    {
            ctx->lr = 0x7F31278Cu;
            goto label_7F3127B0;
    }

label_7F31278C:
    ctx->pc = 0x7F31278Cu;
    ctx->downcount -= 1;
    // 7F31278C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312790:
    ctx->pc = 0x7F312790u;
    ctx->downcount -= 2;
    // 7F312790: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312794:
    ctx->pc = 0x7F312794u;
    // 7F312794: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312798u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312798:
    ctx->pc = 0x7F312798u;
    ctx->downcount -= 17;
    // 7F312798: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31279C:
    ctx->pc = 0x7F31279Cu;
    // 7F31279C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3127A0:
    ctx->pc = 0x7F3127A0u;
    // 7F3127A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3127A4:
    ctx->pc = 0x7F3127A4u;
    // 7F3127A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3127A8:
    ctx->pc = 0x7F3127A8u;
    // 7F3127A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3127AC:
    ctx->pc = 0x7F3127ACu;
    // 7F3127AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3127B0:
    ctx->pc = 0x7F3127B0u;
    ctx->downcount -= 6;
    // 7F3127B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3127B4:
    ctx->pc = 0x7F3127B4u;
    // 7F3127B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3127B8:
    ctx->pc = 0x7F3127B8u;
    // 7F3127B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3127BC:
    ctx->pc = 0x7F3127BCu;
    // 7F3127BC: lbz     r3, 16397(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3127C0:
    ctx->pc = 0x7F3127C0u;
    // 7F3127C0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3127C4:
    ctx->pc = 0x7F3127C4u;
    // 7F3127C4: bl      0x8003DBE0
    {
            ctx->lr = 0x7F3127C8u;
            ctx->pc = 0x8003DBE0u;
            return;
    }

label_7F3127C8:
    ctx->pc = 0x7F3127C8u;
    ctx->downcount -= 5;
    // 7F3127C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3127CC:
    ctx->pc = 0x7F3127CCu;
    // 7F3127CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3127D0:
    ctx->pc = 0x7F3127D0u;
    // 7F3127D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3127D4:
    ctx->pc = 0x7F3127D4u;
    // 7F3127D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3127D8:
    ctx->pc = 0x7F3127D8u;
    ctx->downcount -= 16;
    // 7F3127D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3127DC:
    ctx->pc = 0x7F3127DCu;
    // 7F3127DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3127E0:
    ctx->pc = 0x7F3127E0u;
    // 7F3127E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3127E4:
    ctx->pc = 0x7F3127E4u;
    // 7F3127E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3127E8:
    ctx->pc = 0x7F3127E8u;
    // 7F3127E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3127EC:
    ctx->pc = 0x7F3127ECu;
    // 7F3127EC: bl      0x7F3125F4
    {
            ctx->lr = 0x7F3127F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F3127F0:
    ctx->pc = 0x7F3127F0u;
    ctx->downcount -= 3;
    // 7F3127F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3127F4:
    ctx->pc = 0x7F3127F4u;
    // 7F3127F4: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3127F8:
    ctx->pc = 0x7F3127F8u;
    // 7F3127F8: bc    4, 0, 0x7F312814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312814;
        }
    }

label_7F3127FC:
    ctx->pc = 0x7F3127FCu;
    ctx->downcount -= 2;
    // 7F3127FC: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312800:
    ctx->pc = 0x7F312800u;
    // 7F312800: bc    12, 2, 0x7F312838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312838;
        }
    }

label_7F312804:
    ctx->pc = 0x7F312804u;
    ctx->downcount -= 1;
    // 7F312804: bc    4, 0, 0x7F312838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312838;
        }
    }

label_7F312808:
    ctx->pc = 0x7F312808u;
    ctx->downcount -= 2;
    // 7F312808: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31280C:
    ctx->pc = 0x7F31280Cu;
    // 7F31280C: bc    12, 2, 0x7F312838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312838;
        }
    }

label_7F312810:
    ctx->pc = 0x7F312810u;
    ctx->downcount -= 1;
    // 7F312810: b       0x7F312838
    {
            goto label_7F312838;
    }

label_7F312814:
    ctx->pc = 0x7F312814u;
    ctx->downcount -= 2;
    // 7F312814: cmpwi   r31, 0
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

label_7F312818:
    ctx->pc = 0x7F312818u;
    // 7F312818: bc    12, 2, 0x7F31282C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31282C;
        }
    }

label_7F31281C:
    ctx->pc = 0x7F31281Cu;
    ctx->downcount -= 1;
    // 7F31281C: bc    4, 0, 0x7F312838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312838;
        }
    }

label_7F312820:
    ctx->pc = 0x7F312820u;
    ctx->downcount -= 2;
    // 7F312820: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312824:
    ctx->pc = 0x7F312824u;
    // 7F312824: bc    12, 2, 0x7F312838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312838;
        }
    }

label_7F312828:
    ctx->pc = 0x7F312828u;
    ctx->downcount -= 1;
    // 7F312828: b       0x7F312838
    {
            goto label_7F312838;
    }

label_7F31282C:
    ctx->pc = 0x7F31282Cu;
    ctx->downcount -= 2;
    // 7F31282C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312830:
    ctx->pc = 0x7F312830u;
    // 7F312830: bl      0x7F312858
    {
            ctx->lr = 0x7F312834u;
            goto label_7F312858;
    }

label_7F312834:
    ctx->pc = 0x7F312834u;
    ctx->downcount -= 1;
    // 7F312834: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312838:
    ctx->pc = 0x7F312838u;
    ctx->downcount -= 2;
    // 7F312838: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31283C:
    ctx->pc = 0x7F31283Cu;
    // 7F31283C: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312840u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312840:
    ctx->pc = 0x7F312840u;
    ctx->downcount -= 17;
    // 7F312840: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312844:
    ctx->pc = 0x7F312844u;
    // 7F312844: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312848:
    ctx->pc = 0x7F312848u;
    // 7F312848: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31284C:
    ctx->pc = 0x7F31284Cu;
    // 7F31284C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312850:
    ctx->pc = 0x7F312850u;
    // 7F312850: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312854:
    ctx->pc = 0x7F312854u;
    // 7F312854: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312858:
    ctx->pc = 0x7F312858u;
    ctx->downcount -= 8;
    // 7F312858: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31285C:
    ctx->pc = 0x7F31285Cu;
    // 7F31285C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312860:
    ctx->pc = 0x7F312860u;
    // 7F312860: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312864:
    ctx->pc = 0x7F312864u;
    // 7F312864: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312868:
    ctx->pc = 0x7F312868u;
    // 7F312868: addi    r4, r4, 16416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16416);

label_7F31286C:
    ctx->pc = 0x7F31286Cu;
    // 7F31286C: lbz     r3, 16397(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312870:
    ctx->pc = 0x7F312870u;
    // 7F312870: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312874:
    ctx->pc = 0x7F312874u;
    // 7F312874: bl      0x8003EF5C
    {
            ctx->lr = 0x7F312878u;
            ctx->pc = 0x8003EF5Cu;
            return;
    }

label_7F312878:
    ctx->pc = 0x7F312878u;
    ctx->downcount -= 5;
    // 7F312878: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31287C:
    ctx->pc = 0x7F31287Cu;
    // 7F31287C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312880:
    ctx->pc = 0x7F312880u;
    // 7F312880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312884:
    ctx->pc = 0x7F312884u;
    // 7F312884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312888:
    ctx->pc = 0x7F312888u;
    ctx->downcount -= 4;
    // 7F312888: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F31288C:
    ctx->pc = 0x7F31288Cu;
    // 7F31288C: lbz     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312890:
    ctx->pc = 0x7F312890u;
    // 7F312890: cmplwi  r0, 0x0000
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

label_7F312894:
    ctx->pc = 0x7F312894u;
    // 7F312894: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312898:
    ctx->pc = 0x7F312898u;
    ctx->downcount -= 7;
    // 7F312898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31289C:
    ctx->pc = 0x7F31289Cu;
    // 7F31289C: li      r0, 127
    ctx->gpr[0] = (u32)(s32)(127);

label_7F3128A0:
    ctx->pc = 0x7F3128A0u;
    // 7F3128A0: stb     r4, 16393(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16393);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3128A4:
    ctx->pc = 0x7F3128A4u;
    // 7F3128A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3128A8:
    ctx->pc = 0x7F3128A8u;
    // 7F3128A8: stb     r4, 16392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16392);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3128AC:
    ctx->pc = 0x7F3128ACu;
    // 7F3128AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3128B0:
    loop_7F3128B0(ctx);
    if (ctx->pc == 0x7F3128C0u) goto label_7F3128C0;
    return;
label_7F3128B4:
    // 7F3128B4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3128B8:
    ctx->pc = 0x7F3128B8u;
    // 7F3128B8: stbx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3128BC:
    // 7F3128BC: bc    16, 0, 0x7F3128B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3128B0u;
                return;
            }
            goto label_7F3128B0;
        }
    }

label_7F3128C0:
    ctx->pc = 0x7F3128C0u;
    ctx->downcount -= 1;
    // 7F3128C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3128C4:
    ctx->pc = 0x7F3128C4u;
    ctx->downcount -= 6;
    // 7F3128C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3128C8:
    ctx->pc = 0x7F3128C8u;
    // 7F3128C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3128CC:
    ctx->pc = 0x7F3128CCu;
    // 7F3128CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3128D0:
    ctx->pc = 0x7F3128D0u;
    // 7F3128D0: lbz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F3128D4:
    ctx->pc = 0x7F3128D4u;
    // 7F3128D4: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F3128D8:
    ctx->pc = 0x7F3128D8u;
    // 7F3128D8: bl      0x7F3128EC
    {
            ctx->lr = 0x7F3128DCu;
            goto label_7F3128EC;
    }

label_7F3128DC:
    ctx->pc = 0x7F3128DCu;
    ctx->downcount -= 5;
    // 7F3128DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3128E0:
    ctx->pc = 0x7F3128E0u;
    // 7F3128E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3128E4:
    ctx->pc = 0x7F3128E4u;
    // 7F3128E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3128E8:
    ctx->pc = 0x7F3128E8u;
    // 7F3128E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3128EC:
    ctx->pc = 0x7F3128ECu;
    ctx->downcount -= 21;
    // 7F3128EC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3128F0:
    ctx->pc = 0x7F3128F0u;
    // 7F3128F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3128F4:
    ctx->pc = 0x7F3128F4u;
    // 7F3128F4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3128F8:
    ctx->pc = 0x7F3128F8u;
    // 7F3128F8: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3128FC:
    ctx->pc = 0x7F3128FCu;
    // 7F3128FC: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F312900:
    ctx->pc = 0x7F312900u;
    // 7F312900: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312904:
    ctx->pc = 0x7F312904u;
    // 7F312904: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312908:
    ctx->pc = 0x7F312908u;
    // 7F312908: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F31290C:
    ctx->pc = 0x7F31290Cu;
    // 7F31290C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F312910:
    ctx->pc = 0x7F312910u;
    // 7F312910: stb     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F312914:
    ctx->pc = 0x7F312914u;
    // 7F312914: bl      0x7F3125F4
    {
            ctx->lr = 0x7F312918u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F312918:
    ctx->pc = 0x7F312918u;
    ctx->downcount -= 3;
    // 7F312918: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31291C:
    ctx->pc = 0x7F31291Cu;
    // 7F31291C: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312920:
    ctx->pc = 0x7F312920u;
    // 7F312920: bc    4, 0, 0x7F31293C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31293C;
        }
    }

label_7F312924:
    ctx->pc = 0x7F312924u;
    ctx->downcount -= 2;
    // 7F312924: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312928:
    ctx->pc = 0x7F312928u;
    // 7F312928: bc    12, 2, 0x7F31296C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31296C;
        }
    }

label_7F31292C:
    ctx->pc = 0x7F31292Cu;
    ctx->downcount -= 1;
    // 7F31292C: bc    4, 0, 0x7F31296C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31296C;
        }
    }

label_7F312930:
    ctx->pc = 0x7F312930u;
    ctx->downcount -= 2;
    // 7F312930: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312934:
    ctx->pc = 0x7F312934u;
    // 7F312934: bc    12, 2, 0x7F31296C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31296C;
        }
    }

label_7F312938:
    ctx->pc = 0x7F312938u;
    ctx->downcount -= 1;
    // 7F312938: b       0x7F31296C
    {
            goto label_7F31296C;
    }

label_7F31293C:
    ctx->pc = 0x7F31293Cu;
    ctx->downcount -= 2;
    // 7F31293C: cmpwi   r31, 0
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

label_7F312940:
    ctx->pc = 0x7F312940u;
    // 7F312940: bc    12, 2, 0x7F312954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312954;
        }
    }

label_7F312944:
    ctx->pc = 0x7F312944u;
    ctx->downcount -= 1;
    // 7F312944: bc    4, 0, 0x7F31296C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31296C;
        }
    }

label_7F312948:
    ctx->pc = 0x7F312948u;
    ctx->downcount -= 2;
    // 7F312948: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31294C:
    ctx->pc = 0x7F31294Cu;
    // 7F31294C: bc    12, 2, 0x7F31296C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31296C;
        }
    }

label_7F312950:
    ctx->pc = 0x7F312950u;
    ctx->downcount -= 1;
    // 7F312950: b       0x7F31296C
    {
            goto label_7F31296C;
    }

label_7F312954:
    ctx->pc = 0x7F312954u;
    ctx->downcount -= 5;
    // 7F312954: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F312958:
    ctx->pc = 0x7F312958u;
    // 7F312958: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31295C:
    ctx->pc = 0x7F31295Cu;
    // 7F31295C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F312960:
    ctx->pc = 0x7F312960u;
    // 7F312960: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312964:
    ctx->pc = 0x7F312964u;
    // 7F312964: bl      0x7F312998
    {
            ctx->lr = 0x7F312968u;
            goto label_7F312998;
    }

label_7F312968:
    ctx->pc = 0x7F312968u;
    ctx->downcount -= 1;
    // 7F312968: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31296C:
    ctx->pc = 0x7F31296Cu;
    ctx->downcount -= 5;
    // 7F31296C: rlwinm r0, r30, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 1u) & 0xFFFFFFFEu;
    }

label_7F312970:
    ctx->pc = 0x7F312970u;
    // 7F312970: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F312974:
    ctx->pc = 0x7F312974u;
    // 7F312974: add   r4, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312978:
    ctx->pc = 0x7F312978u;
    // 7F312978: sth     r31, 30848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30848);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F31297C:
    ctx->pc = 0x7F31297Cu;
    // 7F31297C: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312980u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312980:
    ctx->pc = 0x7F312980u;
    ctx->downcount -= 17;
    // 7F312980: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312984:
    ctx->pc = 0x7F312984u;
    // 7F312984: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312988:
    ctx->pc = 0x7F312988u;
    // 7F312988: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31298C:
    ctx->pc = 0x7F31298Cu;
    // 7F31298C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312990:
    ctx->pc = 0x7F312990u;
    // 7F312990: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312994:
    ctx->pc = 0x7F312994u;
    // 7F312994: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312998:
    ctx->pc = 0x7F312998u;
    ctx->downcount -= 23;
    // 7F312998: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31299C:
    ctx->pc = 0x7F31299Cu;
    // 7F31299C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3129A0:
    ctx->pc = 0x7F3129A0u;
    // 7F3129A0: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F3129A4:
    ctx->pc = 0x7F3129A4u;
    // 7F3129A4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3129A8:
    ctx->pc = 0x7F3129A8u;
    // 7F3129A8: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3129AC:
    ctx->pc = 0x7F3129ACu;
    // 7F3129AC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3129B0:
    ctx->pc = 0x7F3129B0u;
    // 7F3129B0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3129B4:
    ctx->pc = 0x7F3129B4u;
    // 7F3129B4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3129B8:
    ctx->pc = 0x7F3129B8u;
    // 7F3129B8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3129BC:
    ctx->pc = 0x7F3129BCu;
    // 7F3129BC: li      r27, -128
    ctx->gpr[27] = (u32)(s32)(-128);

label_7F3129C0:
    ctx->pc = 0x7F3129C0u;
    // 7F3129C0: lbz     r0, -3352(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3129C4:
    ctx->pc = 0x7F3129C4u;
    // 7F3129C4: cmplwi  r0, 0x0000
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

label_7F3129C8:
    ctx->pc = 0x7F3129C8u;
    // 7F3129C8: bc    12, 2, 0x7F312AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312AC8;
        }
    }

label_7F3129CC:
    ctx->pc = 0x7F3129CCu;
    ctx->downcount -= 1;
    // 7F3129CC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F3129D0:
    ctx->pc = 0x7F3129D0u;
    ctx->downcount -= 9;
    // 7F3129D0: lbz     r25, 16393(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16393);
        ctx->gpr[25] = mem_read8(ctx, ea);
    }

label_7F3129D4:
    // 7F3129D4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3129D8:
    // 7F3129D8: extsb r25, r25
    {
        ctx->gpr[25] = (u32)(s32)(s8)ctx->gpr[25];
    }

label_7F3129DC:
    // 7F3129DC: mulli   r4, r25, 108
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[25] * (s64)(s32)108);

label_7F3129E0:
    // 7F3129E0: addi    r24, r4, 136
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(136);

label_7F3129E4:
    // 7F3129E4: add   r24, r28, r24
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F3129E8:
    // 7F3129E8: bl      0x80014B68
    {
            ctx->lr = 0x7F3129ECu;
            ctx->pc = 0x80014B68u;
            return;
    }

label_7F3129EC:
    ctx->downcount -= 7;
    // 7F3129EC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3129F0:
    ctx->pc = 0x7F3129F0u;
    // 7F3129F0: lbz     r3, 16397(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3129F4:
    // 7F3129F4: or   r23, r0, r0
    {
        ctx->gpr[23] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F3129F8:
    // 7F3129F8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3129FC:
    // 7F3129FC: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F312A00:
    // 7F312A00: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312A04:
    // 7F312A04: bl      0x8003F19C
    {
            ctx->lr = 0x7F312A08u;
            ctx->pc = 0x8003F19Cu;
            return;
    }

label_7F312A08:
    ctx->downcount -= 3;
    // 7F312A08: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312A0C:
    // 7F312A0C: cmpwi   r27, -4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312A10:
    // 7F312A10: bc    12, 2, 0x7F312AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312AB8;
        }
    }

label_7F312A14:
    ctx->downcount -= 1;
    // 7F312A14: bc    4, 0, 0x7F312A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312A30;
        }
    }

label_7F312A18:
    ctx->downcount -= 2;
    // 7F312A18: cmpwi   r27, -10
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312A1C:
    // 7F312A1C: bc    12, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A20:
    ctx->downcount -= 1;
    // 7F312A20: bc    4, 0, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A24:
    ctx->downcount -= 2;
    // 7F312A24: cmpwi   r27, -128
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312A28:
    // 7F312A28: bc    12, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A2C:
    ctx->downcount -= 1;
    // 7F312A2C: b       0x7F312ABC
    {
            goto label_7F312ABC;
    }

label_7F312A30:
    ctx->downcount -= 2;
    // 7F312A30: cmpwi   r27, -1
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

label_7F312A34:
    // 7F312A34: bc    12, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A38:
    ctx->downcount -= 1;
    // 7F312A38: bc    4, 0, 0x7F312A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312A40;
        }
    }

label_7F312A3C:
    ctx->downcount -= 1;
    // 7F312A3C: b       0x7F312ABC
    {
            goto label_7F312ABC;
    }

label_7F312A40:
    ctx->downcount -= 2;
    // 7F312A40: cmpwi   r27, 1
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

label_7F312A44:
    // 7F312A44: bc    4, 0, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A48:
    ctx->downcount -= 4;
    // 7F312A48: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312A4C:
    // 7F312A4C: addi    r3, r24, 44
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(44);

label_7F312A50:
    // 7F312A50: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F312A54:
    // 7F312A54: bl      0x800148D8
    {
            ctx->lr = 0x7F312A58u;
            ctx->pc = 0x800148D8u;
            return;
    }

label_7F312A58:
    ctx->downcount -= 2;
    // 7F312A58: cmpwi   r3, 0
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

label_7F312A5C:
    // 7F312A5C: bc    4, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A60:
    ctx->downcount -= 4;
    // 7F312A60: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312A64:
    // 7F312A64: addi    r3, r24, 40
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(40);

label_7F312A68:
    // 7F312A68: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F312A6C:
    // 7F312A6C: bl      0x800148D8
    {
            ctx->lr = 0x7F312A70u;
            ctx->pc = 0x800148D8u;
            return;
    }

label_7F312A70:
    ctx->downcount -= 2;
    // 7F312A70: cmpwi   r3, 0
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

label_7F312A74:
    // 7F312A74: bc    4, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A78:
    ctx->downcount -= 4;
    // 7F312A78: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F312A7C:
    // 7F312A7C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312A80:
    // 7F312A80: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F312A84:
    // 7F312A84: bl      0x800148D8
    {
            ctx->lr = 0x7F312A88u;
            ctx->pc = 0x800148D8u;
            return;
    }

label_7F312A88:
    ctx->downcount -= 2;
    // 7F312A88: cmpwi   r3, 0
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

label_7F312A8C:
    // 7F312A8C: bc    4, 2, 0x7F312ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312ABC;
        }
    }

label_7F312A90:
    ctx->downcount -= 10;
    // 7F312A90: addi    r0, r25, 6
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(6);

label_7F312A94:
    // 7F312A94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F312A98:
    ctx->pc = 0x7F312A98u;
    // 7F312A98: stbx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F312A9C:
    ctx->pc = 0x7F312A9Cu;
    // 7F312A9C: lbz     r3, 16393(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16393);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312AA0:
    // 7F312AA0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F312AA4:
    ctx->pc = 0x7F312AA4u;
    // 7F312AA4: stb     r0, 16393(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16393);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312AA8:
    ctx->pc = 0x7F312AA8u;
    // 7F312AA8: lbz     r3, 16392(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16392);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312AAC:
    // 7F312AAC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F312AB0:
    ctx->pc = 0x7F312AB0u;
    // 7F312AB0: stb     r0, 16392(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16392);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312AB4:
    // 7F312AB4: b       0x7F312ABC
    {
            goto label_7F312ABC;
    }

label_7F312AB8:
    ctx->downcount -= 1;
    // 7F312AB8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F312ABC:
    ctx->downcount -= 3;
    // 7F312ABC: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F312AC0:
    // 7F312AC0: cmpwi   r26, 127
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312AC4:
    // 7F312AC4: bc    12, 0, 0x7F3129D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3129D0u;
                return;
            }
            goto label_7F3129D0;
        }
    }

label_7F312AC8:
    ctx->pc = 0x7F312AC8u;
    ctx->downcount -= 17;
    // 7F312AC8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F312ACC:
    ctx->pc = 0x7F312ACCu;
    // 7F312ACC: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312AD0:
    ctx->pc = 0x7F312AD0u;
    // 7F312AD0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312AD4:
    ctx->pc = 0x7F312AD4u;
    // 7F312AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312AD8:
    ctx->pc = 0x7F312AD8u;
    // 7F312AD8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F312ADC:
    ctx->pc = 0x7F312ADCu;
    // 7F312ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312AE0:
    ctx->pc = 0x7F312AE0u;
    ctx->downcount -= 18;
    // 7F312AE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312AE4:
    ctx->pc = 0x7F312AE4u;
    // 7F312AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312AE8:
    ctx->pc = 0x7F312AE8u;
    // 7F312AE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312AEC:
    ctx->pc = 0x7F312AECu;
    // 7F312AEC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312AF0:
    ctx->pc = 0x7F312AF0u;
    // 7F312AF0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312AF4:
    ctx->pc = 0x7F312AF4u;
    // 7F312AF4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312AF8:
    ctx->pc = 0x7F312AF8u;
    // 7F312AF8: stb     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F312AFC:
    ctx->pc = 0x7F312AFCu;
    // 7F312AFC: bl      0x7F3125F4
    {
            ctx->lr = 0x7F312B00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F312B00:
    ctx->pc = 0x7F312B00u;
    ctx->downcount -= 3;
    // 7F312B00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312B04:
    ctx->pc = 0x7F312B04u;
    // 7F312B04: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B08:
    ctx->pc = 0x7F312B08u;
    // 7F312B08: bc    4, 0, 0x7F312B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312B24;
        }
    }

label_7F312B0C:
    ctx->pc = 0x7F312B0Cu;
    ctx->downcount -= 2;
    // 7F312B0C: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B10:
    ctx->pc = 0x7F312B10u;
    // 7F312B10: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B14:
    ctx->pc = 0x7F312B14u;
    ctx->downcount -= 1;
    // 7F312B14: bc    4, 0, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B18:
    ctx->pc = 0x7F312B18u;
    ctx->downcount -= 2;
    // 7F312B18: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B1C:
    ctx->pc = 0x7F312B1Cu;
    // 7F312B1C: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B20:
    ctx->pc = 0x7F312B20u;
    ctx->downcount -= 1;
    // 7F312B20: b       0x7F312BA4
    {
            goto label_7F312BA4;
    }

label_7F312B24:
    ctx->pc = 0x7F312B24u;
    ctx->downcount -= 2;
    // 7F312B24: cmpwi   r31, 0
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

label_7F312B28:
    ctx->pc = 0x7F312B28u;
    // 7F312B28: bc    12, 2, 0x7F312B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312B3C;
        }
    }

label_7F312B2C:
    ctx->pc = 0x7F312B2Cu;
    ctx->downcount -= 1;
    // 7F312B2C: bc    4, 0, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B30:
    ctx->pc = 0x7F312B30u;
    ctx->downcount -= 2;
    // 7F312B30: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B34:
    ctx->pc = 0x7F312B34u;
    // 7F312B34: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B38:
    ctx->pc = 0x7F312B38u;
    ctx->downcount -= 1;
    // 7F312B38: b       0x7F312BA4
    {
            goto label_7F312BA4;
    }

label_7F312B3C:
    ctx->pc = 0x7F312B3Cu;
    ctx->downcount -= 2;
    // 7F312B3C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312B40:
    ctx->pc = 0x7F312B40u;
    // 7F312B40: bl      0x7F312BD0
    {
            ctx->lr = 0x7F312B44u;
            goto label_7F312BD0;
    }

label_7F312B44:
    ctx->pc = 0x7F312B44u;
    ctx->downcount -= 3;
    // 7F312B44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312B48:
    ctx->pc = 0x7F312B48u;
    // 7F312B48: cmpwi   r31, -3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B4C:
    ctx->pc = 0x7F312B4Cu;
    // 7F312B4C: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B50:
    ctx->pc = 0x7F312B50u;
    ctx->downcount -= 1;
    // 7F312B50: bc    4, 0, 0x7F312B6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312B6C;
        }
    }

label_7F312B54:
    ctx->pc = 0x7F312B54u;
    ctx->downcount -= 2;
    // 7F312B54: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B58:
    ctx->pc = 0x7F312B58u;
    // 7F312B58: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B5C:
    ctx->pc = 0x7F312B5Cu;
    ctx->downcount -= 1;
    // 7F312B5C: bc    4, 0, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B60:
    ctx->pc = 0x7F312B60u;
    ctx->downcount -= 2;
    // 7F312B60: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312B64:
    ctx->pc = 0x7F312B64u;
    // 7F312B64: bc    12, 2, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B68:
    ctx->pc = 0x7F312B68u;
    ctx->downcount -= 1;
    // 7F312B68: b       0x7F312BA4
    {
            goto label_7F312BA4;
    }

label_7F312B6C:
    ctx->pc = 0x7F312B6Cu;
    ctx->downcount -= 2;
    // 7F312B6C: cmpwi   r31, 0
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

label_7F312B70:
    ctx->pc = 0x7F312B70u;
    // 7F312B70: bc    12, 2, 0x7F312B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312B7C;
        }
    }

label_7F312B74:
    ctx->pc = 0x7F312B74u;
    ctx->downcount -= 1;
    // 7F312B74: bc    4, 0, 0x7F312BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312BA4;
        }
    }

label_7F312B78:
    ctx->pc = 0x7F312B78u;
    ctx->downcount -= 1;
    // 7F312B78: b       0x7F312BA4
    {
            goto label_7F312BA4;
    }

label_7F312B7C:
    ctx->pc = 0x7F312B7Cu;
    ctx->downcount -= 3;
    // 7F312B7C: lbz     r0, 16399(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16399);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312B80:
    ctx->pc = 0x7F312B80u;
    // 7F312B80: extsb. r0, r0
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

label_7F312B84:
    ctx->pc = 0x7F312B84u;
    // 7F312B84: bc    12, 2, 0x7F312B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312B98;
        }
    }

label_7F312B88:
    ctx->pc = 0x7F312B88u;
    ctx->downcount -= 4;
    // 7F312B88: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F312B8C:
    ctx->pc = 0x7F312B8Cu;
    // 7F312B8C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F312B90:
    ctx->pc = 0x7F312B90u;
    // 7F312B90: stb     r0, 5(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312B94:
    ctx->pc = 0x7F312B94u;
    // 7F312B94: b       0x7F312BA4
    {
            goto label_7F312BA4;
    }

label_7F312B98:
    ctx->pc = 0x7F312B98u;
    ctx->downcount -= 3;
    // 7F312B98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F312B9C:
    ctx->pc = 0x7F312B9Cu;
    // 7F312B9C: li      r31, -9
    ctx->gpr[31] = (u32)(s32)(-9);

label_7F312BA0:
    ctx->pc = 0x7F312BA0u;
    // 7F312BA0: stb     r0, 5(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312BA4:
    ctx->pc = 0x7F312BA4u;
    ctx->downcount -= 2;
    // 7F312BA4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312BA8:
    ctx->pc = 0x7F312BA8u;
    // 7F312BA8: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312BACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312BAC:
    ctx->pc = 0x7F312BACu;
    ctx->downcount -= 20;
    // 7F312BAC: rlwinm r0, r30, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 1u) & 0xFFFFFFFEu;
    }

label_7F312BB0:
    ctx->pc = 0x7F312BB0u;
    // 7F312BB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312BB4:
    ctx->pc = 0x7F312BB4u;
    // 7F312BB4: add   r4, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312BB8:
    ctx->pc = 0x7F312BB8u;
    // 7F312BB8: sth     r31, 30848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30848);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F312BBC:
    ctx->pc = 0x7F312BBCu;
    // 7F312BBC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312BC0:
    ctx->pc = 0x7F312BC0u;
    // 7F312BC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312BC4:
    ctx->pc = 0x7F312BC4u;
    // 7F312BC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312BC8:
    ctx->pc = 0x7F312BC8u;
    // 7F312BC8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312BCC:
    ctx->pc = 0x7F312BCCu;
    // 7F312BCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312BD0:
    ctx->pc = 0x7F312BD0u;
    ctx->downcount -= 10;
    // 7F312BD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312BD4:
    ctx->pc = 0x7F312BD4u;
    // 7F312BD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312BD8:
    ctx->pc = 0x7F312BD8u;
    // 7F312BD8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312BDC:
    ctx->pc = 0x7F312BDCu;
    // 7F312BDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312BE0:
    ctx->pc = 0x7F312BE0u;
    // 7F312BE0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F312BE4:
    ctx->pc = 0x7F312BE4u;
    // 7F312BE4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312BE8:
    ctx->pc = 0x7F312BE8u;
    // 7F312BE8: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_7F312BEC:
    ctx->pc = 0x7F312BECu;
    // 7F312BEC: lbz     r0, -3352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312BF0:
    ctx->pc = 0x7F312BF0u;
    // 7F312BF0: cmplwi  r0, 0x0000
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

label_7F312BF4:
    ctx->pc = 0x7F312BF4u;
    // 7F312BF4: bc    12, 2, 0x7F312C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312C54;
        }
    }

label_7F312BF8:
    ctx->pc = 0x7F312BF8u;
    ctx->downcount -= 5;
    // 7F312BF8: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312BFC:
    ctx->pc = 0x7F312BFCu;
    // 7F312BFC: addi    r4, r31, 16400
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16400);

label_7F312C00:
    ctx->pc = 0x7F312C00u;
    // 7F312C00: addi    r5, r31, 16404
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16404);

label_7F312C04:
    ctx->pc = 0x7F312C04u;
    // 7F312C04: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312C08:
    ctx->pc = 0x7F312C08u;
    // 7F312C08: bl      0x80039C18
    {
            ctx->lr = 0x7F312C0Cu;
            ctx->pc = 0x80039C18u;
            return;
    }

label_7F312C0C:
    ctx->pc = 0x7F312C0Cu;
    ctx->downcount -= 2;
    // 7F312C0C: cmpwi   r3, 0
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

label_7F312C10:
    ctx->pc = 0x7F312C10u;
    // 7F312C10: bc    4, 2, 0x7F312C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312C54;
        }
    }

label_7F312C14:
    ctx->pc = 0x7F312C14u;
    ctx->downcount -= 3;
    // 7F312C14: lwz     r0, 16404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312C18:
    ctx->pc = 0x7F312C18u;
    // 7F312C18: cmpwi   r0, 0
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

label_7F312C1C:
    ctx->pc = 0x7F312C1Cu;
    // 7F312C1C: bc    4, 1, 0x7F312C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312C4C;
        }
    }

label_7F312C20:
    ctx->pc = 0x7F312C20u;
    ctx->downcount -= 12;
    // 7F312C20: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312C24:
    ctx->pc = 0x7F312C24u;
    // 7F312C24: lwz     r0, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312C28:
    ctx->pc = 0x7F312C28u;
    // 7F312C28: addi    r4, r4, -3344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3344);

label_7F312C2C:
    ctx->pc = 0x7F312C2Cu;
    // 7F312C2C: lwz     r5, 16400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16400);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F312C30:
    ctx->pc = 0x7F312C30u;
    // 7F312C30: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F312C34:
    ctx->pc = 0x7F312C34u;
    // 7F312C34: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F312C38:
    ctx->pc = 0x7F312C38u;
    // 7F312C38: cmplw   r5, r0
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

label_7F312C3C:
    ctx->pc = 0x7F312C3Cu;
    // 7F312C3C: bc    12, 0, 0x7F312C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312C4C;
        }
    }

label_7F312C40:
    ctx->pc = 0x7F312C40u;
    ctx->downcount -= 3;
    // 7F312C40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F312C44:
    ctx->pc = 0x7F312C44u;
    // 7F312C44: stb     r0, 16399(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16399);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312C48:
    ctx->pc = 0x7F312C48u;
    // 7F312C48: b       0x7F312C54
    {
            goto label_7F312C54;
    }

label_7F312C4C:
    ctx->pc = 0x7F312C4Cu;
    ctx->downcount -= 2;
    // 7F312C4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F312C50:
    ctx->pc = 0x7F312C50u;
    // 7F312C50: stb     r0, 16399(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16399);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F312C54:
    ctx->pc = 0x7F312C54u;
    ctx->downcount -= 6;
    // 7F312C54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312C58:
    ctx->pc = 0x7F312C58u;
    // 7F312C58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F312C5C:
    ctx->pc = 0x7F312C5Cu;
    // 7F312C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312C60:
    ctx->pc = 0x7F312C60u;
    // 7F312C60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F312C64:
    ctx->pc = 0x7F312C64u;
    // 7F312C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312C68:
    ctx->pc = 0x7F312C68u;
    ctx->downcount -= 19;
    // 7F312C68: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312C6C:
    ctx->pc = 0x7F312C6Cu;
    // 7F312C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312C70:
    ctx->pc = 0x7F312C70u;
    // 7F312C70: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312C74:
    ctx->pc = 0x7F312C74u;
    // 7F312C74: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312C78:
    ctx->pc = 0x7F312C78u;
    // 7F312C78: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312C7C:
    ctx->pc = 0x7F312C7Cu;
    // 7F312C7C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312C80:
    ctx->pc = 0x7F312C80u;
    // 7F312C80: li      r29, -128
    ctx->gpr[29] = (u32)(s32)(-128);

label_7F312C84:
    ctx->pc = 0x7F312C84u;
    // 7F312C84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F312C88:
    ctx->pc = 0x7F312C88u;
    // 7F312C88: bl      0x80006A08
    {
            ctx->lr = 0x7F312C8Cu;
            ctx->pc = 0x80006A08u;
            return;
    }

label_7F312C8C:
    ctx->pc = 0x7F312C8Cu;
    ctx->downcount -= 4;
    // 7F312C8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312C90:
    ctx->pc = 0x7F312C90u;
    // 7F312C90: lbz     r0, -3352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312C94:
    ctx->pc = 0x7F312C94u;
    // 7F312C94: cmplwi  r0, 0x0000
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

label_7F312C98:
    ctx->pc = 0x7F312C98u;
    // 7F312C98: bc    12, 2, 0x7F312E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312E84;
        }
    }

label_7F312C9C:
    ctx->pc = 0x7F312C9Cu;
    ctx->downcount -= 2;
    // 7F312C9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312CA0:
    ctx->pc = 0x7F312CA0u;
    // 7F312CA0: bl      0x7F3125F4
    {
            ctx->lr = 0x7F312CA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F312CA4:
    ctx->pc = 0x7F312CA4u;
    ctx->downcount -= 3;
    // 7F312CA4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312CA8:
    ctx->pc = 0x7F312CA8u;
    // 7F312CA8: cmpwi   r29, -6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312CAC:
    ctx->pc = 0x7F312CACu;
    // 7F312CAC: bc    4, 0, 0x7F312CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312CC8;
        }
    }

label_7F312CB0:
    ctx->pc = 0x7F312CB0u;
    ctx->downcount -= 2;
    // 7F312CB0: cmpwi   r29, -13
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312CB4:
    ctx->pc = 0x7F312CB4u;
    // 7F312CB4: bc    12, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312CB8:
    ctx->pc = 0x7F312CB8u;
    ctx->downcount -= 1;
    // 7F312CB8: bc    4, 0, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312CBC:
    ctx->pc = 0x7F312CBCu;
    ctx->downcount -= 2;
    // 7F312CBC: cmpwi   r29, -128
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312CC0:
    ctx->pc = 0x7F312CC0u;
    // 7F312CC0: bc    12, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312CC4:
    ctx->pc = 0x7F312CC4u;
    ctx->downcount -= 1;
    // 7F312CC4: b       0x7F312E7C
    {
            goto label_7F312E7C;
    }

label_7F312CC8:
    ctx->pc = 0x7F312CC8u;
    ctx->downcount -= 2;
    // 7F312CC8: cmpwi   r29, 0
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

label_7F312CCC:
    ctx->pc = 0x7F312CCCu;
    // 7F312CCC: bc    12, 2, 0x7F312CE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312CE0;
        }
    }

label_7F312CD0:
    ctx->pc = 0x7F312CD0u;
    ctx->downcount -= 1;
    // 7F312CD0: bc    4, 0, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312CD4:
    ctx->pc = 0x7F312CD4u;
    ctx->downcount -= 2;
    // 7F312CD4: cmpwi   r29, -4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312CD8:
    ctx->pc = 0x7F312CD8u;
    // 7F312CD8: bc    12, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312CDC:
    ctx->pc = 0x7F312CDCu;
    ctx->downcount -= 1;
    // 7F312CDC: b       0x7F312E7C
    {
            goto label_7F312E7C;
    }

label_7F312CE0:
    ctx->pc = 0x7F312CE0u;
    ctx->downcount -= 5;
    // 7F312CE0: lbz     r3, 16397(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312CE4:
    ctx->pc = 0x7F312CE4u;
    // 7F312CE4: addi    r4, r30, 16400
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16400);

label_7F312CE8:
    ctx->pc = 0x7F312CE8u;
    // 7F312CE8: addi    r5, r30, 16404
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16404);

label_7F312CEC:
    ctx->pc = 0x7F312CECu;
    // 7F312CEC: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312CF0:
    ctx->pc = 0x7F312CF0u;
    // 7F312CF0: bl      0x80039C18
    {
            ctx->lr = 0x7F312CF4u;
            ctx->pc = 0x80039C18u;
            return;
    }

label_7F312CF4:
    ctx->pc = 0x7F312CF4u;
    ctx->downcount -= 2;
    // 7F312CF4: cmpwi   r31, 0
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

label_7F312CF8:
    ctx->pc = 0x7F312CF8u;
    // 7F312CF8: bc    4, 2, 0x7F312D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312D38;
        }
    }

label_7F312CFC:
    ctx->pc = 0x7F312CFCu;
    ctx->downcount -= 6;
    // 7F312CFC: lbz     r3, 16394(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16394);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312D00:
    ctx->pc = 0x7F312D00u;
    // 7F312D00: lbz     r0, 16392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16392);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312D04:
    ctx->pc = 0x7F312D04u;
    // 7F312D04: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312D08:
    ctx->pc = 0x7F312D08u;
    // 7F312D08: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F312D0C:
    ctx->pc = 0x7F312D0Cu;
    // 7F312D0C: cmpw    r3, r0
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

label_7F312D10:
    ctx->pc = 0x7F312D10u;
    // 7F312D10: bc    4, 2, 0x7F312D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312D30;
        }
    }

label_7F312D14:
    ctx->pc = 0x7F312D14u;
    ctx->downcount -= 2;
    // 7F312D14: addi    r3, r30, 16640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16640);

label_7F312D18:
    ctx->pc = 0x7F312D18u;
    // 7F312D18: bl      0x7F313B14
    {
            ctx->lr = 0x7F312D1Cu;
            goto label_7F313B14;
    }

label_7F312D1C:
    ctx->pc = 0x7F312D1Cu;
    ctx->downcount -= 2;
    // 7F312D1C: addi    r3, r30, 16608
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16608);

label_7F312D20:
    ctx->pc = 0x7F312D20u;
    // 7F312D20: bl      0x7F3138DC
    {
            ctx->lr = 0x7F312D24u;
            goto label_7F3138DC;
    }

label_7F312D24:
    ctx->pc = 0x7F312D24u;
    ctx->downcount -= 2;
    // 7F312D24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312D28:
    ctx->pc = 0x7F312D28u;
    // 7F312D28: bl      0x7F313E14
    {
            ctx->lr = 0x7F312D2Cu;
            goto label_7F313E14;
    }

label_7F312D2C:
    ctx->pc = 0x7F312D2Cu;
    ctx->downcount -= 1;
    // 7F312D2C: b       0x7F312D38
    {
            goto label_7F312D38;
    }

label_7F312D30:
    ctx->pc = 0x7F312D30u;
    ctx->downcount -= 2;
    // 7F312D30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312D34:
    ctx->pc = 0x7F312D34u;
    // 7F312D34: bl      0x7F313F28
    {
            ctx->lr = 0x7F312D38u;
            goto label_7F313F28;
    }

label_7F312D38:
    ctx->pc = 0x7F312D38u;
    ctx->downcount -= 2;
    // 7F312D38: cmpwi   r31, 0
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

label_7F312D3C:
    ctx->pc = 0x7F312D3Cu;
    // 7F312D3C: bc    4, 2, 0x7F312D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312D64;
        }
    }

label_7F312D40:
    ctx->pc = 0x7F312D40u;
    ctx->downcount -= 7;
    // 7F312D40: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312D44:
    ctx->pc = 0x7F312D44u;
    // 7F312D44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312D48:
    ctx->pc = 0x7F312D48u;
    // 7F312D48: addi    r5, r4, -3336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3336);

label_7F312D4C:
    ctx->pc = 0x7F312D4Cu;
    // 7F312D4C: addi    r4, r30, 16416
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16416);

label_7F312D50:
    ctx->pc = 0x7F312D50u;
    // 7F312D50: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F312D54:
    ctx->pc = 0x7F312D54u;
    // 7F312D54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F312D58:
    ctx->pc = 0x7F312D58u;
    // 7F312D58: bl      0x7F31301C
    {
            ctx->lr = 0x7F312D5Cu;
            goto label_7F31301C;
    }

label_7F312D5C:
    ctx->pc = 0x7F312D5Cu;
    ctx->downcount -= 2;
    // 7F312D5C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312D60:
    ctx->pc = 0x7F312D60u;
    // 7F312D60: b       0x7F312DC8
    {
            goto label_7F312DC8;
    }

label_7F312D64:
    ctx->pc = 0x7F312D64u;
    ctx->downcount -= 6;
    // 7F312D64: lbz     r3, 16394(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16394);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312D68:
    ctx->pc = 0x7F312D68u;
    // 7F312D68: lbz     r0, 16392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16392);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312D6C:
    ctx->pc = 0x7F312D6Cu;
    // 7F312D6C: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312D70:
    ctx->pc = 0x7F312D70u;
    // 7F312D70: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F312D74:
    ctx->pc = 0x7F312D74u;
    // 7F312D74: cmpw    r3, r0
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

label_7F312D78:
    ctx->pc = 0x7F312D78u;
    // 7F312D78: bc    4, 2, 0x7F312DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312DA0;
        }
    }

label_7F312D7C:
    ctx->pc = 0x7F312D7Cu;
    ctx->downcount -= 7;
    // 7F312D7C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312D80:
    ctx->pc = 0x7F312D80u;
    // 7F312D80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312D84:
    ctx->pc = 0x7F312D84u;
    // 7F312D84: addi    r5, r4, -3340
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3340);

label_7F312D88:
    ctx->pc = 0x7F312D88u;
    // 7F312D88: addi    r4, r30, 16416
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16416);

label_7F312D8C:
    ctx->pc = 0x7F312D8Cu;
    // 7F312D8C: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F312D90:
    ctx->pc = 0x7F312D90u;
    // 7F312D90: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F312D94:
    ctx->pc = 0x7F312D94u;
    // 7F312D94: bl      0x7F31301C
    {
            ctx->lr = 0x7F312D98u;
            goto label_7F31301C;
    }

label_7F312D98:
    ctx->pc = 0x7F312D98u;
    ctx->downcount -= 2;
    // 7F312D98: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312D9C:
    ctx->pc = 0x7F312D9Cu;
    // 7F312D9C: b       0x7F312DC8
    {
            goto label_7F312DC8;
    }

label_7F312DA0:
    ctx->pc = 0x7F312DA0u;
    ctx->downcount -= 11;
    // 7F312DA0: mulli   r6, r3, 108
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)108);

label_7F312DA4:
    ctx->pc = 0x7F312DA4u;
    // 7F312DA4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312DA8:
    ctx->pc = 0x7F312DA8u;
    // 7F312DA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312DAC:
    ctx->pc = 0x7F312DACu;
    // 7F312DAC: addi    r5, r4, -3340
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3340);

label_7F312DB0:
    ctx->pc = 0x7F312DB0u;
    // 7F312DB0: addi    r4, r6, 136
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(136);

label_7F312DB4:
    ctx->pc = 0x7F312DB4u;
    // 7F312DB4: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F312DB8:
    ctx->pc = 0x7F312DB8u;
    // 7F312DB8: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312DBC:
    ctx->pc = 0x7F312DBCu;
    // 7F312DBC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F312DC0:
    ctx->pc = 0x7F312DC0u;
    // 7F312DC0: bl      0x7F31301C
    {
            ctx->lr = 0x7F312DC4u;
            goto label_7F31301C;
    }

label_7F312DC4:
    ctx->pc = 0x7F312DC4u;
    ctx->downcount -= 1;
    // 7F312DC4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312DC8:
    ctx->pc = 0x7F312DC8u;
    ctx->downcount -= 2;
    // 7F312DC8: cmpwi   r29, 0
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

label_7F312DCC:
    ctx->pc = 0x7F312DCCu;
    // 7F312DCC: bc    4, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312DD0:
    ctx->pc = 0x7F312DD0u;
    ctx->downcount -= 2;
    // 7F312DD0: cmpwi   r31, 0
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

label_7F312DD4:
    ctx->pc = 0x7F312DD4u;
    // 7F312DD4: bc    4, 2, 0x7F312E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E08;
        }
    }

label_7F312DD8:
    ctx->pc = 0x7F312DD8u;
    ctx->downcount -= 2;
    // 7F312DD8: addi    r3, r30, 16640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16640);

label_7F312DDC:
    ctx->pc = 0x7F312DDCu;
    // 7F312DDC: bl      0x7F313B14
    {
            ctx->lr = 0x7F312DE0u;
            goto label_7F313B14;
    }

label_7F312DE0:
    ctx->pc = 0x7F312DE0u;
    ctx->downcount -= 2;
    // 7F312DE0: addi    r3, r30, 16608
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16608);

label_7F312DE4:
    ctx->pc = 0x7F312DE4u;
    // 7F312DE4: bl      0x7F3138DC
    {
            ctx->lr = 0x7F312DE8u;
            goto label_7F3138DC;
    }

label_7F312DE8:
    ctx->pc = 0x7F312DE8u;
    ctx->downcount -= 6;
    // 7F312DE8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312DEC:
    ctx->pc = 0x7F312DECu;
    // 7F312DEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312DF0:
    ctx->pc = 0x7F312DF0u;
    // 7F312DF0: lwz     r5, -3336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3336);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F312DF4:
    ctx->pc = 0x7F312DF4u;
    // 7F312DF4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312DF8:
    ctx->pc = 0x7F312DF8u;
    // 7F312DF8: addi    r4, r30, 16608
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16608);

label_7F312DFC:
    ctx->pc = 0x7F312DFCu;
    // 7F312DFC: bl      0x7F313204
    {
            ctx->lr = 0x7F312E00u;
            goto label_7F313204;
    }

label_7F312E00:
    ctx->pc = 0x7F312E00u;
    ctx->downcount -= 2;
    // 7F312E00: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312E04:
    ctx->pc = 0x7F312E04u;
    // 7F312E04: b       0x7F312E28
    {
            goto label_7F312E28;
    }

label_7F312E08:
    ctx->pc = 0x7F312E08u;
    ctx->downcount -= 7;
    // 7F312E08: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312E0C:
    ctx->pc = 0x7F312E0Cu;
    // 7F312E0C: lwz     r4, 16588(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16588);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F312E10:
    ctx->pc = 0x7F312E10u;
    // 7F312E10: addi    r5, r3, -3340
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-3340);

label_7F312E14:
    ctx->pc = 0x7F312E14u;
    // 7F312E14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312E18:
    ctx->pc = 0x7F312E18u;
    // 7F312E18: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F312E1C:
    ctx->pc = 0x7F312E1Cu;
    // 7F312E1C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F312E20:
    ctx->pc = 0x7F312E20u;
    // 7F312E20: bl      0x7F313204
    {
            ctx->lr = 0x7F312E24u;
            goto label_7F313204;
    }

label_7F312E24:
    ctx->pc = 0x7F312E24u;
    ctx->downcount -= 1;
    // 7F312E24: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312E28:
    ctx->pc = 0x7F312E28u;
    ctx->downcount -= 2;
    // 7F312E28: cmpwi   r29, 0
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

label_7F312E2C:
    ctx->pc = 0x7F312E2Cu;
    // 7F312E2C: bc    4, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312E30:
    ctx->pc = 0x7F312E30u;
    ctx->downcount -= 2;
    // 7F312E30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312E34:
    ctx->pc = 0x7F312E34u;
    // 7F312E34: bl      0x7F313708
    {
            ctx->lr = 0x7F312E38u;
            goto label_7F313708;
    }

label_7F312E38:
    ctx->pc = 0x7F312E38u;
    ctx->downcount -= 2;
    // 7F312E38: or.   r29, r3, r3
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

label_7F312E3C:
    ctx->pc = 0x7F312E3Cu;
    // 7F312E3C: bc    4, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312E40:
    ctx->pc = 0x7F312E40u;
    ctx->downcount -= 2;
    // 7F312E40: cmpwi   r31, 0
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

label_7F312E44:
    ctx->pc = 0x7F312E44u;
    // 7F312E44: bc    4, 2, 0x7F312E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312E58;
        }
    }

label_7F312E48:
    ctx->pc = 0x7F312E48u;
    ctx->downcount -= 2;
    // 7F312E48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312E4C:
    ctx->pc = 0x7F312E4Cu;
    // 7F312E4C: bl      0x7F313800
    {
            ctx->lr = 0x7F312E50u;
            goto label_7F313800;
    }

label_7F312E50:
    ctx->pc = 0x7F312E50u;
    ctx->downcount -= 2;
    // 7F312E50: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312E54:
    ctx->pc = 0x7F312E54u;
    // 7F312E54: b       0x7F312E7C
    {
            goto label_7F312E7C;
    }

label_7F312E58:
    ctx->pc = 0x7F312E58u;
    ctx->downcount -= 6;
    // 7F312E58: lbz     r3, 16394(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16394);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F312E5C:
    ctx->pc = 0x7F312E5Cu;
    // 7F312E5C: lbz     r0, 16392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16392);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312E60:
    ctx->pc = 0x7F312E60u;
    // 7F312E60: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F312E64:
    ctx->pc = 0x7F312E64u;
    // 7F312E64: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F312E68:
    ctx->pc = 0x7F312E68u;
    // 7F312E68: cmpw    r3, r0
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

label_7F312E6C:
    ctx->pc = 0x7F312E6Cu;
    // 7F312E6C: bc    12, 2, 0x7F312E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312E7C;
        }
    }

label_7F312E70:
    ctx->pc = 0x7F312E70u;
    ctx->downcount -= 2;
    // 7F312E70: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312E74:
    ctx->pc = 0x7F312E74u;
    // 7F312E74: bl      0x7F313860
    {
            ctx->lr = 0x7F312E78u;
            goto label_7F313860;
    }

label_7F312E78:
    ctx->pc = 0x7F312E78u;
    ctx->downcount -= 1;
    // 7F312E78: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312E7C:
    ctx->pc = 0x7F312E7Cu;
    ctx->downcount -= 2;
    // 7F312E7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312E80:
    ctx->pc = 0x7F312E80u;
    // 7F312E80: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312E84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312E84:
    ctx->pc = 0x7F312E84u;
    ctx->downcount -= 7;
    // 7F312E84: lbz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312E88:
    ctx->pc = 0x7F312E88u;
    // 7F312E88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F312E8C:
    ctx->pc = 0x7F312E8Cu;
    // 7F312E8C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F312E90:
    ctx->pc = 0x7F312E90u;
    // 7F312E90: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F312E94:
    ctx->pc = 0x7F312E94u;
    // 7F312E94: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F312E98:
    ctx->pc = 0x7F312E98u;
    // 7F312E98: sth     r29, 30848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30848);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F312E9C:
    ctx->pc = 0x7F312E9Cu;
    // 7F312E9C: bl      0x80006A08
    {
            ctx->lr = 0x7F312EA0u;
            ctx->pc = 0x80006A08u;
            return;
    }

label_7F312EA0:
    ctx->pc = 0x7F312EA0u;
    ctx->downcount -= 17;
    // 7F312EA0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312EA4:
    ctx->pc = 0x7F312EA4u;
    // 7F312EA4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F312EA8:
    ctx->pc = 0x7F312EA8u;
    // 7F312EA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F312EAC:
    ctx->pc = 0x7F312EACu;
    // 7F312EAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F312EB0:
    ctx->pc = 0x7F312EB0u;
    // 7F312EB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F312EB4:
    ctx->pc = 0x7F312EB4u;
    // 7F312EB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F312EB8:
    ctx->pc = 0x7F312EB8u;
    ctx->downcount -= 21;
    // 7F312EB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F312EBC:
    ctx->pc = 0x7F312EBCu;
    // 7F312EBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F312EC0:
    ctx->pc = 0x7F312EC0u;
    // 7F312EC0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F312EC4:
    ctx->pc = 0x7F312EC4u;
    // 7F312EC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F312EC8:
    ctx->pc = 0x7F312EC8u;
    // 7F312EC8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F312ECC:
    ctx->pc = 0x7F312ECCu;
    // 7F312ECC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312ED0:
    ctx->pc = 0x7F312ED0u;
    // 7F312ED0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F312ED4:
    ctx->pc = 0x7F312ED4u;
    // 7F312ED4: li      r29, -128
    ctx->gpr[29] = (u32)(s32)(-128);

label_7F312ED8:
    ctx->pc = 0x7F312ED8u;
    // 7F312ED8: lbz     r0, -3352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-3352);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312EDC:
    ctx->pc = 0x7F312EDCu;
    // 7F312EDC: cmplwi  r0, 0x0000
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

label_7F312EE0:
    ctx->pc = 0x7F312EE0u;
    // 7F312EE0: bc    12, 2, 0x7F312FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312FF0;
        }
    }

label_7F312EE4:
    ctx->pc = 0x7F312EE4u;
    ctx->downcount -= 1;
    // 7F312EE4: bl      0x7F3125F4
    {
            ctx->lr = 0x7F312EE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F312EE8:
    ctx->pc = 0x7F312EE8u;
    ctx->downcount -= 3;
    // 7F312EE8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312EEC:
    ctx->pc = 0x7F312EECu;
    // 7F312EEC: cmpwi   r29, -6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312EF0:
    ctx->pc = 0x7F312EF0u;
    // 7F312EF0: bc    4, 0, 0x7F312F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312F0C;
        }
    }

label_7F312EF4:
    ctx->pc = 0x7F312EF4u;
    ctx->downcount -= 2;
    // 7F312EF4: cmpwi   r29, -13
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312EF8:
    ctx->pc = 0x7F312EF8u;
    // 7F312EF8: bc    12, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312EFC:
    ctx->pc = 0x7F312EFCu;
    ctx->downcount -= 1;
    // 7F312EFC: bc    4, 0, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312F00:
    ctx->pc = 0x7F312F00u;
    ctx->downcount -= 2;
    // 7F312F00: cmpwi   r29, -128
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312F04:
    ctx->pc = 0x7F312F04u;
    // 7F312F04: bc    12, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312F08:
    ctx->pc = 0x7F312F08u;
    ctx->downcount -= 1;
    // 7F312F08: b       0x7F312FE8
    {
            goto label_7F312FE8;
    }

label_7F312F0C:
    ctx->pc = 0x7F312F0Cu;
    ctx->downcount -= 2;
    // 7F312F0C: cmpwi   r29, 0
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

label_7F312F10:
    ctx->pc = 0x7F312F10u;
    // 7F312F10: bc    12, 2, 0x7F312F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312F24;
        }
    }

label_7F312F14:
    ctx->pc = 0x7F312F14u;
    ctx->downcount -= 1;
    // 7F312F14: bc    4, 0, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312F18:
    ctx->pc = 0x7F312F18u;
    ctx->downcount -= 2;
    // 7F312F18: cmpwi   r29, -4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F312F1C:
    ctx->pc = 0x7F312F1Cu;
    // 7F312F1C: bc    12, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312F20:
    ctx->pc = 0x7F312F20u;
    ctx->downcount -= 1;
    // 7F312F20: b       0x7F312FE8
    {
            goto label_7F312FE8;
    }

label_7F312F24:
    ctx->pc = 0x7F312F24u;
    ctx->downcount -= 2;
    // 7F312F24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312F28:
    ctx->pc = 0x7F312F28u;
    // 7F312F28: bl      0x7F313F28
    {
            ctx->lr = 0x7F312F2Cu;
            goto label_7F313F28;
    }

label_7F312F2C:
    ctx->pc = 0x7F312F2Cu;
    ctx->downcount -= 2;
    // 7F312F2C: cmpwi   r31, 0
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

label_7F312F30:
    ctx->pc = 0x7F312F30u;
    // 7F312F30: bc    4, 2, 0x7F312F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312F54;
        }
    }

label_7F312F34:
    ctx->pc = 0x7F312F34u;
    ctx->downcount -= 7;
    // 7F312F34: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312F38:
    ctx->pc = 0x7F312F38u;
    // 7F312F38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312F3C:
    ctx->pc = 0x7F312F3Cu;
    // 7F312F3C: addi    r5, r4, -3336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3336);

label_7F312F40:
    ctx->pc = 0x7F312F40u;
    // 7F312F40: addi    r4, r30, 16416
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16416);

label_7F312F44:
    ctx->pc = 0x7F312F44u;
    // 7F312F44: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F312F48:
    ctx->pc = 0x7F312F48u;
    // 7F312F48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F312F4C:
    ctx->pc = 0x7F312F4Cu;
    // 7F312F4C: bl      0x7F31301C
    {
            ctx->lr = 0x7F312F50u;
            goto label_7F31301C;
    }

label_7F312F50:
    ctx->pc = 0x7F312F50u;
    ctx->downcount -= 1;
    // 7F312F50: b       0x7F312F70
    {
            goto label_7F312F70;
    }

label_7F312F54:
    ctx->pc = 0x7F312F54u;
    ctx->downcount -= 7;
    // 7F312F54: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312F58:
    ctx->pc = 0x7F312F58u;
    // 7F312F58: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312F5C:
    ctx->pc = 0x7F312F5Cu;
    // 7F312F5C: addi    r5, r4, -3340
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3340);

label_7F312F60:
    ctx->pc = 0x7F312F60u;
    // 7F312F60: addi    r4, r30, 16416
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16416);

label_7F312F64:
    ctx->pc = 0x7F312F64u;
    // 7F312F64: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F312F68:
    ctx->pc = 0x7F312F68u;
    // 7F312F68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F312F6C:
    ctx->pc = 0x7F312F6Cu;
    // 7F312F6C: bl      0x7F31301C
    {
            ctx->lr = 0x7F312F70u;
            goto label_7F31301C;
    }

label_7F312F70:
    ctx->pc = 0x7F312F70u;
    ctx->downcount -= 3;
    // 7F312F70: cmpwi   r3, 0
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

label_7F312F74:
    ctx->pc = 0x7F312F74u;
    // 7F312F74: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312F78:
    ctx->pc = 0x7F312F78u;
    // 7F312F78: bc    4, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312F7C:
    ctx->pc = 0x7F312F7Cu;
    ctx->downcount -= 2;
    // 7F312F7C: cmpwi   r31, 0
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

label_7F312F80:
    ctx->pc = 0x7F312F80u;
    // 7F312F80: bc    4, 2, 0x7F312FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FA0;
        }
    }

label_7F312F84:
    ctx->pc = 0x7F312F84u;
    ctx->downcount -= 6;
    // 7F312F84: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F312F88:
    ctx->pc = 0x7F312F88u;
    // 7F312F88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312F8C:
    ctx->pc = 0x7F312F8Cu;
    // 7F312F8C: addi    r5, r4, -3336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3336);

label_7F312F90:
    ctx->pc = 0x7F312F90u;
    // 7F312F90: addi    r4, r30, 16608
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16608);

label_7F312F94:
    ctx->pc = 0x7F312F94u;
    // 7F312F94: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F312F98:
    ctx->pc = 0x7F312F98u;
    // 7F312F98: bl      0x7F3135F0
    {
            ctx->lr = 0x7F312F9Cu;
            goto label_7F3135F0;
    }

label_7F312F9C:
    ctx->pc = 0x7F312F9Cu;
    ctx->downcount -= 1;
    // 7F312F9C: b       0x7F312FB8
    {
            goto label_7F312FB8;
    }

label_7F312FA0:
    ctx->pc = 0x7F312FA0u;
    ctx->downcount -= 6;
    // 7F312FA0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F312FA4:
    ctx->pc = 0x7F312FA4u;
    // 7F312FA4: lwz     r4, 16588(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16588);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F312FA8:
    ctx->pc = 0x7F312FA8u;
    // 7F312FA8: addi    r5, r3, -3340
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-3340);

label_7F312FAC:
    ctx->pc = 0x7F312FACu;
    // 7F312FAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312FB0:
    ctx->pc = 0x7F312FB0u;
    // 7F312FB0: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F312FB4:
    ctx->pc = 0x7F312FB4u;
    // 7F312FB4: bl      0x7F3135F0
    {
            ctx->lr = 0x7F312FB8u;
            goto label_7F3135F0;
    }

label_7F312FB8:
    ctx->pc = 0x7F312FB8u;
    ctx->downcount -= 3;
    // 7F312FB8: cmpwi   r3, 0
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

label_7F312FBC:
    ctx->pc = 0x7F312FBCu;
    // 7F312FBC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312FC0:
    ctx->pc = 0x7F312FC0u;
    // 7F312FC0: bc    4, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312FC4:
    ctx->pc = 0x7F312FC4u;
    ctx->downcount -= 2;
    // 7F312FC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312FC8:
    ctx->pc = 0x7F312FC8u;
    // 7F312FC8: bl      0x7F313708
    {
            ctx->lr = 0x7F312FCCu;
            goto label_7F313708;
    }

label_7F312FCC:
    ctx->pc = 0x7F312FCCu;
    ctx->downcount -= 2;
    // 7F312FCC: or.   r29, r3, r3
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

label_7F312FD0:
    ctx->pc = 0x7F312FD0u;
    // 7F312FD0: bc    4, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312FD4:
    ctx->pc = 0x7F312FD4u;
    ctx->downcount -= 2;
    // 7F312FD4: cmpwi   r31, 0
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

label_7F312FD8:
    ctx->pc = 0x7F312FD8u;
    // 7F312FD8: bc    4, 2, 0x7F312FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F312FE8;
        }
    }

label_7F312FDC:
    ctx->pc = 0x7F312FDCu;
    ctx->downcount -= 2;
    // 7F312FDC: addi    r3, r30, 16640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16640);

label_7F312FE0:
    ctx->pc = 0x7F312FE0u;
    // 7F312FE0: bl      0x7F313C70
    {
            ctx->lr = 0x7F312FE4u;
            goto label_7F313C70;
    }

label_7F312FE4:
    ctx->pc = 0x7F312FE4u;
    ctx->downcount -= 1;
    // 7F312FE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F312FE8:
    ctx->pc = 0x7F312FE8u;
    ctx->downcount -= 2;
    // 7F312FE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F312FEC:
    ctx->pc = 0x7F312FECu;
    // 7F312FEC: bl      0x7F3126D8
    {
            ctx->lr = 0x7F312FF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F312FF0:
    ctx->pc = 0x7F312FF0u;
    ctx->downcount -= 22;
    // 7F312FF0: lbz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F312FF4:
    ctx->pc = 0x7F312FF4u;
    // 7F312FF4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F312FF8:
    ctx->pc = 0x7F312FF8u;
    // 7F312FF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F312FFC:
    ctx->pc = 0x7F312FFCu;
    // 7F312FFC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F313000:
    ctx->pc = 0x7F313000u;
    // 7F313000: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F313004:
    ctx->pc = 0x7F313004u;
    // 7F313004: sth     r29, 30848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30848);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F313008:
    ctx->pc = 0x7F313008u;
    // 7F313008: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31300C:
    ctx->pc = 0x7F31300Cu;
    // 7F31300C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313010:
    ctx->pc = 0x7F313010u;
    // 7F313010: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313014:
    ctx->pc = 0x7F313014u;
    // 7F313014: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F313018:
    ctx->pc = 0x7F313018u;
    // 7F313018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31301C:
    ctx->pc = 0x7F31301Cu;
    ctx->downcount -= 23;
    // 7F31301C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313020:
    ctx->pc = 0x7F313020u;
    // 7F313020: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313024:
    ctx->pc = 0x7F313024u;
    // 7F313024: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313028:
    ctx->pc = 0x7F313028u;
    // 7F313028: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31302C:
    ctx->pc = 0x7F31302Cu;
    // 7F31302C: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313030:
    ctx->pc = 0x7F313030u;
    // 7F313030: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313034:
    ctx->pc = 0x7F313034u;
    // 7F313034: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313038:
    ctx->pc = 0x7F313038u;
    // 7F313038: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F31303C:
    ctx->pc = 0x7F31303Cu;
    // 7F31303C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F313040:
    ctx->pc = 0x7F313040u;
    // 7F313040: stb     r0, 16576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16576);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313044:
    ctx->pc = 0x7F313044u;
    // 7F313044: lbz     r0, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313048:
    ctx->pc = 0x7F313048u;
    // 7F313048: cmplwi  r0, 0x0000
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

label_7F31304C:
    ctx->pc = 0x7F31304Cu;
    // 7F31304C: bc    12, 2, 0x7F313060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313060;
        }
    }

label_7F313050:
    ctx->pc = 0x7F313050u;
    ctx->downcount -= 4;
    // 7F313050: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313054:
    ctx->pc = 0x7F313054u;
    // 7F313054: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313058:
    ctx->pc = 0x7F313058u;
    // 7F313058: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31305C:
    ctx->pc = 0x7F31305Cu;
    // 7F31305C: b       0x7F3131F0
    {
            goto label_7F3131F0;
    }

label_7F313060:
    ctx->pc = 0x7F313060u;
    ctx->downcount -= 4;
    // 7F313060: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F313064:
    ctx->pc = 0x7F313064u;
    // 7F313064: addi    r5, r31, 16448
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16448);

label_7F313068:
    ctx->pc = 0x7F313068u;
    // 7F313068: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F31306C:
    ctx->pc = 0x7F31306Cu;
    // 7F31306C: bl      0x8003E0A8
    {
            ctx->lr = 0x7F313070u;
            ctx->pc = 0x8003E0A8u;
            return;
    }

label_7F313070:
    ctx->pc = 0x7F313070u;
    ctx->downcount -= 2;
    // 7F313070: cmpwi   r3, -5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313074:
    ctx->pc = 0x7F313074u;
    // 7F313074: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F313078:
    ctx->pc = 0x7F313078u;
    ctx->downcount -= 1;
    // 7F313078: bc    4, 0, 0x7F313098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313098;
        }
    }

label_7F31307C:
    ctx->pc = 0x7F31307Cu;
    ctx->downcount -= 2;
    // 7F31307C: cmpwi   r3, -10
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313080:
    ctx->pc = 0x7F313080u;
    // 7F313080: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F313084:
    ctx->pc = 0x7F313084u;
    ctx->downcount -= 1;
    // 7F313084: bc    4, 0, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F313088:
    ctx->pc = 0x7F313088u;
    ctx->downcount -= 2;
    // 7F313088: cmpwi   r3, -128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31308C:
    ctx->pc = 0x7F31308Cu;
    // 7F31308C: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F313090:
    ctx->pc = 0x7F313090u;
    ctx->downcount -= 1;
    // 7F313090: b       0x7F3131F0
    {
            goto label_7F3131F0;
    }

label_7F313094:
    ctx->pc = 0x7F313094u;
    ctx->downcount -= 1;
    // 7F313094: b       0x7F3131F0
    {
            goto label_7F3131F0;
    }

label_7F313098:
    ctx->pc = 0x7F313098u;
    ctx->downcount -= 2;
    // 7F313098: cmpwi   r3, -1
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

label_7F31309C:
    ctx->pc = 0x7F31309Cu;
    // 7F31309C: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F3130A0:
    ctx->pc = 0x7F3130A0u;
    ctx->downcount -= 1;
    // 7F3130A0: bc    4, 0, 0x7F3130B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3130B4;
        }
    }

label_7F3130A4:
    ctx->pc = 0x7F3130A4u;
    ctx->downcount -= 2;
    // 7F3130A4: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3130A8:
    ctx->pc = 0x7F3130A8u;
    // 7F3130A8: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F3130AC:
    ctx->pc = 0x7F3130ACu;
    ctx->downcount -= 1;
    // 7F3130AC: bc    4, 0, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F3130B0:
    ctx->pc = 0x7F3130B0u;
    ctx->downcount -= 1;
    // 7F3130B0: b       0x7F313144
    {
            goto label_7F313144;
    }

label_7F3130B4:
    ctx->pc = 0x7F3130B4u;
    ctx->downcount -= 2;
    // 7F3130B4: cmpwi   r3, 1
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

label_7F3130B8:
    ctx->pc = 0x7F3130B8u;
    // 7F3130B8: bc    4, 0, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F3130BC:
    ctx->pc = 0x7F3130BCu;
    ctx->downcount -= 45;
    // 7F3130BC: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F3130C0:
    ctx->pc = 0x7F3130C0u;
    // 7F3130C0: xoris   r5, r30, 0x8000
    ctx->gpr[5] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F3130C4:
    ctx->pc = 0x7F3130C4u;
    // 7F3130C4: lwz     r0, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3130C8:
    ctx->pc = 0x7F3130C8u;
    // 7F3130C8: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F3130CC:
    ctx->pc = 0x7F3130CCu;
    // 7F3130CC: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3130D0:
    ctx->pc = 0x7F3130D0u;
    // 7F3130D0: addi    r5, r6, -30168
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-30168);

label_7F3130D4:
    ctx->pc = 0x7F3130D4u;
    // 7F3130D4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3130D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3130D8:
    ctx->pc = 0x7F3130D8u;
    // 7F3130D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3130DC:
    ctx->pc = 0x7F3130DCu;
    // 7F3130DC: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3130E0:
    ctx->pc = 0x7F3130E0u;
    // 7F3130E0: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F3130E4:
    ctx->pc = 0x7F3130E4u;
    // 7F3130E4: lfd     f1, -30152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3130E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3130E8:
    ctx->pc = 0x7F3130E8u;
    // 7F3130E8: addi    r5, r31, 16468
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F3130EC:
    ctx->pc = 0x7F3130ECu;
    // 7F3130EC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3130ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3130F0:
    ctx->pc = 0x7F3130F0u;
    // 7F3130F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3130F4:
    ctx->pc = 0x7F3130F4u;
    // 7F3130F4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3130F4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F3130F8:
    ctx->pc = 0x7F3130F8u;
    // 7F3130F8: lfs     f3, -30160(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3130F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-30160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F3130FC:
    ctx->pc = 0x7F3130FCu;
    // 7F3130FC: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F313100:
    ctx->pc = 0x7F313100u;
    // 7F313100: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F313100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F313104:
    ctx->pc = 0x7F313104u;
    // 7F313104: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F313104u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F313108:
    ctx->pc = 0x7F313108u;
    // 7F313108: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F313108u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F31310C:
    ctx->pc = 0x7F31310Cu;
    // 7F31310C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31310Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F313110:
    ctx->pc = 0x7F313110u;
    // 7F313110: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F313110u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F313114:
    ctx->pc = 0x7F313114u;
    // 7F313114: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F313114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F313118:
    ctx->pc = 0x7F313118u;
    // 7F313118: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31311C:
    ctx->pc = 0x7F31311Cu;
    // 7F31311C: stw     r0, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313120:
    ctx->pc = 0x7F313120u;
    // 7F313120: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F313124:
    ctx->pc = 0x7F313124u;
    // 7F313124: lwz     r4, 16452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313128:
    ctx->pc = 0x7F313128u;
    // 7F313128: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F31312C:
    ctx->pc = 0x7F31312Cu;
    // 7F31312C: bl      0x8003F19C
    {
            ctx->lr = 0x7F313130u;
            ctx->pc = 0x8003F19Cu;
            return;
    }

label_7F313130:
    ctx->pc = 0x7F313130u;
    ctx->downcount -= 2;
    // 7F313130: cmpwi   r3, 0
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

label_7F313134:
    ctx->pc = 0x7F313134u;
    // 7F313134: bc    4, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F313138:
    ctx->pc = 0x7F313138u;
    ctx->downcount -= 3;
    // 7F313138: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31313C:
    ctx->pc = 0x7F31313Cu;
    // 7F31313C: stb     r0, 16576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16576);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313140:
    ctx->pc = 0x7F313140u;
    // 7F313140: b       0x7F3131F0
    {
            goto label_7F3131F0;
    }

label_7F313144:
    ctx->pc = 0x7F313144u;
    ctx->downcount -= 2;
    // 7F313144: rlwinm. r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F313148:
    ctx->pc = 0x7F313148u;
    // 7F313148: bc    12, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F31314C:
    ctx->pc = 0x7F31314Cu;
    ctx->downcount -= 54;
    // 7F31314C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F313150:
    ctx->pc = 0x7F313150u;
    // 7F313150: xoris   r4, r30, 0x8000
    ctx->gpr[4] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F313154:
    ctx->pc = 0x7F313154u;
    // 7F313154: lwz     r0, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313158:
    ctx->pc = 0x7F313158u;
    // 7F313158: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F31315C:
    ctx->pc = 0x7F31315Cu;
    // 7F31315C: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F313160:
    ctx->pc = 0x7F313160u;
    // 7F313160: addi    r4, r6, -30168
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-30168);

label_7F313164:
    ctx->pc = 0x7F313164u;
    // 7F313164: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F313164u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F313168:
    ctx->pc = 0x7F313168u;
    // 7F313168: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31316C:
    ctx->pc = 0x7F31316Cu;
    // 7F31316C: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F313170:
    ctx->pc = 0x7F313170u;
    // 7F313170: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F313174:
    ctx->pc = 0x7F313174u;
    // 7F313174: lfd     f1, -30152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F313174u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F313178:
    ctx->pc = 0x7F313178u;
    // 7F313178: addi    r7, r6, -30160
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-30160);

label_7F31317C:
    ctx->pc = 0x7F31317Cu;
    // 7F31317C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31317Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F313180:
    ctx->pc = 0x7F313180u;
    // 7F313180: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F313184:
    ctx->pc = 0x7F313184u;
    // 7F313184: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313188:
    ctx->pc = 0x7F313188u;
    // 7F313188: addi    r6, r31, 16448
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(16448);

label_7F31318C:
    ctx->pc = 0x7F31318Cu;
    // 7F31318C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31318Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F313190:
    ctx->pc = 0x7F313190u;
    // 7F313190: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F313190u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F313194:
    ctx->pc = 0x7F313194u;
    // 7F313194: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F313198:
    ctx->pc = 0x7F313198u;
    // 7F313198: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F313198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31319C:
    ctx->pc = 0x7F31319Cu;
    // 7F31319C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31319Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3131A0:
    ctx->pc = 0x7F3131A0u;
    // 7F3131A0: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3131A0u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F3131A4:
    ctx->pc = 0x7F3131A4u;
    // 7F3131A4: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3131A4u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F3131A8:
    ctx->pc = 0x7F3131A8u;
    // 7F3131A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3131A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3131AC:
    ctx->pc = 0x7F3131ACu;
    // 7F3131AC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3131ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3131B0:
    ctx->pc = 0x7F3131B0u;
    // 7F3131B0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3131B4:
    ctx->pc = 0x7F3131B4u;
    // 7F3131B4: stw     r0, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3131B8:
    ctx->pc = 0x7F3131B8u;
    // 7F3131B8: lwz     r5, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3131BC:
    ctx->pc = 0x7F3131BCu;
    // 7F3131BC: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3131C0:
    ctx->pc = 0x7F3131C0u;
    // 7F3131C0: lwz     r0, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3131C4:
    ctx->pc = 0x7F3131C4u;
    // 7F3131C4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3131C8:
    ctx->pc = 0x7F3131C8u;
    // 7F3131C8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3131CC:
    ctx->pc = 0x7F3131CCu;
    // 7F3131CC: mullw   r5, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[5] = (u32)product;
    }

label_7F3131D0:
    ctx->pc = 0x7F3131D0u;
    // 7F3131D0: bl      0x8003E570
    {
            ctx->lr = 0x7F3131D4u;
            ctx->pc = 0x8003E570u;
            return;
    }

label_7F3131D4:
    ctx->pc = 0x7F3131D4u;
    ctx->downcount -= 2;
    // 7F3131D4: cmpwi   r3, 0
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

label_7F3131D8:
    ctx->pc = 0x7F3131D8u;
    // 7F3131D8: bc    4, 2, 0x7F3131F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3131F0;
        }
    }

label_7F3131DC:
    ctx->pc = 0x7F3131DCu;
    ctx->downcount -= 5;
    // 7F3131DC: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3131E0:
    ctx->pc = 0x7F3131E0u;
    // 7F3131E0: addi    r5, r31, 16468
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F3131E4:
    ctx->pc = 0x7F3131E4u;
    // 7F3131E4: lwz     r4, 16452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3131E8:
    ctx->pc = 0x7F3131E8u;
    // 7F3131E8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3131EC:
    ctx->pc = 0x7F3131ECu;
    // 7F3131EC: bl      0x8003F19C
    {
            ctx->lr = 0x7F3131F0u;
            ctx->pc = 0x8003F19Cu;
            return;
    }

label_7F3131F0:
    ctx->pc = 0x7F3131F0u;
    ctx->downcount -= 16;
    // 7F3131F0: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3131F4:
    ctx->pc = 0x7F3131F4u;
    // 7F3131F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3131F8:
    ctx->pc = 0x7F3131F8u;
    // 7F3131F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3131FC:
    ctx->pc = 0x7F3131FCu;
    // 7F3131FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F313200:
    ctx->pc = 0x7F313200u;
    // 7F313200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313204:
    ctx->pc = 0x7F313204u;
    ctx->downcount -= 21;
    // 7F313204: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313208:
    ctx->pc = 0x7F313208u;
    // 7F313208: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31320C:
    ctx->pc = 0x7F31320Cu;
    // 7F31320C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313210:
    ctx->pc = 0x7F313210u;
    // 7F313210: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313214:
    ctx->pc = 0x7F313214u;
    // 7F313214: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313218:
    ctx->pc = 0x7F313218u;
    // 7F313218: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F31321C:
    ctx->pc = 0x7F31321Cu;
    // 7F31321C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F313220:
    ctx->pc = 0x7F313220u;
    // 7F313220: li      r30, -128
    ctx->gpr[30] = (u32)(s32)(-128);

label_7F313224:
    ctx->pc = 0x7F313224u;
    // 7F313224: lbz     r0, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313228:
    ctx->pc = 0x7F313228u;
    // 7F313228: cmplwi  r0, 0x0000
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

label_7F31322C:
    ctx->pc = 0x7F31322Cu;
    // 7F31322C: bc    12, 2, 0x7F313240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313240;
        }
    }

label_7F313230:
    ctx->pc = 0x7F313230u;
    ctx->downcount -= 4;
    // 7F313230: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313234:
    ctx->pc = 0x7F313234u;
    // 7F313234: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313238:
    ctx->pc = 0x7F313238u;
    // 7F313238: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31323C:
    ctx->pc = 0x7F31323Cu;
    // 7F31323C: b       0x7F3132DC
    {
            goto label_7F3132DC;
    }

label_7F313240:
    ctx->pc = 0x7F313240u;
    ctx->downcount -= 3;
    // 7F313240: lbz     r0, 16576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16576);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313244:
    ctx->pc = 0x7F313244u;
    // 7F313244: extsb. r0, r0
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

label_7F313248:
    ctx->pc = 0x7F313248u;
    // 7F313248: bc    12, 2, 0x7F3132C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3132C0;
        }
    }

label_7F31324C:
    ctx->pc = 0x7F31324Cu;
    ctx->downcount -= 2;
    // 7F31324C: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F313250:
    ctx->pc = 0x7F313250u;
    // 7F313250: bl      0x7F3132F0
    {
            ctx->lr = 0x7F313254u;
            goto label_7F3132F0;
    }

label_7F313254:
    ctx->pc = 0x7F313254u;
    ctx->downcount -= 2;
    // 7F313254: or.   r30, r3, r3
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

label_7F313258:
    ctx->pc = 0x7F313258u;
    // 7F313258: bc    4, 2, 0x7F3132C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3132C0;
        }
    }

label_7F31325C:
    ctx->pc = 0x7F31325Cu;
    ctx->downcount -= 8;
    // 7F31325C: lwz     r3, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313260:
    ctx->pc = 0x7F313260u;
    // 7F313260: lwz     r0, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313264:
    ctx->pc = 0x7F313264u;
    // 7F313264: mullw   r3, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F313268:
    ctx->pc = 0x7F313268u;
    // 7F313268: bl      0x7F3C9148
    {
            ctx->lr = 0x7F31326Cu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F31326C:
    ctx->pc = 0x7F31326Cu;
    ctx->downcount -= 4;
    // 7F31326C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313270:
    ctx->pc = 0x7F313270u;
    // 7F313270: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313274:
    ctx->pc = 0x7F313274u;
    // 7F313274: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F313278:
    ctx->pc = 0x7F313278u;
    // 7F313278: bl      0x8000519C
    {
            ctx->lr = 0x7F31327Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F31327C:
    ctx->pc = 0x7F31327Cu;
    ctx->downcount -= 9;
    // 7F31327C: lwz     r4, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313280:
    ctx->pc = 0x7F313280u;
    // 7F313280: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313284:
    ctx->pc = 0x7F313284u;
    // 7F313284: lwz     r0, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313288:
    ctx->pc = 0x7F313288u;
    // 7F313288: mullw   r4, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_7F31328C:
    ctx->pc = 0x7F31328Cu;
    // 7F31328C: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313290u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313290:
    ctx->pc = 0x7F313290u;
    ctx->downcount -= 3;
    // 7F313290: lbz     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313294:
    ctx->pc = 0x7F313294u;
    // 7F313294: cmplwi  r0, 0x0000
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

label_7F313298:
    ctx->pc = 0x7F313298u;
    // 7F313298: bc    4, 2, 0x7F3132B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3132B8;
        }
    }

label_7F31329C:
    ctx->pc = 0x7F31329Cu;
    ctx->downcount -= 10;
    // 7F31329C: lwz     r6, 16580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16580);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3132A0:
    ctx->pc = 0x7F3132A0u;
    // 7F3132A0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3132A4:
    ctx->pc = 0x7F3132A4u;
    // 7F3132A4: lwz     r0, 16584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3132A8:
    ctx->pc = 0x7F3132A8u;
    // 7F3132A8: addi    r3, r31, 16448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16448);

label_7F3132AC:
    ctx->pc = 0x7F3132ACu;
    // 7F3132AC: mullw   r5, r6, r0
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[5] = (u32)product;
    }

label_7F3132B0:
    ctx->pc = 0x7F3132B0u;
    // 7F3132B0: bl      0x8003ED60
    {
            ctx->lr = 0x7F3132B4u;
            ctx->pc = 0x8003ED60u;
            return;
    }

label_7F3132B4:
    ctx->pc = 0x7F3132B4u;
    ctx->downcount -= 1;
    // 7F3132B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3132B8:
    ctx->pc = 0x7F3132B8u;
    ctx->downcount -= 2;
    // 7F3132B8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3132BC:
    ctx->pc = 0x7F3132BCu;
    // 7F3132BC: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3132C0u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3132C0:
    ctx->pc = 0x7F3132C0u;
    ctx->downcount -= 3;
    // 7F3132C0: lbz     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3132C4:
    ctx->pc = 0x7F3132C4u;
    // 7F3132C4: cmplwi  r0, 0x0000
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

label_7F3132C8:
    ctx->pc = 0x7F3132C8u;
    // 7F3132C8: bc    12, 2, 0x7F3132D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3132D8;
        }
    }

label_7F3132CC:
    ctx->pc = 0x7F3132CCu;
    ctx->downcount -= 3;
    // 7F3132CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3132D0:
    ctx->pc = 0x7F3132D0u;
    // 7F3132D0: li      r30, -3
    ctx->gpr[30] = (u32)(s32)(-3);

label_7F3132D4:
    ctx->pc = 0x7F3132D4u;
    // 7F3132D4: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3132D8:
    ctx->pc = 0x7F3132D8u;
    ctx->downcount -= 1;
    // 7F3132D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3132DC:
    ctx->pc = 0x7F3132DCu;
    ctx->downcount -= 16;
    // 7F3132DC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3132E0:
    ctx->pc = 0x7F3132E0u;
    // 7F3132E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3132E4:
    ctx->pc = 0x7F3132E4u;
    // 7F3132E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3132E8:
    ctx->pc = 0x7F3132E8u;
    // 7F3132E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3132EC:
    ctx->pc = 0x7F3132ECu;
    // 7F3132EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3132F0:
    ctx->pc = 0x7F3132F0u;
    ctx->downcount -= 20;
    // 7F3132F0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3132F4:
    ctx->pc = 0x7F3132F4u;
    // 7F3132F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3132F8:
    ctx->pc = 0x7F3132F8u;
    // 7F3132F8: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3132FC:
    ctx->pc = 0x7F3132FCu;
    // 7F3132FC: stmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313300:
    ctx->pc = 0x7F313300u;
    // 7F313300: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313304:
    ctx->pc = 0x7F313304u;
    // 7F313304: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313308:
    ctx->pc = 0x7F313308u;
    // 7F313308: li      r31, -128
    ctx->gpr[31] = (u32)(s32)(-128);

label_7F31330C:
    ctx->pc = 0x7F31330Cu;
    // 7F31330C: lbz     r0, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313310:
    ctx->pc = 0x7F313310u;
    // 7F313310: cmplwi  r0, 0x0000
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

label_7F313314:
    ctx->pc = 0x7F313314u;
    // 7F313314: bc    12, 2, 0x7F313328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313328;
        }
    }

label_7F313318:
    ctx->pc = 0x7F313318u;
    ctx->downcount -= 4;
    // 7F313318: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31331C:
    ctx->pc = 0x7F31331Cu;
    // 7F31331C: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313320:
    ctx->pc = 0x7F313320u;
    // 7F313320: stb     r0, 16396(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313324:
    ctx->pc = 0x7F313324u;
    // 7F313324: b       0x7F3135DC
    {
            goto label_7F3135DC;
    }

label_7F313328:
    ctx->pc = 0x7F313328u;
    ctx->downcount -= 30;
    // 7F313328: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31332C:
    ctx->pc = 0x7F31332Cu;
    // 7F31332C: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F313330:
    ctx->pc = 0x7F313330u;
    // 7F313330: stw     r3, 16524(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16524);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313334:
    ctx->pc = 0x7F313334u;
    // 7F313334: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313338:
    ctx->pc = 0x7F313338u;
    // 7F313338: addi    r3, r29, 30880
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(30880);

label_7F31333C:
    ctx->pc = 0x7F31333Cu;
    // 7F31333C: addi    r4, r29, 30912
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(30912);

label_7F313340:
    ctx->pc = 0x7F313340u;
    // 7F313340: stw     r0, 16516(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313344:
    ctx->pc = 0x7F313344u;
    // 7F313344: addi    r6, r29, 16416
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(16416);

label_7F313348:
    ctx->pc = 0x7F313348u;
    // 7F313348: lbz     r0, 16514(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16514);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31334C:
    ctx->pc = 0x7F31334Cu;
    // 7F31334C: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_7F313350:
    ctx->pc = 0x7F313350u;
    // 7F313350: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F313354:
    ctx->pc = 0x7F313354u;
    // 7F313354: stb     r0, 16514(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16514);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313358:
    ctx->pc = 0x7F313358u;
    // 7F313358: lbz     r0, 16514(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16514);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31335C:
    ctx->pc = 0x7F31335Cu;
    // 7F31335C: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_7F313360:
    ctx->pc = 0x7F313360u;
    // 7F313360: stb     r0, 16514(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16514);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313364:
    ctx->pc = 0x7F313364u;
    // 7F313364: lhz     r0, 16520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16520);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F313368:
    ctx->pc = 0x7F313368u;
    // 7F313368: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_7F31336C:
    ctx->pc = 0x7F31336Cu;
    // 7F31336C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F313370:
    ctx->pc = 0x7F313370u;
    // 7F313370: sth     r0, 16520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16520);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313374:
    ctx->pc = 0x7F313374u;
    // 7F313374: lhz     r0, 16522(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16522);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F313378:
    ctx->pc = 0x7F313378u;
    // 7F313378: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_7F31337C:
    ctx->pc = 0x7F31337Cu;
    // 7F31337C: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F313380:
    ctx->pc = 0x7F313380u;
    // 7F313380: sth     r0, 16522(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16522);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313384:
    ctx->pc = 0x7F313384u;
    // 7F313384: lhz     r0, 16520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16520);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F313388:
    ctx->pc = 0x7F313388u;
    // 7F313388: rlwinm r0, r0, 0, 30, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF3u;
    }

label_7F31338C:
    ctx->pc = 0x7F31338Cu;
    // 7F31338C: sth     r0, 16520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16520);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313390:
    ctx->pc = 0x7F313390u;
    // 7F313390: lhz     r0, 16522(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16522);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F313394:
    ctx->pc = 0x7F313394u;
    // 7F313394: rlwinm r0, r0, 0, 30, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF3u;
    }

label_7F313398:
    ctx->pc = 0x7F313398u;
    // 7F313398: sth     r0, 16522(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16522);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F31339C:
    ctx->pc = 0x7F31339Cu;
    // 7F31339C: bl      0x7F313F70
    {
            ctx->lr = 0x7F3133A0u;
            goto label_7F313F70;
    }

label_7F3133A0:
    ctx->pc = 0x7F3133A0u;
    ctx->downcount -= 4;
    // 7F3133A0: lis     r3, 27
    ctx->gpr[3] = ((u32)(s32)(27) << 16);

label_7F3133A4:
    ctx->pc = 0x7F3133A4u;
    // 7F3133A4: li      r4, 114
    ctx->gpr[4] = (u32)(s32)(114);

label_7F3133A8:
    ctx->pc = 0x7F3133A8u;
    // 7F3133A8: addi    r3, r3, 20301
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20301);

label_7F3133AC:
    ctx->pc = 0x7F3133ACu;
    // 7F3133AC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F3133B0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F3133B0:
    ctx->pc = 0x7F3133B0u;
    ctx->downcount -= 1;
    // 7F3133B0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F3133B4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F3133B4:
    ctx->pc = 0x7F3133B4u;
    ctx->downcount -= 9;
    // 7F3133B4: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3133B8:
    ctx->pc = 0x7F3133B8u;
    // 7F3133B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3133BC:
    ctx->pc = 0x7F3133BCu;
    // 7F3133BC: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3133C0:
    ctx->pc = 0x7F3133C0u;
    // 7F3133C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3133C4:
    ctx->pc = 0x7F3133C4u;
    // 7F3133C4: add   r9, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F3133C8:
    ctx->pc = 0x7F3133C8u;
    // 7F3133C8: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_7F3133CC:
    ctx->pc = 0x7F3133CCu;
    // 7F3133CC: cmplwi  r6, 0x0000
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

label_7F3133D0:
    ctx->pc = 0x7F3133D0u;
    // 7F3133D0: bc    4, 1, 0x7F31343C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31343C;
        }
    }

label_7F3133D4:
    ctx->downcount -= 4;
    // 7F3133D4: add   r8, r9, r5
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F3133D8:
    ctx->pc = 0x7F3133D8u;
    // 7F3133D8: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3133DC:
    // 7F3133DC: cmplwi  r0, 0x0000
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

label_7F3133E0:
    // 7F3133E0: bc    12, 2, 0x7F313404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313404;
        }
    }

label_7F3133E4:
    ctx->downcount -= 8;
    // 7F3133E4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F3133E8:
    // 7F3133E8: addi    r7, r1, 36
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(36);

label_7F3133EC:
    ctx->pc = 0x7F3133ECu;
    // 7F3133EC: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3133F0:
    // 7F3133F0: addi    r6, r1, 92
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(92);

label_7F3133F4:
    ctx->pc = 0x7F3133F4u;
    // 7F3133F4: lwzx    r7, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3133F8:
    ctx->pc = 0x7F3133F8u;
    // 7F3133F8: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3133FC:
    // 7F3133FC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F313400:
    ctx->pc = 0x7F313400u;
    // 7F313400: stwx    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313404:
    ctx->pc = 0x7F313404u;
    ctx->downcount -= 3;
    // 7F313404: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313408:
    // 7F313408: cmplwi  r0, 0x0000
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

label_7F31340C:
    // 7F31340C: bc    12, 2, 0x7F313430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313430;
        }
    }

label_7F313410:
    ctx->downcount -= 8;
    // 7F313410: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F313414:
    // 7F313414: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313418:
    ctx->pc = 0x7F313418u;
    // 7F313418: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31341C:
    // 7F31341C: addi    r6, r1, 64
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(64);

label_7F313420:
    ctx->pc = 0x7F313420u;
    // 7F313420: lwzx    r7, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F313424:
    ctx->pc = 0x7F313424u;
    // 7F313424: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313428:
    // 7F313428: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F31342C:
    ctx->pc = 0x7F31342Cu;
    // 7F31342C: stwx    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313430:
    ctx->downcount -= 3;
    // 7F313430: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F313434:
    // 7F313434: addi    r5, r5, 8
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8);

label_7F313438:
    // 7F313438: bc    16, 0, 0x7F3133D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3133D4u;
                return;
            }
            goto label_7F3133D4;
        }
    }

label_7F31343C:
    ctx->pc = 0x7F31343Cu;
    ctx->downcount -= 4;
    // 7F31343C: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313440:
    ctx->pc = 0x7F313440u;
    // 7F313440: addi    r3, r29, 30944
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(30944);

label_7F313444:
    ctx->pc = 0x7F313444u;
    // 7F313444: li      r5, 6144
    ctx->gpr[5] = (u32)(s32)(6144);

label_7F313448:
    ctx->pc = 0x7F313448u;
    // 7F313448: bl      0x8000519C
    {
            ctx->lr = 0x7F31344Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F31344C:
    ctx->pc = 0x7F31344Cu;
    ctx->downcount -= 3;
    // 7F31344C: addi    r3, r29, 30944
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(30944);

label_7F313450:
    ctx->pc = 0x7F313450u;
    // 7F313450: li      r4, 6144
    ctx->gpr[4] = (u32)(s32)(6144);

label_7F313454:
    ctx->pc = 0x7F313454u;
    // 7F313454: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313458u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313458:
    ctx->pc = 0x7F313458u;
    ctx->downcount -= 2;
    // 7F313458: cmpwi   r30, 0
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

label_7F31345C:
    ctx->pc = 0x7F31345Cu;
    // 7F31345C: bc    4, 2, 0x7F3134E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3134E4;
        }
    }

label_7F313460:
    ctx->pc = 0x7F313460u;
    ctx->downcount -= 6;
    // 7F313460: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F313464:
    ctx->pc = 0x7F313464u;
    // 7F313464: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F313468:
    ctx->pc = 0x7F313468u;
    // 7F313468: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31346C:
    ctx->pc = 0x7F31346Cu;
    // 7F31346C: lha     r4, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313470:
    ctx->pc = 0x7F313470u;
    // 7F313470: rlwinm. r3, r4, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F313474:
    ctx->pc = 0x7F313474u;
    // 7F313474: bc    4, 2, 0x7F313480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313480;
        }
    }

label_7F313478:
    ctx->pc = 0x7F313478u;
    ctx->downcount -= 2;
    // 7F313478: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31347C:
    ctx->pc = 0x7F31347Cu;
    // 7F31347C: b       0x7F3134E8
    {
            goto label_7F3134E8;
    }

label_7F313480:
    ctx->pc = 0x7F313480u;
    ctx->downcount -= 1;
    // 7F313480: bc    12, 2, 0x7F31349C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31349C;
        }
    }

label_7F313484:
    ctx->pc = 0x7F313484u;
    ctx->downcount -= 2;
    // 7F313484: rlwinm. r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F313488:
    ctx->pc = 0x7F313488u;
    // 7F313488: bc    12, 2, 0x7F31349C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31349C;
        }
    }

label_7F31348C:
    ctx->pc = 0x7F31348Cu;
    ctx->downcount -= 2;
    // 7F31348C: rlwinm. r0, r4, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F313490:
    ctx->pc = 0x7F313490u;
    // 7F313490: bc    4, 2, 0x7F31349C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31349C;
        }
    }

label_7F313494:
    ctx->pc = 0x7F313494u;
    ctx->downcount -= 2;
    // 7F313494: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F313498:
    ctx->pc = 0x7F313498u;
    // 7F313498: b       0x7F3134E8
    {
            goto label_7F3134E8;
    }

label_7F31349C:
    ctx->pc = 0x7F31349Cu;
    ctx->downcount -= 2;
    // 7F31349C: cmpwi   r3, 0
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

label_7F3134A0:
    ctx->pc = 0x7F3134A0u;
    // 7F3134A0: bc    12, 2, 0x7F3134BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3134BC;
        }
    }

label_7F3134A4:
    ctx->pc = 0x7F3134A4u;
    ctx->downcount -= 2;
    // 7F3134A4: rlwinm. r0, r4, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3134A8:
    ctx->pc = 0x7F3134A8u;
    // 7F3134A8: bc    12, 2, 0x7F3134BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3134BC;
        }
    }

label_7F3134AC:
    ctx->pc = 0x7F3134ACu;
    ctx->downcount -= 2;
    // 7F3134AC: rlwinm. r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3134B0:
    ctx->pc = 0x7F3134B0u;
    // 7F3134B0: bc    4, 2, 0x7F3134BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3134BC;
        }
    }

label_7F3134B4:
    ctx->pc = 0x7F3134B4u;
    ctx->downcount -= 2;
    // 7F3134B4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F3134B8:
    ctx->pc = 0x7F3134B8u;
    // 7F3134B8: b       0x7F3134E8
    {
            goto label_7F3134E8;
    }

label_7F3134BC:
    ctx->pc = 0x7F3134BCu;
    ctx->downcount -= 2;
    // 7F3134BC: cmpwi   r3, 0
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

label_7F3134C0:
    ctx->pc = 0x7F3134C0u;
    // 7F3134C0: bc    12, 2, 0x7F3134DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3134DC;
        }
    }

label_7F3134C4:
    ctx->pc = 0x7F3134C4u;
    ctx->downcount -= 2;
    // 7F3134C4: rlwinm. r0, r4, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3134C8:
    ctx->pc = 0x7F3134C8u;
    // 7F3134C8: bc    12, 2, 0x7F3134DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3134DC;
        }
    }

label_7F3134CC:
    ctx->pc = 0x7F3134CCu;
    ctx->downcount -= 2;
    // 7F3134CC: rlwinm. r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3134D0:
    ctx->pc = 0x7F3134D0u;
    // 7F3134D0: bc    12, 2, 0x7F3134DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3134DC;
        }
    }

label_7F3134D4:
    ctx->pc = 0x7F3134D4u;
    ctx->downcount -= 2;
    // 7F3134D4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3134D8:
    ctx->pc = 0x7F3134D8u;
    // 7F3134D8: b       0x7F3134E8
    {
            goto label_7F3134E8;
    }

label_7F3134DC:
    ctx->pc = 0x7F3134DCu;
    ctx->downcount -= 2;
    // 7F3134DC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3134E0:
    ctx->pc = 0x7F3134E0u;
    // 7F3134E0: b       0x7F3134E8
    {
            goto label_7F3134E8;
    }

label_7F3134E4:
    ctx->pc = 0x7F3134E4u;
    ctx->downcount -= 1;
    // 7F3134E4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3134E8:
    ctx->pc = 0x7F3134E8u;
    ctx->downcount -= 7;
    // 7F3134E8: rlwinm r30, r0, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3134EC:
    ctx->pc = 0x7F3134ECu;
    // 7F3134EC: addi    r4, r1, 92
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(92);

label_7F3134F0:
    ctx->pc = 0x7F3134F0u;
    // 7F3134F0: addis   r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F3134F4:
    ctx->pc = 0x7F3134F4u;
    // 7F3134F4: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3134F8:
    ctx->pc = 0x7F3134F8u;
    // 7F3134F8: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F3134FC:
    ctx->pc = 0x7F3134FCu;
    // 7F3134FC: addi    r3, r3, -28448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28448);

label_7F313500:
    ctx->pc = 0x7F313500u;
    // 7F313500: bl      0x8000519C
    {
            ctx->lr = 0x7F313504u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313504:
    ctx->pc = 0x7F313504u;
    ctx->downcount -= 4;
    // 7F313504: addis   r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F313508:
    ctx->pc = 0x7F313508u;
    // 7F313508: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F31350C:
    ctx->pc = 0x7F31350Cu;
    // 7F31350C: addi    r3, r3, -28448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28448);

label_7F313510:
    ctx->pc = 0x7F313510u;
    // 7F313510: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313514u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313514:
    ctx->pc = 0x7F313514u;
    ctx->downcount -= 6;
    // 7F313514: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F313518:
    ctx->pc = 0x7F313518u;
    // 7F313518: addis   r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F31351C:
    ctx->pc = 0x7F31351Cu;
    // 7F31351C: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313520:
    ctx->pc = 0x7F313520u;
    // 7F313520: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F313524:
    ctx->pc = 0x7F313524u;
    // 7F313524: addi    r3, r3, -27424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27424);

label_7F313528:
    ctx->pc = 0x7F313528u;
    // 7F313528: bl      0x8000519C
    {
            ctx->lr = 0x7F31352Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F31352C:
    ctx->pc = 0x7F31352Cu;
    ctx->downcount -= 4;
    // 7F31352C: addis   r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F313530:
    ctx->pc = 0x7F313530u;
    // 7F313530: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F313534:
    ctx->pc = 0x7F313534u;
    // 7F313534: addi    r3, r3, -27424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27424);

label_7F313538:
    ctx->pc = 0x7F313538u;
    // 7F313538: bl      0x8001DA7C
    {
            ctx->lr = 0x7F31353Cu;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F31353C:
    ctx->pc = 0x7F31353Cu;
    ctx->downcount -= 3;
    // 7F31353C: lbz     r0, 16576(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16576);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313540:
    ctx->pc = 0x7F313540u;
    // 7F313540: extsb. r0, r0
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

label_7F313544:
    ctx->pc = 0x7F313544u;
    // 7F313544: bc    12, 2, 0x7F3135C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3135C0;
        }
    }

label_7F313548:
    ctx->pc = 0x7F313548u;
    ctx->downcount -= 2;
    // 7F313548: lwz     r3, 16580(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31354C:
    ctx->pc = 0x7F31354Cu;
    // 7F31354C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F313550u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F313550:
    ctx->pc = 0x7F313550u;
    ctx->downcount -= 4;
    // 7F313550: lwz     r5, 16580(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16580);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F313554:
    ctx->pc = 0x7F313554u;
    // 7F313554: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313558:
    ctx->pc = 0x7F313558u;
    // 7F313558: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31355C:
    ctx->pc = 0x7F31355Cu;
    // 7F31355C: bl      0x800050B4
    {
            ctx->lr = 0x7F313560u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F313560:
    ctx->pc = 0x7F313560u;
    ctx->downcount -= 4;
    // 7F313560: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313564:
    ctx->pc = 0x7F313564u;
    // 7F313564: addi    r4, r29, 30880
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(30880);

label_7F313568:
    ctx->pc = 0x7F313568u;
    // 7F313568: li      r5, 7744
    ctx->gpr[5] = (u32)(s32)(7744);

label_7F31356C:
    ctx->pc = 0x7F31356Cu;
    // 7F31356C: bl      0x8000519C
    {
            ctx->lr = 0x7F313570u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313570:
    ctx->pc = 0x7F313570u;
    ctx->downcount -= 3;
    // 7F313570: lwz     r4, 16580(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16580);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313574:
    ctx->pc = 0x7F313574u;
    // 7F313574: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313578:
    ctx->pc = 0x7F313578u;
    // 7F313578: bl      0x8001DA7C
    {
            ctx->lr = 0x7F31357Cu;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F31357C:
    ctx->pc = 0x7F31357Cu;
    ctx->downcount -= 5;
    // 7F31357C: lwz     r5, 16580(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16580);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F313580:
    ctx->pc = 0x7F313580u;
    // 7F313580: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313584:
    ctx->pc = 0x7F313584u;
    // 7F313584: addi    r3, r29, 16448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(16448);

label_7F313588:
    ctx->pc = 0x7F313588u;
    // 7F313588: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31358C:
    ctx->pc = 0x7F31358Cu;
    // 7F31358C: bl      0x8003ED60
    {
            ctx->lr = 0x7F313590u;
            ctx->pc = 0x8003ED60u;
            return;
    }

label_7F313590:
    ctx->pc = 0x7F313590u;
    ctx->downcount -= 4;
    // 7F313590: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313594:
    ctx->pc = 0x7F313594u;
    // 7F313594: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313598:
    ctx->pc = 0x7F313598u;
    // 7F313598: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31359C:
    ctx->pc = 0x7F31359Cu;
    // 7F31359C: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3135A0u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3135A0:
    ctx->pc = 0x7F3135A0u;
    ctx->downcount -= 2;
    // 7F3135A0: cmpwi   r31, 0
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

label_7F3135A4:
    ctx->pc = 0x7F3135A4u;
    // 7F3135A4: bc    4, 2, 0x7F3135C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3135C0;
        }
    }

label_7F3135A8:
    ctx->pc = 0x7F3135A8u;
    ctx->downcount -= 5;
    // 7F3135A8: lbz     r3, 16397(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3135AC:
    ctx->pc = 0x7F3135ACu;
    // 7F3135AC: addi    r5, r29, 16468
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(16468);

label_7F3135B0:
    ctx->pc = 0x7F3135B0u;
    // 7F3135B0: lwz     r4, 16452(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3135B4:
    ctx->pc = 0x7F3135B4u;
    // 7F3135B4: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3135B8:
    ctx->pc = 0x7F3135B8u;
    // 7F3135B8: bl      0x8003F424
    {
            ctx->lr = 0x7F3135BCu;
            ctx->pc = 0x8003F424u;
            return;
    }

label_7F3135BC:
    ctx->pc = 0x7F3135BCu;
    ctx->downcount -= 1;
    // 7F3135BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3135C0:
    ctx->pc = 0x7F3135C0u;
    ctx->downcount -= 3;
    // 7F3135C0: lbz     r0, 16396(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3135C4:
    ctx->pc = 0x7F3135C4u;
    // 7F3135C4: cmplwi  r0, 0x0000
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

label_7F3135C8:
    ctx->pc = 0x7F3135C8u;
    // 7F3135C8: bc    12, 2, 0x7F3135D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3135D8;
        }
    }

label_7F3135CC:
    ctx->pc = 0x7F3135CCu;
    ctx->downcount -= 3;
    // 7F3135CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3135D0:
    ctx->pc = 0x7F3135D0u;
    // 7F3135D0: li      r31, -3
    ctx->gpr[31] = (u32)(s32)(-3);

label_7F3135D4:
    ctx->pc = 0x7F3135D4u;
    // 7F3135D4: stb     r0, 16396(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3135D8:
    ctx->pc = 0x7F3135D8u;
    ctx->downcount -= 1;
    // 7F3135D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3135DC:
    ctx->pc = 0x7F3135DCu;
    ctx->downcount -= 16;
    // 7F3135DC: lmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3135E0:
    ctx->pc = 0x7F3135E0u;
    // 7F3135E0: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3135E4:
    ctx->pc = 0x7F3135E4u;
    // 7F3135E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3135E8:
    ctx->pc = 0x7F3135E8u;
    // 7F3135E8: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F3135EC:
    ctx->pc = 0x7F3135ECu;
    // 7F3135EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3135F0:
    ctx->pc = 0x7F3135F0u;
    ctx->downcount -= 21;
    // 7F3135F0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3135F4:
    ctx->pc = 0x7F3135F4u;
    // 7F3135F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3135F8:
    ctx->pc = 0x7F3135F8u;
    // 7F3135F8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3135FC:
    ctx->pc = 0x7F3135FCu;
    // 7F3135FC: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313600:
    ctx->pc = 0x7F313600u;
    // 7F313600: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313604:
    ctx->pc = 0x7F313604u;
    // 7F313604: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313608:
    ctx->pc = 0x7F313608u;
    // 7F313608: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F31360C:
    ctx->pc = 0x7F31360Cu;
    // 7F31360C: li      r31, -128
    ctx->gpr[31] = (u32)(s32)(-128);

label_7F313610:
    ctx->pc = 0x7F313610u;
    // 7F313610: lbz     r0, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313614:
    ctx->pc = 0x7F313614u;
    // 7F313614: cmplwi  r0, 0x0000
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

label_7F313618:
    ctx->pc = 0x7F313618u;
    // 7F313618: bc    12, 2, 0x7F31362C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31362C;
        }
    }

label_7F31361C:
    ctx->pc = 0x7F31361Cu;
    ctx->downcount -= 4;
    // 7F31361C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313620:
    ctx->pc = 0x7F313620u;
    // 7F313620: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313624:
    ctx->pc = 0x7F313624u;
    // 7F313624: stb     r0, 16396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313628:
    ctx->pc = 0x7F313628u;
    // 7F313628: b       0x7F3136F4
    {
            goto label_7F3136F4;
    }

label_7F31362C:
    ctx->pc = 0x7F31362Cu;
    ctx->downcount -= 3;
    // 7F31362C: lbz     r0, 16576(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16576);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313630:
    ctx->pc = 0x7F313630u;
    // 7F313630: extsb. r0, r0
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

label_7F313634:
    ctx->pc = 0x7F313634u;
    // 7F313634: bc    12, 2, 0x7F3136D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3136D8;
        }
    }

label_7F313638:
    ctx->pc = 0x7F313638u;
    ctx->downcount -= 20;
    // 7F313638: xoris   r3, r30, 0x8000
    ctx->gpr[3] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F31363C:
    ctx->pc = 0x7F31363Cu;
    // 7F31363C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F313640:
    ctx->pc = 0x7F313640u;
    // 7F313640: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313644:
    ctx->pc = 0x7F313644u;
    // 7F313644: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F313648:
    ctx->pc = 0x7F313648u;
    // 7F313648: lfd     f2, -30168(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F313648u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30168);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31364C:
    ctx->pc = 0x7F31364Cu;
    // 7F31364C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F313650:
    ctx->pc = 0x7F313650u;
    // 7F313650: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313654:
    ctx->pc = 0x7F313654u;
    // 7F313654: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F313658:
    ctx->pc = 0x7F313658u;
    // 7F313658: lfs     f0, -30144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F313658u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31365C:
    ctx->pc = 0x7F31365Cu;
    // 7F31365C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31365Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F313660:
    ctx->pc = 0x7F313660u;
    // 7F313660: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F313660u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F313664:
    ctx->pc = 0x7F313664u;
    // 7F313664: lfs     f2, -30160(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F313664u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F313668:
    ctx->pc = 0x7F313668u;
    // 7F313668: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F313668u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F31366C:
    ctx->pc = 0x7F31366Cu;
    // 7F31366C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31366Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F313670:
    ctx->pc = 0x7F313670u;
    // 7F313670: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F313670u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F313674:
    ctx->pc = 0x7F313674u;
    // 7F313674: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F313674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F313678:
    ctx->pc = 0x7F313678u;
    // 7F313678: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31367C:
    ctx->pc = 0x7F31367Cu;
    // 7F31367C: rlwinm r27, r0, 9, 0, 22
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0xFFFFFE00u;
    }

label_7F313680:
    ctx->pc = 0x7F313680u;
    // 7F313680: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F313684:
    ctx->pc = 0x7F313684u;
    // 7F313684: bl      0x7F3C9148
    {
            ctx->lr = 0x7F313688u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F313688:
    ctx->pc = 0x7F313688u;
    ctx->downcount -= 4;
    // 7F313688: lbz     r0, 16396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31368C:
    ctx->pc = 0x7F31368Cu;
    // 7F31368C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313690:
    ctx->pc = 0x7F313690u;
    // 7F313690: cmplwi  r0, 0x0000
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

label_7F313694:
    ctx->pc = 0x7F313694u;
    // 7F313694: bc    4, 2, 0x7F3136D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3136D0;
        }
    }

label_7F313698:
    ctx->pc = 0x7F313698u;
    ctx->downcount -= 5;
    // 7F313698: lwz     r6, 16580(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16580);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31369C:
    ctx->pc = 0x7F31369Cu;
    // 7F31369C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3136A0:
    ctx->pc = 0x7F3136A0u;
    // 7F3136A0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3136A4:
    ctx->pc = 0x7F3136A4u;
    // 7F3136A4: addi    r3, r28, 16448
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(16448);

label_7F3136A8:
    ctx->pc = 0x7F3136A8u;
    // 7F3136A8: bl      0x8003E9E4
    {
            ctx->lr = 0x7F3136ACu;
            ctx->pc = 0x8003E9E4u;
            return;
    }

label_7F3136AC:
    ctx->pc = 0x7F3136ACu;
    ctx->downcount -= 2;
    // 7F3136AC: or.   r31, r3, r3
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

label_7F3136B0:
    ctx->pc = 0x7F3136B0u;
    // 7F3136B0: bc    4, 2, 0x7F3136D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3136D0;
        }
    }

label_7F3136B4:
    ctx->pc = 0x7F3136B4u;
    ctx->downcount -= 3;
    // 7F3136B4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3136B8:
    ctx->pc = 0x7F3136B8u;
    // 7F3136B8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3136BC:
    ctx->pc = 0x7F3136BCu;
    // 7F3136BC: bl      0x8001DA20
    {
            ctx->lr = 0x7F3136C0u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_7F3136C0:
    ctx->pc = 0x7F3136C0u;
    ctx->downcount -= 4;
    // 7F3136C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3136C4:
    ctx->pc = 0x7F3136C4u;
    // 7F3136C4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3136C8:
    ctx->pc = 0x7F3136C8u;
    // 7F3136C8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3136CC:
    ctx->pc = 0x7F3136CCu;
    // 7F3136CC: bl      0x8000519C
    {
            ctx->lr = 0x7F3136D0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F3136D0:
    ctx->pc = 0x7F3136D0u;
    ctx->downcount -= 2;
    // 7F3136D0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3136D4:
    ctx->pc = 0x7F3136D4u;
    // 7F3136D4: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F3136D8u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F3136D8:
    ctx->pc = 0x7F3136D8u;
    ctx->downcount -= 3;
    // 7F3136D8: lbz     r0, 16396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3136DC:
    ctx->pc = 0x7F3136DCu;
    // 7F3136DC: cmplwi  r0, 0x0000
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

label_7F3136E0:
    ctx->pc = 0x7F3136E0u;
    // 7F3136E0: bc    12, 2, 0x7F3136F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3136F0;
        }
    }

label_7F3136E4:
    ctx->pc = 0x7F3136E4u;
    ctx->downcount -= 3;
    // 7F3136E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3136E8:
    ctx->pc = 0x7F3136E8u;
    // 7F3136E8: li      r31, -3
    ctx->gpr[31] = (u32)(s32)(-3);

label_7F3136EC:
    ctx->pc = 0x7F3136ECu;
    // 7F3136EC: stb     r0, 16396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3136F0:
    ctx->pc = 0x7F3136F0u;
    ctx->downcount -= 1;
    // 7F3136F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3136F4:
    ctx->pc = 0x7F3136F4u;
    ctx->downcount -= 16;
    // 7F3136F4: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3136F8:
    ctx->pc = 0x7F3136F8u;
    // 7F3136F8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3136FC:
    ctx->pc = 0x7F3136FCu;
    // 7F3136FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313700:
    ctx->pc = 0x7F313700u;
    // 7F313700: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F313704:
    ctx->pc = 0x7F313704u;
    // 7F313704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313708:
    ctx->pc = 0x7F313708u;
    ctx->downcount -= 9;
    // 7F313708: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31370C:
    ctx->pc = 0x7F31370Cu;
    // 7F31370C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313710:
    ctx->pc = 0x7F313710u;
    // 7F313710: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313714:
    ctx->pc = 0x7F313714u;
    // 7F313714: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F313718:
    ctx->pc = 0x7F313718u;
    // 7F313718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31371C:
    ctx->pc = 0x7F31371Cu;
    // 7F31371C: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_7F313720:
    ctx->pc = 0x7F313720u;
    // 7F313720: lbz     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313724:
    ctx->pc = 0x7F313724u;
    // 7F313724: cmplwi  r0, 0x0000
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

label_7F313728:
    ctx->pc = 0x7F313728u;
    // 7F313728: bc    12, 2, 0x7F31373C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31373C;
        }
    }

label_7F31372C:
    ctx->pc = 0x7F31372Cu;
    ctx->downcount -= 4;
    // 7F31372C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313730:
    ctx->pc = 0x7F313730u;
    // 7F313730: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313734:
    ctx->pc = 0x7F313734u;
    // 7F313734: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313738:
    ctx->pc = 0x7F313738u;
    // 7F313738: b       0x7F313758
    {
            goto label_7F313758;
    }

label_7F31373C:
    ctx->pc = 0x7F31373Cu;
    ctx->downcount -= 3;
    // 7F31373C: lbz     r0, 16576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16576);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313740:
    ctx->pc = 0x7F313740u;
    // 7F313740: extsb. r0, r0
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

label_7F313744:
    ctx->pc = 0x7F313744u;
    // 7F313744: bc    12, 2, 0x7F313758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313758;
        }
    }

label_7F313748:
    ctx->pc = 0x7F313748u;
    ctx->downcount -= 2;
    // 7F313748: addi    r3, r31, 16448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16448);

label_7F31374C:
    ctx->pc = 0x7F31374Cu;
    // 7F31374C: bl      0x8003E1C4
    {
            ctx->lr = 0x7F313750u;
            ctx->pc = 0x8003E1C4u;
            return;
    }

label_7F313750:
    ctx->pc = 0x7F313750u;
    ctx->downcount -= 2;
    // 7F313750: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F313754:
    ctx->pc = 0x7F313754u;
    // 7F313754: stb     r0, 16576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16576);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313758:
    ctx->pc = 0x7F313758u;
    ctx->downcount -= 6;
    // 7F313758: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31375C:
    ctx->pc = 0x7F31375Cu;
    // 7F31375C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F313760:
    ctx->pc = 0x7F313760u;
    // 7F313760: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313764:
    ctx->pc = 0x7F313764u;
    // 7F313764: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F313768:
    ctx->pc = 0x7F313768u;
    // 7F313768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F31376C:
    ctx->pc = 0x7F31376Cu;
    ctx->downcount -= 18;
    // 7F31376C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313770:
    ctx->pc = 0x7F313770u;
    // 7F313770: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313774:
    ctx->pc = 0x7F313774u;
    // 7F313774: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313778:
    ctx->pc = 0x7F313778u;
    // 7F313778: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31377C:
    ctx->pc = 0x7F31377Cu;
    // 7F31377C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313780:
    ctx->pc = 0x7F313780u;
    // 7F313780: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313784:
    ctx->pc = 0x7F313784u;
    // 7F313784: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F313788:
    ctx->pc = 0x7F313788u;
    // 7F313788: bl      0x7F3125F4
    {
            ctx->lr = 0x7F31378Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3125F4u;
                return;
            }
            goto label_7F3125F4;
    }

label_7F31378C:
    ctx->pc = 0x7F31378Cu;
    ctx->downcount -= 3;
    // 7F31378C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313790:
    ctx->pc = 0x7F313790u;
    // 7F313790: cmpwi   r31, -6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313794:
    ctx->pc = 0x7F313794u;
    // 7F313794: bc    4, 0, 0x7F3137B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3137B0;
        }
    }

label_7F313798:
    ctx->pc = 0x7F313798u;
    ctx->downcount -= 2;
    // 7F313798: cmpwi   r31, -13
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31379C:
    ctx->pc = 0x7F31379Cu;
    // 7F31379C: bc    12, 2, 0x7F3137E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3137E0;
        }
    }

label_7F3137A0:
    ctx->pc = 0x7F3137A0u;
    ctx->downcount -= 1;
    // 7F3137A0: bc    4, 0, 0x7F3137E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3137E0;
        }
    }

label_7F3137A4:
    ctx->pc = 0x7F3137A4u;
    ctx->downcount -= 2;
    // 7F3137A4: cmpwi   r31, -128
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3137A8:
    ctx->pc = 0x7F3137A8u;
    // 7F3137A8: bc    12, 2, 0x7F3137E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3137E0;
        }
    }

label_7F3137AC:
    ctx->pc = 0x7F3137ACu;
    ctx->downcount -= 1;
    // 7F3137AC: b       0x7F3137E0
    {
            goto label_7F3137E0;
    }

label_7F3137B0:
    ctx->pc = 0x7F3137B0u;
    ctx->downcount -= 2;
    // 7F3137B0: cmpwi   r31, 0
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

label_7F3137B4:
    ctx->pc = 0x7F3137B4u;
    // 7F3137B4: bc    12, 2, 0x7F3137C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3137C8;
        }
    }

label_7F3137B8:
    ctx->pc = 0x7F3137B8u;
    ctx->downcount -= 1;
    // 7F3137B8: bc    4, 0, 0x7F3137E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3137E0;
        }
    }

label_7F3137BC:
    ctx->pc = 0x7F3137BCu;
    ctx->downcount -= 2;
    // 7F3137BC: cmpwi   r31, -4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3137C0:
    ctx->pc = 0x7F3137C0u;
    // 7F3137C0: bc    12, 2, 0x7F3137E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3137E0;
        }
    }

label_7F3137C4:
    ctx->pc = 0x7F3137C4u;
    ctx->downcount -= 1;
    // 7F3137C4: b       0x7F3137E0
    {
            goto label_7F3137E0;
    }

label_7F3137C8:
    ctx->pc = 0x7F3137C8u;
    ctx->downcount -= 5;
    // 7F3137C8: lbz     r3, 16397(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3137CC:
    ctx->pc = 0x7F3137CCu;
    // 7F3137CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3137D0:
    ctx->pc = 0x7F3137D0u;
    // 7F3137D0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3137D4:
    ctx->pc = 0x7F3137D4u;
    // 7F3137D4: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3137D8:
    ctx->pc = 0x7F3137D8u;
    // 7F3137D8: bl      0x8003F668
    {
            ctx->lr = 0x7F3137DCu;
            ctx->pc = 0x8003F668u;
            return;
    }

label_7F3137DC:
    ctx->pc = 0x7F3137DCu;
    ctx->downcount -= 1;
    // 7F3137DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3137E0:
    ctx->pc = 0x7F3137E0u;
    ctx->downcount -= 2;
    // 7F3137E0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3137E4:
    ctx->pc = 0x7F3137E4u;
    // 7F3137E4: bl      0x7F3126D8
    {
            ctx->lr = 0x7F3137E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3126D8u;
                return;
            }
            goto label_7F3126D8;
    }

label_7F3137E8:
    ctx->pc = 0x7F3137E8u;
    ctx->downcount -= 17;
    // 7F3137E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3137EC:
    ctx->pc = 0x7F3137ECu;
    // 7F3137EC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3137F0:
    ctx->pc = 0x7F3137F0u;
    // 7F3137F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3137F4:
    ctx->pc = 0x7F3137F4u;
    // 7F3137F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3137F8:
    ctx->pc = 0x7F3137F8u;
    // 7F3137F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3137FC:
    ctx->pc = 0x7F3137FCu;
    // 7F3137FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313800:
    ctx->pc = 0x7F313800u;
    ctx->downcount -= 7;
    // 7F313800: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313804:
    ctx->pc = 0x7F313804u;
    // 7F313804: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313808:
    ctx->pc = 0x7F313808u;
    // 7F313808: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31380C:
    ctx->pc = 0x7F31380Cu;
    // 7F31380C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313810:
    ctx->pc = 0x7F313810u;
    // 7F313810: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F313814:
    ctx->pc = 0x7F313814u;
    // 7F313814: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313818:
    ctx->pc = 0x7F313818u;
    // 7F313818: bl      0x7F313E38
    {
            ctx->lr = 0x7F31381Cu;
            goto label_7F313E38;
    }

label_7F31381C:
    ctx->pc = 0x7F31381Cu;
    ctx->downcount -= 3;
    // 7F31381C: lbz     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313820:
    ctx->pc = 0x7F313820u;
    // 7F313820: cmplwi  r0, 0x0000
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

label_7F313824:
    ctx->pc = 0x7F313824u;
    // 7F313824: bc    12, 2, 0x7F313838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313838;
        }
    }

label_7F313828:
    ctx->pc = 0x7F313828u;
    ctx->downcount -= 4;
    // 7F313828: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31382C:
    ctx->pc = 0x7F31382Cu;
    // 7F31382C: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313830:
    ctx->pc = 0x7F313830u;
    // 7F313830: stb     r0, 16396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313834:
    ctx->pc = 0x7F313834u;
    // 7F313834: b       0x7F31384C
    {
            goto label_7F31384C;
    }

label_7F313838:
    ctx->pc = 0x7F313838u;
    ctx->downcount -= 5;
    // 7F313838: lbz     r3, 16397(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31383C:
    ctx->pc = 0x7F31383Cu;
    // 7F31383C: addi    r4, r31, 16416
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16416);

label_7F313840:
    ctx->pc = 0x7F313840u;
    // 7F313840: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313844:
    ctx->pc = 0x7F313844u;
    // 7F313844: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F313848:
    ctx->pc = 0x7F313848u;
    // 7F313848: bl      0x8003F668
    {
            ctx->lr = 0x7F31384Cu;
            ctx->pc = 0x8003F668u;
            return;
    }

label_7F31384C:
    ctx->pc = 0x7F31384Cu;
    ctx->downcount -= 6;
    // 7F31384C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313850:
    ctx->pc = 0x7F313850u;
    // 7F313850: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F313854:
    ctx->pc = 0x7F313854u;
    // 7F313854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313858:
    ctx->pc = 0x7F313858u;
    // 7F313858: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31385C:
    ctx->pc = 0x7F31385Cu;
    // 7F31385C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313860:
    ctx->pc = 0x7F313860u;
    ctx->downcount -= 7;
    // 7F313860: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313864:
    ctx->pc = 0x7F313864u;
    // 7F313864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313868:
    ctx->pc = 0x7F313868u;
    // 7F313868: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31386C:
    ctx->pc = 0x7F31386Cu;
    // 7F31386C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313870:
    ctx->pc = 0x7F313870u;
    // 7F313870: lbz     r0, 16396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313874:
    ctx->pc = 0x7F313874u;
    // 7F313874: cmplwi  r0, 0x0000
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

label_7F313878:
    ctx->pc = 0x7F313878u;
    // 7F313878: bc    12, 2, 0x7F31388C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31388C;
        }
    }

label_7F31387C:
    ctx->pc = 0x7F31387Cu;
    ctx->downcount -= 4;
    // 7F31387C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313880:
    ctx->pc = 0x7F313880u;
    // 7F313880: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_7F313884:
    ctx->pc = 0x7F313884u;
    // 7F313884: stb     r0, 16396(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16396);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313888:
    ctx->pc = 0x7F313888u;
    // 7F313888: b       0x7F3138CC
    {
            goto label_7F3138CC;
    }

label_7F31388C:
    ctx->pc = 0x7F31388Cu;
    ctx->downcount -= 11;
    // 7F31388C: lbz     r0, 16394(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16394);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313890:
    ctx->pc = 0x7F313890u;
    // 7F313890: addi    r5, r6, 16416
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(16416);

label_7F313894:
    ctx->pc = 0x7F313894u;
    // 7F313894: lbz     r3, 16397(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16397);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F313898:
    ctx->pc = 0x7F313898u;
    // 7F313898: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31389C:
    ctx->pc = 0x7F31389Cu;
    // 7F31389C: mulli   r4, r0, 108
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F3138A0:
    ctx->pc = 0x7F3138A0u;
    // 7F3138A0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3138A4:
    ctx->pc = 0x7F3138A4u;
    // 7F3138A4: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_7F3138A8:
    ctx->pc = 0x7F3138A8u;
    // 7F3138A8: add   r4, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3138AC:
    ctx->pc = 0x7F3138ACu;
    // 7F3138AC: bl      0x8003F668
    {
            ctx->lr = 0x7F3138B0u;
            ctx->pc = 0x8003F668u;
            return;
    }

label_7F3138B0:
    ctx->pc = 0x7F3138B0u;
    ctx->downcount -= 2;
    // 7F3138B0: cmpwi   r3, 0
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

label_7F3138B4:
    ctx->pc = 0x7F3138B4u;
    // 7F3138B4: bc    12, 2, 0x7F3138C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3138C8;
        }
    }

label_7F3138B8:
    ctx->pc = 0x7F3138B8u;
    ctx->downcount -= 1;
    // 7F3138B8: bc    4, 0, 0x7F3138CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3138CC;
        }
    }

label_7F3138BC:
    ctx->pc = 0x7F3138BCu;
    ctx->downcount -= 2;
    // 7F3138BC: cmpwi   r3, -7
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3138C0:
    ctx->pc = 0x7F3138C0u;
    // 7F3138C0: bc    12, 2, 0x7F3138C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3138C8;
        }
    }

label_7F3138C4:
    ctx->pc = 0x7F3138C4u;
    ctx->downcount -= 1;
    // 7F3138C4: b       0x7F3138CC
    {
            goto label_7F3138CC;
    }

label_7F3138C8:
    ctx->pc = 0x7F3138C8u;
    ctx->downcount -= 1;
    // 7F3138C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3138CC:
    ctx->pc = 0x7F3138CCu;
    ctx->downcount -= 5;
    // 7F3138CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3138D0:
    ctx->pc = 0x7F3138D0u;
    // 7F3138D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3138D4:
    ctx->pc = 0x7F3138D4u;
    // 7F3138D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3138D8:
    ctx->pc = 0x7F3138D8u;
    // 7F3138D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3138DC:
    ctx->pc = 0x7F3138DCu;
    ctx->downcount -= 6;
    // 7F3138DC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3138E0:
    ctx->pc = 0x7F3138E0u;
    // 7F3138E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3138E4:
    ctx->pc = 0x7F3138E4u;
    // 7F3138E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3138E8:
    ctx->pc = 0x7F3138E8u;
    // 7F3138E8: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3138EC:
    ctx->pc = 0x7F3138ECu;
    // 7F3138EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3138F0:
    ctx->pc = 0x7F3138F0u;
    // 7F3138F0: bl      0x80024A8C
    {
            ctx->lr = 0x7F3138F4u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F3138F4:
    ctx->pc = 0x7F3138F4u;
    ctx->downcount -= 2;
    // 7F3138F4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3138F8:
    ctx->pc = 0x7F3138F8u;
    // 7F3138F8: bl      0x80024CAC
    {
            ctx->lr = 0x7F3138FCu;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F3138FC:
    ctx->pc = 0x7F3138FCu;
    ctx->downcount -= 4;
    // 7F3138FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313900:
    ctx->pc = 0x7F313900u;
    // 7F313900: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F313904:
    ctx->pc = 0x7F313904u;
    // 7F313904: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F313908:
    ctx->pc = 0x7F313908u;
    // 7F313908: bl      0x800050B4
    {
            ctx->lr = 0x7F31390Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F31390C:
    ctx->pc = 0x7F31390Cu;
    ctx->downcount -= 1;
    // 7F31390C: bl      0x7F3C74A8
    {
            ctx->lr = 0x7F313910u;
            ctx->pc = 0x7F3C74A8u;
            return;
    }

label_7F313910:
    ctx->pc = 0x7F313910u;
    ctx->downcount -= 29;
    // 7F313910: li      r0, 103
    ctx->gpr[0] = (u32)(s32)(103);

label_7F313914:
    ctx->pc = 0x7F313914u;
    // 7F313914: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313918:
    ctx->pc = 0x7F313918u;
    // 7F313918: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31391C:
    ctx->pc = 0x7F31391Cu;
    // 7F31391C: addi    r5, r4, 13880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F313920:
    ctx->pc = 0x7F313920u;
    // 7F313920: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313924:
    ctx->pc = 0x7F313924u;
    // 7F313924: addi    r0, r4, 24
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(24);

label_7F313928:
    ctx->pc = 0x7F313928u;
    // 7F313928: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31392C:
    ctx->pc = 0x7F31392Cu;
    // 7F31392C: lhax    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313930:
    ctx->pc = 0x7F313930u;
    // 7F313930: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313934:
    ctx->pc = 0x7F313934u;
    // 7F313934: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313938:
    ctx->pc = 0x7F313938u;
    // 7F313938: addi    r0, r4, 5552
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5552);

label_7F31393C:
    ctx->pc = 0x7F31393Cu;
    // 7F31393C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313940:
    ctx->pc = 0x7F313940u;
    // 7F313940: lhax    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313944:
    ctx->pc = 0x7F313944u;
    // 7F313944: stb     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313948:
    ctx->pc = 0x7F313948u;
    // 7F313948: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31394C:
    ctx->pc = 0x7F31394Cu;
    // 7F31394C: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313950:
    ctx->pc = 0x7F313950u;
    // 7F313950: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313954:
    ctx->pc = 0x7F313954u;
    // 7F313954: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F313958:
    ctx->pc = 0x7F313958u;
    // 7F313958: stb     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31395C:
    ctx->pc = 0x7F31395Cu;
    // 7F31395C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313960:
    ctx->pc = 0x7F313960u;
    // 7F313960: stb     r0, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313964:
    ctx->pc = 0x7F313964u;
    // 7F313964: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313968:
    ctx->pc = 0x7F313968u;
    // 7F313968: lwz     r0, 352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31396C:
    ctx->pc = 0x7F31396Cu;
    // 7F31396C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313970:
    ctx->pc = 0x7F313970u;
    // 7F313970: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313974:
    ctx->pc = 0x7F313974u;
    // 7F313974: subf   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313978:
    ctx->pc = 0x7F313978u;
    // 7F313978: lhax    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31397C:
    ctx->pc = 0x7F31397Cu;
    // 7F31397C: cmpwi   r0, 0
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

label_7F313980:
    ctx->pc = 0x7F313980u;
    // 7F313980: bc    4, 1, 0x7F313990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313990;
        }
    }

label_7F313984:
    ctx->pc = 0x7F313984u;
    ctx->downcount -= 3;
    // 7F313984: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F313988:
    ctx->pc = 0x7F313988u;
    // 7F313988: sth     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F31398C:
    ctx->pc = 0x7F31398Cu;
    // 7F31398C: b       0x7F313998
    {
            goto label_7F313998;
    }

label_7F313990:
    ctx->pc = 0x7F313990u;
    ctx->downcount -= 2;
    // 7F313990: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313994:
    ctx->pc = 0x7F313994u;
    // 7F313994: sth     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313998:
    ctx->pc = 0x7F313998u;
    ctx->downcount -= 9;
    // 7F313998: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31399C:
    ctx->pc = 0x7F31399Cu;
    // 7F31399C: sth     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3139A0:
    ctx->pc = 0x7F3139A0u;
    // 7F3139A0: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3139A4:
    ctx->pc = 0x7F3139A4u;
    // 7F3139A4: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3139A8:
    ctx->pc = 0x7F3139A8u;
    // 7F3139A8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3139AC:
    ctx->pc = 0x7F3139ACu;
    // 7F3139AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3139B0:
    ctx->pc = 0x7F3139B0u;
    // 7F3139B0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3139B4:
    ctx->pc = 0x7F3139B4u;
    // 7F3139B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3139B8:
    ctx->pc = 0x7F3139B8u;
    ctx->downcount -= 31;
    // 7F3139B8: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F3139BC:
    ctx->pc = 0x7F3139BCu;
    // 7F3139BC: rlwinm r0, r3, 7, 25, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 7u) & 0x0000007Fu;
    }

label_7F3139C0:
    ctx->pc = 0x7F3139C0u;
    // 7F3139C0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3139C4:
    ctx->pc = 0x7F3139C4u;
    // 7F3139C4: rlwinm r5, r3, 10, 22, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 10u) & 0x000003FFu;
    }

label_7F3139C8:
    ctx->pc = 0x7F3139C8u;
    // 7F3139C8: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F3139CC:
    ctx->pc = 0x7F3139CCu;
    // 7F3139CC: rlwinm r4, r3, 11, 21, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 11u) & 0x000007FFu;
    }

label_7F3139D0:
    ctx->pc = 0x7F3139D0u;
    // 7F3139D0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3139D4:
    ctx->pc = 0x7F3139D4u;
    // 7F3139D4: rlwinm r5, r3, 17, 15, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 17u) & 0x0001FFFFu;
    }

label_7F3139D8:
    ctx->pc = 0x7F3139D8u;
    // 7F3139D8: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F3139DC:
    ctx->pc = 0x7F3139DCu;
    // 7F3139DC: rlwinm r4, r3, 21, 11, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 21u) & 0x001FFFFFu;
    }

label_7F3139E0:
    ctx->pc = 0x7F3139E0u;
    // 7F3139E0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3139E4:
    ctx->pc = 0x7F3139E4u;
    // 7F3139E4: rlwinm r5, r3, 22, 10, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 22u) & 0x003FFFFFu;
    }

label_7F3139E8:
    ctx->pc = 0x7F3139E8u;
    // 7F3139E8: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F3139EC:
    ctx->pc = 0x7F3139ECu;
    // 7F3139EC: rlwinm r4, r3, 23, 9, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 23u) & 0x007FFFFFu;
    }

label_7F3139F0:
    ctx->pc = 0x7F3139F0u;
    // 7F3139F0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3139F4:
    ctx->pc = 0x7F3139F4u;
    // 7F3139F4: rlwinm r5, r3, 25, 7, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 25u) & 0x01FFFFFFu;
    }

label_7F3139F8:
    ctx->pc = 0x7F3139F8u;
    // 7F3139F8: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F3139FC:
    ctx->pc = 0x7F3139FCu;
    // 7F3139FC: rlwinm r4, r3, 26, 6, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 26u) & 0x03FFFFFFu;
    }

label_7F313A00:
    ctx->pc = 0x7F313A00u;
    // 7F313A00: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F313A04:
    ctx->pc = 0x7F313A04u;
    // 7F313A04: rlwinm r5, r3, 28, 4, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 28u) & 0x0FFFFFFFu;
    }

label_7F313A08:
    ctx->pc = 0x7F313A08u;
    // 7F313A08: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F313A0C:
    ctx->pc = 0x7F313A0Cu;
    // 7F313A0C: rlwinm r4, r3, 29, 3, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0x1FFFFFFFu;
    }

label_7F313A10:
    ctx->pc = 0x7F313A10u;
    // 7F313A10: rlwinm r5, r3, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

label_7F313A14:
    ctx->pc = 0x7F313A14u;
    // 7F313A14: rlwinm r6, r3, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_7F313A18:
    ctx->pc = 0x7F313A18u;
    // 7F313A18: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F313A1C:
    ctx->pc = 0x7F313A1Cu;
    // 7F313A1C: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F313A20:
    ctx->pc = 0x7F313A20u;
    // 7F313A20: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F313A24:
    ctx->pc = 0x7F313A24u;
    // 7F313A24: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F313A28:
    ctx->pc = 0x7F313A28u;
    // 7F313A28: rlwimi r4, r0, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 0u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_7F313A2C:
    ctx->pc = 0x7F313A2Cu;
    // 7F313A2C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313A30:
    ctx->pc = 0x7F313A30u;
    // 7F313A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313A34:
    ctx->pc = 0x7F313A34u;
    ctx->downcount -= 19;
    // 7F313A34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313A38:
    ctx->pc = 0x7F313A38u;
    // 7F313A38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313A3C:
    ctx->pc = 0x7F313A3Cu;
    // 7F313A3C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313A40:
    ctx->pc = 0x7F313A40u;
    // 7F313A40: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313A44:
    ctx->pc = 0x7F313A44u;
    // 7F313A44: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F313A48:
    ctx->pc = 0x7F313A48u;
    // 7F313A48: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F313A4C:
    ctx->pc = 0x7F313A4Cu;
    // 7F313A4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313A50:
    ctx->pc = 0x7F313A50u;
    // 7F313A50: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313A54:
    ctx->pc = 0x7F313A54u;
    // 7F313A54: b       0x7F313A88
    {
            goto label_7F313A88;
    }

label_7F313A58:
    ctx->pc = 0x7F313A58u;
    ctx->downcount -= 2;
    // 7F313A58: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313A5C:
    // 7F313A5C: bl      0x7F3139B8
    {
            ctx->lr = 0x7F313A60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3139B8u;
                return;
            }
            goto label_7F3139B8;
    }

label_7F313A60:
    ctx->pc = 0x7F313A60u;
    ctx->downcount -= 10;
    // 7F313A60: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313A64:
    // 7F313A64: rlwinm r3, r29, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_7F313A68:
    // 7F313A68: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F313A6C:
    ctx->pc = 0x7F313A6Cu;
    // 7F313A6C: lbz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F313A70:
    ctx->pc = 0x7F313A70u;
    // 7F313A70: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313A74:
    // 7F313A74: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F313A78:
    // 7F313A78: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F313A7C:
    ctx->pc = 0x7F313A7Cu;
    // 7F313A7C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313A80:
    ctx->pc = 0x7F313A80u;
    // 7F313A80: lbz     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read8(ctx, ea);
    }

label_7F313A84:
    // 7F313A84: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F313A88:
    ctx->downcount -= 2;
    // 7F313A88: cmpwi   r30, 0
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

label_7F313A8C:
    // 7F313A8C: bc    12, 1, 0x7F313A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313A58u;
                return;
            }
            goto label_7F313A58;
        }
    }

label_7F313A90:
    ctx->pc = 0x7F313A90u;
    ctx->downcount -= 16;
    // 7F313A90: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F313A94:
    ctx->pc = 0x7F313A94u;
    // 7F313A94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313A98:
    ctx->pc = 0x7F313A98u;
    // 7F313A98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313A9C:
    ctx->pc = 0x7F313A9Cu;
    // 7F313A9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F313AA0:
    ctx->pc = 0x7F313AA0u;
    // 7F313AA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313AA4:
    ctx->pc = 0x7F313AA4u;
    ctx->downcount -= 19;
    // 7F313AA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313AA8:
    ctx->pc = 0x7F313AA8u;
    // 7F313AA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313AAC:
    ctx->pc = 0x7F313AACu;
    // 7F313AAC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313AB0:
    ctx->pc = 0x7F313AB0u;
    // 7F313AB0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313AB4:
    ctx->pc = 0x7F313AB4u;
    // 7F313AB4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F313AB8:
    ctx->pc = 0x7F313AB8u;
    // 7F313AB8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F313ABC:
    ctx->pc = 0x7F313ABCu;
    // 7F313ABC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313AC0:
    ctx->pc = 0x7F313AC0u;
    // 7F313AC0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313AC4:
    ctx->pc = 0x7F313AC4u;
    // 7F313AC4: b       0x7F313AF8
    {
            goto label_7F313AF8;
    }

label_7F313AC8:
    ctx->pc = 0x7F313AC8u;
    ctx->downcount -= 2;
    // 7F313AC8: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313ACC:
    // 7F313ACC: bl      0x7F3139B8
    {
            ctx->lr = 0x7F313AD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3139B8u;
                return;
            }
            goto label_7F3139B8;
    }

label_7F313AD0:
    ctx->pc = 0x7F313AD0u;
    ctx->downcount -= 10;
    // 7F313AD0: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313AD4:
    // 7F313AD4: rlwinm r3, r29, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_7F313AD8:
    // 7F313AD8: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F313ADC:
    ctx->pc = 0x7F313ADCu;
    // 7F313ADC: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313AE0:
    ctx->pc = 0x7F313AE0u;
    // 7F313AE0: lbz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F313AE4:
    // 7F313AE4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F313AE8:
    // 7F313AE8: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313AEC:
    // 7F313AEC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313AF0:
    ctx->pc = 0x7F313AF0u;
    // 7F313AF0: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313AF4:
    // 7F313AF4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F313AF8:
    ctx->downcount -= 2;
    // 7F313AF8: cmpwi   r30, 0
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

label_7F313AFC:
    // 7F313AFC: bc    12, 1, 0x7F313AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313AC8u;
                return;
            }
            goto label_7F313AC8;
        }
    }

label_7F313B00:
    ctx->pc = 0x7F313B00u;
    ctx->downcount -= 16;
    // 7F313B00: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F313B04:
    ctx->pc = 0x7F313B04u;
    // 7F313B04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313B08:
    ctx->pc = 0x7F313B08u;
    // 7F313B08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313B0C:
    ctx->pc = 0x7F313B0Cu;
    // 7F313B0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F313B10:
    ctx->pc = 0x7F313B10u;
    // 7F313B10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313B14:
    ctx->pc = 0x7F313B14u;
    ctx->downcount -= 18;
    // 7F313B14: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313B18:
    ctx->pc = 0x7F313B18u;
    // 7F313B18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313B1C:
    ctx->pc = 0x7F313B1Cu;
    // 7F313B1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F313B20:
    ctx->pc = 0x7F313B20u;
    // 7F313B20: li      r5, 14200
    ctx->gpr[5] = (u32)(s32)(14200);

label_7F313B24:
    ctx->pc = 0x7F313B24u;
    // 7F313B24: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313B28:
    ctx->pc = 0x7F313B28u;
    // 7F313B28: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313B2C:
    ctx->pc = 0x7F313B2Cu;
    // 7F313B2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313B30:
    ctx->pc = 0x7F313B30u;
    // 7F313B30: bl      0x800050B4
    {
            ctx->lr = 0x7F313B34u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F313B34:
    ctx->pc = 0x7F313B34u;
    ctx->downcount -= 1;
    // 7F313B34: bl      0x7F3C74A8
    {
            ctx->lr = 0x7F313B38u;
            ctx->pc = 0x7F3C74A8u;
            return;
    }

label_7F313B38:
    ctx->pc = 0x7F313B38u;
    ctx->downcount -= 2;
    // 7F313B38: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313B3C:
    ctx->pc = 0x7F313B3Cu;
    // 7F313B3C: bl      0x7F3C74B8
    {
            ctx->lr = 0x7F313B40u;
            ctx->pc = 0x7F3C74B8u;
            return;
    }

label_7F313B40:
    ctx->pc = 0x7F313B40u;
    ctx->downcount -= 6;
    // 7F313B40: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313B44:
    ctx->pc = 0x7F313B44u;
    // 7F313B44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313B48:
    ctx->pc = 0x7F313B48u;
    // 7F313B48: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F313B4C:
    ctx->pc = 0x7F313B4Cu;
    // 7F313B4C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313B50:
    ctx->pc = 0x7F313B50u;
    // 7F313B50: li      r5, 7012
    ctx->gpr[5] = (u32)(s32)(7012);

label_7F313B54:
    ctx->pc = 0x7F313B54u;
    // 7F313B54: bl      0x8000519C
    {
            ctx->lr = 0x7F313B58u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313B58:
    ctx->pc = 0x7F313B58u;
    ctx->downcount -= 3;
    // 7F313B58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313B5C:
    ctx->pc = 0x7F313B5Cu;
    // 7F313B5C: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313B60:
    ctx->pc = 0x7F313B60u;
    // 7F313B60: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313B64u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313B64:
    ctx->pc = 0x7F313B64u;
    ctx->downcount -= 4;
    // 7F313B64: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313B68:
    ctx->pc = 0x7F313B68u;
    // 7F313B68: addi    r3, r31, 7029
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313B6C:
    ctx->pc = 0x7F313B6Cu;
    // 7F313B6C: li      r5, 7168
    ctx->gpr[5] = (u32)(s32)(7168);

label_7F313B70:
    ctx->pc = 0x7F313B70u;
    // 7F313B70: bl      0x8000519C
    {
            ctx->lr = 0x7F313B74u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313B74:
    ctx->pc = 0x7F313B74u;
    ctx->downcount -= 3;
    // 7F313B74: addi    r3, r31, 7029
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313B78:
    ctx->pc = 0x7F313B78u;
    // 7F313B78: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313B7C:
    ctx->pc = 0x7F313B7Cu;
    // 7F313B7C: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313B80u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313B80:
    ctx->pc = 0x7F313B80u;
    ctx->downcount -= 21;
    // 7F313B80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313B84:
    ctx->pc = 0x7F313B84u;
    // 7F313B84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313B88:
    ctx->pc = 0x7F313B88u;
    // 7F313B88: addi    r6, r4, 13880
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F313B8C:
    ctx->pc = 0x7F313B8Cu;
    // 7F313B8C: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F313B90:
    ctx->pc = 0x7F313B90u;
    // 7F313B90: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313B94:
    ctx->pc = 0x7F313B94u;
    // 7F313B94: addi    r8, r7, 352
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(352);

label_7F313B98:
    ctx->pc = 0x7F313B98u;
    // 7F313B98: lwz     r5, 352(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(352);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F313B9C:
    ctx->pc = 0x7F313B9Cu;
    // 7F313B9C: subf   r0, r7, r8
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313BA0:
    ctx->pc = 0x7F313BA0u;
    // 7F313BA0: stwx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F313BA4:
    ctx->pc = 0x7F313BA4u;
    // 7F313BA4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F313BA8:
    ctx->pc = 0x7F313BA8u;
    // 7F313BA8: addi    r0, r5, 5554
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(5554);

label_7F313BAC:
    ctx->pc = 0x7F313BACu;
    // 7F313BAC: subf   r5, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F313BB0:
    ctx->pc = 0x7F313BB0u;
    // 7F313BB0: lhax    r0, r31, r5
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[5];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313BB4:
    ctx->pc = 0x7F313BB4u;
    // 7F313BB4: rlwinm r0, r0, 0, 24, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFCFFu;
    }

label_7F313BB8:
    ctx->pc = 0x7F313BB8u;
    // 7F313BB8: sthx    r0, r31, r5
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313BBC:
    ctx->pc = 0x7F313BBCu;
    // 7F313BBC: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F313BC0:
    ctx->pc = 0x7F313BC0u;
    // 7F313BC0: addi    r7, r6, 350
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(350);

label_7F313BC4:
    ctx->pc = 0x7F313BC4u;
    // 7F313BC4: lha     r5, 350(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(350);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313BC8:
    ctx->pc = 0x7F313BC8u;
    // 7F313BC8: subf   r0, r6, r7
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313BCC:
    ctx->pc = 0x7F313BCCu;
    // 7F313BCC: sthx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F313BD0:
    ctx->pc = 0x7F313BD0u;
    // 7F313BD0: bl      0x7F314128
    {
            ctx->lr = 0x7F313BD4u;
            ctx->pc = 0x7F314128u;
            return;
    }

label_7F313BD4:
    ctx->pc = 0x7F313BD4u;
    ctx->downcount -= 4;
    // 7F313BD4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313BD8:
    ctx->pc = 0x7F313BD8u;
    // 7F313BD8: addi    r3, r31, 7029
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313BDC:
    ctx->pc = 0x7F313BDCu;
    // 7F313BDC: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313BE0:
    ctx->pc = 0x7F313BE0u;
    // 7F313BE0: bl      0x7F314128
    {
            ctx->lr = 0x7F313BE4u;
            ctx->pc = 0x7F314128u;
            return;
    }

label_7F313BE4:
    ctx->pc = 0x7F313BE4u;
    ctx->downcount -= 12;
    // 7F313BE4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313BE8:
    ctx->pc = 0x7F313BE8u;
    // 7F313BE8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F313BEC:
    ctx->pc = 0x7F313BECu;
    // 7F313BEC: li      r6, -86
    ctx->gpr[6] = (u32)(s32)(-86);

label_7F313BF0:
    ctx->pc = 0x7F313BF0u;
    // 7F313BF0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313BF4:
    ctx->pc = 0x7F313BF4u;
    // 7F313BF4: xor   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F313BF8:
    ctx->pc = 0x7F313BF8u;
    // 7F313BF8: li      r0, 85
    ctx->gpr[0] = (u32)(s32)(85);

label_7F313BFC:
    ctx->pc = 0x7F313BFCu;
    // 7F313BFC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F313C00:
    ctx->pc = 0x7F313C00u;
    // 7F313C00: addi    r4, r4, 27236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27236);

label_7F313C04:
    ctx->pc = 0x7F313C04u;
    // 7F313C04: addi    r3, r31, 7016
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7016);

label_7F313C08:
    ctx->pc = 0x7F313C08u;
    // 7F313C08: stb     r6, 7012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7012);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F313C0C:
    ctx->pc = 0x7F313C0Cu;
    // 7F313C0C: stb     r0, 7020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7020);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F313C10:
    ctx->pc = 0x7F313C10u;
    // 7F313C10: bl      0x8000519C
    {
            ctx->lr = 0x7F313C14u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313C14:
    ctx->pc = 0x7F313C14u;
    ctx->downcount -= 6;
    // 7F313C14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F313C18:
    ctx->pc = 0x7F313C18u;
    // 7F313C18: addi    r3, r31, 7025
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7025);

label_7F313C1C:
    ctx->pc = 0x7F313C1Cu;
    // 7F313C1C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313C20:
    ctx->pc = 0x7F313C20u;
    // 7F313C20: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F313C24:
    ctx->pc = 0x7F313C24u;
    // 7F313C24: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313C28:
    ctx->pc = 0x7F313C28u;
    // 7F313C28: bl      0x8000519C
    {
            ctx->lr = 0x7F313C2Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313C2C:
    ctx->pc = 0x7F313C2Cu;
    ctx->downcount -= 4;
    // 7F313C2C: addi    r3, r31, 7021
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7021);

label_7F313C30:
    ctx->pc = 0x7F313C30u;
    // 7F313C30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313C34:
    ctx->pc = 0x7F313C34u;
    // 7F313C34: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313C38:
    ctx->pc = 0x7F313C38u;
    // 7F313C38: bl      0x8000519C
    {
            ctx->lr = 0x7F313C3Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313C3C:
    ctx->pc = 0x7F313C3Cu;
    ctx->downcount -= 4;
    // 7F313C3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313C40:
    ctx->pc = 0x7F313C40u;
    // 7F313C40: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313C44:
    ctx->pc = 0x7F313C44u;
    // 7F313C44: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313C48:
    ctx->pc = 0x7F313C48u;
    // 7F313C48: bl      0x7F313A34
    {
            ctx->lr = 0x7F313C4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313A34u;
                return;
            }
            goto label_7F313A34;
    }

label_7F313C4C:
    ctx->pc = 0x7F313C4Cu;
    ctx->downcount -= 4;
    // 7F313C4C: addi    r3, r31, 7029
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313C50:
    ctx->pc = 0x7F313C50u;
    // 7F313C50: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313C54:
    ctx->pc = 0x7F313C54u;
    // 7F313C54: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313C58:
    ctx->pc = 0x7F313C58u;
    // 7F313C58: bl      0x7F313A34
    {
            ctx->lr = 0x7F313C5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313A34u;
                return;
            }
            goto label_7F313A34;
    }

label_7F313C5C:
    ctx->pc = 0x7F313C5Cu;
    ctx->downcount -= 16;
    // 7F313C5C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F313C60:
    ctx->pc = 0x7F313C60u;
    // 7F313C60: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313C64:
    ctx->pc = 0x7F313C64u;
    // 7F313C64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313C68:
    ctx->pc = 0x7F313C68u;
    // 7F313C68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F313C6C:
    ctx->pc = 0x7F313C6Cu;
    // 7F313C6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313C70:
    ctx->pc = 0x7F313C70u;
    ctx->downcount -= 19;
    // 7F313C70: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313C74:
    ctx->pc = 0x7F313C74u;
    // 7F313C74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313C78:
    ctx->pc = 0x7F313C78u;
    // 7F313C78: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313C7C:
    ctx->pc = 0x7F313C7Cu;
    // 7F313C7C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313C80:
    ctx->pc = 0x7F313C80u;
    // 7F313C80: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313C84:
    ctx->pc = 0x7F313C84u;
    // 7F313C84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313C88:
    ctx->pc = 0x7F313C88u;
    // 7F313C88: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F313C8C:
    ctx->pc = 0x7F313C8Cu;
    // 7F313C8C: addi    r4, r31, 7025
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7025);

label_7F313C90:
    ctx->pc = 0x7F313C90u;
    // 7F313C90: bl      0x8000519C
    {
            ctx->lr = 0x7F313C94u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313C94:
    ctx->pc = 0x7F313C94u;
    ctx->downcount -= 4;
    // 7F313C94: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F313C98:
    ctx->pc = 0x7F313C98u;
    // 7F313C98: addi    r4, r31, 7021
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7021);

label_7F313C9C:
    ctx->pc = 0x7F313C9Cu;
    // 7F313C9C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313CA0:
    ctx->pc = 0x7F313CA0u;
    // 7F313CA0: bl      0x8000519C
    {
            ctx->lr = 0x7F313CA4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313CA4:
    ctx->pc = 0x7F313CA4u;
    ctx->downcount -= 4;
    // 7F313CA4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313CA8:
    ctx->pc = 0x7F313CA8u;
    // 7F313CA8: addi    r4, r31, 7016
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7016);

label_7F313CAC:
    ctx->pc = 0x7F313CACu;
    // 7F313CAC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F313CB0:
    ctx->pc = 0x7F313CB0u;
    // 7F313CB0: bl      0x8000519C
    {
            ctx->lr = 0x7F313CB4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313CB4:
    ctx->pc = 0x7F313CB4u;
    ctx->downcount -= 5;
    // 7F313CB4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F313CB8:
    ctx->pc = 0x7F313CB8u;
    // 7F313CB8: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313CBC:
    ctx->pc = 0x7F313CBCu;
    // 7F313CBC: lwz     r0, 27236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313CC0:
    ctx->pc = 0x7F313CC0u;
    // 7F313CC0: cmpw    r4, r0
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

label_7F313CC4:
    ctx->pc = 0x7F313CC4u;
    // 7F313CC4: bc    12, 2, 0x7F313CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313CD0;
        }
    }

label_7F313CC8:
    ctx->pc = 0x7F313CC8u;
    ctx->downcount -= 2;
    // 7F313CC8: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F313CCC:
    ctx->pc = 0x7F313CCCu;
    // 7F313CCC: b       0x7F313DBC
    {
            goto label_7F313DBC;
    }

label_7F313CD0:
    ctx->pc = 0x7F313CD0u;
    ctx->downcount -= 4;
    // 7F313CD0: lbz     r0, 7012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7012);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313CD4:
    ctx->pc = 0x7F313CD4u;
    // 7F313CD4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F313CD8:
    ctx->pc = 0x7F313CD8u;
    // 7F313CD8: cmpwi   r0, -86
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-86);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313CDC:
    ctx->pc = 0x7F313CDCu;
    // 7F313CDC: bc    4, 2, 0x7F313CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313CEC;
        }
    }

label_7F313CE0:
    ctx->pc = 0x7F313CE0u;
    ctx->downcount -= 3;
    // 7F313CE0: lbz     r0, 7020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7020);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313CE4:
    ctx->pc = 0x7F313CE4u;
    // 7F313CE4: cmpwi   r0, 85
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(85);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313CE8:
    ctx->pc = 0x7F313CE8u;
    // 7F313CE8: bc    12, 2, 0x7F313CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313CF4;
        }
    }

label_7F313CEC:
    ctx->pc = 0x7F313CECu;
    ctx->downcount -= 2;
    // 7F313CEC: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F313CF0:
    ctx->pc = 0x7F313CF0u;
    // 7F313CF0: b       0x7F313DBC
    {
            goto label_7F313DBC;
    }

label_7F313CF4:
    ctx->pc = 0x7F313CF4u;
    ctx->downcount -= 4;
    // 7F313CF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313CF8:
    ctx->pc = 0x7F313CF8u;
    // 7F313CF8: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F313CFC:
    ctx->pc = 0x7F313CFCu;
    // 7F313CFC: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313D00:
    ctx->pc = 0x7F313D00u;
    // 7F313D00: bl      0x7F313AA4
    {
            ctx->lr = 0x7F313D04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313AA4u;
                return;
            }
            goto label_7F313AA4;
    }

label_7F313D04:
    ctx->pc = 0x7F313D04u;
    ctx->downcount -= 4;
    // 7F313D04: addi    r3, r31, 7029
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313D08:
    ctx->pc = 0x7F313D08u;
    // 7F313D08: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F313D0C:
    ctx->pc = 0x7F313D0Cu;
    // 7F313D0C: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313D10:
    ctx->pc = 0x7F313D10u;
    // 7F313D10: bl      0x7F313AA4
    {
            ctx->lr = 0x7F313D14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F313AA4u;
                return;
            }
            goto label_7F313AA4;
    }

label_7F313D14:
    ctx->pc = 0x7F313D14u;
    ctx->downcount -= 1;
    // 7F313D14: bl      0x7F3C74A8
    {
            ctx->lr = 0x7F313D18u;
            ctx->pc = 0x7F3C74A8u;
            return;
    }

label_7F313D18:
    ctx->pc = 0x7F313D18u;
    ctx->downcount -= 2;
    // 7F313D18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313D1C:
    ctx->pc = 0x7F313D1Cu;
    // 7F313D1C: bl      0x7F3C74B8
    {
            ctx->lr = 0x7F313D20u;
            ctx->pc = 0x7F3C74B8u;
            return;
    }

label_7F313D20:
    ctx->pc = 0x7F313D20u;
    ctx->downcount -= 6;
    // 7F313D20: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313D24:
    ctx->pc = 0x7F313D24u;
    // 7F313D24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313D28:
    ctx->pc = 0x7F313D28u;
    // 7F313D28: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F313D2C:
    ctx->pc = 0x7F313D2Cu;
    // 7F313D2C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F313D30:
    ctx->pc = 0x7F313D30u;
    // 7F313D30: li      r5, 7012
    ctx->gpr[5] = (u32)(s32)(7012);

label_7F313D34:
    ctx->pc = 0x7F313D34u;
    // 7F313D34: bl      0x8000519C
    {
            ctx->lr = 0x7F313D38u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313D38:
    ctx->pc = 0x7F313D38u;
    ctx->downcount -= 3;
    // 7F313D38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313D3C:
    ctx->pc = 0x7F313D3Cu;
    // 7F313D3C: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313D40:
    ctx->pc = 0x7F313D40u;
    // 7F313D40: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313D44u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313D44:
    ctx->pc = 0x7F313D44u;
    ctx->downcount -= 4;
    // 7F313D44: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313D48:
    ctx->pc = 0x7F313D48u;
    // 7F313D48: addi    r4, r31, 7029
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7029);

label_7F313D4C:
    ctx->pc = 0x7F313D4Cu;
    // 7F313D4C: li      r5, 7168
    ctx->gpr[5] = (u32)(s32)(7168);

label_7F313D50:
    ctx->pc = 0x7F313D50u;
    // 7F313D50: bl      0x8000519C
    {
            ctx->lr = 0x7F313D54u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F313D54:
    ctx->pc = 0x7F313D54u;
    ctx->downcount -= 3;
    // 7F313D54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313D58:
    ctx->pc = 0x7F313D58u;
    // 7F313D58: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313D5C:
    ctx->pc = 0x7F313D5Cu;
    // 7F313D5C: bl      0x8001DA7C
    {
            ctx->lr = 0x7F313D60u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F313D60:
    ctx->pc = 0x7F313D60u;
    ctx->downcount -= 3;
    // 7F313D60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313D64:
    ctx->pc = 0x7F313D64u;
    // 7F313D64: li      r4, 7012
    ctx->gpr[4] = (u32)(s32)(7012);

label_7F313D68:
    ctx->pc = 0x7F313D68u;
    // 7F313D68: bl      0x7F314128
    {
            ctx->lr = 0x7F313D6Cu;
            ctx->pc = 0x7F314128u;
            return;
    }

label_7F313D6C:
    ctx->pc = 0x7F313D6Cu;
    ctx->downcount -= 4;
    // 7F313D6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313D70:
    ctx->pc = 0x7F313D70u;
    // 7F313D70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F313D74:
    ctx->pc = 0x7F313D74u;
    // 7F313D74: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F313D78:
    ctx->pc = 0x7F313D78u;
    // 7F313D78: bl      0x7F314128
    {
            ctx->lr = 0x7F313D7Cu;
            ctx->pc = 0x7F314128u;
            return;
    }

label_7F313D7C:
    ctx->pc = 0x7F313D7Cu;
    ctx->downcount -= 4;
    // 7F313D7C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313D80:
    ctx->pc = 0x7F313D80u;
    // 7F313D80: xor   r3, r31, r3
    {
        ctx->gpr[3] = ctx->gpr[31] ^ ctx->gpr[3];
    }

label_7F313D84:
    ctx->pc = 0x7F313D84u;
    // 7F313D84: cmplw   r3, r0
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

label_7F313D88:
    ctx->pc = 0x7F313D88u;
    // 7F313D88: bc    12, 2, 0x7F313D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F313D94;
        }
    }

label_7F313D8C:
    ctx->pc = 0x7F313D8Cu;
    ctx->downcount -= 2;
    // 7F313D8C: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F313D90:
    ctx->pc = 0x7F313D90u;
    // 7F313D90: b       0x7F313DBC
    {
            goto label_7F313DBC;
    }

label_7F313D94:
    ctx->pc = 0x7F313D94u;
    ctx->downcount -= 10;
    // 7F313D94: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313D98:
    ctx->pc = 0x7F313D98u;
    // 7F313D98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F313D9C:
    ctx->pc = 0x7F313D9Cu;
    // 7F313D9C: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F313DA0:
    ctx->pc = 0x7F313DA0u;
    // 7F313DA0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313DA4:
    ctx->pc = 0x7F313DA4u;
    // 7F313DA4: addi    r5, r4, 5554
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(5554);

label_7F313DA8:
    ctx->pc = 0x7F313DA8u;
    // 7F313DA8: subf   r0, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313DAC:
    ctx->pc = 0x7F313DACu;
    // 7F313DAC: lha     r4, 5554(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5554);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313DB0:
    ctx->pc = 0x7F313DB0u;
    // 7F313DB0: lhax    r0, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313DB4:
    ctx->pc = 0x7F313DB4u;
    // 7F313DB4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F313DB8:
    ctx->pc = 0x7F313DB8u;
    // 7F313DB8: sth     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313DBC:
    ctx->pc = 0x7F313DBCu;
    ctx->downcount -= 16;
    // 7F313DBC: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F313DC0:
    ctx->pc = 0x7F313DC0u;
    // 7F313DC0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313DC4:
    ctx->pc = 0x7F313DC4u;
    // 7F313DC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313DC8:
    ctx->pc = 0x7F313DC8u;
    // 7F313DC8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F313DCC:
    ctx->pc = 0x7F313DCCu;
    // 7F313DCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313DD0:
    ctx->pc = 0x7F313DD0u;
    ctx->downcount -= 8;
    // 7F313DD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313DD4:
    ctx->pc = 0x7F313DD4u;
    // 7F313DD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313DD8:
    ctx->pc = 0x7F313DD8u;
    // 7F313DD8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F313DDC:
    ctx->pc = 0x7F313DDCu;
    // 7F313DDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313DE0:
    ctx->pc = 0x7F313DE0u;
    // 7F313DE0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F313DE4:
    ctx->pc = 0x7F313DE4u;
    // 7F313DE4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313DE8:
    ctx->pc = 0x7F313DE8u;
    // 7F313DE8: addi    r3, r3, 7004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7004);

label_7F313DEC:
    ctx->pc = 0x7F313DECu;
    // 7F313DEC: bl      0x7F3C6D94
    {
            ctx->lr = 0x7F313DF0u;
            ctx->pc = 0x7F3C6D94u;
            return;
    }

label_7F313DF0:
    ctx->pc = 0x7F313DF0u;
    ctx->downcount -= 10;
    // 7F313DF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313DF4:
    ctx->pc = 0x7F313DF4u;
    // 7F313DF4: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313DF8:
    ctx->pc = 0x7F313DF8u;
    // 7F313DF8: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F313DFC:
    ctx->pc = 0x7F313DFCu;
    // 7F313DFC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313E00:
    ctx->pc = 0x7F313E00u;
    // 7F313E00: sth     r0, 7004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7004);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F313E04:
    ctx->pc = 0x7F313E04u;
    // 7F313E04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313E08:
    ctx->pc = 0x7F313E08u;
    // 7F313E08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313E0C:
    ctx->pc = 0x7F313E0Cu;
    // 7F313E0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F313E10:
    ctx->pc = 0x7F313E10u;
    // 7F313E10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313E14:
    ctx->pc = 0x7F313E14u;
    ctx->downcount -= 5;
    // 7F313E14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313E18:
    ctx->pc = 0x7F313E18u;
    // 7F313E18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313E1C:
    ctx->pc = 0x7F313E1Cu;
    // 7F313E1C: addi    r4, r3, 16416
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16416);

label_7F313E20:
    ctx->pc = 0x7F313E20u;
    // 7F313E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313E24:
    ctx->pc = 0x7F313E24u;
    // 7F313E24: bl      0x7F313E38
    {
            ctx->lr = 0x7F313E28u;
            goto label_7F313E38;
    }

label_7F313E28:
    ctx->pc = 0x7F313E28u;
    ctx->downcount -= 5;
    // 7F313E28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313E2C:
    ctx->pc = 0x7F313E2Cu;
    // 7F313E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313E30:
    ctx->pc = 0x7F313E30u;
    // 7F313E30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F313E34:
    ctx->pc = 0x7F313E34u;
    // 7F313E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313E38:
    ctx->pc = 0x7F313E38u;
    ctx->downcount -= 17;
    // 7F313E38: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313E3C:
    ctx->pc = 0x7F313E3Cu;
    // 7F313E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313E40:
    ctx->pc = 0x7F313E40u;
    // 7F313E40: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313E44:
    ctx->pc = 0x7F313E44u;
    // 7F313E44: stmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313E48:
    ctx->pc = 0x7F313E48u;
    // 7F313E48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313E4C:
    ctx->pc = 0x7F313E4Cu;
    // 7F313E4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313E50:
    ctx->pc = 0x7F313E50u;
    // 7F313E50: bl      0x80024A8C
    {
            ctx->lr = 0x7F313E54u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F313E54:
    ctx->pc = 0x7F313E54u;
    ctx->downcount -= 2;
    // 7F313E54: addi    r5, r1, 44
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(44);

label_7F313E58:
    ctx->pc = 0x7F313E58u;
    // 7F313E58: bl      0x80024CAC
    {
            ctx->lr = 0x7F313E5Cu;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F313E5C:
    ctx->pc = 0x7F313E5Cu;
    ctx->downcount -= 3;
    // 7F313E5C: lbz     r3, 16609(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16609);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F313E60:
    ctx->pc = 0x7F313E60u;
    // 7F313E60: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F313E64:
    ctx->pc = 0x7F313E64u;
    // 7F313E64: bl      0x7F314080
    {
            ctx->lr = 0x7F313E68u;
            goto label_7F314080;
    }

label_7F313E68:
    ctx->pc = 0x7F313E68u;
    ctx->downcount -= 48;
    // 7F313E68: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313E6C:
    ctx->pc = 0x7F313E6Cu;
    // 7F313E6C: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F313E70:
    ctx->pc = 0x7F313E70u;
    // 7F313E70: lwz     r11, 13880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13880);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F313E74:
    ctx->pc = 0x7F313E74u;
    // 7F313E74: addi    r10, r3, 32319
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(32319);

label_7F313E78:
    ctx->pc = 0x7F313E78u;
    // 7F313E78: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F313E7C:
    ctx->pc = 0x7F313E7Cu;
    // 7F313E7C: lwz     r3, 352(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313E80:
    ctx->pc = 0x7F313E80u;
    // 7F313E80: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F313E84:
    ctx->pc = 0x7F313E84u;
    // 7F313E84: cmpw    r0, r10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313E88:
    ctx->pc = 0x7F313E88u;
    // 7F313E88: bc    4, 0, 0x7F313E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313E90;
        }
    }

label_7F313E8C:
    ctx->pc = 0x7F313E8Cu;
    ctx->downcount -= 1;
    // 7F313E8C: or   r10, r0, r0
    {
        ctx->gpr[10] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F313E90:
    ctx->pc = 0x7F313E90u;
    ctx->downcount -= 158;
    // 7F313E90: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F313E94:
    ctx->pc = 0x7F313E94u;
    // 7F313E94: li      r6, 3600
    ctx->gpr[6] = (u32)(s32)(3600);

label_7F313E98:
    ctx->pc = 0x7F313E98u;
    // 7F313E98: divw   r7, r10, r8
    {
        s32 dividend = (s32)ctx->gpr[10];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F313E9C:
    ctx->pc = 0x7F313E9Cu;
    // 7F313E9C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313EA0:
    ctx->pc = 0x7F313EA0u;
    // 7F313EA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F313EA4:
    ctx->pc = 0x7F313EA4u;
    // 7F313EA4: addi    r4, r4, -26424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26424);

label_7F313EA8:
    ctx->pc = 0x7F313EA8u;
    // 7F313EA8: li      r5, 103
    ctx->gpr[5] = (u32)(s32)(103);

label_7F313EAC:
    ctx->pc = 0x7F313EACu;
    // 7F313EAC: divw   r0, r7, r8
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F313EB0:
    ctx->pc = 0x7F313EB0u;
    // 7F313EB0: divw   r9, r10, r6
    {
        s32 dividend = (s32)ctx->gpr[10];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F313EB4:
    ctx->pc = 0x7F313EB4u;
    // 7F313EB4: mullw   r6, r0, r8
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[6] = (u32)product;
    }

label_7F313EB8:
    ctx->pc = 0x7F313EB8u;
    // 7F313EB8: stw     r9, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F313EBC:
    ctx->pc = 0x7F313EBCu;
    // 7F313EBC: mullw   r0, r7, r8
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[0] = (u32)product;
    }

label_7F313EC0:
    ctx->pc = 0x7F313EC0u;
    // 7F313EC0: subf   r6, r6, r7
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F313EC4:
    ctx->pc = 0x7F313EC4u;
    // 7F313EC4: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F313EC8:
    ctx->pc = 0x7F313EC8u;
    // 7F313EC8: subf   r0, r0, r10
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F313ECC:
    ctx->pc = 0x7F313ECCu;
    // 7F313ECC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313ED0:
    ctx->pc = 0x7F313ED0u;
    // 7F313ED0: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313ED4:
    ctx->pc = 0x7F313ED4u;
    // 7F313ED4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313ED8:
    ctx->pc = 0x7F313ED8u;
    // 7F313ED8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313EDC:
    ctx->pc = 0x7F313EDCu;
    // 7F313EDC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313EE0:
    ctx->pc = 0x7F313EE0u;
    // 7F313EE0: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313EE4:
    ctx->pc = 0x7F313EE4u;
    // 7F313EE4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313EE8:
    ctx->pc = 0x7F313EE8u;
    // 7F313EE8: lha     r0, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F313EEC:
    ctx->pc = 0x7F313EECu;
    // 7F313EEC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F313EF0:
    ctx->pc = 0x7F313EF0u;
    // 7F313EF0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313EF4:
    ctx->pc = 0x7F313EF4u;
    // 7F313EF4: lbz     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F313EF8:
    ctx->pc = 0x7F313EF8u;
    // 7F313EF8: lbz     r7, 16610(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16610);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F313EFC:
    ctx->pc = 0x7F313EFCu;
    // 7F313EFC: lhz     r8, 16612(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16612);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_7F313F00:
    ctx->pc = 0x7F313F00u;
    // 7F313F00: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F313F04:
    ctx->pc = 0x7F313F04u;
    // 7F313F04: lbz     r9, 16614(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16614);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F313F08:
    ctx->pc = 0x7F313F08u;
    // 7F313F08: lbz     r10, 16615(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16615);
        ctx->gpr[10] = mem_read8(ctx, ea);
    }

label_7F313F0C:
    ctx->pc = 0x7F313F0Cu;
    // 7F313F0C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F313F10:
    ctx->pc = 0x7F313F10u;
    // 7F313F10: bl      0x8001258C
    {
            ctx->lr = 0x7F313F14u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F313F14:
    ctx->pc = 0x7F313F14u;
    ctx->downcount -= 16;
    // 7F313F14: lmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F313F18:
    ctx->pc = 0x7F313F18u;
    // 7F313F18: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313F1C:
    ctx->pc = 0x7F313F1Cu;
    // 7F313F1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313F20:
    ctx->pc = 0x7F313F20u;
    // 7F313F20: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F313F24:
    ctx->pc = 0x7F313F24u;
    // 7F313F24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313F28:
    ctx->pc = 0x7F313F28u;
    ctx->downcount -= 16;
    // 7F313F28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313F2C:
    ctx->pc = 0x7F313F2Cu;
    // 7F313F2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313F30:
    ctx->pc = 0x7F313F30u;
    // 7F313F30: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313F34:
    ctx->pc = 0x7F313F34u;
    // 7F313F34: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F313F38:
    ctx->pc = 0x7F313F38u;
    // 7F313F38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313F3C:
    ctx->pc = 0x7F313F3Cu;
    // 7F313F3C: addi    r4, r3, -26376
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26376);

label_7F313F40:
    ctx->pc = 0x7F313F40u;
    // 7F313F40: addi    r3, r6, 16416
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(16416);

label_7F313F44:
    ctx->pc = 0x7F313F44u;
    // 7F313F44: lbz     r0, 16394(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16394);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F313F48:
    ctx->pc = 0x7F313F48u;
    // 7F313F48: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F313F4C:
    ctx->pc = 0x7F313F4Cu;
    // 7F313F4C: mulli   r5, r0, 108
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F313F50:
    ctx->pc = 0x7F313F50u;
    // 7F313F50: addi    r5, r5, 136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(136);

label_7F313F54:
    ctx->pc = 0x7F313F54u;
    // 7F313F54: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F313F58:
    ctx->pc = 0x7F313F58u;
    // 7F313F58: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F313F5C:
    ctx->pc = 0x7F313F5Cu;
    // 7F313F5C: bl      0x8001258C
    {
            ctx->lr = 0x7F313F60u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F313F60:
    ctx->pc = 0x7F313F60u;
    ctx->downcount -= 5;
    // 7F313F60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F313F64:
    ctx->pc = 0x7F313F64u;
    // 7F313F64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F313F68:
    ctx->pc = 0x7F313F68u;
    // 7F313F68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F313F6C:
    ctx->pc = 0x7F313F6Cu;
    // 7F313F6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F313F70:
    ctx->pc = 0x7F313F70u;
    ctx->downcount -= 19;
    // 7F313F70: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F313F74:
    ctx->pc = 0x7F313F74u;
    // 7F313F74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F313F78:
    ctx->pc = 0x7F313F78u;
    // 7F313F78: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F313F7C:
    ctx->pc = 0x7F313F7Cu;
    // 7F313F7C: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F313F80:
    ctx->pc = 0x7F313F80u;
    // 7F313F80: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F313F84:
    ctx->pc = 0x7F313F84u;
    // 7F313F84: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F313F88:
    ctx->pc = 0x7F313F88u;
    // 7F313F88: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F313F8C:
    ctx->pc = 0x7F313F8Cu;
    // 7F313F8C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F313F90:
    ctx->pc = 0x7F313F90u;
    // 7F313F90: bl      0x80024A8C
    {
            ctx->lr = 0x7F313F94u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F313F94:
    ctx->pc = 0x7F313F94u;
    ctx->downcount -= 2;
    // 7F313F94: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F313F98:
    ctx->pc = 0x7F313F98u;
    // 7F313F98: bl      0x80024CAC
    {
            ctx->lr = 0x7F313F9Cu;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F313F9C:
    ctx->pc = 0x7F313F9Cu;
    ctx->downcount -= 2;
    // 7F313F9C: cmpwi   r29, 1
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

label_7F313FA0:
    ctx->pc = 0x7F313FA0u;
    // 7F313FA0: bc    12, 2, 0x7F314040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F314040;
        }
    }

label_7F313FA4:
    ctx->pc = 0x7F313FA4u;
    ctx->downcount -= 1;
    // 7F313FA4: bc    4, 0, 0x7F31406C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31406C;
        }
    }

label_7F313FA8:
    ctx->pc = 0x7F313FA8u;
    ctx->downcount -= 2;
    // 7F313FA8: cmpwi   r29, 0
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

label_7F313FAC:
    ctx->pc = 0x7F313FACu;
    // 7F313FAC: bc    4, 0, 0x7F313FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313FB4;
        }
    }

label_7F313FB0:
    ctx->pc = 0x7F313FB0u;
    ctx->downcount -= 1;
    // 7F313FB0: b       0x7F31406C
    {
            goto label_7F31406C;
    }

label_7F313FB4:
    ctx->pc = 0x7F313FB4u;
    ctx->downcount -= 5;
    // 7F313FB4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313FB8:
    ctx->pc = 0x7F313FB8u;
    // 7F313FB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F313FBC:
    ctx->pc = 0x7F313FBCu;
    // 7F313FBC: addi    r4, r4, -26372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26372);

label_7F313FC0:
    ctx->pc = 0x7F313FC0u;
    // 7F313FC0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F313FC4:
    ctx->pc = 0x7F313FC4u;
    // 7F313FC4: bl      0x8001258C
    {
            ctx->lr = 0x7F313FC8u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F313FC8:
    ctx->pc = 0x7F313FC8u;
    ctx->downcount -= 49;
    // 7F313FC8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F313FCC:
    ctx->pc = 0x7F313FCCu;
    // 7F313FCC: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F313FD0:
    ctx->pc = 0x7F313FD0u;
    // 7F313FD0: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F313FD4:
    ctx->pc = 0x7F313FD4u;
    // 7F313FD4: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F313FD8:
    ctx->pc = 0x7F313FD8u;
    // 7F313FD8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F313FDC:
    ctx->pc = 0x7F313FDCu;
    // 7F313FDC: addi    r12, r3, 32319
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(32319);

label_7F313FE0:
    ctx->pc = 0x7F313FE0u;
    // 7F313FE0: lwz     r3, 352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F313FE4:
    ctx->pc = 0x7F313FE4u;
    // 7F313FE4: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F313FE8:
    ctx->pc = 0x7F313FE8u;
    // 7F313FE8: cmpw    r0, r12
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[12]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F313FEC:
    ctx->pc = 0x7F313FECu;
    // 7F313FEC: bc    4, 0, 0x7F313FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F313FF4;
        }
    }

label_7F313FF0:
    ctx->pc = 0x7F313FF0u;
    ctx->downcount -= 1;
    // 7F313FF0: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F313FF4:
    ctx->pc = 0x7F313FF4u;
    ctx->downcount -= 143;
    // 7F313FF4: li      r10, 60
    ctx->gpr[10] = (u32)(s32)(60);

label_7F313FF8:
    ctx->pc = 0x7F313FF8u;
    // 7F313FF8: lwz     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F313FFC:
    ctx->pc = 0x7F313FFCu;
    // 7F313FFC: divw   r9, r12, r10
    {
        s32 dividend = (s32)ctx->gpr[12];
        s32 divisor = (s32)ctx->gpr[10];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F314000:
    ctx->pc = 0x7F314000u;
    // 7F314000: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F314004:
    ctx->pc = 0x7F314004u;
    // 7F314004: li      r11, 3600
    ctx->gpr[11] = (u32)(s32)(3600);

label_7F314008:
    ctx->pc = 0x7F314008u;
    // 7F314008: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31400C:
    ctx->pc = 0x7F31400Cu;
    // 7F31400C: lwz     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F314010:
    ctx->pc = 0x7F314010u;
    // 7F314010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F314014:
    ctx->pc = 0x7F314014u;
    // 7F314014: divw   r0, r9, r10
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[10];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F314018:
    ctx->pc = 0x7F314018u;
    // 7F314018: addi    r4, r4, -26344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26344);

label_7F31401C:
    ctx->pc = 0x7F31401Cu;
    // 7F31401C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F314020:
    ctx->pc = 0x7F314020u;
    // 7F314020: mullw   r8, r0, r10
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[10];
        ctx->gpr[8] = (u32)product;
    }

label_7F314024:
    ctx->pc = 0x7F314024u;
    // 7F314024: mullw   r0, r9, r10
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[10];
        ctx->gpr[0] = (u32)product;
    }

label_7F314028:
    ctx->pc = 0x7F314028u;
    // 7F314028: subf   r9, r8, r9
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_7F31402C:
    ctx->pc = 0x7F31402Cu;
    // 7F31402C: divw   r8, r12, r11
    {
        s32 dividend = (s32)ctx->gpr[12];
        s32 divisor = (s32)ctx->gpr[11];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F314030:
    ctx->pc = 0x7F314030u;
    // 7F314030: subf   r10, r0, r12
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[12];
        u32 res = a + b + 1u;
        ctx->gpr[10] = res;
    }

label_7F314034:
    ctx->pc = 0x7F314034u;
    // 7F314034: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F314038:
    ctx->pc = 0x7F314038u;
    // 7F314038: bl      0x8001258C
    {
            ctx->lr = 0x7F31403Cu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F31403C:
    ctx->pc = 0x7F31403Cu;
    ctx->downcount -= 1;
    // 7F31403C: b       0x7F31406C
    {
            goto label_7F31406C;
    }

label_7F314040:
    ctx->pc = 0x7F314040u;
    ctx->downcount -= 5;
    // 7F314040: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F314044:
    ctx->pc = 0x7F314044u;
    // 7F314044: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F314048:
    ctx->pc = 0x7F314048u;
    // 7F314048: addi    r4, r4, -26312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26312);

label_7F31404C:
    ctx->pc = 0x7F31404Cu;
    // 7F31404C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F314050:
    ctx->pc = 0x7F314050u;
    // 7F314050: bl      0x8001258C
    {
            ctx->lr = 0x7F314054u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F314054:
    ctx->pc = 0x7F314054u;
    ctx->downcount -= 6;
    // 7F314054: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F314058:
    ctx->pc = 0x7F314058u;
    // 7F314058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31405C:
    ctx->pc = 0x7F31405Cu;
    // 7F31405C: addi    r4, r4, -26284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26284);

label_7F314060:
    ctx->pc = 0x7F314060u;
    // 7F314060: addi    r5, r30, 3
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(3);

label_7F314064:
    ctx->pc = 0x7F314064u;
    // 7F314064: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F314068:
    ctx->pc = 0x7F314068u;
    // 7F314068: bl      0x8001258C
    {
            ctx->lr = 0x7F31406Cu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F31406C:
    ctx->pc = 0x7F31406Cu;
    ctx->downcount -= 16;
    // 7F31406C: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F314070:
    ctx->pc = 0x7F314070u;
    // 7F314070: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F314074:
    ctx->pc = 0x7F314074u;
    // 7F314074: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F314078:
    ctx->pc = 0x7F314078u;
    // 7F314078: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F31407C:
    ctx->pc = 0x7F31407Cu;
    // 7F31407C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F314080:
    ctx->pc = 0x7F314080u;
    ctx->downcount -= 2;
    // 7F314080: cmpwi   r3, 30
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F314084:
    ctx->pc = 0x7F314084u;
    // 7F314084: bc    12, 2, 0x7F3140D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3140D4;
        }
    }

label_7F314088:
    ctx->pc = 0x7F314088u;
    ctx->downcount -= 1;
    // 7F314088: bc    4, 0, 0x7F3140A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3140A4;
        }
    }

label_7F31408C:
    ctx->pc = 0x7F31408Cu;
    ctx->downcount -= 2;
    // 7F31408C: cmpwi   r3, 20
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F314090:
    ctx->pc = 0x7F314090u;
    // 7F314090: bc    12, 2, 0x7F3140C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3140C8;
        }
    }

label_7F314094:
    ctx->pc = 0x7F314094u;
    ctx->downcount -= 1;
    // 7F314094: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F314098:
    ctx->pc = 0x7F314098u;
    ctx->downcount -= 2;
    // 7F314098: cmpwi   r3, 10
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31409C:
    ctx->pc = 0x7F31409Cu;
    // 7F31409C: bc    12, 2, 0x7F3140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3140BC;
        }
    }

label_7F3140A0:
    ctx->pc = 0x7F3140A0u;
    ctx->downcount -= 1;
    // 7F3140A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140A4:
    ctx->pc = 0x7F3140A4u;
    ctx->downcount -= 2;
    // 7F3140A4: cmpwi   r3, 50
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3140A8:
    ctx->pc = 0x7F3140A8u;
    // 7F3140A8: bc    12, 2, 0x7F3140EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3140ECu;
            return;
        }
    }

label_7F3140AC:
    ctx->pc = 0x7F3140ACu;
    ctx->downcount -= 1;
    // 7F3140AC: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140B0:
    ctx->pc = 0x7F3140B0u;
    ctx->downcount -= 2;
    // 7F3140B0: cmpwi   r3, 40
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3140B4:
    ctx->pc = 0x7F3140B4u;
    // 7F3140B4: bc    12, 2, 0x7F3140E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3140E0;
        }
    }

label_7F3140B8:
    ctx->pc = 0x7F3140B8u;
    ctx->downcount -= 1;
    // 7F3140B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140BC:
    ctx->pc = 0x7F3140BCu;
    ctx->downcount -= 3;
    // 7F3140BC: li      r0, 86
    ctx->gpr[0] = (u32)(s32)(86);

label_7F3140C0:
    ctx->pc = 0x7F3140C0u;
    // 7F3140C0: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3140C4:
    ctx->pc = 0x7F3140C4u;
    // 7F3140C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140C8:
    ctx->pc = 0x7F3140C8u;
    ctx->downcount -= 3;
    // 7F3140C8: li      r0, 69
    ctx->gpr[0] = (u32)(s32)(69);

label_7F3140CC:
    ctx->pc = 0x7F3140CCu;
    // 7F3140CC: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3140D0:
    ctx->pc = 0x7F3140D0u;
    // 7F3140D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140D4:
    ctx->pc = 0x7F3140D4u;
    ctx->downcount -= 3;
    // 7F3140D4: li      r0, 78
    ctx->gpr[0] = (u32)(s32)(78);

label_7F3140D8:
    ctx->pc = 0x7F3140D8u;
    // 7F3140D8: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3140DC:
    ctx->pc = 0x7F3140DCu;
    // 7F3140DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

label_7F3140E0:
    ctx->pc = 0x7F3140E0u;
    ctx->downcount -= 3;
    // 7F3140E0: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F3140E4:
    ctx->pc = 0x7F3140E4u;
    // 7F3140E4: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3140E8:
    ctx->pc = 0x7F3140E8u;
    // 7F3140E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3100EC;
        }
    }

    ctx->pc = 0x7F3140ECu;
    return;
return_dispatch_7F3100EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F31012Cu: goto label_7F31012C;
    case 0x7F31015Cu: goto label_7F31015C;
    case 0x7F310184u: goto label_7F310184;
    case 0x7F3101B4u: goto label_7F3101B4;
    case 0x7F31020Cu: goto label_7F31020C;
    case 0x7F310224u: goto label_7F310224;
    case 0x7F31024Cu: goto label_7F31024C;
    case 0x7F310270u: goto label_7F310270;
    case 0x7F310288u: goto label_7F310288;
    case 0x7F3102B0u: goto label_7F3102B0;
    case 0x7F3102CCu: goto label_7F3102CC;
    case 0x7F3102ECu: goto label_7F3102EC;
    case 0x7F3102F4u: goto label_7F3102F4;
    case 0x7F310318u: goto label_7F310318;
    case 0x7F31032Cu: goto label_7F31032C;
    case 0x7F31035Cu: goto label_7F31035C;
    case 0x7F31037Cu: goto label_7F31037C;
    case 0x7F3103A4u: goto label_7F3103A4;
    case 0x7F3103BCu: goto label_7F3103BC;
    case 0x7F3103D4u: goto label_7F3103D4;
    case 0x7F310474u: goto label_7F310474;
    case 0x7F31048Cu: goto label_7F31048C;
    case 0x7F3104BCu: goto label_7F3104BC;
    case 0x7F3104E0u: goto label_7F3104E0;
    case 0x7F3104F8u: goto label_7F3104F8;
    case 0x7F310520u: goto label_7F310520;
    case 0x7F31053Cu: goto label_7F31053C;
    case 0x7F31054Cu: goto label_7F31054C;
    case 0x7F310554u: goto label_7F310554;
    case 0x7F3105F0u: goto label_7F3105F0;
    case 0x7F310608u: goto label_7F310608;
    case 0x7F310620u: goto label_7F310620;
    case 0x7F310648u: goto label_7F310648;
    case 0x7F310660u: goto label_7F310660;
    case 0x7F310668u: goto label_7F310668;
    case 0x7F3107B4u: goto label_7F3107B4;
    case 0x7F3107C4u: goto label_7F3107C4;
    case 0x7F3108E4u: goto label_7F3108E4;
    case 0x7F3108F4u: goto label_7F3108F4;
    case 0x7F310904u: goto label_7F310904;
    case 0x7F310978u: goto label_7F310978;
    case 0x7F3109DCu: goto label_7F3109DC;
    case 0x7F310A40u: goto label_7F310A40;
    case 0x7F310A58u: goto label_7F310A58;
    case 0x7F310A60u: goto label_7F310A60;
    case 0x7F310A68u: goto label_7F310A68;
    case 0x7F310A70u: goto label_7F310A70;
    case 0x7F310A78u: goto label_7F310A78;
    case 0x7F310AA0u: goto label_7F310AA0;
    case 0x7F310AA8u: goto label_7F310AA8;
    case 0x7F310AE4u: goto label_7F310AE4;
    case 0x7F310AFCu: goto label_7F310AFC;
    case 0x7F310B18u: goto label_7F310B18;
    case 0x7F310B30u: goto label_7F310B30;
    case 0x7F310B60u: goto label_7F310B60;
    case 0x7F310B68u: goto label_7F310B68;
    case 0x7F310B78u: goto label_7F310B78;
    case 0x7F310BA4u: goto label_7F310BA4;
    case 0x7F310BB0u: goto label_7F310BB0;
    case 0x7F310BC8u: goto label_7F310BC8;
    case 0x7F310BD4u: goto label_7F310BD4;
    case 0x7F310BE0u: goto label_7F310BE0;
    case 0x7F310BECu: goto label_7F310BEC;
    case 0x7F310C18u: goto label_7F310C18;
    case 0x7F310C20u: goto label_7F310C20;
    case 0x7F310C50u: goto label_7F310C50;
    case 0x7F310CBCu: goto label_7F310CBC;
    case 0x7F310D90u: goto label_7F310D90;
    case 0x7F310DA0u: goto label_7F310DA0;
    case 0x7F310DA8u: goto label_7F310DA8;
    case 0x7F310DE0u: goto label_7F310DE0;
    case 0x7F310DECu: goto label_7F310DEC;
    case 0x7F310F20u: goto label_7F310F20;
    case 0x7F310F28u: goto label_7F310F28;
    case 0x7F310F34u: goto label_7F310F34;
    case 0x7F310F3Cu: goto label_7F310F3C;
    case 0x7F310FE0u: goto label_7F310FE0;
    case 0x7F3110A8u: goto label_7F3110A8;
    case 0x7F311110u: goto label_7F311110;
    case 0x7F31112Cu: goto label_7F31112C;
    case 0x7F311148u: goto label_7F311148;
    case 0x7F311150u: goto label_7F311150;
    case 0x7F311160u: goto label_7F311160;
    case 0x7F3112BCu: goto label_7F3112BC;
    case 0x7F3112D4u: goto label_7F3112D4;
    case 0x7F3112F0u: goto label_7F3112F0;
    case 0x7F311308u: goto label_7F311308;
    case 0x7F311310u: goto label_7F311310;
    case 0x7F311354u: goto label_7F311354;
    case 0x7F31136Cu: goto label_7F31136C;
    case 0x7F311384u: goto label_7F311384;
    case 0x7F3113A0u: goto label_7F3113A0;
    case 0x7F3113B8u: goto label_7F3113B8;
    case 0x7F3113D0u: goto label_7F3113D0;
    case 0x7F3113ECu: goto label_7F3113EC;
    case 0x7F311404u: goto label_7F311404;
    case 0x7F31141Cu: goto label_7F31141C;
    case 0x7F31144Cu: goto label_7F31144C;
    case 0x7F311454u: goto label_7F311454;
    case 0x7F31145Cu: goto label_7F31145C;
    case 0x7F311474u: goto label_7F311474;
    case 0x7F311488u: goto label_7F311488;
    case 0x7F31149Cu: goto label_7F31149C;
    case 0x7F3114BCu: goto label_7F3114BC;
    case 0x7F3114E4u: goto label_7F3114E4;
    case 0x7F311518u: goto label_7F311518;
    case 0x7F311524u: goto label_7F311524;
    case 0x7F31152Cu: goto label_7F31152C;
    case 0x7F311594u: goto label_7F311594;
    case 0x7F3115C4u: goto label_7F3115C4;
    case 0x7F3115E4u: goto label_7F3115E4;
    case 0x7F311614u: goto label_7F311614;
    case 0x7F311634u: goto label_7F311634;
    case 0x7F311674u: goto label_7F311674;
    case 0x7F311680u: goto label_7F311680;
    case 0x7F311694u: goto label_7F311694;
    case 0x7F3116F8u: goto label_7F3116F8;
    case 0x7F3117B0u: goto label_7F3117B0;
    case 0x7F3117E4u: goto label_7F3117E4;
    case 0x7F311920u: goto label_7F311920;
    case 0x7F311938u: goto label_7F311938;
    case 0x7F311950u: goto label_7F311950;
    case 0x7F3119A0u: goto label_7F3119A0;
    case 0x7F3119BCu: goto label_7F3119BC;
    case 0x7F311A04u: goto label_7F311A04;
    case 0x7F311A54u: goto label_7F311A54;
    case 0x7F311A60u: goto label_7F311A60;
    case 0x7F311A70u: goto label_7F311A70;
    case 0x7F311A78u: goto label_7F311A78;
    case 0x7F311A88u: goto label_7F311A88;
    case 0x7F311A90u: goto label_7F311A90;
    case 0x7F311AA0u: goto label_7F311AA0;
    case 0x7F311AACu: goto label_7F311AAC;
    case 0x7F311AB4u: goto label_7F311AB4;
    case 0x7F311ABCu: goto label_7F311ABC;
    case 0x7F311AD0u: goto label_7F311AD0;
    case 0x7F311AE4u: goto label_7F311AE4;
    case 0x7F311AF8u: goto label_7F311AF8;
    case 0x7F311B04u: goto label_7F311B04;
    case 0x7F311B18u: goto label_7F311B18;
    case 0x7F311B4Cu: goto label_7F311B4C;
    case 0x7F311BA0u: goto label_7F311BA0;
    case 0x7F311BB4u: goto label_7F311BB4;
    case 0x7F311BC8u: goto label_7F311BC8;
    case 0x7F311BDCu: goto label_7F311BDC;
    case 0x7F311BF0u: goto label_7F311BF0;
    case 0x7F311C04u: goto label_7F311C04;
    case 0x7F311C18u: goto label_7F311C18;
    case 0x7F311C30u: goto label_7F311C30;
    case 0x7F311C48u: goto label_7F311C48;
    case 0x7F311C60u: goto label_7F311C60;
    case 0x7F311C78u: goto label_7F311C78;
    case 0x7F311C90u: goto label_7F311C90;
    case 0x7F311CA8u: goto label_7F311CA8;
    case 0x7F311CC0u: goto label_7F311CC0;
    case 0x7F311CD8u: goto label_7F311CD8;
    case 0x7F311CF0u: goto label_7F311CF0;
    case 0x7F311D08u: goto label_7F311D08;
    case 0x7F311D20u: goto label_7F311D20;
    case 0x7F311D38u: goto label_7F311D38;
    case 0x7F311D58u: goto label_7F311D58;
    case 0x7F311DA0u: goto label_7F311DA0;
    case 0x7F311DACu: goto label_7F311DAC;
    case 0x7F311DC0u: goto label_7F311DC0;
    case 0x7F311DDCu: goto label_7F311DDC;
    case 0x7F311DE0u: goto label_7F311DE0;
    case 0x7F311DE8u: goto label_7F311DE8;
    case 0x7F311E04u: goto label_7F311E04;
    case 0x7F311E20u: goto label_7F311E20;
    case 0x7F311E3Cu: goto label_7F311E3C;
    case 0x7F311E44u: goto label_7F311E44;
    case 0x7F311E4Cu: goto label_7F311E4C;
    case 0x7F311E5Cu: goto label_7F311E5C;
    case 0x7F311E6Cu: goto label_7F311E6C;
    case 0x7F311EC0u: goto label_7F311EC0;
    case 0x7F311EE0u: goto label_7F311EE0;
    case 0x7F311F14u: goto label_7F311F14;
    case 0x7F311F1Cu: goto label_7F311F1C;
    case 0x7F311F3Cu: goto label_7F311F3C;
    case 0x7F311F70u: goto label_7F311F70;
    case 0x7F311F88u: goto label_7F311F88;
    case 0x7F311FA8u: goto label_7F311FA8;
    case 0x7F311FDCu: goto label_7F311FDC;
    case 0x7F311FF4u: goto label_7F311FF4;
    case 0x7F311FFCu: goto label_7F311FFC;
    case 0x7F312000u: goto label_7F312000;
    case 0x7F312018u: goto label_7F312018;
    case 0x7F31202Cu: goto label_7F31202C;
    case 0x7F312034u: goto label_7F312034;
    case 0x7F312044u: goto label_7F312044;
    case 0x7F312050u: goto label_7F312050;
    case 0x7F31205Cu: goto label_7F31205C;
    case 0x7F31207Cu: goto label_7F31207C;
    case 0x7F312084u: goto label_7F312084;
    case 0x7F3120D4u: goto label_7F3120D4;
    case 0x7F3120E8u: goto label_7F3120E8;
    case 0x7F312134u: goto label_7F312134;
    case 0x7F3122CCu: goto label_7F3122CC;
    case 0x7F312310u: goto label_7F312310;
    case 0x7F312318u: goto label_7F312318;
    case 0x7F31235Cu: goto label_7F31235C;
    case 0x7F3123A4u: goto label_7F3123A4;
    case 0x7F3123D8u: goto label_7F3123D8;
    case 0x7F312410u: goto label_7F312410;
    case 0x7F3124A8u: goto label_7F3124A8;
    case 0x7F312560u: goto label_7F312560;
    case 0x7F3125CCu: goto label_7F3125CC;
    case 0x7F312650u: goto label_7F312650;
    case 0x7F312674u: goto label_7F312674;
    case 0x7F3126A8u: goto label_7F3126A8;
    case 0x7F3126C0u: goto label_7F3126C0;
    case 0x7F312708u: goto label_7F312708;
    case 0x7F312744u: goto label_7F312744;
    case 0x7F31278Cu: goto label_7F31278C;
    case 0x7F312798u: goto label_7F312798;
    case 0x7F3127C8u: goto label_7F3127C8;
    case 0x7F3127F0u: goto label_7F3127F0;
    case 0x7F312834u: goto label_7F312834;
    case 0x7F312840u: goto label_7F312840;
    case 0x7F312878u: goto label_7F312878;
    case 0x7F3128DCu: goto label_7F3128DC;
    case 0x7F312918u: goto label_7F312918;
    case 0x7F312968u: goto label_7F312968;
    case 0x7F312980u: goto label_7F312980;
    case 0x7F3129ECu: goto label_7F3129EC;
    case 0x7F312A08u: goto label_7F312A08;
    case 0x7F312A58u: goto label_7F312A58;
    case 0x7F312A70u: goto label_7F312A70;
    case 0x7F312A88u: goto label_7F312A88;
    case 0x7F312B00u: goto label_7F312B00;
    case 0x7F312B44u: goto label_7F312B44;
    case 0x7F312BACu: goto label_7F312BAC;
    case 0x7F312C0Cu: goto label_7F312C0C;
    case 0x7F312C8Cu: goto label_7F312C8C;
    case 0x7F312CA4u: goto label_7F312CA4;
    case 0x7F312CF4u: goto label_7F312CF4;
    case 0x7F312D1Cu: goto label_7F312D1C;
    case 0x7F312D24u: goto label_7F312D24;
    case 0x7F312D2Cu: goto label_7F312D2C;
    case 0x7F312D38u: goto label_7F312D38;
    case 0x7F312D5Cu: goto label_7F312D5C;
    case 0x7F312D98u: goto label_7F312D98;
    case 0x7F312DC4u: goto label_7F312DC4;
    case 0x7F312DE0u: goto label_7F312DE0;
    case 0x7F312DE8u: goto label_7F312DE8;
    case 0x7F312E00u: goto label_7F312E00;
    case 0x7F312E24u: goto label_7F312E24;
    case 0x7F312E38u: goto label_7F312E38;
    case 0x7F312E50u: goto label_7F312E50;
    case 0x7F312E78u: goto label_7F312E78;
    case 0x7F312E84u: goto label_7F312E84;
    case 0x7F312EA0u: goto label_7F312EA0;
    case 0x7F312EE8u: goto label_7F312EE8;
    case 0x7F312F2Cu: goto label_7F312F2C;
    case 0x7F312F50u: goto label_7F312F50;
    case 0x7F312F70u: goto label_7F312F70;
    case 0x7F312F9Cu: goto label_7F312F9C;
    case 0x7F312FB8u: goto label_7F312FB8;
    case 0x7F312FCCu: goto label_7F312FCC;
    case 0x7F312FE4u: goto label_7F312FE4;
    case 0x7F312FF0u: goto label_7F312FF0;
    case 0x7F313070u: goto label_7F313070;
    case 0x7F313130u: goto label_7F313130;
    case 0x7F3131D4u: goto label_7F3131D4;
    case 0x7F3131F0u: goto label_7F3131F0;
    case 0x7F313254u: goto label_7F313254;
    case 0x7F31326Cu: goto label_7F31326C;
    case 0x7F31327Cu: goto label_7F31327C;
    case 0x7F313290u: goto label_7F313290;
    case 0x7F3132B4u: goto label_7F3132B4;
    case 0x7F3132C0u: goto label_7F3132C0;
    case 0x7F3133A0u: goto label_7F3133A0;
    case 0x7F3133B0u: goto label_7F3133B0;
    case 0x7F3133B4u: goto label_7F3133B4;
    case 0x7F31344Cu: goto label_7F31344C;
    case 0x7F313458u: goto label_7F313458;
    case 0x7F313504u: goto label_7F313504;
    case 0x7F313514u: goto label_7F313514;
    case 0x7F31352Cu: goto label_7F31352C;
    case 0x7F31353Cu: goto label_7F31353C;
    case 0x7F313550u: goto label_7F313550;
    case 0x7F313560u: goto label_7F313560;
    case 0x7F313570u: goto label_7F313570;
    case 0x7F31357Cu: goto label_7F31357C;
    case 0x7F313590u: goto label_7F313590;
    case 0x7F3135A0u: goto label_7F3135A0;
    case 0x7F3135BCu: goto label_7F3135BC;
    case 0x7F313688u: goto label_7F313688;
    case 0x7F3136ACu: goto label_7F3136AC;
    case 0x7F3136C0u: goto label_7F3136C0;
    case 0x7F3136D0u: goto label_7F3136D0;
    case 0x7F3136D8u: goto label_7F3136D8;
    case 0x7F313750u: goto label_7F313750;
    case 0x7F31378Cu: goto label_7F31378C;
    case 0x7F3137DCu: goto label_7F3137DC;
    case 0x7F3137E8u: goto label_7F3137E8;
    case 0x7F31381Cu: goto label_7F31381C;
    case 0x7F31384Cu: goto label_7F31384C;
    case 0x7F3138B0u: goto label_7F3138B0;
    case 0x7F3138F4u: goto label_7F3138F4;
    case 0x7F3138FCu: goto label_7F3138FC;
    case 0x7F31390Cu: goto label_7F31390C;
    case 0x7F313910u: goto label_7F313910;
    case 0x7F313A60u: goto label_7F313A60;
    case 0x7F313AD0u: goto label_7F313AD0;
    case 0x7F313B34u: goto label_7F313B34;
    case 0x7F313B38u: goto label_7F313B38;
    case 0x7F313B40u: goto label_7F313B40;
    case 0x7F313B58u: goto label_7F313B58;
    case 0x7F313B64u: goto label_7F313B64;
    case 0x7F313B74u: goto label_7F313B74;
    case 0x7F313B80u: goto label_7F313B80;
    case 0x7F313BD4u: goto label_7F313BD4;
    case 0x7F313BE4u: goto label_7F313BE4;
    case 0x7F313C14u: goto label_7F313C14;
    case 0x7F313C2Cu: goto label_7F313C2C;
    case 0x7F313C3Cu: goto label_7F313C3C;
    case 0x7F313C4Cu: goto label_7F313C4C;
    case 0x7F313C5Cu: goto label_7F313C5C;
    case 0x7F313C94u: goto label_7F313C94;
    case 0x7F313CA4u: goto label_7F313CA4;
    case 0x7F313CB4u: goto label_7F313CB4;
    case 0x7F313D04u: goto label_7F313D04;
    case 0x7F313D14u: goto label_7F313D14;
    case 0x7F313D18u: goto label_7F313D18;
    case 0x7F313D20u: goto label_7F313D20;
    case 0x7F313D38u: goto label_7F313D38;
    case 0x7F313D44u: goto label_7F313D44;
    case 0x7F313D54u: goto label_7F313D54;
    case 0x7F313D60u: goto label_7F313D60;
    case 0x7F313D6Cu: goto label_7F313D6C;
    case 0x7F313D7Cu: goto label_7F313D7C;
    case 0x7F313DF0u: goto label_7F313DF0;
    case 0x7F313E28u: goto label_7F313E28;
    case 0x7F313E54u: goto label_7F313E54;
    case 0x7F313E5Cu: goto label_7F313E5C;
    case 0x7F313E68u: goto label_7F313E68;
    case 0x7F313F14u: goto label_7F313F14;
    case 0x7F313F60u: goto label_7F313F60;
    case 0x7F313F94u: goto label_7F313F94;
    case 0x7F313F9Cu: goto label_7F313F9C;
    case 0x7F313FC8u: goto label_7F313FC8;
    case 0x7F31403Cu: goto label_7F31403C;
    case 0x7F314054u: goto label_7F314054;
    case 0x7F31406Cu: goto label_7F31406C;
    default: return;
    }
}

